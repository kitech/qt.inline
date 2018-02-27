//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextSelectionEvent is pure virtual: false
// QAccessibleTextSelectionEvent has virtual projected: false
//  header block end

//  main block begin

class MyQAccessibleTextSelectionEvent : public QAccessibleTextSelectionEvent {
public:
  virtual ~MyQAccessibleTextSelectionEvent() {}
// void QAccessibleTextSelectionEvent(class QObject *, int, int)
MyQAccessibleTextSelectionEvent(QObject * obj, int start, int end) : QAccessibleTextSelectionEvent(obj, start, end) {}
// void QAccessibleTextSelectionEvent(class QAccessibleInterface *, int, int)
MyQAccessibleTextSelectionEvent(QAccessibleInterface * iface, int start, int end) : QAccessibleTextSelectionEvent(iface, start, end) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:773
// [-2] void QAccessibleTextSelectionEvent(class QObject *, int, int)
extern "C"
void* C_ZN29QAccessibleTextSelectionEventC2EP7QObjectii(QObject * obj, int start, int end) {
  return  new QAccessibleTextSelectionEvent(obj, start, end);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:779
// [-2] void QAccessibleTextSelectionEvent(class QAccessibleInterface *, int, int)
extern "C"
void* C_ZN29QAccessibleTextSelectionEventC2EP20QAccessibleInterfaceii(QAccessibleInterface * iface, int start, int end) {
  return  new QAccessibleTextSelectionEvent(iface, start, end);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:786
// [-2] void ~QAccessibleTextSelectionEvent()
extern "C"
void C_ZN29QAccessibleTextSelectionEventD2Ev(void *this_) {
  delete (QAccessibleTextSelectionEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:788
// [-2] void setSelection(int, int)
extern "C"
void C_ZN29QAccessibleTextSelectionEvent12setSelectionEii(void *this_, int start, int end) {
  ((QAccessibleTextSelectionEvent*)this_)->setSelection(start, end);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:793
// [4] int selectionStart()
extern "C"
int C_ZNK29QAccessibleTextSelectionEvent14selectionStartEv(void *this_) {
  return (int)((QAccessibleTextSelectionEvent*)this_)->selectionStart();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:794
// [4] int selectionEnd()
extern "C"
int C_ZNK29QAccessibleTextSelectionEvent12selectionEndEv(void *this_) {
  return (int)((QAccessibleTextSelectionEvent*)this_)->selectionEnd();
}

//  main block end
