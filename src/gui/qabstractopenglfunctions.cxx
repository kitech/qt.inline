//  header block begin

// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractOpenGLFunctions is pure virtual: true false
// QAbstractOpenGLFunctions has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractopenglfunctions(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:224
// [8] QAbstractOpenGLFunctionsPrivate * d_func() 
// (11)qm399404310 (38)_ZN24QAbstractOpenGLFunctions6d_funcEv
//static
/*void qm399404310()*/ {
  ;
  (void) ((QAbstractOpenGLFunctions*)this_)->d_func();
   auto xptr = (QAbstractOpenGLFunctionsPrivate * (QAbstractOpenGLFunctions::*)() ) &QAbstractOpenGLFunctions::d_func;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:224
// [8] const QAbstractOpenGLFunctionsPrivate * d_func() const
// (12)qm2932602103 (39)_ZNK24QAbstractOpenGLFunctions6d_funcEv
//static
/*void qm2932602103()*/ {
  ;
  (void) ((QAbstractOpenGLFunctions*)this_)->d_func();
   auto xptr = (const QAbstractOpenGLFunctionsPrivate * (QAbstractOpenGLFunctions::*)() const ) &QAbstractOpenGLFunctions::d_func;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QAbstractOpenGLFunctionsD2Ev(void *this_)*/ {
  delete (QAbstractOpenGLFunctions*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractopenglfunctions
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
