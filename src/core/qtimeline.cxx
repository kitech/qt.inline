//  header block begin
// since 0x040200
// /usr/include/qt/QtCore/qtimeline.h
#ifndef protected
#define protected public
#endif
#include <qtimeline.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimeLine is pure virtual: false
// QTimeLine has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTimeLine : public QTimeLine {
public:
  virtual ~MyQTimeLine() {}
// void QTimeLine(int, QObject *)
MyQTimeLine(int duration, QObject * parent) : QTimeLine(duration, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTimeLine::timerEvent(event);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:130
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QTimeLine*)this_)->QTimeLine::timerEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeLine10metaObjectEv(void *this_) {
  return (void*)((QTimeLine*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:79
// [-2] void QTimeLine(int, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeLineC2EiP7QObject(int duration, QObject * parent) {
  auto _nilp = (MyQTimeLine*)(0);
  return  new MyQTimeLine(duration, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:80
// [-2] void ~QTimeLine()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLineD2Ev(void *this_) {
  delete (QTimeLine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:82
// [4] QTimeLine::State state()
extern "C" Q_DECL_EXPORT
QTimeLine::State C_ZNK9QTimeLine5stateEv(void *this_) {
  return (QTimeLine::State)((QTimeLine*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:84
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine9loopCountEv(void *this_) {
  return (int)((QTimeLine*)this_)->loopCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:85
// [-2] void setLoopCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine12setLoopCountEi(void *this_, int count) {
  ((QTimeLine*)this_)->setLoopCount(count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:87
// [4] QTimeLine::Direction direction()
extern "C" Q_DECL_EXPORT
QTimeLine::Direction C_ZNK9QTimeLine9directionEv(void *this_) {
  return (QTimeLine::Direction)((QTimeLine*)this_)->direction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:88
// [-2] void setDirection(QTimeLine::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine12setDirectionENS_9DirectionE(void *this_, QTimeLine::Direction direction) {
  ((QTimeLine*)this_)->setDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:90
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine8durationEv(void *this_) {
  return (int)((QTimeLine*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:91
// [-2] void setDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine11setDurationEi(void *this_, int duration) {
  ((QTimeLine*)this_)->setDuration(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:93
// [4] int startFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine10startFrameEv(void *this_) {
  return (int)((QTimeLine*)this_)->startFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:94
// [-2] void setStartFrame(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine13setStartFrameEi(void *this_, int frame) {
  ((QTimeLine*)this_)->setStartFrame(frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:95
// [4] int endFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine8endFrameEv(void *this_) {
  return (int)((QTimeLine*)this_)->endFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:96
// [-2] void setEndFrame(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine11setEndFrameEi(void *this_, int frame) {
  ((QTimeLine*)this_)->setEndFrame(frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:97
// [-2] void setFrameRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine13setFrameRangeEii(void *this_, int startFrame, int endFrame) {
  ((QTimeLine*)this_)->setFrameRange(startFrame, endFrame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:99
// [4] int updateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine14updateIntervalEv(void *this_) {
  return (int)((QTimeLine*)this_)->updateInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:100
// [-2] void setUpdateInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine17setUpdateIntervalEi(void *this_, int interval) {
  ((QTimeLine*)this_)->setUpdateInterval(interval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:102
// [4] QTimeLine::CurveShape curveShape()
extern "C" Q_DECL_EXPORT
QTimeLine::CurveShape C_ZNK9QTimeLine10curveShapeEv(void *this_) {
  return (QTimeLine::CurveShape)((QTimeLine*)this_)->curveShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:103
// [-2] void setCurveShape(QTimeLine::CurveShape)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine13setCurveShapeENS_10CurveShapeE(void *this_, QTimeLine::CurveShape shape) {
  ((QTimeLine*)this_)->setCurveShape(shape);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:105
// [8] QEasingCurve easingCurve()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeLine11easingCurveEv(void *this_) {
  auto rv = ((QTimeLine*)this_)->easingCurve();
return new QEasingCurve(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:106
// [-2] void setEasingCurve(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine14setEasingCurveERK12QEasingCurve(void *this_, QEasingCurve* curve) {
  ((QTimeLine*)this_)->setEasingCurve(*curve);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:108
// [4] int currentTime()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine11currentTimeEv(void *this_) {
  return (int)((QTimeLine*)this_)->currentTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:109
// [4] int currentFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine12currentFrameEv(void *this_) {
  return (int)((QTimeLine*)this_)->currentFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:110
// [8] qreal currentValue()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTimeLine12currentValueEv(void *this_) {
  return (qreal)((QTimeLine*)this_)->currentValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:112
// [4] int frameForTime(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine12frameForTimeEi(void *this_, int msec) {
  return (int)((QTimeLine*)this_)->frameForTime(msec);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:113
// [8] qreal valueForTime(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTimeLine12valueForTimeEi(void *this_, int msec) {
  return (qreal)((QTimeLine*)this_)->valueForTime(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:116
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine5startEv(void *this_) {
  ((QTimeLine*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:117
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine6resumeEv(void *this_) {
  ((QTimeLine*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:118
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine4stopEv(void *this_) {
  ((QTimeLine*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:119
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine9setPausedEb(void *this_, bool paused) {
  ((QTimeLine*)this_)->setPaused(paused);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:120
// [-2] void setCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine14setCurrentTimeEi(void *this_, int msec) {
  ((QTimeLine*)this_)->setCurrentTime(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:121
// [-2] void toggleDirection()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine15toggleDirectionEv(void *this_) {
  ((QTimeLine*)this_)->toggleDirection();
}

//  main block end
