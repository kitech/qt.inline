//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QInputEvent is pure virtual: false false
// QInputEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQInputEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQInputEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQInputEvent_t qt_meta_stringdata_MyQInputEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQInputEvent"
  },
  "MyQInputEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQInputEvent[] = {
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
class Q_DECL_EXPORT MyQInputEvent : public QInputEvent {
public:
  virtual ~MyQInputEvent() {}
// void QInputEvent(QEvent::Type, Qt::KeyboardModifiers)
MyQInputEvent(QEvent::Type type_, QFlags<Qt::KeyboardModifier> modifiers) : QInputEvent(type_, modifiers) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qinputevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:71
// [-2] void QInputEvent(QEvent::Type, Qt::KeyboardModifiers) 
// (11)qm634116851 (65)_ZN11QInputEventC2EN6QEvent4TypeE6QFlagsIN2Qt16KeyboardModifierEE
/*void* qm634116851(QEvent::Type type_, QFlags<Qt::KeyboardModifier> modifiers)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  this_ =  new QInputEvent(type_, modifiers);
  this_ =  new MyQInputEvent(type_, modifiers);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:73
// [4] Qt::KeyboardModifiers modifiers() const
// (12)qm2378656152 (29)_ZNK11QInputEvent9modifiersEv
//static
/*void qm2378656152()*/ {
  ;
  (void) ((QInputEvent*)this_)->modifiers();
   auto xptr = (QFlags<Qt::KeyboardModifier> (QInputEvent::*)() const ) &QInputEvent::modifiers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:74
// [-2] void setModifiers(Qt::KeyboardModifiers) 
// (11)qm866161578 (63)_ZN11QInputEvent12setModifiersE6QFlagsIN2Qt16KeyboardModifierEE
//static
/*void qm866161578(QFlags<Qt::KeyboardModifier> amodifiers)*/ {
  QFlags<Qt::KeyboardModifier> amodifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  (void) ((QInputEvent*)this_)->setModifiers(amodifiers);
   auto xptr = (void (QInputEvent::*)(QFlags<Qt::KeyboardModifier>) ) &QInputEvent::setModifiers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:75
// [8] ulong timestamp() const
// (12)qm3682385401 (29)_ZNK11QInputEvent9timestampEv
//static
/*void qm3682385401()*/ {
  ;
  (void) ((QInputEvent*)this_)->timestamp();
   auto xptr = (unsigned long (QInputEvent::*)() const ) &QInputEvent::timestamp;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:76
// [-2] void setTimestamp(ulong) 
// (12)qm1066347960 (32)_ZN11QInputEvent12setTimestampEm
//static
/*void qm1066347960(unsigned long atimestamp)*/ {
  unsigned long atimestamp = *(unsigned long*)this_;
  (void) ((QInputEvent*)this_)->setTimestamp(atimestamp);
   auto xptr = (void (QInputEvent::*)(unsigned long) ) &QInputEvent::setTimestamp;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QInputEventD2Ev(void *this_)*/ {
  delete (QInputEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qinputevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
