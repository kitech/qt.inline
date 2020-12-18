//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFocusEvent is pure virtual: false false
// QFocusEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFocusEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFocusEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFocusEvent_t qt_meta_stringdata_MyQFocusEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFocusEvent"
  },
  "MyQFocusEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFocusEvent[] = {
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
class Q_DECL_EXPORT MyQFocusEvent : public QFocusEvent {
public:
  virtual ~MyQFocusEvent() {}
// void QFocusEvent(QEvent::Type, Qt::FocusReason)
MyQFocusEvent(QEvent::Type type_, Qt::FocusReason reason) : QFocusEvent(type_, reason) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfocusevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:434
// [1] bool gotFocus() const
// (12)qm3769686842 (28)_ZNK11QFocusEvent8gotFocusEv
//static
/*void qm3769686842()*/ {
  ;
  (void) ((QFocusEvent*)this_)->gotFocus();
   auto xptr = (bool (QFocusEvent::*)() const ) &QFocusEvent::gotFocus;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:435
// [1] bool lostFocus() const
// (12)qm2233785815 (29)_ZNK11QFocusEvent9lostFocusEv
//static
/*void qm2233785815()*/ {
  ;
  (void) ((QFocusEvent*)this_)->lostFocus();
   auto xptr = (bool (QFocusEvent::*)() const ) &QFocusEvent::lostFocus;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QFocusEventD2Ev(void *this_)*/ {
  delete (QFocusEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfocusevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
