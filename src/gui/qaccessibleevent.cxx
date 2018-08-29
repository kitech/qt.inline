//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleEvent is pure virtual: false
// QAccessibleEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAccessibleEvent_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleEvent_t qt_meta_stringdata_MyQAccessibleEvent = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQAccessibleEvent"
  },
  "MyQAccessibleEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleEvent : public QAccessibleEvent {
public:
  virtual ~MyQAccessibleEvent() {}
// void QAccessibleEvent(QObject *, QAccessible::Event)
MyQAccessibleEvent(QObject * obj, QAccessible::Event typ) : QAccessibleEvent(obj, typ) {}
// void QAccessibleEvent(QAccessibleInterface *, QAccessible::Event)
MyQAccessibleEvent(QAccessibleInterface * iface, QAccessible::Event typ) : QAccessibleEvent(iface, typ) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:668
// [-2] void QAccessibleEvent(QObject *, QAccessible::Event)
extern "C" Q_DECL_EXPORT
void* C_ZN16QAccessibleEventC2EP7QObjectN11QAccessible5EventE(QObject * obj, QAccessible::Event typ) {
  return  new QAccessibleEvent(obj, typ);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:684
// [-2] void QAccessibleEvent(QAccessibleInterface *, QAccessible::Event)
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
