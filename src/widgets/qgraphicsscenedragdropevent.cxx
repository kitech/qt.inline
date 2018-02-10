//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneDragDropEvent is pure virtual: false
// QGraphicsSceneDragDropEvent has virtual projected: false
//  header block end

//  main block begin

class MyQGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent {
public:
  virtual ~MyQGraphicsSceneDragDropEvent() {}
// void QGraphicsSceneDragDropEvent(enum QEvent::Type)
MyQGraphicsSceneDragDropEvent(QEvent::Type type_) : QGraphicsSceneDragDropEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:252
// [-2] void QGraphicsSceneDragDropEvent(enum QEvent::Type)
extern "C"
void* C_ZN27QGraphicsSceneDragDropEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneDragDropEvent(type_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:253
// [-2] void ~QGraphicsSceneDragDropEvent()
extern "C"
void C_ZN27QGraphicsSceneDragDropEventD2Ev(void *this_) {
  delete (QGraphicsSceneDragDropEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:255
// [16] QPointF pos()
extern "C"
void* C_ZNK27QGraphicsSceneDragDropEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneDragDropEvent*)this_)->pos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:256
// [-2] void setPos(const class QPointF &)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setPos(*pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:258
// [16] QPointF scenePos()
extern "C"
void* C_ZNK27QGraphicsSceneDragDropEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneDragDropEvent*)this_)->scenePos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:259
// [-2] void setScenePos(const class QPointF &)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setScenePos(*pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:261
// [8] QPoint screenPos()
extern "C"
void* C_ZNK27QGraphicsSceneDragDropEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneDragDropEvent*)this_)->screenPos();
return new QPoint(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:262
// [-2] void setScreenPos(const class QPoint &)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneDragDropEvent*)this_)->setScreenPos(*pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:264
// [4] Qt::MouseButtons buttons()
extern "C"
Qt::MouseButtons C_ZNK27QGraphicsSceneDragDropEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QGraphicsSceneDragDropEvent*)this_)->buttons();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:265
// [-2] void setButtons(Qt::MouseButtons)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneDragDropEvent*)this_)->setButtons(buttons);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:267
// [4] Qt::KeyboardModifiers modifiers()
extern "C"
Qt::KeyboardModifiers C_ZNK27QGraphicsSceneDragDropEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneDragDropEvent*)this_)->modifiers();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:268
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneDragDropEvent*)this_)->setModifiers(modifiers);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:270
// [4] Qt::DropActions possibleActions()
extern "C"
Qt::DropActions C_ZNK27QGraphicsSceneDragDropEvent15possibleActionsEv(void *this_) {
  return (Qt::DropActions)((QGraphicsSceneDragDropEvent*)this_)->possibleActions();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:271
// [-2] void setPossibleActions(Qt::DropActions)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent18setPossibleActionsE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> actions) {
  ((QGraphicsSceneDragDropEvent*)this_)->setPossibleActions(actions);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:273
// [4] Qt::DropAction proposedAction()
extern "C"
Qt::DropAction C_ZNK27QGraphicsSceneDragDropEvent14proposedActionEv(void *this_) {
  return (Qt::DropAction)((QGraphicsSceneDragDropEvent*)this_)->proposedAction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:274
// [-2] void setProposedAction(Qt::DropAction)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent17setProposedActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QGraphicsSceneDragDropEvent*)this_)->setProposedAction(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:275
// [-2] void acceptProposedAction()
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent20acceptProposedActionEv(void *this_) {
  ((QGraphicsSceneDragDropEvent*)this_)->acceptProposedAction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:277
// [4] Qt::DropAction dropAction()
extern "C"
Qt::DropAction C_ZNK27QGraphicsSceneDragDropEvent10dropActionEv(void *this_) {
  return (Qt::DropAction)((QGraphicsSceneDragDropEvent*)this_)->dropAction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:278
// [-2] void setDropAction(Qt::DropAction)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent13setDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QGraphicsSceneDragDropEvent*)this_)->setDropAction(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:280
// [8] QWidget * source()
extern "C"
void* C_ZNK27QGraphicsSceneDragDropEvent6sourceEv(void *this_) {
  return (void*)((QGraphicsSceneDragDropEvent*)this_)->source();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:281
// [-2] void setSource(class QWidget *)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent9setSourceEP7QWidget(void *this_, QWidget * source) {
  ((QGraphicsSceneDragDropEvent*)this_)->setSource(source);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:283
// [8] const QMimeData * mimeData()
extern "C"
void* C_ZNK27QGraphicsSceneDragDropEvent8mimeDataEv(void *this_) {
  return (void*)((QGraphicsSceneDragDropEvent*)this_)->mimeData();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:284
// [-2] void setMimeData(const class QMimeData *)
extern "C"
void C_ZN27QGraphicsSceneDragDropEvent11setMimeDataEPK9QMimeData(void *this_, const QMimeData * data) {
  ((QGraphicsSceneDragDropEvent*)this_)->setMimeData(data);
}
//  main block end
