//  header block begin

// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFragment is pure virtual: false false
// QTextFragment has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextfragment(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:307
// [-2] void QTextFragment(const QTextDocumentPrivate *, int, int) 
// (12)qm3081189285 (47)_ZN13QTextFragmentC2EPK20QTextDocumentPrivateii
/*void* qm3081189285(const QTextDocumentPrivate * priv, int f, int fe)*/{
  const QTextDocumentPrivate * priv = *(const QTextDocumentPrivate **)this_; int f = *(int*)this_; int fe = *(int*)this_;
  this_ =  new QTextFragment(priv, f, fe);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:308
// [-2] void QTextFragment() 
// (12)qm1958237701 (22)_ZN13QTextFragmentC2Ev
/*void* qm1958237701()*/{
  ;
  this_ =  new QTextFragment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:309
// [-2] void QTextFragment(const QTextFragment &) 
// (12)qm3909927515 (25)_ZN13QTextFragmentC2ERKS_
/*void* qm3909927515(const QTextFragment & o)*/{
  const QTextFragment & o = *(const QTextFragment *)this_;
  this_ =  new QTextFragment(o);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:310
// [16] QTextFragment & operator=(const QTextFragment &) 
// (12)qm1921398289 (25)_ZN13QTextFragmentaSERKS_
//static
/*void qm1921398289(const QTextFragment & o)*/ {
  const QTextFragment & o = *(const QTextFragment *)this_;
  (void) ((QTextFragment*)this_)->operator=(o);
  // auto xptr = (QTextFragment & (QTextFragment::*)(QTextFragment const&) ) &QTextFragment::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:312
// [1] bool isValid() const
// (11)qm773059344 (29)_ZNK13QTextFragment7isValidEv
//static
/*void qm773059344()*/ {
  ;
  (void) ((QTextFragment*)this_)->isValid();
   auto xptr = (bool (QTextFragment::*)() const ) &QTextFragment::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:314
// [1] bool operator==(const QTextFragment &) const
// (12)qm3130530963 (26)_ZNK13QTextFragmenteqERKS_
//static
/*void qm3130530963(const QTextFragment & o)*/ {
  const QTextFragment & o = *(const QTextFragment *)this_;
  (void) ((QTextFragment*)this_)->operator==(o);
  // auto xptr = (bool (QTextFragment::*)(QTextFragment const&) const ) &QTextFragment::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:315
// [1] bool operator!=(const QTextFragment &) const
// (11)qm551028964 (26)_ZNK13QTextFragmentneERKS_
//static
/*void qm551028964(const QTextFragment & o)*/ {
  const QTextFragment & o = *(const QTextFragment *)this_;
  (void) ((QTextFragment*)this_)->operator!=(o);
  // auto xptr = (bool (QTextFragment::*)(QTextFragment const&) const ) &QTextFragment::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:316
// [1] bool operator<(const QTextFragment &) const
// (12)qm2144192755 (26)_ZNK13QTextFragmentltERKS_
//static
/*void qm2144192755(const QTextFragment & o)*/ {
  const QTextFragment & o = *(const QTextFragment *)this_;
  (void) ((QTextFragment*)this_)->operator<(o);
  // auto xptr = (bool (QTextFragment::*)(QTextFragment const&) const ) &QTextFragment::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QTextFragmentD2Ev(void *this_)*/ {
  delete (QTextFragment*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextfragment
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
