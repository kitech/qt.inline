//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDragEnterEvent is pure virtual: false false
// QDragEnterEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdragenterevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:704
// [-2] void QDragEnterEvent(const QPoint &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers) 
// (12)qm4101992372 (121)_ZN15QDragEnterEventC2ERK6QPoint6QFlagsIN2Qt10DropActionEEPK9QMimeDataS3_INS4_11MouseButtonEES3_INS4_16KeyboardModifierEE
/*void* qm4101992372(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)*/{
  const QPoint & pos = *(const QPoint *)this_; QFlags<Qt::DropAction> actions = *(QFlags<Qt::DropAction>*)this_; const QMimeData * data = *(const QMimeData **)this_; QFlags<Qt::MouseButton> buttons = *(QFlags<Qt::MouseButton>*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_;
  this_ =  new QDragEnterEvent(pos, actions, data, buttons, modifiers);
}


/*void C_ZN15QDragEnterEventD2Ev(void *this_)*/ {
  delete (QDragEnterEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdragenterevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
