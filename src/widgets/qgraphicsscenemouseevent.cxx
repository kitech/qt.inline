//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneMouseEvent is pure virtual: false
// QGraphicsSceneMouseEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent {
public:
  virtual ~MyQGraphicsSceneMouseEvent() {}
// void QGraphicsSceneMouseEvent(enum QEvent::Type)
MyQGraphicsSceneMouseEvent(QEvent::Type type_) : QGraphicsSceneMouseEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:85
// [-2] void QGraphicsSceneMouseEvent(enum QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN24QGraphicsSceneMouseEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneMouseEvent(type_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:86
// [-2] void ~QGraphicsSceneMouseEvent()
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEventD2Ev(void *this_) {
  delete (QGraphicsSceneMouseEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:88
// [16] QPointF pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent3posEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->pos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:89
// [-2] void setPos(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent6setPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:91
// [16] QPointF scenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent8scenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->scenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:92
// [-2] void setScenePos(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent11setScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:94
// [8] QPoint screenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent9screenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->screenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:95
// [-2] void setScreenPos(const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent12setScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:97
// [16] QPointF buttonDownPos(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent13buttonDownPosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->buttonDownPos(button);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:98
// [-2] void setButtonDownPos(Qt::MouseButton, const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent16setButtonDownPosEN2Qt11MouseButtonERK7QPointF(void *this_, Qt::MouseButton button, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownPos(button, *pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:100
// [16] QPointF buttonDownScenePos(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent18buttonDownScenePosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->buttonDownScenePos(button);
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:101
// [-2] void setButtonDownScenePos(Qt::MouseButton, const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent21setButtonDownScenePosEN2Qt11MouseButtonERK7QPointF(void *this_, Qt::MouseButton button, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownScenePos(button, *pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:103
// [8] QPoint buttonDownScreenPos(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent19buttonDownScreenPosEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->buttonDownScreenPos(button);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:104
// [-2] void setButtonDownScreenPos(Qt::MouseButton, const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent22setButtonDownScreenPosEN2Qt11MouseButtonERK6QPoint(void *this_, Qt::MouseButton button, QPoint* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtonDownScreenPos(button, *pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:106
// [16] QPointF lastPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent7lastPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->lastPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:107
// [-2] void setLastPos(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent10setLastPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:109
// [16] QPointF lastScenePos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent12lastScenePosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->lastScenePos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:110
// [-2] void setLastScenePos(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent15setLastScenePosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastScenePos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:112
// [8] QPoint lastScreenPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QGraphicsSceneMouseEvent13lastScreenPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMouseEvent*)this_)->lastScreenPos();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:113
// [-2] void setLastScreenPos(const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent16setLastScreenPosERK6QPoint(void *this_, QPoint* pos) {
  ((QGraphicsSceneMouseEvent*)this_)->setLastScreenPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:115
// [4] Qt::MouseButtons buttons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK24QGraphicsSceneMouseEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QGraphicsSceneMouseEvent*)this_)->buttons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:116
// [-2] void setButtons(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneMouseEvent*)this_)->setButtons(buttons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:118
// [4] Qt::MouseButton button()
extern "C" Q_DECL_EXPORT
Qt::MouseButton C_ZNK24QGraphicsSceneMouseEvent6buttonEv(void *this_) {
  return (Qt::MouseButton)((QGraphicsSceneMouseEvent*)this_)->button();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:119
// [-2] void setButton(Qt::MouseButton)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent9setButtonEN2Qt11MouseButtonE(void *this_, Qt::MouseButton button) {
  ((QGraphicsSceneMouseEvent*)this_)->setButton(button);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:121
// [4] Qt::KeyboardModifiers modifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK24QGraphicsSceneMouseEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QGraphicsSceneMouseEvent*)this_)->modifiers();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:122
// [-2] void setModifiers(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneMouseEvent*)this_)->setModifiers(modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:124
// [4] Qt::MouseEventSource source()
extern "C" Q_DECL_EXPORT
Qt::MouseEventSource C_ZNK24QGraphicsSceneMouseEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QGraphicsSceneMouseEvent*)this_)->source();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:125
// [-2] void setSource(Qt::MouseEventSource)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent9setSourceEN2Qt16MouseEventSourceE(void *this_, Qt::MouseEventSource source) {
  ((QGraphicsSceneMouseEvent*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:127
// [4] Qt::MouseEventFlags flags()
extern "C" Q_DECL_EXPORT
Qt::MouseEventFlags C_ZNK24QGraphicsSceneMouseEvent5flagsEv(void *this_) {
  return (Qt::MouseEventFlags)((QGraphicsSceneMouseEvent*)this_)->flags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:128
// [-2] void setFlags(Qt::MouseEventFlags)
extern "C" Q_DECL_EXPORT
void C_ZN24QGraphicsSceneMouseEvent8setFlagsE6QFlagsIN2Qt14MouseEventFlagEE(void *this_, QFlags<Qt::MouseEventFlag> arg0) {
  ((QGraphicsSceneMouseEvent*)this_)->setFlags(arg0);
}

//  main block end
