//  header block begin
// /usr/include/qt/QtGui/qpainter.h
#include <qpainter.h>
#include <QtGui>

// QPainter is pure virtual: false
//  header block end

//  main block begin

class MyQPainter : public QPainter {
public:
MyQPainter() : QPainter() {}
MyQPainter(QPaintDevice * arg0) : QPainter(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:124
// [-2] void QPainter()
extern "C"
void* C_ZN8QPainterC1Ev() {
  (MyQPainter*)(0);
  return  new MyQPainter();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:125
// [-2] void QPainter(class QPaintDevice *)
extern "C"
void* C_ZN8QPainterC1EP12QPaintDevice(QPaintDevice * arg0) {
  (MyQPainter*)(0);
  return  new MyQPainter(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:126
// [-2] void ~QPainter()
extern "C"
void C_ZN8QPainterD1Ev(void *this_) {
  delete (QPainter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:128
// [8] QPaintDevice * device()
extern "C"
void* C_ZNK8QPainter6deviceEv(void *this_) {
  return (void*)((QPainter*)this_)->device();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:130
// [1] bool begin(class QPaintDevice *)
extern "C"
bool C_ZN8QPainter5beginEP12QPaintDevice(void *this_, QPaintDevice * arg0) {
  return (bool)((QPainter*)this_)->begin(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:131
// [1] bool end()
extern "C"
bool C_ZN8QPainter3endEv(void *this_) {
  return (bool)((QPainter*)this_)->end();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:132
// [1] bool isActive()
extern "C"
bool C_ZNK8QPainter8isActiveEv(void *this_) {
  return (bool)((QPainter*)this_)->isActive();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:134
// [-2] void initFrom(const class QPaintDevice *)
extern "C"
void C_ZN8QPainter8initFromEPK12QPaintDevice(void *this_, const QPaintDevice * device) {
  ((QPainter*)this_)->initFrom(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:180
// [-2] void setCompositionMode(enum QPainter::CompositionMode)
extern "C"
void C_ZN8QPainter18setCompositionModeENS_15CompositionModeE(void *this_, QPainter::CompositionMode mode) {
  ((QPainter*)this_)->setCompositionMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:181
// [4] QPainter::CompositionMode compositionMode()
extern "C"
QPainter::CompositionMode C_ZNK8QPainter15compositionModeEv(void *this_) {
  return (QPainter::CompositionMode)((QPainter*)this_)->compositionMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:183
// [16] const QFont & font()
extern "C"
void* C_ZNK8QPainter4fontEv(void *this_) {
  auto& rv = ((QPainter*)this_)->font();
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:184
// [-2] void setFont(const class QFont &)
extern "C"
void C_ZN8QPainter7setFontERK5QFont(void *this_, const QFont & f) {
  ((QPainter*)this_)->setFont(f);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:186
// [8] QFontMetrics fontMetrics()
extern "C"
void* C_ZNK8QPainter11fontMetricsEv(void *this_) {
  auto rv = ((QPainter*)this_)->fontMetrics();
return new QFontMetrics(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:187
// [8] QFontInfo fontInfo()
extern "C"
void* C_ZNK8QPainter8fontInfoEv(void *this_) {
  auto rv = ((QPainter*)this_)->fontInfo();
return new QFontInfo(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:189
// [-2] void setPen(const class QColor &)
extern "C"
void C_ZN8QPainter6setPenERK6QColor(void *this_, const QColor & color) {
  ((QPainter*)this_)->setPen(color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:190
// [-2] void setPen(const class QPen &)
extern "C"
void C_ZN8QPainter6setPenERK4QPen(void *this_, const QPen & pen) {
  ((QPainter*)this_)->setPen(pen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:191
// [-2] void setPen(Qt::PenStyle)
extern "C"
void C_ZN8QPainter6setPenEN2Qt8PenStyleE(void *this_, Qt::PenStyle style) {
  ((QPainter*)this_)->setPen(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:192
// [8] const QPen & pen()
extern "C"
void* C_ZNK8QPainter3penEv(void *this_) {
  auto& rv = ((QPainter*)this_)->pen();
return new QPen(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:194
// [-2] void setBrush(const class QBrush &)
extern "C"
void C_ZN8QPainter8setBrushERK6QBrush(void *this_, const QBrush & brush) {
  ((QPainter*)this_)->setBrush(brush);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:195
// [-2] void setBrush(Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8setBrushEN2Qt10BrushStyleE(void *this_, Qt::BrushStyle style) {
  ((QPainter*)this_)->setBrush(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:196
// [8] const QBrush & brush()
extern "C"
void* C_ZNK8QPainter5brushEv(void *this_) {
  auto& rv = ((QPainter*)this_)->brush();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:199
// [-2] void setBackgroundMode(Qt::BGMode)
extern "C"
void C_ZN8QPainter17setBackgroundModeEN2Qt6BGModeE(void *this_, Qt::BGMode mode) {
  ((QPainter*)this_)->setBackgroundMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:200
// [4] Qt::BGMode backgroundMode()
extern "C"
Qt::BGMode C_ZNK8QPainter14backgroundModeEv(void *this_) {
  return (Qt::BGMode)((QPainter*)this_)->backgroundMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:202
// [8] QPoint brushOrigin()
extern "C"
void* C_ZNK8QPainter11brushOriginEv(void *this_) {
  auto rv = ((QPainter*)this_)->brushOrigin();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:203
// [-2] void setBrushOrigin(int, int)
extern "C"
void C_ZN8QPainter14setBrushOriginEii(void *this_, int x, int y) {
  ((QPainter*)this_)->setBrushOrigin(x, y);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:204
// [-2] void setBrushOrigin(const class QPoint &)
extern "C"
void C_ZN8QPainter14setBrushOriginERK6QPoint(void *this_, const QPoint & arg0) {
  ((QPainter*)this_)->setBrushOrigin(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:205
// [-2] void setBrushOrigin(const class QPointF &)
extern "C"
void C_ZN8QPainter14setBrushOriginERK7QPointF(void *this_, const QPointF & arg0) {
  ((QPainter*)this_)->setBrushOrigin(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:207
// [-2] void setBackground(const class QBrush &)
extern "C"
void C_ZN8QPainter13setBackgroundERK6QBrush(void *this_, const QBrush & bg) {
  ((QPainter*)this_)->setBackground(bg);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:208
// [8] const QBrush & background()
extern "C"
void* C_ZNK8QPainter10backgroundEv(void *this_) {
  auto& rv = ((QPainter*)this_)->background();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:210
// [8] qreal opacity()
extern "C"
qreal C_ZNK8QPainter7opacityEv(void *this_) {
  return (qreal)((QPainter*)this_)->opacity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:211
// [-2] void setOpacity(qreal)
extern "C"
void C_ZN8QPainter10setOpacityEd(void *this_, qreal opacity) {
  ((QPainter*)this_)->setOpacity(opacity);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:214
// [8] QRegion clipRegion()
extern "C"
void* C_ZNK8QPainter10clipRegionEv(void *this_) {
  auto rv = ((QPainter*)this_)->clipRegion();
return new QRegion(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:215
// [8] QPainterPath clipPath()
extern "C"
void* C_ZNK8QPainter8clipPathEv(void *this_) {
  auto rv = ((QPainter*)this_)->clipPath();
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:217
// [-2] void setClipRect(const class QRectF &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipRectERK6QRectFN2Qt13ClipOperationE(void *this_, const QRectF & arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(arg0, op);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:218
// [-2] void setClipRect(const class QRect &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipRectERK5QRectN2Qt13ClipOperationE(void *this_, const QRect & arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(arg0, op);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:219
// [-2] void setClipRect(int, int, int, int, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE(void *this_, int x, int y, int w, int h, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(x, y, w, h, op);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:221
// [-2] void setClipRegion(const class QRegion &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter13setClipRegionERK7QRegionN2Qt13ClipOperationE(void *this_, const QRegion & arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRegion(arg0, op);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:223
// [-2] void setClipPath(const class QPainterPath &, Qt::ClipOperation)
extern "C"
void C_ZN8QPainter11setClipPathERK12QPainterPathN2Qt13ClipOperationE(void *this_, const QPainterPath & path, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipPath(path, op);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:225
// [-2] void setClipping(_Bool)
extern "C"
void C_ZN8QPainter11setClippingEb(void *this_, bool enable) {
  ((QPainter*)this_)->setClipping(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:226
// [1] bool hasClipping()
extern "C"
bool C_ZNK8QPainter11hasClippingEv(void *this_) {
  return (bool)((QPainter*)this_)->hasClipping();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:228
// [32] QRectF clipBoundingRect()
extern "C"
void* C_ZNK8QPainter16clipBoundingRectEv(void *this_) {
  auto rv = ((QPainter*)this_)->clipBoundingRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:230
// [-2] void save()
extern "C"
void C_ZN8QPainter4saveEv(void *this_) {
  ((QPainter*)this_)->save();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:231
// [-2] void restore()
extern "C"
void C_ZN8QPainter7restoreEv(void *this_) {
  ((QPainter*)this_)->restore();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:234
// [-2] void setMatrix(const class QMatrix &, _Bool)
extern "C"
void C_ZN8QPainter9setMatrixERK7QMatrixb(void *this_, const QMatrix & matrix, bool combine) {
  ((QPainter*)this_)->setMatrix(matrix, combine);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:235
// [48] const QMatrix & matrix()
extern "C"
void* C_ZNK8QPainter6matrixEv(void *this_) {
  auto& rv = ((QPainter*)this_)->matrix();
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:236
// [48] const QMatrix & deviceMatrix()
extern "C"
void* C_ZNK8QPainter12deviceMatrixEv(void *this_) {
  auto& rv = ((QPainter*)this_)->deviceMatrix();
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:237
// [-2] void resetMatrix()
extern "C"
void C_ZN8QPainter11resetMatrixEv(void *this_) {
  ((QPainter*)this_)->resetMatrix();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:239
// [-2] void setTransform(const class QTransform &, _Bool)
extern "C"
void C_ZN8QPainter12setTransformERK10QTransformb(void *this_, const QTransform & transform, bool combine) {
  ((QPainter*)this_)->setTransform(transform, combine);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:240
// [88] const QTransform & transform()
extern "C"
void* C_ZNK8QPainter9transformEv(void *this_) {
  auto& rv = ((QPainter*)this_)->transform();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:241
// [88] const QTransform & deviceTransform()
extern "C"
void* C_ZNK8QPainter15deviceTransformEv(void *this_) {
  auto& rv = ((QPainter*)this_)->deviceTransform();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:242
// [-2] void resetTransform()
extern "C"
void C_ZN8QPainter14resetTransformEv(void *this_) {
  ((QPainter*)this_)->resetTransform();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:244
// [-2] void setWorldMatrix(const class QMatrix &, _Bool)
extern "C"
void C_ZN8QPainter14setWorldMatrixERK7QMatrixb(void *this_, const QMatrix & matrix, bool combine) {
  ((QPainter*)this_)->setWorldMatrix(matrix, combine);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:245
// [48] const QMatrix & worldMatrix()
extern "C"
void* C_ZNK8QPainter11worldMatrixEv(void *this_) {
  auto& rv = ((QPainter*)this_)->worldMatrix();
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:247
// [-2] void setWorldTransform(const class QTransform &, _Bool)
extern "C"
void C_ZN8QPainter17setWorldTransformERK10QTransformb(void *this_, const QTransform & matrix, bool combine) {
  ((QPainter*)this_)->setWorldTransform(matrix, combine);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:248
// [88] const QTransform & worldTransform()
extern "C"
void* C_ZNK8QPainter14worldTransformEv(void *this_) {
  auto& rv = ((QPainter*)this_)->worldTransform();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:250
// [48] QMatrix combinedMatrix()
extern "C"
void* C_ZNK8QPainter14combinedMatrixEv(void *this_) {
  auto rv = ((QPainter*)this_)->combinedMatrix();
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:251
// [88] QTransform combinedTransform()
extern "C"
void* C_ZNK8QPainter17combinedTransformEv(void *this_) {
  auto rv = ((QPainter*)this_)->combinedTransform();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:253
// [-2] void setMatrixEnabled(_Bool)
extern "C"
void C_ZN8QPainter16setMatrixEnabledEb(void *this_, bool enabled) {
  ((QPainter*)this_)->setMatrixEnabled(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:254
// [1] bool matrixEnabled()
extern "C"
bool C_ZNK8QPainter13matrixEnabledEv(void *this_) {
  return (bool)((QPainter*)this_)->matrixEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:256
// [-2] void setWorldMatrixEnabled(_Bool)
extern "C"
void C_ZN8QPainter21setWorldMatrixEnabledEb(void *this_, bool enabled) {
  ((QPainter*)this_)->setWorldMatrixEnabled(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:257
// [1] bool worldMatrixEnabled()
extern "C"
bool C_ZNK8QPainter18worldMatrixEnabledEv(void *this_) {
  return (bool)((QPainter*)this_)->worldMatrixEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:259
// [-2] void scale(qreal, qreal)
extern "C"
void C_ZN8QPainter5scaleEdd(void *this_, qreal sx, qreal sy) {
  ((QPainter*)this_)->scale(sx, sy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:260
// [-2] void shear(qreal, qreal)
extern "C"
void C_ZN8QPainter5shearEdd(void *this_, qreal sh, qreal sv) {
  ((QPainter*)this_)->shear(sh, sv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:261
// [-2] void rotate(qreal)
extern "C"
void C_ZN8QPainter6rotateEd(void *this_, qreal a) {
  ((QPainter*)this_)->rotate(a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:263
// [-2] void translate(const class QPointF &)
extern "C"
void C_ZN8QPainter9translateERK7QPointF(void *this_, const QPointF & offset) {
  ((QPainter*)this_)->translate(offset);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:264
// [-2] void translate(const class QPoint &)
extern "C"
void C_ZN8QPainter9translateERK6QPoint(void *this_, const QPoint & offset) {
  ((QPainter*)this_)->translate(offset);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:265
// [-2] void translate(qreal, qreal)
extern "C"
void C_ZN8QPainter9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPainter*)this_)->translate(dx, dy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:267
// [16] QRect window()
extern "C"
void* C_ZNK8QPainter6windowEv(void *this_) {
  auto rv = ((QPainter*)this_)->window();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:268
// [-2] void setWindow(const class QRect &)
extern "C"
void C_ZN8QPainter9setWindowERK5QRect(void *this_, const QRect & window) {
  ((QPainter*)this_)->setWindow(window);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:269
// [-2] void setWindow(int, int, int, int)
extern "C"
void C_ZN8QPainter9setWindowEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->setWindow(x, y, w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:271
// [16] QRect viewport()
extern "C"
void* C_ZNK8QPainter8viewportEv(void *this_) {
  auto rv = ((QPainter*)this_)->viewport();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:272
// [-2] void setViewport(const class QRect &)
extern "C"
void C_ZN8QPainter11setViewportERK5QRect(void *this_, const QRect & viewport) {
  ((QPainter*)this_)->setViewport(viewport);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:273
// [-2] void setViewport(int, int, int, int)
extern "C"
void C_ZN8QPainter11setViewportEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->setViewport(x, y, w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:275
// [-2] void setViewTransformEnabled(_Bool)
extern "C"
void C_ZN8QPainter23setViewTransformEnabledEb(void *this_, bool enable) {
  ((QPainter*)this_)->setViewTransformEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:276
// [1] bool viewTransformEnabled()
extern "C"
bool C_ZNK8QPainter20viewTransformEnabledEv(void *this_) {
  return (bool)((QPainter*)this_)->viewTransformEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:279
// [-2] void strokePath(const class QPainterPath &, const class QPen &)
extern "C"
void C_ZN8QPainter10strokePathERK12QPainterPathRK4QPen(void *this_, const QPainterPath & path, const QPen & pen) {
  ((QPainter*)this_)->strokePath(path, pen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:280
// [-2] void fillPath(const class QPainterPath &, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillPathERK12QPainterPathRK6QBrush(void *this_, const QPainterPath & path, const QBrush & brush) {
  ((QPainter*)this_)->fillPath(path, brush);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:281
// [-2] void drawPath(const class QPainterPath &)
extern "C"
void C_ZN8QPainter8drawPathERK12QPainterPath(void *this_, const QPainterPath & path) {
  ((QPainter*)this_)->drawPath(path);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:283
// [-2] void drawPoint(const class QPointF &)
extern "C"
void C_ZN8QPainter9drawPointERK7QPointF(void *this_, const QPointF & pt) {
  ((QPainter*)this_)->drawPoint(pt);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:284
// [-2] void drawPoint(const class QPoint &)
extern "C"
void C_ZN8QPainter9drawPointERK6QPoint(void *this_, const QPoint & p) {
  ((QPainter*)this_)->drawPoint(p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:285
// [-2] void drawPoint(int, int)
extern "C"
void C_ZN8QPainter9drawPointEii(void *this_, int x, int y) {
  ((QPainter*)this_)->drawPoint(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:287
// [-2] void drawPoints(const class QPointF *, int)
extern "C"
void C_ZN8QPainter10drawPointsEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawPoints(points, pointCount);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:288
// [-2] void drawPoints(const class QPolygonF &)
extern "C"
void C_ZN8QPainter10drawPointsERK9QPolygonF(void *this_, const QPolygonF & points) {
  ((QPainter*)this_)->drawPoints(points);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:289
// [-2] void drawPoints(const class QPoint *, int)
extern "C"
void C_ZN8QPainter10drawPointsEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawPoints(points, pointCount);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:290
// [-2] void drawPoints(const class QPolygon &)
extern "C"
void C_ZN8QPainter10drawPointsERK8QPolygon(void *this_, const QPolygon & points) {
  ((QPainter*)this_)->drawPoints(points);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:292
// [-2] void drawLine(const class QLineF &)
extern "C"
void C_ZN8QPainter8drawLineERK6QLineF(void *this_, const QLineF & line) {
  ((QPainter*)this_)->drawLine(line);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:293
// [-2] void drawLine(const class QLine &)
extern "C"
void C_ZN8QPainter8drawLineERK5QLine(void *this_, const QLine & line) {
  ((QPainter*)this_)->drawLine(line);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:294
// [-2] void drawLine(int, int, int, int)
extern "C"
void C_ZN8QPainter8drawLineEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QPainter*)this_)->drawLine(x1, y1, x2, y2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:295
// [-2] void drawLine(const class QPoint &, const class QPoint &)
extern "C"
void C_ZN8QPainter8drawLineERK6QPointS2_(void *this_, const QPoint & p1, const QPoint & p2) {
  ((QPainter*)this_)->drawLine(p1, p2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:296
// [-2] void drawLine(const class QPointF &, const class QPointF &)
extern "C"
void C_ZN8QPainter8drawLineERK7QPointFS2_(void *this_, const QPointF & p1, const QPointF & p2) {
  ((QPainter*)this_)->drawLine(p1, p2);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:298
// [-2] void drawLines(const class QLineF *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK6QLineFi(void *this_, const QLineF * lines, int lineCount) {
  ((QPainter*)this_)->drawLines(lines, lineCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:300
// [-2] void drawLines(const class QPointF *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK7QPointFi(void *this_, const QPointF * pointPairs, int lineCount) {
  ((QPainter*)this_)->drawLines(pointPairs, lineCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:302
// [-2] void drawLines(const class QLine *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK5QLinei(void *this_, const QLine * lines, int lineCount) {
  ((QPainter*)this_)->drawLines(lines, lineCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:304
// [-2] void drawLines(const class QPoint *, int)
extern "C"
void C_ZN8QPainter9drawLinesEPK6QPointi(void *this_, const QPoint * pointPairs, int lineCount) {
  ((QPainter*)this_)->drawLines(pointPairs, lineCount);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:307
// [-2] void drawRect(const class QRectF &)
extern "C"
void C_ZN8QPainter8drawRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QPainter*)this_)->drawRect(rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:308
// [-2] void drawRect(int, int, int, int)
extern "C"
void C_ZN8QPainter8drawRectEiiii(void *this_, int x1, int y1, int w, int h) {
  ((QPainter*)this_)->drawRect(x1, y1, w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:309
// [-2] void drawRect(const class QRect &)
extern "C"
void C_ZN8QPainter8drawRectERK5QRect(void *this_, const QRect & rect) {
  ((QPainter*)this_)->drawRect(rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:311
// [-2] void drawRects(const class QRectF *, int)
extern "C"
void C_ZN8QPainter9drawRectsEPK6QRectFi(void *this_, const QRectF * rects, int rectCount) {
  ((QPainter*)this_)->drawRects(rects, rectCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:313
// [-2] void drawRects(const class QRect *, int)
extern "C"
void C_ZN8QPainter9drawRectsEPK5QRecti(void *this_, const QRect * rects, int rectCount) {
  ((QPainter*)this_)->drawRects(rects, rectCount);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:316
// [-2] void drawEllipse(const class QRectF &)
extern "C"
void C_ZN8QPainter11drawEllipseERK6QRectF(void *this_, const QRectF & r) {
  ((QPainter*)this_)->drawEllipse(r);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:317
// [-2] void drawEllipse(const class QRect &)
extern "C"
void C_ZN8QPainter11drawEllipseERK5QRect(void *this_, const QRect & r) {
  ((QPainter*)this_)->drawEllipse(r);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:318
// [-2] void drawEllipse(int, int, int, int)
extern "C"
void C_ZN8QPainter11drawEllipseEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->drawEllipse(x, y, w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:320
// [-2] void drawEllipse(const class QPointF &, qreal, qreal)
extern "C"
void C_ZN8QPainter11drawEllipseERK7QPointFdd(void *this_, const QPointF & center, qreal rx, qreal ry) {
  ((QPainter*)this_)->drawEllipse(center, rx, ry);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:321
// [-2] void drawEllipse(const class QPoint &, int, int)
extern "C"
void C_ZN8QPainter11drawEllipseERK6QPointii(void *this_, const QPoint & center, int rx, int ry) {
  ((QPainter*)this_)->drawEllipse(center, rx, ry);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:323
// [-2] void drawPolyline(const class QPointF *, int)
extern "C"
void C_ZN8QPainter12drawPolylineEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawPolyline(points, pointCount);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:324
// [-2] void drawPolyline(const class QPolygonF &)
extern "C"
void C_ZN8QPainter12drawPolylineERK9QPolygonF(void *this_, const QPolygonF & polyline) {
  ((QPainter*)this_)->drawPolyline(polyline);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:325
// [-2] void drawPolyline(const class QPoint *, int)
extern "C"
void C_ZN8QPainter12drawPolylineEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawPolyline(points, pointCount);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:326
// [-2] void drawPolyline(const class QPolygon &)
extern "C"
void C_ZN8QPainter12drawPolylineERK8QPolygon(void *this_, const QPolygon & polygon) {
  ((QPainter*)this_)->drawPolyline(polygon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:328
// [-2] void drawPolygon(const class QPointF *, int, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonEPK7QPointFiN2Qt8FillRuleE(void *this_, const QPointF * points, int pointCount, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(points, pointCount, fillRule);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:329
// [-2] void drawPolygon(const class QPolygonF &, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE(void *this_, const QPolygonF & polygon, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(polygon, fillRule);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:330
// [-2] void drawPolygon(const class QPoint *, int, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonEPK6QPointiN2Qt8FillRuleE(void *this_, const QPoint * points, int pointCount, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(points, pointCount, fillRule);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:331
// [-2] void drawPolygon(const class QPolygon &, Qt::FillRule)
extern "C"
void C_ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE(void *this_, const QPolygon & polygon, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(polygon, fillRule);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:333
// [-2] void drawConvexPolygon(const class QPointF *, int)
extern "C"
void C_ZN8QPainter17drawConvexPolygonEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawConvexPolygon(points, pointCount);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:334
// [-2] void drawConvexPolygon(const class QPolygonF &)
extern "C"
void C_ZN8QPainter17drawConvexPolygonERK9QPolygonF(void *this_, const QPolygonF & polygon) {
  ((QPainter*)this_)->drawConvexPolygon(polygon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:335
// [-2] void drawConvexPolygon(const class QPoint *, int)
extern "C"
void C_ZN8QPainter17drawConvexPolygonEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawConvexPolygon(points, pointCount);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:336
// [-2] void drawConvexPolygon(const class QPolygon &)
extern "C"
void C_ZN8QPainter17drawConvexPolygonERK8QPolygon(void *this_, const QPolygon & polygon) {
  ((QPainter*)this_)->drawConvexPolygon(polygon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:338
// [-2] void drawArc(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter7drawArcERK6QRectFii(void *this_, const QRectF & rect, int a, int alen) {
  ((QPainter*)this_)->drawArc(rect, a, alen);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:339
// [-2] void drawArc(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter7drawArcERK5QRectii(void *this_, const QRect & arg0, int a, int alen) {
  ((QPainter*)this_)->drawArc(arg0, a, alen);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:340
// [-2] void drawArc(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter7drawArcEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawArc(x, y, w, h, a, alen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:342
// [-2] void drawPie(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter7drawPieERK6QRectFii(void *this_, const QRectF & rect, int a, int alen) {
  ((QPainter*)this_)->drawPie(rect, a, alen);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:343
// [-2] void drawPie(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter7drawPieEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawPie(x, y, w, h, a, alen);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:344
// [-2] void drawPie(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter7drawPieERK5QRectii(void *this_, const QRect & arg0, int a, int alen) {
  ((QPainter*)this_)->drawPie(arg0, a, alen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:346
// [-2] void drawChord(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter9drawChordERK6QRectFii(void *this_, const QRectF & rect, int a, int alen) {
  ((QPainter*)this_)->drawChord(rect, a, alen);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:347
// [-2] void drawChord(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter9drawChordEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawChord(x, y, w, h, a, alen);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:348
// [-2] void drawChord(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter9drawChordERK5QRectii(void *this_, const QRect & arg0, int a, int alen) {
  ((QPainter*)this_)->drawChord(arg0, a, alen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:350
// [-2] void drawRoundedRect(const class QRectF &, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN8QPainter15drawRoundedRectERK6QRectFddN2Qt8SizeModeE(void *this_, const QRectF & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(rect, xRadius, yRadius, mode);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:352
// [-2] void drawRoundedRect(int, int, int, int, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE(void *this_, int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:354
// [-2] void drawRoundedRect(const class QRect &, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE(void *this_, const QRect & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(rect, xRadius, yRadius, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:357
// [-2] void drawRoundRect(const class QRectF &, int, int)
extern "C"
void C_ZN8QPainter13drawRoundRectERK6QRectFii(void *this_, const QRectF & r, int xround, int yround) {
  ((QPainter*)this_)->drawRoundRect(r, xround, yround);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:358
// [-2] void drawRoundRect(int, int, int, int, int, int)
extern "C"
void C_ZN8QPainter13drawRoundRectEiiiiii(void *this_, int x, int y, int w, int h, int arg4, int arg5) {
  ((QPainter*)this_)->drawRoundRect(x, y, w, h, arg4, arg5);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:359
// [-2] void drawRoundRect(const class QRect &, int, int)
extern "C"
void C_ZN8QPainter13drawRoundRectERK5QRectii(void *this_, const QRect & r, int xround, int yround) {
  ((QPainter*)this_)->drawRoundRect(r, xround, yround);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:361
// [-2] void drawTiledPixmap(const class QRectF &, const class QPixmap &, const class QPointF &)
extern "C"
void C_ZN8QPainter15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void *this_, const QRectF & rect, const QPixmap & pm, const QPointF & offset) {
  ((QPainter*)this_)->drawTiledPixmap(rect, pm, offset);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:362
// [-2] void drawTiledPixmap(int, int, int, int, const class QPixmap &, int, int)
extern "C"
void C_ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii(void *this_, int x, int y, int w, int h, const QPixmap & arg4, int sx, int sy) {
  ((QPainter*)this_)->drawTiledPixmap(x, y, w, h, arg4, sx, sy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:363
// [-2] void drawTiledPixmap(const class QRect &, const class QPixmap &, const class QPoint &)
extern "C"
void C_ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint(void *this_, const QRect & arg0, const QPixmap & arg1, const QPoint & arg2) {
  ((QPainter*)this_)->drawTiledPixmap(arg0, arg1, arg2);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:365
// [-2] void drawPicture(const class QPointF &, const class QPicture &)
extern "C"
void C_ZN8QPainter11drawPictureERK7QPointFRK8QPicture(void *this_, const QPointF & p, const QPicture & picture) {
  ((QPainter*)this_)->drawPicture(p, picture);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:366
// [-2] void drawPicture(int, int, const class QPicture &)
extern "C"
void C_ZN8QPainter11drawPictureEiiRK8QPicture(void *this_, int x, int y, const QPicture & picture) {
  ((QPainter*)this_)->drawPicture(x, y, picture);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:367
// [-2] void drawPicture(const class QPoint &, const class QPicture &)
extern "C"
void C_ZN8QPainter11drawPictureERK6QPointRK8QPicture(void *this_, const QPoint & p, const QPicture & picture) {
  ((QPainter*)this_)->drawPicture(p, picture);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:370
// [-2] void drawPixmap(const class QRectF &, const class QPixmap &, const class QRectF &)
extern "C"
void C_ZN8QPainter10drawPixmapERK6QRectFRK7QPixmapS2_(void *this_, const QRectF & targetRect, const QPixmap & pixmap, const QRectF & sourceRect) {
  ((QPainter*)this_)->drawPixmap(targetRect, pixmap, sourceRect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:371
// [-2] void drawPixmap(const class QRect &, const class QPixmap &, const class QRect &)
extern "C"
void C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_(void *this_, const QRect & targetRect, const QPixmap & pixmap, const QRect & sourceRect) {
  ((QPainter*)this_)->drawPixmap(targetRect, pixmap, sourceRect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:372
// [-2] void drawPixmap(int, int, int, int, const class QPixmap &, int, int, int, int)
extern "C"
void C_ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii(void *this_, int x, int y, int w, int h, const QPixmap & pm, int sx, int sy, int sw, int sh) {
  ((QPainter*)this_)->drawPixmap(x, y, w, h, pm, sx, sy, sw, sh);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:374
// [-2] void drawPixmap(int, int, const class QPixmap &, int, int, int, int)
extern "C"
void C_ZN8QPainter10drawPixmapEiiRK7QPixmapiiii(void *this_, int x, int y, const QPixmap & pm, int sx, int sy, int sw, int sh) {
  ((QPainter*)this_)->drawPixmap(x, y, pm, sx, sy, sw, sh);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:376
// [-2] void drawPixmap(const class QPointF &, const class QPixmap &, const class QRectF &)
extern "C"
void C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF(void *this_, const QPointF & p, const QPixmap & pm, const QRectF & sr) {
  ((QPainter*)this_)->drawPixmap(p, pm, sr);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:377
// [-2] void drawPixmap(const class QPoint &, const class QPixmap &, const class QRect &)
extern "C"
void C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect(void *this_, const QPoint & p, const QPixmap & pm, const QRect & sr) {
  ((QPainter*)this_)->drawPixmap(p, pm, sr);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:378
// [-2] void drawPixmap(const class QPointF &, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmap(void *this_, const QPointF & p, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(p, pm);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:379
// [-2] void drawPixmap(const class QPoint &, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmap(void *this_, const QPoint & p, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(p, pm);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:380
// [-2] void drawPixmap(int, int, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapEiiRK7QPixmap(void *this_, int x, int y, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(x, y, pm);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:381
// [-2] void drawPixmap(const class QRect &, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmap(void *this_, const QRect & r, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(r, pm);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:382
// [-2] void drawPixmap(int, int, int, int, const class QPixmap &)
extern "C"
void C_ZN8QPainter10drawPixmapEiiiiRK7QPixmap(void *this_, int x, int y, int w, int h, const QPixmap & pm) {
  ((QPainter*)this_)->drawPixmap(x, y, w, h, pm);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:387
// [-2] void drawImage(const class QRectF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QRectF & targetRect, const QImage & image, const QRectF & sourceRect, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(targetRect, image, sourceRect, flags);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:389
// [-2] void drawImage(const class QRect &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QRect & targetRect, const QImage & image, const QRect & sourceRect, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(targetRect, image, sourceRect, flags);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:391
// [-2] void drawImage(const class QPointF &, const class QImage &, const class QRectF &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QPointF & p, const QImage & image, const QRectF & sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(p, image, sr, flags);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:393
// [-2] void drawImage(const class QPoint &, const class QImage &, const class QRect &, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, const QPoint & p, const QImage & image, const QRect & sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(p, image, sr, flags);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:395
// [-2] void drawImage(const class QRectF &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK6QRectFRK6QImage(void *this_, const QRectF & r, const QImage & image) {
  ((QPainter*)this_)->drawImage(r, image);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:396
// [-2] void drawImage(const class QRect &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK5QRectRK6QImage(void *this_, const QRect & r, const QImage & image) {
  ((QPainter*)this_)->drawImage(r, image);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:397
// [-2] void drawImage(const class QPointF &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK7QPointFRK6QImage(void *this_, const QPointF & p, const QImage & image) {
  ((QPainter*)this_)->drawImage(p, image);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:398
// [-2] void drawImage(const class QPoint &, const class QImage &)
extern "C"
void C_ZN8QPainter9drawImageERK6QPointRK6QImage(void *this_, const QPoint & p, const QImage & image) {
  ((QPainter*)this_)->drawImage(p, image);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:399
// [-2] void drawImage(int, int, const class QImage &, int, int, int, int, Qt::ImageConversionFlags)
extern "C"
void C_ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, int x, int y, const QImage & image, int sx, int sy, int sw, int sh, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(x, y, image, sx, sy, sw, sh, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:402
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C"
void C_ZN8QPainter18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QPainter*)this_)->setLayoutDirection(direction);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:403
// [4] Qt::LayoutDirection layoutDirection()
extern "C"
Qt::LayoutDirection C_ZNK8QPainter15layoutDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QPainter*)this_)->layoutDirection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:406
// [-2] void drawGlyphRun(const class QPointF &, const class QGlyphRun &)
extern "C"
void C_ZN8QPainter12drawGlyphRunERK7QPointFRK9QGlyphRun(void *this_, const QPointF & position, const QGlyphRun & glyphRun) {
  ((QPainter*)this_)->drawGlyphRun(position, glyphRun);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:409
// [-2] void drawStaticText(const class QPointF &, const class QStaticText &)
extern "C"
void C_ZN8QPainter14drawStaticTextERK7QPointFRK11QStaticText(void *this_, const QPointF & topLeftPosition, const QStaticText & staticText) {
  ((QPainter*)this_)->drawStaticText(topLeftPosition, staticText);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:410
// [-2] void drawStaticText(const class QPoint &, const class QStaticText &)
extern "C"
void C_ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText(void *this_, const QPoint & topLeftPosition, const QStaticText & staticText) {
  ((QPainter*)this_)->drawStaticText(topLeftPosition, staticText);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:411
// [-2] void drawStaticText(int, int, const class QStaticText &)
extern "C"
void C_ZN8QPainter14drawStaticTextEiiRK11QStaticText(void *this_, int left, int top, const QStaticText & staticText) {
  ((QPainter*)this_)->drawStaticText(left, top, staticText);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:413
// [-2] void drawText(const class QPointF &, const class QString &)
extern "C"
void C_ZN8QPainter8drawTextERK7QPointFRK7QString(void *this_, const QPointF & p, const QString & s) {
  ((QPainter*)this_)->drawText(p, s);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:414
// [-2] void drawText(const class QPoint &, const class QString &)
extern "C"
void C_ZN8QPainter8drawTextERK6QPointRK7QString(void *this_, const QPoint & p, const QString & s) {
  ((QPainter*)this_)->drawText(p, s);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:415
// [-2] void drawText(int, int, const class QString &)
extern "C"
void C_ZN8QPainter8drawTextEiiRK7QString(void *this_, int x, int y, const QString & s) {
  ((QPainter*)this_)->drawText(x, y, s);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:417
// [-2] void drawText(const class QPointF &, const class QString &, int, int)
extern "C"
void C_ZN8QPainter8drawTextERK7QPointFRK7QStringii(void *this_, const QPointF & p, const QString & str, int tf, int justificationPadding) {
  ((QPainter*)this_)->drawText(p, str, tf, justificationPadding);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:419
// [-2] void drawText(const class QRectF &, int, const class QString &, class QRectF *)
extern "C"
void C_ZN8QPainter8drawTextERK6QRectFiRK7QStringPS0_(void *this_, const QRectF & r, int flags, const QString & text, QRectF * br) {
  ((QPainter*)this_)->drawText(r, flags, text, br);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:420
// [-2] void drawText(const class QRect &, int, const class QString &, class QRect *)
extern "C"
void C_ZN8QPainter8drawTextERK5QRectiRK7QStringPS0_(void *this_, const QRect & r, int flags, const QString & text, QRect * br) {
  ((QPainter*)this_)->drawText(r, flags, text, br);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:421
// [-2] void drawText(int, int, int, int, int, const class QString &, class QRect *)
extern "C"
void C_ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect(void *this_, int x, int y, int w, int h, int flags, const QString & text, QRect * br) {
  ((QPainter*)this_)->drawText(x, y, w, h, flags, text, br);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:423
// [-2] void drawText(const class QRectF &, const class QString &, const class QTextOption &)
extern "C"
void C_ZN8QPainter8drawTextERK6QRectFRK7QStringRK11QTextOption(void *this_, const QRectF & r, const QString & text, const QTextOption & o) {
  ((QPainter*)this_)->drawText(r, text, o);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:425
// [32] QRectF boundingRect(const class QRectF &, int, const class QString &)
extern "C"
void* C_ZN8QPainter12boundingRectERK6QRectFiRK7QString(void *this_, const QRectF & rect, int flags, const QString & text) {
  auto rv = ((QPainter*)this_)->boundingRect(rect, flags, text);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:426
// [16] QRect boundingRect(const class QRect &, int, const class QString &)
extern "C"
void* C_ZN8QPainter12boundingRectERK5QRectiRK7QString(void *this_, const QRect & rect, int flags, const QString & text) {
  auto rv = ((QPainter*)this_)->boundingRect(rect, flags, text);
return new QRect(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:427
// [16] QRect boundingRect(int, int, int, int, int, const class QString &)
extern "C"
void* C_ZN8QPainter12boundingRectEiiiiiRK7QString(void *this_, int x, int y, int w, int h, int flags, const QString & text) {
  auto rv = ((QPainter*)this_)->boundingRect(x, y, w, h, flags, text);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:429
// [32] QRectF boundingRect(const class QRectF &, const class QString &, const class QTextOption &)
extern "C"
void* C_ZN8QPainter12boundingRectERK6QRectFRK7QStringRK11QTextOption(void *this_, const QRectF & rect, const QString & text, const QTextOption & o) {
  auto rv = ((QPainter*)this_)->boundingRect(rect, text, o);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:431
// [-2] void drawTextItem(const class QPointF &, const class QTextItem &)
extern "C"
void C_ZN8QPainter12drawTextItemERK7QPointFRK9QTextItem(void *this_, const QPointF & p, const QTextItem & ti) {
  ((QPainter*)this_)->drawTextItem(p, ti);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:432
// [-2] void drawTextItem(int, int, const class QTextItem &)
extern "C"
void C_ZN8QPainter12drawTextItemEiiRK9QTextItem(void *this_, int x, int y, const QTextItem & ti) {
  ((QPainter*)this_)->drawTextItem(x, y, ti);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:433
// [-2] void drawTextItem(const class QPoint &, const class QTextItem &)
extern "C"
void C_ZN8QPainter12drawTextItemERK6QPointRK9QTextItem(void *this_, const QPoint & p, const QTextItem & ti) {
  ((QPainter*)this_)->drawTextItem(p, ti);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:435
// [-2] void fillRect(const class QRectF &, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFRK6QBrush(void *this_, const QRectF & arg0, const QBrush & arg1) {
  ((QPainter*)this_)->fillRect(arg0, arg1);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:436
// [-2] void fillRect(int, int, int, int, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillRectEiiiiRK6QBrush(void *this_, int x, int y, int w, int h, const QBrush & arg4) {
  ((QPainter*)this_)->fillRect(x, y, w, h, arg4);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:437
// [-2] void fillRect(const class QRect &, const class QBrush &)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectRK6QBrush(void *this_, const QRect & arg0, const QBrush & arg1) {
  ((QPainter*)this_)->fillRect(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:439
// [-2] void fillRect(const class QRectF &, const class QColor &)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFRK6QColor(void *this_, const QRectF & arg0, const QColor & color) {
  ((QPainter*)this_)->fillRect(arg0, color);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:440
// [-2] void fillRect(int, int, int, int, const class QColor &)
extern "C"
void C_ZN8QPainter8fillRectEiiiiRK6QColor(void *this_, int x, int y, int w, int h, const QColor & color) {
  ((QPainter*)this_)->fillRect(x, y, w, h, color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:441
// [-2] void fillRect(const class QRect &, const class QColor &)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectRK6QColor(void *this_, const QRect & arg0, const QColor & color) {
  ((QPainter*)this_)->fillRect(arg0, color);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:443
// [-2] void fillRect(int, int, int, int, Qt::GlobalColor)
extern "C"
void C_ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE(void *this_, int x, int y, int w, int h, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(x, y, w, h, c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:444
// [-2] void fillRect(const class QRect &, Qt::GlobalColor)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE(void *this_, const QRect & r, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(r, c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:445
// [-2] void fillRect(const class QRectF &, Qt::GlobalColor)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE(void *this_, const QRectF & r, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(r, c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:447
// [-2] void fillRect(int, int, int, int, Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE(void *this_, int x, int y, int w, int h, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(x, y, w, h, style);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:448
// [-2] void fillRect(const class QRect &, Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE(void *this_, const QRect & r, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(r, style);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:449
// [-2] void fillRect(const class QRectF &, Qt::BrushStyle)
extern "C"
void C_ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE(void *this_, const QRectF & r, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(r, style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:451
// [-2] void eraseRect(const class QRectF &)
extern "C"
void C_ZN8QPainter9eraseRectERK6QRectF(void *this_, const QRectF & arg0) {
  ((QPainter*)this_)->eraseRect(arg0);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:452
// [-2] void eraseRect(int, int, int, int)
extern "C"
void C_ZN8QPainter9eraseRectEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->eraseRect(x, y, w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:453
// [-2] void eraseRect(const class QRect &)
extern "C"
void C_ZN8QPainter9eraseRectERK5QRect(void *this_, const QRect & arg0) {
  ((QPainter*)this_)->eraseRect(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:455
// [-2] void setRenderHint(enum QPainter::RenderHint, _Bool)
extern "C"
void C_ZN8QPainter13setRenderHintENS_10RenderHintEb(void *this_, QPainter::RenderHint hint, bool on) {
  ((QPainter*)this_)->setRenderHint(hint, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:457
// [4] QPainter::RenderHints renderHints()
extern "C"
void C_ZNK8QPainter11renderHintsEv(void *this_) {
  auto rv = ((QPainter*)this_)->renderHints();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:458
// [1] bool testRenderHint(enum QPainter::RenderHint)
extern "C"
bool C_ZNK8QPainter14testRenderHintENS_10RenderHintE(void *this_, QPainter::RenderHint hint) {
  return (bool)((QPainter*)this_)->testRenderHint(hint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:460
// [8] QPaintEngine * paintEngine()
extern "C"
void* C_ZNK8QPainter11paintEngineEv(void *this_) {
  return (void*)((QPainter*)this_)->paintEngine();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:462
// [-2] void setRedirected(const class QPaintDevice *, class QPaintDevice *, const class QPoint &)
extern "C"
void C_ZN8QPainter13setRedirectedEPK12QPaintDevicePS0_RK6QPoint(const QPaintDevice * device, QPaintDevice * replacement, const QPoint & offset) {
  QPainter::setRedirected(device, replacement, offset);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:464
// [8] QPaintDevice * redirected(const class QPaintDevice *, class QPoint *)
extern "C"
void* C_ZN8QPainter10redirectedEPK12QPaintDeviceP6QPoint(const QPaintDevice * device, QPoint * offset) {
  return (void*)QPainter::redirected(device, offset);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:465
// [-2] void restoreRedirected(const class QPaintDevice *)
extern "C"
void C_ZN8QPainter17restoreRedirectedEPK12QPaintDevice(const QPaintDevice * device) {
  QPainter::restoreRedirected(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:467
// [-2] void beginNativePainting()
extern "C"
void C_ZN8QPainter19beginNativePaintingEv(void *this_) {
  ((QPainter*)this_)->beginNativePainting();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:468
// [-2] void endNativePainting()
extern "C"
void C_ZN8QPainter17endNativePaintingEv(void *this_) {
  ((QPainter*)this_)->endNativePainting();
}
//  main block end
