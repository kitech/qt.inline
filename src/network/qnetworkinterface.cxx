#include <qlist.h>
#include <qstring.h>
#include <qhostaddress.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtNetwork/qnetworkinterface.h
// dst-file: /src/network/qnetworkinterface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qnetworkinterface.h>

extern "C" {

int QNetworkAddressEntry_Class_Size()
{
  return sizeof(QNetworkAddressEntry);
}

int QNetworkInterface_Class_Size()
{
  return sizeof(QNetworkInterface);
}

}; // <= extern "C" block end

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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 69, column 10>
//   // proto:  void QNetworkAddressEntry::setPrefixLength(int length);
if (true) {
  auto f = [](QNetworkAddressEntry flythis, int arg1) {
    ((QNetworkAddressEntry*)0)->setPrefixLength(arg1);
    flythis.setPrefixLength(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkAddressEntry15setPrefixLengthEi setPrefixLength(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 68, column 9>
//   // proto:  int QNetworkAddressEntry::prefixLength();
if (true) {
  auto f = [](QNetworkAddressEntry flythis) {
    ((QNetworkAddressEntry*)0)->prefixLength();
    flythis.prefixLength();
  };
  if (f == nullptr){}
}
// _ZNK20QNetworkAddressEntry12prefixLengthEv prefixLength()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 66, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::netmask();
if (true) {
  auto f = [](QNetworkAddressEntry flythis) {
    ((QNetworkAddressEntry*)0)->netmask();
    flythis.netmask();
  };
  if (f == nullptr){}
}
// _ZNK20QNetworkAddressEntry7netmaskEv netmask()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 72, column 10>
//   // proto:  void QNetworkAddressEntry::setBroadcast(const QHostAddress & newBroadcast);
if (true) {
  auto f = [](QNetworkAddressEntry flythis, const QHostAddress & arg1) {
    ((QNetworkAddressEntry*)0)->setBroadcast(arg1);
    flythis.setBroadcast(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress setBroadcast(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 52, column 5>
//   // proto:  void QNetworkAddressEntry::QNetworkAddressEntry();
if (true) {
  auto f = []() {
    new QNetworkAddressEntry();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 64, column 10>
//   // proto:  void QNetworkAddressEntry::setIp(const QHostAddress & newIp);
if (true) {
  auto f = [](QNetworkAddressEntry flythis, const QHostAddress & arg1) {
    ((QNetworkAddressEntry*)0)->setIp(arg1);
    flythis.setIp(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkAddressEntry5setIpERK12QHostAddress setIp(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 67, column 10>
//   // proto:  void QNetworkAddressEntry::setNetmask(const QHostAddress & newNetmask);
if (true) {
  auto f = [](QNetworkAddressEntry flythis, const QHostAddress & arg1) {
    ((QNetworkAddressEntry*)0)->setNetmask(arg1);
    flythis.setNetmask(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress setNetmask(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 53, column 5>
//   // proto:  void QNetworkAddressEntry::QNetworkAddressEntry(const QNetworkAddressEntry & other);
if (true) {
  auto f = [](const QNetworkAddressEntry & arg1) {
    new QNetworkAddressEntry(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 71, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::broadcast();
if (true) {
  auto f = [](QNetworkAddressEntry flythis) {
    ((QNetworkAddressEntry*)0)->broadcast();
    flythis.broadcast();
  };
  if (f == nullptr){}
}
// _ZNK20QNetworkAddressEntry9broadcastEv broadcast()
//   // proto:  void QNetworkAddressEntry::~QNetworkAddressEntry();
if (true) {
  delete ((QNetworkAddressEntry*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 63, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::ip();
if (true) {
  auto f = [](QNetworkAddressEntry flythis) {
    ((QNetworkAddressEntry*)0)->ip();
    flythis.ip();
  };
  if (f == nullptr){}
}
// _ZNK20QNetworkAddressEntry2ipEv ip()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 110, column 30>
//   // proto: static QNetworkInterface QNetworkInterface::interfaceFromName(const QString & name);
if (true) {
  auto f = [](QNetworkInterface flythis, const QString & arg1) {
    ((QNetworkInterface*)0)->interfaceFromName(arg1);
    flythis.interfaceFromName(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkInterface17interfaceFromNameERK7QString interfaceFromName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 94, column 5>
//   // proto:  void QNetworkInterface::QNetworkInterface();
if (true) {
  auto f = []() {
    new QNetworkInterface();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 107, column 13>
//   // proto:  QString QNetworkInterface::hardwareAddress();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->hardwareAddress();
    flythis.hardwareAddress();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkInterface15hardwareAddressEv hardwareAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 104, column 13>
//   // proto:  QString QNetworkInterface::name();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->name();
    flythis.name();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkInterface4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 106, column 20>
//   // proto:  InterfaceFlags QNetworkInterface::flags();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->flags();
    flythis.flags();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkInterface5flagsEv flags()
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
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 113, column 32>
//   // proto: static QList<QHostAddress> QNetworkInterface::allAddresses();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->allAddresses();
    flythis.allAddresses();
  };
  if (f == nullptr){}
}
// _ZN17QNetworkInterface12allAddressesEv allAddresses()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 105, column 13>
//   // proto:  QString QNetworkInterface::humanReadableName();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->humanReadableName();
    flythis.humanReadableName();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkInterface17humanReadableNameEv humanReadableName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 103, column 9>
//   // proto:  int QNetworkInterface::index();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->index();
    flythis.index();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkInterface5indexEv index()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 101, column 10>
//   // proto:  bool QNetworkInterface::isValid();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkInterface7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 95, column 5>
//   // proto:  void QNetworkInterface::QNetworkInterface(const QNetworkInterface & other);
if (true) {
  auto f = [](const QNetworkInterface & arg1) {
    new QNetworkInterface(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 112, column 37>
//   // proto: static QList<QNetworkInterface> QNetworkInterface::allInterfaces();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->allInterfaces();
    flythis.allInterfaces();
  };
  if (f == nullptr){}
}
// _ZN17QNetworkInterface13allInterfacesEv allInterfaces()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 108, column 33>
//   // proto:  QList<QNetworkAddressEntry> QNetworkInterface::addressEntries();
if (true) {
  auto f = [](QNetworkInterface flythis) {
    ((QNetworkInterface*)0)->addressEntries();
    flythis.addressEntries();
  };
  if (f == nullptr){}
}
// _ZNK17QNetworkInterface14addressEntriesEv addressEntries()
//   // proto:  void QNetworkInterface::~QNetworkInterface();
if (true) {
  delete ((QNetworkInterface*)0);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 111, column 30>
//   // proto: static QNetworkInterface QNetworkInterface::interfaceFromIndex(int index);
if (true) {
  auto f = [](QNetworkInterface flythis, int arg1) {
    ((QNetworkInterface*)0)->interfaceFromIndex(arg1);
    flythis.interfaceFromIndex(arg1);
  };
  if (f == nullptr){}
}
// _ZN17QNetworkInterface18interfaceFromIndexEi interfaceFromIndex(int)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 57, column 10>
//   // proto:  void QNetworkAddressEntry::swap(QNetworkAddressEntry & other);
extern "C"
void C_ZN20QNetworkAddressEntry4swapERS_(void *qthis, QNetworkAddressEntry & arg1) {
  ((QNetworkAddressEntry*)qthis)->swap(arg1);
}
// _ZN20QNetworkAddressEntry4swapERS_ swap(class QNetworkAddressEntry &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 69, column 10>
//   // proto:  void QNetworkAddressEntry::setPrefixLength(int length);
extern "C"
void C_ZN20QNetworkAddressEntry15setPrefixLengthEi(void *qthis, int arg1) {
  ((QNetworkAddressEntry*)qthis)->setPrefixLength(arg1);
}
// _ZN20QNetworkAddressEntry15setPrefixLengthEi setPrefixLength(int)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 68, column 9>
//   // proto:  int QNetworkAddressEntry::prefixLength();
extern "C"
void C_ZNK20QNetworkAddressEntry12prefixLengthEv(void *qthis) {
  ((QNetworkAddressEntry*)qthis)->prefixLength();
}
// _ZNK20QNetworkAddressEntry12prefixLengthEv prefixLength()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 66, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::netmask();
extern "C"
void C_ZNK20QNetworkAddressEntry7netmaskEv(void *qthis) {
  ((QNetworkAddressEntry*)qthis)->netmask();
}
// _ZNK20QNetworkAddressEntry7netmaskEv netmask()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 72, column 10>
//   // proto:  void QNetworkAddressEntry::setBroadcast(const QHostAddress & newBroadcast);
extern "C"
void C_ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress(void *qthis, const QHostAddress & arg1) {
  ((QNetworkAddressEntry*)qthis)->setBroadcast(arg1);
}
// _ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress setBroadcast(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 52, column 5>
//   // proto:  void QNetworkAddressEntry::QNetworkAddressEntry();
extern "C"
void C_ZN20QNetworkAddressEntryC2Ev() {
  new QNetworkAddressEntry();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 64, column 10>
//   // proto:  void QNetworkAddressEntry::setIp(const QHostAddress & newIp);
extern "C"
void C_ZN20QNetworkAddressEntry5setIpERK12QHostAddress(void *qthis, const QHostAddress & arg1) {
  ((QNetworkAddressEntry*)qthis)->setIp(arg1);
}
// _ZN20QNetworkAddressEntry5setIpERK12QHostAddress setIp(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 67, column 10>
//   // proto:  void QNetworkAddressEntry::setNetmask(const QHostAddress & newNetmask);
extern "C"
void C_ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress(void *qthis, const QHostAddress & arg1) {
  ((QNetworkAddressEntry*)qthis)->setNetmask(arg1);
}
// _ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress setNetmask(const class QHostAddress &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 53, column 5>
//   // proto:  void QNetworkAddressEntry::QNetworkAddressEntry(const QNetworkAddressEntry & other);
extern "C"
void C_ZN20QNetworkAddressEntryC2ERKS_(const QNetworkAddressEntry & arg1) {
  new QNetworkAddressEntry(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 71, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::broadcast();
extern "C"
void C_ZNK20QNetworkAddressEntry9broadcastEv(void *qthis) {
  ((QNetworkAddressEntry*)qthis)->broadcast();
}
// _ZNK20QNetworkAddressEntry9broadcastEv broadcast()
//   // proto:  void QNetworkAddressEntry::~QNetworkAddressEntry();
extern "C"
void C_ZN20QNetworkAddressEntryD2Ev(void *qthis) {
  delete (QNetworkAddressEntry*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 63, column 18>
//   // proto:  QHostAddress QNetworkAddressEntry::ip();
extern "C"
void C_ZNK20QNetworkAddressEntry2ipEv(void *qthis) {
  ((QNetworkAddressEntry*)qthis)->ip();
}
// _ZNK20QNetworkAddressEntry2ipEv ip()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 110, column 30>
//   // proto: static QNetworkInterface QNetworkInterface::interfaceFromName(const QString & name);
extern "C"
void C_ZN17QNetworkInterface17interfaceFromNameERK7QString(void *qthis, const QString & arg1) {
  ((QNetworkInterface*)qthis)->interfaceFromName(arg1);
}
// _ZN17QNetworkInterface17interfaceFromNameERK7QString interfaceFromName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 94, column 5>
//   // proto:  void QNetworkInterface::QNetworkInterface();
extern "C"
void C_ZN17QNetworkInterfaceC2Ev() {
  new QNetworkInterface();
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 107, column 13>
//   // proto:  QString QNetworkInterface::hardwareAddress();
extern "C"
void C_ZNK17QNetworkInterface15hardwareAddressEv(void *qthis) {
  ((QNetworkInterface*)qthis)->hardwareAddress();
}
// _ZNK17QNetworkInterface15hardwareAddressEv hardwareAddress()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 104, column 13>
//   // proto:  QString QNetworkInterface::name();
extern "C"
void C_ZNK17QNetworkInterface4nameEv(void *qthis) {
  ((QNetworkInterface*)qthis)->name();
}
// _ZNK17QNetworkInterface4nameEv name()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 106, column 20>
//   // proto:  InterfaceFlags QNetworkInterface::flags();
extern "C"
void C_ZNK17QNetworkInterface5flagsEv(void *qthis) {
  ((QNetworkInterface*)qthis)->flags();
}
// _ZNK17QNetworkInterface5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 99, column 10>
//   // proto:  void QNetworkInterface::swap(QNetworkInterface & other);
extern "C"
void C_ZN17QNetworkInterface4swapERS_(void *qthis, QNetworkInterface & arg1) {
  ((QNetworkInterface*)qthis)->swap(arg1);
}
// _ZN17QNetworkInterface4swapERS_ swap(class QNetworkInterface &)
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 113, column 32>
//   // proto: static QList<QHostAddress> QNetworkInterface::allAddresses();
extern "C"
void C_ZN17QNetworkInterface12allAddressesEv(void *qthis) {
  ((QNetworkInterface*)qthis)->allAddresses();
}
// _ZN17QNetworkInterface12allAddressesEv allAddresses()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 105, column 13>
//   // proto:  QString QNetworkInterface::humanReadableName();
extern "C"
void C_ZNK17QNetworkInterface17humanReadableNameEv(void *qthis) {
  ((QNetworkInterface*)qthis)->humanReadableName();
}
// _ZNK17QNetworkInterface17humanReadableNameEv humanReadableName()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 103, column 9>
//   // proto:  int QNetworkInterface::index();
extern "C"
void C_ZNK17QNetworkInterface5indexEv(void *qthis) {
  ((QNetworkInterface*)qthis)->index();
}
// _ZNK17QNetworkInterface5indexEv index()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 101, column 10>
//   // proto:  bool QNetworkInterface::isValid();
extern "C"
void C_ZNK17QNetworkInterface7isValidEv(void *qthis) {
  ((QNetworkInterface*)qthis)->isValid();
}
// _ZNK17QNetworkInterface7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 95, column 5>
//   // proto:  void QNetworkInterface::QNetworkInterface(const QNetworkInterface & other);
extern "C"
void C_ZN17QNetworkInterfaceC2ERKS_(const QNetworkInterface & arg1) {
  new QNetworkInterface(arg1);
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 112, column 37>
//   // proto: static QList<QNetworkInterface> QNetworkInterface::allInterfaces();
extern "C"
void C_ZN17QNetworkInterface13allInterfacesEv(void *qthis) {
  ((QNetworkInterface*)qthis)->allInterfaces();
}
// _ZN17QNetworkInterface13allInterfacesEv allInterfaces()
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 108, column 33>
//   // proto:  QList<QNetworkAddressEntry> QNetworkInterface::addressEntries();
extern "C"
void C_ZNK17QNetworkInterface14addressEntriesEv(void *qthis) {
  ((QNetworkInterface*)qthis)->addressEntries();
}
// _ZNK17QNetworkInterface14addressEntriesEv addressEntries()
//   // proto:  void QNetworkInterface::~QNetworkInterface();
extern "C"
void C_ZN17QNetworkInterfaceD2Ev(void *qthis) {
  delete (QNetworkInterface*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtNetwork/qnetworkinterface.h', line 111, column 30>
//   // proto: static QNetworkInterface QNetworkInterface::interfaceFromIndex(int index);
extern "C"
void C_ZN17QNetworkInterface18interfaceFromIndexEi(void *qthis, int arg1) {
  ((QNetworkInterface*)qthis)->interfaceFromIndex(arg1);
}
// _ZN17QNetworkInterface18interfaceFromIndexEi interfaceFromIndex(int)
// <= ext block end

// body block begin =>
// <= body block end

