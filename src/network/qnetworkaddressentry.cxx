//  header block begin
// /usr/include/qt/QtNetwork/qnetworkinterface.h
#include <qnetworkinterface.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkAddressEntry is pure virtual: false
// QNetworkAddressEntry has virtual projected: false
//  header block end

//  main block begin

class MyQNetworkAddressEntry : public QNetworkAddressEntry {
public:
  virtual ~MyQNetworkAddressEntry() {}
// void QNetworkAddressEntry()
MyQNetworkAddressEntry() : QNetworkAddressEntry() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:59
// [-2] void QNetworkAddressEntry()
extern "C"
void* C_ZN20QNetworkAddressEntryC2Ev() {
  return  new QNetworkAddressEntry();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:62
// [8] QNetworkAddressEntry & operator=(class QNetworkAddressEntry &&)
extern "C"
void* C_ZN20QNetworkAddressEntryaSEOS_(void *this_, QNetworkAddressEntry && other) {
  auto& rv = ((QNetworkAddressEntry*)this_)->operator=(other);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:64
// [8] QNetworkAddressEntry & operator=(const class QNetworkAddressEntry &)
extern "C"
void* C_ZN20QNetworkAddressEntryaSERKS_(void *this_, QNetworkAddressEntry* other) {
  auto& rv = ((QNetworkAddressEntry*)this_)->operator=(*other);
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:65
// [-2] void ~QNetworkAddressEntry()
extern "C"
void C_ZN20QNetworkAddressEntryD2Ev(void *this_) {
  delete (QNetworkAddressEntry*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:67
// [-2] void swap(class QNetworkAddressEntry &)
extern "C"
void C_ZN20QNetworkAddressEntry4swapERS_(void *this_, QNetworkAddressEntry* other) {
  ((QNetworkAddressEntry*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:69
// [1] bool operator==(const class QNetworkAddressEntry &)
extern "C"
bool C_ZNK20QNetworkAddressEntryeqERKS_(void *this_, QNetworkAddressEntry* other) {
  return (bool)((QNetworkAddressEntry*)this_)->operator==(*other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:70
// [1] bool operator!=(const class QNetworkAddressEntry &)
extern "C"
bool C_ZNK20QNetworkAddressEntryneERKS_(void *this_, QNetworkAddressEntry* other) {
  return (bool)((QNetworkAddressEntry*)this_)->operator!=(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:73
// [8] QHostAddress ip()
extern "C"
void* C_ZNK20QNetworkAddressEntry2ipEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->ip();
return new QHostAddress(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:74
// [-2] void setIp(const class QHostAddress &)
extern "C"
void C_ZN20QNetworkAddressEntry5setIpERK12QHostAddress(void *this_, QHostAddress* newIp) {
  ((QNetworkAddressEntry*)this_)->setIp(*newIp);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:76
// [8] QHostAddress netmask()
extern "C"
void* C_ZNK20QNetworkAddressEntry7netmaskEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->netmask();
return new QHostAddress(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:77
// [-2] void setNetmask(const class QHostAddress &)
extern "C"
void C_ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress(void *this_, QHostAddress* newNetmask) {
  ((QNetworkAddressEntry*)this_)->setNetmask(*newNetmask);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:78
// [4] int prefixLength()
extern "C"
int C_ZNK20QNetworkAddressEntry12prefixLengthEv(void *this_) {
  return (int)((QNetworkAddressEntry*)this_)->prefixLength();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:79
// [-2] void setPrefixLength(int)
extern "C"
void C_ZN20QNetworkAddressEntry15setPrefixLengthEi(void *this_, int length) {
  ((QNetworkAddressEntry*)this_)->setPrefixLength(length);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:81
// [8] QHostAddress broadcast()
extern "C"
void* C_ZNK20QNetworkAddressEntry9broadcastEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->broadcast();
return new QHostAddress(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:82
// [-2] void setBroadcast(const class QHostAddress &)
extern "C"
void C_ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress(void *this_, QHostAddress* newBroadcast) {
  ((QNetworkAddressEntry*)this_)->setBroadcast(*newBroadcast);
}
//  main block end
