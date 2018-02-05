//  header block begin
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h
#include <qqmlabstracturlinterceptor.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlAbstractUrlInterceptor is pure virtual: true
// QQmlAbstractUrlInterceptor has virtual projected: false
//  header block end

//  main block begin

class MyQQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor {
public:
  virtual ~MyQQmlAbstractUrlInterceptor() {}
// void QQmlAbstractUrlInterceptor()
MyQQmlAbstractUrlInterceptor() : QQmlAbstractUrlInterceptor() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:58
// [-2] void QQmlAbstractUrlInterceptor()
extern "C"
void* C_ZN26QQmlAbstractUrlInterceptorC1Ev() {
  return 0; // new QQmlAbstractUrlInterceptor();
}
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:59
// [-2] void ~QQmlAbstractUrlInterceptor()
extern "C"
void C_ZN26QQmlAbstractUrlInterceptorD2Ev(void *this_) {
  delete (QQmlAbstractUrlInterceptor*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:60
// [8] QUrl intercept(const class QUrl &, enum QQmlAbstractUrlInterceptor::DataType)
extern "C"
void* C_ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE(void *this_, QUrl* path, QQmlAbstractUrlInterceptor::DataType type) {
  auto rv = ((QQmlAbstractUrlInterceptor*)this_)->intercept(*path, type);
return new QUrl(rv);
}
//  main block end
