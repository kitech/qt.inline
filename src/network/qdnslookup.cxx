//  header block begin
// /usr/include/qt/QtNetwork/qdnslookup.h
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsLookup is pure virtual: false
// QDnsLookup has virtual projected: false
//  header block end

//  main block begin

class MyQDnsLookup : public QDnsLookup {
public:
  virtual ~MyQDnsLookup() {}
// void QDnsLookup(class QObject *)
MyQDnsLookup(QObject * parent) : QDnsLookup(parent) {}
// void QDnsLookup(enum QDnsLookup::Type, const class QString &, class QObject *)
MyQDnsLookup(QDnsLookup::Type type_, const QString & name, QObject * parent) : QDnsLookup(type_, name, parent) {}
// void QDnsLookup(enum QDnsLookup::Type, const class QString &, const class QHostAddress &, class QObject *)
MyQDnsLookup(QDnsLookup::Type type_, const QString & name, const QHostAddress & nameserver, QObject * parent) : QDnsLookup(type_, name, nameserver, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:186
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QDnsLookup10metaObjectEv(void *this_) {
  return (void*)((QDnsLookup*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:221
// [-2] void QDnsLookup(class QObject *)
extern "C"
void* C_ZN10QDnsLookupC2EP7QObject(QObject * parent) {
  return  new QDnsLookup(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:222
// [-2] void QDnsLookup(enum QDnsLookup::Type, const class QString &, class QObject *)
extern "C"
void* C_ZN10QDnsLookupC2ENS_4TypeERK7QStringP7QObject(QDnsLookup::Type type_, QString* name, QObject * parent) {
  return  new QDnsLookup(type_, *name, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:223
// [-2] void QDnsLookup(enum QDnsLookup::Type, const class QString &, const class QHostAddress &, class QObject *)
extern "C"
void* C_ZN10QDnsLookupC2ENS_4TypeERK7QStringRK12QHostAddressP7QObject(QDnsLookup::Type type_, QString* name, QHostAddress* nameserver, QObject * parent) {
  return  new QDnsLookup(type_, *name, *nameserver, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:224
// [-2] void ~QDnsLookup()
extern "C"
void C_ZN10QDnsLookupD2Ev(void *this_) {
  delete (QDnsLookup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:226
// [4] QDnsLookup::Error error()
extern "C"
QDnsLookup::Error C_ZNK10QDnsLookup5errorEv(void *this_) {
  return (QDnsLookup::Error)((QDnsLookup*)this_)->error();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:227
// [8] QString errorString()
extern "C"
void* C_ZNK10QDnsLookup11errorStringEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:228
// [1] bool isFinished()
extern "C"
bool C_ZNK10QDnsLookup10isFinishedEv(void *this_) {
  return (bool)((QDnsLookup*)this_)->isFinished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:230
// [8] QString name()
extern "C"
void* C_ZNK10QDnsLookup4nameEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:231
// [-2] void setName(const class QString &)
extern "C"
void C_ZN10QDnsLookup7setNameERK7QString(void *this_, QString* name) {
  ((QDnsLookup*)this_)->setName(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:233
// [4] QDnsLookup::Type type()
extern "C"
QDnsLookup::Type C_ZNK10QDnsLookup4typeEv(void *this_) {
  return (QDnsLookup::Type)((QDnsLookup*)this_)->type();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:234
// [-2] void setType(class QDnsLookup::Type)
extern "C"
void C_ZN10QDnsLookup7setTypeENS_4TypeE(void *this_, QDnsLookup::Type arg0) {
  ((QDnsLookup*)this_)->setType(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:236
// [8] QHostAddress nameserver()
extern "C"
void* C_ZNK10QDnsLookup10nameserverEv(void *this_) {
  auto rv = ((QDnsLookup*)this_)->nameserver();
return new QHostAddress(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:237
// [-2] void setNameserver(const class QHostAddress &)
extern "C"
void C_ZN10QDnsLookup13setNameserverERK12QHostAddress(void *this_, QHostAddress* nameserver) {
  ((QDnsLookup*)this_)->setNameserver(*nameserver);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:249
// [-2] void abort()
extern "C"
void C_ZN10QDnsLookup5abortEv(void *this_) {
  ((QDnsLookup*)this_)->abort();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:250
// [-2] void lookup()
extern "C"
void C_ZN10QDnsLookup6lookupEv(void *this_) {
  ((QDnsLookup*)this_)->lookup();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:253
// [-2] void finished()
extern "C"
void C_ZN10QDnsLookup8finishedEv(void *this_) {
  ((QDnsLookup*)this_)->finished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:254
// [-2] void nameChanged(const class QString &)
extern "C"
void C_ZN10QDnsLookup11nameChangedERK7QString(void *this_, QString* name) {
  ((QDnsLookup*)this_)->nameChanged(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:255
// [-2] void typeChanged(enum QDnsLookup::Type)
extern "C"
void C_ZN10QDnsLookup11typeChangedENS_4TypeE(void *this_, QDnsLookup::Type type_) {
  ((QDnsLookup*)this_)->typeChanged(type_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:256
// [-2] void nameserverChanged(const class QHostAddress &)
extern "C"
void C_ZN10QDnsLookup17nameserverChangedERK12QHostAddress(void *this_, QHostAddress* nameserver) {
  ((QDnsLookup*)this_)->nameserverChanged(*nameserver);
}
//  main block end
