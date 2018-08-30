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

struct qt_meta_stringdata_MyQAccessibleTextRemoveEvent_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextRemoveEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextRemoveEvent_t qt_meta_stringdata_MyQAccessibleTextRemoveEvent = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAccessibleTextRemoveEvent"
  },
  "MyQAccessibleTextRemoveEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextRemoveEvent[] = {
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
