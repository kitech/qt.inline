//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:804
// void QAccessibleTextInsertEvent(class QObject *, int, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextInsertEventC1EP7QObjectiRK7QString(QObject * obj, int position, const QString & text) {
  return new QAccessibleTextInsertEvent(obj, position, text);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:810
// void QAccessibleTextInsertEvent(class QAccessibleInterface *, int, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextInsertEventC1EP20QAccessibleInterfaceiRK7QString(QAccessibleInterface * iface, int position, const QString & text) {
  return new QAccessibleTextInsertEvent(iface, position, text);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:817
// void ~QAccessibleTextInsertEvent()
extern "C"
void C_ZN26QAccessibleTextInsertEventD1Ev(void *this_) {
  delete (QAccessibleTextInsertEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:819
// QString textInserted()
extern "C"
void C_ZNK26QAccessibleTextInsertEvent12textInsertedEv(void *this_) {
  /*return*/ ((QAccessibleTextInsertEvent*)this_)->textInserted();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:822
// int changePosition()
extern "C"
void C_ZNK26QAccessibleTextInsertEvent14changePositionEv(void *this_) {
  /*return*/ ((QAccessibleTextInsertEvent*)this_)->changePosition();
}
//  main block end
