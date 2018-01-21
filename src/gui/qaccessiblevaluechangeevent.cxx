//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:898
// void QAccessibleValueChangeEvent(class QObject *, const class QVariant &)
extern "C"
void* C_ZN27QAccessibleValueChangeEventC1EP7QObjectRK8QVariant(QObject * obj, const QVariant & val) {
  return new QAccessibleValueChangeEvent(obj, val);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:904
// void QAccessibleValueChangeEvent(class QAccessibleInterface *, const class QVariant &)
extern "C"
void* C_ZN27QAccessibleValueChangeEventC1EP20QAccessibleInterfaceRK8QVariant(QAccessibleInterface * iface, const QVariant & val) {
  return new QAccessibleValueChangeEvent(iface, val);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:911
// void ~QAccessibleValueChangeEvent()
extern "C"
void C_ZN27QAccessibleValueChangeEventD1Ev(void *this_) {
  delete (QAccessibleValueChangeEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:913
// void setValue(const class QVariant &)
extern "C"
void C_ZN27QAccessibleValueChangeEvent8setValueERK8QVariant(void *this_, const QVariant & val) {
  ((QAccessibleValueChangeEvent*)this_)->setValue(val);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:914
// QVariant value()
extern "C"
void C_ZNK27QAccessibleValueChangeEvent5valueEv(void *this_) {
  /*return*/ ((QAccessibleValueChangeEvent*)this_)->value();
}
//  main block end
