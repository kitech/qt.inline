//  header block begin

// /usr/include/qt/QtWidgets/qstackedlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstackedlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStackedLayout is pure virtual: false false
// QStackedLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstackedlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm468850714 (30)_ZN14QStackedLayout2trEPKcS1_i
//static
/*void qm468850714(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStackedLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStackedLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:66
// [-2] void QStackedLayout() 
// (12)qm2274557352 (23)_ZN14QStackedLayoutC2Ev
/*void* qm2274557352()*/{
  ;
  this_ =  new QStackedLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:67
// [-2] void QStackedLayout(QWidget *) 
// (12)qm2191350408 (31)_ZN14QStackedLayoutC2EP7QWidget
/*void* qm2191350408(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QStackedLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:68
// [-2] void QStackedLayout(QLayout *) 
// (12)qm1029582778 (31)_ZN14QStackedLayoutC2EP7QLayout
/*void* qm1029582778(QLayout * parentLayout)*/{
  QLayout * parentLayout = *(QLayout **)this_;
  this_ =  new QStackedLayout(parentLayout);
}


/*void C_ZN14QStackedLayoutD2Ev(void *this_)*/ {
  delete (QStackedLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstackedlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
