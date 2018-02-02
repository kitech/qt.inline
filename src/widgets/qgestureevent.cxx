//  header block begin
// /usr/include/qt/QtWidgets/qgesture.h
#include <qgesture.h>
#include <QtWidgets>

// QGestureEvent is pure virtual: false
// QGestureEvent has virtual projected: false
//  header block end

//  main block begin

class MyQGestureEvent : public QGestureEvent {
public:
  virtual ~MyQGestureEvent() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:278
// [-2] void ~QGestureEvent()
extern "C"
void C_ZN13QGestureEventD2Ev(void *this_) {
  delete (QGestureEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:281
// [8] QGesture * gesture(Qt::GestureType)
extern "C"
void* C_ZNK13QGestureEvent7gestureEN2Qt11GestureTypeE(void *this_, Qt::GestureType type) {
  return (void*)((QGestureEvent*)this_)->gesture(type);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:291
// [-2] void setAccepted(class QGesture *, _Bool)
extern "C"
void C_ZN13QGestureEvent11setAcceptedEP8QGestureb(void *this_, QGesture * arg0, bool arg1) {
  ((QGestureEvent*)this_)->setAccepted(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:292
// [-2] void accept(class QGesture *)
extern "C"
void C_ZN13QGestureEvent6acceptEP8QGesture(void *this_, QGesture * arg0) {
  ((QGestureEvent*)this_)->accept(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:293
// [-2] void ignore(class QGesture *)
extern "C"
void C_ZN13QGestureEvent6ignoreEP8QGesture(void *this_, QGesture * arg0) {
  ((QGestureEvent*)this_)->ignore(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:294
// [1] bool isAccepted(class QGesture *)
extern "C"
bool C_ZNK13QGestureEvent10isAcceptedEP8QGesture(void *this_, QGesture * arg0) {
  return (bool)((QGestureEvent*)this_)->isAccepted(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:296
// [-2] void setAccepted(Qt::GestureType, _Bool)
extern "C"
void C_ZN13QGestureEvent11setAcceptedEN2Qt11GestureTypeEb(void *this_, Qt::GestureType arg0, bool arg1) {
  ((QGestureEvent*)this_)->setAccepted(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:297
// [-2] void accept(Qt::GestureType)
extern "C"
void C_ZN13QGestureEvent6acceptEN2Qt11GestureTypeE(void *this_, Qt::GestureType arg0) {
  ((QGestureEvent*)this_)->accept(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:298
// [-2] void ignore(Qt::GestureType)
extern "C"
void C_ZN13QGestureEvent6ignoreEN2Qt11GestureTypeE(void *this_, Qt::GestureType arg0) {
  ((QGestureEvent*)this_)->ignore(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:299
// [1] bool isAccepted(Qt::GestureType)
extern "C"
bool C_ZNK13QGestureEvent10isAcceptedEN2Qt11GestureTypeE(void *this_, Qt::GestureType arg0) {
  return (bool)((QGestureEvent*)this_)->isAccepted(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:301
// [-2] void setWidget(class QWidget *)
extern "C"
void C_ZN13QGestureEvent9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGestureEvent*)this_)->setWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:302
// [8] QWidget * widget()
extern "C"
void* C_ZNK13QGestureEvent6widgetEv(void *this_) {
  return (void*)((QGestureEvent*)this_)->widget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:305
// [16] QPointF mapToGraphicsScene(const class QPointF &)
extern "C"
void* C_ZNK13QGestureEvent18mapToGraphicsSceneERK7QPointF(void *this_, QPointF* gesturePoint) {
  auto rv = ((QGestureEvent*)this_)->mapToGraphicsScene(*gesturePoint);
return new QPointF(rv);
}
//  main block end
