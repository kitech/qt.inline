//  header block begin

// /usr/include/qt/QtNetwork/qnetworkinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkinterface.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkAddressEntry is pure virtual: false false
// QNetworkAddressEntry has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkaddressentry(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:65
// [-2] void QNetworkAddressEntry() 
// (12)qm2020700820 (29)_ZN20QNetworkAddressEntryC2Ev
/*void* qm2020700820()*/{
  ;
  this_ =  new QNetworkAddressEntry();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:66
// [-2] void QNetworkAddressEntry(const QNetworkAddressEntry &) 
// (11)qm109939490 (32)_ZN20QNetworkAddressEntryC2ERKS_
/*void* qm109939490(const QNetworkAddressEntry & other)*/{
  const QNetworkAddressEntry & other = *(const QNetworkAddressEntry *)this_;
  this_ =  new QNetworkAddressEntry(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:67
// [8] QNetworkAddressEntry & operator=(QNetworkAddressEntry &&) 
// (12)qm1160860589 (31)_ZN20QNetworkAddressEntryaSEOS_
//static
/*void qm1160860589(QNetworkAddressEntry && other)*/ {
  QNetworkAddressEntry && other =  static_cast<QNetworkAddressEntry &&>(*(QNetworkAddressEntry *)this_);
  (void) ((QNetworkAddressEntry*)this_)->operator=(other);
  // auto xptr = (QNetworkAddressEntry & (QNetworkAddressEntry::*)(QNetworkAddressEntry&&) ) &QNetworkAddressEntry::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:71
// [-2] void swap(QNetworkAddressEntry &) 
// (12)qm2449470872 (34)_ZN20QNetworkAddressEntry4swapERS_
//static
/*void qm2449470872(QNetworkAddressEntry & other)*/ {
  QNetworkAddressEntry & other = *(QNetworkAddressEntry *)this_;
  (void) ((QNetworkAddressEntry*)this_)->swap(other);
   auto xptr = (void (QNetworkAddressEntry::*)(QNetworkAddressEntry&) ) &QNetworkAddressEntry::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:74
// [1] bool operator!=(const QNetworkAddressEntry &) const
// (12)qm2792728597 (33)_ZNK20QNetworkAddressEntryneERKS_
//static
/*void qm2792728597(const QNetworkAddressEntry & other)*/ {
  const QNetworkAddressEntry & other = *(const QNetworkAddressEntry *)this_;
  (void) ((QNetworkAddressEntry*)this_)->operator!=(other);
  // auto xptr = (bool (QNetworkAddressEntry::*)(QNetworkAddressEntry const&) const ) &QNetworkAddressEntry::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:97
// [1] bool isTemporary() const
// (11)qm169848023 (41)_ZNK20QNetworkAddressEntry11isTemporaryEv
//static
/*void qm169848023()*/ {
  ;
  (void) ((QNetworkAddressEntry*)this_)->isTemporary();
   auto xptr = (bool (QNetworkAddressEntry::*)() const ) &QNetworkAddressEntry::isTemporary;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QNetworkAddressEntryD2Ev(void *this_)*/ {
  delete (QNetworkAddressEntry*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkaddressentry
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
