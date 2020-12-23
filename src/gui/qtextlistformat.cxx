//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextListFormat is pure virtual: false false
// QTextListFormat has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextlistformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:737
// [-2] void QTextListFormat() 
// (12)qm1825405632 (24)_ZN15QTextListFormatC2Ev
/*void* qm1825405632()*/{
  ;
  this_ =  new QTextListFormat();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:739
// [1] bool isValid() const
// (11)qm992893627 (31)_ZNK15QTextListFormat7isValidEv
//static
/*void qm992893627()*/ {
  ;
  (void) ((QTextListFormat*)this_)->isValid();
   auto xptr = (bool (QTextListFormat::*)() const ) &QTextListFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:753
// [-2] void setStyle(QTextListFormat::Style) 
// (11)qm677564481 (40)_ZN15QTextListFormat8setStyleENS_5StyleE
//static
/*void qm677564481(QTextListFormat::Style style)*/ {
  QTextListFormat::Style style = *(QTextListFormat::Style*)this_;
  (void) ((QTextListFormat*)this_)->setStyle(style);
   auto xptr = (void (QTextListFormat::*)(QTextListFormat::Style) ) &QTextListFormat::setStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:754
// [4] QTextListFormat::Style style() const
// (11)qm683141092 (29)_ZNK15QTextListFormat5styleEv
//static
/*void qm683141092()*/ {
  ;
  (void) ((QTextListFormat*)this_)->style();
   auto xptr = (QTextListFormat::Style (QTextListFormat::*)() const ) &QTextListFormat::style;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:757
// [-2] void setIndent(int) 
// (10)qm11894270 (32)_ZN15QTextListFormat9setIndentEi
//static
/*void qm11894270(int indent)*/ {
  int indent = *(int*)this_;
  (void) ((QTextListFormat*)this_)->setIndent(indent);
   auto xptr = (void (QTextListFormat::*)(int) ) &QTextListFormat::setIndent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:758
// [4] int indent() const
// (12)qm1877501446 (30)_ZNK15QTextListFormat6indentEv
//static
/*void qm1877501446()*/ {
  ;
  (void) ((QTextListFormat*)this_)->indent();
   auto xptr = (int (QTextListFormat::*)() const ) &QTextListFormat::indent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:761
// [-2] void setNumberPrefix(const QString &) 
// (11)qm267572530 (48)_ZN15QTextListFormat15setNumberPrefixERK7QString
//static
/*void qm267572530(const QString & numberPrefix)*/ {
  const QString & numberPrefix = *(const QString *)this_;
  (void) ((QTextListFormat*)this_)->setNumberPrefix(numberPrefix);
   auto xptr = (void (QTextListFormat::*)(QString const&) ) &QTextListFormat::setNumberPrefix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:762
// [8] QString numberPrefix() const
// (11)qm870208421 (37)_ZNK15QTextListFormat12numberPrefixEv
//static
/*void qm870208421()*/ {
  ;
  (void) ((QTextListFormat*)this_)->numberPrefix();
   auto xptr = (QString (QTextListFormat::*)() const ) &QTextListFormat::numberPrefix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:765
// [-2] void setNumberSuffix(const QString &) 
// (12)qm2968263866 (48)_ZN15QTextListFormat15setNumberSuffixERK7QString
//static
/*void qm2968263866(const QString & numberSuffix)*/ {
  const QString & numberSuffix = *(const QString *)this_;
  (void) ((QTextListFormat*)this_)->setNumberSuffix(numberSuffix);
   auto xptr = (void (QTextListFormat::*)(QString const&) ) &QTextListFormat::setNumberSuffix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:766
// [8] QString numberSuffix() const
// (12)qm4267841638 (37)_ZNK15QTextListFormat12numberSuffixEv
//static
/*void qm4267841638()*/ {
  ;
  (void) ((QTextListFormat*)this_)->numberSuffix();
   auto xptr = (QString (QTextListFormat::*)() const ) &QTextListFormat::numberSuffix;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QTextListFormatD2Ev(void *this_)*/ {
  delete (QTextListFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextlistformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
