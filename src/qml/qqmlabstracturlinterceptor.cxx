//  header block begin
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h
#ifndef protected
#define protected public
#endif
#include <qqmlabstracturlinterceptor.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlAbstractUrlInterceptor is pure virtual: true
// QQmlAbstractUrlInterceptor has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlAbstractUrlInterceptor : public QQmlAbstractUrlInterceptor {
public:
  virtual ~MyQQmlAbstractUrlInterceptor() {}
// void QQmlAbstractUrlInterceptor()
MyQQmlAbstractUrlInterceptor() : QQmlAbstractUrlInterceptor() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:58
// [-2] void QQmlAbstractUrlInterceptor()
extern "C" Q_DECL_EXPORT
void* C_ZN26QQmlAbstractUrlInterceptorC2Ev() {
  return 0; // new QQmlAbstractUrlInterceptor();
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:59
// [-2] void ~QQmlAbstractUrlInterceptor()
extern "C" Q_DECL_EXPORT
void C_ZN26QQmlAbstractUrlInterceptorD2Ev(void *this_) {
  delete (QQmlAbstractUrlInterceptor*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlabstracturlinterceptor.h:60
// [8] QUrl intercept(const class QUrl &, enum QQmlAbstractUrlInterceptor::DataType)
extern "C" Q_DECL_EXPORT
void* C_ZN26QQmlAbstractUrlInterceptor9interceptERK4QUrlNS_8DataTypeE(void *this_, QUrl* path, QQmlAbstractUrlInterceptor::DataType type_) {
  auto rv = ((QQmlAbstractUrlInterceptor*)this_)->intercept(*path, type_);
return new QUrl(rv);
}

//  main block end
