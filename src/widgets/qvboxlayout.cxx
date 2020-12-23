//  header block begin

// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QVBoxLayout is pure virtual: false false
// QVBoxLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvboxlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:128
// [8] QString tr(const char *, const char *, int) 
// (12)qm2695496721 (27)_ZN11QVBoxLayout2trEPKcS1_i
//static
/*void qm2695496721(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVBoxLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVBoxLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:130
// [-2] void QVBoxLayout() 
// (11)qm538351151 (20)_ZN11QVBoxLayoutC2Ev
/*void* qm538351151()*/{
  ;
  this_ =  new QVBoxLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:131
// [-2] void QVBoxLayout(QWidget *) 
// (11)qm368368412 (28)_ZN11QVBoxLayoutC2EP7QWidget
/*void* qm368368412(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QVBoxLayout(parent);
}


/*void C_ZN11QVBoxLayoutD2Ev(void *this_)*/ {
  delete (QVBoxLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvboxlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
