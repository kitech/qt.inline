//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleValueChangeEvent is pure virtual: false
//  header block end

//  main block begin

class MyQAccessibleValueChangeEvent : public QAccessibleValueChangeEvent {
public:
MyQAccessibleValueChangeEvent(QObject * obj, const QVariant & val) : QAccessibleValueChangeEvent(obj, val) {}
MyQAccessibleValueChangeEvent(QAccessibleInterface * iface, const QVariant & val) : QAccessibleValueChangeEvent(iface, val) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:898
// [-2] void QAccessibleValueChangeEvent(class QObject *, const class QVariant &)
extern "C"
void* C_ZN27QAccessibleValueChangeEventC1EP7QObjectRK8QVariant(QObject * obj, const QVariant & val) {
  (MyQAccessibleValueChangeEvent*)(0);
  return  new MyQAccessibleValueChangeEvent(obj, val);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:904
// [-2] void QAccessibleValueChangeEvent(class QAccessibleInterface *, const class QVariant &)
extern "C"
void* C_ZN27QAccessibleValueChangeEventC1EP20QAccessibleInterfaceRK8QVariant(QAccessibleInterface * iface, const QVariant & val) {
  (MyQAccessibleValueChangeEvent*)(0);
  return  new MyQAccessibleValueChangeEvent(iface, val);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:911
// [-2] void ~QAccessibleValueChangeEvent()
extern "C"
void C_ZN27QAccessibleValueChangeEventD1Ev(void *this_) {
  delete (QAccessibleValueChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:913
// [-2] void setValue(const class QVariant &)
extern "C"
void C_ZN27QAccessibleValueChangeEvent8setValueERK8QVariant(void *this_, const QVariant & val) {
  ((QAccessibleValueChangeEvent*)this_)->setValue(val);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:914
// [16] QVariant value()
extern "C"
void* C_ZNK27QAccessibleValueChangeEvent5valueEv(void *this_) {
  auto rv = ((QAccessibleValueChangeEvent*)this_)->value();
return new QVariant(rv);
}
//  main block end
