//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleStateChangeEvent is pure virtual: false
// QAccessibleStateChangeEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleStateChangeEvent : public QAccessibleStateChangeEvent {
public:
  virtual ~MyQAccessibleStateChangeEvent() {}
// void QAccessibleStateChangeEvent(QObject *, QAccessible::State)
MyQAccessibleStateChangeEvent(QObject * obj, QAccessible::State state) : QAccessibleStateChangeEvent(obj, state) {}
// void QAccessibleStateChangeEvent(QAccessibleInterface *, QAccessible::State)
MyQAccessibleStateChangeEvent(QAccessibleInterface * iface, QAccessible::State state) : QAccessibleStateChangeEvent(iface, state) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:723
// [-2] void QAccessibleStateChangeEvent(QObject *, QAccessible::State)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleStateChangeEventC2EP7QObjectN11QAccessible5StateE(QObject * obj, QAccessible::State state) {
  return  new QAccessibleStateChangeEvent(obj, state);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:728
// [-2] void QAccessibleStateChangeEvent(QAccessibleInterface *, QAccessible::State)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleStateChangeEventC2EP20QAccessibleInterfaceN11QAccessible5StateE(QAccessibleInterface * iface, QAccessible::State state) {
  return  new QAccessibleStateChangeEvent(iface, state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:733
// [-2] void ~QAccessibleStateChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN27QAccessibleStateChangeEventD2Ev(void *this_) {
  delete (QAccessibleStateChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:735
// [8] QAccessible::State changedStates()
extern "C" Q_DECL_EXPORT
QAccessible::State C_ZNK27QAccessibleStateChangeEvent13changedStatesEv(void *this_) {
  return (QAccessible::State)((QAccessibleStateChangeEvent*)this_)->changedStates();
}

//  main block end
