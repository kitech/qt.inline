//  header block begin

// /usr/include/qt/QtWidgets/qboxlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qboxlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QBoxLayout is pure virtual: false false
// QBoxLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qboxlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm4025812647 (26)_ZN10QBoxLayout2trEPKcS1_i
//static
/*void qm4025812647(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QBoxLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QBoxLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qboxlayout.h:64
// [-2] void QBoxLayout(QBoxLayout::Direction, QWidget *) 
// (12)qm3198258420 (41)_ZN10QBoxLayoutC2ENS_9DirectionEP7QWidget
/*void* qm3198258420(QBoxLayout::Direction arg0, QWidget * parent)*/{
  QBoxLayout::Direction arg0 = *(QBoxLayout::Direction*)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QBoxLayout(arg0, parent);
}


/*void C_ZN10QBoxLayoutD2Ev(void *this_)*/ {
  delete (QBoxLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qboxlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
