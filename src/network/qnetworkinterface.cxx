// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtNetwork/qnetworkinterface.h
// dst-file: /src/network/qnetworkinterface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qnetworkinterface.h>


#include <qhostaddress.h>
#include <qstring.h>
#include <qlist.h>
#include <qnetworkinterface.h>
// <= header block end

// main block begin =>
void __keep_qnetworkinterface_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 57, column 10>
//   // proto:  void QNetworkAddressEntry::swap(QNetworkAddressEntry & other);
if (true) {
  auto f = [](QNetworkAddressEntry flythis, QNetworkAddressEntry & arg1) {
    ((QNetworkAddressEntry*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkAddressEntry4swapERS_ swap(class QNetworkAddressEntry &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 99, column 10>
//   // proto:  void QNetworkInterface::swap(QNetworkInterface & other);
if (true) {
  auto f = [](QNetworkInterface flythis, QNetworkInterface & arg1) {
    ((QNetworkInterface*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkInterface4swapERS_ swap(class QNetworkInterface &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QNetworkAddressEntry_Class_Size()
{
  return sizeof(QNetworkAddressEntry);
}

extern "C"
int QNetworkInterface_Class_Size()
{
  return sizeof(QNetworkInterface);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 57, column 10>
//   // proto:  void QNetworkAddressEntry::swap(QNetworkAddressEntry & other);
// _ZN20QNetworkAddressEntry4swapERS_ swap(class QNetworkAddressEntry &)
extern "C"
void
C_ZN20QNetworkAddressEntry4swapERS_(void *qthis,
QNetworkAddressEntry* arg1) {
  ((QNetworkAddressEntry*)qthis)->swap(*((QNetworkAddressEntry*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 69, column 10>
//   // proto:  void QNetworkAddressEntry::setPrefixLength(int length);
// _ZN20QNetworkAddressEntry15setPrefixLengthEi setPrefixLength(int)
extern "C"
void
C_ZN20QNetworkAddressEntry15setPrefixLengthEi(void *qthis,
int arg1) {
  ((QNetworkAddressEntry*)qthis)->setPrefixLength(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 68, column 9>
//   // proto:  int QNetworkAddressEntry::prefixLength();
// _ZNK20QNetworkAddressEntry12prefixLengthEv prefixLength()
extern "C"
int
C_ZNK20QNetworkAddressEntry12prefixLengthEv(void *qthis) {
  auto ret =
  ((QNetworkAddressEntry*)qthis)->prefixLength();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 66, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::netmask();
// _ZNK20QNetworkAddressEntry7netmaskEv netmask()
extern "C"
QHostAddress*
C_ZNK20QNetworkAddressEntry7netmaskEv(void *qthis) {
  auto ret =
  ((QNetworkAddressEntry*)qthis)->netmask();
  return new QHostAddress(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 72, column 10>
//   // proto:  void QNetworkAddressEntry::setBroadcast(const QHostAddress & newBroadcast);
// _ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress setBroadcast(const class QHostAddress &)
extern "C"
void
C_ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress(void *qthis,
const QHostAddress* arg1) {
  ((QNetworkAddressEntry*)qthis)->setBroadcast(*((const QHostAddress*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 52, column 5>
//   // proto:  void QNetworkAddressEntry::QNetworkAddressEntry();
extern "C"
QNetworkAddressEntry*
C_ZN20QNetworkAddressEntryC2Ev() {
  auto ret = new QNetworkAddressEntry();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 64, column 10>
//   // proto:  void QNetworkAddressEntry::setIp(const QHostAddress & newIp);
// _ZN20QNetworkAddressEntry5setIpERK12QHostAddress setIp(const class QHostAddress &)
extern "C"
void
C_ZN20QNetworkAddressEntry5setIpERK12QHostAddress(void *qthis,
const QHostAddress* arg1) {
  ((QNetworkAddressEntry*)qthis)->setIp(*((const QHostAddress*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 67, column 10>
//   // proto:  void QNetworkAddressEntry::setNetmask(const QHostAddress & newNetmask);
// _ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress setNetmask(const class QHostAddress &)
extern "C"
void
C_ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress(void *qthis,
const QHostAddress* arg1) {
  ((QNetworkAddressEntry*)qthis)->setNetmask(*((const QHostAddress*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 53, column 5>
//   // proto:  void QNetworkAddressEntry::QNetworkAddressEntry(const QNetworkAddressEntry & other);
extern "C"
QNetworkAddressEntry*
C_ZN20QNetworkAddressEntryC2ERKS_(const QNetworkAddressEntry* arg1) {
  auto ret = new QNetworkAddressEntry(*((const QNetworkAddressEntry*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 71, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::broadcast();
// _ZNK20QNetworkAddressEntry9broadcastEv broadcast()
extern "C"
QHostAddress*
C_ZNK20QNetworkAddressEntry9broadcastEv(void *qthis) {
  auto ret =
  ((QNetworkAddressEntry*)qthis)->broadcast();
  return new QHostAddress(ret); // 5
}
//   // proto:  void QNetworkAddressEntry::~QNetworkAddressEntry();
extern "C"
void C_ZN20QNetworkAddressEntryD2Ev(void *qthis) {
  delete (QNetworkAddressEntry*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 63, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::ip();
// _ZNK20QNetworkAddressEntry2ipEv ip()
extern "C"
QHostAddress*
C_ZNK20QNetworkAddressEntry2ipEv(void *qthis) {
  auto ret =
  ((QNetworkAddressEntry*)qthis)->ip();
  return new QHostAddress(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 110, column 30>
//   // proto: static QNetworkInterface QNetworkInterface::interfaceFromName(const QString & name);
// _ZN17QNetworkInterface17interfaceFromNameERK7QString interfaceFromName(const class QString &)
extern "C"
QNetworkInterface*
C_ZN17QNetworkInterface17interfaceFromNameERK7QString(const QString* arg1) {
  auto ret =
  QNetworkInterface::interfaceFromName(*((const QString*)arg1));
  return new QNetworkInterface(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 94, column 5>
//   // proto:  void QNetworkInterface::QNetworkInterface();
extern "C"
QNetworkInterface*
C_ZN17QNetworkInterfaceC2Ev() {
  auto ret = new QNetworkInterface();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 107, column 13>
//   // proto:  QString QNetworkInterface::hardwareAddress();
// _ZNK17QNetworkInterface15hardwareAddressEv hardwareAddress()
extern "C"
QString*
C_ZNK17QNetworkInterface15hardwareAddressEv(void *qthis) {
  auto ret =
  ((QNetworkInterface*)qthis)->hardwareAddress();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 104, column 13>
//   // proto:  QString QNetworkInterface::name();
// _ZNK17QNetworkInterface4nameEv name()
extern "C"
QString*
C_ZNK17QNetworkInterface4nameEv(void *qthis) {
  auto ret =
  ((QNetworkInterface*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 106, column 20>
//   // proto:  InterfaceFlags QNetworkInterface::flags();
// _ZNK17QNetworkInterface5flagsEv flags()
extern "C"
QFlags<QNetworkInterface::InterfaceFlag>*
C_ZNK17QNetworkInterface5flagsEv(void *qthis) {
  auto ret =
  ((QNetworkInterface*)qthis)->flags();
  return new QFlags<QNetworkInterface::InterfaceFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 99, column 10>
//   // proto:  void QNetworkInterface::swap(QNetworkInterface & other);
// _ZN17QNetworkInterface4swapERS_ swap(class QNetworkInterface &)
extern "C"
void
C_ZN17QNetworkInterface4swapERS_(void *qthis,
QNetworkInterface* arg1) {
  ((QNetworkInterface*)qthis)->swap(*((QNetworkInterface*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 113, column 32>
//   // proto: static QList<QHostAddress> QNetworkInterface::allAddresses();
// _ZN17QNetworkInterface12allAddressesEv allAddresses()
extern "C"
QList<QHostAddress>*
C_ZN17QNetworkInterface12allAddressesEv() {
  auto ret =
  QNetworkInterface::allAddresses();
  return new QList<QHostAddress>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 105, column 13>
//   // proto:  QString QNetworkInterface::humanReadableName();
// _ZNK17QNetworkInterface17humanReadableNameEv humanReadableName()
extern "C"
QString*
C_ZNK17QNetworkInterface17humanReadableNameEv(void *qthis) {
  auto ret =
  ((QNetworkInterface*)qthis)->humanReadableName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 103, column 9>
//   // proto:  int QNetworkInterface::index();
// _ZNK17QNetworkInterface5indexEv index()
extern "C"
int
C_ZNK17QNetworkInterface5indexEv(void *qthis) {
  auto ret =
  ((QNetworkInterface*)qthis)->index();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 101, column 10>
//   // proto:  bool QNetworkInterface::isValid();
// _ZNK17QNetworkInterface7isValidEv isValid()
extern "C"
bool
C_ZNK17QNetworkInterface7isValidEv(void *qthis) {
  auto ret =
  ((QNetworkInterface*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 95, column 5>
//   // proto:  void QNetworkInterface::QNetworkInterface(const QNetworkInterface & other);
extern "C"
QNetworkInterface*
C_ZN17QNetworkInterfaceC2ERKS_(const QNetworkInterface* arg1) {
  auto ret = new QNetworkInterface(*((const QNetworkInterface*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 112, column 37>
//   // proto: static QList<QNetworkInterface> QNetworkInterface::allInterfaces();
// _ZN17QNetworkInterface13allInterfacesEv allInterfaces()
extern "C"
QList<QNetworkInterface>*
C_ZN17QNetworkInterface13allInterfacesEv() {
  auto ret =
  QNetworkInterface::allInterfaces();
  return new QList<QNetworkInterface>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 108, column 33>
//   // proto:  QList<QNetworkAddressEntry> QNetworkInterface::addressEntries();
// _ZNK17QNetworkInterface14addressEntriesEv addressEntries()
extern "C"
QList<QNetworkAddressEntry>*
C_ZNK17QNetworkInterface14addressEntriesEv(void *qthis) {
  auto ret =
  ((QNetworkInterface*)qthis)->addressEntries();
  return new QList<QNetworkAddressEntry>(ret); // 5
}
//   // proto:  void QNetworkInterface::~QNetworkInterface();
extern "C"
void C_ZN17QNetworkInterfaceD2Ev(void *qthis) {
  delete (QNetworkInterface*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 111, column 30>
//   // proto: static QNetworkInterface QNetworkInterface::interfaceFromIndex(int index);
// _ZN17QNetworkInterface18interfaceFromIndexEi interfaceFromIndex(int)
extern "C"
QNetworkInterface*
C_ZN17QNetworkInterface18interfaceFromIndexEi(int arg1) {
  auto ret =
  QNetworkInterface::interfaceFromIndex(arg1);
  return new QNetworkInterface(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

