//  header block begin

// since 0x050c00
// /usr/include/qt/QtCore/qcborvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborParserError is pure virtual: false
// QCborParserError has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCborParserError_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCborParserError_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCborParserError_t qt_meta_stringdata_MyQCborParserError = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQCborParserError"
  },
  "MyQCborParserError"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCborParserError[] = {
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
class Q_DECL_EXPORT MyQCborParserError : public QCborParserError {
public:
  virtual ~MyQCborParserError() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:76
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QCborParserError11errorStringEv(void *this_) {
  auto rv = ((QCborParserError*)this_)->errorString();
return new QString(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN16QCborParserErrorD2Ev(void *this_) {
  delete (QCborParserError*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
