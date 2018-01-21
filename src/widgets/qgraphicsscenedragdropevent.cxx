//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:252
// void QGraphicsSceneDragDropEvent(enum QEvent::Type)
extern "C"
void* C_ZN27QGraphicsSceneDragDropEventC1EN6QEvent4TypeE(QEvent::Type type) {
  return new QGraphicsSceneDragDropEvent(type);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:253
// void ~QGraphicsSceneDragDropEvent()
extern "C"
void C_ZN27QGraphicsSceneDragDropEventD1Ev(void *this_) {
  delete (QGraphicsSceneDragDropEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:255
// QPointF pos()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent3posEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->pos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:256
// void setPos(const class QPointF &)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent6setPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:258
// QPointF scenePos()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent8scenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->scenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:259
// void setScenePos(const class QPointF &)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent11setScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:261
// QPoint screenPos()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent9screenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->screenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:262
// void setScreenPos(const class QPoint &)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent12setScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setScreenPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:264
// Qt::MouseButtons buttons()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent7buttonsEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->buttons();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:265
// void setButtons(Qt::MouseButtons)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneDragDropEvent*)this_)->setButtons(buttons);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:267
// Qt::KeyboardModifiers modifiers()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent9modifiersEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->modifiers();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:268
// void setModifiers(Qt::KeyboardModifiers)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneDragDropEvent*)this_)->setModifiers(modifiers);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:270
// Qt::DropActions possibleActions()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent15possibleActionsEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->possibleActions();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:271
// void setPossibleActions(Qt::DropActions)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent18setPossibleActionsE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> actions) {
  ((QGraphicsSceneDragDropEvent*)this_)->setPossibleActions(actions);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:273
// Qt::DropAction proposedAction()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent14proposedActionEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->proposedAction();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:274
// void setProposedAction(Qt::DropAction)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent17setProposedActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QGraphicsSceneDragDropEvent*)this_)->setProposedAction(action);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:275
// void acceptProposedAction()
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent20acceptProposedActionEv(void *this_) {
  ((QGraphicsSceneDragDropEvent*)this_)->acceptProposedAction();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:277
// Qt::DropAction dropAction()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent10dropActionEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->dropAction();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:278
// void setDropAction(Qt::DropAction)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent13setDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QGraphicsSceneDragDropEvent*)this_)->setDropAction(action);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:280
// QWidget * source()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent6sourceEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->source();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:281
// void setSource(class QWidget *)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent9setSourceEP7QWidget(void *this_, QWidget * source) {
  ((QGraphicsSceneDragDropEvent*)this_)->setSource(source);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:283
// const QMimeData * mimeData()
extern "C"
void C_ZNK27QGraphicsSceneDragDropEvent8mimeDataEv(void *this_) {
  /*return*/ ((QGraphicsSceneDragDropEvent*)this_)->mimeData();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:284
// void setMimeData(const class QMimeData *)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent11setMimeDataEPK9QMimeData(void *this_, const QMimeData * data) {
  ((QGraphicsSceneDragDropEvent*)this_)->setMimeData(data);
}
//  main block end
