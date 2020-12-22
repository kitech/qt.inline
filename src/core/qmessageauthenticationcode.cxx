//  header block begin

// /usr/include/qt/QtCore/qmessageauthenticationcode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmessageauthenticationcode.h>
#include <QtCore>
#include "callback_inherit.h"

// QMessageAuthenticationCode is pure virtual: false false
// QMessageAuthenticationCode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMessageAuthenticationCode_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMessageAuthenticationCode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMessageAuthenticationCode_t qt_meta_stringdata_MyQMessageAuthenticationCode = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQMessageAuthenticationCode"
  },
  "MyQMessageAuthenticationCode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMessageAuthenticationCode[] = {
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
class Q_DECL_EXPORT MyQMessageAuthenticationCode : public QMessageAuthenticationCode {
public:
  virtual ~MyQMessageAuthenticationCode() {}
// void QMessageAuthenticationCode(QCryptographicHash::Algorithm, const QByteArray &)
MyQMessageAuthenticationCode(QCryptographicHash::Algorithm method, const QByteArray & key) : QMessageAuthenticationCode(method, key) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmessageauthenticationcode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmessageauthenticationcode.h:54
// [-2] void QMessageAuthenticationCode(QCryptographicHash::Algorithm, const QByteArray &) 
// (12)qm1253799329 (80)_ZN26QMessageAuthenticationCodeC2EN18QCryptographicHash9AlgorithmERK10QByteArray
/*void* qm1253799329(QCryptographicHash::Algorithm method, const QByteArray & key)*/{
  QCryptographicHash::Algorithm method = *(QCryptographicHash::Algorithm*)this_; const QByteArray & key = *(const QByteArray *)this_;
  this_ =  new QMessageAuthenticationCode(method, key);
  this_ =  new MyQMessageAuthenticationCode(method, key);
}


/*void C_ZN26QMessageAuthenticationCodeD2Ev(void *this_)*/ {
  delete (QMessageAuthenticationCode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmessageauthenticationcode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
