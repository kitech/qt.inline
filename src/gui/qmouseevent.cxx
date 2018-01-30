//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QMouseEvent is pure virtual: false
// QMouseEvent has virtual projected: false
//  header block end

//  main block begin

class MyQMouseEvent : public QMouseEvent {
public:
  virtual ~MyQMouseEvent() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:118
// [-2] void ~QMouseEvent()
extern "C"
void C_ZN11QMouseEventD2Ev(void *this_) {
  delete (QMouseEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:121
// [8] QPoint pos()
extern "C"
void* C_ZNK11QMouseEvent3posEv(void *this_) {
  auto rv = ((QMouseEvent*)this_)->pos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:122
// [8] QPoint globalPos()
extern "C"
void* C_ZNK11QMouseEvent9globalPosEv(void *this_) {
  auto rv = ((QMouseEvent*)this_)->globalPos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:123
// [4] int x()
extern "C"
int C_ZNK11QMouseEvent1xEv(void *this_) {
  return (int)((QMouseEvent*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:124
// [4] int y()
extern "C"
int C_ZNK11QMouseEvent1yEv(void *this_) {
  return (int)((QMouseEvent*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:125
// [4] int globalX()
extern "C"
int C_ZNK11QMouseEvent7globalXEv(void *this_) {
  return (int)((QMouseEvent*)this_)->globalX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:126
// [4] int globalY()
extern "C"
int C_ZNK11QMouseEvent7globalYEv(void *this_) {
  return (int)((QMouseEvent*)this_)->globalY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:128
// [16] const QPointF & localPos()
extern "C"
void* C_ZNK11QMouseEvent8localPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->localPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:129
// [16] const QPointF & windowPos()
extern "C"
void* C_ZNK11QMouseEvent9windowPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->windowPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:130
// [16] const QPointF & screenPos()
extern "C"
void* C_ZNK11QMouseEvent9screenPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->screenPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:132
// [4] Qt::MouseButton button()
extern "C"
Qt::MouseButton C_ZNK11QMouseEvent6buttonEv(void *this_) {
  return (Qt::MouseButton)((QMouseEvent*)this_)->button();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:133
// [4] Qt::MouseButtons buttons()
extern "C"
Qt::MouseButtons C_ZNK11QMouseEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QMouseEvent*)this_)->buttons();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:135
// [-2] void setLocalPos(const class QPointF &)
extern "C"
void C_ZN11QMouseEvent11setLocalPosERK7QPointF(void *this_, const QPointF & localPosition) {
  ((QMouseEvent*)this_)->setLocalPos(localPosition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:141
// [4] Qt::MouseEventSource source()
extern "C"
Qt::MouseEventSource C_ZNK11QMouseEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QMouseEvent*)this_)->source();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:142
// [4] Qt::MouseEventFlags flags()
extern "C"
Qt::MouseEventFlags C_ZNK11QMouseEvent5flagsEv(void *this_) {
  return (Qt::MouseEventFlags)((QMouseEvent*)this_)->flags();
}
//  main block end
