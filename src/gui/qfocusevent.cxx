//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QFocusEvent is pure virtual: false
//  header block end

//  main block begin

class MyQFocusEvent : public QFocusEvent {
public:
MyQFocusEvent(QEvent::Type type, Qt::FocusReason reason) : QFocusEvent(type, reason) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:389
// [-2] void QFocusEvent(enum QEvent::Type, Qt::FocusReason)
extern "C"
void* C_ZN11QFocusEventC1EN6QEvent4TypeEN2Qt11FocusReasonE(QEvent::Type type, Qt::FocusReason reason) {
  (MyQFocusEvent*)(0);
  return  new MyQFocusEvent(type, reason);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:390
// [-2] void ~QFocusEvent()
extern "C"
void C_ZN11QFocusEventD1Ev(void *this_) {
  delete (QFocusEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:392
// [1] bool gotFocus()
extern "C"
bool C_ZNK11QFocusEvent8gotFocusEv(void *this_) {
  return (bool)((QFocusEvent*)this_)->gotFocus();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:393
// [1] bool lostFocus()
extern "C"
bool C_ZNK11QFocusEvent9lostFocusEv(void *this_) {
  return (bool)((QFocusEvent*)this_)->lostFocus();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:395
// [4] Qt::FocusReason reason()
extern "C"
Qt::FocusReason C_ZNK11QFocusEvent6reasonEv(void *this_) {
  return (Qt::FocusReason)((QFocusEvent*)this_)->reason();
}
//  main block end
