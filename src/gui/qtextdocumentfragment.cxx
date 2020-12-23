//  header block begin

// /usr/include/qt/QtGui/qtextdocumentfragment.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocumentfragment.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocumentFragment is pure virtual: false false
// QTextDocumentFragment has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextdocumentfragment(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:57
// [-2] void QTextDocumentFragment() 
// (12)qm2629881781 (30)_ZN21QTextDocumentFragmentC2Ev
/*void* qm2629881781()*/{
  ;
  this_ =  new QTextDocumentFragment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:58
// [-2] void QTextDocumentFragment(const QTextDocument *) 
// (12)qm1043972808 (46)_ZN21QTextDocumentFragmentC2EPK13QTextDocument
/*void* qm1043972808(const QTextDocument * document)*/{
  const QTextDocument * document = *(const QTextDocument **)this_;
  this_ =  new QTextDocumentFragment(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:59
// [-2] void QTextDocumentFragment(const QTextCursor &) 
// (12)qm2522935277 (44)_ZN21QTextDocumentFragmentC2ERK11QTextCursor
/*void* qm2522935277(const QTextCursor & range_)*/{
  const QTextCursor & range_ = *(const QTextCursor *)this_;
  this_ =  new QTextDocumentFragment(range_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:60
// [-2] void QTextDocumentFragment(const QTextDocumentFragment &) 
// (12)qm3524261118 (33)_ZN21QTextDocumentFragmentC2ERKS_
/*void* qm3524261118(const QTextDocumentFragment & rhs)*/{
  const QTextDocumentFragment & rhs = *(const QTextDocumentFragment *)this_;
  this_ =  new QTextDocumentFragment(rhs);
}


/*void C_ZN21QTextDocumentFragmentD2Ev(void *this_)*/ {
  delete (QTextDocumentFragment*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextdocumentfragment
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
