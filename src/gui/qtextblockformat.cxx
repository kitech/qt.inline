//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlockFormat is pure virtual: false
// QTextBlockFormat has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextBlockFormat : public QTextBlockFormat {
public:
  virtual ~MyQTextBlockFormat() {}
// void QTextBlockFormat()
MyQTextBlockFormat() : QTextBlockFormat() {}
// void QTextBlockFormat(const class QTextFormat &)
MyQTextBlockFormat(const QTextFormat & fmt_) : QTextBlockFormat(fmt_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:590
// [-2] void QTextBlockFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN16QTextBlockFormatC2Ev() {
  return  new QTextBlockFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:592
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextBlockFormat7isValidEv(void *this_) {
  return (bool)((QTextBlockFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:594
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QTextBlockFormat*)this_)->setAlignment(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:595
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK16QTextBlockFormat9alignmentEv(void *this_) {
  return (Qt::Alignment)((QTextBlockFormat*)this_)->alignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:598
// [-2] void setTopMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat12setTopMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setTopMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:600
// [8] qreal topMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat9topMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->topMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:603
// [-2] void setBottomMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat15setBottomMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setBottomMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:605
// [8] qreal bottomMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat12bottomMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->bottomMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:608
// [-2] void setLeftMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat13setLeftMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setLeftMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:610
// [8] qreal leftMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10leftMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->leftMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:613
// [-2] void setRightMargin(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat14setRightMarginEd(void *this_, qreal margin) {
  ((QTextBlockFormat*)this_)->setRightMargin(margin);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:615
// [8] qreal rightMargin()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat11rightMarginEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->rightMargin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:618
// [-2] void setTextIndent(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat13setTextIndentEd(void *this_, qreal aindent) {
  ((QTextBlockFormat*)this_)->setTextIndent(aindent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:620
// [8] qreal textIndent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10textIndentEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->textIndent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:623
// [-2] void setIndent(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat9setIndentEi(void *this_, int indent) {
  ((QTextBlockFormat*)this_)->setIndent(indent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:624
// [4] int indent()
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextBlockFormat6indentEv(void *this_) {
  return (int)((QTextBlockFormat*)this_)->indent();
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:627
// [-2] void setLineHeight(qreal, int)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat13setLineHeightEdi(void *this_, qreal height, int heightType) {
  ((QTextBlockFormat*)this_)->setLineHeight(height, heightType);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:629
// [8] qreal lineHeight(qreal, qreal)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10lineHeightEdd(void *this_, qreal scriptLineHeight, qreal scaling) {
  return (qreal)((QTextBlockFormat*)this_)->lineHeight(scriptLineHeight, scaling);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:630
// [8] qreal lineHeight()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextBlockFormat10lineHeightEv(void *this_) {
  return (qreal)((QTextBlockFormat*)this_)->lineHeight();
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:632
// [4] int lineHeightType()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
int C_ZNK16QTextBlockFormat14lineHeightTypeEv(void *this_) {
  return (int)((QTextBlockFormat*)this_)->lineHeightType();
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:635
// [-2] void setNonBreakableLines(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat20setNonBreakableLinesEb(void *this_, bool b) {
  ((QTextBlockFormat*)this_)->setNonBreakableLines(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:637
// [1] bool nonBreakableLines()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextBlockFormat17nonBreakableLinesEv(void *this_) {
  return (bool)((QTextBlockFormat*)this_)->nonBreakableLines();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:640
// [-2] void setPageBreakPolicy(QTextFormat::PageBreakFlags)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *this_, QFlags<QTextFormat::PageBreakFlag> flags) {
  ((QTextBlockFormat*)this_)->setPageBreakPolicy(flags);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:642
// [4] QTextFormat::PageBreakFlags pageBreakPolicy()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QTextFormat::PageBreakFlags* C_ZNK16QTextBlockFormat15pageBreakPolicyEv(void *this_) {
  auto rv = ((QTextBlockFormat*)this_)->pageBreakPolicy();
return new QTextFormat::PageBreakFlags(rv);
}
#endif // QT_VERSION >= 0x040200


extern "C" Q_DECL_EXPORT
void C_ZN16QTextBlockFormatD2Ev(void *this_) {
  delete (QTextBlockFormat*)(this_);
}
//  main block end
