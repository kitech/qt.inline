//  header block begin

// /usr/include/qt/QtCore/qcryptographichash.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcryptographichash.h>
#include <QtCore>
#include "callback_inherit.h"

// QCryptographicHash is pure virtual: false false
// QCryptographicHash has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCryptographicHash_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCryptographicHash_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCryptographicHash_t qt_meta_stringdata_MyQCryptographicHash = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQCryptographicHash"
  },
  "MyQCryptographicHash"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCryptographicHash[] = {
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
class Q_DECL_EXPORT MyQCryptographicHash : public QCryptographicHash {
public:
  virtual ~MyQCryptographicHash() {}
// void QCryptographicHash(QCryptographicHash::Algorithm)
MyQCryptographicHash(QCryptographicHash::Algorithm method) : QCryptographicHash(method) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcryptographichash(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcryptographichash.h:92
// [-2] void QCryptographicHash(QCryptographicHash::Algorithm) 
// (9)qm6962514 (40)_ZN18QCryptographicHashC2ENS_9AlgorithmE
/*void* qm6962514(QCryptographicHash::Algorithm method)*/{
  QCryptographicHash::Algorithm method = *(QCryptographicHash::Algorithm*)this_;
  this_ =  new QCryptographicHash(method);
  this_ =  new MyQCryptographicHash(method);
}


/*void C_ZN18QCryptographicHashD2Ev(void *this_)*/ {
  delete (QCryptographicHash*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcryptographichash
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
