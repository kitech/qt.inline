//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:84
// void QEnterEvent(const class QPointF &, const class QPointF &, const class QPointF &)
extern "C"
void* C_ZN11QEnterEventC1ERK7QPointFS2_S2_(const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos) {
  return new QEnterEvent(localPos, windowPos, screenPos);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:85
// void ~QEnterEvent()
extern "C"
void C_ZN11QEnterEventD1Ev(void *this_) {
  delete (QEnterEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:88
// QPoint pos()
extern "C"
void C_ZNK11QEnterEvent3posEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:89
// QPoint globalPos()
extern "C"
void C_ZNK11QEnterEvent9globalPosEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->globalPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:90
// int x()
extern "C"
void C_ZNK11QEnterEvent1xEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qevent.h:91
// int y()
extern "C"
void C_ZNK11QEnterEvent1yEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qevent.h:92
// int globalX()
extern "C"
void C_ZNK11QEnterEvent7globalXEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->globalX();
}
// inline
// /usr/include/qt/QtGui/qevent.h:93
// int globalY()
extern "C"
void C_ZNK11QEnterEvent7globalYEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->globalY();
}
// inline
// /usr/include/qt/QtGui/qevent.h:95
// const QPointF & localPos()
extern "C"
void C_ZNK11QEnterEvent8localPosEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->localPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:96
// const QPointF & windowPos()
extern "C"
void C_ZNK11QEnterEvent9windowPosEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->windowPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:97
// const QPointF & screenPos()
extern "C"
void C_ZNK11QEnterEvent9screenPosEv(void *this_) {
  /*return*/ ((QEnterEvent*)this_)->screenPos();
}
//  main block end
