//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:301
// void QNativeGestureEvent(Qt::NativeGestureType, const class QPointF &, const class QPointF &, const class QPointF &, qreal, ulong, quint64)
extern "C"
void* C_ZN19QNativeGestureEventC1EN2Qt17NativeGestureTypeERK7QPointFS4_S4_dmy(Qt::NativeGestureType type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, qreal value, ulong sequenceId, quint64 intArgument) {
  return new QNativeGestureEvent(type, localPos, windowPos, screenPos, value, sequenceId, intArgument);
}
// inline
// /usr/include/qt/QtGui/qevent.h:303
// Qt::NativeGestureType gestureType()
extern "C"
void C_ZNK19QNativeGestureEvent11gestureTypeEv(void *this_) {
  /*return*/ ((QNativeGestureEvent*)this_)->gestureType();
}
// inline
// /usr/include/qt/QtGui/qevent.h:304
// qreal value()
extern "C"
void C_ZNK19QNativeGestureEvent5valueEv(void *this_) {
  /*return*/ ((QNativeGestureEvent*)this_)->value();
}
// inline
// /usr/include/qt/QtGui/qevent.h:307
// const QPoint pos()
extern "C"
void C_ZNK19QNativeGestureEvent3posEv(void *this_) {
  /*return*/ ((QNativeGestureEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:308
// const QPoint globalPos()
extern "C"
void C_ZNK19QNativeGestureEvent9globalPosEv(void *this_) {
  /*return*/ ((QNativeGestureEvent*)this_)->globalPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:310
// const QPointF & localPos()
extern "C"
void C_ZNK19QNativeGestureEvent8localPosEv(void *this_) {
  /*return*/ ((QNativeGestureEvent*)this_)->localPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:311
// const QPointF & windowPos()
extern "C"
void C_ZNK19QNativeGestureEvent9windowPosEv(void *this_) {
  /*return*/ ((QNativeGestureEvent*)this_)->windowPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:312
// const QPointF & screenPos()
extern "C"
void C_ZNK19QNativeGestureEvent9screenPosEv(void *this_) {
  /*return*/ ((QNativeGestureEvent*)this_)->screenPos();
}
//  main block end
