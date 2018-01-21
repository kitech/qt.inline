//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:747
// void QAccessibleTextCursorEvent(class QObject *, int)
extern "C"
void* C_ZN26QAccessibleTextCursorEventC1EP7QObjecti(QObject * obj, int cursorPos) {
  return new QAccessibleTextCursorEvent(obj, cursorPos);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:753
// void QAccessibleTextCursorEvent(class QAccessibleInterface *, int)
extern "C"
void* C_ZN26QAccessibleTextCursorEventC1EP20QAccessibleInterfacei(QAccessibleInterface * iface, int cursorPos) {
  return new QAccessibleTextCursorEvent(iface, cursorPos);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:760
// void ~QAccessibleTextCursorEvent()
extern "C"
void C_ZN26QAccessibleTextCursorEventD1Ev(void *this_) {
  delete (QAccessibleTextCursorEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:762
// void setCursorPosition(int)
extern "C"
void C_ZN26QAccessibleTextCursorEvent17setCursorPositionEi(void *this_, int position) {
  ((QAccessibleTextCursorEvent*)this_)->setCursorPosition(position);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:763
// int cursorPosition()
extern "C"
void C_ZNK26QAccessibleTextCursorEvent14cursorPositionEv(void *this_) {
  /*return*/ ((QAccessibleTextCursorEvent*)this_)->cursorPosition();
}
//  main block end
