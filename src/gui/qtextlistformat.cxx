//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextformat.h:680
// void QTextListFormat()
extern "C"
void* C_ZN15QTextListFormatC1Ev() {
  return new QTextListFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:682
// bool isValid()
extern "C"
void C_ZNK15QTextListFormat7isValidEv(void *this_) {
  /*return*/ ((QTextListFormat*)this_)->isValid();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:696
// void setStyle(enum QTextListFormat::Style)
extern "C"
void C_ZN15QTextListFormat8setStyleENS_5StyleE(void *this_, QTextListFormat::Style style) {
  ((QTextListFormat*)this_)->setStyle(style);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:697
// QTextListFormat::Style style()
extern "C"
void C_ZNK15QTextListFormat5styleEv(void *this_) {
  /*return*/ ((QTextListFormat*)this_)->style();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:700
// void setIndent(int)
extern "C"
void C_ZN15QTextListFormat9setIndentEi(void *this_, int indent) {
  ((QTextListFormat*)this_)->setIndent(indent);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:701
// int indent()
extern "C"
void C_ZNK15QTextListFormat6indentEv(void *this_) {
  /*return*/ ((QTextListFormat*)this_)->indent();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:704
// void setNumberPrefix(const class QString &)
extern "C"
void C_ZN15QTextListFormat15setNumberPrefixERK7QString(void *this_, const QString & numberPrefix) {
  ((QTextListFormat*)this_)->setNumberPrefix(numberPrefix);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:705
// QString numberPrefix()
extern "C"
void C_ZNK15QTextListFormat12numberPrefixEv(void *this_) {
  /*return*/ ((QTextListFormat*)this_)->numberPrefix();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:708
// void setNumberSuffix(const class QString &)
extern "C"
void C_ZN15QTextListFormat15setNumberSuffixERK7QString(void *this_, const QString & numberSuffix) {
  ((QTextListFormat*)this_)->setNumberSuffix(numberSuffix);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:709
// QString numberSuffix()
extern "C"
void C_ZNK15QTextListFormat12numberSuffixEv(void *this_) {
  /*return*/ ((QTextListFormat*)this_)->numberSuffix();
}
//  main block end
