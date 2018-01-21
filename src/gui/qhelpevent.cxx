//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:669
// void QHelpEvent(enum QEvent::Type, const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN10QHelpEventC1EN6QEvent4TypeERK6QPointS4_(QEvent::Type type, const QPoint & pos, const QPoint & globalPos) {
  return new QHelpEvent(type, pos, globalPos);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:670
// void ~QHelpEvent()
extern "C"
void C_ZN10QHelpEventD1Ev(void *this_) {
  delete (QHelpEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:672
// int x()
extern "C"
void C_ZNK10QHelpEvent1xEv(void *this_) {
  /*return*/ ((QHelpEvent*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qevent.h:673
// int y()
extern "C"
void C_ZNK10QHelpEvent1yEv(void *this_) {
  /*return*/ ((QHelpEvent*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qevent.h:674
// int globalX()
extern "C"
void C_ZNK10QHelpEvent7globalXEv(void *this_) {
  /*return*/ ((QHelpEvent*)this_)->globalX();
}
// inline
// /usr/include/qt/QtGui/qevent.h:675
// int globalY()
extern "C"
void C_ZNK10QHelpEvent7globalYEv(void *this_) {
  /*return*/ ((QHelpEvent*)this_)->globalY();
}
// inline
// /usr/include/qt/QtGui/qevent.h:677
// const QPoint & pos()
extern "C"
void C_ZNK10QHelpEvent3posEv(void *this_) {
  /*return*/ ((QHelpEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:678
// const QPoint & globalPos()
extern "C"
void C_ZNK10QHelpEvent9globalPosEv(void *this_) {
  /*return*/ ((QHelpEvent*)this_)->globalPos();
}
//  main block end
