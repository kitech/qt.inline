//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:834
// void QAccessibleTextRemoveEvent(class QObject *, int, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextRemoveEventC1EP7QObjectiRK7QString(QObject * obj, int position, const QString & text) {
  return new QAccessibleTextRemoveEvent(obj, position, text);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:840
// void QAccessibleTextRemoveEvent(class QAccessibleInterface *, int, const class QString &)
extern "C"
void* C_ZN26QAccessibleTextRemoveEventC1EP20QAccessibleInterfaceiRK7QString(QAccessibleInterface * iface, int position, const QString & text) {
  return new QAccessibleTextRemoveEvent(iface, position, text);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:847
// void ~QAccessibleTextRemoveEvent()
extern "C"
void C_ZN26QAccessibleTextRemoveEventD1Ev(void *this_) {
  delete (QAccessibleTextRemoveEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:849
// QString textRemoved()
extern "C"
void C_ZNK26QAccessibleTextRemoveEvent11textRemovedEv(void *this_) {
  /*return*/ ((QAccessibleTextRemoveEvent*)this_)->textRemoved();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:852
// int changePosition()
extern "C"
void C_ZNK26QAccessibleTextRemoveEvent14changePositionEv(void *this_) {
  /*return*/ ((QAccessibleTextRemoveEvent*)this_)->changePosition();
}
//  main block end
