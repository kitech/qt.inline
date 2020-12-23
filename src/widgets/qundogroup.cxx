//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(undogroup)
// /usr/include/qt/QtWidgets/qundogroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundogroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoGroup is pure virtual: false false
// QUndoGroup has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qundogroup(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm4020914237 (26)_ZN10QUndoGroup2trEPKcS1_i
//static
/*void qm4020914237(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QUndoGroup::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QUndoGroup::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:61
// [-2] void QUndoGroup(QObject *) 
// (11)qm171377295 (27)_ZN10QUndoGroupC2EP7QObject
/*void* qm171377295(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QUndoGroup(parent);
}


/*void C_ZN10QUndoGroupD2Ev(void *this_)*/ {
  delete (QUndoGroup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qundogroup
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(undogroup)
#endif // #ifndef QT_MINIMAL
//  footer block end
