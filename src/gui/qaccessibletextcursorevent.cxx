//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextCursorEvent is pure virtual: false false
// QAccessibleTextCursorEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleTextCursorEvent_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextCursorEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextCursorEvent_t qt_meta_stringdata_MyQAccessibleTextCursorEvent = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAccessibleTextCursorEvent"
  },
  "MyQAccessibleTextCursorEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextCursorEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleTextCursorEvent : public QAccessibleTextCursorEvent {
public:
  virtual ~MyQAccessibleTextCursorEvent() {}
// void QAccessibleTextCursorEvent(QObject *, int)
MyQAccessibleTextCursorEvent(QObject * obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos) {}
// void QAccessibleTextCursorEvent(QAccessibleInterface *, int)
MyQAccessibleTextCursorEvent(QAccessibleInterface * iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletextcursorevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:748
// [-2] void QAccessibleTextCursorEvent(QObject *, int) 
// (12)qm3911566872 (44)_ZN26QAccessibleTextCursorEventC2EP7QObjecti
/*void* qm3911566872(QObject * obj, int cursorPos)*/{
  QObject * obj = *(QObject **)this_; int cursorPos = *(int*)this_;
  this_ =  new QAccessibleTextCursorEvent(obj, cursorPos);
  this_ =  new MyQAccessibleTextCursorEvent(obj, cursorPos);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:754
// [-2] void QAccessibleTextCursorEvent(QAccessibleInterface *, int) 
// (12)qm1570575241 (58)_ZN26QAccessibleTextCursorEventC2EP20QAccessibleInterfacei
/*void* qm1570575241(QAccessibleInterface * iface, int cursorPos)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; int cursorPos = *(int*)this_;
  this_ =  new QAccessibleTextCursorEvent(iface, cursorPos);
  this_ =  new MyQAccessibleTextCursorEvent(iface, cursorPos);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:763
// [-2] void setCursorPosition(int) 
// (12)qm1320083515 (52)_ZN26QAccessibleTextCursorEvent17setCursorPositionEi
//static
/*void qm1320083515(int position)*/ {
  int position = *(int*)this_;
  (void) ((QAccessibleTextCursorEvent*)this_)->setCursorPosition(position);
   auto xptr = (void (QAccessibleTextCursorEvent::*)(int) ) &QAccessibleTextCursorEvent::setCursorPosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:764
// [4] int cursorPosition() const
// (12)qm3059588598 (50)_ZNK26QAccessibleTextCursorEvent14cursorPositionEv
//static
/*void qm3059588598()*/ {
  ;
  (void) ((QAccessibleTextCursorEvent*)this_)->cursorPosition();
   auto xptr = (int (QAccessibleTextCursorEvent::*)() const ) &QAccessibleTextCursorEvent::cursorPosition;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QAccessibleTextCursorEventD2Ev(void *this_)*/ {
  delete (QAccessibleTextCursorEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletextcursorevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
