//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextListFormat is pure virtual: false
// QTextListFormat has virtual projected: false
//  header block end

//  main block begin

class MyQTextListFormat : public QTextListFormat {
public:
  virtual ~MyQTextListFormat() {}
// void QTextListFormat()
MyQTextListFormat() : QTextListFormat() {}
// void QTextListFormat(const class QTextFormat &)
MyQTextListFormat(const QTextFormat & fmt_) : QTextListFormat(fmt_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:681
// [-2] void QTextListFormat()
extern "C"
void* C_ZN15QTextListFormatC2Ev() {
  return  new QTextListFormat();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:683
// [1] bool isValid()
extern "C"
bool C_ZNK15QTextListFormat7isValidEv(void *this_) {
  return (bool)((QTextListFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:697
// [-2] void setStyle(enum QTextListFormat::Style)
extern "C"
void C_ZN15QTextListFormat8setStyleENS_5StyleE(void *this_, QTextListFormat::Style style) {
  ((QTextListFormat*)this_)->setStyle(style);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:698
// [4] QTextListFormat::Style style()
extern "C"
QTextListFormat::Style C_ZNK15QTextListFormat5styleEv(void *this_) {
  return (QTextListFormat::Style)((QTextListFormat*)this_)->style();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:701
// [-2] void setIndent(int)
extern "C"
void C_ZN15QTextListFormat9setIndentEi(void *this_, int indent) {
  ((QTextListFormat*)this_)->setIndent(indent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:702
// [4] int indent()
extern "C"
int C_ZNK15QTextListFormat6indentEv(void *this_) {
  return (int)((QTextListFormat*)this_)->indent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:705
// [-2] void setNumberPrefix(const class QString &)
extern "C"
void C_ZN15QTextListFormat15setNumberPrefixERK7QString(void *this_, QString* numberPrefix) {
  ((QTextListFormat*)this_)->setNumberPrefix(*numberPrefix);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:706
// [8] QString numberPrefix()
extern "C"
void* C_ZNK15QTextListFormat12numberPrefixEv(void *this_) {
  auto rv = ((QTextListFormat*)this_)->numberPrefix();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:709
// [-2] void setNumberSuffix(const class QString &)
extern "C"
void C_ZN15QTextListFormat15setNumberSuffixERK7QString(void *this_, QString* numberSuffix) {
  ((QTextListFormat*)this_)->setNumberSuffix(*numberSuffix);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:710
// [8] QString numberSuffix()
extern "C"
void* C_ZNK15QTextListFormat12numberSuffixEv(void *this_) {
  auto rv = ((QTextListFormat*)this_)->numberSuffix();
return new QString(rv);
}


extern "C"
void C_ZN15QTextListFormatD2Ev(void *this_) {
  delete (QTextListFormat*)(this_);
}
//  main block end
