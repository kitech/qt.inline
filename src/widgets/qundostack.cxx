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

// QUndoStack is pure virtual: false false
// QUndoStack has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qundostack(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:89
// [8] QString tr(const char *, const char *, int) 
// (12)qm1572178851 (26)_ZN10QUndoStack2trEPKcS1_i
//static
/*void qm1572178851(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QUndoStack::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QUndoStack::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundostack.h:100
// [-2] void QUndoStack(QObject *) 
// (11)qm489857807 (27)_ZN10QUndoStackC2EP7QObject
/*void* qm489857807(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QUndoStack(parent);
}


/*void C_ZN10QUndoStackD2Ev(void *this_)*/ {
  delete (QUndoStack*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qundostack
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
