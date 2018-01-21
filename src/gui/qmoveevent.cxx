//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:411
// void QMoveEvent(const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN10QMoveEventC1ERK6QPointS2_(const QPoint & pos, const QPoint & oldPos) {
  return new QMoveEvent(pos, oldPos);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:412
// void ~QMoveEvent()
extern "C"
void C_ZN10QMoveEventD1Ev(void *this_) {
  delete (QMoveEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:414
// const QPoint & pos()
extern "C"
void C_ZNK10QMoveEvent3posEv(void *this_) {
  /*return*/ ((QMoveEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:415
// const QPoint & oldPos()
extern "C"
void C_ZNK10QMoveEvent6oldPosEv(void *this_) {
  /*return*/ ((QMoveEvent*)this_)->oldPos();
}
//  main block end
