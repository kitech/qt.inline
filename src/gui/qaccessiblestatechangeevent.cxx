//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:723
// void QAccessibleStateChangeEvent(class QObject *, class QAccessible::State)
extern "C"
void* C_ZN27QAccessibleStateChangeEventC1EP7QObjectN11QAccessible5StateE(QObject * obj, QAccessible::State state) {
  return new QAccessibleStateChangeEvent(obj, state);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:728
// void QAccessibleStateChangeEvent(class QAccessibleInterface *, class QAccessible::State)
extern "C"
void* C_ZN27QAccessibleStateChangeEventC1EP20QAccessibleInterfaceN11QAccessible5StateE(QAccessibleInterface * iface, QAccessible::State state) {
  return new QAccessibleStateChangeEvent(iface, state);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:733
// void ~QAccessibleStateChangeEvent()
extern "C"
void C_ZN27QAccessibleStateChangeEventD1Ev(void *this_) {
  delete (QAccessibleStateChangeEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:735
// QAccessible::State changedStates()
extern "C"
void C_ZNK27QAccessibleStateChangeEvent13changedStatesEv(void *this_) {
  /*return*/ ((QAccessibleStateChangeEvent*)this_)->changedStates();
}
//  main block end
