//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDropEvent is pure virtual: false false
// QDropEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdropevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:650
// [-2] void QDropEvent(const QPointF &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, QEvent::Type) 
// (12)qm2720690567 (131)_ZN10QDropEventC2ERK7QPointF6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEEN6QEvent4TypeE
/*void* qm2720690567(const QPointF & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type_)*/{
  const QPointF & pos = *(const QPointF *)this_; QFlags<Qt::DropAction> actions = *(QFlags<Qt::DropAction>*)this_; const QMimeData * data = *(const QMimeData **)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_; QEvent::Type type_ = *(QEvent::Type*)this_;
  this_ =  new QDropEvent(pos, actions, data, buttons, modifiers, type_);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:654
// [8] QPoint pos() const
// (12)qm3399566694 (22)_ZNK10QDropEvent3posEv
//static
/*void qm3399566694()*/ {
  ;
  (void) ((QDropEvent*)this_)->pos();
   auto xptr = (QPoint (QDropEvent::*)() const ) &QDropEvent::pos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:655
// [16] const QPointF & posF() const
// (12)qm4243962699 (23)_ZNK10QDropEvent4posFEv
//static
/*void qm4243962699()*/ {
  ;
  (void) ((QDropEvent*)this_)->posF();
   auto xptr = (const QPointF & (QDropEvent::*)() const ) &QDropEvent::posF;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:656
// [4] Qt::MouseButtons mouseButtons() const
// (12)qm3813067481 (32)_ZNK10QDropEvent12mouseButtonsEv
//static
/*void qm3813067481()*/ {
  ;
  (void) ((QDropEvent*)this_)->mouseButtons();
   auto xptr = (QFlags<Qt::MouseButton> (QDropEvent::*)() const ) &QDropEvent::mouseButtons;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:657
// [4] Qt::KeyboardModifiers keyboardModifiers() const
// (12)qm1359663015 (37)_ZNK10QDropEvent17keyboardModifiersEv
//static
/*void qm1359663015()*/ {
  ;
  (void) ((QDropEvent*)this_)->keyboardModifiers();
   auto xptr = (QFlags<Qt::KeyboardModifier> (QDropEvent::*)() const ) &QDropEvent::keyboardModifiers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:659
// [4] Qt::DropActions possibleActions() const
// (12)qm2755467639 (35)_ZNK10QDropEvent15possibleActionsEv
//static
/*void qm2755467639()*/ {
  ;
  (void) ((QDropEvent*)this_)->possibleActions();
   auto xptr = (QFlags<Qt::DropAction> (QDropEvent::*)() const ) &QDropEvent::possibleActions;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:660
// [4] Qt::DropAction proposedAction() const
// (12)qm1880620216 (34)_ZNK10QDropEvent14proposedActionEv
//static
/*void qm1880620216()*/ {
  ;
  (void) ((QDropEvent*)this_)->proposedAction();
   auto xptr = (Qt::DropAction (QDropEvent::*)() const ) &QDropEvent::proposedAction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:661
// [-2] void acceptProposedAction() 
// (12)qm1097504622 (39)_ZN10QDropEvent20acceptProposedActionEv
//static
/*void qm1097504622()*/ {
  ;
  (void) ((QDropEvent*)this_)->acceptProposedAction();
   auto xptr = (void (QDropEvent::*)() ) &QDropEvent::acceptProposedAction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:663
// [4] Qt::DropAction dropAction() const
// (12)qm2641787447 (30)_ZNK10QDropEvent10dropActionEv
//static
/*void qm2641787447()*/ {
  ;
  (void) ((QDropEvent*)this_)->dropAction();
   auto xptr = (Qt::DropAction (QDropEvent::*)() const ) &QDropEvent::dropAction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:667
// [8] const QMimeData * mimeData() const
// (12)qm3306306225 (27)_ZNK10QDropEvent8mimeDataEv
//static
/*void qm3306306225()*/ {
  ;
  (void) ((QDropEvent*)this_)->mimeData();
   auto xptr = (const QMimeData * (QDropEvent::*)() const ) &QDropEvent::mimeData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QDropEventD2Ev(void *this_)*/ {
  delete (QDropEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdropevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
