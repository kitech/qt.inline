//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:631
// void QDragMoveEvent(const class QPoint &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
extern "C"
void* C_ZN14QDragMoveEventC1ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) {
  return new QDragMoveEvent(pos, actions, data, buttons, modifiers, type);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:633
// void ~QDragMoveEvent()
extern "C"
void C_ZN14QDragMoveEventD1Ev(void *this_) {
  delete (QDragMoveEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:635
// QRect answerRect()
extern "C"
void C_ZNK14QDragMoveEvent10answerRectEv(void *this_) {
  /*return*/ ((QDragMoveEvent*)this_)->answerRect();
}
// inline
// /usr/include/qt/QtGui/qevent.h:637
// void accept()
extern "C"
void C_ZN14QDragMoveEvent6acceptEv(void *this_) {
  ((QDragMoveEvent*)this_)->accept();
}
// inline
// /usr/include/qt/QtGui/qevent.h:638
// void ignore()
extern "C"
void C_ZN14QDragMoveEvent6ignoreEv(void *this_) {
  ((QDragMoveEvent*)this_)->ignore();
}
// inline
// /usr/include/qt/QtGui/qevent.h:640
// void accept(const class QRect &)
extern "C"
void C_ZN14QDragMoveEvent6acceptERK5QRect(void *this_, const QRect & r) {
  ((QDragMoveEvent*)this_)->accept(r);
}
// inline
// /usr/include/qt/QtGui/qevent.h:641
// void ignore(const class QRect &)
extern "C"
void C_ZN14QDragMoveEvent6ignoreERK5QRect(void *this_, const QRect & r) {
  ((QDragMoveEvent*)this_)->ignore(r);
}
//  main block end
