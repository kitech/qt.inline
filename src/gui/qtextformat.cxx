// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qtextformat.h
// dst-file: /src/gui/qtextformat.cxx
//

// header block begin =>
#include <qtextformat.h>

extern "C" {

// QTextLength(enum QTextLength::Type, qreal)
QTextLength* dector_ZN11QTextLengthC1ENS_4TypeEd(QTextLength::Type type, double value)
{
  // static_assert(sizeof(QTextLength) == 32, "tyszerr");
  QTextLength* rthis = new QTextLength(type, value);
  return rthis;
}

  // proto:  void QTextLength::QTextLength(QTextLength::Type type, qreal value);
void _ZN11QTextLengthC1ENS_4TypeEd(void *that, QTextLength::Type type, double value)
{
  QTextLength *cthat = (QTextLength *)that;
  auto _o = new(that) QTextLength(type, value);
}

// QTextImageFormat()
QTextImageFormat* dector_ZN16QTextImageFormatC1Ev()
{
  // static_assert(sizeof(QTextImageFormat) == 32, "tyszerr");
  QTextImageFormat* rthis = new QTextImageFormat();
  return rthis;
}

  // proto:  void QTextImageFormat::setName(const QString & name);
void _ZN16QTextImageFormat7setNameERK7QString(void *that, const QString & name)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
   cthat->setName(name);
}

  // proto:  void QTextImageFormat::setHeight(qreal height);
void _ZN16QTextImageFormat9setHeightEd(void *that, double height)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextImageFormat::setWidth(qreal width);
void _ZN16QTextImageFormat8setWidthEd(void *that, double width)
{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
   cthat->setWidth(width);
}

// ~QTextFormat()
void dedtor_ZN11QTextFormatD0Ev(QTextFormat* that)
{
  QTextFormat* rthis = (QTextFormat*)that;
  delete rthis;
}

// QTextFormat(const class QTextFormat &)
QTextFormat* dector_ZN11QTextFormatC1ERKS_(const QTextFormat & rhs)
{
  // static_assert(sizeof(QTextFormat) == 32, "tyszerr");
  QTextFormat* rthis = new QTextFormat(rhs);
  return rthis;
}

// QTextFormat()
QTextFormat* dector_ZN11QTextFormatC1Ev()
{
  // static_assert(sizeof(QTextFormat) == 32, "tyszerr");
  QTextFormat* rthis = new QTextFormat();
  return rthis;
}

// QTextFormat(int)
QTextFormat* dector_ZN11QTextFormatC1Ei(int type)
{
  // static_assert(sizeof(QTextFormat) == 32, "tyszerr");
  QTextFormat* rthis = new QTextFormat(type);
  return rthis;
}

  // proto:  void QTextFormat::setObjectType(int type);
void _ZN11QTextFormat13setObjectTypeEi(void *that, int type)
{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setObjectType(type);
}

// QTextBlockFormat()
QTextBlockFormat* dector_ZN16QTextBlockFormatC1Ev()
{
  // static_assert(sizeof(QTextBlockFormat) == 32, "tyszerr");
  QTextBlockFormat* rthis = new QTextBlockFormat();
  return rthis;
}

  // proto:  void QTextBlockFormat::setIndent(int indent);
void _ZN16QTextBlockFormat9setIndentEi(void *that, int indent)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setIndent(indent);
}

  // proto:  void QTextBlockFormat::setAlignment(Qt::Alignment alignment);
void _ZN16QTextBlockFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setAlignment(alignment);
}

  // proto:  qreal QTextBlockFormat::lineHeight(qreal scriptLineHeight, qreal scaling);
qreal _ZNK16QTextBlockFormat10lineHeightEdd(void *that, double scriptLineHeight, double scaling)
{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->lineHeight(scriptLineHeight, scaling);
}

// QTextCharFormat()
QTextCharFormat* dector_ZN15QTextCharFormatC1Ev()
{
  // static_assert(sizeof(QTextCharFormat) == 32, "tyszerr");
  QTextCharFormat* rthis = new QTextCharFormat();
  return rthis;
}

  // proto:  void QTextCharFormat::setTableCellColumnSpan(int tableCellColumnSpan);
void _ZN15QTextCharFormat22setTableCellColumnSpanEi(void *that, int tableCellColumnSpan)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTableCellColumnSpan(tableCellColumnSpan);
}

  // proto:  void QTextCharFormat::setTableCellRowSpan(int tableCellRowSpan);
void _ZN15QTextCharFormat19setTableCellRowSpanEi(void *that, int tableCellRowSpan)
{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTableCellRowSpan(tableCellRowSpan);
}

// QTextTableFormat()
QTextTableFormat* dector_ZN16QTextTableFormatC1Ev()
{
  // static_assert(sizeof(QTextTableFormat) == 32, "tyszerr");
  QTextTableFormat* rthis = new QTextTableFormat();
  return rthis;
}

  // proto:  void QTextTableFormat::setAlignment(Qt::Alignment alignment);
void _ZN16QTextTableFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setAlignment(alignment);
}

  // proto:  void QTextTableFormat::setColumns(int columns);
