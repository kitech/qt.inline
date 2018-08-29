//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleValueChangeEvent is pure virtual: false
// QAccessibleValueChangeEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAccessibleValueChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleValueChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleValueChangeEvent_t qt_meta_stringdata_MyQAccessibleValueChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQAccessibleValueChangeEvent"
  },
  "MyQAccessibleValueChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleValueChangeEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleValueChangeEvent : public QAccessibleValueChangeEvent {
public:
  virtual ~MyQAccessibleValueChangeEvent() {}
// void QAccessibleValueChangeEvent(QObject *, const QVariant &)
MyQAccessibleValueChangeEvent(QObject * obj, const QVariant & val) : QAccessibleValueChangeEvent(obj, val) {}
// void QAccessibleValueChangeEvent(QAccessibleInterface *, const QVariant &)
MyQAccessibleValueChangeEvent(QAccessibleInterface * iface, const QVariant & val) : QAccessibleValueChangeEvent(iface, val) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:898
// [-2] void QAccessibleValueChangeEvent(QObject *, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleValueChangeEventC2EP7QObjectRK8QVariant(QObject * obj, QVariant* val) {
  return  new QAccessibleValueChangeEvent(obj, *val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:904
// [-2] void QAccessibleValueChangeEvent(QAccessibleInterface *, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAccessibleValueChangeEventC2EP20QAccessibleInterfaceRK8QVariant(QAccessibleInterface * iface, QVariant* val) {
  return  new QAccessibleValueChangeEvent(iface, *val);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:911
// [-2] void ~QAccessibleValueChangeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN27QAccessibleValueChangeEventD2Ev(void *this_) {
  delete (QAccessibleValueChangeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:913
// [-2] void setValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAccessibleValueChangeEvent8setValueERK8QVariant(void *this_, QVariant* val) {
  ((QAccessibleValueChangeEvent*)this_)->setValue(*val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:914
// [16] QVariant value()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAccessibleValueChangeEvent5valueEv(void *this_) {
  auto rv = ((QAccessibleValueChangeEvent*)this_)->value();
return new QVariant(rv);
}

//  main block end
