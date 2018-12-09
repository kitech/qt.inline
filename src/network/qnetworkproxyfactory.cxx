//  header block begin

// since 0x040500
// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxyFactory is pure virtual: true
// QNetworkProxyFactory has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkProxyFactory_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkProxyFactory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkProxyFactory_t qt_meta_stringdata_MyQNetworkProxyFactory = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQNetworkProxyFactory"
  },
  "MyQNetworkProxyFactory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkProxyFactory[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQNetworkProxyFactory : public QNetworkProxyFactory {
public:
  virtual ~MyQNetworkProxyFactory() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery &)
  virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery & query)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"queryProxy", &handled, 1, (uint64_t)&query, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QNetworkProxy>){};}
    auto prv = (QList<QNetworkProxy>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QNetworkProxy>
    } else {
    return (QList<QNetworkProxy>){};
  }
  }

// void QNetworkProxyFactory()
MyQNetworkProxyFactory() : QNetworkProxyFactory() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:222
// [-2] QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery &)
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
