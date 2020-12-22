//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextInsertEvent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletextinsertevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:805
// [-2] void QAccessibleTextInsertEvent(QObject *, int, const QString &) 
// (12)qm2372812967 (54)_ZN26QAccessibleTextInsertEventC2EP7QObjectiRK7QString
/*void* qm2372812967(QObject * obj, int position, const QString & text)*/{
  QObject * obj = *(QObject **)this_; int position = *(int*)this_; const QString & text = *(const QString *)this_;
  this_ =  new QAccessibleTextInsertEvent(obj, position, text);
  this_ =  new MyQAccessibleTextInsertEvent(obj, position, text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:811
// [-2] void QAccessibleTextInsertEvent(QAccessibleInterface *, int, const QString &) 
// (12)qm3291957079 (68)_ZN26QAccessibleTextInsertEventC2EP20QAccessibleInterfaceiRK7QString
/*void* qm3291957079(QAccessibleInterface * iface, int position, const QString & text)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; int position = *(int*)this_; const QString & text = *(const QString *)this_;
  this_ =  new QAccessibleTextInsertEvent(iface, position, text);
  this_ =  new MyQAccessibleTextInsertEvent(iface, position, text);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:820
// [8] QString textInserted() const
// (12)qm1771071454 (48)_ZNK26QAccessibleTextInsertEvent12textInsertedEv
//static
/*void qm1771071454()*/ {
  ;
  (void) ((QAccessibleTextInsertEvent*)this_)->textInserted();
   auto xptr = (QString (QAccessibleTextInsertEvent::*)() const ) &QAccessibleTextInsertEvent::textInserted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:823
// [4] int changePosition() const
// (12)qm2078466065 (50)_ZNK26QAccessibleTextInsertEvent14changePositionEv
//static
/*void qm2078466065()*/ {
  ;
  (void) ((QAccessibleTextInsertEvent*)this_)->changePosition();
   auto xptr = (int (QAccessibleTextInsertEvent::*)() const ) &QAccessibleTextInsertEvent::changePosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAccessibleTextInsertEventD2Ev(void *this_)*/ {
  delete (QAccessibleTextInsertEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletextinsertevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
