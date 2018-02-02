//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDragMoveEvent is pure virtual: false
// QDragMoveEvent has virtual projected: false
//  header block end

//  main block begin

class MyQDragMoveEvent : public QDragMoveEvent {
public:
  virtual ~MyQDragMoveEvent() {}
// void QDragMoveEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
MyQDragMoveEvent(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) : QDragMoveEvent(pos, actions, data, buttons, modifiers, type) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:642
// [-2] void QDragMoveEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
extern "C"
void* C_ZN14QDragMoveEventC2ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(QPoint* pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) {
  return  new QDragMoveEvent(*pos, actions, data, buttons, modifiers, type);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:644
// [-2] void ~QDragMoveEvent()
extern "C"
void C_ZN14QDragMoveEventD2Ev(void *this_) {
  delete (QDragMoveEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:646
// [16] QRect answerRect()
extern "C"
void* C_ZNK14QDragMoveEvent10answerRectEv(void *this_) {
  auto rv = ((QDragMoveEvent*)this_)->answerRect();
return new QRect(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:648
// [-2] void accept()
extern "C"
void C_ZN14QDragMoveEvent6acceptEv(void *this_) {
  ((QDragMoveEvent*)this_)->accept();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:649
// [-2] void ignore()
extern "C"
void C_ZN14QDragMoveEvent6ignoreEv(void *this_) {
  ((QDragMoveEvent*)this_)->ignore();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:651
// [-2] void accept(const class QRect &)
extern "C"
void C_ZN14QDragMoveEvent6acceptERK5QRect(void *this_, QRect* r) {
  ((QDragMoveEvent*)this_)->accept(*r);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:652
// [-2] void ignore(const class QRect &)
extern "C"
void C_ZN14QDragMoveEvent6ignoreERK5QRect(void *this_, QRect* r) {
  ((QDragMoveEvent*)this_)->ignore(*r);
}
//  main block end
