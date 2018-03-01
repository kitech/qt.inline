//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDropEvent is pure virtual: false
// QDropEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDropEvent : public QDropEvent {
public:
  virtual ~MyQDropEvent() {}
// void QDropEvent(const class QPointF &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
MyQDropEvent(const QPointF & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type_) : QDropEvent(pos, actions, data, buttons, modifiers, type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:608
// [-2] void QDropEvent(const class QPointF &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN10QDropEventC2ERK7QPointF6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(QPointF* pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type_) {
  return  new QDropEvent(*pos, actions, data, buttons, modifiers, type_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:610
// [-2] void ~QDropEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QDropEventD2Ev(void *this_) {
  delete (QDropEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:612
// [8] QPoint pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDropEvent3posEv(void *this_) {
  auto rv = ((QDropEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:613
// [16] const QPointF & posF()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDropEvent4posFEv(void *this_) {
  auto& rv = ((QDropEvent*)this_)->posF();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:614
// [4] Qt::MouseButtons mouseButtons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZNK10QDropEvent12mouseButtonsEv(void *this_) {
  return (Qt::MouseButtons)((QDropEvent*)this_)->mouseButtons();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:615
// [4] Qt::KeyboardModifiers keyboardModifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK10QDropEvent17keyboardModifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QDropEvent*)this_)->keyboardModifiers();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:617
// [4] Qt::DropActions possibleActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK10QDropEvent15possibleActionsEv(void *this_) {
  return (Qt::DropActions)((QDropEvent*)this_)->possibleActions();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:618
// [4] Qt::DropAction proposedAction()
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZNK10QDropEvent14proposedActionEv(void *this_) {
  return (Qt::DropAction)((QDropEvent*)this_)->proposedAction();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:619
// [-2] void acceptProposedAction()
extern "C" Q_DECL_EXPORT
void C_ZN10QDropEvent20acceptProposedActionEv(void *this_) {
  ((QDropEvent*)this_)->acceptProposedAction();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:621
// [4] Qt::DropAction dropAction()
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZNK10QDropEvent10dropActionEv(void *this_) {
  return (Qt::DropAction)((QDropEvent*)this_)->dropAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:622
// [-2] void setDropAction(Qt::DropAction)
extern "C" Q_DECL_EXPORT
void C_ZN10QDropEvent13setDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QDropEvent*)this_)->setDropAction(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:624
// [8] QObject * source()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDropEvent6sourceEv(void *this_) {
  return (void*)((QDropEvent*)this_)->source();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:625
// [8] const QMimeData * mimeData()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QDropEvent8mimeDataEv(void *this_) {
  return (void*)((QDropEvent*)this_)->mimeData();
}

//  main block end
