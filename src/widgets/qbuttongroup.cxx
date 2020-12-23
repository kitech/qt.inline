//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(buttongroup)
// /usr/include/qt/QtWidgets/qbuttongroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbuttongroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QButtonGroup is pure virtual: false false
// QButtonGroup has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbuttongroup(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:56
// [8] QString tr(const char *, const char *, int) 
// (11)qm870895016 (28)_ZN12QButtonGroup2trEPKcS1_i
//static
/*void qm870895016(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QButtonGroup::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QButtonGroup::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qbuttongroup.h:60
// [-2] void QButtonGroup(QObject *) 
// (12)qm2324572097 (29)_ZN12QButtonGroupC2EP7QObject
/*void* qm2324572097(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QButtonGroup(parent);
}


/*void C_ZN12QButtonGroupD2Ev(void *this_)*/ {
  delete (QButtonGroup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbuttongroup
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(buttongroup)
#endif // #ifndef QT_MINIMAL
//  footer block end
