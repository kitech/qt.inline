//  header block begin

// /usr/include/qt/QtGui/qtextlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlist.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextList is pure virtual: false false
// QTextList has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextlist(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm3393897957 (24)_ZN9QTextList2trEPKcS1_i
//static
/*void qm3393897957(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTextList::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTextList::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:57
// [-2] void QTextList(QTextDocument *) 
// (12)qm4001948172 (32)_ZN9QTextListC2EP13QTextDocument
/*void* qm4001948172(QTextDocument * doc)*/{
  QTextDocument * doc = *(QTextDocument **)this_;
  this_ =  new QTextList(doc);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:78
// [-2] void setFormat(const QTextListFormat &) 
// (12)qm3023183784 (43)_ZN9QTextList9setFormatERK15QTextListFormat
//static
/*void qm3023183784(const QTextListFormat & format)*/ {
  const QTextListFormat & format = *(const QTextListFormat *)this_;
  (void) ((QTextList*)this_)->setFormat(format);
   auto xptr = (void (QTextList::*)(QTextListFormat const&) ) &QTextList::setFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:79
// [16] QTextListFormat format() const
// (12)qm4215477317 (23)_ZNK9QTextList6formatEv
//static
/*void qm4215477317()*/ {
  ;
  (void) ((QTextList*)this_)->format();
   auto xptr = (QTextListFormat (QTextList::*)() const ) &QTextList::format;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QTextListD2Ev(void *this_)*/ {
  delete (QTextList*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextlist
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
