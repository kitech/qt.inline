//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#include <qaccessible.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qaccessible.h:668
// void QAccessibleEvent(class QObject *, class QAccessible::Event)
extern "C"
void* C_ZN16QAccessibleEventC1EP7QObjectN11QAccessible5EventE(QObject * obj, QAccessible::Event typ) {
  return new QAccessibleEvent(obj, typ);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:684
// void QAccessibleEvent(class QAccessibleInterface *, class QAccessible::Event)
extern "C"
void* C_ZN16QAccessibleEventC1EP20QAccessibleInterfaceN11QAccessible5EventE(QAccessibleInterface * iface, QAccessible::Event typ) {
  return new QAccessibleEvent(iface, typ);
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:699
// void ~QAccessibleEvent()
extern "C"
void C_ZN16QAccessibleEventD1Ev(void *this_) {
  delete (QAccessibleEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:701
// QAccessible::Event type()
extern "C"
void C_ZNK16QAccessibleEvent4typeEv(void *this_) {
  /*return*/ ((QAccessibleEvent*)this_)->type();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:702
// QObject * object()
extern "C"
void C_ZNK16QAccessibleEvent6objectEv(void *this_) {
  /*return*/ ((QAccessibleEvent*)this_)->object();
}
// /usr/include/qt/QtGui/qaccessible.h:703
// QAccessible::Id uniqueId()
extern "C"
void C_ZNK16QAccessibleEvent8uniqueIdEv(void *this_) {
  /*return*/ ((QAccessibleEvent*)this_)->uniqueId();
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:705
// void setChild(int)
extern "C"
void C_ZN16QAccessibleEvent8setChildEi(void *this_, int chld) {
  ((QAccessibleEvent*)this_)->setChild(chld);
}
// inline
// /usr/include/qt/QtGui/qaccessible.h:706
// int child()
extern "C"
void C_ZNK16QAccessibleEvent5childEv(void *this_) {
  /*return*/ ((QAccessibleEvent*)this_)->child();
}
// virtual
// /usr/include/qt/QtGui/qaccessible.h:708
// QAccessibleInterface * accessibleInterface()
extern "C"
void C_ZNK16QAccessibleEvent19accessibleInterfaceEv(void *this_) {
  /*return*/ ((QAccessibleEvent*)this_)->accessibleInterface();
}
//  main block end
