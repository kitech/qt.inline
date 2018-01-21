//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:105
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QPanGesture10metaObjectEv(void *this_) {
  /*return*/ ((QPanGesture*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgesture.h:116
// void QPanGesture(class QObject *)
extern "C"
void* C_ZN11QPanGestureC1EP7QObject(QObject * parent) {
  return new QPanGesture(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:117
// void ~QPanGesture()
extern "C"
void C_ZN11QPanGestureD1Ev(void *this_) {
  delete (QPanGesture*)(this_);
}
// /usr/include/qt/QtWidgets/qgesture.h:119
// QPointF lastOffset()
extern "C"
void C_ZNK11QPanGesture10lastOffsetEv(void *this_) {
  /*return*/ ((QPanGesture*)this_)->lastOffset();
}
// /usr/include/qt/QtWidgets/qgesture.h:120
// QPointF offset()
extern "C"
void C_ZNK11QPanGesture6offsetEv(void *this_) {
  /*return*/ ((QPanGesture*)this_)->offset();
}
// /usr/include/qt/QtWidgets/qgesture.h:121
// QPointF delta()
extern "C"
void C_ZNK11QPanGesture5deltaEv(void *this_) {
  /*return*/ ((QPanGesture*)this_)->delta();
}
// /usr/include/qt/QtWidgets/qgesture.h:122
// qreal acceleration()
extern "C"
void C_ZNK11QPanGesture12accelerationEv(void *this_) {
  /*return*/ ((QPanGesture*)this_)->acceleration();
}
// /usr/include/qt/QtWidgets/qgesture.h:124
// void setLastOffset(const class QPointF &)
extern "C"
void C_ZN11QPanGesture13setLastOffsetERK7QPointF(void *this_, const QPointF & value) {
  ((QPanGesture*)this_)->setLastOffset(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:125
// void setOffset(const class QPointF &)
extern "C"
void C_ZN11QPanGesture9setOffsetERK7QPointF(void *this_, const QPointF & value) {
  ((QPanGesture*)this_)->setOffset(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:126
// void setAcceleration(qreal)
extern "C"
void C_ZN11QPanGesture15setAccelerationEd(void *this_, qreal value) {
  ((QPanGesture*)this_)->setAcceleration(value);
}
//  main block end
