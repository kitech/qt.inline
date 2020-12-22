//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWindowStateChangeEvent is pure virtual: false false
// QWindowStateChangeEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWindowStateChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWindowStateChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWindowStateChangeEvent_t qt_meta_stringdata_MyQWindowStateChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQWindowStateChangeEvent"
  },
  "MyQWindowStateChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWindowStateChangeEvent[] = {
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
class Q_DECL_EXPORT MyQWindowStateChangeEvent : public QWindowStateChangeEvent {
public:
  virtual ~MyQWindowStateChangeEvent() {}
// void QWindowStateChangeEvent(Qt::WindowStates, bool)
MyQWindowStateChangeEvent(QFlags<Qt::WindowState> aOldState, bool isOverride) : QWindowStateChangeEvent(aOldState, isOverride) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwindowstatechangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:825
// [-2] void QWindowStateChangeEvent(Qt::WindowStates, bool) 
// (12)qm1742490735 (59)_ZN23QWindowStateChangeEventC2E6QFlagsIN2Qt11WindowStateEEb
/*void* qm1742490735(QFlags<Qt::WindowState> aOldState, bool isOverride)*/{
  QFlags<Qt::WindowState> aOldState = *(QFlags<Qt::WindowState>*)this_; bool isOverride = *(bool*)this_;
  this_ =  new QWindowStateChangeEvent(aOldState, isOverride);
  this_ =  new MyQWindowStateChangeEvent(aOldState, isOverride);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:828
// [4] Qt::WindowStates oldState() const
// (12)qm2359992506 (40)_ZNK23QWindowStateChangeEvent8oldStateEv
//static
/*void qm2359992506()*/ {
  ;
  (void) ((QWindowStateChangeEvent*)this_)->oldState();
   auto xptr = (QFlags<Qt::WindowState> (QWindowStateChangeEvent::*)() const ) &QWindowStateChangeEvent::oldState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QWindowStateChangeEventD2Ev(void *this_)*/ {
  delete (QWindowStateChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwindowstatechangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
