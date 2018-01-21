//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:62
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QGesture10metaObjectEv(void *this_) {
  /*return*/ ((QGesture*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgesture.h:72
// void QGesture(class QObject *)
extern "C"
void* C_ZN8QGestureC1EP7QObject(QObject * parent) {
  return new QGesture(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:73
// void ~QGesture()
extern "C"
void C_ZN8QGestureD1Ev(void *this_) {
  delete (QGesture*)(this_);
}
// /usr/include/qt/QtWidgets/qgesture.h:75
// Qt::GestureType gestureType()
extern "C"
void C_ZNK8QGesture11gestureTypeEv(void *this_) {
  /*return*/ ((QGesture*)this_)->gestureType();
}
// /usr/include/qt/QtWidgets/qgesture.h:77
// Qt::GestureState state()
extern "C"
void C_ZNK8QGesture5stateEv(void *this_) {
  /*return*/ ((QGesture*)this_)->state();
}
// /usr/include/qt/QtWidgets/qgesture.h:79
// QPointF hotSpot()
extern "C"
void C_ZNK8QGesture7hotSpotEv(void *this_) {
  /*return*/ ((QGesture*)this_)->hotSpot();
}
// /usr/include/qt/QtWidgets/qgesture.h:80
// void setHotSpot(const class QPointF &)
extern "C"
void C_ZN8QGesture10setHotSpotERK7QPointF(void *this_, const QPointF & value) {
  ((QGesture*)this_)->setHotSpot(value);
}
// /usr/include/qt/QtWidgets/qgesture.h:81
// bool hasHotSpot()
extern "C"
void C_ZNK8QGesture10hasHotSpotEv(void *this_) {
  /*return*/ ((QGesture*)this_)->hasHotSpot();
}
// /usr/include/qt/QtWidgets/qgesture.h:82
// void unsetHotSpot()
extern "C"
void C_ZN8QGesture12unsetHotSpotEv(void *this_) {
  ((QGesture*)this_)->unsetHotSpot();
}
// /usr/include/qt/QtWidgets/qgesture.h:89
// void setGestureCancelPolicy(enum QGesture::GestureCancelPolicy)
extern "C"
void C_ZN8QGesture22setGestureCancelPolicyENS_19GestureCancelPolicyE(void *this_, QGesture::GestureCancelPolicy policy) {
  ((QGesture*)this_)->setGestureCancelPolicy(policy);
}
// /usr/include/qt/QtWidgets/qgesture.h:90
// QGesture::GestureCancelPolicy gestureCancelPolicy()
extern "C"
void C_ZNK8QGesture19gestureCancelPolicyEv(void *this_) {
  /*return*/ ((QGesture*)this_)->gestureCancelPolicy();
}
//  main block end
