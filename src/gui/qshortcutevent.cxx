//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QShortcutEvent is pure virtual: false false
// QShortcutEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qshortcutevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:809
// [-2] void QShortcutEvent(const QKeySequence &, int, bool) 
// (12)qm4164138623 (40)_ZN14QShortcutEventC2ERK12QKeySequenceib
/*void* qm4164138623(const QKeySequence & key, int id, bool ambiguous)*/{
  const QKeySequence & key = *(const QKeySequence *)this_; int id = *(int*)this_; bool ambiguous = *(bool*)this_;
  this_ =  new QShortcutEvent(key, id, ambiguous);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:812
// [8] const QKeySequence & key() const
// (12)qm3892705985 (26)_ZNK14QShortcutEvent3keyEv
//static
/*void qm3892705985()*/ {
  ;
  (void) ((QShortcutEvent*)this_)->key();
   auto xptr = (const QKeySequence & (QShortcutEvent::*)() const ) &QShortcutEvent::key;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:813
// [4] int shortcutId() const
// (12)qm2247701994 (34)_ZNK14QShortcutEvent10shortcutIdEv
//static
/*void qm2247701994()*/ {
  ;
  (void) ((QShortcutEvent*)this_)->shortcutId();
   auto xptr = (int (QShortcutEvent::*)() const ) &QShortcutEvent::shortcutId;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:814
// [1] bool isAmbiguous() const
// (12)qm1073917990 (35)_ZNK14QShortcutEvent11isAmbiguousEv
//static
/*void qm1073917990()*/ {
  ;
  (void) ((QShortcutEvent*)this_)->isAmbiguous();
   auto xptr = (bool (QShortcutEvent::*)() const ) &QShortcutEvent::isAmbiguous;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QShortcutEventD2Ev(void *this_)*/ {
  delete (QShortcutEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qshortcutevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
