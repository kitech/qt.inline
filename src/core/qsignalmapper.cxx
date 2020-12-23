//  header block begin

// /usr/include/qt/QtCore/qsignalmapper.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsignalmapper.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalMapper is pure virtual: false false
// QSignalMapper has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsignalmapper(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:51
// [8] QString tr(const char *, const char *, int) 
// (12)qm2467912578 (29)_ZN13QSignalMapper2trEPKcS1_i
//static
/*void qm2467912578(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSignalMapper::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSignalMapper::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignalmapper.h:54
// [-2] void QSignalMapper(QObject *) 
// (12)qm1368727425 (30)_ZN13QSignalMapperC2EP7QObject
/*void* qm1368727425(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QSignalMapper(parent);
}


/*void C_ZN13QSignalMapperD2Ev(void *this_)*/ {
  delete (QSignalMapper*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsignalmapper
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
