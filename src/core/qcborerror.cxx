//  header block begin

// /usr/include/qt/QtCore/qcborcommon.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborcommon.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborError is pure virtual: false false
// QCborError has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborError_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborError_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborError_t qt_meta_stringdata_MyQCborError = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQCborError"
  },
  "MyQCborError"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborError[] = {
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
class Q_DECL_EXPORT MyQCborError : public QCborError {
public:
  virtual ~MyQCborError() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborerror(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN10QCborErrorD2Ev(void *this_)*/ {
  delete (QCborError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcborerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
