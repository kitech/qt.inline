//  header block begin

// /usr/include/qt/QtQml/qqmlscriptstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlscriptstring.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlScriptString is pure virtual: false false
// QQmlScriptString has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlScriptString_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlScriptString_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlScriptString_t qt_meta_stringdata_MyQQmlScriptString = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQQmlScriptString"
  },
  "MyQQmlScriptString"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlScriptString[] = {
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
class Q_DECL_EXPORT MyQQmlScriptString : public QQmlScriptString {
public:
  virtual ~MyQQmlScriptString() {}
// void QQmlScriptString()
MyQQmlScriptString() : QQmlScriptString() {}
// void QQmlScriptString(const QQmlScriptString &)
MyQQmlScriptString(const QQmlScriptString & arg0) : QQmlScriptString(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlscriptstring(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN16QQmlScriptStringD2Ev(void *this_)*/ {
  delete (QQmlScriptString*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlscriptstring
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
