//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QNativeGestureEvent is pure virtual: false
// QNativeGestureEvent has virtual projected: false
//  header block end

//  main block begin

class MyQNativeGestureEvent : public QNativeGestureEvent {
public:
  virtual ~MyQNativeGestureEvent() {}
// void QNativeGestureEvent(Qt::NativeGestureType, const class QPointF &, const class QPointF &, const class QPointF &, qreal, ulong, quint64)
MyQNativeGestureEvent(Qt::NativeGestureType type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, qreal value, ulong sequenceId, quint64 intArgument) : QNativeGestureEvent(type_, localPos, windowPos, screenPos, value, sequenceId, intArgument) {}
// void QNativeGestureEvent(Qt::NativeGestureType, const class QTouchDevice *, const class QPointF &, const class QPointF &, const class QPointF &, qreal, ulong, quint64)
MyQNativeGestureEvent(Qt::NativeGestureType type_, const QTouchDevice * dev, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, qreal value, ulong sequenceId, quint64 intArgument) : QNativeGestureEvent(type_, dev, localPos, windowPos, screenPos, value, sequenceId, intArgument) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:305
// [-2] void QNativeGestureEvent(Qt::NativeGestureType, const class QPointF &, const class QPointF &, const class QPointF &, qreal, ulong, quint64)
extern "C"
void* C_ZN19QNativeGestureEventC2EN2Qt17NativeGestureTypeERK7QPointFS4_S4_dmy(Qt::NativeGestureType type_, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, qreal value, ulong sequenceId, quint64 intArgument) {
  return  new QNativeGestureEvent(type_, *localPos, *windowPos, *screenPos, value, sequenceId, intArgument);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:308
// [-2] void QNativeGestureEvent(Qt::NativeGestureType, const class QTouchDevice *, const class QPointF &, const class QPointF &, const class QPointF &, qreal, ulong, quint64)
extern "C"
void* C_ZN19QNativeGestureEventC2EN2Qt17NativeGestureTypeEPK12QTouchDeviceRK7QPointFS7_S7_dmy(Qt::NativeGestureType type_, const QTouchDevice * dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, qreal value, ulong sequenceId, quint64 intArgument) {
  return  new QNativeGestureEvent(type_, dev, *localPos, *windowPos, *screenPos, value, sequenceId, intArgument);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:310
// [-2] void ~QNativeGestureEvent()
extern "C"
void C_ZN19QNativeGestureEventD2Ev(void *this_) {
  delete (QNativeGestureEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:311
// [4] Qt::NativeGestureType gestureType()
extern "C"
Qt::NativeGestureType C_ZNK19QNativeGestureEvent11gestureTypeEv(void *this_) {
  return (Qt::NativeGestureType)((QNativeGestureEvent*)this_)->gestureType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:312
// [8] qreal value()
extern "C"
qreal C_ZNK19QNativeGestureEvent5valueEv(void *this_) {
  return (qreal)((QNativeGestureEvent*)this_)->value();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:315
// [8] const QPoint pos()
extern "C"
void* C_ZNK19QNativeGestureEvent3posEv(void *this_) {
  auto rv = ((QNativeGestureEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:316
// [8] const QPoint globalPos()
extern "C"
void* C_ZNK19QNativeGestureEvent9globalPosEv(void *this_) {
  auto rv = ((QNativeGestureEvent*)this_)->globalPos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:318
// [16] const QPointF & localPos()
extern "C"
void* C_ZNK19QNativeGestureEvent8localPosEv(void *this_) {
  auto& rv = ((QNativeGestureEvent*)this_)->localPos();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:319
// [16] const QPointF & windowPos()
extern "C"
void* C_ZNK19QNativeGestureEvent9windowPosEv(void *this_) {
  auto& rv = ((QNativeGestureEvent*)this_)->windowPos();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:320
// [16] const QPointF & screenPos()
extern "C"
void* C_ZNK19QNativeGestureEvent9screenPosEv(void *this_) {
  auto& rv = ((QNativeGestureEvent*)this_)->screenPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:322
// [8] const QTouchDevice * device()
extern "C"
void* C_ZNK19QNativeGestureEvent6deviceEv(void *this_) {
  return (void*)((QNativeGestureEvent*)this_)->device();
}

//  main block end
