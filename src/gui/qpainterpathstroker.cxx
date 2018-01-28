//  header block begin
// /usr/include/qt/QtGui/qpainterpath.h
#include <qpainterpath.h>
#include <QtGui>

// QPainterPathStroker is pure virtual: false
//  header block end

//  main block begin

class MyQPainterPathStroker : public QPainterPathStroker {
public:
MyQPainterPathStroker() : QPainterPathStroker() {}
MyQPainterPathStroker(const QPen & pen) : QPainterPathStroker(pen) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:246
// [-2] void QPainterPathStroker()
extern "C"
void* C_ZN19QPainterPathStrokerC1Ev() {
  (MyQPainterPathStroker*)(0);
  return  new MyQPainterPathStroker();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:247
// [-2] void QPainterPathStroker(const class QPen &)
extern "C"
void* C_ZN19QPainterPathStrokerC1ERK4QPen(const QPen & pen) {
  (MyQPainterPathStroker*)(0);
  return  new MyQPainterPathStroker(pen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:248
// [-2] void ~QPainterPathStroker()
extern "C"
void C_ZN19QPainterPathStrokerD1Ev(void *this_) {
  delete (QPainterPathStroker*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:250
// [-2] void setWidth(qreal)
extern "C"
void C_ZN19QPainterPathStroker8setWidthEd(void *this_, qreal width) {
  ((QPainterPathStroker*)this_)->setWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:251
// [8] qreal width()
extern "C"
qreal C_ZNK19QPainterPathStroker5widthEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->width();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:253
// [-2] void setCapStyle(Qt::PenCapStyle)
extern "C"
void C_ZN19QPainterPathStroker11setCapStyleEN2Qt11PenCapStyleE(void *this_, Qt::PenCapStyle style) {
  ((QPainterPathStroker*)this_)->setCapStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:254
// [4] Qt::PenCapStyle capStyle()
extern "C"
Qt::PenCapStyle C_ZNK19QPainterPathStroker8capStyleEv(void *this_) {
  return (Qt::PenCapStyle)((QPainterPathStroker*)this_)->capStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:256
// [-2] void setJoinStyle(Qt::PenJoinStyle)
extern "C"
void C_ZN19QPainterPathStroker12setJoinStyleEN2Qt12PenJoinStyleE(void *this_, Qt::PenJoinStyle style) {
  ((QPainterPathStroker*)this_)->setJoinStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:257
// [4] Qt::PenJoinStyle joinStyle()
extern "C"
Qt::PenJoinStyle C_ZNK19QPainterPathStroker9joinStyleEv(void *this_) {
  return (Qt::PenJoinStyle)((QPainterPathStroker*)this_)->joinStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:259
// [-2] void setMiterLimit(qreal)
extern "C"
void C_ZN19QPainterPathStroker13setMiterLimitEd(void *this_, qreal length) {
  ((QPainterPathStroker*)this_)->setMiterLimit(length);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:260
// [8] qreal miterLimit()
extern "C"
qreal C_ZNK19QPainterPathStroker10miterLimitEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->miterLimit();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:262
// [-2] void setCurveThreshold(qreal)
extern "C"
void C_ZN19QPainterPathStroker17setCurveThresholdEd(void *this_, qreal threshold) {
  ((QPainterPathStroker*)this_)->setCurveThreshold(threshold);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:263
// [8] qreal curveThreshold()
extern "C"
qreal C_ZNK19QPainterPathStroker14curveThresholdEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->curveThreshold();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:265
// [-2] void setDashPattern(Qt::PenStyle)
extern "C"
void C_ZN19QPainterPathStroker14setDashPatternEN2Qt8PenStyleE(void *this_, Qt::PenStyle arg0) {
  ((QPainterPathStroker*)this_)->setDashPattern(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:269
// [-2] void setDashOffset(qreal)
extern "C"
void C_ZN19QPainterPathStroker13setDashOffsetEd(void *this_, qreal offset) {
  ((QPainterPathStroker*)this_)->setDashOffset(offset);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:270
// [8] qreal dashOffset()
extern "C"
qreal C_ZNK19QPainterPathStroker10dashOffsetEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->dashOffset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:272
// [8] QPainterPath createStroke(const class QPainterPath &)
extern "C"
void* C_ZNK19QPainterPathStroker12createStrokeERK12QPainterPath(void *this_, const QPainterPath & path) {
  auto rv = ((QPainterPathStroker*)this_)->createStroke(path);
return new QPainterPath(rv);
}
//  main block end
