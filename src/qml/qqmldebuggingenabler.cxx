//  header block begin

// /usr/include/qt/QtQml/qqmldebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmldebug.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlDebuggingEnabler is pure virtual: false false
// QQmlDebuggingEnabler has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlDebuggingEnabler_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlDebuggingEnabler_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlDebuggingEnabler_t qt_meta_stringdata_MyQQmlDebuggingEnabler = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQQmlDebuggingEnabler"
  },
  "MyQQmlDebuggingEnabler"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlDebuggingEnabler[] = {
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
class Q_DECL_EXPORT MyQQmlDebuggingEnabler : public QQmlDebuggingEnabler {
public:
  virtual ~MyQQmlDebuggingEnabler() {}
// void QQmlDebuggingEnabler(bool)
MyQQmlDebuggingEnabler(bool printWarning) : QQmlDebuggingEnabler(printWarning) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmldebuggingenabler(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN20QQmlDebuggingEnablerD2Ev(void *this_)*/ {
  delete (QQmlDebuggingEnabler*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmldebuggingenabler
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
