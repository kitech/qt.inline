//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextInsertEvent is pure virtual: false
// QAccessibleTextInsertEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleTextInsertEvent : public QAccessibleTextInsertEvent {
public:
  virtual ~MyQAccessibleTextInsertEvent() {}
// void QAccessibleTextInsertEvent(class QObject *, int, const class QString &)
MyQAccessibleTextInsertEvent(QObject * obj, int position, const QString & text) : QAccessibleTextInsertEvent(obj, position, text) {}
// void QAccessibleTextInsertEvent(class QAccessibleInterface *, int, const class QString &)
MyQAccessibleTextInsertEvent(QAccessibleInterface * iface, int position, const QString & text) : QAccessibleTextInsertEvent(iface, position, text) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:804
// [-2] void QAccessibleTextInsertEvent(class QObject *, int, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextInsertEventC2EP7QObjectiRK7QString(QObject * obj, int position, QString* text) {
  return  new QAccessibleTextInsertEvent(obj, position, *text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:810
// [-2] void QAccessibleTextInsertEvent(class QAccessibleInterface *, int, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextInsertEventC2EP20QAccessibleInterfaceiRK7QString(QAccessibleInterface * iface, int position, QString* text) {
  return  new QAccessibleTextInsertEvent(iface, position, *text);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:817
// [-2] void ~QAccessibleTextInsertEvent()
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleTextInsertEventD2Ev(void *this_) {
  delete (QAccessibleTextInsertEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:819
// [8] QString textInserted()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleTextInsertEvent12textInsertedEv(void *this_) {
  auto rv = ((QAccessibleTextInsertEvent*)this_)->textInserted();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:822
// [4] int changePosition()
extern "C" Q_DECL_EXPORT
int C_ZNK26QAccessibleTextInsertEvent14changePositionEv(void *this_) {
  return (int)((QAccessibleTextInsertEvent*)this_)->changePosition();
}

//  main block end
