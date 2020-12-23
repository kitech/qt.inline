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

// QDateEdit is pure virtual: false false
// QDateEdit has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdateedit(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:224
// [8] QString tr(const char *, const char *, int) 
// (12)qm1076316543 (24)_ZN9QDateEdit2trEPKcS1_i
//static
/*void qm1076316543(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDateEdit::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDateEdit::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:227
// [-2] void QDateEdit(QWidget *) 
// (12)qm3206421006 (25)_ZN9QDateEditC2EP7QWidget
/*void* qm3206421006(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QDateEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:228
// [-2] void QDateEdit(const QDate &, QWidget *) 
// (11)qm963659273 (33)_ZN9QDateEditC2ERK5QDateP7QWidget
/*void* qm963659273(const QDate & date, QWidget * parent)*/{
  const QDate & date = *(const QDate *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QDateEdit(date, parent);
}


/*void C_ZN9QDateEditD2Ev(void *this_)*/ {
  delete (QDateEdit*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdateedit
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
