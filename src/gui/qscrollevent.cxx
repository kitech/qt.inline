//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QScrollEvent is pure virtual: false
// QScrollEvent has virtual projected: false
//  header block end

//  main block begin

class MyQScrollEvent : public QScrollEvent {
public:
  virtual ~MyQScrollEvent() {}
// void QScrollEvent(const class QPointF &, const class QPointF &, enum QScrollEvent::ScrollState)
MyQScrollEvent(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState) : QScrollEvent(contentPos, overshoot, scrollState) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1022
// [-2] void QScrollEvent(const class QPointF &, const class QPointF &, enum QScrollEvent::ScrollState)
extern "C"
void* C_ZN12QScrollEventC2ERK7QPointFS2_NS_11ScrollStateE(QPointF* contentPos, QPointF* overshoot, QScrollEvent::ScrollState scrollState) {
  return  new QScrollEvent(*contentPos, *overshoot, scrollState);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1023
// [-2] void ~QScrollEvent()
extern "C"
void C_ZN12QScrollEventD2Ev(void *this_) {
  delete (QScrollEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1025
// [16] QPointF contentPos()
extern "C"
void* C_ZNK12QScrollEvent10contentPosEv(void *this_) {
  auto rv = ((QScrollEvent*)this_)->contentPos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1026
// [16] QPointF overshootDistance()
extern "C"
void* C_ZNK12QScrollEvent17overshootDistanceEv(void *this_) {
  auto rv = ((QScrollEvent*)this_)->overshootDistance();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1027
// [4] QScrollEvent::ScrollState scrollState()
extern "C"
QScrollEvent::ScrollState C_ZNK12QScrollEvent11scrollStateEv(void *this_) {
  return (QScrollEvent::ScrollState)((QScrollEvent*)this_)->scrollState();
}
//  main block end
