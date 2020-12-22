//  header block begin

// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QDeferredDeleteEvent is pure virtual: false false
// QDeferredDeleteEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDeferredDeleteEvent_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDeferredDeleteEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDeferredDeleteEvent_t qt_meta_stringdata_MyQDeferredDeleteEvent = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQDeferredDeleteEvent"
  },
  "MyQDeferredDeleteEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDeferredDeleteEvent[] = {
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
class Q_DECL_EXPORT MyQDeferredDeleteEvent : public QDeferredDeleteEvent {
public:
  virtual ~MyQDeferredDeleteEvent() {}
// void QDeferredDeleteEvent()
MyQDeferredDeleteEvent() : QDeferredDeleteEvent() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdeferreddeleteevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:377
// [-2] void QDeferredDeleteEvent() 
// (12)qm2727277488 (29)_ZN20QDeferredDeleteEventC2Ev
/*void* qm2727277488()*/{
  ;
  this_ =  new QDeferredDeleteEvent();
  this_ =  new MyQDeferredDeleteEvent();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:379
// [4] int loopLevel() const
// (12)qm1878449921 (38)_ZNK20QDeferredDeleteEvent9loopLevelEv
//static
/*void qm1878449921()*/ {
  ;
  (void) ((QDeferredDeleteEvent*)this_)->loopLevel();
   auto xptr = (int (QDeferredDeleteEvent::*)() const ) &QDeferredDeleteEvent::loopLevel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QDeferredDeleteEventD2Ev(void *this_)*/ {
  delete (QDeferredDeleteEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdeferreddeleteevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
