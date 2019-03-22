#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "ffi.h"

#ifdef __cplusplus
extern "C"{
#endif

static ffi_type* itype2stype(int itype){
    switch (itype) {
    case FFI_TYPE_VOID:
        return &ffi_type_void;
    case FFI_TYPE_POINTER:
        return &ffi_type_pointer;
    case FFI_TYPE_INT:
        return &ffi_type_sint;
    case FFI_TYPE_FLOAT:
        return &ffi_type_float;
    case FFI_TYPE_DOUBLE:
        return &ffi_type_double;
    case FFI_TYPE_SINT8:
        return &ffi_type_sint8;
    case FFI_TYPE_UINT8:
        return &ffi_type_uint8;
    case FFI_TYPE_SINT16:
        return &ffi_type_sint16;
    case FFI_TYPE_UINT16:
        return &ffi_type_uint16;
    case FFI_TYPE_SINT32:
        return &ffi_type_sint32;
    case FFI_TYPE_UINT32:
        return &ffi_type_uint32;
    case FFI_TYPE_SINT64:
        return &ffi_type_sint64;
    case FFI_TYPE_UINT64:
        return &ffi_type_uint64;
    default:
        break;
    }
    return &ffi_type_void;
}

/*
  argtypes int[20]
  argvals uint64_t[20] it's should be arguments's address but store in uint64_t
 */
void ffi_call_ex(void*fn, int retype, uint64_t* retval, int argc, uint8_t* argtys, uint64_t* argvals) {
    ffi_cif cif;
    ffi_type *ffitys[20] = {0};
    void *ffivals[20] = {0};

    for (int i = 0; i < argc; i++) {
        ffitys[i] = itype2stype(argtys[i]);
        ffivals[i] = (void*)argvals[i];
    }

    ffi_type* retyp = itype2stype(retype);
    if (ffi_prep_cif(&cif, FFI_DEFAULT_ABI, argc, retyp, ffitys) == FFI_OK) {
        ffi_call(&cif, (void(*)(void))(fn), retval, ffivals);
    }
}

/*
  for variadic function call
  argtypes int[20]
  argvals uint64_t[20] it's should be arguments's address but store in uint64_t
*/
void ffi_call_var_ex(void*fn, int retype, uint64_t* retval, int fixedargc, int totalargc,
                     uint8_t* argtys, uint64_t* argvals) {
    ffi_cif cif;
    ffi_type *ffitys[20] = {0};
    void *ffivals[20] = {0};

    for (int i = 0; i < totalargc; i++) {
        ffitys[i] = itype2stype(argtys[i]);
        ffivals[i] = (void*)argvals[i];
    }

    ffi_type* retyp = itype2stype(retype);
    if (ffi_prep_cif_var(&cif, FFI_DEFAULT_ABI, fixedargc, totalargc, retyp, ffitys) == FFI_OK) {
        ffi_call(&cif, (void(*)(void))(fn), retval, ffivals);
    }
}

    void* ffi_call_var_fwd(int caller_alloc_retval, void*fn, int fixedargc, int totalargc,
                           uint8_t* argtys, uint64_t* argvals) {
        ffi_cif cif;
        uint8_t newargtys[20] = {0};
        uint64_t newargvals[20] = {0};

        void*retval = 0;
        int prepend1 = caller_alloc_retval > 0 ? 1 : 0;
        if (prepend1 == 1) {
            retval = calloc(1, caller_alloc_retval);
            newargtys[0] = FFI_TYPE_POINTER;
            newargvals[0] = (uint64_t)(void*)&retval;
        }
        for (int i = 0; i < totalargc; i++) {
            int idx = i + prepend1;
            newargtys[idx] = argtys[i];
            newargvals[idx] = argvals[i];
        }

        uint64_t oretval = 0;
        ffi_call_var_ex(fn, FFI_TYPE_POINTER, &oretval,
                        fixedargc+prepend1, totalargc+prepend1, newargtys, newargvals);
        return prepend1 == 1 ? retval : (void*)oretval;
    }

#ifdef __cplusplus
};
#endif

