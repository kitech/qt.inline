//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:501
// void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &, Qt::KeyboardModifiers)
extern "C"
void* C_ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_6QFlagsIN2Qt16KeyboardModifierEE(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QContextMenuEvent(reason, pos, globalPos, modifiers);
}
// /usr/include/qt/QtGui/qevent.h:503
// void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN17QContextMenuEventC1ENS_6ReasonERK6QPointS3_(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos) {
  return new QContextMenuEvent(reason, pos, globalPos);
}
// /usr/include/qt/QtGui/qevent.h:504
// void QContextMenuEvent(enum QContextMenuEvent::Reason, const class QPoint &)
extern "C"
void* C_ZN17QContextMenuEventC1ENS_6ReasonERK6QPoint(QContextMenuEvent::Reason reason, const QPoint & pos) {
  return new QContextMenuEvent(reason, pos);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:505
// void ~QContextMenuEvent()
extern "C"
void C_ZN17QContextMenuEventD1Ev(void *this_) {
  delete (QContextMenuEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:507
// int x()
extern "C"
void C_ZNK17QContextMenuEvent1xEv(void *this_) {
  /*return*/ ((QContextMenuEvent*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qevent.h:508
// int y()
extern "C"
void C_ZNK17QContextMenuEvent1yEv(void *this_) {
  /*return*/ ((QContextMenuEvent*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qevent.h:509
// int globalX()
extern "C"
void C_ZNK17QContextMenuEvent7globalXEv(void *this_) {
  /*return*/ ((QContextMenuEvent*)this_)->globalX();
}
// inline
// /usr/include/qt/QtGui/qevent.h:510
// int globalY()
extern "C"
void C_ZNK17QContextMenuEvent7globalYEv(void *this_) {
  /*return*/ ((QContextMenuEvent*)this_)->globalY();
}
// inline
// /usr/include/qt/QtGui/qevent.h:512
// const QPoint & pos()
extern "C"
void C_ZNK17QContextMenuEvent3posEv(void *this_) {
  /*return*/ ((QContextMenuEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:513
// const QPoint & globalPos()
extern "C"
void C_ZNK17QContextMenuEvent9globalPosEv(void *this_) {
  /*return*/ ((QContextMenuEvent*)this_)->globalPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:515
// QContextMenuEvent::Reason reason()
extern "C"
void C_ZNK17QContextMenuEvent6reasonEv(void *this_) {
  /*return*/ ((QContextMenuEvent*)this_)->reason();
}
//  main block end
