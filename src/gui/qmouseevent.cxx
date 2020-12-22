//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QMouseEvent is pure virtual: false false
// QMouseEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMouseEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMouseEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMouseEvent_t qt_meta_stringdata_MyQMouseEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQMouseEvent"
  },
  "MyQMouseEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMouseEvent[] = {
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
class Q_DECL_EXPORT MyQMouseEvent : public QMouseEvent {
public:
  virtual ~MyQMouseEvent() {}
// void QMouseEvent(QEvent::Type, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type_, localPos, button, buttons, modifiers) {}
// void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type_, localPos, screenPos, button, buttons, modifiers) {}
// void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers) {}
// void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::MouseEventSource)
MyQMouseEvent(QEvent::Type type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::MouseEventSource source) : QMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers, source) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmouseevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:107
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers) 
// (12)qm1232816269 (101)_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFN2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE
/*void* qm1232816269(QEvent::Type type_, const QPointF & localPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; const QPointF & localPos = *(const QPointF *)this_; Qt::MouseButton button = *(Qt::MouseButton*)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  this_ =  new QMouseEvent(type_, localPos, button, buttons, modifiers);
  this_ =  new MyQMouseEvent(type_, localPos, button, buttons, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:109
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers) 
// (12)qm3849153686 (104)_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE
/*void* qm3849153686(QEvent::Type type_, const QPointF & localPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; const QPointF & localPos = *(const QPointF *)this_; const QPointF & screenPos = *(const QPointF *)this_; Qt::MouseButton button = *(Qt::MouseButton*)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  this_ =  new QMouseEvent(type_, localPos, screenPos, button, buttons, modifiers);
  this_ =  new MyQMouseEvent(type_, localPos, screenPos, button, buttons, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:112
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers) 
// (12)qm4028789852 (107)_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEE
/*void* qm4028789852(QEvent::Type type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; const QPointF & localPos = *(const QPointF *)this_; const QPointF & windowPos = *(const QPointF *)this_; const QPointF & screenPos = *(const QPointF *)this_; Qt::MouseButton button = *(Qt::MouseButton*)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  this_ =  new QMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers);
  this_ =  new MyQMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:115
// [-2] void QMouseEvent(QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::MouseEventSource) 
// (12)qm4049620773 (130)_ZN11QMouseEventC2EN6QEvent4TypeERK7QPointFS4_S4_N2Qt11MouseButtonE6QFlagsIS6_ES7_INS5_16KeyboardModifierEENS5_16MouseEventSourceE
/*void* qm4049620773(QEvent::Type type_, const QPointF & localPos, const QPointF & windowPos, const QPointF & screenPos, Qt::MouseButton button, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::MouseEventSource source)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; const QPointF & localPos = *(const QPointF *)this_; const QPointF & windowPos = *(const QPointF *)this_; const QPointF & screenPos = *(const QPointF *)this_; Qt::MouseButton button = *(Qt::MouseButton*)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_; Qt::MouseEventSource source = *(Qt::MouseEventSource*)this_;
  this_ =  new QMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers, source);
  this_ =  new MyQMouseEvent(type_, localPos, windowPos, screenPos, button, buttons, modifiers, source);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:121
// [8] QPoint pos() const
// (12)qm1659492746 (23)_ZNK11QMouseEvent3posEv
//static
/*void qm1659492746()*/ {
  ;
  (void) ((QMouseEvent*)this_)->pos();
   auto xptr = (QPoint (QMouseEvent::*)() const ) &QMouseEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:122
// [8] QPoint globalPos() const
// (12)qm2976136822 (29)_ZNK11QMouseEvent9globalPosEv
//static
/*void qm2976136822()*/ {
  ;
  (void) ((QMouseEvent*)this_)->globalPos();
   auto xptr = (QPoint (QMouseEvent::*)() const ) &QMouseEvent::globalPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:123
// [4] int x() const
// (12)qm1953764823 (21)_ZNK11QMouseEvent1xEv
//static
/*void qm1953764823()*/ {
  ;
  (void) ((QMouseEvent*)this_)->x();
   auto xptr = (int (QMouseEvent::*)() const ) &QMouseEvent::x;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:124
// [4] int y() const
// (12)qm1974894560 (21)_ZNK11QMouseEvent1yEv
//static
/*void qm1974894560()*/ {
  ;
  (void) ((QMouseEvent*)this_)->y();
   auto xptr = (int (QMouseEvent::*)() const ) &QMouseEvent::y;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:125
// [4] int globalX() const
// (11)qm220043088 (27)_ZNK11QMouseEvent7globalXEv
//static
/*void qm220043088()*/ {
  ;
  (void) ((QMouseEvent*)this_)->globalX();
   auto xptr = (int (QMouseEvent::*)() const ) &QMouseEvent::globalX;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:126
// [4] int globalY() const
// (11)qm216005991 (27)_ZNK11QMouseEvent7globalYEv
//static
/*void qm216005991()*/ {
  ;
  (void) ((QMouseEvent*)this_)->globalY();
   auto xptr = (int (QMouseEvent::*)() const ) &QMouseEvent::globalY;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:128
// [16] const QPointF & localPos() const
// (12)qm1441673618 (28)_ZNK11QMouseEvent8localPosEv
//static
/*void qm1441673618()*/ {
  ;
  (void) ((QMouseEvent*)this_)->localPos();
   auto xptr = (const QPointF & (QMouseEvent::*)() const ) &QMouseEvent::localPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:129
// [16] const QPointF & windowPos() const
// (11)qm293709112 (29)_ZNK11QMouseEvent9windowPosEv
//static
/*void qm293709112()*/ {
  ;
  (void) ((QMouseEvent*)this_)->windowPos();
   auto xptr = (const QPointF & (QMouseEvent::*)() const ) &QMouseEvent::windowPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:130
// [16] const QPointF & screenPos() const
// (12)qm2962094997 (29)_ZNK11QMouseEvent9screenPosEv
//static
/*void qm2962094997()*/ {
  ;
  (void) ((QMouseEvent*)this_)->screenPos();
   auto xptr = (const QPointF & (QMouseEvent::*)() const ) &QMouseEvent::screenPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:132
// [4] Qt::MouseButton button() const
// (12)qm4145865677 (26)_ZNK11QMouseEvent6buttonEv
//static
/*void qm4145865677()*/ {
  ;
  (void) ((QMouseEvent*)this_)->button();
   auto xptr = (Qt::MouseButton (QMouseEvent::*)() const ) &QMouseEvent::button;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:133
// [4] Qt::MouseButtons buttons() const
// (12)qm3037269574 (27)_ZNK11QMouseEvent7buttonsEv
//static
/*void qm3037269574()*/ {
  ;
  (void) ((QMouseEvent*)this_)->buttons();
   auto xptr = (QFlags<Qt::MouseButton> (QMouseEvent::*)() const ) &QMouseEvent::buttons;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:135
// [-2] void setLocalPos(const QPointF &) 
// (12)qm3226532673 (40)_ZN11QMouseEvent11setLocalPosERK7QPointF
//static
/*void qm3226532673(const QPointF & localPosition)*/ {
  const QPointF & localPosition = *(const QPointF *)this_;
  (void) ((QMouseEvent*)this_)->setLocalPos(localPosition);
   auto xptr = (void (QMouseEvent::*)(QPointF const&) ) &QMouseEvent::setLocalPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QMouseEventD2Ev(void *this_)*/ {
  delete (QMouseEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmouseevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
