//  header block begin

// /usr/include/qt/QtGui/qpainter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpainter.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainter is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:124
// [-2] void QPainter()
extern "C" Q_DECL_EXPORT
void* C_ZN8QPainterC2Ev() {
  return  new QPainter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:125
// [-2] void QPainter(QPaintDevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPainterC2EP12QPaintDevice(QPaintDevice * arg0) {
  return  new QPainter(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:126
// [-2] void ~QPainter()
extern "C" Q_DECL_EXPORT
void C_ZN8QPainterD2Ev(void *this_) {
  delete (QPainter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:128
// [8] QPaintDevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter6deviceEv(void *this_) {
  return (void*)((QPainter*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:130
// [1] bool begin(QPaintDevice *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QPainter5beginEP12QPaintDevice(void *this_, QPaintDevice * arg0) {
  return (bool)((QPainter*)this_)->begin(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:131
// [1] bool end()
extern "C" Q_DECL_EXPORT
bool C_ZN8QPainter3endEv(void *this_) {
  return (bool)((QPainter*)this_)->end();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:132
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPainter8isActiveEv(void *this_) {
  return (bool)((QPainter*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:134
// [-2] void initFrom(const QPaintDevice *)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8initFromEPK12QPaintDevice(void *this_, const QPaintDevice * device) {
  ((QPainter*)this_)->initFrom(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:180
// [-2] void setCompositionMode(QPainter::CompositionMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter18setCompositionModeENS_15CompositionModeE(void *this_, QPainter::CompositionMode mode) {
  ((QPainter*)this_)->setCompositionMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:181
// [4] QPainter::CompositionMode compositionMode()
extern "C" Q_DECL_EXPORT
QPainter::CompositionMode C_ZNK8QPainter15compositionModeEv(void *this_) {
  return (QPainter::CompositionMode)((QPainter*)this_)->compositionMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:183
// [16] const QFont & font()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter4fontEv(void *this_) {
  auto& rv = ((QPainter*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:184
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7setFontERK5QFont(void *this_, QFont* f) {
  ((QPainter*)this_)->setFont(*f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:186
// [8] QFontMetrics fontMetrics()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter11fontMetricsEv(void *this_) {
  auto rv = ((QPainter*)this_)->fontMetrics();
return new QFontMetrics(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:187
// [8] QFontInfo fontInfo()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter8fontInfoEv(void *this_) {
  auto rv = ((QPainter*)this_)->fontInfo();
return new QFontInfo(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:189
// [-2] void setPen(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter6setPenERK6QColor(void *this_, QColor* color) {
  ((QPainter*)this_)->setPen(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:190
// [-2] void setPen(const QPen &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter6setPenERK4QPen(void *this_, QPen* pen) {
  ((QPainter*)this_)->setPen(*pen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:191
// [-2] void setPen(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter6setPenEN2Qt8PenStyleE(void *this_, Qt::PenStyle style) {
  ((QPainter*)this_)->setPen(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:192
// [8] const QPen & pen()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter3penEv(void *this_) {
  auto& rv = ((QPainter*)this_)->pen();
return new QPen(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:194
// [-2] void setBrush(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8setBrushERK6QBrush(void *this_, QBrush* brush) {
  ((QPainter*)this_)->setBrush(*brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:195
// [-2] void setBrush(Qt::BrushStyle)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8setBrushEN2Qt10BrushStyleE(void *this_, Qt::BrushStyle style) {
  ((QPainter*)this_)->setBrush(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:196
// [8] const QBrush & brush()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter5brushEv(void *this_) {
  auto& rv = ((QPainter*)this_)->brush();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:199
// [-2] void setBackgroundMode(Qt::BGMode)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17setBackgroundModeEN2Qt6BGModeE(void *this_, Qt::BGMode mode) {
  ((QPainter*)this_)->setBackgroundMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:200
// [4] Qt::BGMode backgroundMode()
extern "C" Q_DECL_EXPORT
Qt::BGMode C_ZNK8QPainter14backgroundModeEv(void *this_) {
  return (Qt::BGMode)((QPainter*)this_)->backgroundMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:202
// [8] QPoint brushOrigin()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter11brushOriginEv(void *this_) {
  auto rv = ((QPainter*)this_)->brushOrigin();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:203
// [-2] void setBrushOrigin(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14setBrushOriginEii(void *this_, int x, int y) {
  ((QPainter*)this_)->setBrushOrigin(x, y);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:204
// [-2] void setBrushOrigin(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14setBrushOriginERK6QPoint(void *this_, QPoint* arg0) {
  ((QPainter*)this_)->setBrushOrigin(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:205
// [-2] void setBrushOrigin(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14setBrushOriginERK7QPointF(void *this_, QPointF* arg0) {
  ((QPainter*)this_)->setBrushOrigin(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:207
// [-2] void setBackground(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter13setBackgroundERK6QBrush(void *this_, QBrush* bg) {
  ((QPainter*)this_)->setBackground(*bg);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:208
// [8] const QBrush & background()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter10backgroundEv(void *this_) {
  auto& rv = ((QPainter*)this_)->background();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainter.h:210
// [8] qreal opacity()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QPainter7opacityEv(void *this_) {
  return (qreal)((QPainter*)this_)->opacity();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainter.h:211
// [-2] void setOpacity(qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10setOpacityEd(void *this_, qreal opacity) {
  ((QPainter*)this_)->setOpacity(opacity);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:214
// [8] QRegion clipRegion()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter10clipRegionEv(void *this_) {
  auto rv = ((QPainter*)this_)->clipRegion();
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:215
// [8] QPainterPath clipPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter8clipPathEv(void *this_) {
  auto rv = ((QPainter*)this_)->clipPath();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:217
// [-2] void setClipRect(const QRectF &, Qt::ClipOperation)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11setClipRectERK6QRectFN2Qt13ClipOperationE(void *this_, QRectF* arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(*arg0, op);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:218
// [-2] void setClipRect(const QRect &, Qt::ClipOperation)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11setClipRectERK5QRectN2Qt13ClipOperationE(void *this_, QRect* arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(*arg0, op);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:219
// [-2] void setClipRect(int, int, int, int, Qt::ClipOperation)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11setClipRectEiiiiN2Qt13ClipOperationE(void *this_, int x, int y, int w, int h, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRect(x, y, w, h, op);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:221
// [-2] void setClipRegion(const QRegion &, Qt::ClipOperation)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter13setClipRegionERK7QRegionN2Qt13ClipOperationE(void *this_, QRegion* arg0, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipRegion(*arg0, op);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:223
// [-2] void setClipPath(const QPainterPath &, Qt::ClipOperation)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11setClipPathERK12QPainterPathN2Qt13ClipOperationE(void *this_, QPainterPath* path, Qt::ClipOperation op) {
  ((QPainter*)this_)->setClipPath(*path, op);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:225
// [-2] void setClipping(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11setClippingEb(void *this_, bool enable) {
  ((QPainter*)this_)->setClipping(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:226
// [1] bool hasClipping()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPainter11hasClippingEv(void *this_) {
  return (bool)((QPainter*)this_)->hasClipping();
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpainter.h:228
// [32] QRectF clipBoundingRect()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter16clipBoundingRectEv(void *this_) {
  auto rv = ((QPainter*)this_)->clipBoundingRect();
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:230
// [-2] void save()
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter4saveEv(void *this_) {
  ((QPainter*)this_)->save();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:231
// [-2] void restore()
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7restoreEv(void *this_) {
  ((QPainter*)this_)->restore();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:234
// [-2] void setMatrix(const QMatrix &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9setMatrixERK7QMatrixb(void *this_, QMatrix* matrix, bool combine) {
  ((QPainter*)this_)->setMatrix(*matrix, combine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:235
// [48] const QMatrix & matrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter6matrixEv(void *this_) {
  auto& rv = ((QPainter*)this_)->matrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:236
// [48] const QMatrix & deviceMatrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter12deviceMatrixEv(void *this_) {
  auto& rv = ((QPainter*)this_)->deviceMatrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:237
// [-2] void resetMatrix()
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11resetMatrixEv(void *this_) {
  ((QPainter*)this_)->resetMatrix();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpainter.h:239
// [-2] void setTransform(const QTransform &, bool)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12setTransformERK10QTransformb(void *this_, QTransform* transform, bool combine) {
  ((QPainter*)this_)->setTransform(*transform, combine);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:240
// [88] const QTransform & transform()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter9transformEv(void *this_) {
  auto& rv = ((QPainter*)this_)->transform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:241
// [88] const QTransform & deviceTransform()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter15deviceTransformEv(void *this_) {
  auto& rv = ((QPainter*)this_)->deviceTransform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:242
// [-2] void resetTransform()
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14resetTransformEv(void *this_) {
  ((QPainter*)this_)->resetTransform();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:244
// [-2] void setWorldMatrix(const QMatrix &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14setWorldMatrixERK7QMatrixb(void *this_, QMatrix* matrix, bool combine) {
  ((QPainter*)this_)->setWorldMatrix(*matrix, combine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:245
// [48] const QMatrix & worldMatrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter11worldMatrixEv(void *this_) {
  auto& rv = ((QPainter*)this_)->worldMatrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:247
// [-2] void setWorldTransform(const QTransform &, bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17setWorldTransformERK10QTransformb(void *this_, QTransform* matrix, bool combine) {
  ((QPainter*)this_)->setWorldTransform(*matrix, combine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:248
// [88] const QTransform & worldTransform()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter14worldTransformEv(void *this_) {
  auto& rv = ((QPainter*)this_)->worldTransform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:250
// [48] QMatrix combinedMatrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter14combinedMatrixEv(void *this_) {
  auto rv = ((QPainter*)this_)->combinedMatrix();
return new QMatrix(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:251
// [88] QTransform combinedTransform()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter17combinedTransformEv(void *this_) {
  auto rv = ((QPainter*)this_)->combinedTransform();
return new QTransform(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:253
// [-2] void setMatrixEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter16setMatrixEnabledEb(void *this_, bool enabled) {
  ((QPainter*)this_)->setMatrixEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:254
// [1] bool matrixEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPainter13matrixEnabledEv(void *this_) {
  return (bool)((QPainter*)this_)->matrixEnabled();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainter.h:256
// [-2] void setWorldMatrixEnabled(bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter21setWorldMatrixEnabledEb(void *this_, bool enabled) {
  ((QPainter*)this_)->setWorldMatrixEnabled(enabled);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainter.h:257
// [1] bool worldMatrixEnabled()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPainter18worldMatrixEnabledEv(void *this_) {
  return (bool)((QPainter*)this_)->worldMatrixEnabled();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:259
// [-2] void scale(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter5scaleEdd(void *this_, qreal sx, qreal sy) {
  ((QPainter*)this_)->scale(sx, sy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:260
// [-2] void shear(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter5shearEdd(void *this_, qreal sh, qreal sv) {
  ((QPainter*)this_)->shear(sh, sv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:261
// [-2] void rotate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter6rotateEd(void *this_, qreal a) {
  ((QPainter*)this_)->rotate(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:263
// [-2] void translate(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9translateERK7QPointF(void *this_, QPointF* offset) {
  ((QPainter*)this_)->translate(*offset);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:264
// [-2] void translate(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9translateERK6QPoint(void *this_, QPoint* offset) {
  ((QPainter*)this_)->translate(*offset);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:265
// [-2] void translate(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPainter*)this_)->translate(dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:267
// [16] QRect window()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter6windowEv(void *this_) {
  auto rv = ((QPainter*)this_)->window();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:268
// [-2] void setWindow(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9setWindowERK5QRect(void *this_, QRect* window) {
  ((QPainter*)this_)->setWindow(*window);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:269
// [-2] void setWindow(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9setWindowEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->setWindow(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:271
// [16] QRect viewport()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter8viewportEv(void *this_) {
  auto rv = ((QPainter*)this_)->viewport();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:272
// [-2] void setViewport(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11setViewportERK5QRect(void *this_, QRect* viewport) {
  ((QPainter*)this_)->setViewport(*viewport);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:273
// [-2] void setViewport(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11setViewportEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->setViewport(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:275
// [-2] void setViewTransformEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter23setViewTransformEnabledEb(void *this_, bool enable) {
  ((QPainter*)this_)->setViewTransformEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:276
// [1] bool viewTransformEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPainter20viewTransformEnabledEv(void *this_) {
  return (bool)((QPainter*)this_)->viewTransformEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:279
// [-2] void strokePath(const QPainterPath &, const QPen &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10strokePathERK12QPainterPathRK4QPen(void *this_, QPainterPath* path, QPen* pen) {
  ((QPainter*)this_)->strokePath(*path, *pen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:280
// [-2] void fillPath(const QPainterPath &, const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillPathERK12QPainterPathRK6QBrush(void *this_, QPainterPath* path, QBrush* brush) {
  ((QPainter*)this_)->fillPath(*path, *brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:281
// [-2] void drawPath(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawPathERK12QPainterPath(void *this_, QPainterPath* path) {
  ((QPainter*)this_)->drawPath(*path);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:283
// [-2] void drawPoint(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawPointERK7QPointF(void *this_, QPointF* pt) {
  ((QPainter*)this_)->drawPoint(*pt);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:284
// [-2] void drawPoint(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawPointERK6QPoint(void *this_, QPoint* p) {
  ((QPainter*)this_)->drawPoint(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:285
// [-2] void drawPoint(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawPointEii(void *this_, int x, int y) {
  ((QPainter*)this_)->drawPoint(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:287
// [-2] void drawPoints(const QPointF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPointsEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawPoints(points, pointCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:288
// [-2] void drawPoints(const QPolygonF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPointsERK9QPolygonF(void *this_, QPolygonF* points) {
  ((QPainter*)this_)->drawPoints(*points);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:289
// [-2] void drawPoints(const QPoint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPointsEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawPoints(points, pointCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:290
// [-2] void drawPoints(const QPolygon &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPointsERK8QPolygon(void *this_, QPolygon* points) {
  ((QPainter*)this_)->drawPoints(*points);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:292
// [-2] void drawLine(const QLineF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawLineERK6QLineF(void *this_, QLineF* line) {
  ((QPainter*)this_)->drawLine(*line);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:293
// [-2] void drawLine(const QLine &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawLineERK5QLine(void *this_, QLine* line) {
  ((QPainter*)this_)->drawLine(*line);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:294
// [-2] void drawLine(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawLineEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QPainter*)this_)->drawLine(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:295
// [-2] void drawLine(const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawLineERK6QPointS2_(void *this_, QPoint* p1, QPoint* p2) {
  ((QPainter*)this_)->drawLine(*p1, *p2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:296
// [-2] void drawLine(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawLineERK7QPointFS2_(void *this_, QPointF* p1, QPointF* p2) {
  ((QPainter*)this_)->drawLine(*p1, *p2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:298
// [-2] void drawLines(const QLineF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesEPK6QLineFi(void *this_, const QLineF * lines, int lineCount) {
  ((QPainter*)this_)->drawLines(lines, lineCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:299
// [-2] void drawLines(const QVector<QLineF> &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesERK7QVectorI6QLineFE(void *this_, QVector<QLineF>* lines) {
  ((QPainter*)this_)->drawLines(*lines);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:300
// [-2] void drawLines(const QPointF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesEPK7QPointFi(void *this_, const QPointF * pointPairs, int lineCount) {
  ((QPainter*)this_)->drawLines(pointPairs, lineCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:301
// [-2] void drawLines(const QVector<QPointF> &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesERK7QVectorI7QPointFE(void *this_, QVector<QPointF>* pointPairs) {
  ((QPainter*)this_)->drawLines(*pointPairs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:302
// [-2] void drawLines(const QLine *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesEPK5QLinei(void *this_, const QLine * lines, int lineCount) {
  ((QPainter*)this_)->drawLines(lines, lineCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:303
// [-2] void drawLines(const QVector<QLine> &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesERK7QVectorI5QLineE(void *this_, QVector<QLine>* lines) {
  ((QPainter*)this_)->drawLines(*lines);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:304
// [-2] void drawLines(const QPoint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesEPK6QPointi(void *this_, const QPoint * pointPairs, int lineCount) {
  ((QPainter*)this_)->drawLines(pointPairs, lineCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:305
// [-2] void drawLines(const QVector<QPoint> &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawLinesERK7QVectorI6QPointE(void *this_, QVector<QPoint>* pointPairs) {
  ((QPainter*)this_)->drawLines(*pointPairs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:307
// [-2] void drawRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawRectERK6QRectF(void *this_, QRectF* rect) {
  ((QPainter*)this_)->drawRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:308
// [-2] void drawRect(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawRectEiiii(void *this_, int x1, int y1, int w, int h) {
  ((QPainter*)this_)->drawRect(x1, y1, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:309
// [-2] void drawRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawRectERK5QRect(void *this_, QRect* rect) {
  ((QPainter*)this_)->drawRect(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:311
// [-2] void drawRects(const QRectF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawRectsEPK6QRectFi(void *this_, const QRectF * rects, int rectCount) {
  ((QPainter*)this_)->drawRects(rects, rectCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:312
// [-2] void drawRects(const QVector<QRectF> &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawRectsERK7QVectorI6QRectFE(void *this_, QVector<QRectF>* rectangles) {
  ((QPainter*)this_)->drawRects(*rectangles);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:313
// [-2] void drawRects(const QRect *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawRectsEPK5QRecti(void *this_, const QRect * rects, int rectCount) {
  ((QPainter*)this_)->drawRects(rects, rectCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:314
// [-2] void drawRects(const QVector<QRect> &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawRectsERK7QVectorI5QRectE(void *this_, QVector<QRect>* rectangles) {
  ((QPainter*)this_)->drawRects(*rectangles);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:316
// [-2] void drawEllipse(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawEllipseERK6QRectF(void *this_, QRectF* r) {
  ((QPainter*)this_)->drawEllipse(*r);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:317
// [-2] void drawEllipse(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawEllipseERK5QRect(void *this_, QRect* r) {
  ((QPainter*)this_)->drawEllipse(*r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:318
// [-2] void drawEllipse(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawEllipseEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->drawEllipse(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainter.h:320
// [-2] void drawEllipse(const QPointF &, qreal, qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawEllipseERK7QPointFdd(void *this_, QPointF* center, qreal rx, qreal ry) {
  ((QPainter*)this_)->drawEllipse(*center, rx, ry);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainter.h:321
// [-2] void drawEllipse(const QPoint &, int, int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawEllipseERK6QPointii(void *this_, QPoint* center, int rx, int ry) {
  ((QPainter*)this_)->drawEllipse(*center, rx, ry);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:323
// [-2] void drawPolyline(const QPointF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawPolylineEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawPolyline(points, pointCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:324
// [-2] void drawPolyline(const QPolygonF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawPolylineERK9QPolygonF(void *this_, QPolygonF* polyline) {
  ((QPainter*)this_)->drawPolyline(*polyline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:325
// [-2] void drawPolyline(const QPoint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawPolylineEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawPolyline(points, pointCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:326
// [-2] void drawPolyline(const QPolygon &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawPolylineERK8QPolygon(void *this_, QPolygon* polygon) {
  ((QPainter*)this_)->drawPolyline(*polygon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:328
// [-2] void drawPolygon(const QPointF *, int, Qt::FillRule)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawPolygonEPK7QPointFiN2Qt8FillRuleE(void *this_, const QPointF * points, int pointCount, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(points, pointCount, fillRule);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:329
// [-2] void drawPolygon(const QPolygonF &, Qt::FillRule)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawPolygonERK9QPolygonFN2Qt8FillRuleE(void *this_, QPolygonF* polygon, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(*polygon, fillRule);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:330
// [-2] void drawPolygon(const QPoint *, int, Qt::FillRule)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawPolygonEPK6QPointiN2Qt8FillRuleE(void *this_, const QPoint * points, int pointCount, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(points, pointCount, fillRule);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:331
// [-2] void drawPolygon(const QPolygon &, Qt::FillRule)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawPolygonERK8QPolygonN2Qt8FillRuleE(void *this_, QPolygon* polygon, Qt::FillRule fillRule) {
  ((QPainter*)this_)->drawPolygon(*polygon, fillRule);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:333
// [-2] void drawConvexPolygon(const QPointF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17drawConvexPolygonEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPainter*)this_)->drawConvexPolygon(points, pointCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:334
// [-2] void drawConvexPolygon(const QPolygonF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17drawConvexPolygonERK9QPolygonF(void *this_, QPolygonF* polygon) {
  ((QPainter*)this_)->drawConvexPolygon(*polygon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:335
// [-2] void drawConvexPolygon(const QPoint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17drawConvexPolygonEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPainter*)this_)->drawConvexPolygon(points, pointCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:336
// [-2] void drawConvexPolygon(const QPolygon &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17drawConvexPolygonERK8QPolygon(void *this_, QPolygon* polygon) {
  ((QPainter*)this_)->drawConvexPolygon(*polygon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:338
// [-2] void drawArc(const QRectF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7drawArcERK6QRectFii(void *this_, QRectF* rect, int a, int alen) {
  ((QPainter*)this_)->drawArc(*rect, a, alen);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:339
// [-2] void drawArc(const QRect &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7drawArcERK5QRectii(void *this_, QRect* arg0, int a, int alen) {
  ((QPainter*)this_)->drawArc(*arg0, a, alen);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:340
// [-2] void drawArc(int, int, int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7drawArcEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawArc(x, y, w, h, a, alen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:342
// [-2] void drawPie(const QRectF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7drawPieERK6QRectFii(void *this_, QRectF* rect, int a, int alen) {
  ((QPainter*)this_)->drawPie(*rect, a, alen);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:343
// [-2] void drawPie(int, int, int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7drawPieEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawPie(x, y, w, h, a, alen);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:344
// [-2] void drawPie(const QRect &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter7drawPieERK5QRectii(void *this_, QRect* arg0, int a, int alen) {
  ((QPainter*)this_)->drawPie(*arg0, a, alen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:346
// [-2] void drawChord(const QRectF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawChordERK6QRectFii(void *this_, QRectF* rect, int a, int alen) {
  ((QPainter*)this_)->drawChord(*rect, a, alen);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:347
// [-2] void drawChord(int, int, int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawChordEiiiiii(void *this_, int x, int y, int w, int h, int a, int alen) {
  ((QPainter*)this_)->drawChord(x, y, w, h, a, alen);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:348
// [-2] void drawChord(const QRect &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawChordERK5QRectii(void *this_, QRect* arg0, int a, int alen) {
  ((QPainter*)this_)->drawChord(*arg0, a, alen);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainter.h:350
// [-2] void drawRoundedRect(const QRectF &, qreal, qreal, Qt::SizeMode)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter15drawRoundedRectERK6QRectFddN2Qt8SizeModeE(void *this_, QRectF* rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(*rect, xRadius, yRadius, mode);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainter.h:352
// [-2] void drawRoundedRect(int, int, int, int, qreal, qreal, Qt::SizeMode)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter15drawRoundedRectEiiiiddN2Qt8SizeModeE(void *this_, int x, int y, int w, int h, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainter.h:354
// [-2] void drawRoundedRect(const QRect &, qreal, qreal, Qt::SizeMode)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter15drawRoundedRectERK5QRectddN2Qt8SizeModeE(void *this_, QRect* rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainter*)this_)->drawRoundedRect(*rect, xRadius, yRadius, mode);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:357
// [-2] void drawRoundRect(const QRectF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter13drawRoundRectERK6QRectFii(void *this_, QRectF* r, int xround, int yround) {
  ((QPainter*)this_)->drawRoundRect(*r, xround, yround);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:358
// [-2] void drawRoundRect(int, int, int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter13drawRoundRectEiiiiii(void *this_, int x, int y, int w, int h, int arg4, int arg5) {
  ((QPainter*)this_)->drawRoundRect(x, y, w, h, arg4, arg5);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:359
// [-2] void drawRoundRect(const QRect &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter13drawRoundRectERK5QRectii(void *this_, QRect* r, int xround, int yround) {
  ((QPainter*)this_)->drawRoundRect(*r, xround, yround);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:361
// [-2] void drawTiledPixmap(const QRectF &, const QPixmap &, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void *this_, QRectF* rect, QPixmap* pm, QPointF* offset) {
  ((QPainter*)this_)->drawTiledPixmap(*rect, *pm, *offset);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:362
// [-2] void drawTiledPixmap(int, int, int, int, const QPixmap &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter15drawTiledPixmapEiiiiRK7QPixmapii(void *this_, int x, int y, int w, int h, QPixmap* arg4, int sx, int sy) {
  ((QPainter*)this_)->drawTiledPixmap(x, y, w, h, *arg4, sx, sy);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:363
// [-2] void drawTiledPixmap(const QRect &, const QPixmap &, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter15drawTiledPixmapERK5QRectRK7QPixmapRK6QPoint(void *this_, QRect* arg0, QPixmap* arg1, QPoint* arg2) {
  ((QPainter*)this_)->drawTiledPixmap(*arg0, *arg1, *arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:365
// [-2] void drawPicture(const QPointF &, const QPicture &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawPictureERK7QPointFRK8QPicture(void *this_, QPointF* p, QPicture* picture) {
  ((QPainter*)this_)->drawPicture(*p, *picture);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:366
// [-2] void drawPicture(int, int, const QPicture &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawPictureEiiRK8QPicture(void *this_, int x, int y, QPicture* picture) {
  ((QPainter*)this_)->drawPicture(x, y, *picture);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:367
// [-2] void drawPicture(const QPoint &, const QPicture &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter11drawPictureERK6QPointRK8QPicture(void *this_, QPoint* p, QPicture* picture) {
  ((QPainter*)this_)->drawPicture(*p, *picture);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:370
// [-2] void drawPixmap(const QRectF &, const QPixmap &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapERK6QRectFRK7QPixmapS2_(void *this_, QRectF* targetRect, QPixmap* pixmap, QRectF* sourceRect) {
  ((QPainter*)this_)->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:371
// [-2] void drawPixmap(const QRect &, const QPixmap &, const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmapS2_(void *this_, QRect* targetRect, QPixmap* pixmap, QRect* sourceRect) {
  ((QPainter*)this_)->drawPixmap(*targetRect, *pixmap, *sourceRect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:372
// [-2] void drawPixmap(int, int, int, int, const QPixmap &, int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapEiiiiRK7QPixmapiiii(void *this_, int x, int y, int w, int h, QPixmap* pm, int sx, int sy, int sw, int sh) {
  ((QPainter*)this_)->drawPixmap(x, y, w, h, *pm, sx, sy, sw, sh);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:374
// [-2] void drawPixmap(int, int, const QPixmap &, int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapEiiRK7QPixmapiiii(void *this_, int x, int y, QPixmap* pm, int sx, int sy, int sw, int sh) {
  ((QPainter*)this_)->drawPixmap(x, y, *pm, sx, sy, sw, sh);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:376
// [-2] void drawPixmap(const QPointF &, const QPixmap &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmapRK6QRectF(void *this_, QPointF* p, QPixmap* pm, QRectF* sr) {
  ((QPainter*)this_)->drawPixmap(*p, *pm, *sr);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:377
// [-2] void drawPixmap(const QPoint &, const QPixmap &, const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmapRK5QRect(void *this_, QPoint* p, QPixmap* pm, QRect* sr) {
  ((QPainter*)this_)->drawPixmap(*p, *pm, *sr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:378
// [-2] void drawPixmap(const QPointF &, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapERK7QPointFRK7QPixmap(void *this_, QPointF* p, QPixmap* pm) {
  ((QPainter*)this_)->drawPixmap(*p, *pm);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:379
// [-2] void drawPixmap(const QPoint &, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapERK6QPointRK7QPixmap(void *this_, QPoint* p, QPixmap* pm) {
  ((QPainter*)this_)->drawPixmap(*p, *pm);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:380
// [-2] void drawPixmap(int, int, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapEiiRK7QPixmap(void *this_, int x, int y, QPixmap* pm) {
  ((QPainter*)this_)->drawPixmap(x, y, *pm);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:381
// [-2] void drawPixmap(const QRect &, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapERK5QRectRK7QPixmap(void *this_, QRect* r, QPixmap* pm) {
  ((QPainter*)this_)->drawPixmap(*r, *pm);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:382
// [-2] void drawPixmap(int, int, int, int, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter10drawPixmapEiiiiRK7QPixmap(void *this_, int x, int y, int w, int h, QPixmap* pm) {
  ((QPainter*)this_)->drawPixmap(x, y, w, h, *pm);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qpainter.h:384
// [-2] void drawPixmapFragments(const QPainter::PixmapFragment *, int, const QPixmap &, QPainter::PixmapFragmentHints)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter19drawPixmapFragmentsEPKNS_14PixmapFragmentEiRK7QPixmap6QFlagsINS_18PixmapFragmentHintEE(void *this_, const QPainter::PixmapFragment * fragments, int fragmentCount, QPixmap* pixmap, QFlags<QPainter::PixmapFragmentHint> hints) {
  ((QPainter*)this_)->drawPixmapFragments(fragments, fragmentCount, *pixmap, hints);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:387
// [-2] void drawImage(const QRectF &, const QImage &, const QRectF &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QRectF* targetRect, QImage* image, QRectF* sourceRect, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(*targetRect, *image, *sourceRect, flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:389
// [-2] void drawImage(const QRect &, const QImage &, const QRect &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK5QRectRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QRect* targetRect, QImage* image, QRect* sourceRect, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(*targetRect, *image, *sourceRect, flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:391
// [-2] void drawImage(const QPointF &, const QImage &, const QRectF &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK7QPointFRK6QImageRK6QRectF6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QPointF* p, QImage* image, QRectF* sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(*p, *image, *sr, flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:393
// [-2] void drawImage(const QPoint &, const QImage &, const QRect &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK6QPointRK6QImageRK5QRect6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QPoint* p, QImage* image, QRect* sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(*p, *image, *sr, flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:395
// [-2] void drawImage(const QRectF &, const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK6QRectFRK6QImage(void *this_, QRectF* r, QImage* image) {
  ((QPainter*)this_)->drawImage(*r, *image);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:396
// [-2] void drawImage(const QRect &, const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK5QRectRK6QImage(void *this_, QRect* r, QImage* image) {
  ((QPainter*)this_)->drawImage(*r, *image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:397
// [-2] void drawImage(const QPointF &, const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK7QPointFRK6QImage(void *this_, QPointF* p, QImage* image) {
  ((QPainter*)this_)->drawImage(*p, *image);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:398
// [-2] void drawImage(const QPoint &, const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageERK6QPointRK6QImage(void *this_, QPoint* p, QImage* image) {
  ((QPainter*)this_)->drawImage(*p, *image);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:399
// [-2] void drawImage(int, int, const QImage &, int, int, int, int, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9drawImageEiiRK6QImageiiii6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, int x, int y, QImage* image, int sx, int sy, int sw, int sh, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPainter*)this_)->drawImage(x, y, *image, sx, sy, sw, sh, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:402
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter18setLayoutDirectionEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QPainter*)this_)->setLayoutDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:403
// [4] Qt::LayoutDirection layoutDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZNK8QPainter15layoutDirectionEv(void *this_) {
  return (Qt::LayoutDirection)((QPainter*)this_)->layoutDirection();
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpainter.h:406
// [-2] void drawGlyphRun(const QPointF &, const QGlyphRun &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawGlyphRunERK7QPointFRK9QGlyphRun(void *this_, QPointF* position, QGlyphRun* glyphRun) {
  ((QPainter*)this_)->drawGlyphRun(*position, *glyphRun);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qpainter.h:409
// [-2] void drawStaticText(const QPointF &, const QStaticText &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14drawStaticTextERK7QPointFRK11QStaticText(void *this_, QPointF* topLeftPosition, QStaticText* staticText) {
  ((QPainter*)this_)->drawStaticText(*topLeftPosition, *staticText);
}
#endif // QT_VERSION >= 0x040700

// Public inline Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qpainter.h:410
// [-2] void drawStaticText(const QPoint &, const QStaticText &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14drawStaticTextERK6QPointRK11QStaticText(void *this_, QPoint* topLeftPosition, QStaticText* staticText) {
  ((QPainter*)this_)->drawStaticText(*topLeftPosition, *staticText);
}
#endif // QT_VERSION >= 0x040700

// Public inline Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtGui/qpainter.h:411
// [-2] void drawStaticText(int, int, const QStaticText &)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14drawStaticTextEiiRK11QStaticText(void *this_, int left, int top, QStaticText* staticText) {
  ((QPainter*)this_)->drawStaticText(left, top, *staticText);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:413
// [-2] void drawText(const QPointF &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextERK7QPointFRK7QString(void *this_, QPointF* p, QString* s) {
  ((QPainter*)this_)->drawText(*p, *s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:414
// [-2] void drawText(const QPoint &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextERK6QPointRK7QString(void *this_, QPoint* p, QString* s) {
  ((QPainter*)this_)->drawText(*p, *s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:415
// [-2] void drawText(int, int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextEiiRK7QString(void *this_, int x, int y, QString* s) {
  ((QPainter*)this_)->drawText(x, y, *s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:417
// [-2] void drawText(const QPointF &, const QString &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextERK7QPointFRK7QStringii(void *this_, QPointF* p, QString* str, int tf, int justificationPadding) {
  ((QPainter*)this_)->drawText(*p, *str, tf, justificationPadding);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:419
// [-2] void drawText(const QRectF &, int, const QString &, QRectF *)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextERK6QRectFiRK7QStringPS0_(void *this_, QRectF* r, int flags, QString* text, QRectF * br) {
  ((QPainter*)this_)->drawText(*r, flags, *text, br);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:420
// [-2] void drawText(const QRect &, int, const QString &, QRect *)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextERK5QRectiRK7QStringPS0_(void *this_, QRect* r, int flags, QString* text, QRect * br) {
  ((QPainter*)this_)->drawText(*r, flags, *text, br);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:421
// [-2] void drawText(int, int, int, int, int, const QString &, QRect *)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextEiiiiiRK7QStringP5QRect(void *this_, int x, int y, int w, int h, int flags, QString* text, QRect * br) {
  ((QPainter*)this_)->drawText(x, y, w, h, flags, *text, br);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:423
// [-2] void drawText(const QRectF &, const QString &, const QTextOption &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8drawTextERK6QRectFRK7QStringRK11QTextOption(void *this_, QRectF* r, QString* text, QTextOption* o) {
  ((QPainter*)this_)->drawText(*r, *text, *o);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:425
// [32] QRectF boundingRect(const QRectF &, int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPainter12boundingRectERK6QRectFiRK7QString(void *this_, QRectF* rect, int flags, QString* text) {
  auto rv = ((QPainter*)this_)->boundingRect(*rect, flags, *text);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:426
// [16] QRect boundingRect(const QRect &, int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPainter12boundingRectERK5QRectiRK7QString(void *this_, QRect* rect, int flags, QString* text) {
  auto rv = ((QPainter*)this_)->boundingRect(*rect, flags, *text);
return new QRect(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:427
// [16] QRect boundingRect(int, int, int, int, int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPainter12boundingRectEiiiiiRK7QString(void *this_, int x, int y, int w, int h, int flags, QString* text) {
  auto rv = ((QPainter*)this_)->boundingRect(x, y, w, h, flags, *text);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:429
// [32] QRectF boundingRect(const QRectF &, const QString &, const QTextOption &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPainter12boundingRectERK6QRectFRK7QStringRK11QTextOption(void *this_, QRectF* rect, QString* text, QTextOption* o) {
  auto rv = ((QPainter*)this_)->boundingRect(*rect, *text, *o);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:431
// [-2] void drawTextItem(const QPointF &, const QTextItem &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawTextItemERK7QPointFRK9QTextItem(void *this_, QPointF* p, QTextItem* ti) {
  ((QPainter*)this_)->drawTextItem(*p, *ti);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:432
// [-2] void drawTextItem(int, int, const QTextItem &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawTextItemEiiRK9QTextItem(void *this_, int x, int y, QTextItem* ti) {
  ((QPainter*)this_)->drawTextItem(x, y, *ti);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:433
// [-2] void drawTextItem(const QPoint &, const QTextItem &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter12drawTextItemERK6QPointRK9QTextItem(void *this_, QPoint* p, QTextItem* ti) {
  ((QPainter*)this_)->drawTextItem(*p, *ti);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:435
// [-2] void fillRect(const QRectF &, const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK6QRectFRK6QBrush(void *this_, QRectF* arg0, QBrush* arg1) {
  ((QPainter*)this_)->fillRect(*arg0, *arg1);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:436
// [-2] void fillRect(int, int, int, int, const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectEiiiiRK6QBrush(void *this_, int x, int y, int w, int h, QBrush* arg4) {
  ((QPainter*)this_)->fillRect(x, y, w, h, *arg4);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:437
// [-2] void fillRect(const QRect &, const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK5QRectRK6QBrush(void *this_, QRect* arg0, QBrush* arg1) {
  ((QPainter*)this_)->fillRect(*arg0, *arg1);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:439
// [-2] void fillRect(const QRectF &, const QColor &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK6QRectFRK6QColor(void *this_, QRectF* arg0, QColor* color) {
  ((QPainter*)this_)->fillRect(*arg0, *color);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:440
// [-2] void fillRect(int, int, int, int, const QColor &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectEiiiiRK6QColor(void *this_, int x, int y, int w, int h, QColor* color) {
  ((QPainter*)this_)->fillRect(x, y, w, h, *color);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:441
// [-2] void fillRect(const QRect &, const QColor &)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK5QRectRK6QColor(void *this_, QRect* arg0, QColor* color) {
  ((QPainter*)this_)->fillRect(*arg0, *color);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:443
// [-2] void fillRect(int, int, int, int, Qt::GlobalColor)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectEiiiiN2Qt11GlobalColorE(void *this_, int x, int y, int w, int h, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(x, y, w, h, c);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:444
// [-2] void fillRect(const QRect &, Qt::GlobalColor)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK5QRectN2Qt11GlobalColorE(void *this_, QRect* r, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(*r, c);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:445
// [-2] void fillRect(const QRectF &, Qt::GlobalColor)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK6QRectFN2Qt11GlobalColorE(void *this_, QRectF* r, Qt::GlobalColor c) {
  ((QPainter*)this_)->fillRect(*r, c);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:447
// [-2] void fillRect(int, int, int, int, Qt::BrushStyle)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectEiiiiN2Qt10BrushStyleE(void *this_, int x, int y, int w, int h, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(x, y, w, h, style);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:448
// [-2] void fillRect(const QRect &, Qt::BrushStyle)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK5QRectN2Qt10BrushStyleE(void *this_, QRect* r, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(*r, style);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qpainter.h:449
// [-2] void fillRect(const QRectF &, Qt::BrushStyle)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK6QRectFN2Qt10BrushStyleE(void *this_, QRectF* r, Qt::BrushStyle style) {
  ((QPainter*)this_)->fillRect(*r, style);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qpainter.h:451
// [-2] void fillRect(int, int, int, int, QGradient::Preset)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectEiiiiN9QGradient6PresetE(void *this_, int x, int y, int w, int h, QGradient::Preset preset) {
  ((QPainter*)this_)->fillRect(x, y, w, h, preset);
}
#endif // QT_VERSION >= 0x050c00

// Public inline Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qpainter.h:452
// [-2] void fillRect(const QRect &, QGradient::Preset)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK5QRectN9QGradient6PresetE(void *this_, QRect* r, QGradient::Preset preset) {
  ((QPainter*)this_)->fillRect(*r, preset);
}
#endif // QT_VERSION >= 0x050c00

// Public inline Visibility=Default Availability=Available
// since 5.12
// /usr/include/qt/QtGui/qpainter.h:453
// [-2] void fillRect(const QRectF &, QGradient::Preset)
#if QT_VERSION >= 0x050c00
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter8fillRectERK6QRectFN9QGradient6PresetE(void *this_, QRectF* r, QGradient::Preset preset) {
  ((QPainter*)this_)->fillRect(*r, preset);
}
#endif // QT_VERSION >= 0x050c00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:455
// [-2] void eraseRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9eraseRectERK6QRectF(void *this_, QRectF* arg0) {
  ((QPainter*)this_)->eraseRect(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:456
// [-2] void eraseRect(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9eraseRectEiiii(void *this_, int x, int y, int w, int h) {
  ((QPainter*)this_)->eraseRect(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:457
// [-2] void eraseRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter9eraseRectERK5QRect(void *this_, QRect* arg0) {
  ((QPainter*)this_)->eraseRect(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:459
// [-2] void setRenderHint(QPainter::RenderHint, bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter13setRenderHintENS_10RenderHintEb(void *this_, QPainter::RenderHint hint, bool on) {
  ((QPainter*)this_)->setRenderHint(hint, on);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainter.h:460
// [-2] void setRenderHints(QPainter::RenderHints, bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter14setRenderHintsE6QFlagsINS_10RenderHintEEb(void *this_, QFlags<QPainter::RenderHint> hints, bool on) {
  ((QPainter*)this_)->setRenderHints(hints, on);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:461
// [4] QPainter::RenderHints renderHints()
extern "C" Q_DECL_EXPORT
QPainter::RenderHints* C_ZNK8QPainter11renderHintsEv(void *this_) {
  auto rv = ((QPainter*)this_)->renderHints();
return new QPainter::RenderHints(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpainter.h:462
// [1] bool testRenderHint(QPainter::RenderHint)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPainter14testRenderHintENS_10RenderHintE(void *this_, QPainter::RenderHint hint) {
  return (bool)((QPainter*)this_)->testRenderHint(hint);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:464
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPainter11paintEngineEv(void *this_) {
  return (void*)((QPainter*)this_)->paintEngine();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:466
// [-2] void setRedirected(const QPaintDevice *, QPaintDevice *, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter13setRedirectedEPK12QPaintDevicePS0_RK6QPoint(const QPaintDevice * device, QPaintDevice * replacement, QPoint* offset) {
  QPainter::setRedirected(device, replacement, *offset);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:468
// [8] QPaintDevice * redirected(const QPaintDevice *, QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPainter10redirectedEPK12QPaintDeviceP6QPoint(const QPaintDevice * device, QPoint * offset) {
  return (void*)QPainter::redirected(device, offset);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:469
// [-2] void restoreRedirected(const QPaintDevice *)
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17restoreRedirectedEPK12QPaintDevice(const QPaintDevice * device) {
  QPainter::restoreRedirected(device);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpainter.h:471
// [-2] void beginNativePainting()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter19beginNativePaintingEv(void *this_) {
  ((QPainter*)this_)->beginNativePainting();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpainter.h:472
// [-2] void endNativePainting()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN8QPainter17endNativePaintingEv(void *this_) {
  ((QPainter*)this_)->endNativePainting();
}
#endif // QT_VERSION >= 0x040600

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
