// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qtimeline.h
// dst-file: /src/core/qtimeline.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtimeline.h>


#include <qeasingcurve.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qtimeline_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTimeLine_Class_Size()
{
  return sizeof(QTimeLine);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 110, column 10>
//   // proto:  void QTimeLine::start();
// _ZN9QTimeLine5startEv start()
extern "C"
void
C_ZN9QTimeLine5startEv(void *qthis) {
  ((QTimeLine*)qthis)->start();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 84, column 9>
//   // proto:  int QTimeLine::duration();
// _ZNK9QTimeLine8durationEv duration()
extern "C"
int
C_ZNK9QTimeLine8durationEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->duration();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 103, column 9>
//   // proto:  int QTimeLine::currentFrame();
// _ZNK9QTimeLine12currentFrameEv currentFrame()
extern "C"
int
C_ZNK9QTimeLine12currentFrameEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->currentFrame();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 46, column 5>
//   // proto:  const QMetaObject * QTimeLine::metaObject();
// _ZNK9QTimeLine10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QTimeLine10metaObjectEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 112, column 10>
//   // proto:  void QTimeLine::stop();
// _ZN9QTimeLine4stopEv stop()
extern "C"
void
C_ZN9QTimeLine4stopEv(void *qthis) {
  ((QTimeLine*)qthis)->stop();
}
//   // proto:  void QTimeLine::~QTimeLine();
extern "C"
void C_ZN9QTimeLineD2Ev(void *qthis) {
  delete (QTimeLine*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 94, column 10>
//   // proto:  void QTimeLine::setUpdateInterval(int interval);
// _ZN9QTimeLine17setUpdateIntervalEi setUpdateInterval(int)
extern "C"
void
C_ZN9QTimeLine17setUpdateIntervalEi(void *qthis,
int arg1) {
  ((QTimeLine*)qthis)->setUpdateInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 99, column 18>
//   // proto:  QEasingCurve QTimeLine::easingCurve();
// _ZNK9QTimeLine11easingCurveEv easingCurve()
extern "C"
QEasingCurve*
C_ZNK9QTimeLine11easingCurveEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->easingCurve();
  return new QEasingCurve(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 78, column 9>
//   // proto:  int QTimeLine::loopCount();
// _ZNK9QTimeLine9loopCountEv loopCount()
extern "C"
int
C_ZNK9QTimeLine9loopCountEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->loopCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 88, column 10>
//   // proto:  void QTimeLine::setStartFrame(int frame);
// _ZN9QTimeLine13setStartFrameEi setStartFrame(int)
extern "C"
void
C_ZN9QTimeLine13setStartFrameEi(void *qthis,
int arg1) {
  ((QTimeLine*)qthis)->setStartFrame(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 73, column 14>
//   // proto:  void QTimeLine::QTimeLine(int duration, QObject * parent);
extern "C"
QTimeLine*
C_ZN9QTimeLineC2EiP7QObject(int arg1,
QObject * arg2) {
  auto ret = new QTimeLine(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 111, column 10>
//   // proto:  void QTimeLine::resume();
// _ZN9QTimeLine6resumeEv resume()
extern "C"
void
C_ZN9QTimeLine6resumeEv(void *qthis) {
  ((QTimeLine*)qthis)->resume();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 97, column 10>
//   // proto:  void QTimeLine::setCurveShape(QTimeLine::CurveShape shape);
// _ZN9QTimeLine13setCurveShapeENS_10CurveShapeE setCurveShape(enum QTimeLine::CurveShape)
extern "C"
void
C_ZN9QTimeLine13setCurveShapeENS_10CurveShapeE(void *qthis,
QTimeLine::CurveShape arg1) {
  ((QTimeLine*)qthis)->setCurveShape(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 100, column 10>
//   // proto:  void QTimeLine::setEasingCurve(const QEasingCurve & curve);
// _ZN9QTimeLine14setEasingCurveERK12QEasingCurve setEasingCurve(const class QEasingCurve &)
extern "C"
void
C_ZN9QTimeLine14setEasingCurveERK12QEasingCurve(void *qthis,
const QEasingCurve* arg1) {
  ((QTimeLine*)qthis)->setEasingCurve(*((const QEasingCurve*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 87, column 9>
//   // proto:  int QTimeLine::startFrame();
// _ZNK9QTimeLine10startFrameEv startFrame()
extern "C"
int
C_ZNK9QTimeLine10startFrameEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->startFrame();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 90, column 10>
//   // proto:  void QTimeLine::setEndFrame(int frame);
// _ZN9QTimeLine11setEndFrameEi setEndFrame(int)
extern "C"
void
C_ZN9QTimeLine11setEndFrameEi(void *qthis,
int arg1) {
  ((QTimeLine*)qthis)->setEndFrame(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 93, column 9>
//   // proto:  int QTimeLine::updateInterval();
// _ZNK9QTimeLine14updateIntervalEv updateInterval()
extern "C"
int
C_ZNK9QTimeLine14updateIntervalEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->updateInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 79, column 10>
//   // proto:  void QTimeLine::setLoopCount(int count);
// _ZN9QTimeLine12setLoopCountEi setLoopCount(int)
extern "C"
void
C_ZN9QTimeLine12setLoopCountEi(void *qthis,
int arg1) {
  ((QTimeLine*)qthis)->setLoopCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 114, column 10>
//   // proto:  void QTimeLine::setCurrentTime(int msec);
// _ZN9QTimeLine14setCurrentTimeEi setCurrentTime(int)
extern "C"
void
C_ZN9QTimeLine14setCurrentTimeEi(void *qthis,
int arg1) {
  ((QTimeLine*)qthis)->setCurrentTime(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 102, column 9>
//   // proto:  int QTimeLine::currentTime();
// _ZNK9QTimeLine11currentTimeEv currentTime()
extern "C"
int
C_ZNK9QTimeLine11currentTimeEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->currentTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 85, column 10>
//   // proto:  void QTimeLine::setDuration(int duration);
// _ZN9QTimeLine11setDurationEi setDuration(int)
extern "C"
void
C_ZN9QTimeLine11setDurationEi(void *qthis,
int arg1) {
  ((QTimeLine*)qthis)->setDuration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 115, column 10>
//   // proto:  void QTimeLine::toggleDirection();
// _ZN9QTimeLine15toggleDirectionEv toggleDirection()
extern "C"
void
C_ZN9QTimeLine15toggleDirectionEv(void *qthis) {
  ((QTimeLine*)qthis)->toggleDirection();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 76, column 11>
//   // proto:  QTimeLine::State QTimeLine::state();
// _ZNK9QTimeLine5stateEv state()
extern "C"
QTimeLine::State
C_ZNK9QTimeLine5stateEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 89, column 9>
//   // proto:  int QTimeLine::endFrame();
// _ZNK9QTimeLine8endFrameEv endFrame()
extern "C"
int
C_ZNK9QTimeLine8endFrameEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->endFrame();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 81, column 15>
//   // proto:  QTimeLine::Direction QTimeLine::direction();
// _ZNK9QTimeLine9directionEv direction()
extern "C"
QTimeLine::Direction
C_ZNK9QTimeLine9directionEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->direction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 113, column 10>
//   // proto:  void QTimeLine::setPaused(bool paused);
// _ZN9QTimeLine9setPausedEb setPaused(_Bool)
extern "C"
void
C_ZN9QTimeLine9setPausedEb(void *qthis,
bool arg1) {
  ((QTimeLine*)qthis)->setPaused(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 96, column 16>
//   // proto:  QTimeLine::CurveShape QTimeLine::curveShape();
// _ZNK9QTimeLine10curveShapeEv curveShape()
extern "C"
QTimeLine::CurveShape
C_ZNK9QTimeLine10curveShapeEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->curveShape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 106, column 9>
//   // proto:  int QTimeLine::frameForTime(int msec);
// _ZNK9QTimeLine12frameForTimeEi frameForTime(int)
extern "C"
int
C_ZNK9QTimeLine12frameForTimeEi(void *qthis,
int arg1) {
  auto ret =
  ((QTimeLine*)qthis)->frameForTime(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 91, column 10>
//   // proto:  void QTimeLine::setFrameRange(int startFrame, int endFrame);
// _ZN9QTimeLine13setFrameRangeEii setFrameRange(int, int)
extern "C"
void
C_ZN9QTimeLine13setFrameRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QTimeLine*)qthis)->setFrameRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 107, column 19>
//   // proto:  qreal QTimeLine::valueForTime(int msec);
// _ZNK9QTimeLine12valueForTimeEi valueForTime(int)
extern "C"
double
C_ZNK9QTimeLine12valueForTimeEi(void *qthis,
int arg1) {
  auto ret =
  ((QTimeLine*)qthis)->valueForTime(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 82, column 10>
//   // proto:  void QTimeLine::setDirection(QTimeLine::Direction direction);
// _ZN9QTimeLine12setDirectionENS_9DirectionE setDirection(enum QTimeLine::Direction)
extern "C"
void
C_ZN9QTimeLine12setDirectionENS_9DirectionE(void *qthis,
QTimeLine::Direction arg1) {
  ((QTimeLine*)qthis)->setDirection(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtimeline.h', line 104, column 11>
//   // proto:  qreal QTimeLine::currentValue();
// _ZNK9QTimeLine12currentValueEv currentValue()
extern "C"
double
C_ZNK9QTimeLine12currentValueEv(void *qthis) {
  auto ret =
  ((QTimeLine*)qthis)->currentValue();
  return ret; // 0 TypeKind.DOUBLE
}
// <= ext block end

// body block begin =>
// QTimeLine_SlotProxy here
class QTimeLine_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTimeLine_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtimeline.moc"

extern "C" {
  QTimeLine_SlotProxy* QTimeLine_SlotProxy_new()
  {
    return new QTimeLine_SlotProxy();
  }
};

// <= body block end

