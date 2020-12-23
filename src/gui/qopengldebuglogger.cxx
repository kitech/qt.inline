//  header block begin

// /usr/include/qt/QtGui/qopengldebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengldebug.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLDebugLogger is pure virtual: false false
// QOpenGLDebugLogger has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopengldebuglogger(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:158
// [8] QString tr(const char *, const char *, int) 
// (11)qm290011830 (34)_ZN18QOpenGLDebugLogger2trEPKcS1_i
//static
/*void qm290011830(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QOpenGLDebugLogger::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QOpenGLDebugLogger::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:168
// [-2] void QOpenGLDebugLogger(QObject *) 
// (12)qm1889778517 (35)_ZN18QOpenGLDebugLoggerC2EP7QObject
/*void* qm1889778517(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QOpenGLDebugLogger(parent);
}


/*void C_ZN18QOpenGLDebugLoggerD2Ev(void *this_)*/ {
  delete (QOpenGLDebugLogger*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopengldebuglogger
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
