//  header block begin
// /usr/include/qt/QtGui/qpainter.h
#include <qpainter.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpainter.h:122
// void QPainter()
extern "C"
void* C_ZN8QPainterC1Ev() {
  return new QPainter();
}
// /usr/include/qt/QtGui/qpainter.h:123
// void QPainter(class QPaintDevice *)
extern "C"
void* C_ZN8QPainterC1EP12QPaintDevice(QPaintDevice * arg0) {
  return new QPainter(arg0);
}
// /usr/include/qt/QtGui/qpainter.h:124
// void ~QPainter()
extern "C"
void C_ZN8QPainterD1Ev(void *this_) {
  delete (QPainter*)(this_);
}
// /usr/include/qt/QtGui/qpainter.h:126
// QPaintDevice * device()
extern "C"
void C_ZNK8QPainter6deviceEv(void *this_) {
  /*return*/ ((QPainter*)this_)->device();
}
// /usr/include/qt/QtGui/qpainter.h:128
// bool begin(class QPaintDevice *)
extern "C"
void C_ZN8QPainter5beginEP12QPaintDevice(void *this_, QPaintDevice * arg0) {
  /*return*/ ((QPainter*)this_)->begin(arg0);
}
// /usr/include/qt/QtGui/qpainter.h:129
// bool end()
extern "C"
void C_ZN8QPainter3endEv(void *this_) {
  /*return*/ ((QPainter*)this_)->end();
}
// /usr/include/qt/QtGui/qpainter.h:130
// bool isActive()
extern "C"
void C_ZNK8QPainter8isActiveEv(void *this_) {
  /*return*/ ((QPainter*)this_)->isActive();
}
// /usr/include/qt/QtGui/qpainter.h:132
// void initFrom(const class QPaintDevice *)
extern "C"
void C_ZN8QPainter8initFromEPK12QPaintDevice(void *this_, const QPaintDevice * device) {
  ((QPainter*)this_)->initFrom(device);
}
// /usr/include/qt/QtGui/qpainter.h:178
// void setCompositionMode(enum QPainter::CompositionMode)
extern "C"
void C_ZN8QPainter18setCompositionModeENS_15CompositionModeE(void *this_, QPainter::CompositionMode mode) {
  ((QPainter*)this_)->setCompositionMode(mode);
}
// /usr/include/qt/QtGui/qpainter.h:179
// QPainter::CompositionMode compositionMode()
extern "C"
void C_ZNK8QPainter15compositionModeEv(void *this_) {
  /*return*/ ((QPainter*)this_)->compositionMode();
}
// /usr/include/qt/QtGui/qpainter.h:181
// const QFont & font()
extern "C"
void C_ZNK8QPainter4fontEv(void *this_) {
  /*return*/ ((QPainter*)this_)->font();
}
// /usr/include/qt/QtGui/qpainter.h:182
// void setFont(const class QFont &)
extern "C"
void C_ZN8QPainter7setFontERK5QFont(void *this_, const QFont & f) {
  ((QPainter*)this_)->setFont(f);
}
// /usr/include/qt/QtGui/qpainter.h:184
// QFontMetrics fontMetrics()
extern "C"
void C_ZNK8QPainter11fontMetricsEv(void *this_) {
  /*return*/ ((QPainter*)this_)->fontMetrics();
}
// /usr/include/qt/QtGui/qpainter.h:185
// QFontInfo fontInfo()
extern "C"
void C_ZNK8QPainter8fontInfoEv(void *this_) {
  /*return*/ ((QPainter*)this_)->fontInfo();
}
// /usr/include/qt/QtGui/qpainter.h:187
// void setPen(const class QColor &)
extern "C"
void C_ZN8QPainter6setPenERK6QColor(void *this_, const QColor & color) {
  ((QPainter*)this_)->setPen(color);
}
// /usr/include/qt/QtGui/qpainter.h:188
// void setPen(const class QPen &)
extern "C"
void C_ZN8QPainter6setPenERK4QPen(void *this_, const QPen & pen) {
  ((QPainter*)this_)->setPen(pen);
}
// /usr/include/qt/QtGui/qpainter.h:189
// void setPen(Qt::PenStyle)
extern "C"
void C_ZN8QPainter6setPenEN2Qt8PenStyleE(void *this_, Qt::PenStyle style) {
  ((QPainter*)this_)->setPen(style);
}
// /usr/include/qt/QtGui/qpainter.h:190
// const QPen & pen()
extern "C"
void C_ZNK8QPainter3penEv(void *this_) {
  /*return*/ ((QPainter*)this_)->pen();
}
// /usr/include/qt/QtGui/qpainter.h:192
// void setBrush(const class QBrush &)
extern "C"
void C_ZN8QPainter8setBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QPainter*)this_)->setBrush(brush);
}
// /usr/include/qt/QtGui/qpainter.h:193
// void setBrush(Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8setBrushEN2Qt10BrushStyleE(void *this_, Qt::BrushStyle style) {
  ((QPainter*)this_)->setBrush(style);
}
// /usr/include/qt/QtGui/qpainter.h:194
// const QBrush & brush()
extern "C"
void C_ZNK8QPainter5brushEv(void *this_) {
  /*return*/ ((QPainter*)this_)->brush();
}
// /usr/include/qt/QtGui/qpainter.h:197
// void setBackgroundMode(Qt::BGMode)
extern "C"
void C_ZN8QPainter17setBackgroundModeEN2Qt6BGModeE(void *this_, Qt::BGMode mode) {
  ((QPainter*)this_)->setBackgroundMode(mode);
}
// /usr/include/qt/QtGui/qpainter.h:198
// Qt::BGMode backgroundMode()
extern "C"
void C_ZNK8QPainter14backgroundModeEv(void *this_) {
  /*return*/ ((QPainter*)this_)->backgroundMode();
}
// /usr/include/qt/QtGui/qpainter.h:200
// QPoint brushOrigin()
extern "C"
void C_ZNK8QPainter11brushOriginEv(void *this_) {
  /*return*/ ((QPainter*)this_)->brushOrigin();
}
// inline
// /usr/include/qt/QtGui/qpainter.h:201
// void setBrushOrigin(int, int)
extern "C"
void C_ZN8QPainter14setBrushOriginEii(void *this_, int x, int y) {
  ((QPainter*)this_)->setBrushOrigin(x, y);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:202
// void setBrushOrigin(const class QPoint &)
extern "C"
void C_ZN8QPainter14setBrushOriginERK6QPoint(void *this_, const QPoint & arg0) {
  ((QPainter*)this_)->setBrushOrigin(arg0);
}
// /usr/include/qt/QtGui/qpainter.h:203
// void setBrushOrigin(const class QPointF &)
extern "C"
void C_ZN8QPainter14setBrushOriginERK7QPointF(void *this_, const QPointF & arg0) {
  ((QPainter*)this_)->setBrushOrigin(arg0);
}
// /usr/include/qt/QtGui/qpainter.h:205
// void setBackground(const class QBrush &)
extern "C"
void C_ZN8QPainter13setBackgroundERK6QBrush(void *this_, const QBrush & bg) {
  ((QPainter*)this_)->setBackground(bg);
}
// /usr/include/qt/QtGui/qpainter.h:206
// const QBrush & background()
extern "C"
void C_ZNK8QPainter10backgroundEv(void *this_) {
  /*return*/ ((QPainter*)this_)->background();
}
// /usr/include/qt/QtGui/qpainter.h:208
// qreal opacity()
extern "C"
void C_ZNK8QPainter7opacityEv(void *this_) {
  /*return*/ ((QPainter*)this_)->opacity();
}
// /usr/include/qt/QtGui/qpainter.h:209
// void setOpacity(qreal)
extern "C"
void C_ZN8QPainter10setOpacityEd(void *this_, qreal opacity) {
  ((QPainter*)this_)->setOpacity(opacity);
}
// /usr/include/qt/QtGui/qpainter.h:212
// QRegion clipRegion()
extern "C"
void C_ZNK8QPainter10clipRegionEv(void *this_) {
  /*return*/ ((QPainter*)this_)->clipRegion();
}
// /usr/include/qt/QtGui/qpainter.h:213
// QPainterPath clipPath()
extern "C"
void C_ZNK8QPainter8clipPathEv(void *this_) {
  /*return*/ ((QPainter*)this_)->clipPath();
}
// /usr/include/qt/QtGui/qpainter.h:215
// void setClipRect(const class QRectF &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipRectERK6QRectFN2Qt13ClipOperationE(void *this_, const QRectF & arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(arg0, op);
}
// /usr/include/qt/QtGui/qpainter.h:216
// void setClipRect(const class QRect &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipRectERK5QRectN2Qt13ClipOperationE(void *this_, const QRect & arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(arg0, op);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:217
// void setClipRect(int, int, int, int, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE(void *this_, int x, int y, int w, int h, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(x, y, w, h, op);
}
// /usr/include/qt/QtGui/qpainter.h:219
// void setClipRegion(const class QRegion &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter13setClipRegionERK7QRegionN2Qt13ClipOperationE(void *this_, const QRegion & arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRegion(arg0, op);
}
// /usr/include/qt/QtGui/qpainter.h:221
// void setClipPath(const class QPainterPath &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipPathERK12QPainterPathN2Qt13ClipOperationE(void *this_, const QPainterPath & path, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipPath(path, op);
}
// /usr/include/qt/QtGui/qpainter.h:223
// void setClipping(_Bool)
extern "C"
void C_ZN8QPainter11setClippingEb(void *this_, bool enable) {
  ((QPainter*)this_)->setClipping(enable);
}
// /usr/include/qt/QtGui/qpainter.h:224
// bool hasClipping()
extern "C"
void C_ZNK8QPainter11hasClippingEv(void *this_) {
  /*return*/ ((QPainter*)this_)->hasClipping();
}
// /usr/include/qt/QtGui/qpainter.h:226
// QRectF clipBoundingRect()
extern "C"
void C_ZNK8QPainter16clipBoundingRectEv(void *this_) {
  /*return*/ ((QPainter*)this_)->clipBoundingRect();
}
// /usr/include/qt/QtGui/qpainter.h:228
// void save()
extern "C"
void C_ZN8QPainter4saveEv(void *this_) {
  ((QPainter*)this_)->save();
}
// /usr/include/qt/QtGui/qpainter.h:229
// void restore()
extern "C"
void C_ZN8QPainter7restoreEv(void *this_) {
  ((QPainter*)this_)->restore();
}
// /usr/include/qt/QtGui/qpainter.h:232
// void setMatrix(const class QMatrix &, _Bool)
extern "C"
void C_ZN8QPainter9setMatrixERK7QMatrixb(void *this_, const QMatrix & matrix, bool combine) {
  ((QPainter*)this_)->setMatrix(matrix, combine);
}
// /usr/include/qt/QtGui/qpainter.h:233
// const QMatrix & matrix()
extern "C"
void C_ZNK8QPainter6matrixEv(void *this_) {
  /*return*/ ((QPainter*)this_)->matrix();
}
// /usr/include/qt/QtGui/qpainter.h:234
// const QMatrix & deviceMatrix()
extern "C"
void C_ZNK8QPainter12deviceMatrixEv(void *this_) {
  /*return*/ ((QPainter*)this_)->deviceMatrix();
}
// /usr/include/qt/QtGui/qpainter.h:235
// void resetMatrix()
extern "C"
void C_ZN8QPainter11resetMatrixEv(void *this_) {
  ((QPainter*)this_)->resetMatrix();
}
// /usr/include/qt/QtGui/qpainter.h:237
// void setTransform(const class QTransform &, _Bool)
extern "C"
void C_ZN8QPainter12setTransformERK10QTransformb(void *this_, const QTransform & transform, bool combine) {
  ((QPainter*)this_)->setTransform(transform, combine);
}
// /usr/include/qt/QtGui/qpainter.h:238
// const QTransform & transform()
extern "C"
void C_ZNK8QPainter9transformEv(void *this_) {
  /*return*/ ((QPainter*)this_)->transform();
}
// /usr/include/qt/QtGui/qpainter.h:239
// const QTransform & deviceTransform()
extern "C"
void C_ZNK8QPainter15deviceTransformEv(void *this_) {
  /*return*/ ((QPainter*)this_)->deviceTransform();
}
// /usr/include/qt/QtGui/qpainter.h:240
// void resetTransform()
extern "C"
void C_ZN8QPainter14resetTransformEv(void *this_) {
  ((QPainter*)this_)->resetTransform();
}
// /usr/include/qt/QtGui/qpainter.h:242
// void setWorldMatrix(const class QMatrix &, _Bool)
extern "C"
void C_ZN8QPainter14setWorldMatrixERK7QMatrixb(void *this_, const QMatrix & matrix, bool combine) {
  ((QPainter*)this_)->setWorldMatrix(matrix, combine);
}
// /usr/include/qt/QtGui/qpainter.h:243
// const QMatrix & worldMatrix()
extern "C"
void C_ZNK8QPainter11worldMatrixEv(void *this_) {
  /*return*/ ((QPainter*)this_)->worldMatrix();
}
// /usr/include/qt/QtGui/qpainter.h:245
// void setWorldTransform(const class QTransform &, _Bool)
extern "C"
void C_ZN8QPainter17setWorldTransformERK10QTransformb(void *this_, const QTransform & matrix, bool combine) {
  ((QPainter*)this_)->setWorldTransform(matrix, combine);
}
// /usr/include/qt/QtGui/qpainter.h:246
// const QTransform & worldTransform()
extern "C"
void C_ZNK8QPainter14worldTransformEv(void *this_) {
  /*return*/ ((QPainter*)this_)->worldTransform();
}
// /usr/include/qt/QtGui/qpainter.h:248
// QMatrix combinedMatrix()
extern "C"
void C_ZNK8QPainter14combinedMatrixEv(void *this_) {
  /*return*/ ((QPainter*)this_)->combinedMatrix();
}
// /usr/include/qt/QtGui/qpainter.h:249
// QTransform combinedTransform()
extern "C"
void C_ZNK8QPainter17combinedTransformEv(void *this_) {
  /*return*/ ((QPainter*)this_)->combinedTransform();
}
// /usr/include/qt/QtGui/qpainter.h:251
// void setMatrixEnabled(_Bool)
extern "C"
void C_ZN8QPainter16setMatrixEnabledEb(void *this_, bool enabled) {
  ((QPainter*)this_)->setMatrixEnabled(enabled);
}
// /usr/include/qt/QtGui/qpainter.h:252
// bool matrixEnabled()
extern "C"
void C_ZNK8QPainter13matrixEnabledEv(void *this_) {
  /*return*/ ((QPainter*)this_)->matrixEnabled();
}
// /usr/include/qt/QtGui/qpainter.h:254
// void setWorldMatrixEnabled(_Bool)
extern "C"
void C_ZN8QPainter21setWorldMatrixEnabledEb(void *this_, bool enabled) {
  ((QPainter*)this_)->setWorldMatrixEnabled(enabled);
}
// /usr/include/qt/QtGui/qpainter.h:255
// bool worldMatrixEnabled()
extern "C"
void C_ZNK8QPainter18worldMatrixEnabledEv(void *this_) {
  /*return*/ ((QPainter*)this_)->worldMatrixEnabled();
}
// /usr/include/qt/QtGui/qpainter.h:257
// void scale(qreal, qreal)
extern "C"
void C_ZN8QPainter5scaleEdd(void *this_, qreal sx, qreal sy) {
  ((QPainter*)this_)->scale(sx, sy);
}
// /usr/include/qt/QtGui/qpainter.h:258
// void shear(qreal, qreal)
extern "C"
void C_ZN8QPainter5shearEdd(void *this_, qreal sh, qreal sv) {
  ((QPainter*)this_)->shear(sh, sv);
}
// /usr/include/qt/QtGui/qpainter.h:259
// void rotate(qreal)
extern "C"
void C_ZN8QPainter6rotateEd(void *this_, qreal a) {
  ((QPainter*)this_)->rotate(a);
}
// /usr/include/qt/QtGui/qpainter.h:261
// void translate(const class QPointF &)
extern "C"
void C_ZN8QPainter9translateERK7QPointF(void *this_, const QPointF & offset) {
  ((QPainter*)this_)->translate(offset);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:262
// void translate(const class QPoint &)
extern "C"
void C_ZN8QPainter9translateERK6QPoint(void *this_, const QPoint & offset) {
  ((QPainter*)this_)->translate(offset);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:263
// void translate(qreal, qreal)
extern "C"
void C_ZN8QPainter9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPainter*)this_)->translate(dx, dy);
}
// /usr/include/qt/QtGui/qpainter.h:265
// QRect window()
extern "C"
void C_ZNK8QPainter6windowEv(void *this_) {
  /*return*/ ((QPainter*)this_)->window();
}
// /usr/include/qt/QtGui/qpainter.h:266
// void setWindow(const class QRect &)
extern "C"
void C_ZN8QPainter9setWindowERK5QRect(void *this_, const QRect & window) {
  ((QPainter*)this_)->setWindow(window);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:267
// void setWindow(int, int, int, int)
extern "C"
void C_ZN8QPainter9setWindowEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->setWindow(x, y, w, h);
}
// /usr/include/qt/QtGui/qpainter.h:269
// QRect viewport()
extern "C"
void C_ZNK8QPainter8viewportEv(void *this_) {
  /*return*/ ((QPainter*)this_)->viewport();
}
// /usr/include/qt/QtGui/qpainter.h:270
// void setViewport(const class QRect &)
extern "C"
void C_ZN8QPainter11setViewportERK5QRect(void *this_, const QRect & viewport) {
  ((QPainter*)this_)->setViewport(viewport);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:271
// void setViewport(int, int, int, int)
extern "C"
void C_ZN8QPainter11setViewportEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->setViewport(x, y, w, h);
}
// /usr/include/qt/QtGui/qpainter.h:273
// void setViewTransformEnabled(_Bool)
extern "C"
void C_ZN8QPainter23setViewTransformEnabledEb(void *this_, bool enable) {
  ((QPainter*)this_)->setViewTransformEnabled(enable);
}
// /usr/include/qt/QtGui/qpainter.h:274
// bool viewTransformEnabled()
extern "C"
void C_ZNK8QPainter20viewTransformEnabledEv(void *this_) {
  /*return*/ ((QPainter*)this_)->viewTransformEnabled();
}
// /usr/include/qt/QtGui/qpainter.h:277
// void strokePath(const class QPainterPath &, const class QPen &)
extern "C"
void C_ZN8QPainter10strokePathERK12QPainterPathRK4QPen(void *this_, const QPainterPath & path, const QPen & pen) {
  ((QPainter*)this_)->strokePath(path, pen);
}
// /usr/include/qt/QtGui/qpainter.h:278
// void fillPath(const class QPainterPath &, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillPathERK12QPainterPathRK6QBrush(void *this_, const QPainterPath & path, const QBrush & brush) {
  ((QPainter*)this_)->fillPath(path, brush);
}
// /usr/include/qt/QtGui/qpainter.h:279
// void drawPath(const class QPainterPath &)
extern "C"
void C_ZN8QPainter8drawPathERK12QPainterPath(void *this_, const QPainterPath & path) {
  ((QPainter*)this_)->drawPath(path);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:281
// void drawPoint(const class QPointF &)
extern "C"
void C_ZN8QPainter9drawPointERK7QPointF(void *this_, const QPointF & pt) {
  ((QPainter*)this_)->drawPoint(pt);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:282
// void drawPoint(const class QPoint &)
extern "C"
void C_ZN8QPainter9drawPointERK6QPoint(void *this_, const QPoint & p) {
  ((QPainter*)this_)->drawPoint(p);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:283
// void drawPoint(int, int)
extern "C"
void C_ZN8QPainter9drawPointEii(void *this_, int x, int y) {
  ((QPainter*)this_)->drawPoint(x, y);
}
// /usr/include/qt/QtGui/qpainter.h:285
// void drawPoints(const class QPointF *, int)
extern "C"
void C_ZN8QPainter10drawPointsEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawPoints(points, pointCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:286
// void drawPoints(const class QPolygonF &)
extern "C"
void C_ZN8QPainter10drawPointsERK9QPolygonF(void *this_, const QPolygonF & points) {
  ((QPainter*)this_)->drawPoints(points);
}
// /usr/include/qt/QtGui/qpainter.h:287
// void drawPoints(const class QPoint *, int)
extern "C"
void C_ZN8QPainter10drawPointsEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawPoints(points, pointCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:288
// void drawPoints(const class QPolygon &)
extern "C"
void C_ZN8QPainter10drawPointsERK8QPolygon(void *this_, const QPolygon & points) {
  ((QPainter*)this_)->drawPoints(points);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:290
// void drawLine(const class QLineF &)
extern "C"
void C_ZN8QPainter8drawLineERK6QLineF(void *this_, const QLineF & line) {
  ((QPainter*)this_)->drawLine(line);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:291
// void drawLine(const class QLine &)
extern "C"
void C_ZN8QPainter8drawLineERK5QLine(void *this_, const QLine & line) {
  ((QPainter*)this_)->drawLine(line);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:292
// void drawLine(int, int, int, int)
extern "C"
void C_ZN8QPainter8drawLineEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QPainter*)this_)->drawLine(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:293
// void drawLine(const class QPoint &, const class QPoint &)
extern "C"
void C_ZN8QPainter8drawLineERK6QPointS2_(void *this_, const QPoint & p1, const QPoint & p2) {
  ((QPainter*)this_)->drawLine(p1, p2);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:294
// void drawLine(const class QPointF &, const class QPointF &)
extern "C"
void C_ZN8QPainter8drawLineERK7QPointFS2_(void *this_, const QPointF & p1, const QPointF & p2) {
  ((QPainter*)this_)->drawLine(p1, p2);
}
// /usr/include/qt/QtGui/qpainter.h:296
// void drawLines(const class QLineF *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK6QLineFi(void *this_, const QLineF * lines, int lineCount) {
  ((QPainter*)this_)->drawLines(lines, lineCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:297
// void drawLines(const QVector<class QLineF> &)
extern "C"
void C_ZN8QPainter9drawLinesERK7QVectorI6QLineFE(void *this_, const QVector<QLineF> & lines) {
  ((QPainter*)this_)->drawLines(lines);
}
// /usr/include/qt/QtGui/qpainter.h:298
// void drawLines(const class QPointF *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK7QPointFi(void *this_, const QPointF * pointPairs, int lineCount) {
  ((QPainter*)this_)->drawLines(pointPairs, lineCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:299
// void drawLines(const QVector<class QPointF> &)
extern "C"
void C_ZN8QPainter9drawLinesERK7QVectorI7QPointFE(void *this_, const QVector<QPointF> & pointPairs) {
  ((QPainter*)this_)->drawLines(pointPairs);
}
// /usr/include/qt/QtGui/qpainter.h:300
// void drawLines(const class QLine *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK5QLinei(void *this_, const QLine * lines, int lineCount) {
  ((QPainter*)this_)->drawLines(lines, lineCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:301
// void drawLines(const QVector<class QLine> &)
extern "C"
void C_ZN8QPainter9drawLinesERK7QVectorI5QLineE(void *this_, const QVector<QLine> & lines) {
  ((QPainter*)this_)->drawLines(lines);
}
// /usr/include/qt/QtGui/qpainter.h:302
// void drawLines(const class QPoint *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK6QPointi(void *this_, const QPoint * pointPairs, int lineCount) {
  ((QPainter*)this_)->drawLines(pointPairs, lineCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:303
// void drawLines(const QVector<class QPoint> &)
extern "C"
void C_ZN8QPainter9drawLinesERK7QVectorI6QPointE(void *this_, const QVector<QPoint> & pointPairs) {
  ((QPainter*)this_)->drawLines(pointPairs);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:305
// void drawRect(const class QRectF &)
extern "C"
void C_ZN8QPainter8drawRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QPainter*)this_)->drawRect(rect);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:306
// void drawRect(int, int, int, int)
extern "C"
void C_ZN8QPainter8drawRectEiiii(void *this_, int x1, int y1, int w, int h) {
  ((QPainter*)this_)->drawRect(x1, y1, w, h);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:307
// void drawRect(const class QRect &)
extern "C"
void C_ZN8QPainter8drawRectERK5QRect(void *this_, const QRect & rect) {
  ((QPainter*)this_)->drawRect(rect);
}
// /usr/include/qt/QtGui/qpainter.h:309
// void drawRects(const class QRectF *, int)
extern "C"
void C_ZN8QPainter9drawRectsEPK6QRectFi(void *this_, const QRectF * rects, int rectCount) {
  ((QPainter*)this_)->drawRects(rects, rectCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:310
// void drawRects(const QVector<class QRectF> &)
extern "C"
void C_ZN8QPainter9drawRectsERK7QVectorI6QRectFE(void *this_, const QVector<QRectF> & rectangles) {
  ((QPainter*)this_)->drawRects(rectangles);
}
// /usr/include/qt/QtGui/qpainter.h:311
// void drawRects(const class QRect *, int)
extern "C"
void C_ZN8QPainter9drawRectsEPK5QRecti(void *this_, const QRect * rects, int rectCount) {
  ((QPainter*)this_)->drawRects(rects, rectCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:312
// void drawRects(const QVector<class QRect> &)
extern "C"
void C_ZN8QPainter9drawRectsERK7QVectorI5QRectE(void *this_, const QVector<QRect> & rectangles) {
  ((QPainter*)this_)->drawRects(rectangles);
}
// /usr/include/qt/QtGui/qpainter.h:314
// void drawEllipse(const class QRectF &)
extern "C"
void C_ZN8QPainter11drawEllipseERK6QRectF(void *this_, const QRectF & r) {
  ((QPainter*)this_)->drawEllipse(r);
}
// /usr/include/qt/QtGui/qpainter.h:315
// void drawEllipse(const class QRect &)
extern "C"
void C_ZN8QPainter11drawEllipseERK5QRect(void *this_, const QRect & r) {
  ((QPainter*)this_)->drawEllipse(r);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:316
// void drawEllipse(int, int, int, int)
extern "C"
void C_ZN8QPainter11drawEllipseEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->drawEllipse(x, y, w, h);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:318
// void drawEllipse(const class QPointF &, qreal, qreal)
extern "C"
void C_ZN8QPainter11drawEllipseERK7QPointFdd(void *this_, const QPointF & center, qreal rx, qreal ry) {
  ((QPainter*)this_)->drawEllipse(center, rx, ry);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:319
// void drawEllipse(const class QPoint &, int, int)
extern "C"
void C_ZN8QPainter11drawEllipseERK6QPointii(void *this_, const QPoint & center, int rx, int ry) {
  ((QPainter*)this_)->drawEllipse(center, rx, ry);
}
// /usr/include/qt/QtGui/qpainter.h:321
// void drawPolyline(const class QPointF *, int)
extern "C"
void C_ZN8QPainter12drawPolylineEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawPolyline(points, pointCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:322
// void drawPolyline(const class QPolygonF &)
extern "C"
void C_ZN8QPainter12drawPolylineERK9QPolygonF(void *this_, const QPolygonF & polyline) {
  ((QPainter*)this_)->drawPolyline(polyline);
}
// /usr/include/qt/QtGui/qpainter.h:323
// void drawPolyline(const class QPoint *, int)
extern "C"
void C_ZN8QPainter12drawPolylineEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawPolyline(points, pointCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:324
// void drawPolyline(const class QPolygon &)
extern "C"
void C_ZN8QPainter12drawPolylineERK8QPolygon(void *this_, const QPolygon & polygon) {
  ((QPainter*)this_)->drawPolyline(polygon);
}
// /usr/include/qt/QtGui/qpainter.h:326
// void drawPolygon(const class QPointF *, int, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonEPK7QPointFiN2Qt8FillRuleE(void *this_, const QPointF * points, int pointCount, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(points, pointCount, fillRule);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:327
// void drawPolygon(const class QPolygonF &, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE(void *this_, const QPolygonF & polygon, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(polygon, fillRule);
}
// /usr/include/qt/QtGui/qpainter.h:328
// void drawPolygon(const class QPoint *, int, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonEPK6QPointiN2Qt8FillRuleE(void *this_, const QPoint * points, int pointCount, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(points, pointCount, fillRule);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:329
// void drawPolygon(const class QPolygon &, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE(void *this_, const QPolygon & polygon, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(polygon, fillRule);
}
// /usr/include/qt/QtGui/qpainter.h:331
// void drawConvexPolygon(const class QPointF *, int)
extern "C"
void C_ZN8QPainter17drawConvexPolygonEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawConvexPolygon(points, pointCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:332
// void drawConvexPolygon(const class QPolygonF &)
extern "C"
void C_ZN8QPainter17drawConvexPolygonERK9QPolygonF(void *this_, const QPolygonF & polygon) {
  ((QPainter*)this_)->drawConvexPolygon(polygon);
}
// /usr/include/qt/QtGui/qpainter.h:333
// void drawConvexPolygon(const class QPoint *, int)
extern "C"
void C_ZN8QPainter17drawConvexPolygonEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawConvexPolygon(points, pointCount);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:334
// void drawConvexPolygon(const class QPolygon &)
extern "C"
void C_ZN8QPainter17drawConvexPolygonERK8QPolygon(void *this_, const QPolygon & polygon) {
  ((QPainter*)this_)->drawConvexPolygon(polygon);
}
// /usr/include/qt/QtGui/qpainter.h:336
// void drawArc(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter7drawArcERK6QRectFii(void *this_, const QRectF & rect, int a, int alen) {
  ((QPainter*)this_)->drawArc(rect, a, alen);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:337
// void drawArc(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter7drawArcERK5QRectii(void *this_, const QRect & arg0, int a, int alen) {
  ((QPainter*)this_)->drawArc(arg0, a, alen);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:338
// void drawArc(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter7drawArcEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawArc(x, y, w, h, a, alen);
}
// /usr/include/qt/QtGui/qpainter.h:340
// void drawPie(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter7drawPieERK6QRectFii(void *this_, const QRectF & rect, int a, int alen) {
  ((QPainter*)this_)->drawPie(rect, a, alen);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:341
// void drawPie(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter7drawPieEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawPie(x, y, w, h, a, alen);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:342
// void drawPie(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter7drawPieERK5QRectii(void *this_, const QRect & arg0, int a, int alen) {
  ((QPainter*)this_)->drawPie(arg0, a, alen);
}
// /usr/include/qt/QtGui/qpainter.h:344
// void drawChord(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter9drawChordERK6QRectFii(void *this_, const QRectF & rect, int a, int alen) {
  ((QPainter*)this_)->drawChord(rect, a, alen);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:345
// void drawChord(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter9drawChordEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawChord(x, y, w, h, a, alen);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:346
// void drawChord(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter9drawChordERK5QRectii(void *this_, const QRect & arg0, int a, int alen) {
  ((QPainter*)this_)->drawChord(arg0, a, alen);
}
// /usr/include/qt/QtGui/qpainter.h:348
// void drawRoundedRect(const class QRectF &, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN8QPainter15drawRoundedRectERK6QRectFddN2Qt8SizeModeE(void *this_, const QRectF & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(rect, xRadius, yRadius, mode);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:350
// void drawRoundedRect(int, int, int, int, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE(void *this_, int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:352
// void drawRoundedRect(const class QRect &, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE(void *this_, const QRect & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(rect, xRadius, yRadius, mode);
}
// /usr/include/qt/QtGui/qpainter.h:355
// void drawRoundRect(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter13drawRoundRectERK6QRectFii(void *this_, const QRectF & r, int xround, int yround) {
  ((QPainter*)this_)->drawRoundRect(r, xround, yround);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:356
// void drawRoundRect(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter13drawRoundRectEiiiiii(void *this_, int x, int y, int w, int h, int arg4, int arg5) {
  ((QPainter*)this_)->drawRoundRect(x, y, w, h, arg4, arg5);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:357
// void drawRoundRect(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter13drawRoundRectERK5QRectii(void *this_, const QRect & r, int xround, int yround) {
  ((QPainter*)this_)->drawRoundRect(r, xround, yround);
}
// /usr/include/qt/QtGui/qpainter.h:359
// void drawTiledPixmap(const class QRectF &, const class QPixmap &, const class QPointF &)
extern "C"
void C_ZN8QPainter15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void *this_, const QRectF & rect, const QPixmap & pm, const QPointF & offset) {
  ((QPainter*)this_)->drawTiledPixmap(rect, pm, offset);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:360
// void drawTiledPixmap(int, int, int, int, const class QPixmap &, int, int)
extern "C"
void C_ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii(void *this_, int x, int y, int w, int h, const QPixmap & arg4, int sx, int sy) {
  ((QPainter*)this_)->drawTiledPixmap(x, y, w, h, arg4, sx, sy);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:361
// void drawTiledPixmap(const class QRect &, const class QPixmap &, const class QPoint &)
extern "C"
void C_ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint(void *this_, const QRect & arg0, const QPixmap & arg1, const QPoint & arg2) {
  ((QPainter*)this_)->drawTiledPixmap(arg0, arg1, arg2);
}
// /usr/include/qt/QtGui/qpainter.h:363
// void drawPicture(const class QPointF &, const class QPicture &)
extern "C"
void C_ZN8QPainter11drawPictureERK7QPointFRK8QPicture(void *this_, const QPointF & p, const QPicture & picture) {
  ((QPainter*)this_)->drawPicture(p, picture);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:364
// void drawPicture(int, int, const class QPicture &)
extern "C"
void C_ZN8QPainter11drawPictureEiiRK8QPicture(void *this_, int x, int y, const QPicture & picture) {
  ((QPainter*)this_)->drawPicture(x, y, picture);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:365
// void drawPicture(const class QPoint &, const class QPicture &)
extern "C"
void C_ZN8QPainter11drawPictureERK6QPointRK8QPicture(void *this_, const QPoint & p, const QPicture & picture) {
  ((QPainter*)this_)->drawPicture(p, picture);
}
// /usr/include/qt/QtGui/qpainter.h:368
// void drawPixmap(const class QRectF &, const class QPixmap &, const class QRectF &)
extern "C"
void C_ZN8QPainter10drawPixmapERK6QRectFRK7QPixmapS2_(void *this_, const QRectF & targetRect, const QPixmap & pixmap, const QRectF & sourceRect) {
  ((QPainter*)this_)->drawPixmap(targetRect, pixmap, sourceRect);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:369
// void drawPixmap(const class QRect &, const class QPixmap &, const class QRect &)
extern "C"
void C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_(void *this_, const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect) {
  ((QPainter*)this_)->drawPixmap(targetRect, pixmap, sourceRect);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:370
// void drawPixmap(int, int, int, int, const class QPixmap &, int, int, int, int)
extern "C"
void C_ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii(void *this_, int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh) {
  ((QPainter*)this_)->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:372
// void drawPixmap(int, int, const class QPixmap &, int, int, int, int)
extern "C"
void C_ZN8QPainter10drawPixmapEiiRK7QPixmapiiii(void *this_, int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh) {
  ((QPainter*)this_)->drawPixmap(x, y, pm, sx, sy, sw, sh);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:374
// void drawPixmap(const class QPointF &, const class QPixmap &, const class QRectF &)
extern "C"
void C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF(void *this_, const QPointF & p, const QPixmap & pm, const QRectF & sr) {
  ((QPainter*)this_)->drawPixmap(p, pm, sr);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:375
// void drawPixmap(const class QPoint &, const class QPixmap &, const class QRect &)
extern "C"
void C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect(void *this_, const QPoint & p, const QPixmap & pm, const QRect & sr) {
  ((QPainter*)this_)->drawPixmap(p, pm, sr);
}
// /usr/include/qt/QtGui/qpainter.h:376
// void drawPixmap(const class QPointF &, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmap(void *this_, const QPointF & p, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(p, pm);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:377
// void drawPixmap(const class QPoint &, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmap(void *this_, const QPoint & p, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(p, pm);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:378
// void drawPixmap(int, int, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapEiiRK7QPixmap(void *this_, int x, int y, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(x, y, pm);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:379
// void drawPixmap(const class QRect &, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmap(void *this_, const QRect & r, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(r, pm);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:380
// void drawPixmap(int, int, int, int, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapEiiiiRK7QPixmap(void *this_, int x, int y, int w, int h, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(x, y, w, h, pm);
}
// /usr/include/qt/QtGui/qpainter.h:382
// void drawPixmapFragments(const class QPainter::PixmapFragment *, int, const class QPixmap &, PixmapFragmentHints)
extern "C"
void C_ZN8QPainter19drawPixmapFragmentsEPKNS_14PixmapFragmentEiRK7QPixmap6QFlagsINS_18PixmapFragmentHintEE(void *this_, const QPainter::PixmapFragment * fragments, int fragmentCount, const QPixmap & pixmap, QFlags<QPainter::PixmapFragmentHint> hints) {
  ((QPainter*)this_)->drawPixmapFragments(fragments, fragmentCount, pixmap, hints);
}
// /usr/include/qt/QtGui/qpainter.h:385
// void drawImage(const class QRectF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QRectF & targetRect, const QImage & image, const QRectF & sourceRect, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(targetRect, image, sourceRect, flags);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:387
// void drawImage(const class QRect &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QRect & targetRect, const QImage & image, const QRect & sourceRect, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(targetRect, image, sourceRect, flags);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:389
// void drawImage(const class QPointF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QPointF & p, const QImage & image, const QRectF & sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(p, image, sr, flags);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:391
// void drawImage(const class QPoint &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QPoint & p, const QImage & image, const QRect & sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(p, image, sr, flags);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:393
// void drawImage(const class QRectF &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK6QRectFRK6QImage(void *this_, const QRectF & r, const QImage & image) {
  ((QPainter*)this_)->drawImage(r, image);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:394
// void drawImage(const class QRect &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK5QRectRK6QImage(void *this_, const QRect & r, const QImage & image) {
  ((QPainter*)this_)->drawImage(r, image);
}
// /usr/include/qt/QtGui/qpainter.h:395
// void drawImage(const class QPointF &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK7QPointFRK6QImage(void *this_, const QPointF & p, const QImage & image) {
  ((QPainter*)this_)->drawImage(p, image);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:396
// void drawImage(const class QPoint &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK6QPointRK6QImage(void *this_, const QPoint & p, const QImage & image) {
  ((QPainter*)this_)->drawImage(p, image);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:397
// void drawImage(int, int, const class QImage &, int, int, int, int, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, int x, int y, const QImage & image, int sx, int sy, int sw, int sh, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(x, y, image, sx, sy, sw, sh, flags);
}
// /usr/include/qt/QtGui/qpainter.h:400
// void setLayoutDirection(Qt::LayoutDirection)
extern "C"
void C_ZN8QPainter18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QPainter*)this_)->setLayoutDirection(direction);
}
// /usr/include/qt/QtGui/qpainter.h:401
// Qt::LayoutDirection layoutDirection()
extern "C"
void C_ZNK8QPainter15layoutDirectionEv(void *this_) {
  /*return*/ ((QPainter*)this_)->layoutDirection();
}
// /usr/include/qt/QtGui/qpainter.h:404
// void drawGlyphRun(const class QPointF &, const class QGlyphRun &)
extern "C"
void C_ZN8QPainter12drawGlyphRunERK7QPointFRK9QGlyphRun(void *this_, const QPointF & position, const QGlyphRun & glyphRun) {
  ((QPainter*)this_)->drawGlyphRun(position, glyphRun);
}
// /usr/include/qt/QtGui/qpainter.h:407
// void drawStaticText(const class QPointF &, const class QStaticText &)
extern "C"
void C_ZN8QPainter14drawStaticTextERK7QPointFRK11QStaticText(void *this_, const QPointF & topLeftPosition, const QStaticText & staticText) {
  ((QPainter*)this_)->drawStaticText(topLeftPosition, staticText);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:408
// void drawStaticText(const class QPoint &, const class QStaticText &)
extern "C"
void C_ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText(void *this_, const QPoint & topLeftPosition, const QStaticText & staticText) {
  ((QPainter*)this_)->drawStaticText(topLeftPosition, staticText);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:409
// void drawStaticText(int, int, const class QStaticText &)
extern "C"
void C_ZN8QPainter14drawStaticTextEiiRK11QStaticText(void *this_, int left, int top, const QStaticText & staticText) {
  ((QPainter*)this_)->drawStaticText(left, top, staticText);
}
// /usr/include/qt/QtGui/qpainter.h:411
// void drawText(const class QPointF &, const class QString &)
extern "C"
void C_ZN8QPainter8drawTextERK7QPointFRK7QString(void *this_, const QPointF & p, const QString & s) {
  ((QPainter*)this_)->drawText(p, s);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:412
// void drawText(const class QPoint &, const class QString &)
extern "C"
void C_ZN8QPainter8drawTextERK6QPointRK7QString(void *this_, const QPoint & p, const QString & s) {
  ((QPainter*)this_)->drawText(p, s);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:413
// void drawText(int, int, const class QString &)
extern "C"
void C_ZN8QPainter8drawTextEiiRK7QString(void *this_, int x, int y, const QString & s) {
  ((QPainter*)this_)->drawText(x, y, s);
}
// /usr/include/qt/QtGui/qpainter.h:415
// void drawText(const class QPointF &, const class QString &, int, int)
extern "C"
void C_ZN8QPainter8drawTextERK7QPointFRK7QStringii(void *this_, const QPointF & p, const QString & str, int tf, int justificationPadding) {
  ((QPainter*)this_)->drawText(p, str, tf, justificationPadding);
}
// /usr/include/qt/QtGui/qpainter.h:417
// void drawText(const class QRectF &, int, const class QString &, class QRectF *)
extern "C"
void C_ZN8QPainter8drawTextERK6QRectFiRK7QStringPS0_(void *this_, const QRectF & r, int flags, const QString & text, QRectF * br) {
  ((QPainter*)this_)->drawText(r, flags, text, br);
}
// /usr/include/qt/QtGui/qpainter.h:418
// void drawText(const class QRect &, int, const class QString &, class QRect *)
extern "C"
void C_ZN8QPainter8drawTextERK5QRectiRK7QStringPS0_(void *this_, const QRect & r, int flags, const QString & text, QRect * br) {
  ((QPainter*)this_)->drawText(r, flags, text, br);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:419
// void drawText(int, int, int, int, int, const class QString &, class QRect *)
extern "C"
void C_ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect(void *this_, int x, int y, int w, int h, int flags, const QString & text, QRect * br) {
  ((QPainter*)this_)->drawText(x, y, w, h, flags, text, br);
}
// /usr/include/qt/QtGui/qpainter.h:421
// void drawText(const class QRectF &, const class QString &, const class QTextOption &)
extern "C"
void C_ZN8QPainter8drawTextERK6QRectFRK7QStringRK11QTextOption(void *this_, const QRectF & r, const QString & text, const QTextOption & o) {
  ((QPainter*)this_)->drawText(r, text, o);
}
// /usr/include/qt/QtGui/qpainter.h:423
// QRectF boundingRect(const class QRectF &, int, const class QString &)
extern "C"
void C_ZN8QPainter12boundingRectERK6QRectFiRK7QString(void *this_, const QRectF & rect, int flags, const QString & text) {
  /*return*/ ((QPainter*)this_)->boundingRect(rect, flags, text);
}
// /usr/include/qt/QtGui/qpainter.h:424
// QRect boundingRect(const class QRect &, int, const class QString &)
extern "C"
void C_ZN8QPainter12boundingRectERK5QRectiRK7QString(void *this_, const QRect & rect, int flags, const QString & text) {
  /*return*/ ((QPainter*)this_)->boundingRect(rect, flags, text);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:425
// QRect boundingRect(int, int, int, int, int, const class QString &)
extern "C"
void C_ZN8QPainter12boundingRectEiiiiiRK7QString(void *this_, int x, int y, int w, int h, int flags, const QString & text) {
  /*return*/ ((QPainter*)this_)->boundingRect(x, y, w, h, flags, text);
}
// /usr/include/qt/QtGui/qpainter.h:427
// QRectF boundingRect(const class QRectF &, const class QString &, const class QTextOption &)
extern "C"
void C_ZN8QPainter12boundingRectERK6QRectFRK7QStringRK11QTextOption(void *this_, const QRectF & rect, const QString & text, const QTextOption & o) {
  /*return*/ ((QPainter*)this_)->boundingRect(rect, text, o);
}
// /usr/include/qt/QtGui/qpainter.h:429
// void drawTextItem(const class QPointF &, const class QTextItem &)
extern "C"
void C_ZN8QPainter12drawTextItemERK7QPointFRK9QTextItem(void *this_, const QPointF & p, const QTextItem & ti) {
  ((QPainter*)this_)->drawTextItem(p, ti);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:430
// void drawTextItem(int, int, const class QTextItem &)
extern "C"
void C_ZN8QPainter12drawTextItemEiiRK9QTextItem(void *this_, int x, int y, const QTextItem & ti) {
  ((QPainter*)this_)->drawTextItem(x, y, ti);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:431
// void drawTextItem(const class QPoint &, const class QTextItem &)
extern "C"
void C_ZN8QPainter12drawTextItemERK6QPointRK9QTextItem(void *this_, const QPoint & p, const QTextItem & ti) {
  ((QPainter*)this_)->drawTextItem(p, ti);
}
// /usr/include/qt/QtGui/qpainter.h:433
// void fillRect(const class QRectF &, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFRK6QBrush(void *this_, const QRectF & arg0, const QBrush & arg1) {
  ((QPainter*)this_)->fillRect(arg0, arg1);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:434
// void fillRect(int, int, int, int, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillRectEiiiiRK6QBrush(void *this_, int x, int y, int w, int h, const QBrush & arg4) {
  ((QPainter*)this_)->fillRect(x, y, w, h, arg4);
}
// /usr/include/qt/QtGui/qpainter.h:435
// void fillRect(const class QRect &, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectRK6QBrush(void *this_, const QRect & arg0, const QBrush & arg1) {
  ((QPainter*)this_)->fillRect(arg0, arg1);
}
// /usr/include/qt/QtGui/qpainter.h:437
// void fillRect(const class QRectF &, const class QColor &)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFRK6QColor(void *this_, const QRectF & arg0, const QColor & color) {
  ((QPainter*)this_)->fillRect(arg0, color);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:438
// void fillRect(int, int, int, int, const class QColor &)
extern "C"
void C_ZN8QPainter8fillRectEiiiiRK6QColor(void *this_, int x, int y, int w, int h, const QColor & color) {
  ((QPainter*)this_)->fillRect(x, y, w, h, color);
}
// /usr/include/qt/QtGui/qpainter.h:439
// void fillRect(const class QRect &, const class QColor &)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectRK6QColor(void *this_, const QRect & arg0, const QColor & color) {
  ((QPainter*)this_)->fillRect(arg0, color);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:441
// void fillRect(int, int, int, int, Qt::GlobalColor)
extern "C"
void C_ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE(void *this_, int x, int y, int w, int h, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(x, y, w, h, c);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:442
// void fillRect(const class QRect &, Qt::GlobalColor)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE(void *this_, const QRect & r, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(r, c);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:443
// void fillRect(const class QRectF &, Qt::GlobalColor)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE(void *this_, const QRectF & r, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(r, c);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:445
// void fillRect(int, int, int, int, Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE(void *this_, int x, int y, int w, int h, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(x, y, w, h, style);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:446
// void fillRect(const class QRect &, Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE(void *this_, const QRect & r, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(r, style);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:447
// void fillRect(const class QRectF &, Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE(void *this_, const QRectF & r, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(r, style);
}
// /usr/include/qt/QtGui/qpainter.h:449
// void eraseRect(const class QRectF &)
extern "C"
void C_ZN8QPainter9eraseRectERK6QRectF(void *this_, const QRectF & arg0) {
  ((QPainter*)this_)->eraseRect(arg0);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:450
// void eraseRect(int, int, int, int)
extern "C"
void C_ZN8QPainter9eraseRectEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->eraseRect(x, y, w, h);
}
// inline
// /usr/include/qt/QtGui/qpainter.h:451
// void eraseRect(const class QRect &)
extern "C"
void C_ZN8QPainter9eraseRectERK5QRect(void *this_, const QRect & arg0) {
  ((QPainter*)this_)->eraseRect(arg0);
}
// /usr/include/qt/QtGui/qpainter.h:453
// void setRenderHint(enum QPainter::RenderHint, _Bool)
extern "C"
void C_ZN8QPainter13setRenderHintENS_10RenderHintEb(void *this_, QPainter::RenderHint hint, bool on) {
  ((QPainter*)this_)->setRenderHint(hint, on);
}
// /usr/include/qt/QtGui/qpainter.h:454
// void setRenderHints(RenderHints, _Bool)
extern "C"
void C_ZN8QPainter14setRenderHintsE6QFlagsINS_10RenderHintEEb(void *this_, QFlags<QPainter::RenderHint> hints, bool on) {
  ((QPainter*)this_)->setRenderHints(hints, on);
}
// /usr/include/qt/QtGui/qpainter.h:455
// RenderHints renderHints()
extern "C"
void C_ZNK8QPainter11renderHintsEv(void *this_) {
  /*return*/ ((QPainter*)this_)->renderHints();
}
// inline
// /usr/include/qt/QtGui/qpainter.h:456
// bool testRenderHint(enum QPainter::RenderHint)
extern "C"
void C_ZNK8QPainter14testRenderHintENS_10RenderHintE(void *this_, QPainter::RenderHint hint) {
  /*return*/ ((QPainter*)this_)->testRenderHint(hint);
}
// /usr/include/qt/QtGui/qpainter.h:458
// QPaintEngine * paintEngine()
extern "C"
void C_ZNK8QPainter11paintEngineEv(void *this_) {
  /*return*/ ((QPainter*)this_)->paintEngine();
}
// static
// /usr/include/qt/QtGui/qpainter.h:460
// void setRedirected(const class QPaintDevice *, class QPaintDevice *, const class QPoint &)
extern "C"
void C_ZN8QPainter13setRedirectedEPK12QPaintDevicePS0_RK6QPoint(const QPaintDevice * device, QPaintDevice * replacement, const QPoint & offset) {
  QPainter::setRedirected(device, replacement, offset);
}
// static
// /usr/include/qt/QtGui/qpainter.h:462
// QPaintDevice * redirected(const class QPaintDevice *, class QPoint *)
extern "C"
void C_ZN8QPainter10redirectedEPK12QPaintDeviceP6QPoint(const QPaintDevice * device, QPoint * offset) {
  /*return*/ QPainter::redirected(device, offset);
}
// static
// /usr/include/qt/QtGui/qpainter.h:463
// void restoreRedirected(const class QPaintDevice *)
extern "C"
void C_ZN8QPainter17restoreRedirectedEPK12QPaintDevice(const QPaintDevice * device) {
  QPainter::restoreRedirected(device);
}
// /usr/include/qt/QtGui/qpainter.h:465
// void beginNativePainting()
extern "C"
void C_ZN8QPainter19beginNativePaintingEv(void *this_) {
  ((QPainter*)this_)->beginNativePainting();
}
// /usr/include/qt/QtGui/qpainter.h:466
// void endNativePainting()
extern "C"
void C_ZN8QPainter17endNativePaintingEv(void *this_) {
  ((QPainter*)this_)->endNativePainting();
}
//  main block end
