//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDragEnterEvent is pure virtual: false
// QDragEnterEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDragEnterEvent : public QDragEnterEvent {
public:
  virtual ~MyQDragEnterEvent() {}
// void QDragEnterEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQDragEnterEvent(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDragEnterEvent(pos, actions, data, buttons, modifiers) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:662
// [-2] void QDragEnterEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN15QDragEnterEventC2ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEE(QPoint* pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QDragEnterEvent(*pos, actions, data, buttons, modifiers);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:664
// [-2] void ~QDragEnterEvent()
extern "C" Q_DECL_EXPORT
void C_ZN15QDragEnterEventD2Ev(void *this_) {
  delete (QDragEnterEvent*)(this_);
}
//  main block end
