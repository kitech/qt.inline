//  header block begin

// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QEvent is pure virtual: false false
// QEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQEvent_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEvent_t qt_meta_stringdata_MyQEvent = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQEvent"
  },
  "MyQEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEvent[] = {
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
class Q_DECL_EXPORT MyQEvent : public QEvent {
public:
  virtual ~MyQEvent() {}
// void QEvent(QEvent::Type)
MyQEvent(QEvent::Type type_) : QEvent(type_) {}
// void QEvent(const QEvent &)
MyQEvent(const QEvent & other) : QEvent(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:297
// [-2] void QEvent(QEvent::Type) 
// (12)qm2793188191 (22)_ZN6QEventC2ENS_4TypeE
/*void* qm2793188191(QEvent::Type type_)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_;
  this_ =  new QEvent(type_);
  this_ =  new MyQEvent(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:298
// [-2] void QEvent(const QEvent &) 
// (11)qm939091438 (17)_ZN6QEventC2ERKS_
/*void* qm939091438(const QEvent & other)*/{
  const QEvent & other = *(const QEvent *)this_;
  this_ =  new QEvent(other);
  this_ =  new MyQEvent(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:301
// [4] QEvent::Type type() const
// (12)qm4240343207 (18)_ZNK6QEvent4typeEv
//static
/*void qm4240343207()*/ {
  ;
  (void) ((QEvent*)this_)->type();
   auto xptr = (QEvent::Type (QEvent::*)() const ) &QEvent::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:302
// [1] bool spontaneous() const
// (12)qm3979599173 (26)_ZNK6QEvent11spontaneousEv
//static
/*void qm3979599173()*/ {
  ;
  (void) ((QEvent*)this_)->spontaneous();
   auto xptr = (bool (QEvent::*)() const ) &QEvent::spontaneous;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:304
// [-2] void setAccepted(bool) 
// (12)qm2738784580 (25)_ZN6QEvent11setAcceptedEb
//static
/*void qm2738784580(bool accepted)*/ {
  bool accepted = *(bool*)this_;
  (void) ((QEvent*)this_)->setAccepted(accepted);
   auto xptr = (void (QEvent::*)(bool) ) &QEvent::setAccepted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:305
// [1] bool isAccepted() const
// (11)qm608985925 (25)_ZNK6QEvent10isAcceptedEv
//static
/*void qm608985925()*/ {
  ;
  (void) ((QEvent*)this_)->isAccepted();
   auto xptr = (bool (QEvent::*)() const ) &QEvent::isAccepted;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:307
// [-2] void accept() 
// (12)qm1915523935 (19)_ZN6QEvent6acceptEv
//static
/*void qm1915523935()*/ {
  ;
  (void) ((QEvent*)this_)->accept();
   auto xptr = (void (QEvent::*)() ) &QEvent::accept;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:308
// [-2] void ignore() 
// (11)qm340108874 (19)_ZN6QEvent6ignoreEv
//static
/*void qm340108874()*/ {
  ;
  (void) ((QEvent*)this_)->ignore();
   auto xptr = (void (QEvent::*)() ) &QEvent::ignore;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QEventD2Ev(void *this_)*/ {
  delete (QEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
