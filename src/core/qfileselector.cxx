//  header block begin

// /usr/include/qt/QtCore/qfileselector.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileselector.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileSelector is pure virtual: false false
// QFileSelector has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfileselector(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] QString tr(const char *, const char *, int) 
// (12)qm3614669907 (29)_ZN13QFileSelector2trEPKcS1_i
//static
/*void qm3614669907(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QFileSelector::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QFileSelector::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:53
// [-2] void QFileSelector(QObject *) 
// (12)qm2684721124 (30)_ZN13QFileSelectorC2EP7QObject
/*void* qm2684721124(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QFileSelector(parent);
}


/*void C_ZN13QFileSelectorD2Ev(void *this_)*/ {
  delete (QFileSelector*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfileselector
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