void _ZN16QTextTableFormat10setColumnsEi(void *that, int columns)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setColumns(columns);
}

  // proto:  void QTextTableFormat::setCellPadding(qreal padding);
void _ZN16QTextTableFormat14setCellPaddingEd(void *that, double padding)
{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setCellPadding(padding);
}

// QTextTableCellFormat()
QTextTableCellFormat* dector_ZN20QTextTableCellFormatC1Ev()
{
  // static_assert(sizeof(QTextTableCellFormat) == 32, "tyszerr");
  QTextTableCellFormat* rthis = new QTextTableCellFormat();
  return rthis;
}

  // proto:  void QTextTableCellFormat::setLeftPadding(qreal padding);
void _ZN20QTextTableCellFormat14setLeftPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setLeftPadding(padding);
}

  // proto:  void QTextTableCellFormat::setTopPadding(qreal padding);
void _ZN20QTextTableCellFormat13setTopPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setTopPadding(padding);
}

  // proto:  qreal QTextTableCellFormat::leftPadding();
qreal _ZNK20QTextTableCellFormat11leftPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->leftPadding();
}

  // proto:  void QTextTableCellFormat::setPadding(qreal padding);
void _ZN20QTextTableCellFormat10setPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setPadding(padding);
}

  // proto:  qreal QTextTableCellFormat::topPadding();
qreal _ZNK20QTextTableCellFormat10topPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->topPadding();
}

  // proto:  qreal QTextTableCellFormat::rightPadding();
qreal _ZNK20QTextTableCellFormat12rightPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->rightPadding();
}

  // proto:  qreal QTextTableCellFormat::bottomPadding();
qreal _ZNK20QTextTableCellFormat13bottomPaddingEv(void *that)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->bottomPadding();
}

  // proto:  void QTextTableCellFormat::setRightPadding(qreal padding);
void _ZN20QTextTableCellFormat15setRightPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setRightPadding(padding);
}

  // proto:  void QTextTableCellFormat::setBottomPadding(qreal padding);
void _ZN20QTextTableCellFormat16setBottomPaddingEd(void *that, double padding)
{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setBottomPadding(padding);
}

// QTextListFormat()
QTextListFormat* dector_ZN15QTextListFormatC1Ev()
{
  // static_assert(sizeof(QTextListFormat) == 32, "tyszerr");
  QTextListFormat* rthis = new QTextListFormat();
  return rthis;
}

  // proto:  void QTextListFormat::setIndent(int indent);
void _ZN15QTextListFormat9setIndentEi(void *that, int indent)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setIndent(indent);
}

  // proto:  void QTextListFormat::setNumberSuffix(const QString & numberSuffix);
void _ZN15QTextListFormat15setNumberSuffixERK7QString(void *that, const QString & numberSuffix)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setNumberSuffix(numberSuffix);
}

  // proto:  void QTextListFormat::setNumberPrefix(const QString & numberPrefix);
void _ZN15QTextListFormat15setNumberPrefixERK7QString(void *that, const QString & numberPrefix)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setNumberPrefix(numberPrefix);
}

  // proto:  void QTextListFormat::setStyle(QTextListFormat::Style style);
void _ZN15QTextListFormat8setStyleENS_5StyleE(void *that, QTextListFormat::Style style)
{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setStyle(style);
}

// QTextFrameFormat()
QTextFrameFormat* dector_ZN16QTextFrameFormatC1Ev()
{
  // static_assert(sizeof(QTextFrameFormat) == 32, "tyszerr");
  QTextFrameFormat* rthis = new QTextFrameFormat();
  return rthis;
}

  // proto:  void QTextFrameFormat::setRightMargin(qreal margin);
void _ZN16QTextFrameFormat14setRightMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setRightMargin(margin);
}

  // proto:  void QTextFrameFormat::setBorder(qreal border);
void _ZN16QTextFrameFormat9setBorderEd(void *that, double border)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBorder(border);
}

  // proto:  void QTextFrameFormat::setBottomMargin(qreal margin);
void _ZN16QTextFrameFormat15setBottomMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBottomMargin(margin);
}

  // proto:  void QTextFrameFormat::setHeight(const QTextLength & height);
void _ZN16QTextFrameFormat9setHeightERK11QTextLength(void *that, const QTextLength & height)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextFrameFormat::setLeftMargin(qreal margin);
void _ZN16QTextFrameFormat13setLeftMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setLeftMargin(margin);
}

  // proto:  void QTextFrameFormat::setHeight(qreal height);
void _ZN16QTextFrameFormat9setHeightEd(void *that, double height)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextFrameFormat::setWidth(qreal width);
void _ZN16QTextFrameFormat8setWidthEd(void *that, double width)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setWidth(width);
}

  // proto:  void QTextFrameFormat::setPadding(qreal padding);
void _ZN16QTextFrameFormat10setPaddingEd(void *that, double padding)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setPadding(padding);
}

  // proto:  void QTextFrameFormat::setTopMargin(qreal margin);
void _ZN16QTextFrameFormat12setTopMarginEd(void *that, double margin)
{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setTopMargin(margin);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

