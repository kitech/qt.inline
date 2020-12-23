//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(datetimeedit)
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTimeEdit is pure virtual: false false
// QTimeEdit has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtimeedit(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:211
// [8] QString tr(const char *, const char *, int) 
// (11)qm852738521 (24)_ZN9QTimeEdit2trEPKcS1_i
//static
/*void qm852738521(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTimeEdit::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTimeEdit::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:214
// [-2] void QTimeEdit(QWidget *) 
// (12)qm2161764443 (25)_ZN9QTimeEditC2EP7QWidget
/*void* qm2161764443(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QTimeEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:215
// [-2] void QTimeEdit(const QTime &, QWidget *) 
// (12)qm2675686250 (33)_ZN9QTimeEditC2ERK5QTimeP7QWidget
/*void* qm2675686250(const QTime & time, QWidget * parent)*/{
  const QTime & time = *(const QTime *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QTimeEdit(time, parent);
}


/*void C_ZN9QTimeEditD2Ev(void *this_)*/ {
  delete (QTimeEdit*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtimeedit
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(datetimeedit)
#endif // #ifndef QT_MINIMAL
//  footer block end
