//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextRemoveEvent is pure virtual: false
// QAccessibleTextRemoveEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleTextRemoveEvent : public QAccessibleTextRemoveEvent {
public:
  virtual ~MyQAccessibleTextRemoveEvent() {}
// void QAccessibleTextRemoveEvent(QObject *, int, const QString &)
MyQAccessibleTextRemoveEvent(QObject * obj, int position, const QString & text) : QAccessibleTextRemoveEvent(obj, position, text) {}
// void QAccessibleTextRemoveEvent(QAccessibleInterface *, int, const QString &)
MyQAccessibleTextRemoveEvent(QAccessibleInterface * iface, int position, const QString & text) : QAccessibleTextRemoveEvent(iface, position, text) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:834
// [-2] void QAccessibleTextRemoveEvent(QObject *, int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextRemoveEventC2EP7QObjectiRK7QString(QObject * obj, int position, QString* text) {
  return  new QAccessibleTextRemoveEvent(obj, position, *text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:840
// [-2] void QAccessibleTextRemoveEvent(QAccessibleInterface *, int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextRemoveEventC2EP20QAccessibleInterfaceiRK7QString(QAccessibleInterface * iface, int position, QString* text) {
  return  new QAccessibleTextRemoveEvent(iface, position, *text);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:847
// [-2] void ~QAccessibleTextRemoveEvent()
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleTextRemoveEventD2Ev(void *this_) {
  delete (QAccessibleTextRemoveEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:849
// [8] QString textRemoved()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleTextRemoveEvent11textRemovedEv(void *this_) {
  auto rv = ((QAccessibleTextRemoveEvent*)this_)->textRemoved();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:852
// [4] int changePosition()
extern "C" Q_DECL_EXPORT
int C_ZNK26QAccessibleTextRemoveEvent14changePositionEv(void *this_) {
  return (int)((QAccessibleTextRemoveEvent*)this_)->changePosition();
}

//  main block end
