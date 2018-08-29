//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextInsertEvent is pure virtual: false
// QAccessibleTextInsertEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAccessibleTextInsertEvent_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextInsertEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextInsertEvent_t qt_meta_stringdata_MyQAccessibleTextInsertEvent = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAccessibleTextInsertEvent"
  },
  "MyQAccessibleTextInsertEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextInsertEvent[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQAccessibleTextInsertEvent : public QAccessibleTextInsertEvent {
public:
  virtual ~MyQAccessibleTextInsertEvent() {}
// void QAccessibleTextInsertEvent(QObject *, int, const QString &)
MyQAccessibleTextInsertEvent(QObject * obj, int position, const QString & text) : QAccessibleTextInsertEvent(obj, position, text) {}
// void QAccessibleTextInsertEvent(QAccessibleInterface *, int, const QString &)
MyQAccessibleTextInsertEvent(QAccessibleInterface * iface, int position, const QString & text) : QAccessibleTextInsertEvent(iface, position, text) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:804
// [-2] void QAccessibleTextInsertEvent(QObject *, int, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextInsertEventC2EP7QObjectiRK7QString(QObject * obj, int position, QString* text) {
  return  new QAccessibleTextInsertEvent(obj, position, *text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:810
// [-2] void QAccessibleTextInsertEvent(QAccessibleInterface *, int, const QString &)
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
