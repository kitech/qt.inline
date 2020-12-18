//  header block begin

// /usr/include/qt/QtCore/qjsondocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsondocument.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonParseError is pure virtual: false false
// QJsonParseError has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonParseError_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonParseError_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonParseError_t qt_meta_stringdata_MyQJsonParseError = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQJsonParseError"
  },
  "MyQJsonParseError"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonParseError[] = {
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
class Q_DECL_EXPORT MyQJsonParseError : public QJsonParseError {
public:
  virtual ~MyQJsonParseError() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonparseerror(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN15QJsonParseErrorD2Ev(void *this_)*/ {
  delete (QJsonParseError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonparseerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
