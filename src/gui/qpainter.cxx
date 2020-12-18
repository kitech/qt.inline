//  header block begin

// /usr/include/qt/QtGui/qpainter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpainter.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainter is pure virtual: false false
// QPainter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPainter_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPainter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPainter_t qt_meta_stringdata_MyQPainter = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQPainter"
  },
  "MyQPainter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPainter[] = {
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
class Q_DECL_EXPORT MyQPainter : public QPainter {
public:
  virtual ~MyQPainter() {}
// void QPainter()
MyQPainter() : QPainter() {}
// void QPainter(QPaintDevice *)
MyQPainter(QPaintDevice * arg0) : QPainter(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpainter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:208
// [-2] void setBrushOrigin(int, int) 
// (12)qm2782499015 (31)_ZN8QPainter14setBrushOriginEii
//static
/*void qm2782499015(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QPainter*)this_)->setBrushOrigin(x, y);
   auto xptr = (void (QPainter::*)(int, int) ) &QPainter::setBrushOrigin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:209
// [-2] void setBrushOrigin(const QPoint &) 
// (12)qm3706767108 (38)_ZN8QPainter14setBrushOriginERK6QPoint
//static
/*void qm3706767108(const QPoint & arg0)*/ {
  const QPoint & arg0 = *(const QPoint *)this_;
  (void) ((QPainter*)this_)->setBrushOrigin(arg0);
   auto xptr = (void (QPainter::*)(QPoint const&) ) &QPainter::setBrushOrigin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:224
// [-2] void setClipRect(int, int, int, int, Qt::ClipOperation) 
// (11)qm720001610 (50)_ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE
//static
/*void qm720001610(int x, int y, int w, int h, Qt::ClipOperation op)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; Qt::ClipOperation op = *(Qt::ClipOperation*)this_;
  (void) ((QPainter*)this_)->setClipRect(x, y, w, h, op);
   auto xptr = (void (QPainter::*)(int, int, int, int, Qt::ClipOperation) ) &QPainter::setClipRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:281
// [-2] void translate(const QPoint &) 
// (11)qm281104324 (32)_ZN8QPainter9translateERK6QPoint
//static
/*void qm281104324(const QPoint & offset)*/ {
  const QPoint & offset = *(const QPoint *)this_;
  (void) ((QPainter*)this_)->translate(offset);
   auto xptr = (void (QPainter::*)(QPoint const&) ) &QPainter::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:282
// [-2] void translate(qreal, qreal) 
// (12)qm3832174035 (25)_ZN8QPainter9translateEdd
//static
/*void qm3832174035(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QPainter*)this_)->translate(dx, dy);
   auto xptr = (void (QPainter::*)(double, double) ) &QPainter::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:286
// [-2] void setWindow(int, int, int, int) 
// (12)qm2622897918 (27)_ZN8QPainter9setWindowEiiii
//static
/*void qm2622897918(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QPainter*)this_)->setWindow(x, y, w, h);
   auto xptr = (void (QPainter::*)(int, int, int, int) ) &QPainter::setWindow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:290
// [-2] void setViewport(int, int, int, int) 
// (12)qm1351697374 (30)_ZN8QPainter11setViewportEiiii
//static
/*void qm1351697374(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QPainter*)this_)->setViewport(x, y, w, h);
   auto xptr = (void (QPainter::*)(int, int, int, int) ) &QPainter::setViewport;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:300
// [-2] void drawPoint(const QPointF &) 
// (12)qm2384044154 (33)_ZN8QPainter9drawPointERK7QPointF
//static
/*void qm2384044154(const QPointF & pt)*/ {
  const QPointF & pt = *(const QPointF *)this_;
  (void) ((QPainter*)this_)->drawPoint(pt);
   auto xptr = (void (QPainter::*)(QPointF const&) ) &QPainter::drawPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:301
// [-2] void drawPoint(const QPoint &) 
// (11)qm240318537 (32)_ZN8QPainter9drawPointERK6QPoint
//static
/*void qm240318537(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QPainter*)this_)->drawPoint(p);
   auto xptr = (void (QPainter::*)(QPoint const&) ) &QPainter::drawPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:302
// [-2] void drawPoint(int, int) 
// (12)qm1270418537 (25)_ZN8QPainter9drawPointEii
//static
/*void qm1270418537(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QPainter*)this_)->drawPoint(x, y);
   auto xptr = (void (QPainter::*)(int, int) ) &QPainter::drawPoint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:305
// [-2] void drawPoints(const QPolygonF &) 
// (12)qm2561896720 (37)_ZN8QPainter10drawPointsERK9QPolygonF
//static
/*void qm2561896720(const QPolygonF & points)*/ {
  const QPolygonF & points = *(const QPolygonF *)this_;
  (void) ((QPainter*)this_)->drawPoints(points);
   auto xptr = (void (QPainter::*)(QPolygonF const&) ) &QPainter::drawPoints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:307
// [-2] void drawPoints(const QPolygon &) 
// (12)qm2034288737 (36)_ZN8QPainter10drawPointsERK8QPolygon
//static
/*void qm2034288737(const QPolygon & points)*/ {
  const QPolygon & points = *(const QPolygon *)this_;
  (void) ((QPainter*)this_)->drawPoints(points);
   auto xptr = (void (QPainter::*)(QPolygon const&) ) &QPainter::drawPoints;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:309
// [-2] void drawLine(const QLineF &) 
// (12)qm3545799739 (31)_ZN8QPainter8drawLineERK6QLineF
//static
/*void qm3545799739(const QLineF & line)*/ {
  const QLineF & line = *(const QLineF *)this_;
  (void) ((QPainter*)this_)->drawLine(line);
   auto xptr = (void (QPainter::*)(QLineF const&) ) &QPainter::drawLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:310
// [-2] void drawLine(const QLine &) 
// (11)qm127320745 (30)_ZN8QPainter8drawLineERK5QLine
//static
/*void qm127320745(const QLine & line)*/ {
  const QLine & line = *(const QLine *)this_;
  (void) ((QPainter*)this_)->drawLine(line);
   auto xptr = (void (QPainter::*)(QLine const&) ) &QPainter::drawLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:311
// [-2] void drawLine(int, int, int, int) 
// (11)qm437797096 (26)_ZN8QPainter8drawLineEiiii
//static
/*void qm437797096(int x1, int y1, int x2, int y2)*/ {
  int x1 = *(int*)this_; int y1 = *(int*)this_; int x2 = *(int*)this_; int y2 = *(int*)this_;
  (void) ((QPainter*)this_)->drawLine(x1, y1, x2, y2);
   auto xptr = (void (QPainter::*)(int, int, int, int) ) &QPainter::drawLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:312
// [-2] void drawLine(const QPoint &, const QPoint &) 
// (12)qm1867933504 (34)_ZN8QPainter8drawLineERK6QPointS2_
//static
/*void qm1867933504(const QPoint & p1, const QPoint & p2)*/ {
  const QPoint & p1 = *(const QPoint *)this_; const QPoint & p2 = *(const QPoint *)this_;
  (void) ((QPainter*)this_)->drawLine(p1, p2);
   auto xptr = (void (QPainter::*)(QPoint const&, QPoint const&) ) &QPainter::drawLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:313
// [-2] void drawLine(const QPointF &, const QPointF &) 
// (12)qm1617590415 (35)_ZN8QPainter8drawLineERK7QPointFS2_
//static
/*void qm1617590415(const QPointF & p1, const QPointF & p2)*/ {
  const QPointF & p1 = *(const QPointF *)this_; const QPointF & p2 = *(const QPointF *)this_;
  (void) ((QPainter*)this_)->drawLine(p1, p2);
   auto xptr = (void (QPainter::*)(QPointF const&, QPointF const&) ) &QPainter::drawLine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:316
// [-2] void drawLines(const QVector<QLineF> &) 
// (12)qm4064749038 (42)_ZN8QPainter9drawLinesERK7QVectorI6QLineFE
//static
/*void qm4064749038(const QVector<QLineF> & lines)*/ {
  const QVector<QLineF> & lines = *(const QVector<QLineF> *)this_;
  (void) ((QPainter*)this_)->drawLines(lines);
   auto xptr = (void (QPainter::*)(QVector<QLineF> const&) ) &QPainter::drawLines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:318
// [-2] void drawLines(const QVector<QPointF> &) 
// (12)qm2605443584 (43)_ZN8QPainter9drawLinesERK7QVectorI7QPointFE
//static
/*void qm2605443584(const QVector<QPointF> & pointPairs)*/ {
  const QVector<QPointF> & pointPairs = *(const QVector<QPointF> *)this_;
  (void) ((QPainter*)this_)->drawLines(pointPairs);
   auto xptr = (void (QPainter::*)(QVector<QPointF> const&) ) &QPainter::drawLines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:320
// [-2] void drawLines(const QVector<QLine> &) 
// (12)qm2192481047 (41)_ZN8QPainter9drawLinesERK7QVectorI5QLineE
//static
/*void qm2192481047(const QVector<QLine> & lines)*/ {
  const QVector<QLine> & lines = *(const QVector<QLine> *)this_;
  (void) ((QPainter*)this_)->drawLines(lines);
   auto xptr = (void (QPainter::*)(QVector<QLine> const&) ) &QPainter::drawLines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:322
// [-2] void drawLines(const QVector<QPoint> &) 
// (12)qm1977717127 (42)_ZN8QPainter9drawLinesERK7QVectorI6QPointE
//static
/*void qm1977717127(const QVector<QPoint> & pointPairs)*/ {
  const QVector<QPoint> & pointPairs = *(const QVector<QPoint> *)this_;
  (void) ((QPainter*)this_)->drawLines(pointPairs);
   auto xptr = (void (QPainter::*)(QVector<QPoint> const&) ) &QPainter::drawLines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:324
// [-2] void drawRect(const QRectF &) 
// (12)qm3676008657 (31)_ZN8QPainter8drawRectERK6QRectF
//static
/*void qm3676008657(const QRectF & rect)*/ {
  const QRectF & rect = *(const QRectF *)this_;
  (void) ((QPainter*)this_)->drawRect(rect);
   auto xptr = (void (QPainter::*)(QRectF const&) ) &QPainter::drawRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:325
// [-2] void drawRect(int, int, int, int) 
// (12)qm2162719930 (26)_ZN8QPainter8drawRectEiiii
//static
/*void qm2162719930(int x1, int y1, int w, int h)*/ {
  int x1 = *(int*)this_; int y1 = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QPainter*)this_)->drawRect(x1, y1, w, h);
   auto xptr = (void (QPainter::*)(int, int, int, int) ) &QPainter::drawRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:326
// [-2] void drawRect(const QRect &) 
// (11)qm692520420 (30)_ZN8QPainter8drawRectERK5QRect
//static
/*void qm692520420(const QRect & rect)*/ {
  const QRect & rect = *(const QRect *)this_;
  (void) ((QPainter*)this_)->drawRect(rect);
   auto xptr = (void (QPainter::*)(QRect const&) ) &QPainter::drawRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:329
// [-2] void drawRects(const QVector<QRectF> &) 
// (12)qm1616963296 (42)_ZN8QPainter9drawRectsERK7QVectorI6QRectFE
//static
/*void qm1616963296(const QVector<QRectF> & rectangles)*/ {
  const QVector<QRectF> & rectangles = *(const QVector<QRectF> *)this_;
  (void) ((QPainter*)this_)->drawRects(rectangles);
   auto xptr = (void (QPainter::*)(QVector<QRectF> const&) ) &QPainter::drawRects;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:331
// [-2] void drawRects(const QVector<QRect> &) 
// (12)qm2011369179 (41)_ZN8QPainter9drawRectsERK7QVectorI5QRectE
//static
/*void qm2011369179(const QVector<QRect> & rectangles)*/ {
  const QVector<QRect> & rectangles = *(const QVector<QRect> *)this_;
  (void) ((QPainter*)this_)->drawRects(rectangles);
   auto xptr = (void (QPainter::*)(QVector<QRect> const&) ) &QPainter::drawRects;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:335
// [-2] void drawEllipse(int, int, int, int) 
// (12)qm1793592021 (30)_ZN8QPainter11drawEllipseEiiii
//static
/*void qm1793592021(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QPainter*)this_)->drawEllipse(x, y, w, h);
   auto xptr = (void (QPainter::*)(int, int, int, int) ) &QPainter::drawEllipse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:337
// [-2] void drawEllipse(const QPointF &, qreal, qreal) 
// (12)qm3579898718 (38)_ZN8QPainter11drawEllipseERK7QPointFdd
//static
/*void qm3579898718(const QPointF & center, double rx, double ry)*/ {
  const QPointF & center = *(const QPointF *)this_; double rx = *(double*)this_; double ry = *(double*)this_;
  (void) ((QPainter*)this_)->drawEllipse(center, rx, ry);
   auto xptr = (void (QPainter::*)(QPointF const&, double, double) ) &QPainter::drawEllipse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:338
// [-2] void drawEllipse(const QPoint &, int, int) 
// (12)qm1947638515 (37)_ZN8QPainter11drawEllipseERK6QPointii
//static
/*void qm1947638515(const QPoint & center, int rx, int ry)*/ {
  const QPoint & center = *(const QPoint *)this_; int rx = *(int*)this_; int ry = *(int*)this_;
  (void) ((QPainter*)this_)->drawEllipse(center, rx, ry);
   auto xptr = (void (QPainter::*)(QPoint const&, int, int) ) &QPainter::drawEllipse;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:341
// [-2] void drawPolyline(const QPolygonF &) 
// (12)qm3935038486 (39)_ZN8QPainter12drawPolylineERK9QPolygonF
//static
/*void qm3935038486(const QPolygonF & polyline)*/ {
  const QPolygonF & polyline = *(const QPolygonF *)this_;
  (void) ((QPainter*)this_)->drawPolyline(polyline);
   auto xptr = (void (QPainter::*)(QPolygonF const&) ) &QPainter::drawPolyline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:343
// [-2] void drawPolyline(const QPolygon &) 
// (12)qm1186614183 (38)_ZN8QPainter12drawPolylineERK8QPolygon
//static
/*void qm1186614183(const QPolygon & polygon)*/ {
  const QPolygon & polygon = *(const QPolygon *)this_;
  (void) ((QPainter*)this_)->drawPolyline(polygon);
   auto xptr = (void (QPainter::*)(QPolygon const&) ) &QPainter::drawPolyline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:346
// [-2] void drawPolygon(const QPolygonF &, Qt::FillRule) 
// (12)qm2441023518 (52)_ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE
//static
/*void qm2441023518(const QPolygonF & polygon, Qt::FillRule fillRule)*/ {
  const QPolygonF & polygon = *(const QPolygonF *)this_; Qt::FillRule fillRule = *(Qt::FillRule*)this_;
  (void) ((QPainter*)this_)->drawPolygon(polygon, fillRule);
   auto xptr = (void (QPainter::*)(QPolygonF const&, Qt::FillRule) ) &QPainter::drawPolygon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:348
// [-2] void drawPolygon(const QPolygon &, Qt::FillRule) 
// (11)qm542337015 (51)_ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE
//static
/*void qm542337015(const QPolygon & polygon, Qt::FillRule fillRule)*/ {
  const QPolygon & polygon = *(const QPolygon *)this_; Qt::FillRule fillRule = *(Qt::FillRule*)this_;
  (void) ((QPainter*)this_)->drawPolygon(polygon, fillRule);
   auto xptr = (void (QPainter::*)(QPolygon const&, Qt::FillRule) ) &QPainter::drawPolygon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:351
// [-2] void drawConvexPolygon(const QPolygonF &) 
// (12)qm1661137280 (44)_ZN8QPainter17drawConvexPolygonERK9QPolygonF
//static
/*void qm1661137280(const QPolygonF & polygon)*/ {
  const QPolygonF & polygon = *(const QPolygonF *)this_;
  (void) ((QPainter*)this_)->drawConvexPolygon(polygon);
   auto xptr = (void (QPainter::*)(QPolygonF const&) ) &QPainter::drawConvexPolygon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:353
// [-2] void drawConvexPolygon(const QPolygon &) 
// (11)qm478952766 (43)_ZN8QPainter17drawConvexPolygonERK8QPolygon
//static
/*void qm478952766(const QPolygon & polygon)*/ {
  const QPolygon & polygon = *(const QPolygon *)this_;
  (void) ((QPainter*)this_)->drawConvexPolygon(polygon);
   auto xptr = (void (QPainter::*)(QPolygon const&) ) &QPainter::drawConvexPolygon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:356
// [-2] void drawArc(const QRect &, int, int) 
// (12)qm1832384976 (31)_ZN8QPainter7drawArcERK5QRectii
//static
/*void qm1832384976(const QRect & arg0, int a, int alen)*/ {
  const QRect & arg0 = *(const QRect *)this_; int a = *(int*)this_; int alen = *(int*)this_;
  (void) ((QPainter*)this_)->drawArc(arg0, a, alen);
   auto xptr = (void (QPainter::*)(QRect const&, int, int) ) &QPainter::drawArc;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:357
// [-2] void drawArc(int, int, int, int, int, int) 
// (12)qm3818011130 (27)_ZN8QPainter7drawArcEiiiiii
//static
/*void qm3818011130(int x, int y, int w, int h, int a, int alen)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; int a = *(int*)this_; int alen = *(int*)this_;
  (void) ((QPainter*)this_)->drawArc(x, y, w, h, a, alen);
   auto xptr = (void (QPainter::*)(int, int, int, int, int, int) ) &QPainter::drawArc;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:360
// [-2] void drawPie(int, int, int, int, int, int) 
// (12)qm3271820807 (27)_ZN8QPainter7drawPieEiiiiii
//static
/*void qm3271820807(int x, int y, int w, int h, int a, int alen)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; int a = *(int*)this_; int alen = *(int*)this_;
  (void) ((QPainter*)this_)->drawPie(x, y, w, h, a, alen);
   auto xptr = (void (QPainter::*)(int, int, int, int, int, int) ) &QPainter::drawPie;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:361
// [-2] void drawPie(const QRect &, int, int) 
// (11)qm712611923 (31)_ZN8QPainter7drawPieERK5QRectii
//static
/*void qm712611923(const QRect & arg0, int a, int alen)*/ {
  const QRect & arg0 = *(const QRect *)this_; int a = *(int*)this_; int alen = *(int*)this_;
  (void) ((QPainter*)this_)->drawPie(arg0, a, alen);
   auto xptr = (void (QPainter::*)(QRect const&, int, int) ) &QPainter::drawPie;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:364
// [-2] void drawChord(int, int, int, int, int, int) 
// (12)qm1391233194 (29)_ZN8QPainter9drawChordEiiiiii
//static
/*void qm1391233194(int x, int y, int w, int h, int a, int alen)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; int a = *(int*)this_; int alen = *(int*)this_;
  (void) ((QPainter*)this_)->drawChord(x, y, w, h, a, alen);
   auto xptr = (void (QPainter::*)(int, int, int, int, int, int) ) &QPainter::drawChord;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:365
// [-2] void drawChord(const QRect &, int, int) 
// (12)qm1870443831 (33)_ZN8QPainter9drawChordERK5QRectii
//static
/*void qm1870443831(const QRect & arg0, int a, int alen)*/ {
  const QRect & arg0 = *(const QRect *)this_; int a = *(int*)this_; int alen = *(int*)this_;
  (void) ((QPainter*)this_)->drawChord(arg0, a, alen);
   auto xptr = (void (QPainter::*)(QRect const&, int, int) ) &QPainter::drawChord;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:369
// [-2] void drawRoundedRect(int, int, int, int, qreal, qreal, Qt::SizeMode) 
// (12)qm3069572486 (50)_ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE
//static
/*void qm3069572486(int x, int y, int w, int h, double xRadius, double yRadius, Qt::SizeMode mode)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; double xRadius = *(double*)this_; double yRadius = *(double*)this_; Qt::SizeMode mode = *(Qt::SizeMode*)this_;
  (void) ((QPainter*)this_)->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
   auto xptr = (void (QPainter::*)(int, int, int, int, double, double, Qt::SizeMode) ) &QPainter::drawRoundedRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:371
// [-2] void drawRoundedRect(const QRect &, qreal, qreal, Qt::SizeMode) 
// (12)qm3800426133 (54)_ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE
//static
/*void qm3800426133(const QRect & rect, double xRadius, double yRadius, Qt::SizeMode mode)*/ {
  const QRect & rect = *(const QRect *)this_; double xRadius = *(double*)this_; double yRadius = *(double*)this_; Qt::SizeMode mode = *(Qt::SizeMode*)this_;
  (void) ((QPainter*)this_)->drawRoundedRect(rect, xRadius, yRadius, mode);
   auto xptr = (void (QPainter::*)(QRect const&, double, double, Qt::SizeMode) ) &QPainter::drawRoundedRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:384
// [-2] void drawTiledPixmap(int, int, int, int, const QPixmap &, int, int) 
// (12)qm2251893481 (46)_ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii
//static
/*void qm2251893481(int x, int y, int w, int h, const QPixmap & arg4, int sx, int sy)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; const QPixmap & arg4 = *(const QPixmap *)this_; int sx = *(int*)this_; int sy = *(int*)this_;
  (void) ((QPainter*)this_)->drawTiledPixmap(x, y, w, h, arg4, sx, sy);
   auto xptr = (void (QPainter::*)(int, int, int, int, QPixmap const&, int, int) ) &QPainter::drawTiledPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:385
// [-2] void drawTiledPixmap(const QRect &, const QPixmap &, const QPoint &) 
// (11)qm207202025 (57)_ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint
//static
/*void qm207202025(const QRect & arg0, const QPixmap & arg1, const QPoint & arg2)*/ {
  const QRect & arg0 = *(const QRect *)this_; const QPixmap & arg1 = *(const QPixmap *)this_; const QPoint & arg2 = *(const QPoint *)this_;
  (void) ((QPainter*)this_)->drawTiledPixmap(arg0, arg1, arg2);
   auto xptr = (void (QPainter::*)(QRect const&, QPixmap const&, QPoint const&) ) &QPainter::drawTiledPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:388
// [-2] void drawPicture(int, int, const QPicture &) 
// (12)qm2448020198 (39)_ZN8QPainter11drawPictureEiiRK8QPicture
//static
/*void qm2448020198(int x, int y, const QPicture & picture)*/ {
  int x = *(int*)this_; int y = *(int*)this_; const QPicture & picture = *(const QPicture *)this_;
  (void) ((QPainter*)this_)->drawPicture(x, y, picture);
   auto xptr = (void (QPainter::*)(int, int, QPicture const&) ) &QPainter::drawPicture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:389
// [-2] void drawPicture(const QPoint &, const QPicture &) 
// (12)qm2892169984 (46)_ZN8QPainter11drawPictureERK6QPointRK8QPicture
//static
/*void qm2892169984(const QPoint & p, const QPicture & picture)*/ {
  const QPoint & p = *(const QPoint *)this_; const QPicture & picture = *(const QPicture *)this_;
  (void) ((QPainter*)this_)->drawPicture(p, picture);
   auto xptr = (void (QPainter::*)(QPoint const&, QPicture const&) ) &QPainter::drawPicture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:393
// [-2] void drawPixmap(const QRect &, const QPixmap &, const QRect &) 
// (12)qm1781657010 (46)_ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_
//static
/*void qm1781657010(const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect)*/ {
  const QRect & targetRect = *(const QRect *)this_; const QPixmap & pixmap = *(const QPixmap *)this_; const QRect & sourceRect = *(const QRect *)this_;
  (void) ((QPainter*)this_)->drawPixmap(targetRect, pixmap, sourceRect);
   auto xptr = (void (QPainter::*)(QRect const&, QPixmap const&, QRect const&) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:394
// [-2] void drawPixmap(int, int, int, int, const QPixmap &, int, int, int, int) 
// (12)qm2580940002 (43)_ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii
//static
/*void qm2580940002(int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; const QPixmap & pm = *(const QPixmap *)this_; int sx = *(int*)this_; int sy = *(int*)this_; int sw = *(int*)this_; int sh = *(int*)this_;
  (void) ((QPainter*)this_)->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
   auto xptr = (void (QPainter::*)(int, int, int, int, QPixmap const&, int, int, int, int) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:396
// [-2] void drawPixmap(int, int, const QPixmap &, int, int, int, int) 
// (12)qm2312396121 (41)_ZN8QPainter10drawPixmapEiiRK7QPixmapiiii
//static
/*void qm2312396121(int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh)*/ {
  int x = *(int*)this_; int y = *(int*)this_; const QPixmap & pm = *(const QPixmap *)this_; int sx = *(int*)this_; int sy = *(int*)this_; int sw = *(int*)this_; int sh = *(int*)this_;
  (void) ((QPainter*)this_)->drawPixmap(x, y, pm, sx, sy, sw, sh);
   auto xptr = (void (QPainter::*)(int, int, QPixmap const&, int, int, int, int) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:398
// [-2] void drawPixmap(const QPointF &, const QPixmap &, const QRectF &) 
// (11)qm962208427 (54)_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF
//static
/*void qm962208427(const QPointF & p, const QPixmap & pm, const QRectF & sr)*/ {
  const QPointF & p = *(const QPointF *)this_; const QPixmap & pm = *(const QPixmap *)this_; const QRectF & sr = *(const QRectF *)this_;
  (void) ((QPainter*)this_)->drawPixmap(p, pm, sr);
   auto xptr = (void (QPainter::*)(QPointF const&, QPixmap const&, QRectF const&) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:399
// [-2] void drawPixmap(const QPoint &, const QPixmap &, const QRect &) 
// (12)qm3894369120 (52)_ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect
//static
/*void qm3894369120(const QPoint & p, const QPixmap & pm, const QRect & sr)*/ {
  const QPoint & p = *(const QPoint *)this_; const QPixmap & pm = *(const QPixmap *)this_; const QRect & sr = *(const QRect *)this_;
  (void) ((QPainter*)this_)->drawPixmap(p, pm, sr);
   auto xptr = (void (QPainter::*)(QPoint const&, QPixmap const&, QRect const&) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:401
// [-2] void drawPixmap(const QPoint &, const QPixmap &) 
// (11)qm294529983 (44)_ZN8QPainter10drawPixmapERK6QPointRK7QPixmap
//static
/*void qm294529983(const QPoint & p, const QPixmap & pm)*/ {
  const QPoint & p = *(const QPoint *)this_; const QPixmap & pm = *(const QPixmap *)this_;
  (void) ((QPainter*)this_)->drawPixmap(p, pm);
   auto xptr = (void (QPainter::*)(QPoint const&, QPixmap const&) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:402
// [-2] void drawPixmap(int, int, const QPixmap &) 
// (12)qm4246765882 (37)_ZN8QPainter10drawPixmapEiiRK7QPixmap
//static
/*void qm4246765882(int x, int y, const QPixmap & pm)*/ {
  int x = *(int*)this_; int y = *(int*)this_; const QPixmap & pm = *(const QPixmap *)this_;
  (void) ((QPainter*)this_)->drawPixmap(x, y, pm);
   auto xptr = (void (QPainter::*)(int, int, QPixmap const&) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:403
// [-2] void drawPixmap(const QRect &, const QPixmap &) 
// (12)qm3594828970 (43)_ZN8QPainter10drawPixmapERK5QRectRK7QPixmap
//static
/*void qm3594828970(const QRect & r, const QPixmap & pm)*/ {
  const QRect & r = *(const QRect *)this_; const QPixmap & pm = *(const QPixmap *)this_;
  (void) ((QPainter*)this_)->drawPixmap(r, pm);
   auto xptr = (void (QPainter::*)(QRect const&, QPixmap const&) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:404
// [-2] void drawPixmap(int, int, int, int, const QPixmap &) 
// (10)qm24461623 (39)_ZN8QPainter10drawPixmapEiiiiRK7QPixmap
//static
/*void qm24461623(int x, int y, int w, int h, const QPixmap & pm)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; const QPixmap & pm = *(const QPixmap *)this_;
  (void) ((QPainter*)this_)->drawPixmap(x, y, w, h, pm);
   auto xptr = (void (QPainter::*)(int, int, int, int, QPixmap const&) ) &QPainter::drawPixmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:411
// [-2] void drawImage(const QRect &, const QImage &, const QRect &, Qt::ImageConversionFlags) 
// (12)qm2161539804 (78)_ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm2161539804(const QRect & targetRect, const QImage & image, const QRect & sourceRect, QFlags<Qt::ImageConversionFlag> flags)*/ {
  const QRect & targetRect = *(const QRect *)this_; const QImage & image = *(const QImage *)this_; const QRect & sourceRect = *(const QRect *)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) ((QPainter*)this_)->drawImage(targetRect, image, sourceRect, flags);
   auto xptr = (void (QPainter::*)(QRect const&, QImage const&, QRect const&, QFlags<Qt::ImageConversionFlag>) ) &QPainter::drawImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:413
// [-2] void drawImage(const QPointF &, const QImage &, const QRectF &, Qt::ImageConversionFlags) 
// (12)qm1910841397 (86)_ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm1910841397(const QPointF & p, const QImage & image, const QRectF & sr, QFlags<Qt::ImageConversionFlag> flags)*/ {
  const QPointF & p = *(const QPointF *)this_; const QImage & image = *(const QImage *)this_; const QRectF & sr = *(const QRectF *)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) ((QPainter*)this_)->drawImage(p, image, sr, flags);
   auto xptr = (void (QPainter::*)(QPointF const&, QImage const&, QRectF const&, QFlags<Qt::ImageConversionFlag>) ) &QPainter::drawImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:415
// [-2] void drawImage(const QPoint &, const QImage &, const QRect &, Qt::ImageConversionFlags) 
// (12)qm3428625292 (84)_ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm3428625292(const QPoint & p, const QImage & image, const QRect & sr, QFlags<Qt::ImageConversionFlag> flags)*/ {
  const QPoint & p = *(const QPoint *)this_; const QImage & image = *(const QImage *)this_; const QRect & sr = *(const QRect *)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) ((QPainter*)this_)->drawImage(p, image, sr, flags);
   auto xptr = (void (QPainter::*)(QPoint const&, QImage const&, QRect const&, QFlags<Qt::ImageConversionFlag>) ) &QPainter::drawImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:417
// [-2] void drawImage(const QRectF &, const QImage &) 
// (12)qm2254199474 (41)_ZN8QPainter9drawImageERK6QRectFRK6QImage
//static
/*void qm2254199474(const QRectF & r, const QImage & image)*/ {
  const QRectF & r = *(const QRectF *)this_; const QImage & image = *(const QImage *)this_;
  (void) ((QPainter*)this_)->drawImage(r, image);
   auto xptr = (void (QPainter::*)(QRectF const&, QImage const&) ) &QPainter::drawImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:418
// [-2] void drawImage(const QRect &, const QImage &) 
// (12)qm1434914938 (40)_ZN8QPainter9drawImageERK5QRectRK6QImage
//static
/*void qm1434914938(const QRect & r, const QImage & image)*/ {
  const QRect & r = *(const QRect *)this_; const QImage & image = *(const QImage *)this_;
  (void) ((QPainter*)this_)->drawImage(r, image);
   auto xptr = (void (QPainter::*)(QRect const&, QImage const&) ) &QPainter::drawImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:420
// [-2] void drawImage(const QPoint &, const QImage &) 
// (12)qm2533744146 (41)_ZN8QPainter9drawImageERK6QPointRK6QImage
//static
/*void qm2533744146(const QPoint & p, const QImage & image)*/ {
  const QPoint & p = *(const QPoint *)this_; const QImage & image = *(const QImage *)this_;
  (void) ((QPainter*)this_)->drawImage(p, image);
   auto xptr = (void (QPainter::*)(QPoint const&, QImage const&) ) &QPainter::drawImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:421
// [-2] void drawImage(int, int, const QImage &, int, int, int, int, Qt::ImageConversionFlags) 
// (12)qm2129661642 (73)_ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm2129661642(int x, int y, const QImage & image, int sx, int sy, int sw, int sh, QFlags<Qt::ImageConversionFlag> flags)*/ {
  int x = *(int*)this_; int y = *(int*)this_; const QImage & image = *(const QImage *)this_; int sx = *(int*)this_; int sy = *(int*)this_; int sw = *(int*)this_; int sh = *(int*)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) ((QPainter*)this_)->drawImage(x, y, image, sx, sy, sw, sh, flags);
   auto xptr = (void (QPainter::*)(int, int, QImage const&, int, int, int, int, QFlags<Qt::ImageConversionFlag>) ) &QPainter::drawImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:432
// [-2] void drawStaticText(const QPoint &, const QStaticText &) 
// (12)qm2267184671 (53)_ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText
//static
/*void qm2267184671(const QPoint & topLeftPosition, const QStaticText & staticText)*/ {
  const QPoint & topLeftPosition = *(const QPoint *)this_; const QStaticText & staticText = *(const QStaticText *)this_;
  (void) ((QPainter*)this_)->drawStaticText(topLeftPosition, staticText);
   auto xptr = (void (QPainter::*)(QPoint const&, QStaticText const&) ) &QPainter::drawStaticText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:433
// [-2] void drawStaticText(int, int, const QStaticText &) 
// (12)qm1276306527 (46)_ZN8QPainter14drawStaticTextEiiRK11QStaticText
//static
/*void qm1276306527(int left, int top, const QStaticText & staticText)*/ {
  int left = *(int*)this_; int top = *(int*)this_; const QStaticText & staticText = *(const QStaticText *)this_;
  (void) ((QPainter*)this_)->drawStaticText(left, top, staticText);
   auto xptr = (void (QPainter::*)(int, int, QStaticText const&) ) &QPainter::drawStaticText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:436
// [-2] void drawText(const QPoint &, const QString &) 
// (12)qm2810526175 (41)_ZN8QPainter8drawTextERK6QPointRK7QString
//static
/*void qm2810526175(const QPoint & p, const QString & s)*/ {
  const QPoint & p = *(const QPoint *)this_; const QString & s = *(const QString *)this_;
  (void) ((QPainter*)this_)->drawText(p, s);
   auto xptr = (void (QPainter::*)(QPoint const&, QString const&) ) &QPainter::drawText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:437
// [-2] void drawText(int, int, const QString &) 
// (12)qm1642165548 (34)_ZN8QPainter8drawTextEiiRK7QString
//static
/*void qm1642165548(int x, int y, const QString & s)*/ {
  int x = *(int*)this_; int y = *(int*)this_; const QString & s = *(const QString *)this_;
  (void) ((QPainter*)this_)->drawText(x, y, s);
   auto xptr = (void (QPainter::*)(int, int, QString const&) ) &QPainter::drawText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:443
// [-2] void drawText(int, int, int, int, int, const QString &, QRect *) 
// (12)qm4132837198 (44)_ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect
//static
/*void qm4132837198(int x, int y, int w, int h, int flags, const QString & text, QRect * br)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; int flags = *(int*)this_; const QString & text = *(const QString *)this_; QRect * br = *(QRect **)this_;
  (void) ((QPainter*)this_)->drawText(x, y, w, h, flags, text, br);
   auto xptr = (void (QPainter::*)(int, int, int, int, int, QString const&, QRect*) ) &QPainter::drawText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:449
// [16] QRect boundingRect(int, int, int, int, int, const QString &) 
// (12)qm3358062512 (42)_ZN8QPainter12boundingRectEiiiiiRK7QString
//static
/*void qm3358062512(int x, int y, int w, int h, int flags, const QString & text)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; int flags = *(int*)this_; const QString & text = *(const QString *)this_;
  (void) ((QPainter*)this_)->boundingRect(x, y, w, h, flags, text);
   auto xptr = (QRect (QPainter::*)(int, int, int, int, int, QString const&) ) &QPainter::boundingRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:454
// [-2] void drawTextItem(int, int, const QTextItem &) 
// (12)qm1146106772 (41)_ZN8QPainter12drawTextItemEiiRK9QTextItem
//static
/*void qm1146106772(int x, int y, const QTextItem & ti)*/ {
  int x = *(int*)this_; int y = *(int*)this_; const QTextItem & ti = *(const QTextItem *)this_;
  (void) ((QPainter*)this_)->drawTextItem(x, y, ti);
   auto xptr = (void (QPainter::*)(int, int, QTextItem const&) ) &QPainter::drawTextItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:455
// [-2] void drawTextItem(const QPoint &, const QTextItem &) 
// (12)qm1661546576 (48)_ZN8QPainter12drawTextItemERK6QPointRK9QTextItem
//static
/*void qm1661546576(const QPoint & p, const QTextItem & ti)*/ {
  const QPoint & p = *(const QPoint *)this_; const QTextItem & ti = *(const QTextItem *)this_;
  (void) ((QPainter*)this_)->drawTextItem(p, ti);
   auto xptr = (void (QPainter::*)(QPoint const&, QTextItem const&) ) &QPainter::drawTextItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:458
// [-2] void fillRect(int, int, int, int, const QBrush &) 
// (11)qm143205891 (35)_ZN8QPainter8fillRectEiiiiRK6QBrush
//static
/*void qm143205891(int x, int y, int w, int h, const QBrush & arg4)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; const QBrush & arg4 = *(const QBrush *)this_;
  (void) ((QPainter*)this_)->fillRect(x, y, w, h, arg4);
   auto xptr = (void (QPainter::*)(int, int, int, int, QBrush const&) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:462
// [-2] void fillRect(int, int, int, int, const QColor &) 
// (12)qm2675489833 (35)_ZN8QPainter8fillRectEiiiiRK6QColor
//static
/*void qm2675489833(int x, int y, int w, int h, const QColor & color)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; const QColor & color = *(const QColor *)this_;
  (void) ((QPainter*)this_)->fillRect(x, y, w, h, color);
   auto xptr = (void (QPainter::*)(int, int, int, int, QColor const&) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:465
// [-2] void fillRect(int, int, int, int, Qt::GlobalColor) 
// (12)qm1908654524 (44)_ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE
//static
/*void qm1908654524(int x, int y, int w, int h, Qt::GlobalColor c)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; Qt::GlobalColor c = *(Qt::GlobalColor*)this_;
  (void) ((QPainter*)this_)->fillRect(x, y, w, h, c);
   auto xptr = (void (QPainter::*)(int, int, int, int, Qt::GlobalColor) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:466
// [-2] void fillRect(const QRect &, Qt::GlobalColor) 
// (12)qm1445218262 (48)_ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE
//static
/*void qm1445218262(const QRect & r, Qt::GlobalColor c)*/ {
  const QRect & r = *(const QRect *)this_; Qt::GlobalColor c = *(Qt::GlobalColor*)this_;
  (void) ((QPainter*)this_)->fillRect(r, c);
   auto xptr = (void (QPainter::*)(QRect const&, Qt::GlobalColor) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:467
// [-2] void fillRect(const QRectF &, Qt::GlobalColor) 
// (12)qm3283874220 (49)_ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE
//static
/*void qm3283874220(const QRectF & r, Qt::GlobalColor c)*/ {
  const QRectF & r = *(const QRectF *)this_; Qt::GlobalColor c = *(Qt::GlobalColor*)this_;
  (void) ((QPainter*)this_)->fillRect(r, c);
   auto xptr = (void (QPainter::*)(QRectF const&, Qt::GlobalColor) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:469
// [-2] void fillRect(int, int, int, int, Qt::BrushStyle) 
// (12)qm1674657008 (43)_ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE
//static
/*void qm1674657008(int x, int y, int w, int h, Qt::BrushStyle style)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; Qt::BrushStyle style = *(Qt::BrushStyle*)this_;
  (void) ((QPainter*)this_)->fillRect(x, y, w, h, style);
   auto xptr = (void (QPainter::*)(int, int, int, int, Qt::BrushStyle) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:470
// [-2] void fillRect(const QRect &, Qt::BrushStyle) 
// (12)qm2249653377 (47)_ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE
//static
/*void qm2249653377(const QRect & r, Qt::BrushStyle style)*/ {
  const QRect & r = *(const QRect *)this_; Qt::BrushStyle style = *(Qt::BrushStyle*)this_;
  (void) ((QPainter*)this_)->fillRect(r, style);
   auto xptr = (void (QPainter::*)(QRect const&, Qt::BrushStyle) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:471
// [-2] void fillRect(const QRectF &, Qt::BrushStyle) 
// (12)qm2800354377 (48)_ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE
//static
/*void qm2800354377(const QRectF & r, Qt::BrushStyle style)*/ {
  const QRectF & r = *(const QRectF *)this_; Qt::BrushStyle style = *(Qt::BrushStyle*)this_;
  (void) ((QPainter*)this_)->fillRect(r, style);
   auto xptr = (void (QPainter::*)(QRectF const&, Qt::BrushStyle) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:473
// [-2] void fillRect(int, int, int, int, QGradient::Preset) 
// (12)qm2721616132 (45)_ZN8QPainter8fillRectEiiiiN9QGradient6PresetE
//static
/*void qm2721616132(int x, int y, int w, int h, QGradient::Preset preset)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; QGradient::Preset preset = *(QGradient::Preset*)this_;
  (void) ((QPainter*)this_)->fillRect(x, y, w, h, preset);
   auto xptr = (void (QPainter::*)(int, int, int, int, QGradient::Preset) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:474
// [-2] void fillRect(const QRect &, QGradient::Preset) 
// (11)qm259587780 (49)_ZN8QPainter8fillRectERK5QRectN9QGradient6PresetE
//static
/*void qm259587780(const QRect & r, QGradient::Preset preset)*/ {
  const QRect & r = *(const QRect *)this_; QGradient::Preset preset = *(QGradient::Preset*)this_;
  (void) ((QPainter*)this_)->fillRect(r, preset);
   auto xptr = (void (QPainter::*)(QRect const&, QGradient::Preset) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:475
// [-2] void fillRect(const QRectF &, QGradient::Preset) 
// (12)qm3208509776 (50)_ZN8QPainter8fillRectERK6QRectFN9QGradient6PresetE
//static
/*void qm3208509776(const QRectF & r, QGradient::Preset preset)*/ {
  const QRectF & r = *(const QRectF *)this_; QGradient::Preset preset = *(QGradient::Preset*)this_;
  (void) ((QPainter*)this_)->fillRect(r, preset);
   auto xptr = (void (QPainter::*)(QRectF const&, QGradient::Preset) ) &QPainter::fillRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:478
// [-2] void eraseRect(int, int, int, int) 
// (11)qm906707987 (27)_ZN8QPainter9eraseRectEiiii
//static
/*void qm906707987(int x, int y, int w, int h)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_;
  (void) ((QPainter*)this_)->eraseRect(x, y, w, h);
   auto xptr = (void (QPainter::*)(int, int, int, int) ) &QPainter::eraseRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:479
// [-2] void eraseRect(const QRect &) 
// (12)qm1678594517 (31)_ZN8QPainter9eraseRectERK5QRect
//static
/*void qm1678594517(const QRect & arg0)*/ {
  const QRect & arg0 = *(const QRect *)this_;
  (void) ((QPainter*)this_)->eraseRect(arg0);
   auto xptr = (void (QPainter::*)(QRect const&) ) &QPainter::eraseRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:484
// [1] bool testRenderHint(QPainter::RenderHint) const
// (12)qm2125172229 (46)_ZNK8QPainter14testRenderHintENS_10RenderHintE
//static
/*void qm2125172229(QPainter::RenderHint hint)*/ {
  QPainter::RenderHint hint = *(QPainter::RenderHint*)this_;
  (void) ((QPainter*)this_)->testRenderHint(hint);
   auto xptr = (bool (QPainter::*)(QPainter::RenderHint) const ) &QPainter::testRenderHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QPainterD2Ev(void *this_)*/ {
  delete (QPainter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpainter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
