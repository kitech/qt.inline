//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QActionEvent is pure virtual: false false
// QActionEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQActionEvent_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQActionEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQActionEvent_t qt_meta_stringdata_MyQActionEvent = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQActionEvent"
  },
  "MyQActionEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQActionEvent[] = {
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
class Q_DECL_EXPORT MyQActionEvent : public QActionEvent {
public:
  virtual ~MyQActionEvent() {}
// void QActionEvent(int, QAction *, QAction *)
MyQActionEvent(int type_, QAction * action, QAction * before) : QActionEvent(type_, action, before) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qactionevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:772
// [8] QAction * action() const
// (11)qm388717719 (27)_ZNK12QActionEvent6actionEv
//static
/*void qm388717719()*/ {
  ;
  (void) ((QActionEvent*)this_)->action();
   auto xptr = (QAction * (QActionEvent::*)() const ) &QActionEvent::action;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:773
// [8] QAction * before() const
// (12)qm2500614365 (27)_ZNK12QActionEvent6beforeEv
//static
/*void qm2500614365()*/ {
  ;
  (void) ((QActionEvent*)this_)->before();
   auto xptr = (QAction * (QActionEvent::*)() const ) &QActionEvent::before;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QActionEventD2Ev(void *this_)*/ {
  delete (QActionEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qactionevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
