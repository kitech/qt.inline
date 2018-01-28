//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleTextCursorEvent is pure virtual: false
//  header block end

//  main block begin

class MyQAccessibleTextCursorEvent : public QAccessibleTextCursorEvent {
public:
MyQAccessibleTextCursorEvent(QObject * obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos) {}
MyQAccessibleTextCursorEvent(QAccessibleInterface * iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:747
// [-2] void QAccessibleTextCursorEvent(class QObject *, int)
extern "C"
void* C_ZN26QAccessibleTextCursorEventC1EP7QObjecti(QObject * obj, int cursorPos) {
  (MyQAccessibleTextCursorEvent*)(0);
  return  new MyQAccessibleTextCursorEvent(obj, cursorPos);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:753
// [-2] void QAccessibleTextCursorEvent(class QAccessibleInterface *, int)
extern "C"
void* C_ZN26QAccessibleTextCursorEventC1EP20QAccessibleInterfacei(QAccessibleInterface * iface, int cursorPos) {
  (MyQAccessibleTextCursorEvent*)(0);
  return  new MyQAccessibleTextCursorEvent(iface, cursorPos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:760
// [-2] void ~QAccessibleTextCursorEvent()
extern "C"
void C_ZN26QAccessibleTextCursorEventD1Ev(void *this_) {
  delete (QAccessibleTextCursorEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:762
// [-2] void setCursorPosition(int)
extern "C"
void C_ZN26QAccessibleTextCursorEvent17setCursorPositionEi(void *this_, int position) {
  ((QAccessibleTextCursorEvent*)this_)->setCursorPosition(position);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:763
// [4] int cursorPosition()
extern "C"
int C_ZNK26QAccessibleTextCursorEvent14cursorPositionEv(void *this_) {
  return (int)((QAccessibleTextCursorEvent*)this_)->cursorPosition();
}
//  main block end
