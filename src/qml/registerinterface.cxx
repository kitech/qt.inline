//  header block begin

// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterInterface is pure virtual: false false
// RegisterInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyRegisterInterface_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyRegisterInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyRegisterInterface_t qt_meta_stringdata_MyRegisterInterface = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyRegisterInterface"
  },
  "MyRegisterInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyRegisterInterface[] = {
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
class Q_DECL_EXPORT MyRegisterInterface : public QQmlPrivate::RegisterInterface {
public:
  virtual ~MyRegisterInterface() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_registerinterface(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN17RegisterInterfaceD2Ev(void *this_)*/ {
  delete (QQmlPrivate::RegisterInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_registerinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
