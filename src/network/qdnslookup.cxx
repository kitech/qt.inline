#include <qnetworkinterface.h>
#include <qhostaddress.h>
#include <qglobal.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qdnslookup.h
// dst-file: /src/network/qdnslookup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qdnslookup.h>

extern "C" {

int QDnsTextRecord_Class_Size()
{
  return sizeof(QDnsTextRecord);
}

int QDnsDomainNameRecord_Class_Size()
{
  return sizeof(QDnsDomainNameRecord);
}

int QDnsHostAddressRecord_Class_Size()
{
  return sizeof(QDnsHostAddressRecord);
}

int QDnsMailExchangeRecord_Class_Size()
{
  return sizeof(QDnsMailExchangeRecord);
}

int QDnsServiceRecord_Class_Size()
{
  return sizeof(QDnsServiceRecord);
}

int QDnsLookup_Class_Size()
{
  return sizeof(QDnsLookup);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qdnslookup_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 154, column 13>
//   // proto:  QString QDnsTextRecord::name();
if (true) {
  auto f = [](QDnsTextRecord flythis) {
    ((QDnsTextRecord*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK14QDnsTextRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 156, column 23>
//   // proto:  QList<QByteArray> QDnsTextRecord::values();
if (true) {
  auto f = [](QDnsTextRecord flythis) {
    ((QDnsTextRecord*)0)->values();
    flythis.values();
  };
  if (f == nullptr){}
}
// _ZNK14QDnsTextRecord6valuesEv values()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 148, column 5>
//   // proto:  void QDnsTextRecord::QDnsTextRecord();
if (true) {
  auto f = []() {
    new QDnsTextRecord();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 149, column 5>
//   // proto:  void QDnsTextRecord::QDnsTextRecord(const QDnsTextRecord & other);
if (true) {
  auto f = [](const QDnsTextRecord & arg1) {
    new QDnsTextRecord(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 155, column 13>
//   // proto:  quint32 QDnsTextRecord::timeToLive();
if (true) {
  auto f = [](QDnsTextRecord flythis) {
    ((QDnsTextRecord*)0)->timeToLive();
    flythis.timeToLive();
  };
  if (f == nullptr){}
}
// _ZNK14QDnsTextRecord10timeToLiveEv timeToLive()
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
//   // proto:  void QDnsTextRecord::~QDnsTextRecord();
if (true) {
  delete ((QDnsTextRecord*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 63, column 13>
//   // proto:  quint32 QDnsDomainNameRecord::timeToLive();
if (true) {
  auto f = [](QDnsDomainNameRecord flythis) {
    ((QDnsDomainNameRecord*)0)->timeToLive();
    flythis.timeToLive();
  };
  if (f == nullptr){}
}
// _ZNK20QDnsDomainNameRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 56, column 5>
//   // proto:  void QDnsDomainNameRecord::QDnsDomainNameRecord();
if (true) {
  auto f = []() {
    new QDnsDomainNameRecord();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 64, column 13>
//   // proto:  QString QDnsDomainNameRecord::value();
if (true) {
  auto f = [](QDnsDomainNameRecord flythis) {
    ((QDnsDomainNameRecord*)0)->value();
    flythis.value();
  };
  if (f == nullptr){}
}
// _ZNK20QDnsDomainNameRecord5valueEv value()
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
//   // proto:  void QDnsDomainNameRecord::~QDnsDomainNameRecord();
if (true) {
  delete ((QDnsDomainNameRecord*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 57, column 5>
//   // proto:  void QDnsDomainNameRecord::QDnsDomainNameRecord(const QDnsDomainNameRecord & other);
if (true) {
  auto f = [](const QDnsDomainNameRecord & arg1) {
    new QDnsDomainNameRecord(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 62, column 13>
//   // proto:  QString QDnsDomainNameRecord::name();
if (true) {
  auto f = [](QDnsDomainNameRecord flythis) {
    ((QDnsDomainNameRecord*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK20QDnsDomainNameRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 86, column 18>
//   // proto:  QHostAddress QDnsHostAddressRecord::value();
if (true) {
  auto f = [](QDnsHostAddressRecord flythis) {
    ((QDnsHostAddressRecord*)0)->value();
    flythis.value();
  };
  if (f == nullptr){}
}
// _ZNK21QDnsHostAddressRecord5valueEv value()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 78, column 5>
//   // proto:  void QDnsHostAddressRecord::QDnsHostAddressRecord();
if (true) {
  auto f = []() {
    new QDnsHostAddressRecord();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 84, column 13>
//   // proto:  QString QDnsHostAddressRecord::name();
if (true) {
  auto f = [](QDnsHostAddressRecord flythis) {
    ((QDnsHostAddressRecord*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK21QDnsHostAddressRecord4nameEv name()
//   // proto:  void QDnsHostAddressRecord::~QDnsHostAddressRecord();
if (true) {
  delete ((QDnsHostAddressRecord*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 85, column 13>
//   // proto:  quint32 QDnsHostAddressRecord::timeToLive();
if (true) {
  auto f = [](QDnsHostAddressRecord flythis) {
    ((QDnsHostAddressRecord*)0)->timeToLive();
    flythis.timeToLive();
  };
  if (f == nullptr){}
}
// _ZNK21QDnsHostAddressRecord10timeToLiveEv timeToLive()
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 79, column 5>
//   // proto:  void QDnsHostAddressRecord::QDnsHostAddressRecord(const QDnsHostAddressRecord & other);
if (true) {
  auto f = [](const QDnsHostAddressRecord & arg1) {
    new QDnsHostAddressRecord(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 106, column 13>
//   // proto:  QString QDnsMailExchangeRecord::exchange();
if (true) {
  auto f = [](QDnsMailExchangeRecord flythis) {
    ((QDnsMailExchangeRecord*)0)->exchange();
    flythis.exchange();
  };
  if (f == nullptr){}
}
// _ZNK22QDnsMailExchangeRecord8exchangeEv exchange()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 101, column 5>
//   // proto:  void QDnsMailExchangeRecord::QDnsMailExchangeRecord(const QDnsMailExchangeRecord & other);
if (true) {
  auto f = [](const QDnsMailExchangeRecord & arg1) {
    new QDnsMailExchangeRecord(arg1);
  };
  if (f == nullptr){}
}
//   // proto:  void QDnsMailExchangeRecord::~QDnsMailExchangeRecord();
if (true) {
  delete ((QDnsMailExchangeRecord*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 108, column 13>
//   // proto:  quint16 QDnsMailExchangeRecord::preference();
if (true) {
  auto f = [](QDnsMailExchangeRecord flythis) {
    ((QDnsMailExchangeRecord*)0)->preference();
    flythis.preference();
  };
  if (f == nullptr){}
}
// _ZNK22QDnsMailExchangeRecord10preferenceEv preference()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 109, column 13>
//   // proto:  quint32 QDnsMailExchangeRecord::timeToLive();
if (true) {
  auto f = [](QDnsMailExchangeRecord flythis) {
    ((QDnsMailExchangeRecord*)0)->timeToLive();
    flythis.timeToLive();
  };
  if (f == nullptr){}
}
// _ZNK22QDnsMailExchangeRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 107, column 13>
//   // proto:  QString QDnsMailExchangeRecord::name();
if (true) {
  auto f = [](QDnsMailExchangeRecord flythis) {
    ((QDnsMailExchangeRecord*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK22QDnsMailExchangeRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 100, column 5>
//   // proto:  void QDnsMailExchangeRecord::QDnsMailExchangeRecord();
if (true) {
  auto f = []() {
    new QDnsMailExchangeRecord();
  };
  if (f == nullptr){}
}
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 124, column 5>
//   // proto:  void QDnsServiceRecord::QDnsServiceRecord(const QDnsServiceRecord & other);
if (true) {
  auto f = [](const QDnsServiceRecord & arg1) {
    new QDnsServiceRecord(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 133, column 13>
//   // proto:  quint32 QDnsServiceRecord::timeToLive();
if (true) {
  auto f = [](QDnsServiceRecord flythis) {
    ((QDnsServiceRecord*)0)->timeToLive();
    flythis.timeToLive();
  };
  if (f == nullptr){}
}
// _ZNK17QDnsServiceRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 132, column 13>
//   // proto:  QString QDnsServiceRecord::target();
if (true) {
  auto f = [](QDnsServiceRecord flythis) {
    ((QDnsServiceRecord*)0)->target();
    flythis.target();
  };
  if (f == nullptr){}
}
// _ZNK17QDnsServiceRecord6targetEv target()
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 129, column 13>
//   // proto:  QString QDnsServiceRecord::name();
if (true) {
  auto f = [](QDnsServiceRecord flythis) {
    ((QDnsServiceRecord*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK17QDnsServiceRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 134, column 13>
//   // proto:  quint16 QDnsServiceRecord::weight();
if (true) {
  auto f = [](QDnsServiceRecord flythis) {
    ((QDnsServiceRecord*)0)->weight();
    flythis.weight();
  };
  if (f == nullptr){}
}
// _ZNK17QDnsServiceRecord6weightEv weight()
//   // proto:  void QDnsServiceRecord::~QDnsServiceRecord();
if (true) {
  delete ((QDnsServiceRecord*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 123, column 5>
//   // proto:  void QDnsServiceRecord::QDnsServiceRecord();
if (true) {
  auto f = []() {
    new QDnsServiceRecord();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 130, column 13>
//   // proto:  quint16 QDnsServiceRecord::port();
if (true) {
  auto f = [](QDnsServiceRecord flythis) {
    ((QDnsServiceRecord*)0)->port();
    flythis.port();
  };
  if (f == nullptr){}
}
// _ZNK17QDnsServiceRecord4portEv port()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 131, column 13>
//   // proto:  quint16 QDnsServiceRecord::priority();
if (true) {
  auto f = [](QDnsServiceRecord flythis) {
    ((QDnsServiceRecord*)0)->priority();
    flythis.priority();
  };
  if (f == nullptr){}
}
// _ZNK17QDnsServiceRecord8priorityEv priority()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 213, column 13>
//   // proto:  QString QDnsLookup::name();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 236, column 10>
//   // proto:  void QDnsLookup::finished();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->finished();
    flythis.finished();
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup8finishedEv finished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 226, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::pointerRecords();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->pointerRecords();
    flythis.pointerRecords();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup14pointerRecordsEv pointerRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 237, column 10>
//   // proto:  void QDnsLookup::nameChanged(const QString & name);
if (true) {
  auto f = [](QDnsLookup flythis, const QString & arg1) {
    ((QDnsLookup*)0)->nameChanged(arg1);
    flythis.nameChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup11nameChangedERK7QString nameChanged(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 219, column 18>
//   // proto:  QHostAddress QDnsLookup::nameserver();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->nameserver();
    flythis.nameserver();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup10nameserverEv nameserver()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 239, column 10>
//   // proto:  void QDnsLookup::nameserverChanged(const QHostAddress & nameserver);
if (true) {
  auto f = [](QDnsLookup flythis, const QHostAddress & arg1) {
    ((QDnsLookup*)0)->nameserverChanged(arg1);
    flythis.nameserverChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup17nameserverChangedERK12QHostAddress nameserverChanged(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 217, column 10>
//   // proto:  void QDnsLookup::setType(QDnsLookup::Type );
if (true) {
  auto f = [](QDnsLookup flythis, QDnsLookup::Type arg1) {
    ((QDnsLookup*)0)->setType(arg1);
    flythis.setType(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup7setTypeENS_4TypeE setType(class QDnsLookup::Type)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 206, column 5>
//   // proto:  void QDnsLookup::QDnsLookup(QDnsLookup::Type type, const QString & name, const QHostAddress & nameserver, QObject * parent);
if (true) {
  auto f = [](QDnsLookup::Type arg1, const QString & arg2, const QHostAddress & arg3, QObject * arg4) {
    new QDnsLookup(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 209, column 11>
//   // proto:  QDnsLookup::Error QDnsLookup::error();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->error();
    flythis.error();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 216, column 10>
//   // proto:  QDnsLookup::Type QDnsLookup::type();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->type();
    flythis.type();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 225, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::nameServerRecords();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->nameServerRecords();
    flythis.nameServerRecords();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup17nameServerRecordsEv nameServerRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 232, column 10>
//   // proto:  void QDnsLookup::abort();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->abort();
    flythis.abort();
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 238, column 10>
//   // proto:  void QDnsLookup::typeChanged(QDnsLookup::Type type);
if (true) {
  auto f = [](QDnsLookup flythis, QDnsLookup::Type arg1) {
    ((QDnsLookup*)0)->typeChanged(arg1);
    flythis.typeChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup11typeChangedENS_4TypeE typeChanged(enum QDnsLookup::Type)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 223, column 34>
//   // proto:  QList<QDnsHostAddressRecord> QDnsLookup::hostAddressRecords();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->hostAddressRecords();
    flythis.hostAddressRecords();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup18hostAddressRecordsEv hostAddressRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 233, column 10>
//   // proto:  void QDnsLookup::lookup();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->lookup();
    flythis.lookup();
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup6lookupEv lookup()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 228, column 27>
//   // proto:  QList<QDnsTextRecord> QDnsLookup::textRecords();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->textRecords();
    flythis.textRecords();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup11textRecordsEv textRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 211, column 10>
//   // proto:  bool QDnsLookup::isFinished();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->isFinished();
    flythis.isFinished();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup10isFinishedEv isFinished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 214, column 10>
//   // proto:  void QDnsLookup::setName(const QString & name);
if (true) {
  auto f = [](QDnsLookup flythis, const QString & arg1) {
    ((QDnsLookup*)0)->setName(arg1);
    flythis.setName(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup7setNameERK7QString setName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 227, column 30>
//   // proto:  QList<QDnsServiceRecord> QDnsLookup::serviceRecords();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->serviceRecords();
    flythis.serviceRecords();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup14serviceRecordsEv serviceRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 220, column 10>
//   // proto:  void QDnsLookup::setNameserver(const QHostAddress & nameserver);
if (true) {
  auto f = [](QDnsLookup flythis, const QHostAddress & arg1) {
    ((QDnsLookup*)0)->setNameserver(arg1);
    flythis.setNameserver(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QDnsLookup13setNameserverERK12QHostAddress setNameserver(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 222, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::canonicalNameRecords();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->canonicalNameRecords();
    flythis.canonicalNameRecords();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup20canonicalNameRecordsEv canonicalNameRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 224, column 35>
//   // proto:  QList<QDnsMailExchangeRecord> QDnsLookup::mailExchangeRecords();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->mailExchangeRecords();
    flythis.mailExchangeRecords();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup19mailExchangeRecordsEv mailExchangeRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 205, column 5>
//   // proto:  void QDnsLookup::QDnsLookup(QDnsLookup::Type type, const QString & name, QObject * parent);
if (true) {
  auto f = [](QDnsLookup::Type arg1, const QString & arg2, QObject * arg3) {
    new QDnsLookup(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 210, column 13>
//   // proto:  QString QDnsLookup::errorString();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->errorString();
    flythis.errorString();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 169, column 5>
//   // proto:  const QMetaObject * QDnsLookup::metaObject();
if (true) {
  auto f = [](QDnsLookup flythis) {
    ((QDnsLookup*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QDnsLookup10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 204, column 14>
//   // proto:  void QDnsLookup::QDnsLookup(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    new QDnsLookup(arg1);
  };
  if (f == nullptr){}
}
//   // proto:  void QDnsLookup::~QDnsLookup();
if (true) {
  delete ((QDnsLookup*)0);
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 154, column 13>
//   // proto:  QString QDnsTextRecord::name();
extern "C"
void C_ZNK14QDnsTextRecord4nameEv(void *qthis) {
  ((QDnsTextRecord*)qthis)->name();
}
// _ZNK14QDnsTextRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 156, column 23>
//   // proto:  QList<QByteArray> QDnsTextRecord::values();
extern "C"
void C_ZNK14QDnsTextRecord6valuesEv(void *qthis) {
  ((QDnsTextRecord*)qthis)->values();
}
// _ZNK14QDnsTextRecord6valuesEv values()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 148, column 5>
//   // proto:  void QDnsTextRecord::QDnsTextRecord();
extern "C"
void C_ZN14QDnsTextRecordC2Ev() {
  new QDnsTextRecord();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 149, column 5>
//   // proto:  void QDnsTextRecord::QDnsTextRecord(const QDnsTextRecord & other);
extern "C"
void C_ZN14QDnsTextRecordC2ERKS_(const QDnsTextRecord & arg1) {
  new QDnsTextRecord(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 155, column 13>
//   // proto:  quint32 QDnsTextRecord::timeToLive();
extern "C"
void C_ZNK14QDnsTextRecord10timeToLiveEv(void *qthis) {
  ((QDnsTextRecord*)qthis)->timeToLive();
}
// _ZNK14QDnsTextRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 152, column 10>
//   // proto:  void QDnsTextRecord::swap(QDnsTextRecord & other);
extern "C"
void C_ZN14QDnsTextRecord4swapERS_(void *qthis, QDnsTextRecord & arg1) {
  ((QDnsTextRecord*)qthis)->swap(arg1);
}
// _ZN14QDnsTextRecord4swapERS_ swap(class QDnsTextRecord &)
//   // proto:  void QDnsTextRecord::~QDnsTextRecord();
extern "C"
void C_ZN14QDnsTextRecordD2Ev(void *qthis) {
  delete (QDnsTextRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 63, column 13>
//   // proto:  quint32 QDnsDomainNameRecord::timeToLive();
extern "C"
void C_ZNK20QDnsDomainNameRecord10timeToLiveEv(void *qthis) {
  ((QDnsDomainNameRecord*)qthis)->timeToLive();
}
// _ZNK20QDnsDomainNameRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 56, column 5>
//   // proto:  void QDnsDomainNameRecord::QDnsDomainNameRecord();
extern "C"
void C_ZN20QDnsDomainNameRecordC2Ev() {
  new QDnsDomainNameRecord();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 64, column 13>
//   // proto:  QString QDnsDomainNameRecord::value();
extern "C"
void C_ZNK20QDnsDomainNameRecord5valueEv(void *qthis) {
  ((QDnsDomainNameRecord*)qthis)->value();
}
// _ZNK20QDnsDomainNameRecord5valueEv value()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 60, column 10>
//   // proto:  void QDnsDomainNameRecord::swap(QDnsDomainNameRecord & other);
extern "C"
void C_ZN20QDnsDomainNameRecord4swapERS_(void *qthis, QDnsDomainNameRecord & arg1) {
  ((QDnsDomainNameRecord*)qthis)->swap(arg1);
}
// _ZN20QDnsDomainNameRecord4swapERS_ swap(class QDnsDomainNameRecord &)
//   // proto:  void QDnsDomainNameRecord::~QDnsDomainNameRecord();
extern "C"
void C_ZN20QDnsDomainNameRecordD2Ev(void *qthis) {
  delete (QDnsDomainNameRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 57, column 5>
//   // proto:  void QDnsDomainNameRecord::QDnsDomainNameRecord(const QDnsDomainNameRecord & other);
extern "C"
void C_ZN20QDnsDomainNameRecordC2ERKS_(const QDnsDomainNameRecord & arg1) {
  new QDnsDomainNameRecord(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 62, column 13>
//   // proto:  QString QDnsDomainNameRecord::name();
extern "C"
void C_ZNK20QDnsDomainNameRecord4nameEv(void *qthis) {
  ((QDnsDomainNameRecord*)qthis)->name();
}
// _ZNK20QDnsDomainNameRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 86, column 18>
//   // proto:  QHostAddress QDnsHostAddressRecord::value();
extern "C"
void C_ZNK21QDnsHostAddressRecord5valueEv(void *qthis) {
  ((QDnsHostAddressRecord*)qthis)->value();
}
// _ZNK21QDnsHostAddressRecord5valueEv value()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 78, column 5>
//   // proto:  void QDnsHostAddressRecord::QDnsHostAddressRecord();
extern "C"
void C_ZN21QDnsHostAddressRecordC2Ev() {
  new QDnsHostAddressRecord();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 84, column 13>
//   // proto:  QString QDnsHostAddressRecord::name();
extern "C"
void C_ZNK21QDnsHostAddressRecord4nameEv(void *qthis) {
  ((QDnsHostAddressRecord*)qthis)->name();
}
// _ZNK21QDnsHostAddressRecord4nameEv name()
//   // proto:  void QDnsHostAddressRecord::~QDnsHostAddressRecord();
extern "C"
void C_ZN21QDnsHostAddressRecordD2Ev(void *qthis) {
  delete (QDnsHostAddressRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 85, column 13>
//   // proto:  quint32 QDnsHostAddressRecord::timeToLive();
extern "C"
void C_ZNK21QDnsHostAddressRecord10timeToLiveEv(void *qthis) {
  ((QDnsHostAddressRecord*)qthis)->timeToLive();
}
// _ZNK21QDnsHostAddressRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 82, column 10>
//   // proto:  void QDnsHostAddressRecord::swap(QDnsHostAddressRecord & other);
extern "C"
void C_ZN21QDnsHostAddressRecord4swapERS_(void *qthis, QDnsHostAddressRecord & arg1) {
  ((QDnsHostAddressRecord*)qthis)->swap(arg1);
}
// _ZN21QDnsHostAddressRecord4swapERS_ swap(class QDnsHostAddressRecord &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 79, column 5>
//   // proto:  void QDnsHostAddressRecord::QDnsHostAddressRecord(const QDnsHostAddressRecord & other);
extern "C"
void C_ZN21QDnsHostAddressRecordC2ERKS_(const QDnsHostAddressRecord & arg1) {
  new QDnsHostAddressRecord(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 106, column 13>
//   // proto:  QString QDnsMailExchangeRecord::exchange();
extern "C"
void C_ZNK22QDnsMailExchangeRecord8exchangeEv(void *qthis) {
  ((QDnsMailExchangeRecord*)qthis)->exchange();
}
// _ZNK22QDnsMailExchangeRecord8exchangeEv exchange()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 101, column 5>
//   // proto:  void QDnsMailExchangeRecord::QDnsMailExchangeRecord(const QDnsMailExchangeRecord & other);
extern "C"
void C_ZN22QDnsMailExchangeRecordC2ERKS_(const QDnsMailExchangeRecord & arg1) {
  new QDnsMailExchangeRecord(arg1);
}
//   // proto:  void QDnsMailExchangeRecord::~QDnsMailExchangeRecord();
extern "C"
void C_ZN22QDnsMailExchangeRecordD2Ev(void *qthis) {
  delete (QDnsMailExchangeRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 108, column 13>
//   // proto:  quint16 QDnsMailExchangeRecord::preference();
extern "C"
void C_ZNK22QDnsMailExchangeRecord10preferenceEv(void *qthis) {
  ((QDnsMailExchangeRecord*)qthis)->preference();
}
// _ZNK22QDnsMailExchangeRecord10preferenceEv preference()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 109, column 13>
//   // proto:  quint32 QDnsMailExchangeRecord::timeToLive();
extern "C"
void C_ZNK22QDnsMailExchangeRecord10timeToLiveEv(void *qthis) {
  ((QDnsMailExchangeRecord*)qthis)->timeToLive();
}
// _ZNK22QDnsMailExchangeRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 107, column 13>
//   // proto:  QString QDnsMailExchangeRecord::name();
extern "C"
void C_ZNK22QDnsMailExchangeRecord4nameEv(void *qthis) {
  ((QDnsMailExchangeRecord*)qthis)->name();
}
// _ZNK22QDnsMailExchangeRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 100, column 5>
//   // proto:  void QDnsMailExchangeRecord::QDnsMailExchangeRecord();
extern "C"
void C_ZN22QDnsMailExchangeRecordC2Ev() {
  new QDnsMailExchangeRecord();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 104, column 10>
//   // proto:  void QDnsMailExchangeRecord::swap(QDnsMailExchangeRecord & other);
extern "C"
void C_ZN22QDnsMailExchangeRecord4swapERS_(void *qthis, QDnsMailExchangeRecord & arg1) {
  ((QDnsMailExchangeRecord*)qthis)->swap(arg1);
}
// _ZN22QDnsMailExchangeRecord4swapERS_ swap(class QDnsMailExchangeRecord &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 124, column 5>
//   // proto:  void QDnsServiceRecord::QDnsServiceRecord(const QDnsServiceRecord & other);
extern "C"
void C_ZN17QDnsServiceRecordC2ERKS_(const QDnsServiceRecord & arg1) {
  new QDnsServiceRecord(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 133, column 13>
//   // proto:  quint32 QDnsServiceRecord::timeToLive();
extern "C"
void C_ZNK17QDnsServiceRecord10timeToLiveEv(void *qthis) {
  ((QDnsServiceRecord*)qthis)->timeToLive();
}
// _ZNK17QDnsServiceRecord10timeToLiveEv timeToLive()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 132, column 13>
//   // proto:  QString QDnsServiceRecord::target();
extern "C"
void C_ZNK17QDnsServiceRecord6targetEv(void *qthis) {
  ((QDnsServiceRecord*)qthis)->target();
}
// _ZNK17QDnsServiceRecord6targetEv target()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 127, column 10>
//   // proto:  void QDnsServiceRecord::swap(QDnsServiceRecord & other);
extern "C"
void C_ZN17QDnsServiceRecord4swapERS_(void *qthis, QDnsServiceRecord & arg1) {
  ((QDnsServiceRecord*)qthis)->swap(arg1);
}
// _ZN17QDnsServiceRecord4swapERS_ swap(class QDnsServiceRecord &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 129, column 13>
//   // proto:  QString QDnsServiceRecord::name();
extern "C"
void C_ZNK17QDnsServiceRecord4nameEv(void *qthis) {
  ((QDnsServiceRecord*)qthis)->name();
}
// _ZNK17QDnsServiceRecord4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 134, column 13>
//   // proto:  quint16 QDnsServiceRecord::weight();
extern "C"
void C_ZNK17QDnsServiceRecord6weightEv(void *qthis) {
  ((QDnsServiceRecord*)qthis)->weight();
}
// _ZNK17QDnsServiceRecord6weightEv weight()
//   // proto:  void QDnsServiceRecord::~QDnsServiceRecord();
extern "C"
void C_ZN17QDnsServiceRecordD2Ev(void *qthis) {
  delete (QDnsServiceRecord*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 123, column 5>
//   // proto:  void QDnsServiceRecord::QDnsServiceRecord();
extern "C"
void C_ZN17QDnsServiceRecordC2Ev() {
  new QDnsServiceRecord();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 130, column 13>
//   // proto:  quint16 QDnsServiceRecord::port();
extern "C"
void C_ZNK17QDnsServiceRecord4portEv(void *qthis) {
  ((QDnsServiceRecord*)qthis)->port();
}
// _ZNK17QDnsServiceRecord4portEv port()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 131, column 13>
//   // proto:  quint16 QDnsServiceRecord::priority();
extern "C"
void C_ZNK17QDnsServiceRecord8priorityEv(void *qthis) {
  ((QDnsServiceRecord*)qthis)->priority();
}
// _ZNK17QDnsServiceRecord8priorityEv priority()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 213, column 13>
//   // proto:  QString QDnsLookup::name();
extern "C"
void C_ZNK10QDnsLookup4nameEv(void *qthis) {
  ((QDnsLookup*)qthis)->name();
}
// _ZNK10QDnsLookup4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 236, column 10>
//   // proto:  void QDnsLookup::finished();
extern "C"
void C_ZN10QDnsLookup8finishedEv(void *qthis) {
  ((QDnsLookup*)qthis)->finished();
}
// _ZN10QDnsLookup8finishedEv finished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 226, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::pointerRecords();
extern "C"
void C_ZNK10QDnsLookup14pointerRecordsEv(void *qthis) {
  ((QDnsLookup*)qthis)->pointerRecords();
}
// _ZNK10QDnsLookup14pointerRecordsEv pointerRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 237, column 10>
//   // proto:  void QDnsLookup::nameChanged(const QString & name);
extern "C"
void C_ZN10QDnsLookup11nameChangedERK7QString(void *qthis, const QString & arg1) {
  ((QDnsLookup*)qthis)->nameChanged(arg1);
}
// _ZN10QDnsLookup11nameChangedERK7QString nameChanged(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 219, column 18>
//   // proto:  QHostAddress QDnsLookup::nameserver();
extern "C"
void C_ZNK10QDnsLookup10nameserverEv(void *qthis) {
  ((QDnsLookup*)qthis)->nameserver();
}
// _ZNK10QDnsLookup10nameserverEv nameserver()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 239, column 10>
//   // proto:  void QDnsLookup::nameserverChanged(const QHostAddress & nameserver);
extern "C"
void C_ZN10QDnsLookup17nameserverChangedERK12QHostAddress(void *qthis, const QHostAddress & arg1) {
  ((QDnsLookup*)qthis)->nameserverChanged(arg1);
}
// _ZN10QDnsLookup17nameserverChangedERK12QHostAddress nameserverChanged(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 217, column 10>
//   // proto:  void QDnsLookup::setType(QDnsLookup::Type );
extern "C"
void C_ZN10QDnsLookup7setTypeENS_4TypeE(void *qthis, QDnsLookup::Type arg1) {
  ((QDnsLookup*)qthis)->setType(arg1);
}
// _ZN10QDnsLookup7setTypeENS_4TypeE setType(class QDnsLookup::Type)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 206, column 5>
//   // proto:  void QDnsLookup::QDnsLookup(QDnsLookup::Type type, const QString & name, const QHostAddress & nameserver, QObject * parent);
extern "C"
void C_ZN10QDnsLookupC2ENS_4TypeERK7QStringRK12QHostAddressP7QObject(QDnsLookup::Type arg1, const QString & arg2, const QHostAddress & arg3, QObject * arg4) {
  new QDnsLookup(arg1, arg2, arg3, arg4);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 209, column 11>
//   // proto:  QDnsLookup::Error QDnsLookup::error();
extern "C"
void C_ZNK10QDnsLookup5errorEv(void *qthis) {
  ((QDnsLookup*)qthis)->error();
}
// _ZNK10QDnsLookup5errorEv error()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 216, column 10>
//   // proto:  QDnsLookup::Type QDnsLookup::type();
extern "C"
void C_ZNK10QDnsLookup4typeEv(void *qthis) {
  ((QDnsLookup*)qthis)->type();
}
// _ZNK10QDnsLookup4typeEv type()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 225, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::nameServerRecords();
extern "C"
void C_ZNK10QDnsLookup17nameServerRecordsEv(void *qthis) {
  ((QDnsLookup*)qthis)->nameServerRecords();
}
// _ZNK10QDnsLookup17nameServerRecordsEv nameServerRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 232, column 10>
//   // proto:  void QDnsLookup::abort();
extern "C"
void C_ZN10QDnsLookup5abortEv(void *qthis) {
  ((QDnsLookup*)qthis)->abort();
}
// _ZN10QDnsLookup5abortEv abort()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 238, column 10>
//   // proto:  void QDnsLookup::typeChanged(QDnsLookup::Type type);
extern "C"
void C_ZN10QDnsLookup11typeChangedENS_4TypeE(void *qthis, QDnsLookup::Type arg1) {
  ((QDnsLookup*)qthis)->typeChanged(arg1);
}
// _ZN10QDnsLookup11typeChangedENS_4TypeE typeChanged(enum QDnsLookup::Type)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 223, column 34>
//   // proto:  QList<QDnsHostAddressRecord> QDnsLookup::hostAddressRecords();
extern "C"
void C_ZNK10QDnsLookup18hostAddressRecordsEv(void *qthis) {
  ((QDnsLookup*)qthis)->hostAddressRecords();
}
// _ZNK10QDnsLookup18hostAddressRecordsEv hostAddressRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 233, column 10>
//   // proto:  void QDnsLookup::lookup();
extern "C"
void C_ZN10QDnsLookup6lookupEv(void *qthis) {
  ((QDnsLookup*)qthis)->lookup();
}
// _ZN10QDnsLookup6lookupEv lookup()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 228, column 27>
//   // proto:  QList<QDnsTextRecord> QDnsLookup::textRecords();
extern "C"
void C_ZNK10QDnsLookup11textRecordsEv(void *qthis) {
  ((QDnsLookup*)qthis)->textRecords();
}
// _ZNK10QDnsLookup11textRecordsEv textRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 211, column 10>
//   // proto:  bool QDnsLookup::isFinished();
extern "C"
void C_ZNK10QDnsLookup10isFinishedEv(void *qthis) {
  ((QDnsLookup*)qthis)->isFinished();
}
// _ZNK10QDnsLookup10isFinishedEv isFinished()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 214, column 10>
//   // proto:  void QDnsLookup::setName(const QString & name);
extern "C"
void C_ZN10QDnsLookup7setNameERK7QString(void *qthis, const QString & arg1) {
  ((QDnsLookup*)qthis)->setName(arg1);
}
// _ZN10QDnsLookup7setNameERK7QString setName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 227, column 30>
//   // proto:  QList<QDnsServiceRecord> QDnsLookup::serviceRecords();
extern "C"
void C_ZNK10QDnsLookup14serviceRecordsEv(void *qthis) {
  ((QDnsLookup*)qthis)->serviceRecords();
}
// _ZNK10QDnsLookup14serviceRecordsEv serviceRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 220, column 10>
//   // proto:  void QDnsLookup::setNameserver(const QHostAddress & nameserver);
extern "C"
void C_ZN10QDnsLookup13setNameserverERK12QHostAddress(void *qthis, const QHostAddress & arg1) {
  ((QDnsLookup*)qthis)->setNameserver(arg1);
}
// _ZN10QDnsLookup13setNameserverERK12QHostAddress setNameserver(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 222, column 33>
//   // proto:  QList<QDnsDomainNameRecord> QDnsLookup::canonicalNameRecords();
extern "C"
void C_ZNK10QDnsLookup20canonicalNameRecordsEv(void *qthis) {
  ((QDnsLookup*)qthis)->canonicalNameRecords();
}
// _ZNK10QDnsLookup20canonicalNameRecordsEv canonicalNameRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 224, column 35>
//   // proto:  QList<QDnsMailExchangeRecord> QDnsLookup::mailExchangeRecords();
extern "C"
void C_ZNK10QDnsLookup19mailExchangeRecordsEv(void *qthis) {
  ((QDnsLookup*)qthis)->mailExchangeRecords();
}
// _ZNK10QDnsLookup19mailExchangeRecordsEv mailExchangeRecords()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 205, column 5>
//   // proto:  void QDnsLookup::QDnsLookup(QDnsLookup::Type type, const QString & name, QObject * parent);
extern "C"
void C_ZN10QDnsLookupC2ENS_4TypeERK7QStringP7QObject(QDnsLookup::Type arg1, const QString & arg2, QObject * arg3) {
  new QDnsLookup(arg1, arg2, arg3);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 210, column 13>
//   // proto:  QString QDnsLookup::errorString();
extern "C"
void C_ZNK10QDnsLookup11errorStringEv(void *qthis) {
  ((QDnsLookup*)qthis)->errorString();
}
// _ZNK10QDnsLookup11errorStringEv errorString()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 169, column 5>
//   // proto:  const QMetaObject * QDnsLookup::metaObject();
extern "C"
void C_ZNK10QDnsLookup10metaObjectEv(void *qthis) {
  ((QDnsLookup*)qthis)->metaObject();
}
// _ZNK10QDnsLookup10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtNetwork/qdnslookup.h', line 204, column 14>
//   // proto:  void QDnsLookup::QDnsLookup(QObject * parent);
extern "C"
void C_ZN10QDnsLookupC2EP7QObject(QObject * arg1) {
  new QDnsLookup(arg1);
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

