//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:85
// void QGraphicsSceneMouseEvent(enum QEvent::Type)
extern "C"
void* C_ZN24QGraphicsSceneMouseEventC1EN6QEvent4TypeE(QEvent::Type type) {
  return new QGraphicsSceneMouseEvent(type);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:86
// void ~QGraphicsSceneMouseEvent()
extern "C"
void C_ZN24QGraphicsSceneMouseEventD1Ev(void *this_) {
  delete (QGraphicsSceneMouseEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:88
// QPointF pos()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent3posEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->pos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:89
// void setPos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent6setPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:91
// QPointF scenePos()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent8scenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->scenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:92
// void setScenePos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent11setScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:94
// QPoint screenPos()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent9screenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->screenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:95
// void setScreenPos(const class QPoint &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent12setScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setScreenPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:97
// QPointF buttonDownPos(Qt::MouseButton)
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent13buttonDownPosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->buttonDownPos(button);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:98
// void setButtonDownPos(Qt::MouseButton, const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent16setButtonDownPosEN2Qt11MouseButtonERK7QPointF(void *this_, Qt::MouseButton button, const QPointF & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownPos(button, pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:100
// QPointF buttonDownScenePos(Qt::MouseButton)
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent18buttonDownScenePosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->buttonDownScenePos(button);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:101
// void setButtonDownScenePos(Qt::MouseButton, const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent21setButtonDownScenePosEN2Qt11MouseButtonERK7QPointF(void *this_, Qt::MouseButton button, const QPointF & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownScenePos(button, pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:103
// QPoint buttonDownScreenPos(Qt::MouseButton)
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent19buttonDownScreenPosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->buttonDownScreenPos(button);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:104
// void setButtonDownScreenPos(Qt::MouseButton, const class QPoint &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent22setButtonDownScreenPosEN2Qt11MouseButtonERK6QPoint(void *this_, Qt::MouseButton button, const QPoint & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownScreenPos(button, pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:106
// QPointF lastPos()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent7lastPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->lastPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:107
// void setLastPos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent10setLastPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:109
// QPointF lastScenePos()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent12lastScenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->lastScenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:110
// void setLastScenePos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent15setLastScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:112
// QPoint lastScreenPos()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent13lastScreenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->lastScreenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:113
// void setLastScreenPos(const class QPoint &)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent16setLastScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastScreenPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:115
// Qt::MouseButtons buttons()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent7buttonsEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->buttons();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:116
// void setButtons(Qt::MouseButtons)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtons(buttons);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:118
// Qt::MouseButton button()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent6buttonEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->button();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:119
// void setButton(Qt::MouseButton)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent9setButtonEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  ((QGraphicsSceneMouseEvent*)this_)->setButton(button);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:121
// Qt::KeyboardModifiers modifiers()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent9modifiersEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->modifiers();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:122
// void setModifiers(Qt::KeyboardModifiers)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneMouseEvent*)this_)->setModifiers(modifiers);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:124
// Qt::MouseEventSource source()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent6sourceEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->source();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:125
// void setSource(Qt::MouseEventSource)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent9setSourceEN2Qt16MouseEventSourceE(void *this_, Qt::MouseEventSource source) {
  ((QGraphicsSceneMouseEvent*)this_)->setSource(source);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:127
// Qt::MouseEventFlags flags()
extern "C"
void C_ZNK24QGraphicsSceneMouseEvent5flagsEv(void *this_) {
  /*return*/ ((QGraphicsSceneMouseEvent*)this_)->flags();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:128
// void setFlags(Qt::MouseEventFlags)
extern "C"
void C_ZN24QGraphicsSceneMouseEvent8setFlagsE6QFlagsIN2Qt14MouseEventFlagEE(void *this_, Qt::MouseEventFlags arg0) {
  ((QGraphicsSceneMouseEvent*)this_)->setFlags(arg0);
}
//  main block end
