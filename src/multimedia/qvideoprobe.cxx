//  header block begin

// /usr/include/qt/QtMultimedia/qvideoprobe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideoprobe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoProbe is pure virtual: false false
// QVideoProbe has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideoprobe(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm1571806558 (27)_ZN11QVideoProbe2trEPKcS1_i
//static
/*void qm1571806558(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVideoProbe::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVideoProbe::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:56
// [-2] void QVideoProbe(QObject *) 
// (12)qm3728619512 (28)_ZN11QVideoProbeC2EP7QObject
/*void* qm3728619512(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QVideoProbe(parent);
}


/*void C_ZN11QVideoProbeD2Ev(void *this_)*/ {
  delete (QVideoProbe*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideoprobe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
