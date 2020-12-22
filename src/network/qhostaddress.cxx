//  header block begin

// /usr/include/qt/QtNetwork/qhostaddress.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhostaddress.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHostAddress is pure virtual: false false
// QHostAddress has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHostAddress_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHostAddress_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHostAddress_t qt_meta_stringdata_MyQHostAddress = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQHostAddress"
  },
  "MyQHostAddress"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHostAddress[] = {
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
class Q_DECL_EXPORT MyQHostAddress : public QHostAddress {
public:
  virtual ~MyQHostAddress() {}
// void QHostAddress()
MyQHostAddress() : QHostAddress() {}
// void QHostAddress(quint32)
MyQHostAddress(quint32 ip4Addr) : QHostAddress(ip4Addr) {}
// void QHostAddress(quint8 *)
MyQHostAddress(quint8 * ip6Addr) : QHostAddress(ip6Addr) {}
// void QHostAddress(const quint8 *)
MyQHostAddress(const quint8 * ip6Addr) : QHostAddress(ip6Addr) {}
// void QHostAddress(const Q_IPV6ADDR &)
MyQHostAddress(const Q_IPV6ADDR & ip6Addr) : QHostAddress(ip6Addr) {}
// void QHostAddress(const sockaddr *)
MyQHostAddress(const sockaddr * address) : QHostAddress(address) {}
// void QHostAddress(const QString &)
MyQHostAddress(const QString & address) : QHostAddress(address) {}
// void QHostAddress(const QHostAddress &)
MyQHostAddress(const QHostAddress & copy) : QHostAddress(copy) {}
// void QHostAddress(QHostAddress::SpecialAddress)
MyQHostAddress(QHostAddress::SpecialAddress address) : QHostAddress(address) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhostaddress(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:94
// [-2] void QHostAddress() 
// (12)qm1360484773 (21)_ZN12QHostAddressC2Ev
/*void* qm1360484773()*/{
  ;
  this_ =  new QHostAddress();
  this_ =  new MyQHostAddress();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:95
// [-2] void QHostAddress(quint32) 
// (12)qm1159071210 (21)_ZN12QHostAddressC2Ej
/*void* qm1159071210(unsigned int ip4Addr)*/{
  unsigned int ip4Addr = *(unsigned int*)this_;
  this_ =  new QHostAddress(ip4Addr);
  this_ =  new MyQHostAddress(ip4Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:96
// [-2] void QHostAddress(quint8 *) 
// (12)qm4099458557 (22)_ZN12QHostAddressC2EPh
/*void* qm4099458557(unsigned char * ip6Addr)*/{
  unsigned char * ip6Addr = *(unsigned char **)this_;
  this_ =  new QHostAddress(ip6Addr);
  this_ =  new MyQHostAddress(ip6Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:97
// [-2] void QHostAddress(const quint8 *) 
// (12)qm3963267042 (23)_ZN12QHostAddressC2EPKh
/*void* qm3963267042(const unsigned char * ip6Addr)*/{
  const unsigned char * ip6Addr = *(const unsigned char **)this_;
  this_ =  new QHostAddress(ip6Addr);
  this_ =  new MyQHostAddress(ip6Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:98
// [-2] void QHostAddress(const Q_IPV6ADDR &) 
// (12)qm1867986989 (36)_ZN12QHostAddressC2ERK12QIPv6Address
/*void* qm1867986989(const QIPv6Address & ip6Addr)*/{
  const QIPv6Address & ip6Addr = *(const QIPv6Address *)this_;
  this_ =  new QHostAddress(ip6Addr);
  this_ =  new MyQHostAddress(ip6Addr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:99
// [-2] void QHostAddress(const sockaddr *) 
// (12)qm1345422088 (31)_ZN12QHostAddressC2EPK8sockaddr
/*void* qm1345422088(const sockaddr * address)*/{
  const sockaddr * address = *(const sockaddr **)this_;
  this_ =  new QHostAddress(address);
  this_ =  new MyQHostAddress(address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:100
// [-2] void QHostAddress(const QString &) 
// (12)qm1609814745 (30)_ZN12QHostAddressC2ERK7QString
/*void* qm1609814745(const QString & address)*/{
  const QString & address = *(const QString *)this_;
  this_ =  new QHostAddress(address);
  this_ =  new MyQHostAddress(address);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:101
// [-2] void QHostAddress(const QHostAddress &) 
// (12)qm4052041128 (24)_ZN12QHostAddressC2ERKS_
/*void* qm4052041128(const QHostAddress & copy)*/{
  const QHostAddress & copy = *(const QHostAddress *)this_;
  this_ =  new QHostAddress(copy);
  this_ =  new MyQHostAddress(copy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:102
// [-2] void QHostAddress(QHostAddress::SpecialAddress) 
// (12)qm1111210732 (40)_ZN12QHostAddressC2ENS_14SpecialAddressE
/*void* qm1111210732(QHostAddress::SpecialAddress address)*/{
  QHostAddress::SpecialAddress address = *(QHostAddress::SpecialAddress*)this_;
  this_ =  new QHostAddress(address);
  this_ =  new MyQHostAddress(address);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:105
// [8] QHostAddress & operator=(QHostAddress &&) 
// (11)qm802194489 (23)_ZN12QHostAddressaSEOS_
//static
/*void qm802194489(QHostAddress && other)*/ {
  QHostAddress && other =  static_cast<QHostAddress &&>(*(QHostAddress *)this_);
  (void) ((QHostAddress*)this_)->operator=(other);
  // auto xptr = (QHostAddress & (QHostAddress::*)(QHostAddress&&) ) &QHostAddress::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:114
// [-2] void swap(QHostAddress &) 
// (12)qm1922131176 (26)_ZN12QHostAddress4swapERS_
//static
/*void qm1922131176(QHostAddress & other)*/ {
  QHostAddress & other = *(QHostAddress *)this_;
  (void) ((QHostAddress*)this_)->swap(other);
   auto xptr = (void (QHostAddress::*)(QHostAddress&) ) &QHostAddress::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:137
// [1] bool operator!=(const QHostAddress &) const
// (12)qm2811191803 (25)_ZNK12QHostAddressneERKS_
//static
/*void qm2811191803(const QHostAddress & address)*/ {
  const QHostAddress & address = *(const QHostAddress *)this_;
  (void) ((QHostAddress*)this_)->operator!=(address);
  // auto xptr = (bool (QHostAddress::*)(QHostAddress const&) const ) &QHostAddress::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:139
// [1] bool operator!=(QHostAddress::SpecialAddress) const
// (11)qm329169307 (41)_ZNK12QHostAddressneENS_14SpecialAddressE
//static
/*void qm329169307(QHostAddress::SpecialAddress address)*/ {
  QHostAddress::SpecialAddress address = *(QHostAddress::SpecialAddress*)this_;
  (void) ((QHostAddress*)this_)->operator!=(address);
  // auto xptr = (bool (QHostAddress::*)(QHostAddress::SpecialAddress) const ) &QHostAddress::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QHostAddressD2Ev(void *this_)*/ {
  delete (QHostAddress*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhostaddress
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
