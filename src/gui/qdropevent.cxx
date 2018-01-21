//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:597
// void QDropEvent(const class QPointF &, Qt::DropActions, const class QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, enum QEvent::Type)
extern "C"
void* C_ZN10QDropEventC1ERK7QPointF6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE(const QPointF & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type) {
  return new QDropEvent(pos, actions, data, buttons, modifiers, type);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:599
// void ~QDropEvent()
extern "C"
void C_ZN10QDropEventD1Ev(void *this_) {
  delete (QDropEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:601
// QPoint pos()
extern "C"
void C_ZNK10QDropEvent3posEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:602
// const QPointF & posF()
extern "C"
void C_ZNK10QDropEvent4posFEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->posF();
}
// inline
// /usr/include/qt/QtGui/qevent.h:603
// Qt::MouseButtons mouseButtons()
extern "C"
void C_ZNK10QDropEvent12mouseButtonsEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->mouseButtons();
}
// inline
// /usr/include/qt/QtGui/qevent.h:604
// Qt::KeyboardModifiers keyboardModifiers()
extern "C"
void C_ZNK10QDropEvent17keyboardModifiersEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->keyboardModifiers();
}
// inline
// /usr/include/qt/QtGui/qevent.h:606
// Qt::DropActions possibleActions()
extern "C"
void C_ZNK10QDropEvent15possibleActionsEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->possibleActions();
}
// inline
// /usr/include/qt/QtGui/qevent.h:607
// Qt::DropAction proposedAction()
extern "C"
void C_ZNK10QDropEvent14proposedActionEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->proposedAction();
}
// inline
// /usr/include/qt/QtGui/qevent.h:608
// void acceptProposedAction()
extern "C"
void C_ZN10QDropEvent20acceptProposedActionEv(void *this_) {
  ((QDropEvent*)this_)->acceptProposedAction();
}
// inline
// /usr/include/qt/QtGui/qevent.h:610
// Qt::DropAction dropAction()
extern "C"
void C_ZNK10QDropEvent10dropActionEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->dropAction();
}
// /usr/include/qt/QtGui/qevent.h:611
// void setDropAction(Qt::DropAction)
extern "C"
void C_ZN10QDropEvent13setDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QDropEvent*)this_)->setDropAction(action);
}
// /usr/include/qt/QtGui/qevent.h:613
// QObject * source()
extern "C"
void C_ZNK10QDropEvent6sourceEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->source();
}
// inline
// /usr/include/qt/QtGui/qevent.h:614
// const QMimeData * mimeData()
extern "C"
void C_ZNK10QDropEvent8mimeDataEv(void *this_) {
  /*return*/ ((QDropEvent*)this_)->mimeData();
}
//  main block end
