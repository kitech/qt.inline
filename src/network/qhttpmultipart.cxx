//  header block begin
// since 0x040800
// /usr/include/qt/QtNetwork/qhttpmultipart.h
#ifndef protected
#define protected public
#endif
#include <qhttpmultipart.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttpMultiPart is pure virtual: false
// QHttpMultiPart has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHttpMultiPart : public QHttpMultiPart {
public:
  virtual ~MyQHttpMultiPart() {}
// void QHttpMultiPart(QObject *)
MyQHttpMultiPart(QObject * parent) : QHttpMultiPart(parent) {}
// void QHttpMultiPart(QHttpMultiPart::ContentType, QObject *)
MyQHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject * parent) : QHttpMultiPart(contentType, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:90
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QHttpMultiPart10metaObjectEv(void *this_) {
  return (void*)((QHttpMultiPart*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:101
// [-2] void QHttpMultiPart(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QHttpMultiPartC2EP7QObject(QObject * parent) {
  return  new QHttpMultiPart(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:102
// [-2] void QHttpMultiPart(QHttpMultiPart::ContentType, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QHttpMultiPartC2ENS_11ContentTypeEP7QObject(QHttpMultiPart::ContentType contentType, QObject * parent) {
  return  new QHttpMultiPart(contentType, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:103
// [-2] void ~QHttpMultiPart()
extern "C" Q_DECL_EXPORT
void C_ZN14QHttpMultiPartD2Ev(void *this_) {
  delete (QHttpMultiPart*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:107
// [-2] void setContentType(QHttpMultiPart::ContentType)
extern "C" Q_DECL_EXPORT
void C_ZN14QHttpMultiPart14setContentTypeENS_11ContentTypeE(void *this_, QHttpMultiPart::ContentType contentType) {
  ((QHttpMultiPart*)this_)->setContentType(contentType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:109
// [8] QByteArray boundary()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QHttpMultiPart8boundaryEv(void *this_) {
  auto rv = ((QHttpMultiPart*)this_)->boundary();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:110
// [-2] void setBoundary(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN14QHttpMultiPart11setBoundaryERK10QByteArray(void *this_, QByteArray* boundary) {
  ((QHttpMultiPart*)this_)->setBoundary(*boundary);
}

//  main block end
