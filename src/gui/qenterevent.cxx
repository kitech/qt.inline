//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QEnterEvent is pure virtual: false
// QEnterEvent has virtual projected: false
//  header block end

//  main block begin

class MyQEnterEvent : public QEnterEvent {
public:
  virtual ~MyQEnterEvent() {}
// void QEnterEvent(const class QPointF &, const class QPointF &, const class QPointF &)
MyQEnterEvent(const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos) : QEnterEvent(localPos, windowPos, screenPos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:85
// [-2] void QEnterEvent(const class QPointF &, const class QPointF &, const class QPointF &)
extern "C"
void* C_ZN11QEnterEventC2ERK7QPointFS2_S2_(const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos) {
  return  new QEnterEvent(localPos, windowPos, screenPos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:86
// [-2] void ~QEnterEvent()
extern "C"
void C_ZN11QEnterEventD2Ev(void *this_) {
  delete (QEnterEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:89
// [8] QPoint pos()
extern "C"
void* C_ZNK11QEnterEvent3posEv(void *this_) {
  auto rv = ((QEnterEvent*)this_)->pos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:90
// [8] QPoint globalPos()
extern "C"
void* C_ZNK11QEnterEvent9globalPosEv(void *this_) {
  auto rv = ((QEnterEvent*)this_)->globalPos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:91
// [4] int x()
extern "C"
int C_ZNK11QEnterEvent1xEv(void *this_) {
  return (int)((QEnterEvent*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:92
// [4] int y()
extern "C"
int C_ZNK11QEnterEvent1yEv(void *this_) {
  return (int)((QEnterEvent*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:93
// [4] int globalX()
extern "C"
int C_ZNK11QEnterEvent7globalXEv(void *this_) {
  return (int)((QEnterEvent*)this_)->globalX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:94
// [4] int globalY()
extern "C"
int C_ZNK11QEnterEvent7globalYEv(void *this_) {
  return (int)((QEnterEvent*)this_)->globalY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:96
// [16] const QPointF & localPos()
extern "C"
void* C_ZNK11QEnterEvent8localPosEv(void *this_) {
  auto& rv = ((QEnterEvent*)this_)->localPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:97
// [16] const QPointF & windowPos()
extern "C"
void* C_ZNK11QEnterEvent9windowPosEv(void *this_) {
  auto& rv = ((QEnterEvent*)this_)->windowPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:98
// [16] const QPointF & screenPos()
extern "C"
void* C_ZNK11QEnterEvent9screenPosEv(void *this_) {
  auto& rv = ((QEnterEvent*)this_)->screenPos();
return new QPointF(rv);
}
//  main block end
