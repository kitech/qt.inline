// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

// /usr/include/qt/QtWidgets/qgesture.h:275
// void QGestureEvent(const QList<class QGesture *> &)
extern "C"
void* C_ZN13QGestureEventC1ERK5QListIP8QGestureE(const QList<QGesture *> & gestures) {
  return new QGestureEvent(gestures);
}
// virtual
// /usr/include/qt/QtWidgets/qgesture.h:276
// void ~QGestureEvent()
extern "C"
void C_ZN13QGestureEventD1Ev(void *this_) {
  delete (QGestureEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgesture.h:278
// QList<QGesture *> gestures()
extern "C"
void C_ZNK13QGestureEvent8gesturesEv(void *this_) {
  /*return*/ ((QGestureEvent*)this_)->gestures();
}
// /usr/include/qt/QtWidgets/qgesture.h:279
// QGesture * gesture(Qt::GestureType)
extern "C"
void C_ZNK13QGestureEvent7gestureEN2Qt11GestureTypeE(void *this_, Qt::GestureType type) {
  /*return*/ ((QGestureEvent*)this_)->gesture(type);
}
// /usr/include/qt/QtWidgets/qgesture.h:281
// QList<QGesture *> activeGestures()
extern "C"
void C_ZNK13QGestureEvent14activeGesturesEv(void *this_) {
  /*return*/ ((QGestureEvent*)this_)->activeGestures();
}
// /usr/include/qt/QtWidgets/qgesture.h:282
// QList<QGesture *> canceledGestures()
extern "C"
void C_ZNK13QGestureEvent16canceledGesturesEv(void *this_) {
  /*return*/ ((QGestureEvent*)this_)->canceledGestures();
}
// /usr/include/qt/QtWidgets/qgesture.h:289
// void setAccepted(class QGesture *, _Bool)
extern "C"
void C_ZN13QGestureEvent11setAcceptedEP8QGestureb(void *this_, QGesture * a0, bool a1) {
  ((QGestureEvent*)this_)->setAccepted(a0, a1);
}
// /usr/include/qt/QtWidgets/qgesture.h:290
// void accept(class QGesture *)
extern "C"
void C_ZN13QGestureEvent6acceptEP8QGesture(void *this_, QGesture * a0) {
  ((QGestureEvent*)this_)->accept(a0);
}
// /usr/include/qt/QtWidgets/qgesture.h:291
// void ignore(class QGesture *)
extern "C"
void C_ZN13QGestureEvent6ignoreEP8QGesture(void *this_, QGesture * a0) {
  ((QGestureEvent*)this_)->ignore(a0);
}
// /usr/include/qt/QtWidgets/qgesture.h:292
// bool isAccepted(class QGesture *)
extern "C"
void C_ZNK13QGestureEvent10isAcceptedEP8QGesture(void *this_, QGesture * a0) {
  /*return*/ ((QGestureEvent*)this_)->isAccepted(a0);
}
// /usr/include/qt/QtWidgets/qgesture.h:294
// void setAccepted(Qt::GestureType, _Bool)
extern "C"
void C_ZN13QGestureEvent11setAcceptedEN2Qt11GestureTypeEb(void *this_, Qt::GestureType a0, bool a1) {
  ((QGestureEvent*)this_)->setAccepted(a0, a1);
}
// /usr/include/qt/QtWidgets/qgesture.h:295
// void accept(Qt::GestureType)
extern "C"
void C_ZN13QGestureEvent6acceptEN2Qt11GestureTypeE(void *this_, Qt::GestureType a0) {
  ((QGestureEvent*)this_)->accept(a0);
}
// /usr/include/qt/QtWidgets/qgesture.h:296
// void ignore(Qt::GestureType)
extern "C"
void C_ZN13QGestureEvent6ignoreEN2Qt11GestureTypeE(void *this_, Qt::GestureType a0) {
  ((QGestureEvent*)this_)->ignore(a0);
}
// /usr/include/qt/QtWidgets/qgesture.h:297
// bool isAccepted(Qt::GestureType)
extern "C"
void C_ZNK13QGestureEvent10isAcceptedEN2Qt11GestureTypeE(void *this_, Qt::GestureType a0) {
  /*return*/ ((QGestureEvent*)this_)->isAccepted(a0);
}
// /usr/include/qt/QtWidgets/qgesture.h:299
// void setWidget(class QWidget *)
extern "C"
void C_ZN13QGestureEvent9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGestureEvent*)this_)->setWidget(widget);
}
// /usr/include/qt/QtWidgets/qgesture.h:300
// QWidget * widget()
extern "C"
void C_ZNK13QGestureEvent6widgetEv(void *this_) {
  /*return*/ ((QGestureEvent*)this_)->widget();
}
// /usr/include/qt/QtWidgets/qgesture.h:303
// QPointF mapToGraphicsScene(const class QPointF &)
extern "C"
void C_ZNK13QGestureEvent18mapToGraphicsSceneERK7QPointF(void *this_, const QPointF & gesturePoint) {
  /*return*/ ((QGestureEvent*)this_)->mapToGraphicsScene(gesturePoint);
}