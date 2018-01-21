//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:864
// void QAccessibleTextUpdateEvent(class QObject *, int, const class QString &, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextUpdateEventC1EP7QObjectiRK7QStringS4_(QObject * obj, int position, const QString & oldText, const QString & text) {
  return new QAccessibleTextUpdateEvent(obj, position, oldText, text);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:870
// void QAccessibleTextUpdateEvent(class QAccessibleInterface *, int, const class QString &, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextUpdateEventC1EP20QAccessibleInterfaceiRK7QStringS4_(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text) {
  return new QAccessibleTextUpdateEvent(iface, position, oldText, text);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:877
// void ~QAccessibleTextUpdateEvent()
extern "C"
void C_ZN26QAccessibleTextUpdateEventD1Ev(void *this_) {
  delete (QAccessibleTextUpdateEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:879
// QString textRemoved()
extern "C"
void C_ZNK26QAccessibleTextUpdateEvent11textRemovedEv(void *this_) {
  /*return*/ ((QAccessibleTextUpdateEvent*)this_)->textRemoved();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:882
// QString textInserted()
extern "C"
void C_ZNK26QAccessibleTextUpdateEvent12textInsertedEv(void *this_) {
  /*return*/ ((QAccessibleTextUpdateEvent*)this_)->textInserted();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:885
// int changePosition()
extern "C"
void C_ZNK26QAccessibleTextUpdateEvent14changePositionEv(void *this_) {
  /*return*/ ((QAccessibleTextUpdateEvent*)this_)->changePosition();
}
//  main block end
