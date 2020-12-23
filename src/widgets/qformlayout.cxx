//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(formlayout)
// /usr/include/qt/QtWidgets/qformlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qformlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFormLayout is pure virtual: false false
// QFormLayout has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qformlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2849232529 (27)_ZN11QFormLayout2trEPKcS1_i
//static
/*void qm2849232529(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QFormLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QFormLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:91
// [-2] void QFormLayout(QWidget *) 
// (12)qm4165280238 (28)_ZN11QFormLayoutC2EP7QWidget
/*void* qm4165280238(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QFormLayout(parent);
}


/*void C_ZN11QFormLayoutD2Ev(void *this_)*/ {
  delete (QFormLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qformlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(formlayout)
#endif // #ifndef QT_MINIMAL
//  footer block end
