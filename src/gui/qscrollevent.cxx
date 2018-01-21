//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:972
// void QScrollEvent(const class QPointF &, const class QPointF &, enum QScrollEvent::ScrollState)
extern "C"
void* C_ZN12QScrollEventC1ERK7QPointFS2_NS_11ScrollStateE(const QPointF & contentPos, const QPointF & overshoot, QScrollEvent::ScrollState scrollState) {
  return new QScrollEvent(contentPos, overshoot, scrollState);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:973
// void ~QScrollEvent()
extern "C"
void C_ZN12QScrollEventD1Ev(void *this_) {
  delete (QScrollEvent*)(this_);
}
// /usr/include/qt/QtGui/qevent.h:975
// QPointF contentPos()
extern "C"
void C_ZNK12QScrollEvent10contentPosEv(void *this_) {
  /*return*/ ((QScrollEvent*)this_)->contentPos();
}
// /usr/include/qt/QtGui/qevent.h:976
// QPointF overshootDistance()
extern "C"
void C_ZNK12QScrollEvent17overshootDistanceEv(void *this_) {
  /*return*/ ((QScrollEvent*)this_)->overshootDistance();
}
// /usr/include/qt/QtGui/qevent.h:977
// QScrollEvent::ScrollState scrollState()
extern "C"
void C_ZNK12QScrollEvent11scrollStateEv(void *this_) {
  /*return*/ ((QScrollEvent*)this_)->scrollState();
}
//  main block end
