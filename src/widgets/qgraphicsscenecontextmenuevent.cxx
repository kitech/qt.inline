//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:174
// void QGraphicsSceneContextMenuEvent(enum QEvent::Type)
extern "C"
void* C_ZN30QGraphicsSceneContextMenuEventC1EN6QEvent4TypeE(QEvent::Type type) {
  return new QGraphicsSceneContextMenuEvent(type);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:175
// void ~QGraphicsSceneContextMenuEvent()
extern "C"
void C_ZN30QGraphicsSceneContextMenuEventD1Ev(void *this_) {
  delete (QGraphicsSceneContextMenuEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:177
// QPointF pos()
extern "C"
void C_ZNK30QGraphicsSceneContextMenuEvent3posEv(void *this_) {
  /*return*/ ((QGraphicsSceneContextMenuEvent*)this_)->pos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:178
// void setPos(const class QPointF &)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent6setPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:180
// QPointF scenePos()
extern "C"
void C_ZNK30QGraphicsSceneContextMenuEvent8scenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneContextMenuEvent*)this_)->scenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:181
// void setScenePos(const class QPointF &)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent11setScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:183
// QPoint screenPos()
extern "C"
void C_ZNK30QGraphicsSceneContextMenuEvent9screenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneContextMenuEvent*)this_)->screenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:184
// void setScreenPos(const class QPoint &)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent12setScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setScreenPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:186
// Qt::KeyboardModifiers modifiers()
extern "C"
void C_ZNK30QGraphicsSceneContextMenuEvent9modifiersEv(void *this_) {
  /*return*/ ((QGraphicsSceneContextMenuEvent*)this_)->modifiers();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:187
// void setModifiers(Qt::KeyboardModifiers)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setModifiers(modifiers);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:189
// QGraphicsSceneContextMenuEvent::Reason reason()
extern "C"
void C_ZNK30QGraphicsSceneContextMenuEvent6reasonEv(void *this_) {
  /*return*/ ((QGraphicsSceneContextMenuEvent*)this_)->reason();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:190
// void setReason(enum QGraphicsSceneContextMenuEvent::Reason)
extern "C"
void C_ZN30QGraphicsSceneContextMenuEvent9setReasonENS_6ReasonE(void *this_, QGraphicsSceneContextMenuEvent::Reason reason) {
  ((QGraphicsSceneContextMenuEvent*)this_)->setReason(reason);
}
//  main block end
