//  header block begin

// /usr/include/qt/QtCore/quuid.h
#ifndef protected
#define protected public
#define private public
#endif
#include <quuid.h>
#include <QtCore>
#include "callback_inherit.h"

// QUuid is pure virtual: false false
// QUuid has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_quuid(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:96
// [-2] void QUuid() 
// (12)qm3807779934 (13)_ZN5QUuidC2Ev
/*void* qm3807779934()*/{
  ;
  this_ =  new QUuid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:98
// [-2] void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar) 
// (12)qm4113588650 (23)_ZN5QUuidC2Ejtthhhhhhhh
/*void* qm4113588650(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8)*/{
  unsigned int l = *(unsigned int*)this_; unsigned short w1 = *(unsigned short*)this_; unsigned short w2 = *(unsigned short*)this_; unsigned char b1 = *(unsigned char*)this_; unsigned char b2 = *(unsigned char*)this_; unsigned char b3 = *(unsigned char*)this_; unsigned char b4 = *(unsigned char*)this_; unsigned char b5 = *(unsigned char*)this_; unsigned char b6 = *(unsigned char*)this_; unsigned char b7 = *(unsigned char*)this_; unsigned char b8 = *(unsigned char*)this_;
  this_ =  new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:126
// [-2] void QUuid(const QString &) 
// (11)qm329551727 (22)_ZN5QUuidC2ERK7QString
/*void* qm329551727(const QString & arg0)*/{
  const QString & arg0 = *(const QString *)this_;
  this_ =  new QUuid(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:129
// [-2] void QUuid(const char *) 
// (12)qm2316714210 (15)_ZN5QUuidC2EPKc
/*void* qm2316714210(const char * arg0)*/{
  const char * arg0 = *(const char **)this_;
  this_ =  new QUuid(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:132
// [-2] void QUuid(const QByteArray &) 
// (12)qm2103268818 (26)_ZN5QUuidC2ERK10QByteArray
/*void* qm2103268818(const QByteArray & arg0)*/{
  const QByteArray & arg0 = *(const QByteArray *)this_;
  this_ =  new QUuid(arg0);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:139
// [1] bool operator==(const QUuid &) const
// (12)qm2928902147 (17)_ZNK5QUuideqERKS_
//static
/*void qm2928902147(const QUuid & orig)*/ {
  const QUuid & orig = *(const QUuid *)this_;
  (void) ((QUuid*)this_)->operator==(orig);
  // auto xptr = (bool (QUuid::*)(QUuid const&) const ) &QUuid::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:152
// [1] bool operator!=(const QUuid &) const
// (11)qm886281332 (17)_ZNK5QUuidneERKS_
//static
/*void qm886281332(const QUuid & orig)*/ {
  const QUuid & orig = *(const QUuid *)this_;
  (void) ((QUuid*)this_)->operator!=(orig);
  // auto xptr = (bool (QUuid::*)(QUuid const&) const ) &QUuid::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:207
// [16] QUuid createUuidV3(const QUuid &, const QString &) 
// (12)qm1061695893 (38)_ZN5QUuid12createUuidV3ERKS_RK7QString
//static
/*void qm1061695893(const QUuid & ns, const QString & baseData)*/ {
  const QUuid & ns = *(const QUuid *)this_; const QString & baseData = *(const QString *)this_;
  (void) QUuid::createUuidV3(ns, baseData);
   auto xptr = (QUuid (*)(QUuid const&, QString const&) ) &QUuid::createUuidV3;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:213
// [16] QUuid createUuidV5(const QUuid &, const QString &) 
// (12)qm1826183281 (38)_ZN5QUuid12createUuidV5ERKS_RK7QString
//static
/*void qm1826183281(const QUuid & ns, const QString & baseData)*/ {
  const QUuid & ns = *(const QUuid *)this_; const QString & baseData = *(const QString *)this_;
  (void) QUuid::createUuidV5(ns, baseData);
   auto xptr = (QUuid (*)(QUuid const&, QString const&) ) &QUuid::createUuidV5;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QUuidD2Ev(void *this_)*/ {
  delete (QUuid*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_quuid
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
