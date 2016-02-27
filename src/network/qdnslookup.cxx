// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qdnslookup.h
// dst-file: /src/network/qdnslookup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdnslookup.h>


#include <qstring.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qglobal.h>
#include <qhostaddress.h>
#include <qdnslookup.h>
#include <qnetworkinterface.h>
// <= header block end

// main block begin =>
void __keep_qdnslookup_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 152, column 10>
//   // proto:  void QDnsTextRecord::swap(QDnsTextRecord & other);
if (true) {
  auto f = [](QDnsTextRecord flythis, QDnsTextRecord & arg1) {
    ((QDnsTextRecord*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QDnsTextRecord4swapERS_ swap(class QDnsTextRecord &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 60, column 10>
//   // proto:  void QDnsDomainNameRecord::swap(QDnsDomainNameRecord & other);
if (true) {
  auto f = [](QDnsDomainNameRecord flythis, QDnsDomainNameRecord & arg1) {
    ((QDnsDomainNameRecord*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QDnsDomainNameRecord4swapERS_ swap(class QDnsDomainNameRecord &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 82, column 10>
//   // proto:  void QDnsHostAddressRecord::swap(QDnsHostAddressRecord & other);
if (true) {
  auto f = [](QDnsHostAddressRecord flythis, QDnsHostAddressRecord & arg1) {
    ((QDnsHostAddressRecord*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QDnsHostAddressRecord4swapERS_ swap(class QDnsHostAddressRecord &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 104, column 10>
//   // proto:  void QDnsMailExchangeRecord::swap(QDnsMailExchangeRecord & other);
if (true) {
  auto f = [](QDnsMailExchangeRecord flythis, QDnsMailExchangeRecord & arg1) {
    ((QDnsMailExchangeRecord*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN22QDnsMailExchangeRecord4swapERS_ swap(class QDnsMailExchangeRecord &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 127, column 10>
//   // proto:  void QDnsServiceRecord::swap(QDnsServiceRecord & other);
if (true) {
  auto f = [](QDnsServiceRecord flythis, QDnsServiceRecord & arg1) {
    ((QDnsServiceRecord*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QDnsServiceRecord4swapERS_ swap(class QDnsServiceRecord &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDnsTextRecord_Class_Size()
{
  return sizeof(QDnsTextRecord);
}

extern "C"
int QDnsDomainNameRecord_Class_Size()
{
  return sizeof(QDnsDomainNameRecord);
}

extern "C"
int QDnsHostAddressRecord_Class_Size()
{
  return sizeof(QDnsHostAddressRecord);
}

extern "C"
int QDnsMailExchangeRecord_Class_Size()
{
  return sizeof(QDnsMailExchangeRecord);
}

extern "C"
int QDnsServiceRecord_Class_Size()
{
  return sizeof(QDnsServiceRecord);
}

extern "C"
int QDnsLookup_Class_Size()
{
  return sizeof(QDnsLookup);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 154, column 13>
//   // proto:  QString QDnsTextRecord::name();
// _ZNK14QDnsTextRecord4nameEv name()
extern "C"
QString*
C_ZNK14QDnsTextRecord4nameEv(void *qthis) {
  auto ret =
  ((QDnsTextRecord*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 156, column 23>
//   // proto:  QList<QByteArray> QDnsTextRecord::values();
// _ZNK14QDnsTextRecord6valuesEv values()
extern "C"
QList<QByteArray>*
C_ZNK14QDnsTextRecord6valuesEv(void *qthis) {
  auto ret =
  ((QDnsTextRecord*)qthis)->values();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 148, column 5>
//   // proto:  void QDnsTextRecord::QDnsTextRecord();
extern "C"
QDnsTextRecord*
C_ZN14QDnsTextRecordC2Ev() {
  auto ret = new QDnsTextRecord();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 149, column 5>
//   // proto:  void QDnsTextRecord::QDnsTextRecord(const QDnsTextRecord & other);
extern "C"
QDnsTextRecord*
C_ZN14QDnsTextRecordC2ERKS_(const QDnsTextRecord* arg1) {
  auto ret = new QDnsTextRecord(*((const QDnsTextRecord*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 155, column 13>
//   // proto:  quint32 QDnsTextRecord::timeToLive();
// _ZNK14QDnsTextRecord10timeToLiveEv timeToLive()
extern "C"
unsigned int
C_ZNK14QDnsTextRecord10timeToLiveEv(void *qthis) {
  auto ret =
  ((QDnsTextRecord*)qthis)->timeToLive();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 152, column 10>
//   // proto:  void QDnsTextRecord::swap(QDnsTextRecord & other);
// _ZN14QDnsTextRecord4swapERS_ swap(class QDnsTextRecord &)
extern "C"
void
C_ZN14QDnsTextRecord4swapERS_(void *qthis,
QDnsTextRecord* arg1) {
  ((QDnsTextRecord*)qthis)->swap(*((QDnsTextRecord*)arg1));
}
//   // proto:  void QDnsTextRecord::~QDnsTextRecord();
extern "C"
void C_ZN14QDnsTextRecordD2Ev(void *qthis) {
  delete (QDnsTextRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 63, column 13>
//   // proto:  quint32 QDnsDomainNameRecord::timeToLive();
// _ZNK20QDnsDomainNameRecord10timeToLiveEv timeToLive()
extern "C"
unsigned int
C_ZNK20QDnsDomainNameRecord10timeToLiveEv(void *qthis) {
  auto ret =
  ((QDnsDomainNameRecord*)qthis)->timeToLive();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 56, column 5>
//   // proto:  void QDnsDomainNameRecord::QDnsDomainNameRecord();
extern "C"
QDnsDomainNameRecord*
C_ZN20QDnsDomainNameRecordC2Ev() {
  auto ret = new QDnsDomainNameRecord();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 64, column 13>
//   // proto:  QString QDnsDomainNameRecord::value();
// _ZNK20QDnsDomainNameRecord5valueEv value()
extern "C"
QString*
C_ZNK20QDnsDomainNameRecord5valueEv(void *qthis) {
  auto ret =
  ((QDnsDomainNameRecord*)qthis)->value();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 60, column 10>
//   // proto:  void QDnsDomainNameRecord::swap(QDnsDomainNameRecord & other);
// _ZN20QDnsDomainNameRecord4swapERS_ swap(class QDnsDomainNameRecord &)
extern "C"
void
C_ZN20QDnsDomainNameRecord4swapERS_(void *qthis,
QDnsDomainNameRecord* arg1) {
  ((QDnsDomainNameRecord*)qthis)->swap(*((QDnsDomainNameRecord*)arg1));
}
//   // proto:  void QDnsDomainNameRecord::~QDnsDomainNameRecord();
extern "C"
void C_ZN20QDnsDomainNameRecordD2Ev(void *qthis) {
  delete (QDnsDomainNameRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 57, column 5>
//   // proto:  void QDnsDomainNameRecord::QDnsDomainNameRecord(const QDnsDomainNameRecord & other);
extern "C"
QDnsDomainNameRecord*
C_ZN20QDnsDomainNameRecordC2ERKS_(const QDnsDomainNameRecord* arg1) {
  auto ret = new QDnsDomainNameRecord(*((const QDnsDomainNameRecord*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 62, column 13>
//   // proto:  QString QDnsDomainNameRecord::name();
// _ZNK20QDnsDomainNameRecord4nameEv name()
extern "C"
QString*
C_ZNK20QDnsDomainNameRecord4nameEv(void *qthis) {
  auto ret =
  ((QDnsDomainNameRecord*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 86, column 18>
//   // proto:  QHostAddress QDnsHostAddressRecord::value();
// _ZNK21QDnsHostAddressRecord5valueEv value()
extern "C"
QHostAddress*
C_ZNK21QDnsHostAddressRecord5valueEv(void *qthis) {
  auto ret =
  ((QDnsHostAddressRecord*)qthis)->value();
  return new QHostAddress(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 78, column 5>
//   // proto:  void QDnsHostAddressRecord::QDnsHostAddressRecord();
extern "C"
QDnsHostAddressRecord*
C_ZN21QDnsHostAddressRecordC2Ev() {
  auto ret = new QDnsHostAddressRecord();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 84, column 13>
//   // proto:  QString QDnsHostAddressRecord::name();
// _ZNK21QDnsHostAddressRecord4nameEv name()
extern "C"
QString*
C_ZNK21QDnsHostAddressRecord4nameEv(void *qthis) {
  auto ret =
  ((QDnsHostAddressRecord*)qthis)->name();
  return new QString(ret); // 5
}
//   // proto:  void QDnsHostAddressRecord::~QDnsHostAddressRecord();
extern "C"
void C_ZN21QDnsHostAddressRecordD2Ev(void *qthis) {
  delete (QDnsHostAddressRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 85, column 13>
//   // proto:  quint32 QDnsHostAddressRecord::timeToLive();
// _ZNK21QDnsHostAddressRecord10timeToLiveEv timeToLive()
extern "C"
unsigned int
C_ZNK21QDnsHostAddressRecord10timeToLiveEv(void *qthis) {
  auto ret =
  ((QDnsHostAddressRecord*)qthis)->timeToLive();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 82, column 10>
//   // proto:  void QDnsHostAddressRecord::swap(QDnsHostAddressRecord & other);
// _ZN21QDnsHostAddressRecord4swapERS_ swap(class QDnsHostAddressRecord &)
extern "C"
void
C_ZN21QDnsHostAddressRecord4swapERS_(void *qthis,
QDnsHostAddressRecord* arg1) {
  ((QDnsHostAddressRecord*)qthis)->swap(*((QDnsHostAddressRecord*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 79, column 5>
//   // proto:  void QDnsHostAddressRecord::QDnsHostAddressRecord(const QDnsHostAddressRecord & other);
extern "C"
QDnsHostAddressRecord*
C_ZN21QDnsHostAddressRecordC2ERKS_(const QDnsHostAddressRecord* arg1) {
  auto ret = new QDnsHostAddressRecord(*((const QDnsHostAddressRecord*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 106, column 13>
//   // proto:  QString QDnsMailExchangeRecord::exchange();
// _ZNK22QDnsMailExchangeRecord8exchangeEv exchange()
extern "C"
QString*
C_ZNK22QDnsMailExchangeRecord8exchangeEv(void *qthis) {
  auto ret =
  ((QDnsMailExchangeRecord*)qthis)->exchange();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 101, column 5>
//   // proto:  void QDnsMailExchangeRecord::QDnsMailExchangeRecord(const QDnsMailExchangeRecord & other);
extern "C"
QDnsMailExchangeRecord*
C_ZN22QDnsMailExchangeRecordC2ERKS_(const QDnsMailExchangeRecord* arg1) {
  auto ret = new QDnsMailExchangeRecord(*((const QDnsMailExchangeRecord*)arg1));
  return ret;
}
//   // proto:  void QDnsMailExchangeRecord::~QDnsMailExchangeRecord();
extern "C"
void C_ZN22QDnsMailExchangeRecordD2Ev(void *qthis) {
  delete (QDnsMailExchangeRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 108, column 13>
//   // proto:  quint16 QDnsMailExchangeRecord::preference();
// _ZNK22QDnsMailExchangeRecord10preferenceEv preference()
extern "C"
unsigned short
C_ZNK22QDnsMailExchangeRecord10preferenceEv(void *qthis) {
  auto ret =
  ((QDnsMailExchangeRecord*)qthis)->preference();
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 109, column 13>
//   // proto:  quint32 QDnsMailExchangeRecord::timeToLive();
// _ZNK22QDnsMailExchangeRecord10timeToLiveEv timeToLive()
extern "C"
unsigned int
C_ZNK22QDnsMailExchangeRecord10timeToLiveEv(void *qthis) {
  auto ret =
  ((QDnsMailExchangeRecord*)qthis)->timeToLive();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 107, column 13>
//   // proto:  QString QDnsMailExchangeRecord::name();
// _ZNK22QDnsMailExchangeRecord4nameEv name()
extern "C"
QString*
C_ZNK22QDnsMailExchangeRecord4nameEv(void *qthis) {
  auto ret =
  ((QDnsMailExchangeRecord*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 100, column 5>
//   // proto:  void QDnsMailExchangeRecord::QDnsMailExchangeRecord();
extern "C"
QDnsMailExchangeRecord*
C_ZN22QDnsMailExchangeRecordC2Ev() {
  auto ret = new QDnsMailExchangeRecord();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 104, column 10>
//   // proto:  void QDnsMailExchangeRecord::swap(QDnsMailExchangeRecord & other);
// _ZN22QDnsMailExchangeRecord4swapERS_ swap(class QDnsMailExchangeRecord &)
extern "C"
void
C_ZN22QDnsMailExchangeRecord4swapERS_(void *qthis,
QDnsMailExchangeRecord* arg1) {
  ((QDnsMailExchangeRecord*)qthis)->swap(*((QDnsMailExchangeRecord*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 124, column 5>
//   // proto:  void QDnsServiceRecord::QDnsServiceRecord(const QDnsServiceRecord & other);
extern "C"
QDnsServiceRecord*
C_ZN17QDnsServiceRecordC2ERKS_(const QDnsServiceRecord* arg1) {
  auto ret = new QDnsServiceRecord(*((const QDnsServiceRecord*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 133, column 13>
//   // proto:  quint32 QDnsServiceRecord::timeToLive();
// _ZNK17QDnsServiceRecord10timeToLiveEv timeToLive()
extern "C"
unsigned int
C_ZNK17QDnsServiceRecord10timeToLiveEv(void *qthis) {
  auto ret =
  ((QDnsServiceRecord*)qthis)->timeToLive();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 132, column 13>
//   // proto:  QString QDnsServiceRecord::target();
// _ZNK17QDnsServiceRecord6targetEv target()
extern "C"
QString*
C_ZNK17QDnsServiceRecord6targetEv(void *qthis) {
  auto ret =
  ((QDnsServiceRecord*)qthis)->target();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 127, column 10>
//   // proto:  void QDnsServiceRecord::swap(QDnsServiceRecord & other);
// _ZN17QDnsServiceRecord4swapERS_ swap(class QDnsServiceRecord &)
extern "C"
void
C_ZN17QDnsServiceRecord4swapERS_(void *qthis,
QDnsServiceRecord* arg1) {
  ((QDnsServiceRecord*)qthis)->swap(*((QDnsServiceRecord*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 129, column 13>
//   // proto:  QString QDnsServiceRecord::name();
// _ZNK17QDnsServiceRecord4nameEv name()
extern "C"
QString*
C_ZNK17QDnsServiceRecord4nameEv(void *qthis) {
  auto ret =
  ((QDnsServiceRecord*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 134, column 13>
//   // proto:  quint16 QDnsServiceRecord::weight();
// _ZNK17QDnsServiceRecord6weightEv weight()
extern "C"
unsigned short
C_ZNK17QDnsServiceRecord6weightEv(void *qthis) {
  auto ret =
  ((QDnsServiceRecord*)qthis)->weight();
  return ret; // 0 TypeKind.USHORT
}
//   // proto:  void QDnsServiceRecord::~QDnsServiceRecord();
extern "C"
void C_ZN17QDnsServiceRecordD2Ev(void *qthis) {
  delete (QDnsServiceRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 123, column 5>
//   // proto:  void QDnsServiceRecord::QDnsServiceRecord();
extern "C"
QDnsServiceRecord*
C_ZN17QDnsServiceRecordC2Ev() {
  auto ret = new QDnsServiceRecord();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 130, column 13>
//   // proto:  quint16 QDnsServiceRecord::port();
// _ZNK17QDnsServiceRecord4portEv port()
extern "C"
unsigned short
C_ZNK17QDnsServiceRecord4portEv(void *qthis) {
  auto ret =
  ((QDnsServiceRecord*)qthis)->port();
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 131, column 13>
//   // proto:  quint16 QDnsServiceRecord::priority();
// _ZNK17QDnsServiceRecord8priorityEv priority()
extern "C"
unsigned short
C_ZNK17QDnsServiceRecord8priorityEv(void *qthis) {
  auto ret =
  ((QDnsServiceRecord*)qthis)->priority();
  return ret; // 0 TypeKind.USHORT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 213, column 13>
//   // proto:  QString QDnsLookup::name();
// _ZNK10QDnsLookup4nameEv name()
extern "C"
QString*
C_ZNK10QDnsLookup4nameEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 236, column 10>
//   // proto:  void QDnsLookup::finished();
// _ZN10QDnsLookup8finishedEv finished()
extern "C"
void
C_ZN10QDnsLookup8finishedEv(void *qthis) {
  ((QDnsLookup*)qthis)->finished();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 226, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::pointerRecords();
// _ZNK10QDnsLookup14pointerRecordsEv pointerRecords()
extern "C"
QList<QDnsDomainNameRecord>*
C_ZNK10QDnsLookup14pointerRecordsEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->pointerRecords();
  return new QList<QDnsDomainNameRecord>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 237, column 10>
//   // proto:  void QDnsLookup::nameChanged(const QString & name);
// _ZN10QDnsLookup11nameChangedERK7QString nameChanged(const class QString &)
extern "C"
void
C_ZN10QDnsLookup11nameChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QDnsLookup*)qthis)->nameChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 219, column 18>
//   // proto:  QHostAddress QDnsLookup::nameserver();
// _ZNK10QDnsLookup10nameserverEv nameserver()
extern "C"
QHostAddress*
C_ZNK10QDnsLookup10nameserverEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->nameserver();
  return new QHostAddress(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 239, column 10>
//   // proto:  void QDnsLookup::nameserverChanged(const QHostAddress & nameserver);
// _ZN10QDnsLookup17nameserverChangedERK12QHostAddress nameserverChanged(const class QHostAddress &)
extern "C"
void
C_ZN10QDnsLookup17nameserverChangedERK12QHostAddress(void *qthis,
const QHostAddress* arg1) {
  ((QDnsLookup*)qthis)->nameserverChanged(*((const QHostAddress*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 217, column 10>
//   // proto:  void QDnsLookup::setType(QDnsLookup::Type );
// _ZN10QDnsLookup7setTypeENS_4TypeE setType(class QDnsLookup::Type)
extern "C"
void
C_ZN10QDnsLookup7setTypeENS_4TypeE(void *qthis,
QDnsLookup::Type* arg1) {
  ((QDnsLookup*)qthis)->setType(*((QDnsLookup::Type*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 206, column 5>
//   // proto:  void QDnsLookup::QDnsLookup(QDnsLookup::Type type, const QString & name, const QHostAddress & nameserver, QObject * parent);
extern "C"
QDnsLookup*
C_ZN10QDnsLookupC2ENS_4TypeERK7QStringRK12QHostAddressP7QObject(QDnsLookup::Type arg1,
const QString* arg2,
const QHostAddress* arg3,
QObject * arg4) {
  auto ret = new QDnsLookup(arg1, *((const QString*)arg2), *((const QHostAddress*)arg3), arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 209, column 11>
//   // proto:  QDnsLookup::Error QDnsLookup::error();
// _ZNK10QDnsLookup5errorEv error()
extern "C"
QDnsLookup::Error
C_ZNK10QDnsLookup5errorEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 216, column 10>
//   // proto:  QDnsLookup::Type QDnsLookup::type();
// _ZNK10QDnsLookup4typeEv type()
extern "C"
QDnsLookup::Type
C_ZNK10QDnsLookup4typeEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 225, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::nameServerRecords();
// _ZNK10QDnsLookup17nameServerRecordsEv nameServerRecords()
extern "C"
QList<QDnsDomainNameRecord>*
C_ZNK10QDnsLookup17nameServerRecordsEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->nameServerRecords();
  return new QList<QDnsDomainNameRecord>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 232, column 10>
//   // proto:  void QDnsLookup::abort();
// _ZN10QDnsLookup5abortEv abort()
extern "C"
void
C_ZN10QDnsLookup5abortEv(void *qthis) {
  ((QDnsLookup*)qthis)->abort();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 238, column 10>
//   // proto:  void QDnsLookup::typeChanged(QDnsLookup::Type type);
// _ZN10QDnsLookup11typeChangedENS_4TypeE typeChanged(enum QDnsLookup::Type)
extern "C"
void
C_ZN10QDnsLookup11typeChangedENS_4TypeE(void *qthis,
QDnsLookup::Type arg1) {
  ((QDnsLookup*)qthis)->typeChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 223, column 34>
//   // proto:  QList<QDnsHostAddressRecord> QDnsLookup::hostAddressRecords();
// _ZNK10QDnsLookup18hostAddressRecordsEv hostAddressRecords()
extern "C"
QList<QDnsHostAddressRecord>*
C_ZNK10QDnsLookup18hostAddressRecordsEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->hostAddressRecords();
  return new QList<QDnsHostAddressRecord>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 233, column 10>
//   // proto:  void QDnsLookup::lookup();
// _ZN10QDnsLookup6lookupEv lookup()
extern "C"
void
C_ZN10QDnsLookup6lookupEv(void *qthis) {
  ((QDnsLookup*)qthis)->lookup();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 228, column 27>
//   // proto:  QList<QDnsTextRecord> QDnsLookup::textRecords();
// _ZNK10QDnsLookup11textRecordsEv textRecords()
extern "C"
QList<QDnsTextRecord>*
C_ZNK10QDnsLookup11textRecordsEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->textRecords();
  return new QList<QDnsTextRecord>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 211, column 10>
//   // proto:  bool QDnsLookup::isFinished();
// _ZNK10QDnsLookup10isFinishedEv isFinished()
extern "C"
bool
C_ZNK10QDnsLookup10isFinishedEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->isFinished();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 214, column 10>
//   // proto:  void QDnsLookup::setName(const QString & name);
// _ZN10QDnsLookup7setNameERK7QString setName(const class QString &)
extern "C"
void
C_ZN10QDnsLookup7setNameERK7QString(void *qthis,
const QString* arg1) {
  ((QDnsLookup*)qthis)->setName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 227, column 30>
//   // proto:  QList<QDnsServiceRecord> QDnsLookup::serviceRecords();
// _ZNK10QDnsLookup14serviceRecordsEv serviceRecords()
extern "C"
QList<QDnsServiceRecord>*
C_ZNK10QDnsLookup14serviceRecordsEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->serviceRecords();
  return new QList<QDnsServiceRecord>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 220, column 10>
//   // proto:  void QDnsLookup::setNameserver(const QHostAddress & nameserver);
// _ZN10QDnsLookup13setNameserverERK12QHostAddress setNameserver(const class QHostAddress &)
extern "C"
void
C_ZN10QDnsLookup13setNameserverERK12QHostAddress(void *qthis,
const QHostAddress* arg1) {
  ((QDnsLookup*)qthis)->setNameserver(*((const QHostAddress*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 222, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::canonicalNameRecords();
// _ZNK10QDnsLookup20canonicalNameRecordsEv canonicalNameRecords()
extern "C"
QList<QDnsDomainNameRecord>*
C_ZNK10QDnsLookup20canonicalNameRecordsEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->canonicalNameRecords();
  return new QList<QDnsDomainNameRecord>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 224, column 35>
//   // proto:  QList<QDnsMailExchangeRecord> QDnsLookup::mailExchangeRecords();
// _ZNK10QDnsLookup19mailExchangeRecordsEv mailExchangeRecords()
extern "C"
QList<QDnsMailExchangeRecord>*
C_ZNK10QDnsLookup19mailExchangeRecordsEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->mailExchangeRecords();
  return new QList<QDnsMailExchangeRecord>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 205, column 5>
//   // proto:  void QDnsLookup::QDnsLookup(QDnsLookup::Type type, const QString & name, QObject * parent);
extern "C"
QDnsLookup*
C_ZN10QDnsLookupC2ENS_4TypeERK7QStringP7QObject(QDnsLookup::Type arg1,
const QString* arg2,
QObject * arg3) {
  auto ret = new QDnsLookup(arg1, *((const QString*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 210, column 13>
//   // proto:  QString QDnsLookup::errorString();
// _ZNK10QDnsLookup11errorStringEv errorString()
extern "C"
QString*
C_ZNK10QDnsLookup11errorStringEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 169, column 5>
//   // proto:  const QMetaObject * QDnsLookup::metaObject();
// _ZNK10QDnsLookup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QDnsLookup10metaObjectEv(void *qthis) {
  auto ret =
  ((QDnsLookup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 204, column 14>
//   // proto:  void QDnsLookup::QDnsLookup(QObject * parent);
extern "C"
QDnsLookup*
C_ZN10QDnsLookupC2EP7QObject(QObject * arg1) {
  auto ret = new QDnsLookup(arg1);
  return ret;
}
//   // proto:  void QDnsLookup::~QDnsLookup();
extern "C"
void C_ZN10QDnsLookupD2Ev(void *qthis) {
  delete (QDnsLookup*)qthis;
}
// <= ext block end

// body block begin =>
// QDnsLookup_SlotProxy here
class QDnsLookup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDnsLookup_SlotProxy():QObject(){}

public slots:
  // nameChanged(const class QString &)
  void slot_proxy_func__ZN10QDnsLookup11nameChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QDnsLookup11nameChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // finished()
  void slot_proxy_func__ZN10QDnsLookup8finishedEv();
public:
  void (*slot_func__ZN10QDnsLookup8finishedEv)(void* rsfptr) = NULL;
public slots:
  // typeChanged(enum QDnsLookup::Type)
  void slot_proxy_func__ZN10QDnsLookup11typeChangedENS_4TypeE(QDnsLookup::Type arg0);
public:
  void (*slot_func__ZN10QDnsLookup11typeChangedENS_4TypeE)(void* rsfptr, QDnsLookup::Type arg0) = NULL;
public slots:
  // nameserverChanged(const class QHostAddress &)
  void slot_proxy_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress(const QHostAddress & arg0);
public:
  void (*slot_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress)(void* rsfptr, const QHostAddress & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/network/qdnslookup.moc"

extern "C" {
  QDnsLookup_SlotProxy* QDnsLookup_SlotProxy_new()
  {
    return new QDnsLookup_SlotProxy();
  }
};

void QDnsLookup_SlotProxy::slot_proxy_func__ZN10QDnsLookup11nameChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QDnsLookup11nameChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QDnsLookup11nameChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QDnsLookup_SlotProxy_connect__ZN10QDnsLookup11nameChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDnsLookup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QDnsLookup11nameChangedERK7QString = (decltype(that->slot_func__ZN10QDnsLookup11nameChangedERK7QString))ffifptr;
  QObject::connect((QDnsLookup*)sender, SIGNAL(nameChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QDnsLookup11nameChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QDnsLookup_SlotProxy_disconnect__ZN10QDnsLookup11nameChangedERK7QString(QDnsLookup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDnsLookup_SlotProxy::slot_proxy_func__ZN10QDnsLookup8finishedEv() {
  if (this->slot_func__ZN10QDnsLookup8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QDnsLookup8finishedEv(this->rsfptr);
  }
}
extern "C"
void* QDnsLookup_SlotProxy_connect__ZN10QDnsLookup8finishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDnsLookup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QDnsLookup8finishedEv = (decltype(that->slot_func__ZN10QDnsLookup8finishedEv))ffifptr;
  QObject::connect((QDnsLookup*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN10QDnsLookup8finishedEv()));
  return that;
}
extern "C"
void QDnsLookup_SlotProxy_disconnect__ZN10QDnsLookup8finishedEv(QDnsLookup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDnsLookup_SlotProxy::slot_proxy_func__ZN10QDnsLookup11typeChangedENS_4TypeE(QDnsLookup::Type arg0) {
  if (this->slot_func__ZN10QDnsLookup11typeChangedENS_4TypeE != NULL) {
    // do smth...
    this->slot_func__ZN10QDnsLookup11typeChangedENS_4TypeE(this->rsfptr, arg0);
  }
}
extern "C"
void* QDnsLookup_SlotProxy_connect__ZN10QDnsLookup11typeChangedENS_4TypeE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDnsLookup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QDnsLookup11typeChangedENS_4TypeE = (decltype(that->slot_func__ZN10QDnsLookup11typeChangedENS_4TypeE))ffifptr;
  QObject::connect((QDnsLookup*)sender, SIGNAL(typeChanged(enum QDnsLookup::Type)), that, SLOT(slot_proxy_func__ZN10QDnsLookup11typeChangedENS_4TypeE(QDnsLookup::Type arg0)));
  return that;
}
extern "C"
void QDnsLookup_SlotProxy_disconnect__ZN10QDnsLookup11typeChangedENS_4TypeE(QDnsLookup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDnsLookup_SlotProxy::slot_proxy_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress(const QHostAddress & arg0) {
  if (this->slot_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress != NULL) {
    // do smth...
    this->slot_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress(this->rsfptr, arg0);
  }
}
extern "C"
void* QDnsLookup_SlotProxy_connect__ZN10QDnsLookup17nameserverChangedERK12QHostAddress(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDnsLookup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress = (decltype(that->slot_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress))ffifptr;
  QObject::connect((QDnsLookup*)sender, SIGNAL(nameserverChanged(const class QHostAddress &)), that, SLOT(slot_proxy_func__ZN10QDnsLookup17nameserverChangedERK12QHostAddress(const QHostAddress & arg0)));
  return that;
}
extern "C"
void QDnsLookup_SlotProxy_disconnect__ZN10QDnsLookup17nameserverChangedERK12QHostAddress(QDnsLookup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

