//  header block begin
// /usr/include/qt/QtCore/qtimeline.h
#include <qtimeline.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qtimeline.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QTimeLine10metaObjectEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qtimeline.h:79
// void QTimeLine(int, class QObject *)
extern "C"
void* C_ZN9QTimeLineC1EiP7QObject(int duration, QObject * parent) {
  return new QTimeLine(duration, parent);
}
// virtual
// /usr/include/qt/QtCore/qtimeline.h:80
// void ~QTimeLine()
extern "C"
void C_ZN9QTimeLineD1Ev(void *this_) {
  delete (QTimeLine*)(this_);
}
// /usr/include/qt/QtCore/qtimeline.h:82
// QTimeLine::State state()
extern "C"
void C_ZNK9QTimeLine5stateEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->state();
}
// /usr/include/qt/QtCore/qtimeline.h:84
// int loopCount()
extern "C"
void C_ZNK9QTimeLine9loopCountEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->loopCount();
}
// /usr/include/qt/QtCore/qtimeline.h:85
// void setLoopCount(int)
extern "C"
void C_ZN9QTimeLine12setLoopCountEi(void *this_, int count) {
  ((QTimeLine*)this_)->setLoopCount(count);
}
// /usr/include/qt/QtCore/qtimeline.h:87
// QTimeLine::Direction direction()
extern "C"
void C_ZNK9QTimeLine9directionEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->direction();
}
// /usr/include/qt/QtCore/qtimeline.h:88
// void setDirection(enum QTimeLine::Direction)
extern "C"
void C_ZN9QTimeLine12setDirectionENS_9DirectionE(void *this_, QTimeLine::Direction direction) {
  ((QTimeLine*)this_)->setDirection(direction);
}
// /usr/include/qt/QtCore/qtimeline.h:90
// int duration()
extern "C"
void C_ZNK9QTimeLine8durationEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->duration();
}
// /usr/include/qt/QtCore/qtimeline.h:91
// void setDuration(int)
extern "C"
void C_ZN9QTimeLine11setDurationEi(void *this_, int duration) {
  ((QTimeLine*)this_)->setDuration(duration);
}
// /usr/include/qt/QtCore/qtimeline.h:93
// int startFrame()
extern "C"
void C_ZNK9QTimeLine10startFrameEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->startFrame();
}
// /usr/include/qt/QtCore/qtimeline.h:94
// void setStartFrame(int)
extern "C"
void C_ZN9QTimeLine13setStartFrameEi(void *this_, int frame) {
  ((QTimeLine*)this_)->setStartFrame(frame);
}
// /usr/include/qt/QtCore/qtimeline.h:95
// int endFrame()
extern "C"
void C_ZNK9QTimeLine8endFrameEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->endFrame();
}
// /usr/include/qt/QtCore/qtimeline.h:96
// void setEndFrame(int)
extern "C"
void C_ZN9QTimeLine11setEndFrameEi(void *this_, int frame) {
  ((QTimeLine*)this_)->setEndFrame(frame);
}
// /usr/include/qt/QtCore/qtimeline.h:97
// void setFrameRange(int, int)
extern "C"
void C_ZN9QTimeLine13setFrameRangeEii(void *this_, int startFrame, int endFrame) {
  ((QTimeLine*)this_)->setFrameRange(startFrame, endFrame);
}
// /usr/include/qt/QtCore/qtimeline.h:99
// int updateInterval()
extern "C"
void C_ZNK9QTimeLine14updateIntervalEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->updateInterval();
}
// /usr/include/qt/QtCore/qtimeline.h:100
// void setUpdateInterval(int)
extern "C"
void C_ZN9QTimeLine17setUpdateIntervalEi(void *this_, int interval) {
  ((QTimeLine*)this_)->setUpdateInterval(interval);
}
// /usr/include/qt/QtCore/qtimeline.h:102
// QTimeLine::CurveShape curveShape()
extern "C"
void C_ZNK9QTimeLine10curveShapeEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->curveShape();
}
// /usr/include/qt/QtCore/qtimeline.h:103
// void setCurveShape(enum QTimeLine::CurveShape)
extern "C"
void C_ZN9QTimeLine13setCurveShapeENS_10CurveShapeE(void *this_, QTimeLine::CurveShape shape) {
  ((QTimeLine*)this_)->setCurveShape(shape);
}
// /usr/include/qt/QtCore/qtimeline.h:105
// QEasingCurve easingCurve()
extern "C"
void C_ZNK9QTimeLine11easingCurveEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->easingCurve();
}
// /usr/include/qt/QtCore/qtimeline.h:106
// void setEasingCurve(const class QEasingCurve &)
extern "C"
void C_ZN9QTimeLine14setEasingCurveERK12QEasingCurve(void *this_, const QEasingCurve & curve) {
  ((QTimeLine*)this_)->setEasingCurve(curve);
}
// /usr/include/qt/QtCore/qtimeline.h:108
// int currentTime()
extern "C"
void C_ZNK9QTimeLine11currentTimeEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->currentTime();
}
// /usr/include/qt/QtCore/qtimeline.h:109
// int currentFrame()
extern "C"
void C_ZNK9QTimeLine12currentFrameEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->currentFrame();
}
// /usr/include/qt/QtCore/qtimeline.h:110
// qreal currentValue()
extern "C"
void C_ZNK9QTimeLine12currentValueEv(void *this_) {
  /*return*/ ((QTimeLine*)this_)->currentValue();
}
// /usr/include/qt/QtCore/qtimeline.h:112
// int frameForTime(int)
extern "C"
void C_ZNK9QTimeLine12frameForTimeEi(void *this_, int msec) {
  /*return*/ ((QTimeLine*)this_)->frameForTime(msec);
}
// virtual
// /usr/include/qt/QtCore/qtimeline.h:113
// qreal valueForTime(int)
extern "C"
void C_ZNK9QTimeLine12valueForTimeEi(void *this_, int msec) {
  /*return*/ ((QTimeLine*)this_)->valueForTime(msec);
}
// /usr/include/qt/QtCore/qtimeline.h:116
// void start()
extern "C"
void C_ZN9QTimeLine5startEv(void *this_) {
  ((QTimeLine*)this_)->start();
}
// /usr/include/qt/QtCore/qtimeline.h:117
// void resume()
extern "C"
void C_ZN9QTimeLine6resumeEv(void *this_) {
  ((QTimeLine*)this_)->resume();
}
// /usr/include/qt/QtCore/qtimeline.h:118
// void stop()
extern "C"
void C_ZN9QTimeLine4stopEv(void *this_) {
  ((QTimeLine*)this_)->stop();
}
// /usr/include/qt/QtCore/qtimeline.h:119
// void setPaused(_Bool)
extern "C"
void C_ZN9QTimeLine9setPausedEb(void *this_, bool paused) {
  ((QTimeLine*)this_)->setPaused(paused);
}
// /usr/include/qt/QtCore/qtimeline.h:120
// void setCurrentTime(int)
extern "C"
void C_ZN9QTimeLine14setCurrentTimeEi(void *this_, int msec) {
  ((QTimeLine*)this_)->setCurrentTime(msec);
}
// /usr/include/qt/QtCore/qtimeline.h:121
// void toggleDirection()
extern "C"
void C_ZN9QTimeLine15toggleDirectionEv(void *this_) {
  ((QTimeLine*)this_)->toggleDirection();
}
//  main block end
