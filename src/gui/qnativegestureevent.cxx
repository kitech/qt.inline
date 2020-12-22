//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QNativeGestureEvent is pure virtual: false false
// QNativeGestureEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNativeGestureEvent_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNativeGestureEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNativeGestureEvent_t qt_meta_stringdata_MyQNativeGestureEvent = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQNativeGestureEvent"
  },
  "MyQNativeGestureEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNativeGestureEvent[] = {
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
class Q_DECL_EXPORT MyQNativeGestureEvent : public QNativeGestureEvent {
public:
  virtual ~MyQNativeGestureEvent() {}
// void QNativeGestureEvent(Qt::NativeGestureType, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64)
MyQNativeGestureEvent(Qt::NativeGestureType type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, qreal value, ulong sequenceId, quint64 intArgument) : QNativeGestureEvent(type_, localPos, windowPos, screenPos, value, sequenceId, intArgument) {}
// void QNativeGestureEvent(Qt::NativeGestureType, const QTouchDevice *, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64)
MyQNativeGestureEvent(Qt::NativeGestureType type_, const QTouchDevice * dev, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, qreal value, ulong sequenceId, quint64 intArgument) : QNativeGestureEvent(type_, dev, localPos, windowPos, screenPos, value, sequenceId, intArgument) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnativegestureevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:350
// [-2] void QNativeGestureEvent(Qt::NativeGestureType, const QTouchDevice *, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64) 
// (12)qm1328915930 (86)_ZN19QNativeGestureEventC2EN2Qt17NativeGestureTypeEPK12QTouchDeviceRK7QPointFS7_S7_dmy
/*void* qm1328915930(Qt::NativeGestureType type_, const QTouchDevice * dev, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, double value, unsigned long sequenceId, unsigned long long intArgument)*/{
  Qt::NativeGestureType type_ = *(Qt::NativeGestureType*)this_; const QTouchDevice * dev = *(const QTouchDevice **)this_; const QPointF & localPos = *(const QPointF *)this_; const QPointF & windowPos = *(const QPointF *)this_; const QPointF & screenPos = *(const QPointF *)this_; double value = *(double*)this_; unsigned long sequenceId = *(unsigned long*)this_; unsigned long long intArgument = *(unsigned long long*)this_;
  this_ =  new QNativeGestureEvent(type_, dev, localPos, windowPos, screenPos, value, sequenceId, intArgument);
  this_ =  new MyQNativeGestureEvent(type_, dev, localPos, windowPos, screenPos, value, sequenceId, intArgument);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:353
// [4] Qt::NativeGestureType gestureType() const
// (12)qm1552578403 (40)_ZNK19QNativeGestureEvent11gestureTypeEv
//static
/*void qm1552578403()*/ {
  ;
  (void) ((QNativeGestureEvent*)this_)->gestureType();
   auto xptr = (Qt::NativeGestureType (QNativeGestureEvent::*)() const ) &QNativeGestureEvent::gestureType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:354
// [8] qreal value() const
// (12)qm3617035240 (33)_ZNK19QNativeGestureEvent5valueEv
//static
/*void qm3617035240()*/ {
  ;
  (void) ((QNativeGestureEvent*)this_)->value();
   auto xptr = (double (QNativeGestureEvent::*)() const ) &QNativeGestureEvent::value;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:357
// [8] const QPoint pos() const
// (12)qm1846718789 (31)_ZNK19QNativeGestureEvent3posEv
//static
/*void qm1846718789()*/ {
  ;
  (void) ((QNativeGestureEvent*)this_)->pos();
   auto xptr = (const QPoint (QNativeGestureEvent::*)() const ) &QNativeGestureEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:358
// [8] const QPoint globalPos() const
// (12)qm2699413081 (37)_ZNK19QNativeGestureEvent9globalPosEv
//static
/*void qm2699413081()*/ {
  ;
  (void) ((QNativeGestureEvent*)this_)->globalPos();
   auto xptr = (const QPoint (QNativeGestureEvent::*)() const ) &QNativeGestureEvent::globalPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:360
// [16] const QPointF & localPos() const
// (12)qm3575464521 (36)_ZNK19QNativeGestureEvent8localPosEv
//static
/*void qm3575464521()*/ {
  ;
  (void) ((QNativeGestureEvent*)this_)->localPos();
   auto xptr = (const QPointF & (QNativeGestureEvent::*)() const ) &QNativeGestureEvent::localPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:361
// [16] const QPointF & windowPos() const
// (7)qm23831 (37)_ZNK19QNativeGestureEvent9windowPosEv
//static
/*void qm23831()*/ {
  ;
  (void) ((QNativeGestureEvent*)this_)->windowPos();
   auto xptr = (const QPointF & (QNativeGestureEvent::*)() const ) &QNativeGestureEvent::windowPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:362
// [16] const QPointF & screenPos() const
// (12)qm2701919162 (37)_ZNK19QNativeGestureEvent9screenPosEv
//static
/*void qm2701919162()*/ {
  ;
  (void) ((QNativeGestureEvent*)this_)->screenPos();
   auto xptr = (const QPointF & (QNativeGestureEvent::*)() const ) &QNativeGestureEvent::screenPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QNativeGestureEventD2Ev(void *this_)*/ {
  delete (QNativeGestureEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnativegestureevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
