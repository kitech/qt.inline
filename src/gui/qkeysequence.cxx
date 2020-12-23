//  header block begin

// /usr/include/qt/QtGui/qkeysequence.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qkeysequence.h>
#include <QtGui>
#include "callback_inherit.h"

// QKeySequence is pure virtual: false false
// QKeySequence has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qkeysequence(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:156
// [-2] void QKeySequence() 
// (11)qm282939820 (21)_ZN12QKeySequenceC2Ev
/*void* qm282939820()*/{
  ;
  this_ =  new QKeySequence();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:157
// [-2] void QKeySequence(const QString &, QKeySequence::SequenceFormat) 
// (12)qm3747334494 (50)_ZN12QKeySequenceC2ERK7QStringNS_14SequenceFormatE
/*void* qm3747334494(const QString & key, QKeySequence::SequenceFormat format)*/{
  const QString & key = *(const QString *)this_; QKeySequence::SequenceFormat format = *(QKeySequence::SequenceFormat*)this_;
  this_ =  new QKeySequence(key, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:158
// [-2] void QKeySequence(int, int, int, int) 
// (12)qm3150709006 (24)_ZN12QKeySequenceC2Eiiii
/*void* qm3150709006(int k1, int k2, int k3, int k4)*/{
  int k1 = *(int*)this_; int k2 = *(int*)this_; int k3 = *(int*)this_; int k4 = *(int*)this_;
  this_ =  new QKeySequence(k1, k2, k3, k4);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:159
// [-2] void QKeySequence(const QKeySequence &) 
// (12)qm1295820736 (24)_ZN12QKeySequenceC2ERKS_
/*void* qm1295820736(const QKeySequence & ks)*/{
  const QKeySequence & ks = *(const QKeySequence *)this_;
  this_ =  new QKeySequence(ks);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:160
// [-2] void QKeySequence(QKeySequence::StandardKey) 
// (12)qm2651341965 (37)_ZN12QKeySequenceC2ENS_11StandardKeyE
/*void* qm2651341965(QKeySequence::StandardKey key)*/{
  QKeySequence::StandardKey key = *(QKeySequence::StandardKey*)this_;
  this_ =  new QKeySequence(key);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:189
// [8] QKeySequence & operator=(QKeySequence &&) 
// (12)qm4039767688 (23)_ZN12QKeySequenceaSEOS_
//static
/*void qm4039767688(QKeySequence && other)*/ {
  QKeySequence && other =  static_cast<QKeySequence &&>(*(QKeySequence *)this_);
  (void) ((QKeySequence*)this_)->operator=(other);
  // auto xptr = (QKeySequence & (QKeySequence::*)(QKeySequence&&) ) &QKeySequence::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:190
// [-2] void swap(QKeySequence &) 
// (12)qm3480175524 (26)_ZN12QKeySequence4swapERS_
//static
/*void qm3480175524(QKeySequence & other)*/ {
  QKeySequence & other = *(QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->swap(other);
   auto xptr = (void (QKeySequence::*)(QKeySequence&) ) &QKeySequence::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:193
// [1] bool operator!=(const QKeySequence &) const
// (11)qm456588179 (25)_ZNK12QKeySequenceneERKS_
//static
/*void qm456588179(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator!=(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:196
// [1] bool operator>(const QKeySequence &) const
// (12)qm1176792958 (25)_ZNK12QKeySequencegtERKS_
//static
/*void qm1176792958(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator>(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:198
// [1] bool operator<=(const QKeySequence &) const
// (12)qm2359945914 (25)_ZNK12QKeySequenceleERKS_
//static
/*void qm2359945914(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator<=(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:200
// [1] bool operator>=(const QKeySequence &) const
// (12)qm2393816640 (25)_ZNK12QKeySequencegeERKS_
//static
/*void qm2393816640(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator>=(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:221
// [8] QKeySequence::DataPtr & data_ptr() 
// (12)qm2708692779 (28)_ZN12QKeySequence8data_ptrEv
//static
/*void qm2708692779()*/ {
  ;
  (void) ((QKeySequence*)this_)->data_ptr();
   auto xptr = (QKeySequencePrivate *& (QKeySequence::*)() ) &QKeySequence::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QKeySequenceD2Ev(void *this_)*/ {
  delete (QKeySequence*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qkeysequence
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
