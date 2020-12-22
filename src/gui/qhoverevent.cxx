//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHoverEvent is pure virtual: false false
// QHoverEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHoverEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHoverEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHoverEvent_t qt_meta_stringdata_MyQHoverEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQHoverEvent"
  },
  "MyQHoverEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHoverEvent[] = {
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
class Q_DECL_EXPORT MyQHoverEvent : public QHoverEvent {
public:
  virtual ~MyQHoverEvent() {}
// void QHoverEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::KeyboardModifiers)
MyQHoverEvent(QEvent::Type type_, const QPointF & pos, const QPointF & oldPos, QFlags<Qt::KeyboardModifier> modifiers) : QHoverEvent(type_, pos, oldPos, modifiers) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhoverevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:157
// [-2] void QHoverEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::KeyboardModifiers) 
// (11)qm745147355 (78)_ZN11QHoverEventC2EN6QEvent4TypeERK7QPointFS4_6QFlagsIN2Qt16KeyboardModifierEE
/*void* qm745147355(QEvent::Type type_, const QPointF & pos, const QPointF & oldPos, QFlags<Qt::KeyboardModifier> modifiers)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; const QPointF & pos = *(const QPointF *)this_; const QPointF & oldPos = *(const QPointF *)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  this_ =  new QHoverEvent(type_, pos, oldPos, modifiers);
  this_ =  new MyQHoverEvent(type_, pos, oldPos, modifiers);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:161
// [8] QPoint pos() const
// (11)qm145972275 (23)_ZNK11QHoverEvent3posEv
//static
/*void qm145972275()*/ {
  ;
  (void) ((QHoverEvent*)this_)->pos();
   auto xptr = (QPoint (QHoverEvent::*)() const ) &QHoverEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:162
// [8] QPoint oldPos() const
// (12)qm3136521580 (26)_ZNK11QHoverEvent6oldPosEv
//static
/*void qm3136521580()*/ {
  ;
  (void) ((QHoverEvent*)this_)->oldPos();
   auto xptr = (QPoint (QHoverEvent::*)() const ) &QHoverEvent::oldPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:165
// [16] const QPointF & posF() const
// (12)qm3879078953 (24)_ZNK11QHoverEvent4posFEv
//static
/*void qm3879078953()*/ {
  ;
  (void) ((QHoverEvent*)this_)->posF();
   auto xptr = (const QPointF & (QHoverEvent::*)() const ) &QHoverEvent::posF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:166
// [16] const QPointF & oldPosF() const
// (11)qm909464869 (27)_ZNK11QHoverEvent7oldPosFEv
//static
/*void qm909464869()*/ {
  ;
  (void) ((QHoverEvent*)this_)->oldPosF();
   auto xptr = (const QPointF & (QHoverEvent::*)() const ) &QHoverEvent::oldPosF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QHoverEventD2Ev(void *this_)*/ {
  delete (QHoverEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhoverevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
