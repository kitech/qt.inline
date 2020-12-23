//  header block begin

// /usr/include/qt/QtCore/qregexp.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qregexp.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegExp is pure virtual: false false
// QRegExp has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregexp(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:70
// [-2] void QRegExp() 
// (12)qm2241450719 (15)_ZN7QRegExpC2Ev
/*void* qm2241450719()*/{
  ;
  this_ =  new QRegExp();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:71
// [-2] void QRegExp(const QString &, Qt::CaseSensitivity, QRegExp::PatternSyntax) 
// (12)qm1613537477 (65)_ZN7QRegExpC2ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE
/*void* qm1613537477(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax)*/{
  const QString & pattern = *(const QString *)this_; Qt::CaseSensitivity cs = *(Qt::CaseSensitivity*)this_; QRegExp::PatternSyntax syntax = *(QRegExp::PatternSyntax*)this_;
  this_ =  new QRegExp(pattern, cs, syntax);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:73
// [-2] void QRegExp(const QRegExp &) 
// (12)qm2056535901 (18)_ZN7QRegExpC2ERKS_
/*void* qm2056535901(const QRegExp & rx)*/{
  const QRegExp & rx = *(const QRegExp *)this_;
  this_ =  new QRegExp(rx);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:76
// [8] QRegExp & operator=(QRegExp &&) 
// (12)qm2154470243 (17)_ZN7QRegExpaSEOS_
//static
/*void qm2154470243(QRegExp && other)*/ {
  QRegExp && other =  static_cast<QRegExp &&>(*(QRegExp *)this_);
  (void) ((QRegExp*)this_)->operator=(other);
  // auto xptr = (QRegExp & (QRegExp::*)(QRegExp&&) ) &QRegExp::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:77
// [-2] void swap(QRegExp &) 
// (12)qm4115962669 (20)_ZN7QRegExp4swapERS_
//static
/*void qm4115962669(QRegExp & other)*/ {
  QRegExp & other = *(QRegExp *)this_;
  (void) ((QRegExp*)this_)->swap(other);
   auto xptr = (void (QRegExp::*)(QRegExp&) ) &QRegExp::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:80
// [1] bool operator!=(const QRegExp &) const
// (12)qm2672368323 (19)_ZNK7QRegExpneERKS_
//static
/*void qm2672368323(const QRegExp & rx)*/ {
  const QRegExp & rx = *(const QRegExp *)this_;
  (void) ((QRegExp*)this_)->operator!=(rx);
  // auto xptr = (bool (QRegExp::*)(QRegExp const&) const ) &QRegExp::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QRegExpD2Ev(void *this_)*/ {
  delete (QRegExp*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregexp
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
