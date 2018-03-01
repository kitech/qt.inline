//  header block begin
// /usr/include/qt/QtNetwork/qsslerror.h
#ifndef protected
#define protected public
#endif
#include <qsslerror.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslError is pure virtual: false
// QSslError has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSslError : public QSslError {
public:
  virtual ~MyQSslError() {}
// void QSslError()
MyQSslError() : QSslError() {}
// void QSslError(enum QSslError::SslError)
MyQSslError(QSslError::SslError error) : QSslError(error) {}
// void QSslError(enum QSslError::SslError, const class QSslCertificate &)
MyQSslError(QSslError::SslError error, const QSslCertificate & certificate) : QSslError(error, certificate) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:88
// [-2] void QSslError()
extern "C" Q_DECL_EXPORT
void* C_ZN9QSslErrorC2Ev() {
  return  new QSslError();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:89
// [-2] void QSslError(enum QSslError::SslError)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSslErrorC2ENS_8SslErrorE(QSslError::SslError error) {
  return  new QSslError(error);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:90
// [-2] void QSslError(enum QSslError::SslError, const class QSslCertificate &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSslErrorC2ENS_8SslErrorERK15QSslCertificate(QSslError::SslError error, QSslCertificate* certificate) {
  return  new QSslError(error, *certificate);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:94
// [-2] void swap(class QSslError &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSslError4swapERS_(void *this_, QSslError* other) {
  ((QSslError*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:97
// [-2] void ~QSslError()
extern "C" Q_DECL_EXPORT
void C_ZN9QSslErrorD2Ev(void *this_) {
  delete (QSslError*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:99
// [8] QSslError & operator=(class QSslError &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSslErroraSEOS_(void *this_, QSslError && other) {
  auto& rv = ((QSslError*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:101
// [8] QSslError & operator=(const class QSslError &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSslErroraSERKS_(void *this_, QSslError* other) {
  auto& rv = ((QSslError*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:102
// [1] bool operator==(const class QSslError &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSslErroreqERKS_(void *this_, QSslError* other) {
  return (bool)((QSslError*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:103
// [1] bool operator!=(const class QSslError &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSslErrorneERKS_(void *this_, QSslError* other) {
  return (bool)((QSslError*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:106
// [4] QSslError::SslError error()
extern "C" Q_DECL_EXPORT
QSslError::SslError C_ZNK9QSslError5errorEv(void *this_) {
  return (QSslError::SslError)((QSslError*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:107
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSslError11errorStringEv(void *this_) {
  auto rv = ((QSslError*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:108
// [8] QSslCertificate certificate()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSslError11certificateEv(void *this_) {
  auto rv = ((QSslError*)this_)->certificate();
return new QSslCertificate(rv);
}

//  main block end
