//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(spinbox)
// /usr/include/qt/QtWidgets/qspinbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDoubleSpinBox is pure virtual: false false
// QDoubleSpinBox has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdoublespinbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:123
// [8] QString tr(const char *, const char *, int) 
// (12)qm3405444917 (30)_ZN14QDoubleSpinBox2trEPKcS1_i
//static
/*void qm3405444917(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDoubleSpinBox::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDoubleSpinBox::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:135
// [-2] void QDoubleSpinBox(QWidget *) 
// (11)qm698183486 (31)_ZN14QDoubleSpinBoxC2EP7QWidget
/*void* qm698183486(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QDoubleSpinBox(parent);
}


/*void C_ZN14QDoubleSpinBoxD2Ev(void *this_)*/ {
  delete (QDoubleSpinBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdoublespinbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(spinbox)
#endif // #ifndef QT_MINIMAL
//  footer block end
