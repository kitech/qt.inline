//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(inputdialog)
// /usr/include/qt/QtWidgets/qinputdialog.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qinputdialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QInputDialog is pure virtual: false false
// QInputDialog has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qinputdialog(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:57
// [8] QString tr(const char *, const char *, int) 
// (11)qm406122481 (28)_ZN12QInputDialog2trEPKcS1_i
//static
/*void qm406122481(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QInputDialog::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QInputDialog::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:94
// [-2] void QInputDialog(QWidget *, Qt::WindowFlags) 
// (11)qm315152923 (55)_ZN12QInputDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE
/*void* qm315152923(QWidget * parent, QFlags<Qt::WindowType> flags)*/{
  QWidget * parent = *(QWidget **)this_; QFlags<Qt::WindowType> flags = *(QFlags<Qt::WindowType>*)this_;
  this_ =  new QInputDialog(parent, flags);
}


/*void C_ZN12QInputDialogD2Ev(void *this_)*/ {
  delete (QInputDialog*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qinputdialog
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(inputdialog)
#endif // #ifndef QT_MINIMAL
//  footer block end
