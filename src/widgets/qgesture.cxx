//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGesture is pure virtual: false
// QGesture has virtual projected: false
//  header block end

//  main block begin

class MyQGesture : public QGesture {
public:
  virtual ~MyQGesture() {}
// void QGesture(class QObject *)
MyQGesture(QObject * parent) : QGesture(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:63
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK8QGesture10metaObjectEv(void *this_) {
  return (void*)((QGesture*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:73
// [-2] void QGesture(class QObject *)
extern "C"
void* C_ZN8QGestureC2EP7QObject(QObject * parent) {
  return  new QGesture(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:74
// [-2] void ~QGesture()
extern "C"
void C_ZN8QGestureD2Ev(void *this_) {
  delete (QGesture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:76
// [4] Qt::GestureType gestureType()
extern "C"
Qt::GestureType C_ZNK8QGesture11gestureTypeEv(void *this_) {
  return (Qt::GestureType)((QGesture*)this_)->gestureType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:78
// [4] Qt::GestureState state()
extern "C"
Qt::GestureState C_ZNK8QGesture5stateEv(void *this_) {
  return (Qt::GestureState)((QGesture*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:80
// [16] QPointF hotSpot()
extern "C"
void* C_ZNK8QGesture7hotSpotEv(void *this_) {
  auto rv = ((QGesture*)this_)->hotSpot();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:81
// [-2] void setHotSpot(const class QPointF &)
extern "C"
void C_ZN8QGesture10setHotSpotERK7QPointF(void *this_, QPointF* value) {
  ((QGesture*)this_)->setHotSpot(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:82
// [1] bool hasHotSpot()
extern "C"
bool C_ZNK8QGesture10hasHotSpotEv(void *this_) {
  return (bool)((QGesture*)this_)->hasHotSpot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:83
// [-2] void unsetHotSpot()
extern "C"
void C_ZN8QGesture12unsetHotSpotEv(void *this_) {
  ((QGesture*)this_)->unsetHotSpot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:90
// [-2] void setGestureCancelPolicy(enum QGesture::GestureCancelPolicy)
extern "C"
void C_ZN8QGesture22setGestureCancelPolicyENS_19GestureCancelPolicyE(void *this_, QGesture::GestureCancelPolicy policy) {
  ((QGesture*)this_)->setGestureCancelPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:91
// [4] QGesture::GestureCancelPolicy gestureCancelPolicy()
extern "C"
QGesture::GestureCancelPolicy C_ZNK8QGesture19gestureCancelPolicyEv(void *this_) {
  return (QGesture::GestureCancelPolicy)((QGesture*)this_)->gestureCancelPolicy();
}

//  main block end
