//  header block begin
// /usr/include/qt/QtGui/qpainterpath.h
#include <qpainterpath.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qpainterpath.h:245
// void QPainterPathStroker()
extern "C"
void* C_ZN19QPainterPathStrokerC1Ev() {
  return new QPainterPathStroker();
}
// /usr/include/qt/QtGui/qpainterpath.h:246
// void QPainterPathStroker(const class QPen &)
extern "C"
void* C_ZN19QPainterPathStrokerC1ERK4QPen(const QPen & pen) {
  return new QPainterPathStroker(pen);
}
// /usr/include/qt/QtGui/qpainterpath.h:247
// void ~QPainterPathStroker()
extern "C"
void C_ZN19QPainterPathStrokerD1Ev(void *this_) {
  delete (QPainterPathStroker*)(this_);
}
// /usr/include/qt/QtGui/qpainterpath.h:249
// void setWidth(qreal)
extern "C"
void C_ZN19QPainterPathStroker8setWidthEd(void *this_, qreal width) {
  ((QPainterPathStroker*)this_)->setWidth(width);
}
// /usr/include/qt/QtGui/qpainterpath.h:250
// qreal width()
extern "C"
void C_ZNK19QPainterPathStroker5widthEv(void *this_) {
  /*return*/ ((QPainterPathStroker*)this_)->width();
}
// /usr/include/qt/QtGui/qpainterpath.h:252
// void setCapStyle(Qt::PenCapStyle)
extern "C"
void C_ZN19QPainterPathStroker11setCapStyleEN2Qt11PenCapStyleE(void *this_, Qt::PenCapStyle style) {
  ((QPainterPathStroker*)this_)->setCapStyle(style);
}
// /usr/include/qt/QtGui/qpainterpath.h:253
// Qt::PenCapStyle capStyle()
extern "C"
void C_ZNK19QPainterPathStroker8capStyleEv(void *this_) {
  /*return*/ ((QPainterPathStroker*)this_)->capStyle();
}
// /usr/include/qt/QtGui/qpainterpath.h:255
// void setJoinStyle(Qt::PenJoinStyle)
extern "C"
void C_ZN19QPainterPathStroker12setJoinStyleEN2Qt12PenJoinStyleE(void *this_, Qt::PenJoinStyle style) {
  ((QPainterPathStroker*)this_)->setJoinStyle(style);
}
// /usr/include/qt/QtGui/qpainterpath.h:256
// Qt::PenJoinStyle joinStyle()
extern "C"
void C_ZNK19QPainterPathStroker9joinStyleEv(void *this_) {
  /*return*/ ((QPainterPathStroker*)this_)->joinStyle();
}
// /usr/include/qt/QtGui/qpainterpath.h:258
// void setMiterLimit(qreal)
extern "C"
void C_ZN19QPainterPathStroker13setMiterLimitEd(void *this_, qreal length) {
  ((QPainterPathStroker*)this_)->setMiterLimit(length);
}
// /usr/include/qt/QtGui/qpainterpath.h:259
// qreal miterLimit()
extern "C"
void C_ZNK19QPainterPathStroker10miterLimitEv(void *this_) {
  /*return*/ ((QPainterPathStroker*)this_)->miterLimit();
}
// /usr/include/qt/QtGui/qpainterpath.h:261
// void setCurveThreshold(qreal)
extern "C"
void C_ZN19QPainterPathStroker17setCurveThresholdEd(void *this_, qreal threshold) {
  ((QPainterPathStroker*)this_)->setCurveThreshold(threshold);
}
// /usr/include/qt/QtGui/qpainterpath.h:262
// qreal curveThreshold()
extern "C"
void C_ZNK19QPainterPathStroker14curveThresholdEv(void *this_) {
  /*return*/ ((QPainterPathStroker*)this_)->curveThreshold();
}
// /usr/include/qt/QtGui/qpainterpath.h:264
// void setDashPattern(Qt::PenStyle)
extern "C"
void C_ZN19QPainterPathStroker14setDashPatternEN2Qt8PenStyleE(void *this_, Qt::PenStyle arg0) {
  ((QPainterPathStroker*)this_)->setDashPattern(arg0);
}
// /usr/include/qt/QtGui/qpainterpath.h:265
// void setDashPattern(const QVector<qreal> &)
extern "C"
void C_ZN19QPainterPathStroker14setDashPatternERK7QVectorIdE(void *this_, const QVector<qreal> & dashPattern) {
  ((QPainterPathStroker*)this_)->setDashPattern(dashPattern);
}
// /usr/include/qt/QtGui/qpainterpath.h:266
// QVector<qreal> dashPattern()
extern "C"
void C_ZNK19QPainterPathStroker11dashPatternEv(void *this_) {
  /*return*/ ((QPainterPathStroker*)this_)->dashPattern();
}
// /usr/include/qt/QtGui/qpainterpath.h:268
// void setDashOffset(qreal)
extern "C"
void C_ZN19QPainterPathStroker13setDashOffsetEd(void *this_, qreal offset) {
  ((QPainterPathStroker*)this_)->setDashOffset(offset);
}
// /usr/include/qt/QtGui/qpainterpath.h:269
// qreal dashOffset()
extern "C"
void C_ZNK19QPainterPathStroker10dashOffsetEv(void *this_) {
  /*return*/ ((QPainterPathStroker*)this_)->dashOffset();
}
// /usr/include/qt/QtGui/qpainterpath.h:271
// QPainterPath createStroke(const class QPainterPath &)
extern "C"
void C_ZNK19QPainterPathStroker12createStrokeERK12QPainterPath(void *this_, const QPainterPath & path) {
  /*return*/ ((QPainterPathStroker*)this_)->createStroke(path);
}
//  main block end
