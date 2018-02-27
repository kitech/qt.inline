//  header block begin
// /usr/include/qt/QtQml/qqmlerror.h
#ifndef protected
#define protected public
#endif
#include <qqmlerror.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlError is pure virtual: false
// QQmlError has virtual projected: false
//  header block end

//  main block begin

class MyQQmlError : public QQmlError {
public:
  virtual ~MyQQmlError() {}
// void QQmlError()
MyQQmlError() : QQmlError() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:56
// [-2] void QQmlError()
extern "C"
void* C_ZN9QQmlErrorC2Ev() {
  return  new QQmlError();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:58
// [8] QQmlError & operator=(const class QQmlError &)
extern "C"
void* C_ZN9QQmlErroraSERKS_(void *this_, QQmlError* arg0) {
  auto& rv = ((QQmlError*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:59
// [-2] void ~QQmlError()
extern "C"
void C_ZN9QQmlErrorD2Ev(void *this_) {
  delete (QQmlError*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:61
// [1] bool isValid()
extern "C"
bool C_ZNK9QQmlError7isValidEv(void *this_) {
  return (bool)((QQmlError*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:63
// [8] QUrl url()
extern "C"
void* C_ZNK9QQmlError3urlEv(void *this_) {
  auto rv = ((QQmlError*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:64
// [-2] void setUrl(const class QUrl &)
extern "C"
void C_ZN9QQmlError6setUrlERK4QUrl(void *this_, QUrl* arg0) {
  ((QQmlError*)this_)->setUrl(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:65
// [8] QString description()
extern "C"
void* C_ZNK9QQmlError11descriptionEv(void *this_) {
  auto rv = ((QQmlError*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:66
// [-2] void setDescription(const class QString &)
extern "C"
void C_ZN9QQmlError14setDescriptionERK7QString(void *this_, QString* arg0) {
  ((QQmlError*)this_)->setDescription(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:67
// [4] int line()
extern "C"
int C_ZNK9QQmlError4lineEv(void *this_) {
  return (int)((QQmlError*)this_)->line();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:68
// [-2] void setLine(int)
extern "C"
void C_ZN9QQmlError7setLineEi(void *this_, int arg0) {
  ((QQmlError*)this_)->setLine(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:69
// [4] int column()
extern "C"
int C_ZNK9QQmlError6columnEv(void *this_) {
  return (int)((QQmlError*)this_)->column();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:70
// [-2] void setColumn(int)
extern "C"
void C_ZN9QQmlError9setColumnEi(void *this_, int arg0) {
  ((QQmlError*)this_)->setColumn(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:71
// [8] QObject * object()
extern "C"
void* C_ZNK9QQmlError6objectEv(void *this_) {
  return (void*)((QQmlError*)this_)->object();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:72
// [-2] void setObject(class QObject *)
extern "C"
void C_ZN9QQmlError9setObjectEP7QObject(void *this_, QObject * arg0) {
  ((QQmlError*)this_)->setObject(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:73
// [4] QtMsgType messageType()
extern "C"
QtMsgType C_ZNK9QQmlError11messageTypeEv(void *this_) {
  return (QtMsgType)((QQmlError*)this_)->messageType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:74
// [-2] void setMessageType(enum QtMsgType)
extern "C"
void C_ZN9QQmlError14setMessageTypeE9QtMsgType(void *this_, QtMsgType messageType) {
  ((QQmlError*)this_)->setMessageType(messageType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlerror.h:76
// [8] QString toString()
extern "C"
void* C_ZNK9QQmlError8toStringEv(void *this_) {
  auto rv = ((QQmlError*)this_)->toString();
return new QString(rv);
}

//  main block end
