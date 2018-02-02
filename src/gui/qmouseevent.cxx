//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QMouseEvent is pure virtual: false
// QMouseEvent has virtual projected: false
//  header block end

//  main block begin

class MyQMouseEvent : public QMouseEvent {
public:
  virtual ~MyQMouseEvent() {}
// void QMouseEvent(enum QEvent::Type, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type, const QPointF & localPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type, localPos, button, buttons, modifiers) {}
// void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type, const QPointF & localPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type, localPos, screenPos, button, buttons, modifiers) {}
// void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers) {}
// void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::MouseEventSource)
MyQMouseEvent(QEvent::Type type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::MouseEventSource source) : QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers, source) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:107
// [-2] void QMouseEvent(enum QEvent::Type, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, QPointF* localPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QMouseEvent(type, *localPos, button, buttons, modifiers);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:109
// [-2] void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, QPointF* localPos, QPointF* screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QMouseEvent(type, *localPos, *screenPos, button, buttons, modifiers);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:112
// [-2] void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QMouseEvent(type, *localPos, *windowPos, *screenPos, button, buttons, modifiers);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:115
// [-2] void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::MouseEventSource)
extern "C"
void* C_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEENS5_16MouseEventSourceE(QEvent::Type type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::MouseEventSource source) {
  return  new QMouseEvent(type, *localPos, *windowPos, *screenPos, button, buttons, modifiers, source);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:118
// [-2] void ~QMouseEvent()
extern "C"
void C_ZN11QMouseEventD2Ev(void *this_) {
  delete (QMouseEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:121
// [8] QPoint pos()
extern "C"
void* C_ZNK11QMouseEvent3posEv(void *this_) {
  auto rv = ((QMouseEvent*)this_)->pos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:122
// [8] QPoint globalPos()
extern "C"
void* C_ZNK11QMouseEvent9globalPosEv(void *this_) {
  auto rv = ((QMouseEvent*)this_)->globalPos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:123
// [4] int x()
extern "C"
int C_ZNK11QMouseEvent1xEv(void *this_) {
  return (int)((QMouseEvent*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:124
// [4] int y()
extern "C"
int C_ZNK11QMouseEvent1yEv(void *this_) {
  return (int)((QMouseEvent*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:125
// [4] int globalX()
extern "C"
int C_ZNK11QMouseEvent7globalXEv(void *this_) {
  return (int)((QMouseEvent*)this_)->globalX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:126
// [4] int globalY()
extern "C"
int C_ZNK11QMouseEvent7globalYEv(void *this_) {
  return (int)((QMouseEvent*)this_)->globalY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:128
// [16] const QPointF & localPos()
extern "C"
void* C_ZNK11QMouseEvent8localPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->localPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:129
// [16] const QPointF & windowPos()
extern "C"
void* C_ZNK11QMouseEvent9windowPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->windowPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:130
// [16] const QPointF & screenPos()
extern "C"
void* C_ZNK11QMouseEvent9screenPosEv(void *this_) {
  auto& rv = ((QMouseEvent*)this_)->screenPos();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:132
// [4] Qt::MouseButton button()
extern "C"
Qt::MouseButton C_ZNK11QMouseEvent6buttonEv(void *this_) {
  return (Qt::MouseButton)((QMouseEvent*)this_)->button();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:133
// [4] Qt::MouseButtons buttons()
extern "C"
Qt::MouseButtons C_ZNK11QMouseEvent7buttonsEv(void *this_) {
  return (Qt::MouseButtons)((QMouseEvent*)this_)->buttons();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:135
// [-2] void setLocalPos(const class QPointF &)
extern "C"
void C_ZN11QMouseEvent11setLocalPosERK7QPointF(void *this_, QPointF* localPosition) {
  ((QMouseEvent*)this_)->setLocalPos(*localPosition);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:141
// [4] Qt::MouseEventSource source()
extern "C"
Qt::MouseEventSource C_ZNK11QMouseEvent6sourceEv(void *this_) {
  return (Qt::MouseEventSource)((QMouseEvent*)this_)->source();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:142
// [4] Qt::MouseEventFlags flags()
extern "C"
Qt::MouseEventFlags C_ZNK11QMouseEvent5flagsEv(void *this_) {
  return (Qt::MouseEventFlags)((QMouseEvent*)this_)->flags();
}
//  main block end
