//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextformat.h:589
// void QTextBlockFormat()
extern "C"
void* C_ZN16QTextBlockFormatC1Ev() {
  return new QTextBlockFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:591
// bool isValid()
extern "C"
void C_ZNK16QTextBlockFormat7isValidEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->isValid();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:593
// void setAlignment(Qt::Alignment)
extern "C"
void C_ZN16QTextBlockFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QTextBlockFormat*)this_)->setAlignment(alignment);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:594
// Qt::Alignment alignment()
extern "C"
void C_ZNK16QTextBlockFormat9alignmentEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->alignment();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:597
// void setTopMargin(qreal)
extern "C"
void C_ZN16QTextBlockFormat12setTopMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setTopMargin(margin);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:599
// qreal topMargin()
extern "C"
void C_ZNK16QTextBlockFormat9topMarginEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->topMargin();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:602
// void setBottomMargin(qreal)
extern "C"
void C_ZN16QTextBlockFormat15setBottomMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setBottomMargin(margin);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:604
// qreal bottomMargin()
extern "C"
void C_ZNK16QTextBlockFormat12bottomMarginEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->bottomMargin();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:607
// void setLeftMargin(qreal)
extern "C"
void C_ZN16QTextBlockFormat13setLeftMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setLeftMargin(margin);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:609
// qreal leftMargin()
extern "C"
void C_ZNK16QTextBlockFormat10leftMarginEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->leftMargin();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:612
// void setRightMargin(qreal)
extern "C"
void C_ZN16QTextBlockFormat14setRightMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setRightMargin(margin);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:614
// qreal rightMargin()
extern "C"
void C_ZNK16QTextBlockFormat11rightMarginEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->rightMargin();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:617
// void setTextIndent(qreal)
extern "C"
void C_ZN16QTextBlockFormat13setTextIndentEd(void *this_, qreal aindent) {
  ((QTextBlockFormat*)this_)->setTextIndent(aindent);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:619
// qreal textIndent()
extern "C"
void C_ZNK16QTextBlockFormat10textIndentEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->textIndent();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:622
// void setIndent(int)
extern "C"
void C_ZN16QTextBlockFormat9setIndentEi(void *this_, int indent) {
  ((QTextBlockFormat*)this_)->setIndent(indent);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:623
// int indent()
extern "C"
void C_ZNK16QTextBlockFormat6indentEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->indent();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:626
// void setLineHeight(qreal, int)
extern "C"
void C_ZN16QTextBlockFormat13setLineHeightEdi(void *this_, qreal height, int heightType) {
  ((QTextBlockFormat*)this_)->setLineHeight(height, heightType);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:628
// qreal lineHeight(qreal, qreal)
extern "C"
void C_ZNK16QTextBlockFormat10lineHeightEdd(void *this_, qreal scriptLineHeight, qreal scaling) {
  /*return*/ ((QTextBlockFormat*)this_)->lineHeight(scriptLineHeight, scaling);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:629
// qreal lineHeight()
extern "C"
void C_ZNK16QTextBlockFormat10lineHeightEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->lineHeight();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:631
// int lineHeightType()
extern "C"
void C_ZNK16QTextBlockFormat14lineHeightTypeEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->lineHeightType();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:634
// void setNonBreakableLines(_Bool)
extern "C"
void C_ZN16QTextBlockFormat20setNonBreakableLinesEb(void *this_, bool b) {
  ((QTextBlockFormat*)this_)->setNonBreakableLines(b);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:636
// bool nonBreakableLines()
extern "C"
void C_ZNK16QTextBlockFormat17nonBreakableLinesEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->nonBreakableLines();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:639
// void setPageBreakPolicy(PageBreakFlags)
extern "C"
void C_ZN16QTextBlockFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *this_, QFlags<QTextFormat::PageBreakFlag> flags) {
  ((QTextBlockFormat*)this_)->setPageBreakPolicy(flags);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:641
// PageBreakFlags pageBreakPolicy()
extern "C"
void C_ZNK16QTextBlockFormat15pageBreakPolicyEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->pageBreakPolicy();
}
// /usr/include/qt/QtGui/qtextformat.h:644
// void setTabPositions(const QList<class QTextOption::Tab> &)
extern "C"
void C_ZN16QTextBlockFormat15setTabPositionsERK5QListIN11QTextOption3TabEE(void *this_, const QList<QTextOption::Tab> & tabs) {
  ((QTextBlockFormat*)this_)->setTabPositions(tabs);
}
// /usr/include/qt/QtGui/qtextformat.h:645
// QList<QTextOption::Tab> tabPositions()
extern "C"
void C_ZNK16QTextBlockFormat12tabPositionsEv(void *this_) {
  /*return*/ ((QTextBlockFormat*)this_)->tabPositions();
}
//  main block end
