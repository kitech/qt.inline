//  header block begin

// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleValueChangeEvent is pure virtual: false false
// QAccessibleValueChangeEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAccessibleValueChangeEvent_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleValueChangeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleValueChangeEvent_t qt_meta_stringdata_MyQAccessibleValueChangeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQAccessibleValueChangeEvent"
  },
  "MyQAccessibleValueChangeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleValueChangeEvent[] = {
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
class Q_DECL_EXPORT MyQAccessibleValueChangeEvent : public QAccessibleValueChangeEvent {
public:
  virtual ~MyQAccessibleValueChangeEvent() {}
// void QAccessibleValueChangeEvent(QObject *, const QVariant &)
MyQAccessibleValueChangeEvent(QObject * obj, const QVariant & val) : QAccessibleValueChangeEvent(obj, val) {}
// void QAccessibleValueChangeEvent(QAccessibleInterface *, const QVariant &)
MyQAccessibleValueChangeEvent(QAccessibleInterface * iface, const QVariant & val) : QAccessibleValueChangeEvent(iface, val) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaccessiblevaluechangeevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:899
// [-2] void QAccessibleValueChangeEvent(QObject *, const QVariant &) 
// (11)qm265134276 (55)_ZN27QAccessibleValueChangeEventC2EP7QObjectRK8QVariant
/*void* qm265134276(QObject * obj, const QVariant & val)*/{
  QObject * obj = *(QObject **)this_; const QVariant & val = *(const QVariant *)this_;
  this_ =  new QAccessibleValueChangeEvent(obj, val);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:905
// [-2] void QAccessibleValueChangeEvent(QAccessibleInterface *, const QVariant &) 
// (12)qm2197674980 (69)_ZN27QAccessibleValueChangeEventC2EP20QAccessibleInterfaceRK8QVariant
/*void* qm2197674980(QAccessibleInterface * iface, const QVariant & val)*/{
  QAccessibleInterface * iface = *(QAccessibleInterface **)this_; const QVariant & val = *(const QVariant *)this_;
  this_ =  new QAccessibleValueChangeEvent(iface, val);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:914
// [-2] void setValue(const QVariant &) 
// (12)qm1540112245 (53)_ZN27QAccessibleValueChangeEvent8setValueERK8QVariant
//static
/*void qm1540112245(const QVariant & val)*/ {
  const QVariant & val = *(const QVariant *)this_;
  (void) ((QAccessibleValueChangeEvent*)this_)->setValue(val);
   auto xptr = (void (QAccessibleValueChangeEvent::*)(QVariant const&) ) &QAccessibleValueChangeEvent::setValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:915
// [16] QVariant value() const
// (12)qm3065845370 (41)_ZNK27QAccessibleValueChangeEvent5valueEv
//static
/*void qm3065845370()*/ {
  ;
  (void) ((QAccessibleValueChangeEvent*)this_)->value();
   auto xptr = (QVariant (QAccessibleValueChangeEvent::*)() const ) &QAccessibleValueChangeEvent::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QAccessibleValueChangeEventD2Ev(void *this_)*/ {
  delete (QAccessibleValueChangeEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaccessiblevaluechangeevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
