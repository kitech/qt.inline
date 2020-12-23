//  header block begin

// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFrame is pure virtual: false false
// QTextFrame has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextframe(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:120
// [8] QString tr(const char *, const char *, int) 
// (12)qm2952227688 (26)_ZN10QTextFrame2trEPKcS1_i
//static
/*void qm2952227688(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTextFrame::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTextFrame::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:123
// [-2] void QTextFrame(QTextDocument *) 
// (12)qm3332645538 (34)_ZN10QTextFrameC2EP13QTextDocument
/*void* qm3332645538(QTextDocument * doc)*/{
  QTextDocument * doc = *(QTextDocument **)this_;
  this_ =  new QTextFrame(doc);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:126
// [-2] void setFrameFormat(const QTextFrameFormat &) 
// (11)qm714537496 (52)_ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat
//static
/*void qm714537496(const QTextFrameFormat & format)*/ {
  const QTextFrameFormat & format = *(const QTextFrameFormat *)this_;
  (void) ((QTextFrame*)this_)->setFrameFormat(format);
   auto xptr = (void (QTextFrame::*)(QTextFrameFormat const&) ) &QTextFrame::setFrameFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:127
// [16] QTextFrameFormat frameFormat() const
// (12)qm3218653954 (31)_ZNK10QTextFrame11frameFormatEv
//static
/*void qm3218653954()*/ {
  ;
  (void) ((QTextFrame*)this_)->frameFormat();
   auto xptr = (QTextFrameFormat (QTextFrame::*)() const ) &QTextFrame::frameFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QTextFrameD2Ev(void *this_)*/ {
  delete (QTextFrame*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextframe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
