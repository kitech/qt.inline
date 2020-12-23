//  header block begin

// /usr/include/qt/QtMultimedia/qsound.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsound.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QSound is pure virtual: false false
// QSound has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsound(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm1119933657 (21)_ZN6QSound2trEPKcS1_i
//static
/*void qm1119933657(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSound::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSound::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:61
// [-2] void QSound(const QString &, QObject *) 
// (11)qm340442091 (32)_ZN6QSoundC2ERK7QStringP7QObject
/*void* qm340442091(const QString & filename, QObject * parent)*/{
  const QString & filename = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSound(filename, parent);
}


/*void C_ZN6QSoundD2Ev(void *this_)*/ {
  delete (QSound*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsound
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
