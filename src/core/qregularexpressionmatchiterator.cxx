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

// QRegularExpressionMatchIterator is pure virtual: false false
// QRegularExpressionMatchIterator has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregularexpressionmatchiterator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:264
// [-2] void QRegularExpressionMatchIterator() 
// (12)qm4026188155 (40)_ZN31QRegularExpressionMatchIteratorC2Ev
/*void* qm4026188155()*/{
  ;
  this_ =  new QRegularExpressionMatchIterator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:266
// [-2] void QRegularExpressionMatchIterator(const QRegularExpressionMatchIterator &) 
// (11)qm296860667 (43)_ZN31QRegularExpressionMatchIteratorC2ERKS_
/*void* qm296860667(const QRegularExpressionMatchIterator & iterator)*/{
  const QRegularExpressionMatchIterator & iterator = *(const QRegularExpressionMatchIterator *)this_;
  this_ =  new QRegularExpressionMatchIterator(iterator);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:268
// [8] QRegularExpressionMatchIterator & operator=(QRegularExpressionMatchIterator &&) 
// (12)qm3468675379 (42)_ZN31QRegularExpressionMatchIteratoraSEOS_
//static
/*void qm3468675379(QRegularExpressionMatchIterator && iterator)*/ {
  QRegularExpressionMatchIterator && iterator =  static_cast<QRegularExpressionMatchIterator &&>(*(QRegularExpressionMatchIterator *)this_);
  (void) ((QRegularExpressionMatchIterator*)this_)->operator=(iterator);
  // auto xptr = (QRegularExpressionMatchIterator & (QRegularExpressionMatchIterator::*)(QRegularExpressionMatchIterator&&) ) &QRegularExpressionMatchIterator::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:270
// [-2] void swap(QRegularExpressionMatchIterator &) 
// (12)qm3889998942 (45)_ZN31QRegularExpressionMatchIterator4swapERS_
//static
/*void qm3889998942(QRegularExpressionMatchIterator & other)*/ {
  QRegularExpressionMatchIterator & other = *(QRegularExpressionMatchIterator *)this_;
  (void) ((QRegularExpressionMatchIterator*)this_)->swap(other);
   auto xptr = (void (QRegularExpressionMatchIterator::*)(QRegularExpressionMatchIterator&) ) &QRegularExpressionMatchIterator::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN31QRegularExpressionMatchIteratorD2Ev(void *this_)*/ {
  delete (QRegularExpressionMatchIterator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregularexpressionmatchiterator
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
