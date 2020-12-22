//  header block begin

// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimerEvent is pure virtual: false false
// QTimerEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTimerEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTimerEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTimerEvent_t qt_meta_stringdata_MyQTimerEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTimerEvent"
  },
  "MyQTimerEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTimerEvent[] = {
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
class Q_DECL_EXPORT MyQTimerEvent : public QTimerEvent {
public:
  virtual ~MyQTimerEvent() {}
// void QTimerEvent(int)
MyQTimerEvent(int timerId) : QTimerEvent(timerId) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtimerevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:340
// [-2] void QTimerEvent(int) 
// (11)qm754475756 (20)_ZN11QTimerEventC2Ei
/*void* qm754475756(int timerId)*/{
  int timerId = *(int*)this_;
  this_ =  new QTimerEvent(timerId);
  this_ =  new MyQTimerEvent(timerId);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:342
// [4] int timerId() const
// (12)qm3491250163 (27)_ZNK11QTimerEvent7timerIdEv
//static
/*void qm3491250163()*/ {
  ;
  (void) ((QTimerEvent*)this_)->timerId();
   auto xptr = (int (QTimerEvent::*)() const ) &QTimerEvent::timerId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTimerEventD2Ev(void *this_)*/ {
  delete (QTimerEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtimerevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
