//  header block begin
// /usr/include/qt/QtGui/qpainterpath.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpainterpath.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainterPath is pure virtual: false
// QPainterPath has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPainterPath_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPainterPath_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPainterPath_t qt_meta_stringdata_MyQPainterPath = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQPainterPath"
  },
  "MyQPainterPath"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPainterPath[] = {
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
class Q_DECL_EXPORT MyQPainterPath : public QPainterPath {
public:
  virtual ~MyQPainterPath() {}
// void QPainterPath()
MyQPainterPath() : QPainterPath() {}
// void QPainterPath(const QPointF &)
MyQPainterPath(const QPointF & startPoint) : QPainterPath(startPoint) {}
// void QPainterPath(const QPainterPath &)
MyQPainterPath(const QPainterPath & other) : QPainterPath(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:91
// [-2] void QPainterPath()
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathC2Ev() {
  return  new QPainterPath();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:92
// [-2] void QPainterPath(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathC2ERK7QPointF(QPointF* startPoint) {
  return  new QPainterPath(*startPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:93
// [-2] void QPainterPath(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathC2ERKS_(QPainterPath* other) {
  return  new QPainterPath(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:94
// [8] QPainterPath & operator=(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathaSERKS_(void *this_, QPainterPath* other) {
  auto& rv = ((QPainterPath*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:96
// [8] QPainterPath & operator=(QPainterPath &&)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathaSEOS_(void *this_, QPainterPath && other) {
  auto& rv = ((QPainterPath*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:99
// [-2] void ~QPainterPath()
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPathD2Ev(void *this_) {
  delete (QPainterPath*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpainterpath.h:100
// [-2] void swap(QPainterPath &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath4swapERS_(void *this_, QPainterPath* other) {
  ((QPainterPath*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:102
// [-2] void closeSubpath()
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath12closeSubpathEv(void *this_) {
  ((QPainterPath*)this_)->closeSubpath();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:104
// [-2] void moveTo(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath6moveToERK7QPointF(void *this_, QPointF* p) {
  ((QPainterPath*)this_)->moveTo(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:105
// [-2] void moveTo(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath6moveToEdd(void *this_, qreal x, qreal y) {
  ((QPainterPath*)this_)->moveTo(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:107
// [-2] void lineTo(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath6lineToERK7QPointF(void *this_, QPointF* p) {
  ((QPainterPath*)this_)->lineTo(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:108
// [-2] void lineTo(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath6lineToEdd(void *this_, qreal x, qreal y) {
  ((QPainterPath*)this_)->lineTo(x, y);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainterpath.h:110
// [-2] void arcMoveTo(const QRectF &, qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath9arcMoveToERK6QRectFd(void *this_, QRectF* rect, qreal angle) {
  ((QPainterPath*)this_)->arcMoveTo(*rect, angle);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainterpath.h:111
// [-2] void arcMoveTo(qreal, qreal, qreal, qreal, qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath9arcMoveToEddddd(void *this_, qreal x, qreal y, qreal w, qreal h, qreal angle) {
  ((QPainterPath*)this_)->arcMoveTo(x, y, w, h, angle);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:113
// [-2] void arcTo(const QRectF &, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath5arcToERK6QRectFdd(void *this_, QRectF* rect, qreal startAngle, qreal arcLength) {
  ((QPainterPath*)this_)->arcTo(*rect, startAngle, arcLength);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:114
// [-2] void arcTo(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath5arcToEdddddd(void *this_, qreal x, qreal y, qreal w, qreal h, qreal startAngle, qreal arcLength) {
  ((QPainterPath*)this_)->arcTo(x, y, w, h, startAngle, arcLength);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:116
// [-2] void cubicTo(const QPointF &, const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath7cubicToERK7QPointFS2_S2_(void *this_, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt) {
  ((QPainterPath*)this_)->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:117
// [-2] void cubicTo(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath7cubicToEdddddd(void *this_, qreal ctrlPt1x, qreal ctrlPt1y, qreal ctrlPt2x, qreal ctrlPt2y, qreal endPtx, qreal endPty) {
  ((QPainterPath*)this_)->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:119
// [-2] void quadTo(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath6quadToERK7QPointFS2_(void *this_, QPointF* ctrlPt, QPointF* endPt) {
  ((QPainterPath*)this_)->quadTo(*ctrlPt, *endPt);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:120
// [-2] void quadTo(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath6quadToEdddd(void *this_, qreal ctrlPtx, qreal ctrlPty, qreal endPtx, qreal endPty) {
  ((QPainterPath*)this_)->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:122
// [16] QPointF currentPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath15currentPositionEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->currentPosition();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:124
// [-2] void addRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath7addRectERK6QRectF(void *this_, QRectF* rect) {
  ((QPainterPath*)this_)->addRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:125
// [-2] void addRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath7addRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QPainterPath*)this_)->addRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:126
// [-2] void addEllipse(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath10addEllipseERK6QRectF(void *this_, QRectF* rect) {
  ((QPainterPath*)this_)->addEllipse(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:127
// [-2] void addEllipse(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath10addEllipseEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QPainterPath*)this_)->addEllipse(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainterpath.h:128
// [-2] void addEllipse(const QPointF &, qreal, qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath10addEllipseERK7QPointFdd(void *this_, QPointF* center, qreal rx, qreal ry) {
  ((QPainterPath*)this_)->addEllipse(*center, rx, ry);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:129
// [-2] void addPolygon(const QPolygonF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath10addPolygonERK9QPolygonF(void *this_, QPolygonF* polygon) {
  ((QPainterPath*)this_)->addPolygon(*polygon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:130
// [-2] void addText(const QPointF &, const QFont &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath7addTextERK7QPointFRK5QFontRK7QString(void *this_, QPointF* point, QFont* f, QString* text) {
  ((QPainterPath*)this_)->addText(*point, *f, *text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:131
// [-2] void addText(qreal, qreal, const QFont &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath7addTextEddRK5QFontRK7QString(void *this_, qreal x, qreal y, QFont* f, QString* text) {
  ((QPainterPath*)this_)->addText(x, y, *f, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:132
// [-2] void addPath(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath7addPathERKS_(void *this_, QPainterPath* path) {
  ((QPainterPath*)this_)->addPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:133
// [-2] void addRegion(const QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath9addRegionERK7QRegion(void *this_, QRegion* region) {
  ((QPainterPath*)this_)->addRegion(*region);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainterpath.h:135
// [-2] void addRoundedRect(const QRectF &, qreal, qreal, Qt::SizeMode)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath14addRoundedRectERK6QRectFddN2Qt8SizeModeE(void *this_, QRectF* rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainterPath*)this_)->addRoundedRect(*rect, xRadius, yRadius, mode);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainterpath.h:137
// [-2] void addRoundedRect(qreal, qreal, qreal, qreal, qreal, qreal, Qt::SizeMode)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath14addRoundedRectEddddddN2Qt8SizeModeE(void *this_, qreal x, qreal y, qreal w, qreal h, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainterPath*)this_)->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:141
// [-2] void addRoundRect(const QRectF &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath12addRoundRectERK6QRectFii(void *this_, QRectF* rect, int xRnd, int yRnd) {
  ((QPainterPath*)this_)->addRoundRect(*rect, xRnd, yRnd);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:142
// [-2] void addRoundRect(qreal, qreal, qreal, qreal, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath12addRoundRectEddddii(void *this_, qreal x, qreal y, qreal w, qreal h, int xRnd, int yRnd) {
  ((QPainterPath*)this_)->addRoundRect(x, y, w, h, xRnd, yRnd);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:144
// [-2] void addRoundRect(const QRectF &, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath12addRoundRectERK6QRectFi(void *this_, QRectF* rect, int roundness) {
  ((QPainterPath*)this_)->addRoundRect(*rect, roundness);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:145
// [-2] void addRoundRect(qreal, qreal, qreal, qreal, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath12addRoundRectEddddi(void *this_, qreal x, qreal y, qreal w, qreal h, int roundness) {
  ((QPainterPath*)this_)->addRoundRect(x, y, w, h, roundness);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:148
// [-2] void connectPath(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath11connectPathERKS_(void *this_, QPainterPath* path) {
  ((QPainterPath*)this_)->connectPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:150
// [1] bool contains(const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPath8containsERK7QPointF(void *this_, QPointF* pt) {
  return (bool)((QPainterPath*)this_)->contains(*pt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:151
// [1] bool contains(const QRectF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPath8containsERK6QRectF(void *this_, QRectF* rect) {
  return (bool)((QPainterPath*)this_)->contains(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:152
// [1] bool intersects(const QRectF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPath10intersectsERK6QRectF(void *this_, QRectF* rect) {
  return (bool)((QPainterPath*)this_)->intersects(*rect);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpainterpath.h:154
// [-2] void translate(qreal, qreal)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPainterPath*)this_)->translate(dx, dy);
}
#endif // QT_VERSION >= 0x040600

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpainterpath.h:155
// [-2] void translate(const QPointF &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath9translateERK7QPointF(void *this_, QPointF* offset) {
  ((QPainterPath*)this_)->translate(*offset);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpainterpath.h:157
// [8] QPainterPath translated(qreal, qreal)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath10translatedEdd(void *this_, qreal dx, qreal dy) {
  auto rv = ((QPainterPath*)this_)->translated(dx, dy);
return new QPainterPath(rv);
}
#endif // QT_VERSION >= 0x040600

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpainterpath.h:158
// [8] QPainterPath translated(const QPointF &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath10translatedERK7QPointF(void *this_, QPointF* offset) {
  auto rv = ((QPainterPath*)this_)->translated(*offset);
return new QPainterPath(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:160
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath12boundingRectEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->boundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:161
// [32] QRectF controlPointRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath16controlPointRectEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->controlPointRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:163
// [4] Qt::FillRule fillRule()
extern "C" Q_DECL_EXPORT
Qt::FillRule C_ZNK12QPainterPath8fillRuleEv(void *this_) {
  return (Qt::FillRule)((QPainterPath*)this_)->fillRule();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:164
// [-2] void setFillRule(Qt::FillRule)
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath11setFillRuleEN2Qt8FillRuleE(void *this_, Qt::FillRule fillRule) {
  ((QPainterPath*)this_)->setFillRule(fillRule);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:166
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPath7isEmptyEv(void *this_) {
  return (bool)((QPainterPath*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:168
// [8] QPainterPath toReversed()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath10toReversedEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->toReversed();
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:169
// [-2] QList<QPolygonF> toSubpathPolygons(const QMatrix &)
extern "C" Q_DECL_EXPORT
QList<QPolygonF>* C_ZNK12QPainterPath17toSubpathPolygonsERK7QMatrix(void *this_, QMatrix* matrix) {
  auto rv = ((QPainterPath*)this_)->toSubpathPolygons(*matrix);
return new QList<QPolygonF>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:170
// [-2] QList<QPolygonF> toFillPolygons(const QMatrix &)
extern "C" Q_DECL_EXPORT
QList<QPolygonF>* C_ZNK12QPainterPath14toFillPolygonsERK7QMatrix(void *this_, QMatrix* matrix) {
  auto rv = ((QPainterPath*)this_)->toFillPolygons(*matrix);
return new QList<QPolygonF>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:171
// [8] QPolygonF toFillPolygon(const QMatrix &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath13toFillPolygonERK7QMatrix(void *this_, QMatrix* matrix) {
  auto rv = ((QPainterPath*)this_)->toFillPolygon(*matrix);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:172
// [-2] QList<QPolygonF> toSubpathPolygons(const QTransform &)
extern "C" Q_DECL_EXPORT
QList<QPolygonF>* C_ZNK12QPainterPath17toSubpathPolygonsERK10QTransform(void *this_, QTransform* matrix) {
  auto rv = ((QPainterPath*)this_)->toSubpathPolygons(*matrix);
return new QList<QPolygonF>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:173
// [-2] QList<QPolygonF> toFillPolygons(const QTransform &)
extern "C" Q_DECL_EXPORT
QList<QPolygonF>* C_ZNK12QPainterPath14toFillPolygonsERK10QTransform(void *this_, QTransform* matrix) {
  auto rv = ((QPainterPath*)this_)->toFillPolygons(*matrix);
return new QList<QPolygonF>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:174
// [8] QPolygonF toFillPolygon(const QTransform &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath13toFillPolygonERK10QTransform(void *this_, QTransform* matrix) {
  auto rv = ((QPainterPath*)this_)->toFillPolygon(*matrix);
return new QPolygonF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:176
// [4] int elementCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPainterPath12elementCountEv(void *this_) {
  return (int)((QPainterPath*)this_)->elementCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:177
// [24] QPainterPath::Element elementAt(int)
extern "C" Q_DECL_EXPORT
QPainterPath::Element C_ZNK12QPainterPath9elementAtEi(void *this_, int i) {
  return (QPainterPath::Element)((QPainterPath*)this_)->elementAt(i);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qpainterpath.h:178
// [-2] void setElementPositionAt(int, qreal, qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN12QPainterPath20setElementPositionAtEidd(void *this_, int i, qreal x, qreal y) {
  ((QPainterPath*)this_)->setElementPositionAt(i, x, y);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:180
// [8] qreal length()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QPainterPath6lengthEv(void *this_) {
  return (qreal)((QPainterPath*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:181
// [8] qreal percentAtLength(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QPainterPath15percentAtLengthEd(void *this_, qreal t) {
  return (qreal)((QPainterPath*)this_)->percentAtLength(t);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:182
// [16] QPointF pointAtPercent(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath14pointAtPercentEd(void *this_, qreal t) {
  auto rv = ((QPainterPath*)this_)->pointAtPercent(t);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:183
// [8] qreal angleAtPercent(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QPainterPath14angleAtPercentEd(void *this_, qreal t) {
  return (qreal)((QPainterPath*)this_)->angleAtPercent(t);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:184
// [8] qreal slopeAtPercent(qreal)
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QPainterPath14slopeAtPercentEd(void *this_, qreal t) {
  return (qreal)((QPainterPath*)this_)->slopeAtPercent(t);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpainterpath.h:186
// [1] bool intersects(const QPainterPath &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPath10intersectsERKS_(void *this_, QPainterPath* p) {
  return (bool)((QPainterPath*)this_)->intersects(*p);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpainterpath.h:187
// [1] bool contains(const QPainterPath &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPath8containsERKS_(void *this_, QPainterPath* p) {
  return (bool)((QPainterPath*)this_)->contains(*p);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpainterpath.h:188
// [8] QPainterPath united(const QPainterPath &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath6unitedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->united(*r);
return new QPainterPath(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpainterpath.h:189
// [8] QPainterPath intersected(const QPainterPath &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath11intersectedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->intersected(*r);
return new QPainterPath(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpainterpath.h:190
// [8] QPainterPath subtracted(const QPainterPath &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath10subtractedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->subtracted(*r);
return new QPainterPath(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:191
// [8] QPainterPath subtractedInverted(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath18subtractedInvertedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->subtractedInverted(*r);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qpainterpath.h:193
// [8] QPainterPath simplified()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPath10simplifiedEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->simplified();
return new QPainterPath(rv);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:195
// [1] bool operator==(const QPainterPath &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPatheqERKS_(void *this_, QPainterPath* other) {
  return (bool)((QPainterPath*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:196
// [1] bool operator!=(const QPainterPath &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPainterPathneERKS_(void *this_, QPainterPath* other) {
  return (bool)((QPainterPath*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:198
// [8] QPainterPath operator&(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPathanERKS_(void *this_, QPainterPath* other) {
  auto rv = ((QPainterPath*)this_)->operator&(*other);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:199
// [8] QPainterPath operator|(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPathorERKS_(void *this_, QPainterPath* other) {
  auto rv = ((QPainterPath*)this_)->operator|(*other);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:200
// [8] QPainterPath operator+(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPathplERKS_(void *this_, QPainterPath* other) {
  auto rv = ((QPainterPath*)this_)->operator+(*other);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:201
// [8] QPainterPath operator-(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPainterPathmiERKS_(void *this_, QPainterPath* other) {
  auto rv = ((QPainterPath*)this_)->operator-(*other);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:202
// [8] QPainterPath & operator&=(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathaNERKS_(void *this_, QPainterPath* other) {
  auto& rv = ((QPainterPath*)this_)->operator&=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:203
// [8] QPainterPath & operator|=(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathoRERKS_(void *this_, QPainterPath* other) {
  auto& rv = ((QPainterPath*)this_)->operator|=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:204
// [8] QPainterPath & operator+=(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathpLERKS_(void *this_, QPainterPath* other) {
  auto& rv = ((QPainterPath*)this_)->operator+=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:205
// [8] QPainterPath & operator-=(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPainterPathmIERKS_(void *this_, QPainterPath* other) {
  auto& rv = ((QPainterPath*)this_)->operator-=(*other);
return &rv;
}

//  main block end
