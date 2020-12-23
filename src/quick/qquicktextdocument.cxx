//  header block begin

// /usr/include/qt/QtQuick/qquicktextdocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquicktextdocument.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickTextDocument is pure virtual: false false
// QQuickTextDocument has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquicktextdocument(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:51
// [8] QString tr(const char *, const char *, int) 
// (12)qm3714846582 (34)_ZN18QQuickTextDocument2trEPKcS1_i
//static
/*void qm3714846582(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQuickTextDocument::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQuickTextDocument::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:55
// [-2] void QQuickTextDocument(QQuickItem *) 
// (12)qm4173393570 (39)_ZN18QQuickTextDocumentC2EP10QQuickItem
/*void* qm4173393570(QQuickItem * parent)*/{
  QQuickItem * parent = *(QQuickItem **)this_;
  this_ =  new QQuickTextDocument(parent);
}


/*void C_ZN18QQuickTextDocumentD2Ev(void *this_)*/ {
  delete (QQuickTextDocument*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquicktextdocument
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
