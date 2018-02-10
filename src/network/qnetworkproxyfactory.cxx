//  header block begin
// /usr/include/qt/QtNetwork/qnetworkproxy.h
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxyFactory is pure virtual: true
// QNetworkProxyFactory has virtual projected: false
//  header block end

//  main block begin

class MyQNetworkProxyFactory : public QNetworkProxyFactory {
public:
  virtual ~MyQNetworkProxyFactory() {}
// void QNetworkProxyFactory()
MyQNetworkProxyFactory() : QNetworkProxyFactory() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:219
// [-2] void QNetworkProxyFactory()
extern "C"
void* C_ZN20QNetworkProxyFactoryC2Ev() {
  return 0; // new QNetworkProxyFactory();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:220
// [-2] void ~QNetworkProxyFactory()
extern "C"
void C_ZN20QNetworkProxyFactoryD2Ev(void *this_) {
  delete (QNetworkProxyFactory*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:224
// [1] bool usesSystemConfiguration()
extern "C"
bool C_ZN20QNetworkProxyFactory23usesSystemConfigurationEv() {
  return (bool)QNetworkProxyFactory::usesSystemConfiguration();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:225
// [-2] void setUseSystemConfiguration(_Bool)
extern "C"
void C_ZN20QNetworkProxyFactory25setUseSystemConfigurationEb(bool enable) {
  QNetworkProxyFactory::setUseSystemConfiguration(enable);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:226
// [-2] void setApplicationProxyFactory(class QNetworkProxyFactory *)
extern "C"
void C_ZN20QNetworkProxyFactory26setApplicationProxyFactoryEPS_(QNetworkProxyFactory * factory) {
  QNetworkProxyFactory::setApplicationProxyFactory(factory);
}
//  main block end
