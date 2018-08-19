//  header block begin
// since 0x040800
// /usr/include/qt/QtNetwork/qhttpmultipart.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhttpmultipart.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttpPart is pure virtual: false
// QHttpPart has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHttpPart : public QHttpPart {
public:
  virtual ~MyQHttpPart() {}
// void QHttpPart()
MyQHttpPart() : QHttpPart() {}
// void QHttpPart(const QHttpPart &)
MyQHttpPart(const QHttpPart & other) : QHttpPart(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:58
// [-2] void QHttpPart()
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartC2Ev() {
  return  new QHttpPart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:59
// [-2] void QHttpPart(const QHttpPart &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartC2ERKS_(QHttpPart* other) {
  return  new QHttpPart(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:60
// [-2] void ~QHttpPart()
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPartD2Ev(void *this_) {
  delete (QHttpPart*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:62
// [8] QHttpPart & operator=(QHttpPart &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartaSEOS_(void *this_, QHttpPart && other) {
  auto& rv = ((QHttpPart*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:64
// [8] QHttpPart & operator=(const QHttpPart &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QHttpPartaSERKS_(void *this_, QHttpPart* other) {
  auto& rv = ((QHttpPart*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qhttpmultipart.h:66
// [-2] void swap(QHttpPart &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart4swapERS_(void *this_, QHttpPart* other) {
  ((QHttpPart*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:68
// [1] bool operator==(const QHttpPart &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QHttpParteqERKS_(void *this_, QHttpPart* other) {
  return (bool)((QHttpPart*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:69
// [1] bool operator!=(const QHttpPart &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QHttpPartneERKS_(void *this_, QHttpPart* other) {
  return (bool)((QHttpPart*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:72
// [-2] void setHeader(QNetworkRequest::KnownHeaders, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart9setHeaderEN15QNetworkRequest12KnownHeadersERK8QVariant(void *this_, QNetworkRequest::KnownHeaders header, QVariant* value) {
  ((QHttpPart*)this_)->setHeader(header, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:73
// [-2] void setRawHeader(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart12setRawHeaderERK10QByteArrayS2_(void *this_, QByteArray* headerName, QByteArray* headerValue) {
  ((QHttpPart*)this_)->setRawHeader(*headerName, *headerValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:75
// [-2] void setBody(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart7setBodyERK10QByteArray(void *this_, QByteArray* body) {
  ((QHttpPart*)this_)->setBody(*body);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:76
// [-2] void setBodyDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN9QHttpPart13setBodyDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QHttpPart*)this_)->setBodyDevice(device);
}

//  main block end
