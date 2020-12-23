//  header block begin

#ifndef QT_MINIMAL
#include <QtGui/qtguiglobal.h>
#if QT_CONFIG(draganddrop)
// /usr/include/qt/QtGui/qdrag.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdrag.h>
#include <QtGui>
#include "callback_inherit.h"

// QDrag is pure virtual: false false
// QDrag has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdrag(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:59
// [8] QString tr(const char *, const char *, int) 
// (11)qm348645016 (20)_ZN5QDrag2trEPKcS1_i
//static
/*void qm348645016(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDrag::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDrag::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:62
// [-2] void QDrag(QObject *) 
// (12)qm2893035590 (21)_ZN5QDragC2EP7QObject
/*void* qm2893035590(QObject * dragSource)*/{
  QObject * dragSource = *(QObject **)this_;
  this_ =  new QDrag(dragSource);
}


/*void C_ZN5QDragD2Ev(void *this_)*/ {
  delete (QDrag*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdrag
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(draganddrop)
#endif // #ifndef QT_MINIMAL
//  footer block end
