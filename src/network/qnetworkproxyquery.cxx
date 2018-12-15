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

// QNetworkProxyQuery is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:72
// [-2] void QNetworkProxyQuery()
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2Ev() {
  return  new QNetworkProxyQuery();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:73
// [-2] void QNetworkProxyQuery(const QUrl &, QNetworkProxyQuery::QueryType)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2ERK4QUrlNS_9QueryTypeE(QUrl* requestUrl, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*requestUrl, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:74
// [-2] void QNetworkProxyQuery(const QString &, int, const QString &, QNetworkProxyQuery::QueryType)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2ERK7QStringiS2_NS_9QueryTypeE(QString* hostname, int port, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*hostname, port, *protocolTag, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:76
// [-2] void QNetworkProxyQuery(quint16, const QString &, QNetworkProxyQuery::QueryType)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2EtRK7QStringNS_9QueryTypeE(quint16 bindPort, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(bindPort, *protocolTag, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:79
// [-2] void QNetworkProxyQuery(const QNetworkConfiguration &, const QUrl &, QNetworkProxyQuery::QueryType)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK4QUrlNS_9QueryTypeE(QNetworkConfiguration* networkConfiguration, QUrl* requestUrl, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*networkConfiguration, *requestUrl, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:81
// [-2] void QNetworkProxyQuery(const QNetworkConfiguration &, const QString &, int, const QString &, QNetworkProxyQuery::QueryType)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK7QStringiS5_NS_9QueryTypeE(QNetworkConfiguration* networkConfiguration, QString* hostname, int port, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*networkConfiguration, *hostname, port, *protocolTag, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:84
// [-2] void QNetworkProxyQuery(const QNetworkConfiguration &, quint16, const QString &, QNetworkProxyQuery::QueryType)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationtRK7QStringNS_9QueryTypeE(QNetworkConfiguration* networkConfiguration, quint16 bindPort, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*networkConfiguration, bindPort, *protocolTag, queryType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:88
// [-2] void QNetworkProxyQuery(const QNetworkProxyQuery &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryC2ERKS_(QNetworkProxyQuery* other) {
  return  new QNetworkProxyQuery(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:90
// [8] QNetworkProxyQuery & operator=(QNetworkProxyQuery &&)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryaSEOS_(void *this_, QNetworkProxyQuery && other) {
  auto& rv = ((QNetworkProxyQuery*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:92
// [8] QNetworkProxyQuery & operator=(const QNetworkProxyQuery &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QNetworkProxyQueryaSERKS_(void *this_, QNetworkProxyQuery* other) {
  auto& rv = ((QNetworkProxyQuery*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:93
// [-2] void ~QNetworkProxyQuery()
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQueryD2Ev(void *this_) {
  delete (QNetworkProxyQuery*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkproxy.h:95
// [-2] void swap(QNetworkProxyQuery &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery4swapERS_(void *this_, QNetworkProxyQuery* other) {
  ((QNetworkProxyQuery*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:97
// [1] bool operator==(const QNetworkProxyQuery &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QNetworkProxyQueryeqERKS_(void *this_, QNetworkProxyQuery* other) {
  return (bool)((QNetworkProxyQuery*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:98
// [1] bool operator!=(const QNetworkProxyQuery &)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QNetworkProxyQueryneERKS_(void *this_, QNetworkProxyQuery* other) {
  return (bool)((QNetworkProxyQuery*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:101
// [4] QNetworkProxyQuery::QueryType queryType()
extern "C" Q_DECL_EXPORT
QNetworkProxyQuery::QueryType C_ZNK18QNetworkProxyQuery9queryTypeEv(void *this_) {
  return (QNetworkProxyQuery::QueryType)((QNetworkProxyQuery*)this_)->queryType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:102
// [-2] void setQueryType(QNetworkProxyQuery::QueryType)
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery12setQueryTypeENS_9QueryTypeE(void *this_, QNetworkProxyQuery::QueryType type_) {
  ((QNetworkProxyQuery*)this_)->setQueryType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:104
// [4] int peerPort()
extern "C" Q_DECL_EXPORT
int C_ZNK18QNetworkProxyQuery8peerPortEv(void *this_) {
  return (int)((QNetworkProxyQuery*)this_)->peerPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:105
// [-2] void setPeerPort(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery11setPeerPortEi(void *this_, int port) {
  ((QNetworkProxyQuery*)this_)->setPeerPort(port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:107
// [8] QString peerHostName()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QNetworkProxyQuery12peerHostNameEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->peerHostName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:108
// [-2] void setPeerHostName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery15setPeerHostNameERK7QString(void *this_, QString* hostname) {
  ((QNetworkProxyQuery*)this_)->setPeerHostName(*hostname);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:110
// [4] int localPort()
extern "C" Q_DECL_EXPORT
int C_ZNK18QNetworkProxyQuery9localPortEv(void *this_) {
  return (int)((QNetworkProxyQuery*)this_)->localPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:111
// [-2] void setLocalPort(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery12setLocalPortEi(void *this_, int port) {
  ((QNetworkProxyQuery*)this_)->setLocalPort(port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:113
// [8] QString protocolTag()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QNetworkProxyQuery11protocolTagEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->protocolTag();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:114
// [-2] void setProtocolTag(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery14setProtocolTagERK7QString(void *this_, QString* protocolTag) {
  ((QNetworkProxyQuery*)this_)->setProtocolTag(*protocolTag);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:116
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QNetworkProxyQuery3urlEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:117
// [-2] void setUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkProxyQuery*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:120
// [8] QNetworkConfiguration networkConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QNetworkProxyQuery20networkConfigurationEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->networkConfiguration();
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:121
// [-2] void setNetworkConfiguration(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN18QNetworkProxyQuery23setNetworkConfigurationERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* networkConfiguration) {
  ((QNetworkProxyQuery*)this_)->setNetworkConfiguration(*networkConfiguration);
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
