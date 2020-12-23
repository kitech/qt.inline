//  header block begin

// /usr/include/qt/QtQuick/qsgengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgengine.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGEngine is pure virtual: false false
// QSGEngine has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgengine(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm3550080621 (24)_ZN9QSGEngine2trEPKcS1_i
//static
/*void qm3550080621(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSGEngine::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSGEngine::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:72
// [-2] void QSGEngine(QObject *) 
// (12)qm1633706205 (25)_ZN9QSGEngineC2EP7QObject
/*void* qm1633706205(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QSGEngine(parent);
}


/*void C_ZN9QSGEngineD2Ev(void *this_)*/ {
  delete (QSGEngine*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgengine
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
