// auto generated, do not modify.
// created: Tue Jan 19 21:43:55 2016
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
// <= use block end

// ext block begin =>
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

