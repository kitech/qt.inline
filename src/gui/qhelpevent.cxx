//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHelpEvent is pure virtual: false false
// QHelpEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHelpEvent_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHelpEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHelpEvent_t qt_meta_stringdata_MyQHelpEvent = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQHelpEvent"
  },
  "MyQHelpEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHelpEvent[] = {
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
class Q_DECL_EXPORT MyQHelpEvent : public QHelpEvent {
public:
  virtual ~MyQHelpEvent() {}
// void QHelpEvent(QEvent::Type, const QPoint &, const QPoint &)
MyQHelpEvent(QEvent::Type type_, const QPoint & pos, const QPoint & globalPos) : QHelpEvent(type_, pos, globalPos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhelpevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:725
// [4] int x() const
// (11)qm594142306 (20)_ZNK10QHelpEvent1xEv
//static
/*void qm594142306()*/ {
  ;
  (void) ((QHelpEvent*)this_)->x();
   auto xptr = (int (QHelpEvent::*)() const ) &QHelpEvent::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:726
// [4] int y() const
// (11)qm581668437 (20)_ZNK10QHelpEvent1yEv
//static
/*void qm581668437()*/ {
  ;
  (void) ((QHelpEvent*)this_)->y();
   auto xptr = (int (QHelpEvent::*)() const ) &QHelpEvent::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:727
// [4] int globalX() const
// (12)qm4191083276 (26)_ZNK10QHelpEvent7globalXEv
//static
/*void qm4191083276()*/ {
  ;
  (void) ((QHelpEvent*)this_)->globalX();
   auto xptr = (int (QHelpEvent::*)() const ) &QHelpEvent::globalX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:728
// [4] int globalY() const
// (12)qm4161581371 (26)_ZNK10QHelpEvent7globalYEv
//static
/*void qm4161581371()*/ {
  ;
  (void) ((QHelpEvent*)this_)->globalY();
   auto xptr = (int (QHelpEvent::*)() const ) &QHelpEvent::globalY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:730
// [8] const QPoint & pos() const
// (11)qm836835040 (22)_ZNK10QHelpEvent3posEv
//static
/*void qm836835040()*/ {
  ;
  (void) ((QHelpEvent*)this_)->pos();
   auto xptr = (const QPoint & (QHelpEvent::*)() const ) &QHelpEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:731
// [8] const QPoint & globalPos() const
// (12)qm3623933254 (28)_ZNK10QHelpEvent9globalPosEv
//static
/*void qm3623933254()*/ {
  ;
  (void) ((QHelpEvent*)this_)->globalPos();
   auto xptr = (const QPoint & (QHelpEvent::*)() const ) &QHelpEvent::globalPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QHelpEventD2Ev(void *this_)*/ {
  delete (QHelpEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhelpevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
