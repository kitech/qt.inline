//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleStateChangeEvent is pure virtual: false
//  header block end

//  main block begin

class MyQAccessibleStateChangeEvent : public QAccessibleStateChangeEvent {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:733
// [-2] void ~QAccessibleStateChangeEvent()
extern "C"
void C_ZN27QAccessibleStateChangeEventD1Ev(void *this_) {
  delete (QAccessibleStateChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:735
// [8] QAccessible::State changedStates()
extern "C"
QAccessible::State C_ZNK27QAccessibleStateChangeEvent13changedStatesEv(void *this_) {
  return (QAccessible::State)((QAccessibleStateChangeEvent*)this_)->changedStates();
}
//  main block end
