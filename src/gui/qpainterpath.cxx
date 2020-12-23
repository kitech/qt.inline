//  header block begin

// /usr/include/qt/QtGui/qpainterpath.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpainterpath.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainterPath is pure virtual: false false
// QPainterPath has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpainterpath(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:92
// [-2] void QPainterPath() 
// (12)qm1427962372 (21)_ZN12QPainterPathC2Ev
/*void* qm1427962372()*/{
  ;
  this_ =  new QPainterPath();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:93
// [-2] void QPainterPath(const QPointF &) 
// (12)qm4274997846 (30)_ZN12QPainterPathC2ERK7QPointF
/*void* qm4274997846(const QPointF & startPoint)*/{
  const QPointF & startPoint = *(const QPointF *)this_;
  this_ =  new QPainterPath(startPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:94
// [-2] void QPainterPath(const QPainterPath &) 
// (12)qm1002912857 (24)_ZN12QPainterPathC2ERKS_
/*void* qm1002912857(const QPainterPath & other)*/{
  const QPainterPath & other = *(const QPainterPath *)this_;
  this_ =  new QPainterPath(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:96
// [8] QPainterPath & operator=(QPainterPath &&) 
// (12)qm3608412104 (23)_ZN12QPainterPathaSEOS_
//static
/*void qm3608412104(QPainterPath && other)*/ {
  QPainterPath && other =  static_cast<QPainterPath &&>(*(QPainterPath *)this_);
  (void) ((QPainterPath*)this_)->operator=(other);
  // auto xptr = (QPainterPath & (QPainterPath::*)(QPainterPath&&) ) &QPainterPath::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:100
// [-2] void swap(QPainterPath &) 
// (11)qm137449152 (26)_ZN12QPainterPath4swapERS_
//static
/*void qm137449152(QPainterPath & other)*/ {
  QPainterPath & other = *(QPainterPath *)this_;
  (void) ((QPainterPath*)this_)->swap(other);
   auto xptr = (void (QPainterPath::*)(QPainterPath&) ) &QPainterPath::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:109
// [-2] void moveTo(qreal, qreal) 
// (12)qm1185039790 (27)_ZN12QPainterPath6moveToEdd
//static
/*void qm1185039790(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QPainterPath*)this_)->moveTo(x, y);
   auto xptr = (void (QPainterPath::*)(double, double) ) &QPainterPath::moveTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:112
// [-2] void lineTo(qreal, qreal) 
// (12)qm3280440003 (27)_ZN12QPainterPath6lineToEdd
//static
/*void qm3280440003(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) ((QPainterPath*)this_)->lineTo(x, y);
   auto xptr = (void (QPainterPath::*)(double, double) ) &QPainterPath::lineTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:115
// [-2] void arcMoveTo(qreal, qreal, qreal, qreal, qreal) 
// (12)qm1791540632 (33)_ZN12QPainterPath9arcMoveToEddddd
//static
/*void qm1791540632(double x, double y, double w, double h, double angle)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; double angle = *(double*)this_;
  (void) ((QPainterPath*)this_)->arcMoveTo(x, y, w, h, angle);
   auto xptr = (void (QPainterPath::*)(double, double, double, double, double) ) &QPainterPath::arcMoveTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:118
// [-2] void arcTo(qreal, qreal, qreal, qreal, qreal, qreal) 
// (12)qm3340005744 (30)_ZN12QPainterPath5arcToEdddddd
//static
/*void qm3340005744(double x, double y, double w, double h, double startAngle, double arcLength)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; double startAngle = *(double*)this_; double arcLength = *(double*)this_;
  (void) ((QPainterPath*)this_)->arcTo(x, y, w, h, startAngle, arcLength);
   auto xptr = (void (QPainterPath::*)(double, double, double, double, double, double) ) &QPainterPath::arcTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:121
// [-2] void cubicTo(qreal, qreal, qreal, qreal, qreal, qreal) 
// (12)qm3679274887 (32)_ZN12QPainterPath7cubicToEdddddd
//static
/*void qm3679274887(double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty)*/ {
  double ctrlPt1x = *(double*)this_; double ctrlPt1y = *(double*)this_; double ctrlPt2x = *(double*)this_; double ctrlPt2y = *(double*)this_; double endPtx = *(double*)this_; double endPty = *(double*)this_;
  (void) ((QPainterPath*)this_)->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
   auto xptr = (void (QPainterPath::*)(double, double, double, double, double, double) ) &QPainterPath::cubicTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:124
// [-2] void quadTo(qreal, qreal, qreal, qreal) 
// (12)qm2899186636 (29)_ZN12QPainterPath6quadToEdddd
//static
/*void qm2899186636(double ctrlPtx, double ctrlPty, double endPtx, double endPty)*/ {
  double ctrlPtx = *(double*)this_; double ctrlPty = *(double*)this_; double endPtx = *(double*)this_; double endPty = *(double*)this_;
  (void) ((QPainterPath*)this_)->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
   auto xptr = (void (QPainterPath::*)(double, double, double, double) ) &QPainterPath::quadTo;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:129
// [-2] void addRect(qreal, qreal, qreal, qreal) 
// (12)qm2987899905 (30)_ZN12QPainterPath7addRectEdddd
//static
/*void qm2987899905(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QPainterPath*)this_)->addRect(x, y, w, h);
   auto xptr = (void (QPainterPath::*)(double, double, double, double) ) &QPainterPath::addRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:131
// [-2] void addEllipse(qreal, qreal, qreal, qreal) 
// (11)qm647648480 (34)_ZN12QPainterPath10addEllipseEdddd
//static
/*void qm647648480(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QPainterPath*)this_)->addEllipse(x, y, w, h);
   auto xptr = (void (QPainterPath::*)(double, double, double, double) ) &QPainterPath::addEllipse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:132
// [-2] void addEllipse(const QPointF &, qreal, qreal) 
// (12)qm3787726113 (42)_ZN12QPainterPath10addEllipseERK7QPointFdd
//static
/*void qm3787726113(const QPointF & center, double rx, double ry)*/ {
  const QPointF & center = *(const QPointF *)this_; double rx = *(double*)this_; double ry = *(double*)this_;
  (void) ((QPainterPath*)this_)->addEllipse(center, rx, ry);
   auto xptr = (void (QPainterPath::*)(QPointF const&, double, double) ) &QPainterPath::addEllipse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:135
// [-2] void addText(qreal, qreal, const QFont &, const QString &) 
// (12)qm2825187190 (46)_ZN12QPainterPath7addTextEddRK5QFontRK7QString
//static
/*void qm2825187190(double x, double y, const QFont & f, const QString & text)*/ {
  double x = *(double*)this_; double y = *(double*)this_; const QFont & f = *(const QFont *)this_; const QString & text = *(const QString *)this_;
  (void) ((QPainterPath*)this_)->addText(x, y, f, text);
   auto xptr = (void (QPainterPath::*)(double, double, QFont const&, QString const&) ) &QPainterPath::addText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:141
// [-2] void addRoundedRect(qreal, qreal, qreal, qreal, qreal, qreal, Qt::SizeMode) 
// (12)qm1683982618 (54)_ZN12QPainterPath14addRoundedRectEddddddN2Qt8SizeModeE
//static
/*void qm1683982618(double x, double y, double w, double h, double xRadius, double yRadius, Qt::SizeMode mode)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_; double xRadius = *(double*)this_; double yRadius = *(double*)this_; Qt::SizeMode mode = *(Qt::SizeMode*)this_;
  (void) ((QPainterPath*)this_)->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
   auto xptr = (void (QPainterPath::*)(double, double, double, double, double, double, Qt::SizeMode) ) &QPainterPath::addRoundedRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:165
// [-2] void translate(const QPointF &) 
// (11)qm345731351 (38)_ZN12QPainterPath9translateERK7QPointF
//static
/*void qm345731351(const QPointF & offset)*/ {
  const QPointF & offset = *(const QPointF *)this_;
  (void) ((QPainterPath*)this_)->translate(offset);
   auto xptr = (void (QPainterPath::*)(QPointF const&) ) &QPainterPath::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:168
// [8] QPainterPath translated(const QPointF &) const
// (11)qm539405875 (41)_ZNK12QPainterPath10translatedERK7QPointF
//static
/*void qm539405875(const QPointF & offset)*/ {
  const QPointF & offset = *(const QPointF *)this_;
  (void) ((QPainterPath*)this_)->translated(offset);
   auto xptr = (QPainterPath (QPainterPath::*)(QPointF const&) const ) &QPainterPath::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QPainterPathD2Ev(void *this_)*/ {
  delete (QPainterPath*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpainterpath
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
