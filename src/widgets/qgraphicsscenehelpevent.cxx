//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:234
// void QGraphicsSceneHelpEvent(enum QEvent::Type)
extern "C"
void* C_ZN23QGraphicsSceneHelpEventC1EN6QEvent4TypeE(QEvent::Type type) {
  return new QGraphicsSceneHelpEvent(type);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:235
// void ~QGraphicsSceneHelpEvent()
extern "C"
void C_ZN23QGraphicsSceneHelpEventD1Ev(void *this_) {
  delete (QGraphicsSceneHelpEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:237
// QPointF scenePos()
extern "C"
void C_ZNK23QGraphicsSceneHelpEvent8scenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneHelpEvent*)this_)->scenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:238
// void setScenePos(const class QPointF &)
extern "C"
void C_ZN23QGraphicsSceneHelpEvent11setScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneHelpEvent*)this_)->setScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:240
// QPoint screenPos()
extern "C"
void C_ZNK23QGraphicsSceneHelpEvent9screenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneHelpEvent*)this_)->screenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:241
// void setScreenPos(const class QPoint &)
extern "C"
void C_ZN23QGraphicsSceneHelpEvent12setScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneHelpEvent*)this_)->setScreenPos(pos);
}
//  main block end
