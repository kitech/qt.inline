//  header block begin

// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxyFactory is pure virtual: true true
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkproxyfactory(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN20QNetworkProxyFactoryD2Ev(void *this_)*/ {
  delete (QNetworkProxyFactory*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkproxyfactory
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
