//  header block begin
// /usr/include/qt/QtNetwork/qnetworkproxy.h
#ifndef protected
#define protected public
#endif
#include <qnetworkproxy.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkProxyQuery is pure virtual: false
// QNetworkProxyQuery has virtual projected: false
//  header block end

//  main block begin

class MyQNetworkProxyQuery : public QNetworkProxyQuery {
public:
  virtual ~MyQNetworkProxyQuery() {}
// void QNetworkProxyQuery()
MyQNetworkProxyQuery() : QNetworkProxyQuery() {}
// void QNetworkProxyQuery(const class QUrl &, enum QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(requestUrl, queryType) {}
// void QNetworkProxyQuery(const class QString &, int, const class QString &, enum QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(hostname, port, protocolTag, queryType) {}
// void QNetworkProxyQuery(quint16, const class QString &, enum QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(bindPort, protocolTag, queryType) {}
// void QNetworkProxyQuery(const class QNetworkConfiguration &, const class QUrl &, enum QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QUrl & requestUrl, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(networkConfiguration, requestUrl, queryType) {}
// void QNetworkProxyQuery(const class QNetworkConfiguration &, const class QString &, int, const class QString &, enum QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, const QString & hostname, int port, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(networkConfiguration, hostname, port, protocolTag, queryType) {}
// void QNetworkProxyQuery(const class QNetworkConfiguration &, quint16, const class QString &, enum QNetworkProxyQuery::QueryType)
MyQNetworkProxyQuery(const QNetworkConfiguration & networkConfiguration, quint16 bindPort, const QString & protocolTag, QNetworkProxyQuery::QueryType queryType) : QNetworkProxyQuery(networkConfiguration, bindPort, protocolTag, queryType) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:72
// [-2] void QNetworkProxyQuery()
extern "C"
void* C_ZN18QNetworkProxyQueryC2Ev() {
  return  new QNetworkProxyQuery();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:73
// [-2] void QNetworkProxyQuery(const class QUrl &, enum QNetworkProxyQuery::QueryType)
extern "C"
void* C_ZN18QNetworkProxyQueryC2ERK4QUrlNS_9QueryTypeE(QUrl* requestUrl, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*requestUrl, queryType);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:74
// [-2] void QNetworkProxyQuery(const class QString &, int, const class QString &, enum QNetworkProxyQuery::QueryType)
extern "C"
void* C_ZN18QNetworkProxyQueryC2ERK7QStringiS2_NS_9QueryTypeE(QString* hostname, int port, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*hostname, port, *protocolTag, queryType);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:76
// [-2] void QNetworkProxyQuery(quint16, const class QString &, enum QNetworkProxyQuery::QueryType)
extern "C"
void* C_ZN18QNetworkProxyQueryC2EtRK7QStringNS_9QueryTypeE(quint16 bindPort, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(bindPort, *protocolTag, queryType);
}
// Public Visibility=Default Availability=Deprecated
// /usr/include/qt/QtNetwork/qnetworkproxy.h:80
// [-2] void QNetworkProxyQuery(const class QNetworkConfiguration &, const class QUrl &, enum QNetworkProxyQuery::QueryType)
extern "C"
void* C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK4QUrlNS_9QueryTypeE(QNetworkConfiguration* networkConfiguration, QUrl* requestUrl, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*networkConfiguration, *requestUrl, queryType);
}
// Public Visibility=Default Availability=Deprecated
// /usr/include/qt/QtNetwork/qnetworkproxy.h:83
// [-2] void QNetworkProxyQuery(const class QNetworkConfiguration &, const class QString &, int, const class QString &, enum QNetworkProxyQuery::QueryType)
extern "C"
void* C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationRK7QStringiS5_NS_9QueryTypeE(QNetworkConfiguration* networkConfiguration, QString* hostname, int port, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*networkConfiguration, *hostname, port, *protocolTag, queryType);
}
// Public Visibility=Default Availability=Deprecated
// /usr/include/qt/QtNetwork/qnetworkproxy.h:87
// [-2] void QNetworkProxyQuery(const class QNetworkConfiguration &, quint16, const class QString &, enum QNetworkProxyQuery::QueryType)
extern "C"
void* C_ZN18QNetworkProxyQueryC2ERK21QNetworkConfigurationtRK7QStringNS_9QueryTypeE(QNetworkConfiguration* networkConfiguration, quint16 bindPort, QString* protocolTag, QNetworkProxyQuery::QueryType queryType) {
  return  new QNetworkProxyQuery(*networkConfiguration, bindPort, *protocolTag, queryType);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:93
// [8] QNetworkProxyQuery & operator=(class QNetworkProxyQuery &&)
extern "C"
void* C_ZN18QNetworkProxyQueryaSEOS_(void *this_, QNetworkProxyQuery && other) {
  auto& rv = ((QNetworkProxyQuery*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:95
// [8] QNetworkProxyQuery & operator=(const class QNetworkProxyQuery &)
extern "C"
void* C_ZN18QNetworkProxyQueryaSERKS_(void *this_, QNetworkProxyQuery* other) {
  auto& rv = ((QNetworkProxyQuery*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:96
// [-2] void ~QNetworkProxyQuery()
extern "C"
void C_ZN18QNetworkProxyQueryD2Ev(void *this_) {
  delete (QNetworkProxyQuery*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:98
// [-2] void swap(class QNetworkProxyQuery &)
extern "C"
void C_ZN18QNetworkProxyQuery4swapERS_(void *this_, QNetworkProxyQuery* other) {
  ((QNetworkProxyQuery*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:100
// [1] bool operator==(const class QNetworkProxyQuery &)
extern "C"
bool C_ZNK18QNetworkProxyQueryeqERKS_(void *this_, QNetworkProxyQuery* other) {
  return (bool)((QNetworkProxyQuery*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:101
// [1] bool operator!=(const class QNetworkProxyQuery &)
extern "C"
bool C_ZNK18QNetworkProxyQueryneERKS_(void *this_, QNetworkProxyQuery* other) {
  return (bool)((QNetworkProxyQuery*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:104
// [4] QNetworkProxyQuery::QueryType queryType()
extern "C"
QNetworkProxyQuery::QueryType C_ZNK18QNetworkProxyQuery9queryTypeEv(void *this_) {
  return (QNetworkProxyQuery::QueryType)((QNetworkProxyQuery*)this_)->queryType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:105
// [-2] void setQueryType(enum QNetworkProxyQuery::QueryType)
extern "C"
void C_ZN18QNetworkProxyQuery12setQueryTypeENS_9QueryTypeE(void *this_, QNetworkProxyQuery::QueryType type_) {
  ((QNetworkProxyQuery*)this_)->setQueryType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:107
// [4] int peerPort()
extern "C"
int C_ZNK18QNetworkProxyQuery8peerPortEv(void *this_) {
  return (int)((QNetworkProxyQuery*)this_)->peerPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:108
// [-2] void setPeerPort(int)
extern "C"
void C_ZN18QNetworkProxyQuery11setPeerPortEi(void *this_, int port) {
  ((QNetworkProxyQuery*)this_)->setPeerPort(port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:110
// [8] QString peerHostName()
extern "C"
void* C_ZNK18QNetworkProxyQuery12peerHostNameEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->peerHostName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:111
// [-2] void setPeerHostName(const class QString &)
extern "C"
void C_ZN18QNetworkProxyQuery15setPeerHostNameERK7QString(void *this_, QString* hostname) {
  ((QNetworkProxyQuery*)this_)->setPeerHostName(*hostname);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:113
// [4] int localPort()
extern "C"
int C_ZNK18QNetworkProxyQuery9localPortEv(void *this_) {
  return (int)((QNetworkProxyQuery*)this_)->localPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:114
// [-2] void setLocalPort(int)
extern "C"
void C_ZN18QNetworkProxyQuery12setLocalPortEi(void *this_, int port) {
  ((QNetworkProxyQuery*)this_)->setLocalPort(port);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:116
// [8] QString protocolTag()
extern "C"
void* C_ZNK18QNetworkProxyQuery11protocolTagEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->protocolTag();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:117
// [-2] void setProtocolTag(const class QString &)
extern "C"
void C_ZN18QNetworkProxyQuery14setProtocolTagERK7QString(void *this_, QString* protocolTag) {
  ((QNetworkProxyQuery*)this_)->setProtocolTag(*protocolTag);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:119
// [8] QUrl url()
extern "C"
void* C_ZNK18QNetworkProxyQuery3urlEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:120
// [-2] void setUrl(const class QUrl &)
extern "C"
void C_ZN18QNetworkProxyQuery6setUrlERK4QUrl(void *this_, QUrl* url) {
  ((QNetworkProxyQuery*)this_)->setUrl(*url);
}

// Public Visibility=Default Availability=Deprecated
// /usr/include/qt/QtNetwork/qnetworkproxy.h:124
// [8] QNetworkConfiguration networkConfiguration()
extern "C"
void* C_ZNK18QNetworkProxyQuery20networkConfigurationEv(void *this_) {
  auto rv = ((QNetworkProxyQuery*)this_)->networkConfiguration();
return new QNetworkConfiguration(rv);
}

// Public Visibility=Default Availability=Deprecated
// /usr/include/qt/QtNetwork/qnetworkproxy.h:126
// [-2] void setNetworkConfiguration(const class QNetworkConfiguration &)
extern "C"
void C_ZN18QNetworkProxyQuery23setNetworkConfigurationERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* networkConfiguration) {
  ((QNetworkProxyQuery*)this_)->setNetworkConfiguration(*networkConfiguration);
}

//  main block end
