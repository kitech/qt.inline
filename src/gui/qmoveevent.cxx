//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QMoveEvent is pure virtual: false false
// QMoveEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMoveEvent_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMoveEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMoveEvent_t qt_meta_stringdata_MyQMoveEvent = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQMoveEvent"
  },
  "MyQMoveEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMoveEvent[] = {
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
class Q_DECL_EXPORT MyQMoveEvent : public QMoveEvent {
public:
  virtual ~MyQMoveEvent() {}
// void QMoveEvent(const QPoint &, const QPoint &)
MyQMoveEvent(const QPoint & pos, const QPoint & oldPos) : QMoveEvent(pos, oldPos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmoveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:466
// [8] const QPoint & pos() const
// (12)qm3400673504 (22)_ZNK10QMoveEvent3posEv
//static
/*void qm3400673504()*/ {
  ;
  (void) ((QMoveEvent*)this_)->pos();
   auto xptr = (const QPoint & (QMoveEvent::*)() const ) &QMoveEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:467
// [8] const QPoint & oldPos() const
// (11)qm157844131 (25)_ZNK10QMoveEvent6oldPosEv
//static
/*void qm157844131()*/ {
  ;
  (void) ((QMoveEvent*)this_)->oldPos();
   auto xptr = (const QPoint & (QMoveEvent::*)() const ) &QMoveEvent::oldPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QMoveEventD2Ev(void *this_)*/ {
  delete (QMoveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmoveevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
