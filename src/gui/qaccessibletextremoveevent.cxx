//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleTextRemoveEvent is pure virtual: false
//  header block end

//  main block begin

class MyQAccessibleTextRemoveEvent : public QAccessibleTextRemoveEvent {
public:
MyQAccessibleTextRemoveEvent(QObject * obj, int position, const QString & text) : QAccessibleTextRemoveEvent(obj, position, text) {}
MyQAccessibleTextRemoveEvent(QAccessibleInterface * iface, int position, const QString & text) : QAccessibleTextRemoveEvent(iface, position, text) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:834
// [-2] void QAccessibleTextRemoveEvent(class QObject *, int, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextRemoveEventC1EP7QObjectiRK7QString(QObject * obj, int position, const QString & text) {
  (MyQAccessibleTextRemoveEvent*)(0);
  return  new MyQAccessibleTextRemoveEvent(obj, position, text);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:840
// [-2] void QAccessibleTextRemoveEvent(class QAccessibleInterface *, int, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextRemoveEventC1EP20QAccessibleInterfaceiRK7QString(QAccessibleInterface * iface, int position, const QString & text) {
  (MyQAccessibleTextRemoveEvent*)(0);
  return  new MyQAccessibleTextRemoveEvent(iface, position, text);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:847
// [-2] void ~QAccessibleTextRemoveEvent()
extern "C"
void C_ZN26QAccessibleTextRemoveEventD1Ev(void *this_) {
  delete (QAccessibleTextRemoveEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:849
// [8] QString textRemoved()
extern "C"
void* C_ZNK26QAccessibleTextRemoveEvent11textRemovedEv(void *this_) {
  auto rv = ((QAccessibleTextRemoveEvent*)this_)->textRemoved();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:852
// [4] int changePosition()
extern "C"
int C_ZNK26QAccessibleTextRemoveEvent14changePositionEv(void *this_) {
  return (int)((QAccessibleTextRemoveEvent*)this_)->changePosition();
}
//  main block end
