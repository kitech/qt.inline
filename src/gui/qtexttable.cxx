//  header block begin

// /usr/include/qt/QtGui/qtexttable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtexttable.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTable is pure virtual: false false
// QTextTable has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtexttable(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:100
// [8] QString tr(const char *, const char *, int) 
// (11)qm983071229 (26)_ZN10QTextTable2trEPKcS1_i
//static
/*void qm983071229(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTextTable::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTextTable::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:102
// [-2] void QTextTable(QTextDocument *) 
// (12)qm2982215743 (34)_ZN10QTextTableC2EP13QTextDocument
/*void* qm2982215743(QTextDocument * doc)*/{
  QTextDocument * doc = *(QTextDocument **)this_;
  this_ =  new QTextTable(doc);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:128
// [16] QTextTableFormat format() const
// (12)qm2712113586 (25)_ZNK10QTextTable6formatEv
//static
/*void qm2712113586()*/ {
  ;
  (void) ((QTextTable*)this_)->format();
   auto xptr = (QTextTableFormat (QTextTable::*)() const ) &QTextTable::format;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QTextTableD2Ev(void *this_)*/ {
  delete (QTextTable*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtexttable
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
