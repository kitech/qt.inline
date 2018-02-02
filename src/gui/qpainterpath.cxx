//  header block begin
// /usr/include/qt/QtGui/qpainterpath.h
#include <qpainterpath.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainterPath is pure virtual: false
// QPainterPath has virtual projected: false
//  header block end

//  main block begin

class MyQPainterPath : public QPainterPath {
public:
  virtual ~MyQPainterPath() {}
// void QPainterPath()
MyQPainterPath() : QPainterPath() {}
// void QPainterPath(const class QPointF &)
MyQPainterPath(const QPointF & startPoint) : QPainterPath(startPoint) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:91
// [-2] void QPainterPath()
extern "C"
void* C_ZN12QPainterPathC2Ev() {
  return  new QPainterPath();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:92
// [-2] void QPainterPath(const class QPointF &)
extern "C"
void* C_ZN12QPainterPathC2ERK7QPointF(QPointF* startPoint) {
  return  new QPainterPath(*startPoint);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:99
// [-2] void ~QPainterPath()
extern "C"
void C_ZN12QPainterPathD2Ev(void *this_) {
  delete (QPainterPath*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:100
// [-2] void swap(class QPainterPath &)
extern "C"
void C_ZN12QPainterPath4swapERS_(void *this_, QPainterPath* other) {
  ((QPainterPath*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:102
// [-2] void closeSubpath()
extern "C"
void C_ZN12QPainterPath12closeSubpathEv(void *this_) {
  ((QPainterPath*)this_)->closeSubpath();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:104
// [-2] void moveTo(const class QPointF &)
extern "C"
void C_ZN12QPainterPath6moveToERK7QPointF(void *this_, QPointF* p) {
  ((QPainterPath*)this_)->moveTo(*p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:105
// [-2] void moveTo(qreal, qreal)
extern "C"
void C_ZN12QPainterPath6moveToEdd(void *this_, qreal x, qreal y) {
  ((QPainterPath*)this_)->moveTo(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:107
// [-2] void lineTo(const class QPointF &)
extern "C"
void C_ZN12QPainterPath6lineToERK7QPointF(void *this_, QPointF* p) {
  ((QPainterPath*)this_)->lineTo(*p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:108
// [-2] void lineTo(qreal, qreal)
extern "C"
void C_ZN12QPainterPath6lineToEdd(void *this_, qreal x, qreal y) {
  ((QPainterPath*)this_)->lineTo(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:110
// [-2] void arcMoveTo(const class QRectF &, qreal)
extern "C"
void C_ZN12QPainterPath9arcMoveToERK6QRectFd(void *this_, QRectF* rect, qreal angle) {
  ((QPainterPath*)this_)->arcMoveTo(*rect, angle);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:111
// [-2] void arcMoveTo(qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath9arcMoveToEddddd(void *this_, qreal x, qreal y, qreal w, qreal h, qreal angle) {
  ((QPainterPath*)this_)->arcMoveTo(x, y, w, h, angle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:113
// [-2] void arcTo(const class QRectF &, qreal, qreal)
extern "C"
void C_ZN12QPainterPath5arcToERK6QRectFdd(void *this_, QRectF* rect, qreal startAngle, qreal arcLength) {
  ((QPainterPath*)this_)->arcTo(*rect, startAngle, arcLength);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:114
// [-2] void arcTo(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath5arcToEdddddd(void *this_, qreal x, qreal y, qreal w, qreal h, qreal startAngle, qreal arcLength) {
  ((QPainterPath*)this_)->arcTo(x, y, w, h, startAngle, arcLength);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:116
// [-2] void cubicTo(const class QPointF &, const class QPointF &, const class QPointF &)
extern "C"
void C_ZN12QPainterPath7cubicToERK7QPointFS2_S2_(void *this_, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt) {
  ((QPainterPath*)this_)->cubicTo(*ctrlPt1, *ctrlPt2, *endPt);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:117
// [-2] void cubicTo(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath7cubicToEdddddd(void *this_, qreal ctrlPt1x, qreal ctrlPt1y, qreal ctrlPt2x, qreal ctrlPt2y, qreal endPtx, qreal endPty) {
  ((QPainterPath*)this_)->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:119
// [-2] void quadTo(const class QPointF &, const class QPointF &)
extern "C"
void C_ZN12QPainterPath6quadToERK7QPointFS2_(void *this_, QPointF* ctrlPt, QPointF* endPt) {
  ((QPainterPath*)this_)->quadTo(*ctrlPt, *endPt);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:120
// [-2] void quadTo(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath6quadToEdddd(void *this_, qreal ctrlPtx, qreal ctrlPty, qreal endPtx, qreal endPty) {
  ((QPainterPath*)this_)->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:122
// [16] QPointF currentPosition()
extern "C"
void* C_ZNK12QPainterPath15currentPositionEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->currentPosition();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:124
// [-2] void addRect(const class QRectF &)
extern "C"
void C_ZN12QPainterPath7addRectERK6QRectF(void *this_, QRectF* rect) {
  ((QPainterPath*)this_)->addRect(*rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:125
// [-2] void addRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath7addRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QPainterPath*)this_)->addRect(x, y, w, h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:126
// [-2] void addEllipse(const class QRectF &)
extern "C"
void C_ZN12QPainterPath10addEllipseERK6QRectF(void *this_, QRectF* rect) {
  ((QPainterPath*)this_)->addEllipse(*rect);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:127
// [-2] void addEllipse(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath10addEllipseEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QPainterPath*)this_)->addEllipse(x, y, w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:128
// [-2] void addEllipse(const class QPointF &, qreal, qreal)
extern "C"
void C_ZN12QPainterPath10addEllipseERK7QPointFdd(void *this_, QPointF* center, qreal rx, qreal ry) {
  ((QPainterPath*)this_)->addEllipse(*center, rx, ry);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:129
// [-2] void addPolygon(const class QPolygonF &)
extern "C"
void C_ZN12QPainterPath10addPolygonERK9QPolygonF(void *this_, QPolygonF* polygon) {
  ((QPainterPath*)this_)->addPolygon(*polygon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:130
// [-2] void addText(const class QPointF &, const class QFont &, const class QString &)
extern "C"
void C_ZN12QPainterPath7addTextERK7QPointFRK5QFontRK7QString(void *this_, QPointF* point, QFont* f, QString* text) {
  ((QPainterPath*)this_)->addText(*point, *f, *text);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:131
// [-2] void addText(qreal, qreal, const class QFont &, const class QString &)
extern "C"
void C_ZN12QPainterPath7addTextEddRK5QFontRK7QString(void *this_, qreal x, qreal y, QFont* f, QString* text) {
  ((QPainterPath*)this_)->addText(x, y, *f, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:132
// [-2] void addPath(const class QPainterPath &)
extern "C"
void C_ZN12QPainterPath7addPathERKS_(void *this_, QPainterPath* path) {
  ((QPainterPath*)this_)->addPath(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:133
// [-2] void addRegion(const class QRegion &)
extern "C"
void C_ZN12QPainterPath9addRegionERK7QRegion(void *this_, QRegion* region) {
  ((QPainterPath*)this_)->addRegion(*region);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:135
// [-2] void addRoundedRect(const class QRectF &, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN12QPainterPath14addRoundedRectERK6QRectFddN2Qt8SizeModeE(void *this_, QRectF* rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainterPath*)this_)->addRoundedRect(*rect, xRadius, yRadius, mode);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:137
// [-2] void addRoundedRect(qreal, qreal, qreal, qreal, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN12QPainterPath14addRoundedRectEddddddN2Qt8SizeModeE(void *this_, qreal x, qreal y, qreal w, qreal h, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainterPath*)this_)->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:141
// [-2] void addRoundRect(const class QRectF &, int, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectERK6QRectFii(void *this_, QRectF* rect, int xRnd, int yRnd) {
  ((QPainterPath*)this_)->addRoundRect(*rect, xRnd, yRnd);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:142
// [-2] void addRoundRect(qreal, qreal, qreal, qreal, int, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectEddddii(void *this_, qreal x, qreal y, qreal w, qreal h, int xRnd, int yRnd) {
  ((QPainterPath*)this_)->addRoundRect(x, y, w, h, xRnd, yRnd);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:144
// [-2] void addRoundRect(const class QRectF &, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectERK6QRectFi(void *this_, QRectF* rect, int roundness) {
  ((QPainterPath*)this_)->addRoundRect(*rect, roundness);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:145
// [-2] void addRoundRect(qreal, qreal, qreal, qreal, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectEddddi(void *this_, qreal x, qreal y, qreal w, qreal h, int roundness) {
  ((QPainterPath*)this_)->addRoundRect(x, y, w, h, roundness);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:148
// [-2] void connectPath(const class QPainterPath &)
extern "C"
void C_ZN12QPainterPath11connectPathERKS_(void *this_, QPainterPath* path) {
  ((QPainterPath*)this_)->connectPath(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:150
// [1] bool contains(const class QPointF &)
extern "C"
bool C_ZNK12QPainterPath8containsERK7QPointF(void *this_, QPointF* pt) {
  return (bool)((QPainterPath*)this_)->contains(*pt);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:151
// [1] bool contains(const class QRectF &)
extern "C"
bool C_ZNK12QPainterPath8containsERK6QRectF(void *this_, QRectF* rect) {
  return (bool)((QPainterPath*)this_)->contains(*rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:152
// [1] bool intersects(const class QRectF &)
extern "C"
bool C_ZNK12QPainterPath10intersectsERK6QRectF(void *this_, QRectF* rect) {
  return (bool)((QPainterPath*)this_)->intersects(*rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:154
// [-2] void translate(qreal, qreal)
extern "C"
void C_ZN12QPainterPath9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPainterPath*)this_)->translate(dx, dy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:155
// [-2] void translate(const class QPointF &)
extern "C"
void C_ZN12QPainterPath9translateERK7QPointF(void *this_, QPointF* offset) {
  ((QPainterPath*)this_)->translate(*offset);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:157
// [8] QPainterPath translated(qreal, qreal)
extern "C"
void* C_ZNK12QPainterPath10translatedEdd(void *this_, qreal dx, qreal dy) {
  auto rv = ((QPainterPath*)this_)->translated(dx, dy);
return new QPainterPath(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:158
// [8] QPainterPath translated(const class QPointF &)
extern "C"
void* C_ZNK12QPainterPath10translatedERK7QPointF(void *this_, QPointF* offset) {
  auto rv = ((QPainterPath*)this_)->translated(*offset);
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:160
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK12QPainterPath12boundingRectEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->boundingRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:161
// [32] QRectF controlPointRect()
extern "C"
void* C_ZNK12QPainterPath16controlPointRectEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->controlPointRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:163
// [4] Qt::FillRule fillRule()
extern "C"
Qt::FillRule C_ZNK12QPainterPath8fillRuleEv(void *this_) {
  return (Qt::FillRule)((QPainterPath*)this_)->fillRule();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:164
// [-2] void setFillRule(Qt::FillRule)
extern "C"
void C_ZN12QPainterPath11setFillRuleEN2Qt8FillRuleE(void *this_, Qt::FillRule fillRule) {
  ((QPainterPath*)this_)->setFillRule(fillRule);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:166
// [1] bool isEmpty()
extern "C"
bool C_ZNK12QPainterPath7isEmptyEv(void *this_) {
  return (bool)((QPainterPath*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:168
// [8] QPainterPath toReversed()
extern "C"
void* C_ZNK12QPainterPath10toReversedEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->toReversed();
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:171
// [8] QPolygonF toFillPolygon(const class QMatrix &)
extern "C"
void* C_ZNK12QPainterPath13toFillPolygonERK7QMatrix(void *this_, QMatrix* matrix) {
  auto rv = ((QPainterPath*)this_)->toFillPolygon(*matrix);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:174
// [8] QPolygonF toFillPolygon(const class QTransform &)
extern "C"
void* C_ZNK12QPainterPath13toFillPolygonERK10QTransform(void *this_, QTransform* matrix) {
  auto rv = ((QPainterPath*)this_)->toFillPolygon(*matrix);
return new QPolygonF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:176
// [4] int elementCount()
extern "C"
int C_ZNK12QPainterPath12elementCountEv(void *this_) {
  return (int)((QPainterPath*)this_)->elementCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:177
// [24] QPainterPath::Element elementAt(int)
extern "C"
QPainterPath::Element C_ZNK12QPainterPath9elementAtEi(void *this_, int i) {
  return (QPainterPath::Element)((QPainterPath*)this_)->elementAt(i);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:178
// [-2] void setElementPositionAt(int, qreal, qreal)
extern "C"
void C_ZN12QPainterPath20setElementPositionAtEidd(void *this_, int i, qreal x, qreal y) {
  ((QPainterPath*)this_)->setElementPositionAt(i, x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:180
// [8] qreal length()
extern "C"
qreal C_ZNK12QPainterPath6lengthEv(void *this_) {
  return (qreal)((QPainterPath*)this_)->length();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:181
// [8] qreal percentAtLength(qreal)
extern "C"
qreal C_ZNK12QPainterPath15percentAtLengthEd(void *this_, qreal t) {
  return (qreal)((QPainterPath*)this_)->percentAtLength(t);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:182
// [16] QPointF pointAtPercent(qreal)
extern "C"
void* C_ZNK12QPainterPath14pointAtPercentEd(void *this_, qreal t) {
  auto rv = ((QPainterPath*)this_)->pointAtPercent(t);
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:183
// [8] qreal angleAtPercent(qreal)
extern "C"
qreal C_ZNK12QPainterPath14angleAtPercentEd(void *this_, qreal t) {
  return (qreal)((QPainterPath*)this_)->angleAtPercent(t);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:184
// [8] qreal slopeAtPercent(qreal)
extern "C"
qreal C_ZNK12QPainterPath14slopeAtPercentEd(void *this_, qreal t) {
  return (qreal)((QPainterPath*)this_)->slopeAtPercent(t);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:186
// [1] bool intersects(const class QPainterPath &)
extern "C"
bool C_ZNK12QPainterPath10intersectsERKS_(void *this_, QPainterPath* p) {
  return (bool)((QPainterPath*)this_)->intersects(*p);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:187
// [1] bool contains(const class QPainterPath &)
extern "C"
bool C_ZNK12QPainterPath8containsERKS_(void *this_, QPainterPath* p) {
  return (bool)((QPainterPath*)this_)->contains(*p);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:188
// [8] QPainterPath united(const class QPainterPath &)
extern "C"
void* C_ZNK12QPainterPath6unitedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->united(*r);
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:189
// [8] QPainterPath intersected(const class QPainterPath &)
extern "C"
void* C_ZNK12QPainterPath11intersectedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->intersected(*r);
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:190
// [8] QPainterPath subtracted(const class QPainterPath &)
extern "C"
void* C_ZNK12QPainterPath10subtractedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->subtracted(*r);
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:191
// [8] QPainterPath subtractedInverted(const class QPainterPath &)
extern "C"
void* C_ZNK12QPainterPath18subtractedInvertedERKS_(void *this_, QPainterPath* r) {
  auto rv = ((QPainterPath*)this_)->subtractedInverted(*r);
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:193
// [8] QPainterPath simplified()
extern "C"
void* C_ZNK12QPainterPath10simplifiedEv(void *this_) {
  auto rv = ((QPainterPath*)this_)->simplified();
return new QPainterPath(rv);
}
//  main block end
