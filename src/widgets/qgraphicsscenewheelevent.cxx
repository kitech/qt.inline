//  header block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#include <qgraphicssceneevent.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:139
// void QGraphicsSceneWheelEvent(enum QEvent::Type)
extern "C"
void* C_ZN24QGraphicsSceneWheelEventC1EN6QEvent4TypeE(QEvent::Type type) {
  return new QGraphicsSceneWheelEvent(type);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:140
// void ~QGraphicsSceneWheelEvent()
extern "C"
void C_ZN24QGraphicsSceneWheelEventD1Ev(void *this_) {
  delete (QGraphicsSceneWheelEvent*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:142
// QPointF pos()
extern "C"
void C_ZNK24QGraphicsSceneWheelEvent3posEv(void *this_) {
  /*return*/ ((QGraphicsSceneWheelEvent*)this_)->pos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:143
// void setPos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneWheelEvent6setPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneWheelEvent*)this_)->setPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:145
// QPointF scenePos()
extern "C"
void C_ZNK24QGraphicsSceneWheelEvent8scenePosEv(void *this_) {
  /*return*/ ((QGraphicsSceneWheelEvent*)this_)->scenePos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:146
// void setScenePos(const class QPointF &)
extern "C"
void C_ZN24QGraphicsSceneWheelEvent11setScenePosERK7QPointF(void *this_, const QPointF & pos) {
  ((QGraphicsSceneWheelEvent*)this_)->setScenePos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:148
// QPoint screenPos()
extern "C"
void C_ZNK24QGraphicsSceneWheelEvent9screenPosEv(void *this_) {
  /*return*/ ((QGraphicsSceneWheelEvent*)this_)->screenPos();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:149
// void setScreenPos(const class QPoint &)
extern "C"
void C_ZN24QGraphicsSceneWheelEvent12setScreenPosERK6QPoint(void *this_, const QPoint & pos) {
  ((QGraphicsSceneWheelEvent*)this_)->setScreenPos(pos);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:151
// Qt::MouseButtons buttons()
extern "C"
void C_ZNK24QGraphicsSceneWheelEvent7buttonsEv(void *this_) {
  /*return*/ ((QGraphicsSceneWheelEvent*)this_)->buttons();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:152
// void setButtons(Qt::MouseButtons)
extern "C"
void C_ZN24QGraphicsSceneWheelEvent10setButtonsE6QFlagsIN2Qt11MouseButtonEE(void *this_, QFlags<Qt::MouseButton> buttons) {
  ((QGraphicsSceneWheelEvent*)this_)->setButtons(buttons);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:154
// Qt::KeyboardModifiers modifiers()
extern "C"
void C_ZNK24QGraphicsSceneWheelEvent9modifiersEv(void *this_) {
  /*return*/ ((QGraphicsSceneWheelEvent*)this_)->modifiers();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:155
// void setModifiers(Qt::KeyboardModifiers)
extern "C"
void C_ZN24QGraphicsSceneWheelEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QFlags<Qt::KeyboardModifier> modifiers) {
  ((QGraphicsSceneWheelEvent*)this_)->setModifiers(modifiers);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:157
// int delta()
extern "C"
void C_ZNK24QGraphicsSceneWheelEvent5deltaEv(void *this_) {
  /*return*/ ((QGraphicsSceneWheelEvent*)this_)->delta();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:158
// void setDelta(int)
extern "C"
void C_ZN24QGraphicsSceneWheelEvent8setDeltaEi(void *this_, int delta) {
  ((QGraphicsSceneWheelEvent*)this_)->setDelta(delta);
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:160
// Qt::Orientation orientation()
extern "C"
void C_ZNK24QGraphicsSceneWheelEvent11orientationEv(void *this_) {
  /*return*/ ((QGraphicsSceneWheelEvent*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:161
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN24QGraphicsSceneWheelEvent14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QGraphicsSceneWheelEvent*)this_)->setOrientation(orientation);
}
//  main block end
