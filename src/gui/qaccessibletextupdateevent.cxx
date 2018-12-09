//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextUpdateEvent is pure virtual: false
// QAccessibleTextUpdateEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleTextUpdateEvent_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextUpdateEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextUpdateEvent_t qt_meta_stringdata_MyQAccessibleTextUpdateEvent = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAccessibleTextUpdateEvent"
  },
  "MyQAccessibleTextUpdateEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextUpdateEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleTextUpdateEvent : public QAccessibleTextUpdateEvent {
public:
  virtual ~MyQAccessibleTextUpdateEvent() {}
// void QAccessibleTextUpdateEvent(QObject *, int, const QString &, const QString &)
MyQAccessibleTextUpdateEvent(QObject * obj, int position, const QString & oldText, const QString & text) : QAccessibleTextUpdateEvent(obj, position, oldText, text) {}
// void QAccessibleTextUpdateEvent(QAccessibleInterface *, int, const QString &, const QString &)
MyQAccessibleTextUpdateEvent(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text) : QAccessibleTextUpdateEvent(iface, position, oldText, text) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:864
// [-2] void QAccessibleTextUpdateEvent(QObject *, int, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextUpdateEventC2EP7QObjectiRK7QStringS4_(QObject * obj, int position, QString* oldText, QString* text) {
  return  new QAccessibleTextUpdateEvent(obj, position, *oldText, *text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:870
// [-2] void QAccessibleTextUpdateEvent(QAccessibleInterface *, int, const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAccessibleTextUpdateEventC2EP20QAccessibleInterfaceiRK7QStringS4_(QAccessibleInterface * iface, int position, QString* oldText, QString* text) {
  return  new QAccessibleTextUpdateEvent(iface, position, *oldText, *text);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:877
// [-2] void ~QAccessibleTextUpdateEvent()
extern "C" Q_DECL_EXPORT
void C_ZN26QAccessibleTextUpdateEventD2Ev(void *this_) {
  delete (QAccessibleTextUpdateEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:879
// [8] QString textRemoved()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleTextUpdateEvent11textRemovedEv(void *this_) {
  auto rv = ((QAccessibleTextUpdateEvent*)this_)->textRemoved();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:882
// [8] QString textInserted()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QAccessibleTextUpdateEvent12textInsertedEv(void *this_) {
  auto rv = ((QAccessibleTextUpdateEvent*)this_)->textInserted();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:885
// [4] int changePosition()
extern "C" Q_DECL_EXPORT
int C_ZNK26QAccessibleTextUpdateEvent14changePositionEv(void *this_) {
  return (int)((QAccessibleTextUpdateEvent*)this_)->changePosition();
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
