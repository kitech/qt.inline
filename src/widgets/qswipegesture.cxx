//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:207
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QSwipeGesture10metaObjectEv(void *this_) {
  /*return*/ ((QSwipeGesture*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgesture.h:219
// void QSwipeGesture(class QObject *)
extern "C"
void* C_ZN13QSwipeGestureC1EP7QObject(QObject * parent) {
  return new QSwipeGesture(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:220
// void ~QSwipeGesture()
extern "C"
void C_ZN13QSwipeGestureD1Ev(void *this_) {
  delete (QSwipeGesture*)(this_);
}
// /usr/include/qt/QtWidgets/qgesture.h:222
// QSwipeGesture::SwipeDirection horizontalDirection()
extern "C"
void C_ZNK13QSwipeGesture19horizontalDirectionEv(void *this_) {
  /*return*/ ((QSwipeGesture*)this_)->horizontalDirection();
}
// /usr/include/qt/QtWidgets/qgesture.h:223
// QSwipeGesture::SwipeDirection verticalDirection()
extern "C"
void C_ZNK13QSwipeGesture17verticalDirectionEv(void *this_) {
  /*return*/ ((QSwipeGesture*)this_)->verticalDirection();
}
// /usr/include/qt/QtWidgets/qgesture.h:225
// qreal swipeAngle()
extern "C"
void C_ZNK13QSwipeGesture10swipeAngleEv(void *this_) {
  /*return*/ ((QSwipeGesture*)this_)->swipeAngle();
}
// /usr/include/qt/QtWidgets/qgesture.h:226
// void setSwipeAngle(qreal)
extern "C"
void C_ZN13QSwipeGesture13setSwipeAngleEd(void *this_, qreal value) {
  ((QSwipeGesture*)this_)->setSwipeAngle(value);
}
//  main block end
