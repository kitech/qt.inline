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

// QRegularExpressionMatch is pure virtual: false false
// QRegularExpressionMatch has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregularexpressionmatch(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:196
// [-2] void QRegularExpressionMatch() 
// (12)qm2043354271 (32)_ZN23QRegularExpressionMatchC2Ev
/*void* qm2043354271()*/{
  ;
  this_ =  new QRegularExpressionMatch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:198
// [-2] void QRegularExpressionMatch(const QRegularExpressionMatch &) 
// (12)qm3658643577 (35)_ZN23QRegularExpressionMatchC2ERKS_
/*void* qm3658643577(const QRegularExpressionMatch & match_)*/{
  const QRegularExpressionMatch & match_ = *(const QRegularExpressionMatch *)this_;
  this_ =  new QRegularExpressionMatch(match_);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:200
// [8] QRegularExpressionMatch & operator=(QRegularExpressionMatch &&) 
// (11)qm214943619 (34)_ZN23QRegularExpressionMatchaSEOS_
//static
/*void qm214943619(QRegularExpressionMatch && match_)*/ {
  QRegularExpressionMatch && match_ =  static_cast<QRegularExpressionMatch &&>(*(QRegularExpressionMatch *)this_);
  (void) ((QRegularExpressionMatch*)this_)->operator=(match_);
  // auto xptr = (QRegularExpressionMatch & (QRegularExpressionMatch::*)(QRegularExpressionMatch&&) ) &QRegularExpressionMatch::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:202
// [-2] void swap(QRegularExpressionMatch &) 
// (12)qm3959688766 (37)_ZN23QRegularExpressionMatch4swapERS_
//static
/*void qm3959688766(QRegularExpressionMatch & other)*/ {
  QRegularExpressionMatch & other = *(QRegularExpressionMatch *)this_;
  (void) ((QRegularExpressionMatch*)this_)->swap(other);
   auto xptr = (void (QRegularExpressionMatch::*)(QRegularExpressionMatch&) ) &QRegularExpressionMatch::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QRegularExpressionMatchD2Ev(void *this_)*/ {
  delete (QRegularExpressionMatch*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregularexpressionmatch
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
