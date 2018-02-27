//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QMoveEvent is pure virtual: false
// QMoveEvent has virtual projected: false
//  header block end

//  main block begin

class MyQMoveEvent : public QMoveEvent {
public:
  virtual ~MyQMoveEvent() {}
// void QMoveEvent(const class QPoint &, const class QPoint &)
MyQMoveEvent(const QPoint & pos, const QPoint & oldPos) : QMoveEvent(pos, oldPos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:421
// [-2] void QMoveEvent(const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN10QMoveEventC2ERK6QPointS2_(QPoint* pos, QPoint* oldPos) {
  return  new QMoveEvent(*pos, *oldPos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:422
// [-2] void ~QMoveEvent()
extern "C"
void C_ZN10QMoveEventD2Ev(void *this_) {
  delete (QMoveEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:424
// [8] const QPoint & pos()
extern "C"
void* C_ZNK10QMoveEvent3posEv(void *this_) {
  auto& rv = ((QMoveEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:425
// [8] const QPoint & oldPos()
extern "C"
void* C_ZNK10QMoveEvent6oldPosEv(void *this_) {
  auto& rv = ((QMoveEvent*)this_)->oldPos();
return new QPoint(rv);
}

//  main block end
