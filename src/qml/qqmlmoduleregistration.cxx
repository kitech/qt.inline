//  header block begin

// /usr/include/qt/QtQml/qqmlmoduleregistration.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlmoduleregistration.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlModuleRegistration is pure virtual: false false
// QQmlModuleRegistration has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlModuleRegistration_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlModuleRegistration_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlModuleRegistration_t qt_meta_stringdata_MyQQmlModuleRegistration = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQQmlModuleRegistration"
  },
  "MyQQmlModuleRegistration"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlModuleRegistration[] = {
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
class Q_DECL_EXPORT MyQQmlModuleRegistration : public QQmlModuleRegistration {
public:
  virtual ~MyQQmlModuleRegistration() {}
// void QQmlModuleRegistration(const char *, int, void (*)())
MyQQmlModuleRegistration(const char * uri, int majorVersion, void (*registerFunction)()) : QQmlModuleRegistration(uri, majorVersion, registerFunction) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlmoduleregistration(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN22QQmlModuleRegistrationD2Ev(void *this_)*/ {
  delete (QQmlModuleRegistration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlmoduleregistration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
