//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QContextMenuEvent is pure virtual: false false
// QContextMenuEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQContextMenuEvent_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQContextMenuEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQContextMenuEvent_t qt_meta_stringdata_MyQContextMenuEvent = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQContextMenuEvent"
  },
  "MyQContextMenuEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQContextMenuEvent[] = {
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
class Q_DECL_EXPORT MyQContextMenuEvent : public QContextMenuEvent {
public:
  virtual ~MyQContextMenuEvent() {}
// void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &, Qt::KeyboardModifiers)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, QFlags<Qt::KeyboardModifier> modifiers) : QContextMenuEvent(reason, pos, globalPos, modifiers) {}
// void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos) : QContextMenuEvent(reason, pos, globalPos) {}
// void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &)
MyQContextMenuEvent(QContextMenuEvent::Reason reason, const QPoint & pos) : QContextMenuEvent(reason, pos) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcontextmenuevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:553
// [-2] void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &, Qt::KeyboardModifiers) 
// (11)qm951288180 (80)_ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_6QFlagsIN2Qt16KeyboardModifierEE
/*void* qm951288180(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos, QFlags<Qt::KeyboardModifier> modifiers)*/{
  QContextMenuEvent::Reason reason = *(QContextMenuEvent::Reason*)this_; const QPoint & pos = *(const QPoint *)this_; const QPoint & globalPos = *(const QPoint *)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  this_ =  new QContextMenuEvent(reason, pos, globalPos, modifiers);
  this_ =  new MyQContextMenuEvent(reason, pos, globalPos, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:555
// [-2] void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &, const QPoint &) 
// (12)qm4287249204 (48)_ZN17QContextMenuEventC2ENS_6ReasonERK6QPointS3_
/*void* qm4287249204(QContextMenuEvent::Reason reason, const QPoint & pos, const QPoint & globalPos)*/{
  QContextMenuEvent::Reason reason = *(QContextMenuEvent::Reason*)this_; const QPoint & pos = *(const QPoint *)this_; const QPoint & globalPos = *(const QPoint *)this_;
  this_ =  new QContextMenuEvent(reason, pos, globalPos);
  this_ =  new MyQContextMenuEvent(reason, pos, globalPos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:556
// [-2] void QContextMenuEvent(QContextMenuEvent::Reason, const QPoint &) 
// (12)qm1180058692 (45)_ZN17QContextMenuEventC2ENS_6ReasonERK6QPoint
/*void* qm1180058692(QContextMenuEvent::Reason reason, const QPoint & pos)*/{
  QContextMenuEvent::Reason reason = *(QContextMenuEvent::Reason*)this_; const QPoint & pos = *(const QPoint *)this_;
  this_ =  new QContextMenuEvent(reason, pos);
  this_ =  new MyQContextMenuEvent(reason, pos);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:559
// [4] int x() const
// (11)qm824714272 (27)_ZNK17QContextMenuEvent1xEv
//static
/*void qm824714272()*/ {
  ;
  (void) ((QContextMenuEvent*)this_)->x();
   auto xptr = (int (QContextMenuEvent::*)() const ) &QContextMenuEvent::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:560
// [4] int y() const
// (11)qm820661783 (27)_ZNK17QContextMenuEvent1yEv
//static
/*void qm820661783()*/ {
  ;
  (void) ((QContextMenuEvent*)this_)->y();
   auto xptr = (int (QContextMenuEvent::*)() const ) &QContextMenuEvent::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:561
// [4] int globalX() const
// (12)qm1849807094 (33)_ZNK17QContextMenuEvent7globalXEv
//static
/*void qm1849807094()*/ {
  ;
  (void) ((QContextMenuEvent*)this_)->globalX();
   auto xptr = (int (QContextMenuEvent::*)() const ) &QContextMenuEvent::globalX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:562
// [4] int globalY() const
// (12)qm1870904001 (33)_ZNK17QContextMenuEvent7globalYEv
//static
/*void qm1870904001()*/ {
  ;
  (void) ((QContextMenuEvent*)this_)->globalY();
   auto xptr = (int (QContextMenuEvent::*)() const ) &QContextMenuEvent::globalY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:564
// [8] const QPoint & pos() const
// (12)qm1758129046 (29)_ZNK17QContextMenuEvent3posEv
//static
/*void qm1758129046()*/ {
  ;
  (void) ((QContextMenuEvent*)this_)->pos();
   auto xptr = (const QPoint & (QContextMenuEvent::*)() const ) &QContextMenuEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:565
// [8] const QPoint & globalPos() const
// (12)qm2709623414 (35)_ZNK17QContextMenuEvent9globalPosEv
//static
/*void qm2709623414()*/ {
  ;
  (void) ((QContextMenuEvent*)this_)->globalPos();
   auto xptr = (const QPoint & (QContextMenuEvent::*)() const ) &QContextMenuEvent::globalPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:567
// [4] QContextMenuEvent::Reason reason() const
// (12)qm1466531341 (32)_ZNK17QContextMenuEvent6reasonEv
//static
/*void qm1466531341()*/ {
  ;
  (void) ((QContextMenuEvent*)this_)->reason();
   auto xptr = (QContextMenuEvent::Reason (QContextMenuEvent::*)() const ) &QContextMenuEvent::reason;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QContextMenuEventD2Ev(void *this_)*/ {
  delete (QContextMenuEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcontextmenuevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
