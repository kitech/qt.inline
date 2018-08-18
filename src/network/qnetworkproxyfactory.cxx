//  header block begin
// since 0x040500
// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxyFactory is pure virtual: true
// QNetworkProxyFactory has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNetworkProxyFactory : public QNetworkProxyFactory {
public:
  virtual ~MyQNetworkProxyFactory() {}
// void QNetworkProxyFactory()
MyQNetworkProxyFactory() : QNetworkProxyFactory() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:219
// [-2] void QNetworkProxyFactory()
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkProxyFactoryC2Ev() {
  return 0; // new QNetworkProxyFactory();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:220
// [-2] void ~QNetworkProxyFactory()
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkProxyFactoryD2Ev(void *this_) {
  delete (QNetworkProxyFactory*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:222
// [-2] QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery &)
extern "C" Q_DECL_EXPORT
QList<QNetworkProxy>* C_ZN20QNetworkProxyFactory10queryProxyERK18QNetworkProxyQuery(void *this_, QNetworkProxyQuery* query) {
  auto rv = ((QNetworkProxyFactory*)this_)->queryProxy(*query);
return new QList<QNetworkProxy>(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtNetwork/qnetworkproxy.h:224
// [1] bool usesSystemConfiguration()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
bool C_ZN20QNetworkProxyFactory23usesSystemConfigurationEv() {
  return (bool)QNetworkProxyFactory::usesSystemConfiguration();
}
#endif // QT_VERSION >= 0x050800

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtNetwork/qnetworkproxy.h:225
// [-2] void setUseSystemConfiguration(bool)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkProxyFactory25setUseSystemConfigurationEb(bool enable) {
  QNetworkProxyFactory::setUseSystemConfiguration(enable);
}
#endif // QT_VERSION >= 0x040600

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:226
// [-2] void setApplicationProxyFactory(QNetworkProxyFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkProxyFactory26setApplicationProxyFactoryEPS_(QNetworkProxyFactory * factory) {
  QNetworkProxyFactory::setApplicationProxyFactory(factory);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:227
// [-2] QList<QNetworkProxy> proxyForQuery(const QNetworkProxyQuery &)
extern "C" Q_DECL_EXPORT
QList<QNetworkProxy>* C_ZN20QNetworkProxyFactory13proxyForQueryERK18QNetworkProxyQuery(QNetworkProxyQuery* query) {
  auto rv = QNetworkProxyFactory::proxyForQuery(*query);
return new QList<QNetworkProxy>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:228
// [-2] QList<QNetworkProxy> systemProxyForQuery(const QNetworkProxyQuery &)
extern "C" Q_DECL_EXPORT
QList<QNetworkProxy>* C_ZN20QNetworkProxyFactory19systemProxyForQueryERK18QNetworkProxyQuery(QNetworkProxyQuery* query) {
  auto rv = QNetworkProxyFactory::systemProxyForQuery(*query);
return new QList<QNetworkProxy>(rv);
}

//  main block end
