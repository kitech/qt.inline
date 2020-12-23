//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(wizard)
// /usr/include/qt/QtWidgets/qwizard.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwizard.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWizardPage is pure virtual: false false
// QWizardPage has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwizardpage(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:220
// [8] QString tr(const char *, const char *, int) 
// (12)qm2564030157 (27)_ZN11QWizardPage2trEPKcS1_i
//static
/*void qm2564030157(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWizardPage::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWizardPage::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:225
// [-2] void QWizardPage(QWidget *) 
// (12)qm2594782233 (28)_ZN11QWizardPageC2EP7QWidget
/*void* qm2594782233(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QWizardPage(parent);
}


/*void C_ZN11QWizardPageD2Ev(void *this_)*/ {
  delete (QWizardPage*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwizardpage
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(wizard)
#endif // #ifndef QT_MINIMAL
//  footer block end
