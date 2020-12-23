//  header block begin

// /usr/include/qt/QtCore/qbytearraymatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArrayMatcher is pure virtual: false false
// QByteArrayMatcher has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbytearraymatcher(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:53
// [-2] void QByteArrayMatcher() 
// (12)qm3510782638 (26)_ZN17QByteArrayMatcherC2Ev
/*void* qm3510782638()*/{
  ;
  this_ =  new QByteArrayMatcher();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:54
// [-2] void QByteArrayMatcher(const QByteArray &) 
// (12)qm3625174935 (39)_ZN17QByteArrayMatcherC2ERK10QByteArray
/*void* qm3625174935(const QByteArray & pattern)*/{
  const QByteArray & pattern = *(const QByteArray *)this_;
  this_ =  new QByteArrayMatcher(pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:55
// [-2] void QByteArrayMatcher(const char *, int) 
// (12)qm1036737985 (29)_ZN17QByteArrayMatcherC2EPKci
/*void* qm1036737985(const char * pattern, int length)*/{
  const char * pattern = *(const char **)this_; int length = *(int*)this_;
  this_ =  new QByteArrayMatcher(pattern, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:56
// [-2] void QByteArrayMatcher(const QByteArrayMatcher &) 
// (12)qm2269001248 (29)_ZN17QByteArrayMatcherC2ERKS_
/*void* qm2269001248(const QByteArrayMatcher & other)*/{
  const QByteArrayMatcher & other = *(const QByteArrayMatcher *)this_;
  this_ =  new QByteArrayMatcher(other);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraymatcher.h:65
// [8] QByteArray pattern() const
// (12)qm2982885432 (33)_ZNK17QByteArrayMatcher7patternEv
//static
/*void qm2982885432()*/ {
  ;
  (void) ((QByteArrayMatcher*)this_)->pattern();
   auto xptr = (QByteArray (QByteArrayMatcher::*)() const ) &QByteArrayMatcher::pattern;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QByteArrayMatcherD2Ev(void *this_)*/ {
  delete (QByteArrayMatcher*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbytearraymatcher
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
