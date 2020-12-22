//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QInputMethodEvent is pure virtual: false false
// QInputMethodEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQInputMethodEvent_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQInputMethodEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQInputMethodEvent_t qt_meta_stringdata_MyQInputMethodEvent = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQInputMethodEvent"
  },
  "MyQInputMethodEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQInputMethodEvent[] = {
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
class Q_DECL_EXPORT MyQInputMethodEvent : public QInputMethodEvent {
public:
  virtual ~MyQInputMethodEvent() {}
// void QInputMethodEvent()
MyQInputMethodEvent() : QInputMethodEvent() {}
// void QInputMethodEvent(const QString &, const QList<QInputMethodEvent::Attribute> &)
MyQInputMethodEvent(const QString & preeditText, const QList<QInputMethodEvent::Attribute> & attributes) : QInputMethodEvent(preeditText, attributes) {}
// void QInputMethodEvent(const QInputMethodEvent &)
MyQInputMethodEvent(const QInputMethodEvent & other) : QInputMethodEvent(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qinputmethodevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:597
// [-2] void QInputMethodEvent() 
// (11)qm967411084 (26)_ZN17QInputMethodEventC2Ev
/*void* qm967411084()*/{
  ;
  this_ =  new QInputMethodEvent();
  this_ =  new MyQInputMethodEvent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:598
// [-2] void QInputMethodEvent(const QString &, const QList<QInputMethodEvent::Attribute> &) 
// (12)qm1003021782 (59)_ZN17QInputMethodEventC2ERK7QStringRK5QListINS_9AttributeEE
/*void* qm1003021782(const QString & preeditText, const QList<QInputMethodEvent::Attribute> & attributes)*/{
  const QString & preeditText = *(const QString *)this_; const QList<QInputMethodEvent::Attribute> & attributes = *(const QList<QInputMethodEvent::Attribute> *)this_;
  this_ =  new QInputMethodEvent(preeditText, attributes);
  this_ =  new MyQInputMethodEvent(preeditText, attributes);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:602
// [8] const QList<QInputMethodEvent::Attribute> & attributes() const
// (11)qm334143686 (37)_ZNK17QInputMethodEvent10attributesEv
//static
/*void qm334143686()*/ {
  ;
  (void) ((QInputMethodEvent*)this_)->attributes();
   auto xptr = (const QList<QInputMethodEvent::Attribute> & (QInputMethodEvent::*)() const ) &QInputMethodEvent::attributes;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:603
// [8] const QString & preeditString() const
// (12)qm2350695945 (40)_ZNK17QInputMethodEvent13preeditStringEv
//static
/*void qm2350695945()*/ {
  ;
  (void) ((QInputMethodEvent*)this_)->preeditString();
   auto xptr = (const QString & (QInputMethodEvent::*)() const ) &QInputMethodEvent::preeditString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:605
// [8] const QString & commitString() const
// (11)qm919157259 (39)_ZNK17QInputMethodEvent12commitStringEv
//static
/*void qm919157259()*/ {
  ;
  (void) ((QInputMethodEvent*)this_)->commitString();
   auto xptr = (const QString & (QInputMethodEvent::*)() const ) &QInputMethodEvent::commitString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:606
// [4] int replacementStart() const
// (11)qm966691332 (43)_ZNK17QInputMethodEvent16replacementStartEv
//static
/*void qm966691332()*/ {
  ;
  (void) ((QInputMethodEvent*)this_)->replacementStart();
   auto xptr = (int (QInputMethodEvent::*)() const ) &QInputMethodEvent::replacementStart;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:607
// [4] int replacementLength() const
// (12)qm4040029192 (44)_ZNK17QInputMethodEvent17replacementLengthEv
//static
/*void qm4040029192()*/ {
  ;
  (void) ((QInputMethodEvent*)this_)->replacementLength();
   auto xptr = (int (QInputMethodEvent::*)() const ) &QInputMethodEvent::replacementLength;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:609
// [-2] void QInputMethodEvent(const QInputMethodEvent &) 
// (12)qm3343733815 (29)_ZN17QInputMethodEventC2ERKS_
/*void* qm3343733815(const QInputMethodEvent & other)*/{
  const QInputMethodEvent & other = *(const QInputMethodEvent *)this_;
  this_ =  new QInputMethodEvent(other);
  this_ =  new MyQInputMethodEvent(other);
}


/*void C_ZN17QInputMethodEventD2Ev(void *this_)*/ {
  delete (QInputMethodEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qinputmethodevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
