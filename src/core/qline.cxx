//  header block begin

// /usr/include/qt/QtCore/qline.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qline.h>
#include <QtCore>
#include "callback_inherit.h"

// QLine is pure virtual: false false
// QLine has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qline(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:55
// [-2] void QLine() 
// (10)qm18471404 (13)_ZN5QLineC2Ev
/*void* qm18471404()*/{
  ;
  this_ =  new QLine();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:56
// [-2] void QLine(const QPoint &, const QPoint &) 
// (12)qm2061364895 (24)_ZN5QLineC2ERK6QPointS2_
/*void* qm2061364895(const QPoint & pt1, const QPoint & pt2)*/{
  const QPoint & pt1 = *(const QPoint *)this_; const QPoint & pt2 = *(const QPoint *)this_;
  this_ =  new QLine(pt1, pt2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:57
// [-2] void QLine(int, int, int, int) 
// (12)qm2751830069 (16)_ZN5QLineC2Eiiii
/*void* qm2751830069(int x1, int y1, int x2, int y2)*/{
  int x1 = *(int*)this_; int y1 = *(int*)this_; int x2 = *(int*)this_; int y2 = *(int*)this_;
  this_ =  new QLine(x1, y1, x2, y2);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:59
// [1] bool isNull() const
// (12)qm2215625032 (19)_ZNK5QLine6isNullEv
//static
/*void qm2215625032()*/ {
  ;
  (void) ((QLine*)this_)->isNull();
   auto xptr = (bool (QLine::*)() const ) &QLine::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:61
// [8] QPoint p1() const
// (11)qm606271685 (15)_ZNK5QLine2p1Ev
//static
/*void qm606271685()*/ {
  ;
  (void) ((QLine*)this_)->p1();
   auto xptr = (QPoint (QLine::*)() const ) &QLine::p1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:62
// [8] QPoint p2() const
// (11)qm644105884 (15)_ZNK5QLine2p2Ev
//static
/*void qm644105884()*/ {
  ;
  (void) ((QLine*)this_)->p2();
   auto xptr = (QPoint (QLine::*)() const ) &QLine::p2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:64
// [4] int x1() const
// (12)qm3784757290 (15)_ZNK5QLine2x1Ev
//static
/*void qm3784757290()*/ {
  ;
  (void) ((QLine*)this_)->x1();
   auto xptr = (int (QLine::*)() const ) &QLine::x1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:65
// [4] int y1() const
// (12)qm1495971663 (15)_ZNK5QLine2y1Ev
//static
/*void qm1495971663()*/ {
  ;
  (void) ((QLine*)this_)->y1();
   auto xptr = (int (QLine::*)() const ) &QLine::y1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:67
// [4] int x2() const
// (12)qm3822087795 (15)_ZNK5QLine2x2Ev
//static
/*void qm3822087795()*/ {
  ;
  (void) ((QLine*)this_)->x2();
   auto xptr = (int (QLine::*)() const ) &QLine::x2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:68
// [4] int y2() const
// (12)qm1533806870 (15)_ZNK5QLine2y2Ev
//static
/*void qm1533806870()*/ {
  ;
  (void) ((QLine*)this_)->y2();
   auto xptr = (int (QLine::*)() const ) &QLine::y2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:70
// [4] int dx() const
// (12)qm2215808578 (15)_ZNK5QLine2dxEv
//static
/*void qm2215808578()*/ {
  ;
  (void) ((QLine*)this_)->dx();
   auto xptr = (int (QLine::*)() const ) &QLine::dx;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:71
// [4] int dy() const
// (12)qm2245059701 (15)_ZNK5QLine2dyEv
//static
/*void qm2245059701()*/ {
  ;
  (void) ((QLine*)this_)->dy();
   auto xptr = (int (QLine::*)() const ) &QLine::dy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:73
// [-2] void translate(const QPoint &) 
// (12)qm4055350169 (29)_ZN5QLine9translateERK6QPoint
//static
/*void qm4055350169(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QLine*)this_)->translate(p);
   auto xptr = (void (QLine::*)(QPoint const&) ) &QLine::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:74
// [-2] void translate(int, int) 
// (12)qm1325399118 (22)_ZN5QLine9translateEii
//static
/*void qm1325399118(int dx, int dy)*/ {
  int dx = *(int*)this_; int dy = *(int*)this_;
  (void) ((QLine*)this_)->translate(dx, dy);
   auto xptr = (void (QLine::*)(int, int) ) &QLine::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:76
// [16] QLine translated(const QPoint &) const
// (12)qm2838942689 (32)_ZNK5QLine10translatedERK6QPoint
//static
/*void qm2838942689(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QLine*)this_)->translated(p);
   auto xptr = (QLine (QLine::*)(QPoint const&) const ) &QLine::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:77
// [16] QLine translated(int, int) const
// (12)qm3895045559 (25)_ZNK5QLine10translatedEii
//static
/*void qm3895045559(int dx, int dy)*/ {
  int dx = *(int*)this_; int dy = *(int*)this_;
  (void) ((QLine*)this_)->translated(dx, dy);
   auto xptr = (QLine (QLine::*)(int, int) const ) &QLine::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:79
// [8] QPoint center() const
// (12)qm1086167298 (19)_ZNK5QLine6centerEv
//static
/*void qm1086167298()*/ {
  ;
  (void) ((QLine*)this_)->center();
   auto xptr = (QPoint (QLine::*)() const ) &QLine::center;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:81
// [-2] void setP1(const QPoint &) 
// (12)qm3845096154 (25)_ZN5QLine5setP1ERK6QPoint
//static
/*void qm3845096154(const QPoint & p1)*/ {
  const QPoint & p1 = *(const QPoint *)this_;
  (void) ((QLine*)this_)->setP1(p1);
   auto xptr = (void (QLine::*)(QPoint const&) ) &QLine::setP1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:82
// [-2] void setP2(const QPoint &) 
// (12)qm2093868251 (25)_ZN5QLine5setP2ERK6QPoint
//static
/*void qm2093868251(const QPoint & p2)*/ {
  const QPoint & p2 = *(const QPoint *)this_;
  (void) ((QLine*)this_)->setP2(p2);
   auto xptr = (void (QLine::*)(QPoint const&) ) &QLine::setP2;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:83
// [-2] void setPoints(const QPoint &, const QPoint &) 
// (12)qm3702181893 (32)_ZN5QLine9setPointsERK6QPointS2_
//static
/*void qm3702181893(const QPoint & p1, const QPoint & p2)*/ {
  const QPoint & p1 = *(const QPoint *)this_; const QPoint & p2 = *(const QPoint *)this_;
  (void) ((QLine*)this_)->setPoints(p1, p2);
   auto xptr = (void (QLine::*)(QPoint const&, QPoint const&) ) &QLine::setPoints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:84
// [-2] void setLine(int, int, int, int) 
// (11)qm746178406 (22)_ZN5QLine7setLineEiiii
//static
/*void qm746178406(int x1, int y1, int x2, int y2)*/ {
  int x1 = *(int*)this_; int y1 = *(int*)this_; int x2 = *(int*)this_; int y2 = *(int*)this_;
  (void) ((QLine*)this_)->setLine(x1, y1, x2, y2);
   auto xptr = (void (QLine::*)(int, int, int, int) ) &QLine::setLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:86
// [1] bool operator==(const QLine &) const
// (12)qm4000413308 (17)_ZNK5QLineeqERKS_
//static
/*void qm4000413308(const QLine & d)*/ {
  const QLine & d = *(const QLine *)this_;
  (void) ((QLine*)this_)->operator==(d);
  // auto xptr = (bool (QLine::*)(QLine const&) const ) &QLine::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:87
// [1] bool operator!=(const QLine &) const
// (12)qm1949393419 (17)_ZNK5QLineneERKS_
//static
/*void qm1949393419(const QLine & d)*/ {
  const QLine & d = *(const QLine *)this_;
  (void) ((QLine*)this_)->operator!=(d);
  // auto xptr = (bool (QLine::*)(QLine const&) const ) &QLine::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QLineD2Ev(void *this_)*/ {
  delete (QLine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qline
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
