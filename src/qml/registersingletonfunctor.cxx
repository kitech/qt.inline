//  header block begin

// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterSingletonFunctor is pure virtual: false false
// RegisterSingletonFunctor has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyRegisterSingletonFunctor_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyRegisterSingletonFunctor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyRegisterSingletonFunctor_t qt_meta_stringdata_MyRegisterSingletonFunctor = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyRegisterSingletonFunctor"
  },
  "MyRegisterSingletonFunctor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyRegisterSingletonFunctor[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyRegisterSingletonFunctor : public QQmlPrivate::RegisterSingletonFunctor {
public:
  virtual ~MyRegisterSingletonFunctor() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_registersingletonfunctor(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN24RegisterSingletonFunctorD2Ev(void *this_)*/ {
  delete (QQmlPrivate::RegisterSingletonFunctor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_registersingletonfunctor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
