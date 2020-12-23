//  header block begin

// /usr/include/qt/QtCore/qmargins.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmargins.h>
#include <QtCore>
#include "callback_inherit.h"

// QMargins is pure virtual: false false
// QMargins has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmargins(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:54
// [-2] void QMargins() 
// (11)qm471784015 (16)_ZN8QMarginsC2Ev
/*void* qm471784015()*/{
  ;
  this_ =  new QMargins();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:55
// [-2] void QMargins(int, int, int, int) 
// (12)qm3396517233 (19)_ZN8QMarginsC2Eiiii
/*void* qm3396517233(int left, int top, int right, int bottom)*/{
  int left = *(int*)this_; int top = *(int*)this_; int right = *(int*)this_; int bottom = *(int*)this_;
  this_ =  new QMargins(left, top, right, bottom);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:57
// [1] bool isNull() const
// (12)qm1252981690 (22)_ZNK8QMargins6isNullEv
//static
/*void qm1252981690()*/ {
  ;
  (void) ((QMargins*)this_)->isNull();
   auto xptr = (bool (QMargins::*)() const ) &QMargins::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:59
// [4] int left() const
// (12)qm2131726497 (20)_ZNK8QMargins4leftEv
//static
/*void qm2131726497()*/ {
  ;
  (void) ((QMargins*)this_)->left();
   auto xptr = (int (QMargins::*)() const ) &QMargins::left;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:60
// [4] int top() const
// (11)qm704241637 (19)_ZNK8QMargins3topEv
//static
/*void qm704241637()*/ {
  ;
  (void) ((QMargins*)this_)->top();
   auto xptr = (int (QMargins::*)() const ) &QMargins::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:61
// [4] int right() const
// (12)qm2955848476 (21)_ZNK8QMargins5rightEv
//static
/*void qm2955848476()*/ {
  ;
  (void) ((QMargins*)this_)->right();
   auto xptr = (int (QMargins::*)() const ) &QMargins::right;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:62
// [4] int bottom() const
// (12)qm1011669492 (22)_ZNK8QMargins6bottomEv
//static
/*void qm1011669492()*/ {
  ;
  (void) ((QMargins*)this_)->bottom();
   auto xptr = (int (QMargins::*)() const ) &QMargins::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:64
// [-2] void setLeft(int) 
// (12)qm2890693958 (22)_ZN8QMargins7setLeftEi
//static
/*void qm2890693958(int left)*/ {
  int left = *(int*)this_;
  (void) ((QMargins*)this_)->setLeft(left);
   auto xptr = (void (QMargins::*)(int) ) &QMargins::setLeft;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:65
// [-2] void setTop(int) 
// (11)qm999746195 (21)_ZN8QMargins6setTopEi
//static
/*void qm999746195(int top)*/ {
  int top = *(int*)this_;
  (void) ((QMargins*)this_)->setTop(top);
   auto xptr = (void (QMargins::*)(int) ) &QMargins::setTop;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:66
// [-2] void setRight(int) 
// (12)qm2442356761 (23)_ZN8QMargins8setRightEi
//static
/*void qm2442356761(int right)*/ {
  int right = *(int*)this_;
  (void) ((QMargins*)this_)->setRight(right);
   auto xptr = (void (QMargins::*)(int) ) &QMargins::setRight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:67
// [-2] void setBottom(int) 
// (12)qm2927485817 (24)_ZN8QMargins9setBottomEi
//static
/*void qm2927485817(int bottom)*/ {
  int bottom = *(int*)this_;
  (void) ((QMargins*)this_)->setBottom(bottom);
   auto xptr = (void (QMargins::*)(int) ) &QMargins::setBottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:69
// [16] QMargins & operator+=(const QMargins &) 
// (12)qm2485242049 (19)_ZN8QMarginspLERKS_
//static
/*void qm2485242049(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) ((QMargins*)this_)->operator+=(margins);
  // auto xptr = (QMargins & (QMargins::*)(QMargins const&) ) &QMargins::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:70
// [16] QMargins & operator-=(const QMargins &) 
// (12)qm3269829756 (19)_ZN8QMarginsmIERKS_
//static
/*void qm3269829756(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) ((QMargins*)this_)->operator-=(margins);
  // auto xptr = (QMargins & (QMargins::*)(QMargins const&) ) &QMargins::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:71
// [16] QMargins & operator+=(int) 
// (11)qm770164143 (16)_ZN8QMarginspLEi
//static
/*void qm770164143(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QMargins*)this_)->operator+=(arg0);
  // auto xptr = (QMargins & (QMargins::*)(int) ) &QMargins::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:72
// [16] QMargins & operator-=(int) 
// (12)qm2304739334 (16)_ZN8QMarginsmIEi
//static
/*void qm2304739334(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QMargins*)this_)->operator-=(arg0);
  // auto xptr = (QMargins & (QMargins::*)(int) ) &QMargins::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:73
// [16] QMargins & operator*=(int) 
// (12)qm2408860397 (16)_ZN8QMarginsmLEi
//static
/*void qm2408860397(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QMargins*)this_)->operator*=(arg0);
  // auto xptr = (QMargins & (QMargins::*)(int) ) &QMargins::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:74
// [16] QMargins & operator/=(int) 
// (12)qm3811386305 (16)_ZN8QMarginsdVEi
//static
/*void qm3811386305(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QMargins*)this_)->operator/=(arg0);
  // auto xptr = (QMargins & (QMargins::*)(int) ) &QMargins::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:75
// [16] QMargins & operator*=(qreal) 
// (12)qm4045747792 (16)_ZN8QMarginsmLEd
//static
/*void qm4045747792(double arg0)*/ {
  double arg0 = *(double*)this_;
  (void) ((QMargins*)this_)->operator*=(arg0);
  // auto xptr = (QMargins & (QMargins::*)(double) ) &QMargins::operator*=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:76
// [16] QMargins & operator/=(qreal) 
// (12)qm2644270972 (16)_ZN8QMarginsdVEd
//static
/*void qm2644270972(double arg0)*/ {
  double arg0 = *(double*)this_;
  (void) ((QMargins*)this_)->operator/=(arg0);
  // auto xptr = (QMargins & (QMargins::*)(double) ) &QMargins::operator/=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QMarginsD2Ev(void *this_)*/ {
  delete (QMargins*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmargins
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
