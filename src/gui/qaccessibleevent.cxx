//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleEvent is pure virtual: false
// QAccessibleEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleEvent : public QAccessibleEvent {
public:
  virtual ~MyQAccessibleEvent() {}
// void QAccessibleEvent(class QObject *, class QAccessible::Event)
MyQAccessibleEvent(QObject * obj, QAccessible::Event typ) : QAccessibleEvent(obj, typ) {}
// void QAccessibleEvent(class QAccessibleInterface *, class QAccessible::Event)
MyQAccessibleEvent(QAccessibleInterface * iface, QAccessible::Event typ) : QAccessibleEvent(iface, typ) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:668
// [-2] void QAccessibleEvent(class QObject *, class QAccessible::Event)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAccessibleEventC2EP7QObjectN11QAccessible5EventE(QObject * obj, QAccessible::Event typ) {
  return  new QAccessibleEvent(obj, typ);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:684
// [-2] void QAccessibleEvent(class QAccessibleInterface *, class QAccessible::Event)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAccessibleEventC2EP20QAccessibleInterfaceN11QAccessible5EventE(QAccessibleInterface * iface, QAccessible::Event typ) {
  return  new QAccessibleEvent(iface, typ);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:699
// [-2] void ~QAccessibleEvent()
extern "C" Q_DECL_EXPORT
void C_ZN16QAccessibleEventD2Ev(void *this_) {
  delete (QAccessibleEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:701
// [4] QAccessible::Event type()
extern "C" Q_DECL_EXPORT
QAccessible::Event C_ZNK16QAccessibleEvent4typeEv(void *this_) {
  return (QAccessible::Event)((QAccessibleEvent*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:702
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAccessibleEvent6objectEv(void *this_) {
  return (void*)((QAccessibleEvent*)this_)->object();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:703
// [4] QAccessible::Id uniqueId()
extern "C" Q_DECL_EXPORT
QAccessible::Id C_ZNK16QAccessibleEvent8uniqueIdEv(void *this_) {
  return (QAccessible::Id)((QAccessibleEvent*)this_)->uniqueId();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:705
// [-2] void setChild(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QAccessibleEvent8setChildEi(void *this_, int chld) {
  ((QAccessibleEvent*)this_)->setChild(chld);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:706
// [4] int child()
extern "C" Q_DECL_EXPORT
int C_ZNK16QAccessibleEvent5childEv(void *this_) {
  return (int)((QAccessibleEvent*)this_)->child();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:708
// [8] QAccessibleInterface * accessibleInterface()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QAccessibleEvent19accessibleInterfaceEv(void *this_) {
  return (void*)((QAccessibleEvent*)this_)->accessibleInterface();
}

//  main block end
