//  header block begin

// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxyQuery is pure virtual: false false
// QNetworkProxyQuery has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkProxyQuery_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkProxyQuery_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkProxyQuery_t qt_meta_stringdata_MyQNetworkProxyQuery = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQNetworkProxyQuery"
  },
  "MyQNetworkProxyQuery"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkProxyQuery[] = {
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
class Q_DECL_EXPORT MyQNetworkProxyQuery : public QNetworkProxyQuery {
public:
  virtual ~MyQNetworkProxyQuery() {}
// void QNetworkProxyQuery()
MyQNetworkProxyQuery() : QNetworkProxyQuery() {}
// void QNetworkProxyQuery(const QUrl &, QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(requestUrl, queryType) {}
// void QNetworkProxyQuery(const QString &, int, const QString &, QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(hostname, port, protocolTag, queryType) {}
// void QNetworkProxyQuery(quint16, const QString &, QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(bindPort, protocolTag, queryType) {}
// void QNetworkProxyQuery(const QNetworkConfiguration &, const QUrl &, QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(networkConfiguration, requestUrl, queryType) {}
// void QNetworkProxyQuery(const QNetworkConfiguration &, const QString &, int, const QString &, QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(networkConfiguration, hostname, port, protocolTag, queryType) {}
// void QNetworkProxyQuery(const QNetworkConfiguration &, quint16, const QString &, QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(networkConfiguration, bindPort, protocolTag, queryType) {}
// void QNetworkProxyQuery(const QNetworkProxyQuery &)
MyQNetworkProxyQuery(const QNetworkProxyQuery & other) : QNetworkProxyQuery(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkproxyquery(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:72
// [-2] void QNetworkProxyQuery() 
// (11)qm555834384 (27)_ZN18QNetworkProxyQueryC2Ev
/*void* qm555834384()*/{
  ;
  this_ =  new QNetworkProxyQuery();
  this_ =  new MyQNetworkProxyQuery();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:73
// [-2] void QNetworkProxyQuery(const QUrl &, QNetworkProxyQuery::QueryType) 
// (11)qm531398455 (47)_ZN18QNetworkProxyQueryC2ERK4QUrlNS_9QueryTypeE
/*void* qm531398455(const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType)*/{
  const QUrl & requestUrl = *(const QUrl *)this_; QNetworkProxyQuery::QueryType queryType = *(QNetworkProxyQuery::QueryType*)this_;
  this_ =  new QNetworkProxyQuery(requestUrl, queryType);
  this_ =  new MyQNetworkProxyQuery(requestUrl, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:74
// [-2] void QNetworkProxyQuery(const QString &, int, const QString &, QNetworkProxyQuery::QueryType) 
// (12)qm1355284813 (54)_ZN18QNetworkProxyQueryC2ERK7QStringiS2_NS_9QueryTypeE
/*void* qm1355284813(const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType)*/{
  const QString & hostname = *(const QString *)this_; int port = *(int*)this_; const QString & protocolTag = *(const QString *)this_; QNetworkProxyQuery::QueryType queryType = *(QNetworkProxyQuery::QueryType*)this_;
  this_ =  new QNetworkProxyQuery(hostname, port, protocolTag, queryType);
  this_ =  new MyQNetworkProxyQuery(hostname, port, protocolTag, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:76
// [-2] void QNetworkProxyQuery(quint16, const QString &, QNetworkProxyQuery::QueryType) 
// (11)qm747801699 (51)_ZN18QNetworkProxyQueryC2EtRK7QStringNS_9QueryTypeE
/*void* qm747801699(unsigned short bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType)*/{
  unsigned short bindPort = *(unsigned short*)this_; const QString & protocolTag = *(const QString *)this_; QNetworkProxyQuery::QueryType queryType = *(QNetworkProxyQuery::QueryType*)this_;
  this_ =  new QNetworkProxyQuery(bindPort, protocolTag, queryType);
  this_ =  new MyQNetworkProxyQuery(bindPort, protocolTag, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:94
// [-2] void QNetworkProxyQuery(const QNetworkProxyQuery &) 
// (12)qm2161991935 (30)_ZN18QNetworkProxyQueryC2ERKS_
/*void* qm2161991935(const QNetworkProxyQuery & other)*/{
  const QNetworkProxyQuery & other = *(const QNetworkProxyQuery *)this_;
  this_ =  new QNetworkProxyQuery(other);
  this_ =  new MyQNetworkProxyQuery(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:95
// [8] QNetworkProxyQuery & operator=(QNetworkProxyQuery &&) 
// (12)qm3322436221 (29)_ZN18QNetworkProxyQueryaSEOS_
//static
/*void qm3322436221(QNetworkProxyQuery && other)*/ {
  QNetworkProxyQuery && other =  static_cast<QNetworkProxyQuery &&>(*(QNetworkProxyQuery *)this_);
  (void) ((QNetworkProxyQuery*)this_)->operator=(other);
  // auto xptr = (QNetworkProxyQuery & (QNetworkProxyQuery::*)(QNetworkProxyQuery&&) ) &QNetworkProxyQuery::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:99
// [-2] void swap(QNetworkProxyQuery &) 
// (12)qm2461135722 (32)_ZN18QNetworkProxyQuery4swapERS_
//static
/*void qm2461135722(QNetworkProxyQuery & other)*/ {
  QNetworkProxyQuery & other = *(QNetworkProxyQuery *)this_;
  (void) ((QNetworkProxyQuery*)this_)->swap(other);
   auto xptr = (void (QNetworkProxyQuery::*)(QNetworkProxyQuery&) ) &QNetworkProxyQuery::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:102
// [1] bool operator!=(const QNetworkProxyQuery &) const
// (12)qm4093145617 (31)_ZNK18QNetworkProxyQueryneERKS_
//static
/*void qm4093145617(const QNetworkProxyQuery & other)*/ {
  const QNetworkProxyQuery & other = *(const QNetworkProxyQuery *)this_;
  (void) ((QNetworkProxyQuery*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkProxyQuery::*)(QNetworkProxyQuery const&) const ) &QNetworkProxyQuery::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QNetworkProxyQueryD2Ev(void *this_)*/ {
  delete (QNetworkProxyQuery*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkproxyquery
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
