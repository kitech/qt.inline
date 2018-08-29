//  header block begin
// since 0x040200
// /usr/include/qt/QtNetwork/qnetworkinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkinterface.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkAddressEntry is pure virtual: false
// QNetworkAddressEntry has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQNetworkAddressEntry_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkAddressEntry_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkAddressEntry_t qt_meta_stringdata_MyQNetworkAddressEntry = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQNetworkAddressEntry"
  },
  "MyQNetworkAddressEntry"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkAddressEntry[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQNetworkAddressEntry : public QNetworkAddressEntry {
public:
  virtual ~MyQNetworkAddressEntry() {}
// void QNetworkAddressEntry()
MyQNetworkAddressEntry() : QNetworkAddressEntry() {}
// void QNetworkAddressEntry(const QNetworkAddressEntry &)
MyQNetworkAddressEntry(const QNetworkAddressEntry & other) : QNetworkAddressEntry(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:59
// [-2] void QNetworkAddressEntry()
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryC2Ev() {
  return  new QNetworkAddressEntry();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:60
// [-2] void QNetworkAddressEntry(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryC2ERKS_(QNetworkAddressEntry* other) {
  return  new QNetworkAddressEntry(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:62
// [8] QNetworkAddressEntry & operator=(QNetworkAddressEntry &&)
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryaSEOS_(void *this_, QNetworkAddressEntry && other) {
  auto& rv = ((QNetworkAddressEntry*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:64
// [8] QNetworkAddressEntry & operator=(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QNetworkAddressEntryaSERKS_(void *this_, QNetworkAddressEntry* other) {
  auto& rv = ((QNetworkAddressEntry*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:65
// [-2] void ~QNetworkAddressEntry()
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntryD2Ev(void *this_) {
  delete (QNetworkAddressEntry*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtNetwork/qnetworkinterface.h:67
// [-2] void swap(QNetworkAddressEntry &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry4swapERS_(void *this_, QNetworkAddressEntry* other) {
  ((QNetworkAddressEntry*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:69
// [1] bool operator==(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QNetworkAddressEntryeqERKS_(void *this_, QNetworkAddressEntry* other) {
  return (bool)((QNetworkAddressEntry*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:70
// [1] bool operator!=(const QNetworkAddressEntry &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QNetworkAddressEntryneERKS_(void *this_, QNetworkAddressEntry* other) {
  return (bool)((QNetworkAddressEntry*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:73
// [8] QHostAddress ip()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry2ipEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->ip();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:74
// [-2] void setIp(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry5setIpERK12QHostAddress(void *this_, QHostAddress* newIp) {
  ((QNetworkAddressEntry*)this_)->setIp(*newIp);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:76
// [8] QHostAddress netmask()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry7netmaskEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->netmask();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:77
// [-2] void setNetmask(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry10setNetmaskERK12QHostAddress(void *this_, QHostAddress* newNetmask) {
  ((QNetworkAddressEntry*)this_)->setNetmask(*newNetmask);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkinterface.h:78
// [4] int prefixLength()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK20QNetworkAddressEntry12prefixLengthEv(void *this_) {
  return (int)((QNetworkAddressEntry*)this_)->prefixLength();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtNetwork/qnetworkinterface.h:79
// [-2] void setPrefixLength(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry15setPrefixLengthEi(void *this_, int length) {
  ((QNetworkAddressEntry*)this_)->setPrefixLength(length);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:81
// [8] QHostAddress broadcast()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QNetworkAddressEntry9broadcastEv(void *this_) {
  auto rv = ((QNetworkAddressEntry*)this_)->broadcast();
return new QHostAddress(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:82
// [-2] void setBroadcast(const QHostAddress &)
extern "C" Q_DECL_EXPORT
void C_ZN20QNetworkAddressEntry12setBroadcastERK12QHostAddress(void *this_, QHostAddress* newBroadcast) {
  ((QNetworkAddressEntry*)this_)->setBroadcast(*newBroadcast);
}

//  main block end
