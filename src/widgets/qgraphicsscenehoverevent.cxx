//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:201
// void QGraphicsSceneHoverEvent(enum QEvent::Type)
extern "C"
void* C_ZN24QGraphicsSceneHoverEventC1EN6QEvent4TypeE(QEvent::Type type) {
  return new QGraphicsSceneHoverEvent(type);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:202
// void ~QGraphicsSceneHoverEvent()
extern "C"
void C_ZN24QGraphicsSceneHoverEventD1Ev(void *this_) {
  delete (QGraphicsSceneHoverEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:204
// QPointF pos()
extern "C"
void C_ZNK24QGraphicsSceneHoverEvent3posEv(void *this_) {
  /*return*/ ((QGraphicsSceneHoverEvent*)this_)->pos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:205
// void setPos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneHoverEvent6setPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:207
// QPointF scenePos()
extern "C"
void C_ZNK24QGraphicsSceneHoverEvent8scenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneHoverEvent*)this_)->scenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:208
// void setScenePos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneHoverEvent11setScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:210
// QPoint screenPos()
extern "C"
void C_ZNK24QGraphicsSceneHoverEvent9screenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneHoverEvent*)this_)->screenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:211
// void setScreenPos(const class QPoint &)
extern "C"
void C_ZN24QGraphicsSceneHoverEvent12setScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setScreenPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:213
// QPointF lastPos()
extern "C"
void C_ZNK24QGraphicsSceneHoverEvent7lastPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneHoverEvent*)this_)->lastPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:214
// void setLastPos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneHoverEvent10setLastPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setLastPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:216
// QPointF lastScenePos()
extern "C"
void C_ZNK24QGraphicsSceneHoverEvent12lastScenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneHoverEvent*)this_)->lastScenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:217
// void setLastScenePos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneHoverEvent15setLastScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setLastScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:219
// QPoint lastScreenPos()
extern "C"
void C_ZNK24QGraphicsSceneHoverEvent13lastScreenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneHoverEvent*)this_)->lastScreenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:220
// void setLastScreenPos(const class QPoint &)
extern "C"
void C_ZN24QGraphicsSceneHoverEvent16setLastScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneHoverEvent*)this_)->setLastScreenPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:222
// Qt::KeyboardModifiers modifiers()
extern "C"
void C_ZNK24QGraphicsSceneHoverEvent9modifiersEv(void *this_) {
  /*return*/ ((QGraphicsSceneHoverEvent*)this_)->modifiers();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:223
// void setModifiers(Qt::KeyboardModifiers)
extern "C"
void C_ZN24QGraphicsSceneHoverEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneHoverEvent*)this_)->setModifiers(modifiers);
}
//  main block end
