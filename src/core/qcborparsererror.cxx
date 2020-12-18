//  header block begin

// /usr/include/qt/QtCore/qcborvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborParserError is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborparsererror(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:81
// [8] QString errorString() const
// (12)qm4041995573 (37)_ZNK16QCborParserError11errorStringEv
//static
/*void qm4041995573()*/ {
  ;
  (void) ((QCborParserError*)this_)->errorString();
   auto xptr = (QString (QCborParserError::*)() const ) &QCborParserError::errorString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QCborParserErrorD2Ev(void *this_)*/ {
  delete (QCborParserError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcborparsererror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
