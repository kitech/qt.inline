//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextCursorEvent is pure virtual: false
// QAccessibleTextCursorEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleTextCursorEvent : public QAccessibleTextCursorEvent {
public:
  virtual ~MyQAccessibleTextCursorEvent() {}
// void QAccessibleTextCursorEvent(QObject *, int)
MyQAccessibleTextCursorEvent(QObject * obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos) {}
// void QAccessibleTextCursorEvent(QAccessibleInterface *, int)
MyQAccessibleTextCursorEvent(QAccessibleInterface * iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:747
// [-2] void QAccessibleTextCursorEvent(QObject *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextCursorEventC2EP7QObjecti(QObject * obj, int cursorPos) {
  return  new QAccessibleTextCursorEvent(obj, cursorPos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:753
// [-2] void QAccessibleTextCursorEvent(QAccessibleInterface *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextCursorEventC2EP20QAccessibleInterfacei(QAccessibleInterface * iface, int cursorPos) {
  return  new QAccessibleTextCursorEvent(iface, cursorPos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:760
// [-2] void ~QAccessibleTextCursorEvent()
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleTextCursorEventD2Ev(void *this_) {
  delete (QAccessibleTextCursorEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:762
// [-2] void setCursorPosition(int)
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleTextCursorEvent17setCursorPositionEi(void *this_, int position) {
  ((QAccessibleTextCursorEvent*)this_)->setCursorPosition(position);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:763
// [4] int cursorPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK26QAccessibleTextCursorEvent14cursorPositionEv(void *this_) {
  return (int)((QAccessibleTextCursorEvent*)this_)->cursorPosition();
}

//  main block end
