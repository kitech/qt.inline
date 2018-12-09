//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleStateChangeEvent is pure virtual: false
// QAccessibleStateChangeEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleStateChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleStateChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleStateChangeEvent_t qt_meta_stringdata_MyQAccessibleStateChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQAccessibleStateChangeEvent"
  },
  "MyQAccessibleStateChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleStateChangeEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleStateChangeEvent : public QAccessibleStateChangeEvent {
public:
  virtual ~MyQAccessibleStateChangeEvent() {}
// void QAccessibleStateChangeEvent(QObject *, QAccessible::State)
MyQAccessibleStateChangeEvent(QObject * obj, QAccessible::State state) : QAccessibleStateChangeEvent(obj, state) {}
// void QAccessibleStateChangeEvent(QAccessibleInterface *, QAccessible::State)
MyQAccessibleStateChangeEvent(QAccessibleInterface * iface, QAccessible::State state) : QAccessibleStateChangeEvent(iface, state) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:723
// [-2] void QAccessibleStateChangeEvent(QObject *, QAccessible::State)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleStateChangeEventC2EP7QObjectN11QAccessible5StateE(QObject * obj, QAccessible::State state) {
  return  new QAccessibleStateChangeEvent(obj, state);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:728
// [-2] void QAccessibleStateChangeEvent(QAccessibleInterface *, QAccessible::State)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleStateChangeEventC2EP20QAccessibleInterfaceN11QAccessible5StateE(QAccessibleInterface * iface, QAccessible::State state) {
  return  new QAccessibleStateChangeEvent(iface, state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:733
// [-2] void ~QAccessibleStateChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN27QAccessibleStateChangeEventD2Ev(void *this_) {
  delete (QAccessibleStateChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:735
// [8] QAccessible::State changedStates()
extern "C" Q_DECL_EXPORT
QAccessible::State C_ZNK27QAccessibleStateChangeEvent13changedStatesEv(void *this_) {
  return (QAccessible::State)((QAccessibleStateChangeEvent*)this_)->changedStates();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
