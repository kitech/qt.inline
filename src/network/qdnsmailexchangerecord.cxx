//  header block begin
// /usr/include/qt/QtNetwork/qdnslookup.h
#ifndef protected
#define protected public
#endif
#include <qdnslookup.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDnsMailExchangeRecord is pure virtual: false
// QDnsMailExchangeRecord has virtual projected: false
//  header block end

//  main block begin

class MyQDnsMailExchangeRecord : public QDnsMailExchangeRecord {
public:
  virtual ~MyQDnsMailExchangeRecord() {}
// void QDnsMailExchangeRecord()
MyQDnsMailExchangeRecord() : QDnsMailExchangeRecord() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:111
// [-2] void QDnsMailExchangeRecord()
extern "C"
void* C_ZN22QDnsMailExchangeRecordC2Ev() {
  return  new QDnsMailExchangeRecord();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:114
// [8] QDnsMailExchangeRecord & operator=(class QDnsMailExchangeRecord &&)
extern "C"
void* C_ZN22QDnsMailExchangeRecordaSEOS_(void *this_, QDnsMailExchangeRecord && other) {
  auto& rv = ((QDnsMailExchangeRecord*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:116
// [8] QDnsMailExchangeRecord & operator=(const class QDnsMailExchangeRecord &)
extern "C"
void* C_ZN22QDnsMailExchangeRecordaSERKS_(void *this_, QDnsMailExchangeRecord* other) {
  auto& rv = ((QDnsMailExchangeRecord*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:117
// [-2] void ~QDnsMailExchangeRecord()
extern "C"
void C_ZN22QDnsMailExchangeRecordD2Ev(void *this_) {
  delete (QDnsMailExchangeRecord*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:119
// [-2] void swap(class QDnsMailExchangeRecord &)
extern "C"
void C_ZN22QDnsMailExchangeRecord4swapERS_(void *this_, QDnsMailExchangeRecord* other) {
  ((QDnsMailExchangeRecord*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:121
// [8] QString exchange()
extern "C"
void* C_ZNK22QDnsMailExchangeRecord8exchangeEv(void *this_) {
  auto rv = ((QDnsMailExchangeRecord*)this_)->exchange();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:122
// [8] QString name()
extern "C"
void* C_ZNK22QDnsMailExchangeRecord4nameEv(void *this_) {
  auto rv = ((QDnsMailExchangeRecord*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:123
// [2] quint16 preference()
extern "C"
quint16 C_ZNK22QDnsMailExchangeRecord10preferenceEv(void *this_) {
  return (quint16)((QDnsMailExchangeRecord*)this_)->preference();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:124
// [4] quint32 timeToLive()
extern "C"
quint32 C_ZNK22QDnsMailExchangeRecord10timeToLiveEv(void *this_) {
  return (quint32)((QDnsMailExchangeRecord*)this_)->timeToLive();
}

//  main block end
