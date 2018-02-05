//  header block begin
// /usr/include/qt/QtQml/qqmlnetworkaccessmanagerfactory.h
#include <qqmlnetworkaccessmanagerfactory.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlNetworkAccessManagerFactory is pure virtual: true
// QQmlNetworkAccessManagerFactory has virtual projected: false
//  header block end

//  main block begin

class MyQQmlNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory {
public:
  virtual ~MyQQmlNetworkAccessManagerFactory() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlnetworkaccessmanagerfactory.h:54
// [-2] void ~QQmlNetworkAccessManagerFactory()
extern "C"
void C_ZN31QQmlNetworkAccessManagerFactoryD2Ev(void *this_) {
  delete (QQmlNetworkAccessManagerFactory*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlnetworkaccessmanagerfactory.h:55
// [8] QNetworkAccessManager * create(class QObject *)
extern "C"
void* C_ZN31QQmlNetworkAccessManagerFactory6createEP7QObject(void *this_, QObject * parent) {
  return (void*)((QQmlNetworkAccessManagerFactory*)this_)->create(parent);
}
//  main block end
