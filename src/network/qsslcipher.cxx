//  header block begin
// since 0x040300
// /usr/include/qt/QtNetwork/qsslcipher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslcipher.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCipher is pure virtual: false
// QSslCipher has virtual projected: false
//  header block end

//  main block begin

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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:58
// [-2] void QSslCipher()
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslCipherC2Ev() {
  return  new QSslCipher();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtNetwork/qsslcipher.h:59
// [-2] void QSslCipher(const QString &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslCipherC2ERK7QString(QString* name) {
  return  new QSslCipher(*name);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:60
// [-2] void QSslCipher(const QString &, QSsl::SslProtocol)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslCipherC2ERK7QStringN4QSsl11SslProtocolE(QString* name, QSsl::SslProtocol protocol) {
  return  new QSslCipher(*name, protocol);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:61
// [-2] void QSslCipher(const QSslCipher &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslCipherC2ERKS_(QSslCipher* other) {
  return  new QSslCipher(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:63
// [8] QSslCipher & operator=(QSslCipher &&)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslCipheraSEOS_(void *this_, QSslCipher && other) {
  auto& rv = ((QSslCipher*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:65
// [8] QSslCipher & operator=(const QSslCipher &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSslCipheraSERKS_(void *this_, QSslCipher* other) {
  auto& rv = ((QSslCipher*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:66
// [-2] void ~QSslCipher()
extern "C" Q_DECL_EXPORT
void C_ZN10QSslCipherD2Ev(void *this_) {
  delete (QSslCipher*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qsslcipher.h:68
// [-2] void swap(QSslCipher &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN10QSslCipher4swapERS_(void *this_, QSslCipher* other) {
  ((QSslCipher*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:71
// [1] bool operator==(const QSslCipher &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSslCiphereqERKS_(void *this_, QSslCipher* other) {
  return (bool)((QSslCipher*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:72
// [1] bool operator!=(const QSslCipher &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSslCipherneERKS_(void *this_, QSslCipher* other) {
  return (bool)((QSslCipher*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:74
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSslCipher6isNullEv(void *this_) {
  return (bool)((QSslCipher*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:75
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslCipher4nameEv(void *this_) {
  auto rv = ((QSslCipher*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:76
// [4] int supportedBits()
extern "C" Q_DECL_EXPORT
int C_ZNK10QSslCipher13supportedBitsEv(void *this_) {
  return (int)((QSslCipher*)this_)->supportedBits();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:77
// [4] int usedBits()
extern "C" Q_DECL_EXPORT
int C_ZNK10QSslCipher8usedBitsEv(void *this_) {
  return (int)((QSslCipher*)this_)->usedBits();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:79
// [8] QString keyExchangeMethod()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslCipher17keyExchangeMethodEv(void *this_) {
  auto rv = ((QSslCipher*)this_)->keyExchangeMethod();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:80
// [8] QString authenticationMethod()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslCipher20authenticationMethodEv(void *this_) {
  auto rv = ((QSslCipher*)this_)->authenticationMethod();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:81
// [8] QString encryptionMethod()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslCipher16encryptionMethodEv(void *this_) {
  auto rv = ((QSslCipher*)this_)->encryptionMethod();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:82
// [8] QString protocolString()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSslCipher14protocolStringEv(void *this_) {
  auto rv = ((QSslCipher*)this_)->protocolString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:83
// [4] QSsl::SslProtocol protocol()
extern "C" Q_DECL_EXPORT
QSsl::SslProtocol C_ZNK10QSslCipher8protocolEv(void *this_) {
  return (QSsl::SslProtocol)((QSslCipher*)this_)->protocol();
}

//  main block end
