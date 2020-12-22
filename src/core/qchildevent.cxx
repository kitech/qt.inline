//  header block begin

// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QChildEvent is pure virtual: false false
// QChildEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQChildEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQChildEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQChildEvent_t qt_meta_stringdata_MyQChildEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQChildEvent"
  },
  "MyQChildEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQChildEvent[] = {
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
class Q_DECL_EXPORT MyQChildEvent : public QChildEvent {
public:
  virtual ~MyQChildEvent() {}
// void QChildEvent(QEvent::Type, QObject *)
MyQChildEvent(QEvent::Type type_, QObject * child) : QChildEvent(type_, child) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qchildevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:352
// [-2] void QChildEvent(QEvent::Type, QObject *) 
// (12)qm1316606467 (42)_ZN11QChildEventC2EN6QEvent4TypeEP7QObject
/*void* qm1316606467(QEvent::Type type_, QObject * child)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; QObject * child = *(QObject **)this_;
  this_ =  new QChildEvent(type_, child);
  this_ =  new MyQChildEvent(type_, child);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:354
// [8] QObject * child() const
// (12)qm3675888699 (25)_ZNK11QChildEvent5childEv
//static
/*void qm3675888699()*/ {
  ;
  (void) ((QChildEvent*)this_)->child();
   auto xptr = (QObject * (QChildEvent::*)() const ) &QChildEvent::child;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:355
// [1] bool added() const
// (12)qm3202139730 (25)_ZNK11QChildEvent5addedEv
//static
/*void qm3202139730()*/ {
  ;
  (void) ((QChildEvent*)this_)->added();
   auto xptr = (bool (QChildEvent::*)() const ) &QChildEvent::added;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:356
// [1] bool polished() const
// (11)qm164407514 (28)_ZNK11QChildEvent8polishedEv
//static
/*void qm164407514()*/ {
  ;
  (void) ((QChildEvent*)this_)->polished();
   auto xptr = (bool (QChildEvent::*)() const ) &QChildEvent::polished;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:357
// [1] bool removed() const
// (12)qm1134186329 (27)_ZNK11QChildEvent7removedEv
//static
/*void qm1134186329()*/ {
  ;
  (void) ((QChildEvent*)this_)->removed();
   auto xptr = (bool (QChildEvent::*)() const ) &QChildEvent::removed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QChildEventD2Ev(void *this_)*/ {
  delete (QChildEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qchildevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
