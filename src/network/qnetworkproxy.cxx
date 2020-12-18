//  header block begin

// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxy is pure virtual: false false
// QNetworkProxy has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkProxy_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkProxy_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkProxy_t qt_meta_stringdata_MyQNetworkProxy = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQNetworkProxy"
  },
  "MyQNetworkProxy"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkProxy[] = {
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
class Q_DECL_EXPORT MyQNetworkProxy : public QNetworkProxy {
public:
  virtual ~MyQNetworkProxy() {}
// void QNetworkProxy()
MyQNetworkProxy() : QNetworkProxy() {}
// void QNetworkProxy(QNetworkProxy::ProxyType, const QString &, quint16, const QString &, const QString &)
MyQNetworkProxy(QNetworkProxy::ProxyType type_, const QString & hostName, quint16 port, const QString & user, const QString & password) : QNetworkProxy(type_, hostName, port, user, password) {}
// void QNetworkProxy(const QNetworkProxy &)
MyQNetworkProxy(const QNetworkProxy & other) : QNetworkProxy(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkproxy(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:168
// [8] QNetworkProxy & operator=(QNetworkProxy &&) 
// (12)qm2345474105 (24)_ZN13QNetworkProxyaSEOS_
//static
/*void qm2345474105(QNetworkProxy && other)*/ {
  QNetworkProxy && other =  static_cast<QNetworkProxy &&>(*(QNetworkProxy *)this_);
  (void) ((QNetworkProxy*)this_)->operator=(other);
  // auto xptr = (QNetworkProxy & (QNetworkProxy::*)(QNetworkProxy&&) ) &QNetworkProxy::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:172
// [-2] void swap(QNetworkProxy &) 
// (12)qm3429092739 (27)_ZN13QNetworkProxy4swapERS_
//static
/*void qm3429092739(QNetworkProxy & other)*/ {
  QNetworkProxy & other = *(QNetworkProxy *)this_;
  (void) ((QNetworkProxy*)this_)->swap(other);
   auto xptr = (void (QNetworkProxy::*)(QNetworkProxy&) ) &QNetworkProxy::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:175
// [1] bool operator!=(const QNetworkProxy &) const
// (11)qm955640459 (26)_ZNK13QNetworkProxyneERKS_
//static
/*void qm955640459(const QNetworkProxy & other)*/ {
  const QNetworkProxy & other = *(const QNetworkProxy *)this_;
  (void) ((QNetworkProxy*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkProxy::*)(QNetworkProxy const&) const ) &QNetworkProxy::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QNetworkProxyD2Ev(void *this_)*/ {
  delete (QNetworkProxy*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkproxy
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
