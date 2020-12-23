//  header block begin

// /usr/include/qt/QtCore/qbitarray.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbitarray.h>
#include <QtCore>
#include "callback_inherit.h"

// QBitArray is pure virtual: false false
// QBitArray has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbitarray(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:57
// [-2] void QBitArray() 
// (12)qm1992321311 (17)_ZN9QBitArrayC2Ev
/*void* qm1992321311()*/{
  ;
  this_ =  new QBitArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:58
// [-2] void QBitArray(int, bool) 
// (11)qm832187643 (18)_ZN9QBitArrayC2Eib
/*void* qm832187643(int size, bool val)*/{
  int size = *(int*)this_; bool val = *(bool*)this_;
  this_ =  new QBitArray(size, val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:59
// [-2] void QBitArray(const QBitArray &) 
// (12)qm4273813453 (20)_ZN9QBitArrayC2ERKS_
/*void* qm4273813453(const QBitArray & other)*/{
  const QBitArray & other = *(const QBitArray *)this_;
  this_ =  new QBitArray(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:60
// [8] QBitArray & operator=(const QBitArray &) 
// (12)qm1698153351 (20)_ZN9QBitArrayaSERKS_
//static
/*void qm1698153351(const QBitArray & other)*/ {
  const QBitArray & other = *(const QBitArray *)this_;
  (void) ((QBitArray*)this_)->operator=(other);
  // auto xptr = (QBitArray & (QBitArray::*)(QBitArray const&) ) &QBitArray::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:61
// [-2] void QBitArray(QBitArray &&) 
// (12)qm4178915248 (19)_ZN9QBitArrayC2EOS_
/*void* qm4178915248(QBitArray && other)*/{
  QBitArray && other =  static_cast<QBitArray &&>(*(QBitArray *)this_);
  this_ =  new QBitArray(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:62
// [8] QBitArray & operator=(QBitArray &&) 
// (11)qm388224368 (19)_ZN9QBitArrayaSEOS_
//static
/*void qm388224368(QBitArray && other)*/ {
  QBitArray && other =  static_cast<QBitArray &&>(*(QBitArray *)this_);
  (void) ((QBitArray*)this_)->operator=(other);
  // auto xptr = (QBitArray & (QBitArray::*)(QBitArray&&) ) &QBitArray::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:65
// [-2] void swap(QBitArray &) 
// (12)qm2328763692 (22)_ZN9QBitArray4swapERS_
//static
/*void qm2328763692(QBitArray & other)*/ {
  QBitArray & other = *(QBitArray *)this_;
  (void) ((QBitArray*)this_)->swap(other);
   auto xptr = (void (QBitArray::*)(QBitArray&) ) &QBitArray::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:67
// [4] int size() const
// (12)qm2527267329 (21)_ZNK9QBitArray4sizeEv
//static
/*void qm2527267329()*/ {
  ;
  (void) ((QBitArray*)this_)->size();
   auto xptr = (int (QBitArray::*)() const ) &QBitArray::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:68
// [4] int count() const
// (12)qm3846909202 (22)_ZNK9QBitArray5countEv
//static
/*void qm3846909202()*/ {
  ;
  (void) ((QBitArray*)this_)->count();
   auto xptr = (int (QBitArray::*)() const ) &QBitArray::count;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:71
// [1] bool isEmpty() const
// (12)qm1793680217 (24)_ZNK9QBitArray7isEmptyEv
//static
/*void qm1793680217()*/ {
  ;
  (void) ((QBitArray*)this_)->isEmpty();
   auto xptr = (bool (QBitArray::*)() const ) &QBitArray::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:72
// [1] bool isNull() const
// (12)qm3218923908 (23)_ZNK9QBitArray6isNullEv
//static
/*void qm3218923908()*/ {
  ;
  (void) ((QBitArray*)this_)->isNull();
   auto xptr = (bool (QBitArray::*)() const ) &QBitArray::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:76
// [-2] void detach() 
// (12)qm3725791354 (22)_ZN9QBitArray6detachEv
//static
/*void qm3725791354()*/ {
  ;
  (void) ((QBitArray*)this_)->detach();
   auto xptr = (void (QBitArray::*)() ) &QBitArray::detach;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:77
// [1] bool isDetached() const
// (12)qm3613647234 (28)_ZNK9QBitArray10isDetachedEv
//static
/*void qm3613647234()*/ {
  ;
  (void) ((QBitArray*)this_)->isDetached();
   auto xptr = (bool (QBitArray::*)() const ) &QBitArray::isDetached;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:78
// [-2] void clear() 
// (11)qm341699476 (21)_ZN9QBitArray5clearEv
//static
/*void qm341699476()*/ {
  ;
  (void) ((QBitArray*)this_)->clear();
   auto xptr = (void (QBitArray::*)() ) &QBitArray::clear;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:80
// [1] bool testBit(int) const
// (12)qm2660943850 (24)_ZNK9QBitArray7testBitEi
//static
/*void qm2660943850(int i)*/ {
  int i = *(int*)this_;
  (void) ((QBitArray*)this_)->testBit(i);
   auto xptr = (bool (QBitArray::*)(int) const ) &QBitArray::testBit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:81
// [-2] void setBit(int) 
// (12)qm3649423897 (22)_ZN9QBitArray6setBitEi
//static
/*void qm3649423897(int i)*/ {
  int i = *(int*)this_;
  (void) ((QBitArray*)this_)->setBit(i);
   auto xptr = (void (QBitArray::*)(int) ) &QBitArray::setBit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:82
// [-2] void setBit(int, bool) 
// (11)qm353157875 (23)_ZN9QBitArray6setBitEib
//static
/*void qm353157875(int i, bool val)*/ {
  int i = *(int*)this_; bool val = *(bool*)this_;
  (void) ((QBitArray*)this_)->setBit(i, val);
   auto xptr = (void (QBitArray::*)(int, bool) ) &QBitArray::setBit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:83
// [-2] void clearBit(int) 
// (11)qm912112298 (24)_ZN9QBitArray8clearBitEi
//static
/*void qm912112298(int i)*/ {
  int i = *(int*)this_;
  (void) ((QBitArray*)this_)->clearBit(i);
   auto xptr = (void (QBitArray::*)(int) ) &QBitArray::clearBit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:84
// [1] bool toggleBit(int) 
// (12)qm3928850779 (25)_ZN9QBitArray9toggleBitEi
//static
/*void qm3928850779(int i)*/ {
  int i = *(int*)this_;
  (void) ((QBitArray*)this_)->toggleBit(i);
   auto xptr = (bool (QBitArray::*)(int) ) &QBitArray::toggleBit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:86
// [1] bool at(int) const
// (12)qm4259724740 (19)_ZNK9QBitArray2atEi
//static
/*void qm4259724740(int i)*/ {
  int i = *(int*)this_;
  (void) ((QBitArray*)this_)->at(i);
   auto xptr = (bool (QBitArray::*)(int) const ) &QBitArray::at;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:87
// [16] QBitRef operator[](int) 
// (12)qm1229595558 (17)_ZN9QBitArrayixEi
//static
/*void qm1229595558(int i)*/ {
  int i = *(int*)this_;
  (void) ((QBitArray*)this_)->operator[](i);
  // auto xptr = (QBitRef (QBitArray::*)(int) ) &QBitArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:88
// [1] bool operator[](int) const
// (12)qm1892726104 (18)_ZNK9QBitArrayixEi
//static
/*void qm1892726104(int i)*/ {
  int i = *(int*)this_;
  (void) ((QBitArray*)this_)->operator[](i);
  // auto xptr = (bool (QBitArray::*)(int) const ) &QBitArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:89
// [16] QBitRef operator[](uint) 
// (12)qm3494081052 (17)_ZN9QBitArrayixEj
//static
/*void qm3494081052(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QBitArray*)this_)->operator[](i);
  // auto xptr = (QBitRef (QBitArray::*)(unsigned int) ) &QBitArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:90
// [1] bool operator[](uint) const
// (12)qm3923371234 (18)_ZNK9QBitArrayixEj
//static
/*void qm3923371234(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QBitArray*)this_)->operator[](i);
  // auto xptr = (bool (QBitArray::*)(unsigned int) const ) &QBitArray::operator[];
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:97
// [1] bool operator==(const QBitArray &) const
// (12)qm1401375372 (21)_ZNK9QBitArrayeqERKS_
//static
/*void qm1401375372(const QBitArray & other)*/ {
  const QBitArray & other = *(const QBitArray *)this_;
  (void) ((QBitArray*)this_)->operator==(other);
  // auto xptr = (bool (QBitArray::*)(QBitArray const&) const ) &QBitArray::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:98
// [1] bool operator!=(const QBitArray &) const
// (12)qm3385286395 (21)_ZNK9QBitArrayneERKS_
//static
/*void qm3385286395(const QBitArray & other)*/ {
  const QBitArray & other = *(const QBitArray *)this_;
  (void) ((QBitArray*)this_)->operator!=(other);
  // auto xptr = (bool (QBitArray::*)(QBitArray const&) const ) &QBitArray::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:100
// [1] bool fill(bool, int) 
// (12)qm1402053431 (21)_ZN9QBitArray4fillEbi
//static
/*void qm1402053431(bool val, int size)*/ {
  bool val = *(bool*)this_; int size = *(int*)this_;
  (void) ((QBitArray*)this_)->fill(val, size);
   auto xptr = (bool (QBitArray::*)(bool, int) ) &QBitArray::fill;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:103
// [-2] void truncate(int) 
// (12)qm3970054901 (24)_ZN9QBitArray8truncateEi
//static
/*void qm3970054901(int pos)*/ {
  int pos = *(int*)this_;
  (void) ((QBitArray*)this_)->truncate(pos);
   auto xptr = (void (QBitArray::*)(int) ) &QBitArray::truncate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:105
// [8] const char * bits() const
// (12)qm2791142350 (21)_ZNK9QBitArray4bitsEv
//static
/*void qm2791142350()*/ {
  ;
  (void) ((QBitArray*)this_)->bits();
   auto xptr = (const char * (QBitArray::*)() const ) &QBitArray::bits;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:110
// [8] QBitArray::DataPtr & data_ptr() 
// (12)qm3740955706 (24)_ZN9QBitArray8data_ptrEv
//static
/*void qm3740955706()*/ {
  ;
  (void) ((QBitArray*)this_)->data_ptr();
   auto xptr = (QTypedArrayData<char> *& (QBitArray::*)() ) &QBitArray::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QBitArrayD2Ev(void *this_)*/ {
  delete (QBitArray*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbitarray
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
