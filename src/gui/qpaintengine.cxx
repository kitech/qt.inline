// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qpaintengine.h
// dst-file: /src/gui/qpaintengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpaintengine.h>


#include <qglobal.h>
#include <qfont.h>
#include <qstring.h>
#include <qmatrix.h>
#include <qnamespace.h>
#include <qtransform.h>
#include <qpoint.h>
#include <qpainter.h>
#include <qregion.h>
#include <qpainterpath.h>
#include <qbrush.h>
#include <qpen.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qpaintengine_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 261, column 30>
//   // proto:  QPaintEngine::DirtyFlags QPaintEngineState::state();
if (true) {
  auto f = [](QPaintEngineState flythis) {
    ((QPaintEngineState*)0)->state();
    flythis.state();
  };
  if (f == nullptr){}
}
// _ZNK17QPaintEngineState5stateEv state()
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 213, column 17>
//   // proto:  void QPaintEngine::clearDirty(DirtyFlags df);
if (true) {
  auto f = [](QPaintEngine::DirtyFlags arg1) {
    ((QPaintEngine*)0)->clearDirty(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE clearDirty(DirtyFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 143, column 10>
//   // proto:  bool QPaintEngine::isActive();
if (true) {
  auto f = []() {
    ((QPaintEngine*)0)->isActive();
  };
  if (f == nullptr){}
}
// _ZNK12QPaintEngine8isActiveEv isActive()
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 215, column 10>
//   // proto:  bool QPaintEngine::hasFeature(PaintEngineFeatures feature);
if (true) {
  auto f = [](QPaintEngine::PaintEngineFeatures arg1) {
    ((QPaintEngine*)0)->hasFeature(arg1);
  };
  if (f == nullptr){}
}
// _ZNK12QPaintEngine10hasFeatureE6QFlagsINS_18PaintEngineFeatureEE hasFeature(PaintEngineFeatures)
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 144, column 10>
//   // proto:  void QPaintEngine::setActive(bool newState);
if (true) {
  auto f = [](bool arg1) {
    ((QPaintEngine*)0)->setActive(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QPaintEngine9setActiveEb setActive(_Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 211, column 17>
//   // proto:  bool QPaintEngine::testDirty(DirtyFlags df);
if (true) {
  auto f = [](QPaintEngine::DirtyFlags arg1) {
    ((QPaintEngine*)0)->testDirty(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE testDirty(DirtyFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 212, column 17>
//   // proto:  void QPaintEngine::setDirty(DirtyFlags df);
if (true) {
  auto f = [](QPaintEngine::DirtyFlags arg1) {
    ((QPaintEngine*)0)->setDirty(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE setDirty(DirtyFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 209, column 17>
//   // proto:  void QPaintEngine::fix_neg_rect(int * x, int * y, int * w, int * h);
if (true) {
  auto f = [](int * arg1, int * arg2, int * arg3, int * arg4) {
    ((QPaintEngine*)0)->fix_neg_rect(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_ fix_neg_rect(int *, int *, int *, int *)
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 220, column 17>
//   // proto:  bool QPaintEngine::isExtended();
if (true) {
  auto f = []() {
    ((QPaintEngine*)0)->isExtended();
  };
  if (f == nullptr){}
}
// _ZNK12QPaintEngine10isExtendedEv isExtended()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextItem_Class_Size()
{
  return sizeof(QTextItem);
}

extern "C"
int QPaintEngineState_Class_Size()
{
  return sizeof(QPaintEngineState);
}

extern "C"
int QPaintEngine_Class_Size()
{
  return sizeof(QPaintEngine);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 68, column 11>
//   // proto:  qreal QTextItem::descent();
// _ZNK9QTextItem7descentEv descent()
extern "C"
double
C_ZNK9QTextItem7descentEv(void *qthis) {
  auto ret =
  ((QTextItem*)qthis)->descent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 70, column 11>
//   // proto:  qreal QTextItem::width();
// _ZNK9QTextItem5widthEv width()
extern "C"
double
C_ZNK9QTextItem5widthEv(void *qthis) {
  auto ret =
  ((QTextItem*)qthis)->width();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 74, column 11>
//   // proto:  QFont QTextItem::font();
// _ZNK9QTextItem4fontEv font()
extern "C"
QFont*
C_ZNK9QTextItem4fontEv(void *qthis) {
  auto ret =
  ((QTextItem*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 69, column 11>
//   // proto:  qreal QTextItem::ascent();
// _ZNK9QTextItem6ascentEv ascent()
extern "C"
double
C_ZNK9QTextItem6ascentEv(void *qthis) {
  auto ret =
  ((QTextItem*)qthis)->ascent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 72, column 17>
//   // proto:  RenderFlags QTextItem::renderFlags();
// _ZNK9QTextItem11renderFlagsEv renderFlags()
extern "C"
QFlags<QTextItem::RenderFlag>*
C_ZNK9QTextItem11renderFlagsEv(void *qthis) {
  auto ret =
  ((QTextItem*)qthis)->renderFlags();
  return new QFlags<QTextItem::RenderFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 73, column 13>
//   // proto:  QString QTextItem::text();
// _ZNK9QTextItem4textEv text()
extern "C"
QString*
C_ZNK9QTextItem4textEv(void *qthis) {
  auto ret =
  ((QTextItem*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 279, column 11>
//   // proto:  qreal QPaintEngineState::opacity();
// _ZNK17QPaintEngineState7opacityEv opacity()
extern "C"
double
C_ZNK17QPaintEngineState7opacityEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->opacity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 269, column 13>
//   // proto:  QMatrix QPaintEngineState::matrix();
// _ZNK17QPaintEngineState6matrixEv matrix()
extern "C"
QMatrix*
C_ZNK17QPaintEngineState6matrixEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->matrix();
  return new QMatrix(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 281, column 15>
//   // proto:  QPainter * QPaintEngineState::painter();
// _ZNK17QPaintEngineState7painterEv painter()
extern "C"
void*
C_ZNK17QPaintEngineState7painterEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->painter();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 272, column 23>
//   // proto:  Qt::ClipOperation QPaintEngineState::clipOperation();
// _ZNK17QPaintEngineState13clipOperationEv clipOperation()
extern "C"
Qt::ClipOperation
C_ZNK17QPaintEngineState13clipOperationEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->clipOperation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 270, column 16>
//   // proto:  QTransform QPaintEngineState::transform();
// _ZNK17QPaintEngineState9transformEv transform()
extern "C"
QTransform*
C_ZNK17QPaintEngineState9transformEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->transform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 267, column 16>
//   // proto:  Qt::BGMode QPaintEngineState::backgroundMode();
// _ZNK17QPaintEngineState14backgroundModeEv backgroundMode()
extern "C"
Qt::BGMode
C_ZNK17QPaintEngineState14backgroundModeEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->backgroundMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 265, column 13>
//   // proto:  QPointF QPaintEngineState::brushOrigin();
// _ZNK17QPaintEngineState11brushOriginEv brushOrigin()
extern "C"
QPointF*
C_ZNK17QPaintEngineState11brushOriginEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->brushOrigin();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 284, column 10>
//   // proto:  bool QPaintEngineState::penNeedsResolving();
// _ZNK17QPaintEngineState17penNeedsResolvingEv penNeedsResolving()
extern "C"
bool
C_ZNK17QPaintEngineState17penNeedsResolvingEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->penNeedsResolving();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 275, column 10>
//   // proto:  bool QPaintEngineState::isClipEnabled();
// _ZNK17QPaintEngineState13isClipEnabledEv isClipEnabled()
extern "C"
bool
C_ZNK17QPaintEngineState13isClipEnabledEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->isClipEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 268, column 11>
//   // proto:  QFont QPaintEngineState::font();
// _ZNK17QPaintEngineState4fontEv font()
extern "C"
QFont*
C_ZNK17QPaintEngineState4fontEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 283, column 10>
//   // proto:  bool QPaintEngineState::brushNeedsResolving();
// _ZNK17QPaintEngineState19brushNeedsResolvingEv brushNeedsResolving()
extern "C"
bool
C_ZNK17QPaintEngineState19brushNeedsResolvingEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->brushNeedsResolving();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 277, column 27>
//   // proto:  QPainter::RenderHints QPaintEngineState::renderHints();
// _ZNK17QPaintEngineState11renderHintsEv renderHints()
extern "C"
QFlags<QPainter::RenderHint>*
C_ZNK17QPaintEngineState11renderHintsEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->renderHints();
  return new QFlags<QPainter::RenderHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 278, column 31>
//   // proto:  QPainter::CompositionMode QPaintEngineState::compositionMode();
// _ZNK17QPaintEngineState15compositionModeEv compositionMode()
extern "C"
QPainter::CompositionMode
C_ZNK17QPaintEngineState15compositionModeEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->compositionMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 273, column 13>
//   // proto:  QRegion QPaintEngineState::clipRegion();
// _ZNK17QPaintEngineState10clipRegionEv clipRegion()
extern "C"
QRegion*
C_ZNK17QPaintEngineState10clipRegionEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->clipRegion();
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 261, column 30>
//   // proto:  QPaintEngine::DirtyFlags QPaintEngineState::state();
// _ZNK17QPaintEngineState5stateEv state()
extern "C"
QFlags<QPaintEngine::DirtyFlag>*
C_ZNK17QPaintEngineState5stateEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->state();
  return new QFlags<QPaintEngine::DirtyFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 274, column 18>
//   // proto:  QPainterPath QPaintEngineState::clipPath();
// _ZNK17QPaintEngineState8clipPathEv clipPath()
extern "C"
QPainterPath*
C_ZNK17QPaintEngineState8clipPathEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->clipPath();
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 264, column 12>
//   // proto:  QBrush QPaintEngineState::brush();
// _ZNK17QPaintEngineState5brushEv brush()
extern "C"
QBrush*
C_ZNK17QPaintEngineState5brushEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->brush();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 263, column 10>
//   // proto:  QPen QPaintEngineState::pen();
// _ZNK17QPaintEngineState3penEv pen()
extern "C"
QPen*
C_ZNK17QPaintEngineState3penEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->pen();
  return new QPen(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 266, column 12>
//   // proto:  QBrush QPaintEngineState::backgroundBrush();
// _ZNK17QPaintEngineState15backgroundBrushEv backgroundBrush()
extern "C"
QBrush*
C_ZNK17QPaintEngineState15backgroundBrushEv(void *qthis) {
  auto ret =
  ((QPaintEngineState*)qthis)->backgroundBrush();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 213, column 17>
//   // proto:  void QPaintEngine::clearDirty(DirtyFlags df);
// _ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE clearDirty(DirtyFlags)
extern "C"
void
C_ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE(void *qthis,
QPaintEngine::DirtyFlags arg1) {
  ((QPaintEngine*)qthis)->clearDirty(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 158, column 18>
//   // proto:  void QPaintEngine::drawEllipse(const QRect & r);
// _ZN12QPaintEngine11drawEllipseERK5QRect drawEllipse(const class QRect &)
extern "C"
void
C_ZN12QPaintEngine11drawEllipseERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPaintEngine*)qthis)->drawEllipse(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 143, column 10>
//   // proto:  bool QPaintEngine::isActive();
// _ZNK12QPaintEngine8isActiveEv isActive()
extern "C"
bool
C_ZNK12QPaintEngine8isActiveEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->isActive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 207, column 18>
//   // proto:  QPaintEngine::Type QPaintEngine::type();
// _ZNK12QPaintEngine4typeEv type()
extern "C"
QPaintEngine::Type
C_ZNK12QPaintEngine4typeEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 140, column 14>
//   // proto:  void QPaintEngine::QPaintEngine(PaintEngineFeatures features);
extern "C"
QPaintEngine*
C_ZN12QPaintEngineC2E6QFlagsINS_18PaintEngineFeatureEE(QPaintEngine::PaintEngineFeatures arg1) {
  // auto ret = new QPaintEngine(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 162, column 18>
//   // proto:  void QPaintEngine::drawPoints(const QPointF * points, int pointCount);
// _ZN12QPaintEngine10drawPointsEPK7QPointFi drawPoints(const class QPointF *, int)
extern "C"
void
C_ZN12QPaintEngine10drawPointsEPK7QPointFi(void *qthis,
const QPointF * arg1,
int arg2) {
  ((QPaintEngine*)qthis)->drawPoints(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 184, column 20>
//   // proto:  QPoint QPaintEngine::coordinateOffset();
// _ZNK12QPaintEngine16coordinateOffsetEv coordinateOffset()
extern "C"
QPoint*
C_ZNK12QPaintEngine16coordinateOffsetEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->coordinateOffset();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 174, column 10>
//   // proto:  void QPaintEngine::setPaintDevice(QPaintDevice * device);
// _ZN12QPaintEngine14setPaintDeviceEP12QPaintDevice setPaintDevice(class QPaintDevice *)
extern "C"
void
C_ZN12QPaintEngine14setPaintDeviceEP12QPaintDevice(void *qthis,
QPaintDevice * arg1) {
  ((QPaintEngine*)qthis)->setPaintDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 180, column 10>
//   // proto:  void QPaintEngine::setSystemRect(const QRect & rect);
// _ZN12QPaintEngine13setSystemRectERK5QRect setSystemRect(const class QRect &)
extern "C"
void
C_ZN12QPaintEngine13setSystemRectERK5QRect(void *qthis,
const QRect* arg1) {
  ((QPaintEngine*)qthis)->setSystemRect(*((const QRect*)arg1));
}
//   // proto:  void QPaintEngine::~QPaintEngine();
extern "C"
void C_ZN12QPaintEngineD2Ev(void *qthis) {
  delete (QPaintEngine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 215, column 10>
//   // proto:  bool QPaintEngine::hasFeature(PaintEngineFeatures feature);
// _ZNK12QPaintEngine10hasFeatureE6QFlagsINS_18PaintEngineFeatureEE hasFeature(PaintEngineFeatures)
extern "C"
bool
C_ZNK12QPaintEngine10hasFeatureE6QFlagsINS_18PaintEngineFeatureEE(void *qthis,
QPaintEngine::PaintEngineFeatures arg1) {
  auto ret =
  ((QPaintEngine*)qthis)->hasFeature(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 147, column 18>
//   // proto:  bool QPaintEngine::end();
// _ZN12QPaintEngine3endEv end()
extern "C"
bool
C_ZN12QPaintEngine3endEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->end();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 165, column 18>
//   // proto:  void QPaintEngine::drawPolygon(const QPointF * points, int pointCount, QPaintEngine::PolygonDrawMode mode);
// _ZN12QPaintEngine11drawPolygonEPK7QPointFiNS_15PolygonDrawModeE drawPolygon(const class QPointF *, int, enum QPaintEngine::PolygonDrawMode)
extern "C"
void
C_ZN12QPaintEngine11drawPolygonEPK7QPointFiNS_15PolygonDrawModeE(void *qthis,
const QPointF * arg1,
int arg2,
QPaintEngine::PolygonDrawMode arg3) {
  ((QPaintEngine*)qthis)->drawPolygon(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 171, column 18>
//   // proto:  void QPaintEngine::drawImage(const QRectF & r, const QImage & pm, const QRectF & sr, Qt::ImageConversionFlags flags);
// _ZN12QPaintEngine9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE drawImage(const class QRectF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void
C_ZN12QPaintEngine9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *qthis,
const QRectF* arg1,
const QImage* arg2,
const QRectF* arg3,
Qt::ImageConversionFlags* arg4) {
  ((QPaintEngine*)qthis)->drawImage(*((const QRectF*)arg1),
*((const QImage*)arg2),
*((const QRectF*)arg3),
*((Qt::ImageConversionFlags*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 170, column 18>
//   // proto:  void QPaintEngine::drawTiledPixmap(const QRectF & r, const QPixmap & pixmap, const QPointF & s);
// _ZN12QPaintEngine15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF drawTiledPixmap(const class QRectF &, const class QPixmap &, const class QPointF &)
extern "C"
void
C_ZN12QPaintEngine15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void *qthis,
const QRectF* arg1,
const QPixmap* arg2,
const QPointF* arg3) {
  ((QPaintEngine*)qthis)->drawTiledPixmap(*((const QRectF*)arg1),
*((const QPixmap*)arg2),
*((const QPointF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 144, column 10>
//   // proto:  void QPaintEngine::setActive(bool newState);
// _ZN12QPaintEngine9setActiveEb setActive(_Bool)
extern "C"
void
C_ZN12QPaintEngine9setActiveEb(void *qthis,
bool arg1) {
  ((QPaintEngine*)qthis)->setActive(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 168, column 18>
//   // proto:  void QPaintEngine::drawPixmap(const QRectF & r, const QPixmap & pm, const QRectF & sr);
// _ZN12QPaintEngine10drawPixmapERK6QRectFRK7QPixmapS2_ drawPixmap(const class QRectF &, const class QPixmap &, const class QRectF &)
extern "C"
void
C_ZN12QPaintEngine10drawPixmapERK6QRectFRK7QPixmapS2_(void *qthis,
const QRectF* arg1,
const QPixmap* arg2,
const QRectF* arg3) {
  ((QPaintEngine*)qthis)->drawPixmap(*((const QRectF*)arg1),
*((const QPixmap*)arg2),
*((const QRectF*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 154, column 18>
//   // proto:  void QPaintEngine::drawLines(const QLine * lines, int lineCount);
// _ZN12QPaintEngine9drawLinesEPK5QLinei drawLines(const class QLine *, int)
extern "C"
void
C_ZN12QPaintEngine9drawLinesEPK5QLinei(void *qthis,
const QLine * arg1,
int arg2) {
  ((QPaintEngine*)qthis)->drawLines(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 166, column 18>
//   // proto:  void QPaintEngine::drawPolygon(const QPoint * points, int pointCount, QPaintEngine::PolygonDrawMode mode);
// _ZN12QPaintEngine11drawPolygonEPK6QPointiNS_15PolygonDrawModeE drawPolygon(const class QPoint *, int, enum QPaintEngine::PolygonDrawMode)
extern "C"
void
C_ZN12QPaintEngine11drawPolygonEPK6QPointiNS_15PolygonDrawModeE(void *qthis,
const QPoint * arg1,
int arg2,
QPaintEngine::PolygonDrawMode arg3) {
  ((QPaintEngine*)qthis)->drawPolygon(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 160, column 18>
//   // proto:  void QPaintEngine::drawPath(const QPainterPath & path);
// _ZN12QPaintEngine8drawPathERK12QPainterPath drawPath(const class QPainterPath &)
extern "C"
void
C_ZN12QPaintEngine8drawPathERK12QPainterPath(void *qthis,
const QPainterPath* arg1) {
  ((QPaintEngine*)qthis)->drawPath(*((const QPainterPath*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 155, column 18>
//   // proto:  void QPaintEngine::drawLines(const QLineF * lines, int lineCount);
// _ZN12QPaintEngine9drawLinesEPK6QLineFi drawLines(const class QLineF *, int)
extern "C"
void
C_ZN12QPaintEngine9drawLinesEPK6QLineFi(void *qthis,
const QLineF * arg1,
int arg2) {
  ((QPaintEngine*)qthis)->drawLines(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 149, column 18>
//   // proto:  void QPaintEngine::updateState(const QPaintEngineState & state);
// _ZN12QPaintEngine11updateStateERK17QPaintEngineState updateState(const class QPaintEngineState &)
extern "C"
void
C_ZN12QPaintEngine11updateStateERK17QPaintEngineState(void *qthis,
const QPaintEngineState* arg1) {
  ((QPaintEngine*)qthis)->updateState(*((const QPaintEngineState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 146, column 18>
//   // proto:  bool QPaintEngine::begin(QPaintDevice * pdev);
// _ZN12QPaintEngine5beginEP12QPaintDevice begin(class QPaintDevice *)
extern "C"
bool
C_ZN12QPaintEngine5beginEP12QPaintDevice(void *qthis,
QPaintDevice * arg1) {
  auto ret =
  ((QPaintEngine*)qthis)->begin(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 181, column 11>
//   // proto:  QRect QPaintEngine::systemRect();
// _ZNK12QPaintEngine10systemRectEv systemRect()
extern "C"
QRect*
C_ZNK12QPaintEngine10systemRectEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->systemRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 152, column 18>
//   // proto:  void QPaintEngine::drawRects(const QRectF * rects, int rectCount);
// _ZN12QPaintEngine9drawRectsEPK6QRectFi drawRects(const class QRectF *, int)
extern "C"
void
C_ZN12QPaintEngine9drawRectsEPK6QRectFi(void *qthis,
const QRectF * arg1,
int arg2) {
  ((QPaintEngine*)qthis)->drawRects(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 177, column 10>
//   // proto:  void QPaintEngine::setSystemClip(const QRegion & baseClip);
// _ZN12QPaintEngine13setSystemClipERK7QRegion setSystemClip(const class QRegion &)
extern "C"
void
C_ZN12QPaintEngine13setSystemClipERK7QRegion(void *qthis,
const QRegion* arg1) {
  ((QPaintEngine*)qthis)->setSystemClip(*((const QRegion*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 178, column 13>
//   // proto:  QRegion QPaintEngine::systemClip();
// _ZNK12QPaintEngine10systemClipEv systemClip()
extern "C"
QRegion*
C_ZNK12QPaintEngine10systemClipEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->systemClip();
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 175, column 19>
//   // proto:  QPaintDevice * QPaintEngine::paintDevice();
// _ZNK12QPaintEngine11paintDeviceEv paintDevice()
extern "C"
void*
C_ZNK12QPaintEngine11paintDeviceEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->paintDevice();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 219, column 10>
//   // proto:  void QPaintEngine::syncState();
// _ZN12QPaintEngine9syncStateEv syncState()
extern "C"
void
C_ZN12QPaintEngine9syncStateEv(void *qthis) {
  ((QPaintEngine*)qthis)->syncState();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 217, column 15>
//   // proto:  QPainter * QPaintEngine::painter();
// _ZNK12QPaintEngine7painterEv painter()
extern "C"
void*
C_ZNK12QPaintEngine7painterEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->painter();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 211, column 17>
//   // proto:  bool QPaintEngine::testDirty(DirtyFlags df);
// _ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE testDirty(DirtyFlags)
extern "C"
bool
C_ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE(void *qthis,
QPaintEngine::DirtyFlags arg1) {
  auto ret =
  ((QPaintEngine*)qthis)->testDirty(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 212, column 17>
//   // proto:  void QPaintEngine::setDirty(DirtyFlags df);
// _ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE setDirty(DirtyFlags)
extern "C"
void
C_ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE(void *qthis,
QPaintEngine::DirtyFlags arg1) {
  ((QPaintEngine*)qthis)->setDirty(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 157, column 18>
//   // proto:  void QPaintEngine::drawEllipse(const QRectF & r);
// _ZN12QPaintEngine11drawEllipseERK6QRectF drawEllipse(const class QRectF &)
extern "C"
void
C_ZN12QPaintEngine11drawEllipseERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QPaintEngine*)qthis)->drawEllipse(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 169, column 18>
//   // proto:  void QPaintEngine::drawTextItem(const QPointF & p, const QTextItem & textItem);
// _ZN12QPaintEngine12drawTextItemERK7QPointFRK9QTextItem drawTextItem(const class QPointF &, const class QTextItem &)
extern "C"
void
C_ZN12QPaintEngine12drawTextItemERK7QPointFRK9QTextItem(void *qthis,
const QPointF* arg1,
const QTextItem* arg2) {
  ((QPaintEngine*)qthis)->drawTextItem(*((const QPointF*)arg1),
*((const QTextItem*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 209, column 17>
//   // proto:  void QPaintEngine::fix_neg_rect(int * x, int * y, int * w, int * h);
// _ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_ fix_neg_rect(int *, int *, int *, int *)
extern "C"
void
C_ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4) {
  ((QPaintEngine*)qthis)->fix_neg_rect(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 220, column 17>
//   // proto:  bool QPaintEngine::isExtended();
// _ZNK12QPaintEngine10isExtendedEv isExtended()
extern "C"
bool
C_ZNK12QPaintEngine10isExtendedEv(void *qthis) {
  auto ret =
  ((QPaintEngine*)qthis)->isExtended();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 151, column 18>
//   // proto:  void QPaintEngine::drawRects(const QRect * rects, int rectCount);
// _ZN12QPaintEngine9drawRectsEPK5QRecti drawRects(const class QRect *, int)
extern "C"
void
C_ZN12QPaintEngine9drawRectsEPK5QRecti(void *qthis,
const QRect * arg1,
int arg2) {
  ((QPaintEngine*)qthis)->drawRects(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpaintengine.h', line 163, column 18>
//   // proto:  void QPaintEngine::drawPoints(const QPoint * points, int pointCount);
// _ZN12QPaintEngine10drawPointsEPK6QPointi drawPoints(const class QPoint *, int)
extern "C"
void
C_ZN12QPaintEngine10drawPointsEPK6QPointi(void *qthis,
const QPoint * arg1,
int arg2) {
  ((QPaintEngine*)qthis)->drawPoints(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// <= body block end

