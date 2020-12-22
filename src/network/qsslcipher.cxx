//  header block begin

// /usr/include/qt/QtNetwork/qsslcipher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslcipher.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCipher is pure virtual: false false
// QSslCipher has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslCipher_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslCipher_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslCipher_t qt_meta_stringdata_MyQSslCipher = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQSslCipher"
  },
  "MyQSslCipher"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslCipher[] = {
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
class Q_DECL_EXPORT MyQSslCipher : public QSslCipher {
public:
  virtual ~MyQSslCipher() {}
// void QSslCipher()
MyQSslCipher() : QSslCipher() {}
// void QSslCipher(const QString &)
MyQSslCipher(const QString & name) : QSslCipher(name) {}
// void QSslCipher(const QString &, QSsl::SslProtocol)
MyQSslCipher(const QString & name, QSsl::SslProtocol protocol) : QSslCipher(name, protocol) {}
// void QSslCipher(const QSslCipher &)
MyQSslCipher(const QSslCipher & other) : QSslCipher(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslcipher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:58
// [-2] void QSslCipher() 
// (11)qm433337206 (19)_ZN10QSslCipherC2Ev
/*void* qm433337206()*/{
  ;
  this_ =  new QSslCipher();
  this_ =  new MyQSslCipher();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:59
// [-2] void QSslCipher(const QString &) 
// (11)qm766254657 (28)_ZN10QSslCipherC2ERK7QString
/*void* qm766254657(const QString & name)*/{
  const QString & name = *(const QString *)this_;
  this_ =  new QSslCipher(name);
  this_ =  new MyQSslCipher(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:60
// [-2] void QSslCipher(const QString &, QSsl::SslProtocol) 
// (12)qm2896178919 (48)_ZN10QSslCipherC2ERK7QStringN4QSsl11SslProtocolE
/*void* qm2896178919(const QString & name, QSsl::SslProtocol protocol)*/{
  const QString & name = *(const QString *)this_; QSsl::SslProtocol protocol = *(QSsl::SslProtocol*)this_;
  this_ =  new QSslCipher(name, protocol);
  this_ =  new MyQSslCipher(name, protocol);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:61
// [-2] void QSslCipher(const QSslCipher &) 
// (12)qm3811944110 (22)_ZN10QSslCipherC2ERKS_
/*void* qm3811944110(const QSslCipher & other)*/{
  const QSslCipher & other = *(const QSslCipher *)this_;
  this_ =  new QSslCipher(other);
  this_ =  new MyQSslCipher(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:62
// [8] QSslCipher & operator=(QSslCipher &&) 
// (11)qm681759328 (21)_ZN10QSslCipheraSEOS_
//static
/*void qm681759328(QSslCipher && other)*/ {
  QSslCipher && other =  static_cast<QSslCipher &&>(*(QSslCipher *)this_);
  (void) ((QSslCipher*)this_)->operator=(other);
  // auto xptr = (QSslCipher & (QSslCipher::*)(QSslCipher&&) ) &QSslCipher::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:66
// [-2] void swap(QSslCipher &) 
// (12)qm1125554962 (24)_ZN10QSslCipher4swapERS_
//static
/*void qm1125554962(QSslCipher & other)*/ {
  QSslCipher & other = *(QSslCipher *)this_;
  (void) ((QSslCipher*)this_)->swap(other);
   auto xptr = (void (QSslCipher::*)(QSslCipher&) ) &QSslCipher::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:70
// [1] bool operator!=(const QSslCipher &) const
// (12)qm3455788645 (23)_ZNK10QSslCipherneERKS_
//static
/*void qm3455788645(const QSslCipher & other)*/ {
  const QSslCipher & other = *(const QSslCipher *)this_;
  (void) ((QSslCipher*)this_)->operator!=(other);
  // auto xptr = (bool (QSslCipher::*)(QSslCipher const&) const ) &QSslCipher::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QSslCipherD2Ev(void *this_)*/ {
  delete (QSslCipher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslcipher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
