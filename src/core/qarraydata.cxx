//  header block begin
// /usr/include/qt/QtCore/qarraydata.h
#ifndef protected
#define protected public
#endif
#include <qarraydata.h>
#include <QtCore>
#include "callback_inherit.h"

// QArrayData is pure virtual: false
// QArrayData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQArrayData : public QArrayData {
public:
  virtual ~MyQArrayData() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:57
// [8] void * data()
extern "C" Q_DECL_EXPORT
void* C_ZN10QArrayData4dataEv(void *this_) {
  return (void*)((QArrayData*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:64
// [8] const void * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QArrayData4dataEv(void *this_) {
  return (void*)((QArrayData*)this_)->data();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:74
// [1] bool isMutable()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QArrayData9isMutableEv(void *this_) {
  return (bool)((QArrayData*)this_)->isMutable();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:92
// [8] size_t detachCapacity(size_t)
extern "C" Q_DECL_EXPORT
size_t C_ZNK10QArrayData14detachCapacityEm(void *this_, size_t newSize) {
  return (size_t)((QArrayData*)this_)->detachCapacity(newSize);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:99
// [4] QArrayData::AllocationOptions detachFlags()
extern "C" Q_DECL_EXPORT
QArrayData::AllocationOptions* C_ZNK10QArrayData11detachFlagsEv(void *this_) {
  auto rv = ((QArrayData*)this_)->detachFlags();
return new QArrayData::AllocationOptions(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:107
// [4] QArrayData::AllocationOptions cloneFlags()
extern "C" Q_DECL_EXPORT
QArrayData::AllocationOptions* C_ZNK10QArrayData10cloneFlagsEv(void *this_) {
  auto rv = ((QArrayData*)this_)->cloneFlags();
return new QArrayData::AllocationOptions(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:115
// [8] QArrayData * allocate(size_t, size_t, size_t, QArrayData::AllocationOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN10QArrayData8allocateEmmm6QFlagsINS_16AllocationOptionEE(size_t objectSize, size_t alignment, size_t capacity, QFlags<QArrayData::AllocationOption> options) {
  return (void*)QArrayData::allocate(objectSize, alignment, capacity, options);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:117
// [8] QArrayData * reallocateUnaligned(QArrayData *, size_t, size_t, QArrayData::AllocationOptions)
extern "C" Q_DECL_EXPORT
void* C_ZN10QArrayData19reallocateUnalignedEPS_mm6QFlagsINS_16AllocationOptionEE(QArrayData * data, size_t objectSize, size_t newCapacity, QFlags<QArrayData::AllocationOption> newOptions) {
  return (void*)QArrayData::reallocateUnaligned(data, objectSize, newCapacity, newOptions);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:119
// [-2] void deallocate(QArrayData *, size_t, size_t)
extern "C" Q_DECL_EXPORT
void C_ZN10QArrayData10deallocateEPS_mm(QArrayData * data, size_t objectSize, size_t alignment) {
  QArrayData::deallocate(data, objectSize, alignment);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:123
// [8] QArrayData * sharedNull()
extern "C" Q_DECL_EXPORT
void* C_ZN10QArrayData10sharedNullEv() {
  return (void*)QArrayData::sharedNull();
}


extern "C" Q_DECL_EXPORT
void C_ZN10QArrayDataD2Ev(void *this_) {
  delete (QArrayData*)(this_);
}
//  main block end
