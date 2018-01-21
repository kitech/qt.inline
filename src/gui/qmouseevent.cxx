//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:106
// void QMouseEvent(enum QEvent::Type, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QMouseEvent(type, localPos, button, buttons, modifiers);
}
// /usr/include/qt/QtGui/qevent.h:108
// void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QMouseEvent(type, localPos, screenPos, button, buttons, modifiers);
}
// /usr/include/qt/QtGui/qevent.h:111
// void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE(QEvent::Type type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers);
}
// /usr/include/qt/QtGui/qevent.h:114
// void QMouseEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, const class QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::MouseEventSource)
extern "C"
void* C_ZN11QMouseEventC1EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEENS5_16MouseEventSourceE(QEvent::Type type, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::MouseEventSource source) {
  return new QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers, source);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:117
// void ~QMouseEvent()
extern "C"
void C_ZN11QMouseEventD1Ev(void *this_) {
  delete (QMouseEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:120
// QPoint pos()
extern "C"
void C_ZNK11QMouseEvent3posEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:121
// QPoint globalPos()
extern "C"
void C_ZNK11QMouseEvent9globalPosEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->globalPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:122
// int x()
extern "C"
void C_ZNK11QMouseEvent1xEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->x();
}
// inline
// /usr/include/qt/QtGui/qevent.h:123
// int y()
extern "C"
void C_ZNK11QMouseEvent1yEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->y();
}
// inline
// /usr/include/qt/QtGui/qevent.h:124
// int globalX()
extern "C"
void C_ZNK11QMouseEvent7globalXEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->globalX();
}
// inline
// /usr/include/qt/QtGui/qevent.h:125
// int globalY()
extern "C"
void C_ZNK11QMouseEvent7globalYEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->globalY();
}
// inline
// /usr/include/qt/QtGui/qevent.h:127
// const QPointF & localPos()
extern "C"
void C_ZNK11QMouseEvent8localPosEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->localPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:128
// const QPointF & windowPos()
extern "C"
void C_ZNK11QMouseEvent9windowPosEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->windowPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:129
// const QPointF & screenPos()
extern "C"
void C_ZNK11QMouseEvent9screenPosEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->screenPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:131
// Qt::MouseButton button()
extern "C"
void C_ZNK11QMouseEvent6buttonEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->button();
}
// inline
// /usr/include/qt/QtGui/qevent.h:132
// Qt::MouseButtons buttons()
extern "C"
void C_ZNK11QMouseEvent7buttonsEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->buttons();
}
// /usr/include/qt/QtGui/qevent.h:138
// Qt::MouseEventSource source()
extern "C"
void C_ZNK11QMouseEvent6sourceEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->source();
}
// /usr/include/qt/QtGui/qevent.h:139
// Qt::MouseEventFlags flags()
extern "C"
void C_ZNK11QMouseEvent5flagsEv(void *this_) {
  /*return*/ ((QMouseEvent*)this_)->flags();
}
//  main block end
