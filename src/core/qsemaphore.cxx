//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(thread)
// /usr/include/qt/QtCore/qsemaphore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSemaphore is pure virtual: false false
// QSemaphore has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsemaphore(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:54
// [-2] void QSemaphore(int) 
// (12)qm1532420921 (19)_ZN10QSemaphoreC2Ei
/*void* qm1532420921(int n)*/{
  int n = *(int*)this_;
  this_ =  new QSemaphore(n);
}


/*void C_ZN10QSemaphoreD2Ev(void *this_)*/ {
  delete (QSemaphore*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsemaphore
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(thread)
#endif // #ifndef QT_MINIMAL
//  footer block end
