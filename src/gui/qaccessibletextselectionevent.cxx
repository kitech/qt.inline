//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:773
// void QAccessibleTextSelectionEvent(class QObject *, int, int)
extern "C"
void* C_ZN29QAccessibleTextSelectionEventC1EP7QObjectii(QObject * obj, int start, int end) {
  return new QAccessibleTextSelectionEvent(obj, start, end);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:779
// void QAccessibleTextSelectionEvent(class QAccessibleInterface *, int, int)
extern "C"
void* C_ZN29QAccessibleTextSelectionEventC1EP20QAccessibleInterfaceii(QAccessibleInterface * iface, int start, int end) {
  return new QAccessibleTextSelectionEvent(iface, start, end);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:786
// void ~QAccessibleTextSelectionEvent()
extern "C"
void C_ZN29QAccessibleTextSelectionEventD1Ev(void *this_) {
  delete (QAccessibleTextSelectionEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:788
// void setSelection(int, int)
extern "C"
void C_ZN29QAccessibleTextSelectionEvent12setSelectionEii(void *this_, int start, int end) {
  ((QAccessibleTextSelectionEvent*)this_)->setSelection(start, end);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:793
// int selectionStart()
extern "C"
void C_ZNK29QAccessibleTextSelectionEvent14selectionStartEv(void *this_) {
  /*return*/ ((QAccessibleTextSelectionEvent*)this_)->selectionStart();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:794
// int selectionEnd()
extern "C"
void C_ZNK29QAccessibleTextSelectionEvent12selectionEndEv(void *this_) {
  /*return*/ ((QAccessibleTextSelectionEvent*)this_)->selectionEnd();
}
//  main block end
