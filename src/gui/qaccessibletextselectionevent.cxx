//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleTextSelectionEvent is pure virtual: false
//  header block end

//  main block begin

class MyQAccessibleTextSelectionEvent : public QAccessibleTextSelectionEvent {
public:
MyQAccessibleTextSelectionEvent(QObject * obj, int start, int end) : QAccessibleTextSelectionEvent(obj, start, end) {}
MyQAccessibleTextSelectionEvent(QAccessibleInterface * iface, int start, int end) : QAccessibleTextSelectionEvent(iface, start, end) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:773
// [-2] void QAccessibleTextSelectionEvent(class QObject *, int, int)
extern "C"
void* C_ZN29QAccessibleTextSelectionEventC1EP7QObjectii(QObject * obj, int start, int end) {
  (MyQAccessibleTextSelectionEvent*)(0);
  return  new MyQAccessibleTextSelectionEvent(obj, start, end);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:779
// [-2] void QAccessibleTextSelectionEvent(class QAccessibleInterface *, int, int)
extern "C"
void* C_ZN29QAccessibleTextSelectionEventC1EP20QAccessibleInterfaceii(QAccessibleInterface * iface, int start, int end) {
  (MyQAccessibleTextSelectionEvent*)(0);
  return  new MyQAccessibleTextSelectionEvent(iface, start, end);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:786
// [-2] void ~QAccessibleTextSelectionEvent()
extern "C"
void C_ZN29QAccessibleTextSelectionEventD1Ev(void *this_) {
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
