//  header block begin

// /usr/include/qt/QtNetwork/qhostinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhostinfo.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHostInfo is pure virtual: false false
// QHostInfo has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhostinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:63
// [-2] void QHostInfo(int) 
// (12)qm4115411751 (17)_ZN9QHostInfoC2Ei
/*void* qm4115411751(int lookupId)*/{
  int lookupId = *(int*)this_;
  this_ =  new QHostInfo(lookupId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:64
// [-2] void QHostInfo(const QHostInfo &) 
// (12)qm2028322426 (20)_ZN9QHostInfoC2ERKS_
/*void* qm2028322426(const QHostInfo & d)*/{
  const QHostInfo & d = *(const QHostInfo *)this_;
  this_ =  new QHostInfo(d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:65
// [-2] void QHostInfo(QHostInfo &&) 
// (12)qm1917733984 (19)_ZN9QHostInfoC2EOS_
/*void* qm1917733984(QHostInfo && other)*/{
  QHostInfo && other =  static_cast<QHostInfo &&>(*(QHostInfo *)this_);
  this_ =  new QHostInfo(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:67
// [8] QHostInfo & operator=(QHostInfo &&) 
// (12)qm2625156768 (19)_ZN9QHostInfoaSEOS_
//static
/*void qm2625156768(QHostInfo && other)*/ {
  QHostInfo && other =  static_cast<QHostInfo &&>(*(QHostInfo *)this_);
  (void) ((QHostInfo*)this_)->operator=(other);
  // auto xptr = (QHostInfo & (QHostInfo::*)(QHostInfo&&) ) &QHostInfo::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:70
// [-2] void swap(QHostInfo &) 
// (12)qm3039729807 (22)_ZN9QHostInfo4swapERS_
//static
/*void qm3039729807(QHostInfo & other)*/ {
  QHostInfo & other = *(QHostInfo *)this_;
  (void) ((QHostInfo*)this_)->swap(other);
   auto xptr = (void (QHostInfo::*)(QHostInfo&) ) &QHostInfo::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QHostInfoD2Ev(void *this_)*/ {
  delete (QHostInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhostinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
