//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleEvent is pure virtual: false
//  header block end

//  main block begin

class MyQAccessibleEvent : public QAccessibleEvent {
public:
MyQAccessibleEvent(QObject * obj, QAccessible::Event typ) : QAccessibleEvent(obj, typ) {}
MyQAccessibleEvent(QAccessibleInterface * iface, QAccessible::Event typ) : QAccessibleEvent(iface, typ) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:668
// [-2] void QAccessibleEvent(class QObject *, class QAccessible::Event)
extern "C"
void* C_ZN16QAccessibleEventC1EP7QObjectN11QAccessible5EventE(QObject * obj, QAccessible::Event typ) {
  (MyQAccessibleEvent*)(0);
  return  new MyQAccessibleEvent(obj, typ);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:684
// [-2] void QAccessibleEvent(class QAccessibleInterface *, class QAccessible::Event)
extern "C"
void* C_ZN16QAccessibleEventC1EP20QAccessibleInterfaceN11QAccessible5EventE(QAccessibleInterface * iface, QAccessible::Event typ) {
  (MyQAccessibleEvent*)(0);
  return  new MyQAccessibleEvent(iface, typ);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:699
// [-2] void ~QAccessibleEvent()
extern "C"
void C_ZN16QAccessibleEventD1Ev(void *this_) {
  delete (QAccessibleEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:701
// [4] QAccessible::Event type()
extern "C"
QAccessible::Event C_ZNK16QAccessibleEvent4typeEv(void *this_) {
  return (QAccessible::Event)((QAccessibleEvent*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:702
// [8] QObject * object()
extern "C"
void* C_ZNK16QAccessibleEvent6objectEv(void *this_) {
  return (void*)((QAccessibleEvent*)this_)->object();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:703
// [4] QAccessible::Id uniqueId()
extern "C"
QAccessible::Id C_ZNK16QAccessibleEvent8uniqueIdEv(void *this_) {
  return (QAccessible::Id)((QAccessibleEvent*)this_)->uniqueId();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:705
// [-2] void setChild(int)
extern "C"
void C_ZN16QAccessibleEvent8setChildEi(void *this_, int chld) {
  ((QAccessibleEvent*)this_)->setChild(chld);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:706
// [4] int child()
extern "C"
int C_ZNK16QAccessibleEvent5childEv(void *this_) {
  return (int)((QAccessibleEvent*)this_)->child();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:708
// [8] QAccessibleInterface * accessibleInterface()
extern "C"
void* C_ZNK16QAccessibleEvent19accessibleInterfaceEv(void *this_) {
  return (void*)((QAccessibleEvent*)this_)->accessibleInterface();
}
//  main block end
