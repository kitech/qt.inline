//  header block begin
// /usr/include/qt/QtGui/qpainterpath.h
#include <qpainterpath.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpainterpath.h:90
// void QPainterPath()
extern "C"
void* C_ZN12QPainterPathC1Ev() {
  return new QPainterPath();
}
// /usr/include/qt/QtGui/qpainterpath.h:91
// void QPainterPath(const class QPointF &)
extern "C"
void* C_ZN12QPainterPathC1ERK7QPointF(const QPointF & startPoint) {
  return new QPainterPath(startPoint);
}
// /usr/include/qt/QtGui/qpainterpath.h:98
// void ~QPainterPath()
extern "C"
void C_ZN12QPainterPathD1Ev(void *this_) {
  delete (QPainterPath*)(this_);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:99
// void swap(class QPainterPath &)
extern "C"
void C_ZN12QPainterPath4swapERS_(void *this_, QPainterPath & other) {
  ((QPainterPath*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qpainterpath.h:101
// void closeSubpath()
extern "C"
void C_ZN12QPainterPath12closeSubpathEv(void *this_) {
  ((QPainterPath*)this_)->closeSubpath();
}
// /usr/include/qt/QtGui/qpainterpath.h:103
// void moveTo(const class QPointF &)
extern "C"
void C_ZN12QPainterPath6moveToERK7QPointF(void *this_, const QPointF & p) {
  ((QPainterPath*)this_)->moveTo(p);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:104
// void moveTo(qreal, qreal)
extern "C"
void C_ZN12QPainterPath6moveToEdd(void *this_, qreal x, qreal y) {
  ((QPainterPath*)this_)->moveTo(x, y);
}
// /usr/include/qt/QtGui/qpainterpath.h:106
// void lineTo(const class QPointF &)
extern "C"
void C_ZN12QPainterPath6lineToERK7QPointF(void *this_, const QPointF & p) {
  ((QPainterPath*)this_)->lineTo(p);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:107
// void lineTo(qreal, qreal)
extern "C"
void C_ZN12QPainterPath6lineToEdd(void *this_, qreal x, qreal y) {
  ((QPainterPath*)this_)->lineTo(x, y);
}
// /usr/include/qt/QtGui/qpainterpath.h:109
// void arcMoveTo(const class QRectF &, qreal)
extern "C"
void C_ZN12QPainterPath9arcMoveToERK6QRectFd(void *this_, const QRectF & rect, qreal angle) {
  ((QPainterPath*)this_)->arcMoveTo(rect, angle);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:110
// void arcMoveTo(qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath9arcMoveToEddddd(void *this_, qreal x, qreal y, qreal w, qreal h, qreal angle) {
  ((QPainterPath*)this_)->arcMoveTo(x, y, w, h, angle);
}
// /usr/include/qt/QtGui/qpainterpath.h:112
// void arcTo(const class QRectF &, qreal, qreal)
extern "C"
void C_ZN12QPainterPath5arcToERK6QRectFdd(void *this_, const QRectF & rect, qreal startAngle, qreal arcLength) {
  ((QPainterPath*)this_)->arcTo(rect, startAngle, arcLength);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:113
// void arcTo(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath5arcToEdddddd(void *this_, qreal x, qreal y, qreal w, qreal h, qreal startAngle, qreal arcLength) {
  ((QPainterPath*)this_)->arcTo(x, y, w, h, startAngle, arcLength);
}
// /usr/include/qt/QtGui/qpainterpath.h:115
// void cubicTo(const class QPointF &, const class QPointF &, const class QPointF &)
extern "C"
void C_ZN12QPainterPath7cubicToERK7QPointFS2_S2_(void *this_, const QPointF & ctrlPt1, const QPointF & ctrlPt2, const QPointF & endPt) {
  ((QPainterPath*)this_)->cubicTo(ctrlPt1, ctrlPt2, endPt);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:116
// void cubicTo(qreal, qreal, qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath7cubicToEdddddd(void *this_, qreal ctrlPt1x, qreal ctrlPt1y, qreal ctrlPt2x, qreal ctrlPt2y, qreal endPtx, qreal endPty) {
  ((QPainterPath*)this_)->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}
// /usr/include/qt/QtGui/qpainterpath.h:118
// void quadTo(const class QPointF &, const class QPointF &)
extern "C"
void C_ZN12QPainterPath6quadToERK7QPointFS2_(void *this_, const QPointF & ctrlPt, const QPointF & endPt) {
  ((QPainterPath*)this_)->quadTo(ctrlPt, endPt);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:119
// void quadTo(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath6quadToEdddd(void *this_, qreal ctrlPtx, qreal ctrlPty, qreal endPtx, qreal endPty) {
  ((QPainterPath*)this_)->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}
// /usr/include/qt/QtGui/qpainterpath.h:121
// QPointF currentPosition()
extern "C"
void C_ZNK12QPainterPath15currentPositionEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->currentPosition();
}
// /usr/include/qt/QtGui/qpainterpath.h:123
// void addRect(const class QRectF &)
extern "C"
void C_ZN12QPainterPath7addRectERK6QRectF(void *this_, const QRectF & rect) {
  ((QPainterPath*)this_)->addRect(rect);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:124
// void addRect(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath7addRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QPainterPath*)this_)->addRect(x, y, w, h);
}
// /usr/include/qt/QtGui/qpainterpath.h:125
// void addEllipse(const class QRectF &)
extern "C"
void C_ZN12QPainterPath10addEllipseERK6QRectF(void *this_, const QRectF & rect) {
  ((QPainterPath*)this_)->addEllipse(rect);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:126
// void addEllipse(qreal, qreal, qreal, qreal)
extern "C"
void C_ZN12QPainterPath10addEllipseEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QPainterPath*)this_)->addEllipse(x, y, w, h);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:127
// void addEllipse(const class QPointF &, qreal, qreal)
extern "C"
void C_ZN12QPainterPath10addEllipseERK7QPointFdd(void *this_, const QPointF & center, qreal rx, qreal ry) {
  ((QPainterPath*)this_)->addEllipse(center, rx, ry);
}
// /usr/include/qt/QtGui/qpainterpath.h:128
// void addPolygon(const class QPolygonF &)
extern "C"
void C_ZN12QPainterPath10addPolygonERK9QPolygonF(void *this_, const QPolygonF & polygon) {
  ((QPainterPath*)this_)->addPolygon(polygon);
}
// /usr/include/qt/QtGui/qpainterpath.h:129
// void addText(const class QPointF &, const class QFont &, const class QString &)
extern "C"
void C_ZN12QPainterPath7addTextERK7QPointFRK5QFontRK7QString(void *this_, const QPointF & point, const QFont & f, const QString & text) {
  ((QPainterPath*)this_)->addText(point, f, text);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:130
// void addText(qreal, qreal, const class QFont &, const class QString &)
extern "C"
void C_ZN12QPainterPath7addTextEddRK5QFontRK7QString(void *this_, qreal x, qreal y, const QFont & f, const QString & text) {
  ((QPainterPath*)this_)->addText(x, y, f, text);
}
// /usr/include/qt/QtGui/qpainterpath.h:131
// void addPath(const class QPainterPath &)
extern "C"
void C_ZN12QPainterPath7addPathERKS_(void *this_, const QPainterPath & path) {
  ((QPainterPath*)this_)->addPath(path);
}
// /usr/include/qt/QtGui/qpainterpath.h:132
// void addRegion(const class QRegion &)
extern "C"
void C_ZN12QPainterPath9addRegionERK7QRegion(void *this_, const QRegion & region) {
  ((QPainterPath*)this_)->addRegion(region);
}
// /usr/include/qt/QtGui/qpainterpath.h:134
// void addRoundedRect(const class QRectF &, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN12QPainterPath14addRoundedRectERK6QRectFddN2Qt8SizeModeE(void *this_, const QRectF & rect, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainterPath*)this_)->addRoundedRect(rect, xRadius, yRadius, mode);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:136
// void addRoundedRect(qreal, qreal, qreal, qreal, qreal, qreal, Qt::SizeMode)
extern "C"
void C_ZN12QPainterPath14addRoundedRectEddddddN2Qt8SizeModeE(void *this_, qreal x, qreal y, qreal w, qreal h, qreal xRadius, qreal yRadius, Qt::SizeMode mode) {
  ((QPainterPath*)this_)->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}
// /usr/include/qt/QtGui/qpainterpath.h:140
// void addRoundRect(const class QRectF &, int, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectERK6QRectFii(void *this_, const QRectF & rect, int xRnd, int yRnd) {
  ((QPainterPath*)this_)->addRoundRect(rect, xRnd, yRnd);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:141
// void addRoundRect(qreal, qreal, qreal, qreal, int, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectEddddii(void *this_, qreal x, qreal y, qreal w, qreal h, int xRnd, int yRnd) {
  ((QPainterPath*)this_)->addRoundRect(x, y, w, h, xRnd, yRnd);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:143
// void addRoundRect(const class QRectF &, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectERK6QRectFi(void *this_, const QRectF & rect, int roundness) {
  ((QPainterPath*)this_)->addRoundRect(rect, roundness);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:144
// void addRoundRect(qreal, qreal, qreal, qreal, int)
extern "C"
void C_ZN12QPainterPath12addRoundRectEddddi(void *this_, qreal x, qreal y, qreal w, qreal h, int roundness) {
  ((QPainterPath*)this_)->addRoundRect(x, y, w, h, roundness);
}
// /usr/include/qt/QtGui/qpainterpath.h:147
// void connectPath(const class QPainterPath &)
extern "C"
void C_ZN12QPainterPath11connectPathERKS_(void *this_, const QPainterPath & path) {
  ((QPainterPath*)this_)->connectPath(path);
}
// /usr/include/qt/QtGui/qpainterpath.h:149
// bool contains(const class QPointF &)
extern "C"
void C_ZNK12QPainterPath8containsERK7QPointF(void *this_, const QPointF & pt) {
  /*return*/ ((QPainterPath*)this_)->contains(pt);
}
// /usr/include/qt/QtGui/qpainterpath.h:150
// bool contains(const class QRectF &)
extern "C"
void C_ZNK12QPainterPath8containsERK6QRectF(void *this_, const QRectF & rect) {
  /*return*/ ((QPainterPath*)this_)->contains(rect);
}
// /usr/include/qt/QtGui/qpainterpath.h:151
// bool intersects(const class QRectF &)
extern "C"
void C_ZNK12QPainterPath10intersectsERK6QRectF(void *this_, const QRectF & rect) {
  /*return*/ ((QPainterPath*)this_)->intersects(rect);
}
// /usr/include/qt/QtGui/qpainterpath.h:153
// void translate(qreal, qreal)
extern "C"
void C_ZN12QPainterPath9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QPainterPath*)this_)->translate(dx, dy);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:154
// void translate(const class QPointF &)
extern "C"
void C_ZN12QPainterPath9translateERK7QPointF(void *this_, const QPointF & offset) {
  ((QPainterPath*)this_)->translate(offset);
}
// /usr/include/qt/QtGui/qpainterpath.h:156
// QPainterPath translated(qreal, qreal)
extern "C"
void C_ZNK12QPainterPath10translatedEdd(void *this_, qreal dx, qreal dy) {
  /*return*/ ((QPainterPath*)this_)->translated(dx, dy);
}
// inline
// /usr/include/qt/QtGui/qpainterpath.h:157
// QPainterPath translated(const class QPointF &)
extern "C"
void C_ZNK12QPainterPath10translatedERK7QPointF(void *this_, const QPointF & offset) {
  /*return*/ ((QPainterPath*)this_)->translated(offset);
}
// /usr/include/qt/QtGui/qpainterpath.h:159
// QRectF boundingRect()
extern "C"
void C_ZNK12QPainterPath12boundingRectEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->boundingRect();
}
// /usr/include/qt/QtGui/qpainterpath.h:160
// QRectF controlPointRect()
extern "C"
void C_ZNK12QPainterPath16controlPointRectEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->controlPointRect();
}
// /usr/include/qt/QtGui/qpainterpath.h:162
// Qt::FillRule fillRule()
extern "C"
void C_ZNK12QPainterPath8fillRuleEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->fillRule();
}
// /usr/include/qt/QtGui/qpainterpath.h:163
// void setFillRule(Qt::FillRule)
extern "C"
void C_ZN12QPainterPath11setFillRuleEN2Qt8FillRuleE(void *this_, Qt::FillRule fillRule) {
  ((QPainterPath*)this_)->setFillRule(fillRule);
}
// /usr/include/qt/QtGui/qpainterpath.h:165
// bool isEmpty()
extern "C"
void C_ZNK12QPainterPath7isEmptyEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->isEmpty();
}
// /usr/include/qt/QtGui/qpainterpath.h:167
// QPainterPath toReversed()
extern "C"
void C_ZNK12QPainterPath10toReversedEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->toReversed();
}
// /usr/include/qt/QtGui/qpainterpath.h:168
// QList<QPolygonF> toSubpathPolygons(const class QMatrix &)
extern "C"
void C_ZNK12QPainterPath17toSubpathPolygonsERK7QMatrix(void *this_, const QMatrix & matrix) {
  /*return*/ ((QPainterPath*)this_)->toSubpathPolygons(matrix);
}
// /usr/include/qt/QtGui/qpainterpath.h:169
// QList<QPolygonF> toFillPolygons(const class QMatrix &)
extern "C"
void C_ZNK12QPainterPath14toFillPolygonsERK7QMatrix(void *this_, const QMatrix & matrix) {
  /*return*/ ((QPainterPath*)this_)->toFillPolygons(matrix);
}
// /usr/include/qt/QtGui/qpainterpath.h:170
// QPolygonF toFillPolygon(const class QMatrix &)
extern "C"
void C_ZNK12QPainterPath13toFillPolygonERK7QMatrix(void *this_, const QMatrix & matrix) {
  /*return*/ ((QPainterPath*)this_)->toFillPolygon(matrix);
}
// /usr/include/qt/QtGui/qpainterpath.h:171
// QList<QPolygonF> toSubpathPolygons(const class QTransform &)
extern "C"
void C_ZNK12QPainterPath17toSubpathPolygonsERK10QTransform(void *this_, const QTransform & matrix) {
  /*return*/ ((QPainterPath*)this_)->toSubpathPolygons(matrix);
}
// /usr/include/qt/QtGui/qpainterpath.h:172
// QList<QPolygonF> toFillPolygons(const class QTransform &)
extern "C"
void C_ZNK12QPainterPath14toFillPolygonsERK10QTransform(void *this_, const QTransform & matrix) {
  /*return*/ ((QPainterPath*)this_)->toFillPolygons(matrix);
}
// /usr/include/qt/QtGui/qpainterpath.h:173
// QPolygonF toFillPolygon(const class QTransform &)
extern "C"
void C_ZNK12QPainterPath13toFillPolygonERK10QTransform(void *this_, const QTransform & matrix) {
  /*return*/ ((QPainterPath*)this_)->toFillPolygon(matrix);
}
// /usr/include/qt/QtGui/qpainterpath.h:175
// int elementCount()
extern "C"
void C_ZNK12QPainterPath12elementCountEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->elementCount();
}
// /usr/include/qt/QtGui/qpainterpath.h:176
// QPainterPath::Element elementAt(int)
extern "C"
void C_ZNK12QPainterPath9elementAtEi(void *this_, int i) {
  /*return*/ ((QPainterPath*)this_)->elementAt(i);
}
// /usr/include/qt/QtGui/qpainterpath.h:177
// void setElementPositionAt(int, qreal, qreal)
extern "C"
void C_ZN12QPainterPath20setElementPositionAtEidd(void *this_, int i, qreal x, qreal y) {
  ((QPainterPath*)this_)->setElementPositionAt(i, x, y);
}
// /usr/include/qt/QtGui/qpainterpath.h:179
// qreal length()
extern "C"
void C_ZNK12QPainterPath6lengthEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->length();
}
// /usr/include/qt/QtGui/qpainterpath.h:180
// qreal percentAtLength(qreal)
extern "C"
void C_ZNK12QPainterPath15percentAtLengthEd(void *this_, qreal t) {
  /*return*/ ((QPainterPath*)this_)->percentAtLength(t);
}
// /usr/include/qt/QtGui/qpainterpath.h:181
// QPointF pointAtPercent(qreal)
extern "C"
void C_ZNK12QPainterPath14pointAtPercentEd(void *this_, qreal t) {
  /*return*/ ((QPainterPath*)this_)->pointAtPercent(t);
}
// /usr/include/qt/QtGui/qpainterpath.h:182
// qreal angleAtPercent(qreal)
extern "C"
void C_ZNK12QPainterPath14angleAtPercentEd(void *this_, qreal t) {
  /*return*/ ((QPainterPath*)this_)->angleAtPercent(t);
}
// /usr/include/qt/QtGui/qpainterpath.h:183
// qreal slopeAtPercent(qreal)
extern "C"
void C_ZNK12QPainterPath14slopeAtPercentEd(void *this_, qreal t) {
  /*return*/ ((QPainterPath*)this_)->slopeAtPercent(t);
}
// /usr/include/qt/QtGui/qpainterpath.h:185
// bool intersects(const class QPainterPath &)
extern "C"
void C_ZNK12QPainterPath10intersectsERKS_(void *this_, const QPainterPath & p) {
  /*return*/ ((QPainterPath*)this_)->intersects(p);
}
// /usr/include/qt/QtGui/qpainterpath.h:186
// bool contains(const class QPainterPath &)
extern "C"
void C_ZNK12QPainterPath8containsERKS_(void *this_, const QPainterPath & p) {
  /*return*/ ((QPainterPath*)this_)->contains(p);
}
// /usr/include/qt/QtGui/qpainterpath.h:187
// QPainterPath united(const class QPainterPath &)
extern "C"
void C_ZNK12QPainterPath6unitedERKS_(void *this_, const QPainterPath & r) {
  /*return*/ ((QPainterPath*)this_)->united(r);
}
// /usr/include/qt/QtGui/qpainterpath.h:188
// QPainterPath intersected(const class QPainterPath &)
extern "C"
void C_ZNK12QPainterPath11intersectedERKS_(void *this_, const QPainterPath & r) {
  /*return*/ ((QPainterPath*)this_)->intersected(r);
}
// /usr/include/qt/QtGui/qpainterpath.h:189
// QPainterPath subtracted(const class QPainterPath &)
extern "C"
void C_ZNK12QPainterPath10subtractedERKS_(void *this_, const QPainterPath & r) {
  /*return*/ ((QPainterPath*)this_)->subtracted(r);
}
// /usr/include/qt/QtGui/qpainterpath.h:190
// QPainterPath subtractedInverted(const class QPainterPath &)
extern "C"
void C_ZNK12QPainterPath18subtractedInvertedERKS_(void *this_, const QPainterPath & r) {
  /*return*/ ((QPainterPath*)this_)->subtractedInverted(r);
}
// /usr/include/qt/QtGui/qpainterpath.h:192
// QPainterPath simplified()
extern "C"
void C_ZNK12QPainterPath10simplifiedEv(void *this_) {
  /*return*/ ((QPainterPath*)this_)->simplified();
}
//  main block end
