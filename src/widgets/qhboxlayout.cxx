//  header block begin

// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QHBoxLayout is pure virtual: false false
// QHBoxLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhboxlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:115
// [8] QString tr(const char *, const char *, int) 
// (11)qm947984973 (27)_ZN11QHBoxLayout2trEPKcS1_i
//static
/*void qm947984973(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QHBoxLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QHBoxLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:117
// [-2] void QHBoxLayout() 
// (12)qm2369781699 (20)_ZN11QHBoxLayoutC2Ev
/*void* qm2369781699()*/{
  ;
  this_ =  new QHBoxLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:118
// [-2] void QHBoxLayout(QWidget *) 
// (12)qm2008149469 (28)_ZN11QHBoxLayoutC2EP7QWidget
/*void* qm2008149469(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QHBoxLayout(parent);
}


/*void C_ZN11QHBoxLayoutD2Ev(void *this_)*/ {
  delete (QHBoxLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhboxlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
