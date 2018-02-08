//  header block begin
// /usr/include/qt/QtNetwork/qnetworkinterface.h
#include <qnetworkinterface.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkInterface is pure virtual: false
// QNetworkInterface has virtual projected: false
//  header block end

//  main block begin

class MyQNetworkInterface : public QNetworkInterface {
public:
  virtual ~MyQNetworkInterface() {}
// void QNetworkInterface()
MyQNetworkInterface() : QNetworkInterface() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:104
// [-2] void QNetworkInterface()
extern "C"
void* C_ZN17QNetworkInterfaceC2Ev() {
  return  new QNetworkInterface();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:110
// [-2] void ~QNetworkInterface()
extern "C"
void C_ZN17QNetworkInterfaceD2Ev(void *this_) {
  delete (QNetworkInterface*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:112
// [-2] void swap(class QNetworkInterface &)
extern "C"
void C_ZN17QNetworkInterface4swapERS_(void *this_, QNetworkInterface* other) {
  ((QNetworkInterface*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:114
// [1] bool isValid()
extern "C"
bool C_ZNK17QNetworkInterface7isValidEv(void *this_) {
  return (bool)((QNetworkInterface*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:116
// [4] int index()
extern "C"
int C_ZNK17QNetworkInterface5indexEv(void *this_) {
  return (int)((QNetworkInterface*)this_)->index();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:117
// [8] QString name()
extern "C"
void* C_ZNK17QNetworkInterface4nameEv(void *this_) {
  auto rv = ((QNetworkInterface*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:118
// [8] QString humanReadableName()
extern "C"
void* C_ZNK17QNetworkInterface17humanReadableNameEv(void *this_) {
  auto rv = ((QNetworkInterface*)this_)->humanReadableName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:119
// [4] QNetworkInterface::InterfaceFlags flags()
extern "C"
void C_ZNK17QNetworkInterface5flagsEv(void *this_) {
  auto rv = ((QNetworkInterface*)this_)->flags();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:120
// [8] QString hardwareAddress()
extern "C"
void* C_ZNK17QNetworkInterface15hardwareAddressEv(void *this_) {
  auto rv = ((QNetworkInterface*)this_)->hardwareAddress();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:123
// [4] int interfaceIndexFromName(const class QString &)
extern "C"
int C_ZN17QNetworkInterface22interfaceIndexFromNameERK7QString(QString* name) {
  return (int)QNetworkInterface::interfaceIndexFromName(*name);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:124
// [8] QNetworkInterface interfaceFromName(const class QString &)
extern "C"
void* C_ZN17QNetworkInterface17interfaceFromNameERK7QString(QString* name) {
  auto rv = QNetworkInterface::interfaceFromName(*name);
return new QNetworkInterface(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:125
// [8] QNetworkInterface interfaceFromIndex(int)
extern "C"
void* C_ZN17QNetworkInterface18interfaceFromIndexEi(int index) {
  auto rv = QNetworkInterface::interfaceFromIndex(index);
return new QNetworkInterface(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:126
// [8] QString interfaceNameFromIndex(int)
extern "C"
void* C_ZN17QNetworkInterface22interfaceNameFromIndexEi(int index) {
  auto rv = QNetworkInterface::interfaceNameFromIndex(index);
return new QString(rv);
}
//  main block end