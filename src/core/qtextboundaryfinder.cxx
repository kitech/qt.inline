//  header block begin

// /usr/include/qt/QtCore/qtextboundaryfinder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextboundaryfinder.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextBoundaryFinder is pure virtual: false false
// QTextBoundaryFinder has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextboundaryfinder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:54
// [-2] void QTextBoundaryFinder() 
// (11)qm861982634 (28)_ZN19QTextBoundaryFinderC2Ev
/*void* qm861982634()*/{
  ;
  this_ =  new QTextBoundaryFinder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:55
// [-2] void QTextBoundaryFinder(const QTextBoundaryFinder &) 
// (11)qm329495540 (31)_ZN19QTextBoundaryFinderC2ERKS_
/*void* qm329495540(const QTextBoundaryFinder & other)*/{
  const QTextBoundaryFinder & other = *(const QTextBoundaryFinder *)this_;
  this_ =  new QTextBoundaryFinder(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:76
// [-2] void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QString &) 
// (12)qm2219281450 (55)_ZN19QTextBoundaryFinderC2ENS_12BoundaryTypeERK7QString
/*void* qm2219281450(QTextBoundaryFinder::BoundaryType type_, const QString & string)*/{
  QTextBoundaryFinder::BoundaryType type_ = *(QTextBoundaryFinder::BoundaryType*)this_; const QString & string = *(const QString *)this_;
  this_ =  new QTextBoundaryFinder(type_, string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:77
// [-2] void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QChar *, int, unsigned char *, int) 
// (12)qm1232878065 (57)_ZN19QTextBoundaryFinderC2ENS_12BoundaryTypeEPK5QChariPhi
/*void* qm1232878065(QTextBoundaryFinder::BoundaryType type_, const QChar * chars, int length, unsigned char * buffer, int bufferSize)*/{
  QTextBoundaryFinder::BoundaryType type_ = *(QTextBoundaryFinder::BoundaryType*)this_; const QChar * chars = *(const QChar **)this_; int length = *(int*)this_; unsigned char * buffer = *(unsigned char **)this_; int bufferSize = *(int*)this_;
  this_ =  new QTextBoundaryFinder(type_, chars, length, buffer, bufferSize);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:79
// [1] bool isValid() const
// (12)qm1082050014 (35)_ZNK19QTextBoundaryFinder7isValidEv
//static
/*void qm1082050014()*/ {
  ;
  (void) ((QTextBoundaryFinder*)this_)->isValid();
   auto xptr = (bool (QTextBoundaryFinder::*)() const ) &QTextBoundaryFinder::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:81
// [4] QTextBoundaryFinder::BoundaryType type() const
// (11)qm582912656 (32)_ZNK19QTextBoundaryFinder4typeEv
//static
/*void qm582912656()*/ {
  ;
  (void) ((QTextBoundaryFinder*)this_)->type();
   auto xptr = (QTextBoundaryFinder::BoundaryType (QTextBoundaryFinder::*)() const ) &QTextBoundaryFinder::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QTextBoundaryFinderD2Ev(void *this_)*/ {
  delete (QTextBoundaryFinder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextboundaryfinder
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
