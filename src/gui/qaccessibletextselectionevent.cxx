//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleTextSelectionEvent is pure virtual: false false
// QAccessibleTextSelectionEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleTextSelectionEvent_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleTextSelectionEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleTextSelectionEvent_t qt_meta_stringdata_MyQAccessibleTextSelectionEvent = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQAccessibleTextSelectionEvent"
  },
  "MyQAccessibleTextSelectionEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleTextSelectionEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleTextSelectionEvent : public QAccessibleTextSelectionEvent {
public:
  virtual ~MyQAccessibleTextSelectionEvent() {}
// void QAccessibleTextSelectionEvent(QObject *, int, int)
MyQAccessibleTextSelectionEvent(QObject * obj, int start, int end_) : QAccessibleTextSelectionEvent(obj, start, end_) {}
// void QAccessibleTextSelectionEvent(QAccessibleInterface *, int, int)
MyQAccessibleTextSelectionEvent(QAccessibleInterface * iface, int start, int end_) : QAccessibleTextSelectionEvent(iface, start, end_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessibletextselectionevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:774
// [-2] void QAccessibleTextSelectionEvent(QObject *, int, int) 
// (11)qm372479360 (48)_ZN29QAccessibleTextSelectionEventC2EP7QObjectii
/*void* qm372479360(QObject * obj, int start, int end_)*/{
  QObject * obj = *(QObject **)this_; int start = *(int*)this_; int end_ = *(int*)this_;
  this_ =  new QAccessibleTextSelectionEvent(obj, start, end_);
  this_ =  new MyQAccessibleTextSelectionEvent(obj, start, end_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:780
// [-2] void QAccessibleTextSelectionEvent(QAccessibleInterface *, int, int) 
// (11)qm624577784 (62)_ZN29QAccessibleTextSelectionEventC2EP20QAccessibleInterfaceii
/*void* qm624577784(QAccessibleInterface * iface, int start, int end_)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; int start = *(int*)this_; int end_ = *(int*)this_;
  this_ =  new QAccessibleTextSelectionEvent(iface, start, end_);
  this_ =  new MyQAccessibleTextSelectionEvent(iface, start, end_);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:789
// [-2] void setSelection(int, int) 
// (12)qm2865014506 (51)_ZN29QAccessibleTextSelectionEvent12setSelectionEii
//static
/*void qm2865014506(int start, int end_)*/ {
  int start = *(int*)this_; int end_ = *(int*)this_;
  (void) ((QAccessibleTextSelectionEvent*)this_)->setSelection(start, end_);
   auto xptr = (void (QAccessibleTextSelectionEvent::*)(int, int) ) &QAccessibleTextSelectionEvent::setSelection;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:794
// [4] int selectionStart() const
// (12)qm2390021757 (53)_ZNK29QAccessibleTextSelectionEvent14selectionStartEv
//static
/*void qm2390021757()*/ {
  ;
  (void) ((QAccessibleTextSelectionEvent*)this_)->selectionStart();
   auto xptr = (int (QAccessibleTextSelectionEvent::*)() const ) &QAccessibleTextSelectionEvent::selectionStart;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:795
// [4] int selectionEnd() const
// (12)qm1821966595 (51)_ZNK29QAccessibleTextSelectionEvent12selectionEndEv
//static
/*void qm1821966595()*/ {
  ;
  (void) ((QAccessibleTextSelectionEvent*)this_)->selectionEnd();
   auto xptr = (int (QAccessibleTextSelectionEvent::*)() const ) &QAccessibleTextSelectionEvent::selectionEnd;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN29QAccessibleTextSelectionEventD2Ev(void *this_)*/ {
  delete (QAccessibleTextSelectionEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessibletextselectionevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
