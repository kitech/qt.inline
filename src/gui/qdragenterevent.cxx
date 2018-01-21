//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:651
// void QDragEnterEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers)
extern "C"
void* C_ZN15QDragEnterEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEE(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QDragEnterEvent(pos, actions, data, buttons, modifiers);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:653
// void ~QDragEnterEvent()
extern "C"
void C_ZN15QDragEnterEventD1Ev(void *this_) {
  delete (QDragEnterEvent*)(this_);
}
//  main block end
