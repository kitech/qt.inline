//  header block begin

// /usr/include/qt/QtCore/qeventloop.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeventloop.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventLoop is pure virtual: false false
// QEventLoop has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qeventloop(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:52
// [8] QString tr(const char *, const char *, int) 
// (11)qm170340476 (26)_ZN10QEventLoop2trEPKcS1_i
//static
/*void qm170340476(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QEventLoop::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QEventLoop::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:56
// [-2] void QEventLoop(QObject *) 
// (11)qm185204465 (27)_ZN10QEventLoopC2EP7QObject
/*void* qm185204465(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QEventLoop(parent);
}


/*void C_ZN10QEventLoopD2Ev(void *this_)*/ {
  delete (QEventLoop*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qeventloop
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
