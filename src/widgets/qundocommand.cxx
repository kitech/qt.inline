//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(undocommand)
// /usr/include/qt/QtWidgets/qundostack.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundostack.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoCommand is pure virtual: false false
// QUndoCommand has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qundocommand(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:60
// [-2] void QUndoCommand(QUndoCommand *) 
// (11)qm805274765 (23)_ZN12QUndoCommandC2EPS_
/*void* qm805274765(QUndoCommand * parent)*/{
  QUndoCommand * parent = *(QUndoCommand **)this_;
  this_ =  new QUndoCommand(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:61
// [-2] void QUndoCommand(const QString &, QUndoCommand *) 
// (12)qm3007010760 (33)_ZN12QUndoCommandC2ERK7QStringPS_
/*void* qm3007010760(const QString & text, QUndoCommand * parent)*/{
  const QString & text = *(const QString *)this_; QUndoCommand * parent = *(QUndoCommand **)this_;
  this_ =  new QUndoCommand(text, parent);
}


/*void C_ZN12QUndoCommandD2Ev(void *this_)*/ {
  delete (QUndoCommand*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qundocommand
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(undocommand)
#endif // #ifndef QT_MINIMAL
//  footer block end
