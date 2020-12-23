//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(regularexpression)
// /usr/include/qt/QtCore/qregularexpression.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qregularexpression.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegularExpression is pure virtual: false false
// QRegularExpression has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregularexpression(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:84
// [-2] void QRegularExpression() 
// (12)qm4292092048 (27)_ZN18QRegularExpressionC2Ev
/*void* qm4292092048()*/{
  ;
  this_ =  new QRegularExpression();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:85
// [-2] void QRegularExpression(const QString &, QRegularExpression::PatternOptions) 
// (12)qm2520603571 (64)_ZN18QRegularExpressionC2ERK7QString6QFlagsINS_13PatternOptionEE
/*void* qm2520603571(const QString & pattern, QFlags<QRegularExpression::PatternOption> options)*/{
  const QString & pattern = *(const QString *)this_; QFlags<QRegularExpression::PatternOption> options = *(QFlags<QRegularExpression::PatternOption>*)this_;
  this_ =  new QRegularExpression(pattern, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:86
// [-2] void QRegularExpression(const QRegularExpression &) 
// (11)qm800410568 (30)_ZN18QRegularExpressionC2ERKS_
/*void* qm800410568(const QRegularExpression & re)*/{
  const QRegularExpression & re = *(const QRegularExpression *)this_;
  this_ =  new QRegularExpression(re);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:89
// [8] QRegularExpression & operator=(QRegularExpression &&) 
// (12)qm2755142100 (29)_ZN18QRegularExpressionaSEOS_
//static
/*void qm2755142100(QRegularExpression && re)*/ {
  QRegularExpression && re =  static_cast<QRegularExpression &&>(*(QRegularExpression *)this_);
  (void) ((QRegularExpression*)this_)->operator=(re);
  // auto xptr = (QRegularExpression & (QRegularExpression::*)(QRegularExpression&&) ) &QRegularExpression::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:92
// [-2] void swap(QRegularExpression &) 
// (12)qm2919892342 (32)_ZN18QRegularExpression4swapERS_
//static
/*void qm2919892342(QRegularExpression & other)*/ {
  QRegularExpression & other = *(QRegularExpression *)this_;
  (void) ((QRegularExpression*)this_)->swap(other);
   auto xptr = (void (QRegularExpression::*)(QRegularExpression&) ) &QRegularExpression::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:153
// [8] QString anchoredPattern(const QString &) 
// (11)qm911387965 (51)_ZN18QRegularExpression15anchoredPatternERK7QString
//static
/*void qm911387965(const QString & expression)*/ {
  const QString & expression = *(const QString *)this_;
  (void) QRegularExpression::anchoredPattern(expression);
   auto xptr = (QString (*)(QString const&) ) &QRegularExpression::anchoredPattern;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:164
// [1] bool operator!=(const QRegularExpression &) const
// (12)qm1552963878 (31)_ZNK18QRegularExpressionneERKS_
//static
/*void qm1552963878(const QRegularExpression & re)*/ {
  const QRegularExpression & re = *(const QRegularExpression *)this_;
  (void) ((QRegularExpression*)this_)->operator!=(re);
  // auto xptr = (bool (QRegularExpression::*)(QRegularExpression const&) const ) &QRegularExpression::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QRegularExpressionD2Ev(void *this_)*/ {
  delete (QRegularExpression*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregularexpression
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(regularexpression)
#endif // #ifndef QT_MINIMAL
//  footer block end
