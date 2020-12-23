//  header block begin

// /usr/include/qt/QtCore/qtranslator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtranslator.h>
#include <QtCore>
#include "callback_inherit.h"

// QTranslator is pure virtual: false false
// QTranslator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtranslator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm1070129943 (27)_ZN11QTranslator2trEPKcS1_i
//static
/*void qm1070129943(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTranslator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTranslator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtranslator.h:58
// [-2] void QTranslator(QObject *) 
// (12)qm3512510962 (28)_ZN11QTranslatorC2EP7QObject
/*void* qm3512510962(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QTranslator(parent);
}


/*void C_ZN11QTranslatorD2Ev(void *this_)*/ {
  delete (QTranslator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtranslator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
