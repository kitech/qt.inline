//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

// QAccessibleTextUpdateEvent is pure virtual: false
//  header block end

//  main block begin

class MyQAccessibleTextUpdateEvent : public QAccessibleTextUpdateEvent {
public:
MyQAccessibleTextUpdateEvent(QObject * obj, int position, const QString & oldText, const QString & text) : QAccessibleTextUpdateEvent(obj, position, oldText, text) {}
MyQAccessibleTextUpdateEvent(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text) : QAccessibleTextUpdateEvent(iface, position, oldText, text) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:864
// [-2] void QAccessibleTextUpdateEvent(class QObject *, int, const class QString &, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextUpdateEventC1EP7QObjectiRK7QStringS4_(QObject * obj, int position, const QString & oldText, const QString & text) {
  (MyQAccessibleTextUpdateEvent*)(0);
  return  new MyQAccessibleTextUpdateEvent(obj, position, oldText, text);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:870
// [-2] void QAccessibleTextUpdateEvent(class QAccessibleInterface *, int, const class QString &, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextUpdateEventC1EP20QAccessibleInterfaceiRK7QStringS4_(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text) {
  (MyQAccessibleTextUpdateEvent*)(0);
  return  new MyQAccessibleTextUpdateEvent(iface, position, oldText, text);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:877
// [-2] void ~QAccessibleTextUpdateEvent()
extern "C"
void C_ZN26QAccessibleTextUpdateEventD1Ev(void *this_) {
  delete (QAccessibleTextUpdateEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:879
// [8] QString textRemoved()
extern "C"
void* C_ZNK26QAccessibleTextUpdateEvent11textRemovedEv(void *this_) {
  auto rv = ((QAccessibleTextUpdateEvent*)this_)->textRemoved();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:882
// [8] QString textInserted()
extern "C"
void* C_ZNK26QAccessibleTextUpdateEvent12textInsertedEv(void *this_) {
  auto rv = ((QAccessibleTextUpdateEvent*)this_)->textInserted();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:885
// [4] int changePosition()
extern "C"
int C_ZNK26QAccessibleTextUpdateEvent14changePositionEv(void *this_) {
  return (int)((QAccessibleTextUpdateEvent*)this_)->changePosition();
}
//  main block end
