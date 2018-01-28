//  header block begin
// /usr/include/qt/QtGui/qpaintengine.h
#include <qpaintengine.h>
#include <QtGui>

// QPaintEngine is pure virtual: true
//  header block end

//  main block begin

class MyQPaintEngine : public QPaintEngine {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:148
// [-2] void ~QPaintEngine()
extern "C"
void C_ZN12QPaintEngineD1Ev(void *this_) {
  delete (QPaintEngine*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:150
// [1] bool isActive()
extern "C"
bool C_ZNK12QPaintEngine8isActiveEv(void *this_) {
  return (bool)((QPaintEngine*)this_)->isActive();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:151
// [-2] void setActive(_Bool)
extern "C"
void C_ZN12QPaintEngine9setActiveEb(void *this_, bool newState) {
  ((QPaintEngine*)this_)->setActive(newState);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:153
// [1] bool begin(class QPaintDevice *)
extern "C"
bool C_ZN12QPaintEngine5beginEP12QPaintDevice(void *this_, QPaintDevice * pdev) {
  return (bool)((QPaintEngine*)this_)->begin(pdev);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:154
// [1] bool end()
extern "C"
bool C_ZN12QPaintEngine3endEv(void *this_) {
  return (bool)((QPaintEngine*)this_)->end();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:156
// [-2] void updateState(const class QPaintEngineState &)
extern "C"
void C_ZN12QPaintEngine11updateStateERK17QPaintEngineState(void *this_, const QPaintEngineState & state) {
  ((QPaintEngine*)this_)->updateState(state);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:158
// [-2] void drawRects(const class QRect *, int)
extern "C"
void C_ZN12QPaintEngine9drawRectsEPK5QRecti(void *this_, const QRect * rects, int rectCount) {
  ((QPaintEngine*)this_)->drawRects(rects, rectCount);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:159
// [-2] void drawRects(const class QRectF *, int)
extern "C"
void C_ZN12QPaintEngine9drawRectsEPK6QRectFi(void *this_, const QRectF * rects, int rectCount) {
  ((QPaintEngine*)this_)->drawRects(rects, rectCount);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:161
// [-2] void drawLines(const class QLine *, int)
extern "C"
void C_ZN12QPaintEngine9drawLinesEPK5QLinei(void *this_, const QLine * lines, int lineCount) {
  ((QPaintEngine*)this_)->drawLines(lines, lineCount);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:162
// [-2] void drawLines(const class QLineF *, int)
extern "C"
void C_ZN12QPaintEngine9drawLinesEPK6QLineFi(void *this_, const QLineF * lines, int lineCount) {
  ((QPaintEngine*)this_)->drawLines(lines, lineCount);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:164
// [-2] void drawEllipse(const class QRectF &)
extern "C"
void C_ZN12QPaintEngine11drawEllipseERK6QRectF(void *this_, const QRectF & r) {
  ((QPaintEngine*)this_)->drawEllipse(r);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:165
// [-2] void drawEllipse(const class QRect &)
extern "C"
void C_ZN12QPaintEngine11drawEllipseERK5QRect(void *this_, const QRect & r) {
  ((QPaintEngine*)this_)->drawEllipse(r);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:167
// [-2] void drawPath(const class QPainterPath &)
extern "C"
void C_ZN12QPaintEngine8drawPathERK12QPainterPath(void *this_, const QPainterPath & path) {
  ((QPaintEngine*)this_)->drawPath(path);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:169
// [-2] void drawPoints(const class QPointF *, int)
extern "C"
void C_ZN12QPaintEngine10drawPointsEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPaintEngine*)this_)->drawPoints(points, pointCount);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:170
// [-2] void drawPoints(const class QPoint *, int)
extern "C"
void C_ZN12QPaintEngine10drawPointsEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPaintEngine*)this_)->drawPoints(points, pointCount);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:172
// [-2] void drawPolygon(const class QPointF *, int, enum QPaintEngine::PolygonDrawMode)
extern "C"
void C_ZN12QPaintEngine11drawPolygonEPK7QPointFiNS_15PolygonDrawModeE(void *this_, const QPointF * points, int pointCount, QPaintEngine::PolygonDrawMode mode) {
  ((QPaintEngine*)this_)->drawPolygon(points, pointCount, mode);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:173
// [-2] void drawPolygon(const class QPoint *, int, enum QPaintEngine::PolygonDrawMode)
extern "C"
void C_ZN12QPaintEngine11drawPolygonEPK6QPointiNS_15PolygonDrawModeE(void *this_, const QPoint * points, int pointCount, QPaintEngine::PolygonDrawMode mode) {
  ((QPaintEngine*)this_)->drawPolygon(points, pointCount, mode);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:175
// [-2] void drawPixmap(const class QRectF &, const class QPixmap &, const class QRectF &)
extern "C"
void C_ZN12QPaintEngine10drawPixmapERK6QRectFRK7QPixmapS2_(void *this_, const QRectF & r, const QPixmap & pm, const QRectF & sr) {
  ((QPaintEngine*)this_)->drawPixmap(r, pm, sr);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:176
// [-2] void drawTextItem(const class QPointF &, const class QTextItem &)
extern "C"
void C_ZN12QPaintEngine12drawTextItemERK7QPointFRK9QTextItem(void *this_, const QPointF & p, const QTextItem & textItem) {
  ((QPaintEngine*)this_)->drawTextItem(p, textItem);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:177
// [-2] void drawTiledPixmap(const class QRectF &, const class QPixmap &, const class QPointF &)
extern "C"
void C_ZN12QPaintEngine15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void *this_, const QRectF & r, const QPixmap & pixmap, const QPointF & s) {
  ((QPaintEngine*)this_)->drawTiledPixmap(r, pixmap, s);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:178
// [-2] void drawImage(const class QRectF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void C_ZN12QPaintEngine9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QRectF & r, const QImage & pm, const QRectF & sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPaintEngine*)this_)->drawImage(r, pm, sr, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:181
// [-2] void setPaintDevice(class QPaintDevice *)
extern "C"
void C_ZN12QPaintEngine14setPaintDeviceEP12QPaintDevice(void *this_, QPaintDevice * device) {
  ((QPaintEngine*)this_)->setPaintDevice(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:182
// [8] QPaintDevice * paintDevice()
extern "C"
void* C_ZNK12QPaintEngine11paintDeviceEv(void *this_) {
  return (void*)((QPaintEngine*)this_)->paintDevice();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:184
// [-2] void setSystemClip(const class QRegion &)
extern "C"
void C_ZN12QPaintEngine13setSystemClipERK7QRegion(void *this_, const QRegion & baseClip) {
  ((QPaintEngine*)this_)->setSystemClip(baseClip);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:185
// [8] QRegion systemClip()
extern "C"
void* C_ZNK12QPaintEngine10systemClipEv(void *this_) {
  auto rv = ((QPaintEngine*)this_)->systemClip();
return new QRegion(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:187
// [-2] void setSystemRect(const class QRect &)
extern "C"
void C_ZN12QPaintEngine13setSystemRectERK5QRect(void *this_, const QRect & rect) {
  ((QPaintEngine*)this_)->setSystemRect(rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:188
// [16] QRect systemRect()
extern "C"
void* C_ZNK12QPaintEngine10systemRectEv(void *this_) {
  auto rv = ((QPaintEngine*)this_)->systemRect();
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:191
// [8] QPoint coordinateOffset()
extern "C"
void* C_ZNK12QPaintEngine16coordinateOffsetEv(void *this_) {
  auto rv = ((QPaintEngine*)this_)->coordinateOffset();
return new QPoint(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:214
// [4] QPaintEngine::Type type()
extern "C"
QPaintEngine::Type C_ZNK12QPaintEngine4typeEv(void *this_) {
  return (QPaintEngine::Type)((QPaintEngine*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:216
// [-2] void fix_neg_rect(int *, int *, int *, int *)
extern "C"
void C_ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_(void *this_, int * x, int * y, int * w, int * h) {
  ((QPaintEngine*)this_)->fix_neg_rect(x, y, w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:218
// [1] bool testDirty(QPaintEngine::DirtyFlags)
extern "C"
bool C_ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE(void *this_, QFlags<QPaintEngine::DirtyFlag> df) {
  return (bool)((QPaintEngine*)this_)->testDirty(df);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:219
// [-2] void setDirty(QPaintEngine::DirtyFlags)
extern "C"
void C_ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE(void *this_, QFlags<QPaintEngine::DirtyFlag> df) {
  ((QPaintEngine*)this_)->setDirty(df);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:220
// [-2] void clearDirty(QPaintEngine::DirtyFlags)
extern "C"
void C_ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE(void *this_, QFlags<QPaintEngine::DirtyFlag> df) {
  ((QPaintEngine*)this_)->clearDirty(df);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:224
// [8] QPainter * painter()
extern "C"
void* C_ZNK12QPaintEngine7painterEv(void *this_) {
  return (void*)((QPaintEngine*)this_)->painter();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:226
// [-2] void syncState()
extern "C"
void C_ZN12QPaintEngine9syncStateEv(void *this_) {
  ((QPaintEngine*)this_)->syncState();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:227
// [1] bool isExtended()
extern "C"
bool C_ZNK12QPaintEngine10isExtendedEv(void *this_) {
  return (bool)((QPaintEngine*)this_)->isExtended();
}
//  main block end
