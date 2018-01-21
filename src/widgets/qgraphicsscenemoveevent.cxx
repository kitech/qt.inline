//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:313
// void QGraphicsSceneMoveEvent()
extern "C"
void* C_ZN23QGraphicsSceneMoveEventC1Ev() {
  return new QGraphicsSceneMoveEvent();
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:314
// void ~QGraphicsSceneMoveEvent()
extern "C"
void C_ZN23QGraphicsSceneMoveEventD1Ev(void *this_) {
  delete (QGraphicsSceneMoveEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:316
// QPointF oldPos()
extern "C"
void C_ZNK23QGraphicsSceneMoveEvent6oldPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneMoveEvent*)this_)->oldPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:317
// void setOldPos(const class QPointF &)
extern "C"
void C_ZN23QGraphicsSceneMoveEvent9setOldPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneMoveEvent*)this_)->setOldPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:319
// QPointF newPos()
extern "C"
void C_ZNK23QGraphicsSceneMoveEvent6newPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneMoveEvent*)this_)->newPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:320
// void setNewPos(const class QPointF &)
extern "C"
void C_ZN23QGraphicsSceneMoveEvent9setNewPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneMoveEvent*)this_)->setNewPos(pos);
}
//  main block end
