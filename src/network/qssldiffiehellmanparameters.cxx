//  header block begin
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h
#ifndef protected
#define protected public
#endif
#include <qssldiffiehellmanparameters.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslDiffieHellmanParameters is pure virtual: false
// QSslDiffieHellmanParameters has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslDiffieHellmanParameters : public QSslDiffieHellmanParameters {
public:
  virtual ~MyQSslDiffieHellmanParameters() {}
// void QSslDiffieHellmanParameters()
MyQSslDiffieHellmanParameters() : QSslDiffieHellmanParameters() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:82
// [8] QSslDiffieHellmanParameters defaultParameters()
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParameters17defaultParametersEv() {
  auto rv = QSslDiffieHellmanParameters::defaultParameters();
return new QSslDiffieHellmanParameters(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:84
// [-2] void QSslDiffieHellmanParameters()
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersC2Ev() {
  return  new QSslDiffieHellmanParameters();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:87
// [-2] void ~QSslDiffieHellmanParameters()
extern "C" Q_DECL_EXPORT
void C_ZN27QSslDiffieHellmanParametersD2Ev(void *this_) {
  delete (QSslDiffieHellmanParameters*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:89
// [8] QSslDiffieHellmanParameters & operator=(const class QSslDiffieHellmanParameters &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersaSERKS_(void *this_, QSslDiffieHellmanParameters* other) {
  auto& rv = ((QSslDiffieHellmanParameters*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:90
// [8] QSslDiffieHellmanParameters & operator=(class QSslDiffieHellmanParameters &&)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParametersaSEOS_(void *this_, QSslDiffieHellmanParameters && other) {
  auto& rv = ((QSslDiffieHellmanParameters*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:92
// [-2] void swap(class QSslDiffieHellmanParameters &)
extern "C" Q_DECL_EXPORT
void C_ZN27QSslDiffieHellmanParameters4swapERS_(void *this_, QSslDiffieHellmanParameters* other) {
  ((QSslDiffieHellmanParameters*)this_)->swap(*other);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:94
// [8] QSslDiffieHellmanParameters fromEncoded(const class QByteArray &, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParameters11fromEncodedERK10QByteArrayN4QSsl14EncodingFormatE(QByteArray* encoded, QSsl::EncodingFormat format) {
  auto rv = QSslDiffieHellmanParameters::fromEncoded(*encoded, format);
return new QSslDiffieHellmanParameters(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:95
// [8] QSslDiffieHellmanParameters fromEncoded(class QIODevice *, QSsl::EncodingFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN27QSslDiffieHellmanParameters11fromEncodedEP9QIODeviceN4QSsl14EncodingFormatE(QIODevice * device, QSsl::EncodingFormat format) {
  auto rv = QSslDiffieHellmanParameters::fromEncoded(device, format);
return new QSslDiffieHellmanParameters(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:97
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK27QSslDiffieHellmanParameters7isEmptyEv(void *this_) {
  return (bool)((QSslDiffieHellmanParameters*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:98
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK27QSslDiffieHellmanParameters7isValidEv(void *this_) {
  return (bool)((QSslDiffieHellmanParameters*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:99
// [4] QSslDiffieHellmanParameters::Error error()
extern "C" Q_DECL_EXPORT
QSslDiffieHellmanParameters::Error C_ZNK27QSslDiffieHellmanParameters5errorEv(void *this_) {
  return (QSslDiffieHellmanParameters::Error)((QSslDiffieHellmanParameters*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:100
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QSslDiffieHellmanParameters11errorStringEv(void *this_) {
  auto rv = ((QSslDiffieHellmanParameters*)this_)->errorString();
return new QString(rv);
}

//  main block end
