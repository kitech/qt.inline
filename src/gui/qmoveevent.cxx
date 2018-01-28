//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QMoveEvent is pure virtual: false
//  header block end

//  main block begin

class MyQMoveEvent : public QMoveEvent {
public:
MyQMoveEvent(const QPoint & pos, const QPoint & oldPos) : QMoveEvent(pos, oldPos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:421
// [-2] void QMoveEvent(const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN10QMoveEventC1ERK6QPointS2_(const QPoint & pos, const QPoint & oldPos) {
  (MyQMoveEvent*)(0);
  return  new MyQMoveEvent(pos, oldPos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:422
// [-2] void ~QMoveEvent()
extern "C"
void C_ZN10QMoveEventD1Ev(void *this_) {
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
