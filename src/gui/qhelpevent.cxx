//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHelpEvent is pure virtual: false
// QHelpEvent has virtual projected: false
//  header block end

//  main block begin

class MyQHelpEvent : public QHelpEvent {
public:
  virtual ~MyQHelpEvent() {}
// void QHelpEvent(enum QEvent::Type, const class QPoint &, const class QPoint &)
MyQHelpEvent(QEvent::Type type_, const QPoint & pos, const QPoint & globalPos) : QHelpEvent(type_, pos, globalPos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:680
// [-2] void QHelpEvent(enum QEvent::Type, const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN10QHelpEventC2EN6QEvent4TypeERK6QPointS4_(QEvent::Type type_, QPoint* pos, QPoint* globalPos) {
  return  new QHelpEvent(type_, *pos, *globalPos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:681
// [-2] void ~QHelpEvent()
extern "C"
void C_ZN10QHelpEventD2Ev(void *this_) {
  delete (QHelpEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:683
// [4] int x()
extern "C"
int C_ZNK10QHelpEvent1xEv(void *this_) {
  return (int)((QHelpEvent*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:684
// [4] int y()
extern "C"
int C_ZNK10QHelpEvent1yEv(void *this_) {
  return (int)((QHelpEvent*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:685
// [4] int globalX()
extern "C"
int C_ZNK10QHelpEvent7globalXEv(void *this_) {
  return (int)((QHelpEvent*)this_)->globalX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:686
// [4] int globalY()
extern "C"
int C_ZNK10QHelpEvent7globalYEv(void *this_) {
  return (int)((QHelpEvent*)this_)->globalY();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:688
// [8] const QPoint & pos()
extern "C"
void* C_ZNK10QHelpEvent3posEv(void *this_) {
  auto& rv = ((QHelpEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:689
// [8] const QPoint & globalPos()
extern "C"
void* C_ZNK10QHelpEvent9globalPosEv(void *this_) {
  auto& rv = ((QHelpEvent*)this_)->globalPos();
return new QPoint(rv);
}

//  main block end
