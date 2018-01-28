//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QDropEvent is pure virtual: false
//  header block end

//  main block begin

class MyQDropEvent : public QDropEvent {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:610
// [-2] void ~QDropEvent()
extern "C"
void C_ZN10QDropEventD1Ev(void *this_) {
  delete (QDropEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:612
// [8] QPoint pos()
extern "C"
void* C_ZNK10QDropEvent3posEv(void *this_) {
  auto rv = ((QDropEvent*)this_)->pos();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:613
// [16] const QPointF & posF()
extern "C"
void* C_ZNK10QDropEvent4posFEv(void *this_) {
  auto& rv = ((QDropEvent*)this_)->posF();
return new QPointF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:614
// [4] Qt::MouseButtons mouseButtons()
extern "C"
Qt::MouseButtons C_ZNK10QDropEvent12mouseButtonsEv(void *this_) {
  return (Qt::MouseButtons)((QDropEvent*)this_)->mouseButtons();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:615
// [4] Qt::KeyboardModifiers keyboardModifiers()
extern "C"
Qt::KeyboardModifiers C_ZNK10QDropEvent17keyboardModifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QDropEvent*)this_)->keyboardModifiers();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:617
// [4] Qt::DropActions possibleActions()
extern "C"
Qt::DropActions C_ZNK10QDropEvent15possibleActionsEv(void *this_) {
  return (Qt::DropActions)((QDropEvent*)this_)->possibleActions();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:618
// [4] Qt::DropAction proposedAction()
extern "C"
Qt::DropAction C_ZNK10QDropEvent14proposedActionEv(void *this_) {
  return (Qt::DropAction)((QDropEvent*)this_)->proposedAction();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:619
// [-2] void acceptProposedAction()
extern "C"
void C_ZN10QDropEvent20acceptProposedActionEv(void *this_) {
  ((QDropEvent*)this_)->acceptProposedAction();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:621
// [4] Qt::DropAction dropAction()
extern "C"
Qt::DropAction C_ZNK10QDropEvent10dropActionEv(void *this_) {
  return (Qt::DropAction)((QDropEvent*)this_)->dropAction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:622
// [-2] void setDropAction(Qt::DropAction)
extern "C"
void C_ZN10QDropEvent13setDropActionEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QDropEvent*)this_)->setDropAction(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:624
// [8] QObject * source()
extern "C"
void* C_ZNK10QDropEvent6sourceEv(void *this_) {
  return (void*)((QDropEvent*)this_)->source();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:625
// [8] const QMimeData * mimeData()
extern "C"
void* C_ZNK10QDropEvent8mimeDataEv(void *this_) {
  return (void*)((QDropEvent*)this_)->mimeData();
}
//  main block end
