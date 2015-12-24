// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtGui/qtextformat.h
// dst-file: /src/gui/qtextformat.cxx
//

// header block begin =>
#include <qtextformat.h>

extern "C" {

  // proto:  void QTextLength::QTextLength(QTextLength::Type type, qreal value);
void _ZN11QTextLengthC1ENS_4TypeEd(void *that, QTextLength::Type type, double value)

{
  QTextLength *cthat = (QTextLength *)that;
  auto _o = new(that) QTextLength(type, value);
}

  // proto:  qreal QTextLength::value(qreal maximumLength);
qreal _ZNK11QTextLength5valueEd(void *that, double maximumLength)

{
  QTextLength *cthat = (QTextLength *)that;
  return cthat->value(maximumLength);
}

  // proto:  void QTextLength::QTextLength();
void _ZN11QTextLengthC1Ev(void *that)

{
  QTextLength *cthat = (QTextLength *)that;
  auto _o = new(that) QTextLength();
}

  // proto:  qreal QTextLength::rawValue();
qreal _ZNK11QTextLength8rawValueEv(void *that)

{
  QTextLength *cthat = (QTextLength *)that;
  return cthat->rawValue();
}

  // proto:  bool QTextImageFormat::isValid();
bool _ZNK16QTextImageFormat7isValidEv(void *that)

{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  return cthat->isValid();
}

  // proto:  qreal QTextImageFormat::width();
qreal _ZNK16QTextImageFormat5widthEv(void *that)

{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  return cthat->width();
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

  // proto:  void QTextImageFormat::setName(const QString & name);
void _ZN16QTextImageFormat7setNameERK7QString(void *that, const QString & name)

{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
   cthat->setName(name);
}

  // proto:  QString QTextImageFormat::name();
QString* _ZNK16QTextImageFormat4nameEv(void *that)

{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  auto recret = cthat->name();
  return new QString(recret);
}

  // proto:  qreal QTextImageFormat::height();
qreal _ZNK16QTextImageFormat6heightEv(void *that)

{
  QTextImageFormat *cthat = (QTextImageFormat *)that;
  return cthat->height();
}

  // proto:  void QTextFormat::setLayoutDirection(Qt::LayoutDirection direction);
void _ZN11QTextFormat18setLayoutDirectionEN2Qt15LayoutDirectionE(void *that, Qt::LayoutDirection direction)

{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setLayoutDirection(direction);
}

  // proto:  void QTextFormat::clearForeground();
void _ZN11QTextFormat15clearForegroundEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->clearForeground();
}

  // proto:  bool QTextFormat::isTableCellFormat();
bool _ZNK11QTextFormat17isTableCellFormatEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isTableCellFormat();
}

  // proto:  bool QTextFormat::isValid();
bool _ZNK11QTextFormat7isValidEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isValid();
}

  // proto:  void QTextFormat::setForeground(const QBrush & brush);
void _ZN11QTextFormat13setForegroundERK6QBrush(void *that, const QBrush & brush)

{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setForeground(brush);
}

  // proto:  bool QTextFormat::isListFormat();
bool _ZNK11QTextFormat12isListFormatEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isListFormat();
}

  // proto:  bool QTextFormat::isImageFormat();
bool _ZNK11QTextFormat13isImageFormatEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isImageFormat();
}

  // proto:  bool QTextFormat::isTableFormat();
bool _ZNK11QTextFormat13isTableFormatEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isTableFormat();
}

  // proto:  bool QTextFormat::isCharFormat();
bool _ZNK11QTextFormat12isCharFormatEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isCharFormat();
}

  // proto:  void QTextFormat::clearBackground();
void _ZN11QTextFormat15clearBackgroundEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->clearBackground();
}

  // proto:  bool QTextFormat::isBlockFormat();
bool _ZNK11QTextFormat13isBlockFormatEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isBlockFormat();
}

  // proto:  QBrush QTextFormat::background();
QBrush* _ZNK11QTextFormat10backgroundEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  auto recret = cthat->background();
  return new QBrush(recret);
}

  // proto:  QBrush QTextFormat::foreground();
QBrush* _ZNK11QTextFormat10foregroundEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  auto recret = cthat->foreground();
  return new QBrush(recret);
}

  // proto:  void QTextFormat::setObjectType(int type);
void _ZN11QTextFormat13setObjectTypeEi(void *that, int type)

{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setObjectType(type);
}

  // proto:  void QTextFormat::setBackground(const QBrush & brush);
void _ZN11QTextFormat13setBackgroundERK6QBrush(void *that, const QBrush & brush)

{
  QTextFormat *cthat = (QTextFormat *)that;
   cthat->setBackground(brush);
}

  // proto:  bool QTextFormat::isFrameFormat();
bool _ZNK11QTextFormat13isFrameFormatEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isFrameFormat();
}

  // proto:  bool QTextFormat::isEmpty();
bool _ZNK11QTextFormat7isEmptyEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->isEmpty();
}

  // proto:  int QTextFormat::objectType();
int _ZNK11QTextFormat10objectTypeEv(void *that)

{
  QTextFormat *cthat = (QTextFormat *)that;
  return cthat->objectType();
}

  // proto:  int QTextBlockFormat::indent();
int _ZNK16QTextBlockFormat6indentEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->indent();
}

  // proto:  void QTextBlockFormat::setTextIndent(qreal aindent);
void _ZN16QTextBlockFormat13setTextIndentEd(void *that, double aindent)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setTextIndent(aindent);
}

  // proto:  void QTextBlockFormat::setNonBreakableLines(bool b);
void _ZN16QTextBlockFormat20setNonBreakableLinesEb(void *that, bool b)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setNonBreakableLines(b);
}

  // proto:  void QTextBlockFormat::setIndent(int indent);
void _ZN16QTextBlockFormat9setIndentEi(void *that, int indent)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setIndent(indent);
}

  // proto:  qreal QTextBlockFormat::textIndent();
qreal _ZNK16QTextBlockFormat10textIndentEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->textIndent();
}

  // proto:  qreal QTextBlockFormat::lineHeight();
qreal _ZNK16QTextBlockFormat10lineHeightEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->lineHeight();
}

  // proto:  void QTextBlockFormat::setPageBreakPolicy(PageBreakFlags flags);
void _ZN16QTextBlockFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *that, QTextFormat::PageBreakFlag flags)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setPageBreakPolicy(flags);
}

  // proto:  qreal QTextBlockFormat::lineHeight(qreal scriptLineHeight, qreal scaling);
qreal _ZNK16QTextBlockFormat10lineHeightEdd(void *that, double scriptLineHeight, double scaling)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->lineHeight(scriptLineHeight, scaling);
}

  // proto:  void QTextBlockFormat::setRightMargin(qreal margin);
void _ZN16QTextBlockFormat14setRightMarginEd(void *that, double margin)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setRightMargin(margin);
}

  // proto:  qreal QTextBlockFormat::topMargin();
qreal _ZNK16QTextBlockFormat9topMarginEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->topMargin();
}

  // proto:  qreal QTextBlockFormat::rightMargin();
qreal _ZNK16QTextBlockFormat11rightMarginEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->rightMargin();
}

  // proto:  qreal QTextBlockFormat::bottomMargin();
qreal _ZNK16QTextBlockFormat12bottomMarginEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->bottomMargin();
}

  // proto:  void QTextBlockFormat::setTopMargin(qreal margin);
void _ZN16QTextBlockFormat12setTopMarginEd(void *that, double margin)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setTopMargin(margin);
}

  // proto:  qreal QTextBlockFormat::leftMargin();
qreal _ZNK16QTextBlockFormat10leftMarginEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->leftMargin();
}

  // proto:  void QTextBlockFormat::setAlignment(Qt::Alignment alignment);
void _ZN16QTextBlockFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setAlignment(alignment);
}

  // proto:  void QTextBlockFormat::setLineHeight(qreal height, int heightType);
void _ZN16QTextBlockFormat13setLineHeightEdi(void *that, double height, int heightType)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setLineHeight(height, heightType);
}

  // proto:  void QTextBlockFormat::setBottomMargin(qreal margin);
void _ZN16QTextBlockFormat15setBottomMarginEd(void *that, double margin)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setBottomMargin(margin);
}

  // proto:  int QTextBlockFormat::lineHeightType();
int _ZNK16QTextBlockFormat14lineHeightTypeEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->lineHeightType();
}

  // proto:  void QTextBlockFormat::setLeftMargin(qreal margin);
void _ZN16QTextBlockFormat13setLeftMarginEd(void *that, double margin)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
   cthat->setLeftMargin(margin);
}

  // proto:  bool QTextBlockFormat::isValid();
bool _ZNK16QTextBlockFormat7isValidEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->isValid();
}

  // proto:  bool QTextBlockFormat::nonBreakableLines();
bool _ZNK16QTextBlockFormat17nonBreakableLinesEv(void *that)

{
  QTextBlockFormat *cthat = (QTextBlockFormat *)that;
  return cthat->nonBreakableLines();
}

  // proto:  void QTextCharFormat::setFontCapitalization(QFont::Capitalization capitalization);
void _ZN15QTextCharFormat21setFontCapitalizationEN5QFont14CapitalizationE(void *that, QFont::Capitalization capitalization)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontCapitalization(capitalization);
}

  // proto:  void QTextCharFormat::setFontLetterSpacing(qreal spacing);
void _ZN15QTextCharFormat20setFontLetterSpacingEd(void *that, double spacing)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontLetterSpacing(spacing);
}

  // proto:  bool QTextCharFormat::isAnchor();
bool _ZNK15QTextCharFormat8isAnchorEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->isAnchor();
}

  // proto:  void QTextCharFormat::setFontHintingPreference(QFont::HintingPreference hintingPreference);
void _ZN15QTextCharFormat24setFontHintingPreferenceEN5QFont17HintingPreferenceE(void *that, QFont::HintingPreference hintingPreference)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontHintingPreference(hintingPreference);
}

  // proto:  bool QTextCharFormat::fontOverline();
bool _ZNK15QTextCharFormat12fontOverlineEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontOverline();
}

  // proto:  QString QTextCharFormat::fontFamily();
QString* _ZNK15QTextCharFormat10fontFamilyEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->fontFamily();
  return new QString(recret);
}

  // proto:  bool QTextCharFormat::fontStrikeOut();
bool _ZNK15QTextCharFormat13fontStrikeOutEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontStrikeOut();
}

  // proto:  void QTextCharFormat::setFontPointSize(qreal size);
void _ZN15QTextCharFormat16setFontPointSizeEd(void *that, double size)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontPointSize(size);
}

  // proto:  void QTextCharFormat::setUnderlineColor(const QColor & color);
void _ZN15QTextCharFormat17setUnderlineColorERK6QColor(void *that, const QColor & color)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setUnderlineColor(color);
}

  // proto:  int QTextCharFormat::tableCellRowSpan();
int _ZNK15QTextCharFormat16tableCellRowSpanEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->tableCellRowSpan();
}

  // proto:  void QTextCharFormat::setFontUnderline(bool underline);
void _ZN15QTextCharFormat16setFontUnderlineEb(void *that, bool underline)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontUnderline(underline);
}

  // proto:  bool QTextCharFormat::fontItalic();
bool _ZNK15QTextCharFormat10fontItalicEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontItalic();
}

  // proto:  void QTextCharFormat::setToolTip(const QString & tip);
void _ZN15QTextCharFormat10setToolTipERK7QString(void *that, const QString & tip)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setToolTip(tip);
}

  // proto:  void QTextCharFormat::setTextOutline(const QPen & pen);
void _ZN15QTextCharFormat14setTextOutlineERK4QPen(void *that, const QPen & pen)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTextOutline(pen);
}

  // proto:  void QTextCharFormat::setTableCellRowSpan(int tableCellRowSpan);
void _ZN15QTextCharFormat19setTableCellRowSpanEi(void *that, int tableCellRowSpan)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTableCellRowSpan(tableCellRowSpan);
}

  // proto:  void QTextCharFormat::setVerticalAlignment(QTextCharFormat::VerticalAlignment alignment);
void _ZN15QTextCharFormat20setVerticalAlignmentENS_17VerticalAlignmentE(void *that, QTextCharFormat::VerticalAlignment alignment)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setVerticalAlignment(alignment);
}

  // proto:  void QTextCharFormat::setAnchor(bool anchor);
void _ZN15QTextCharFormat9setAnchorEb(void *that, bool anchor)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchor(anchor);
}

  // proto:  qreal QTextCharFormat::fontPointSize();
qreal _ZNK15QTextCharFormat13fontPointSizeEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontPointSize();
}

  // proto:  void QTextCharFormat::setFontStrikeOut(bool strikeOut);
void _ZN15QTextCharFormat16setFontStrikeOutEb(void *that, bool strikeOut)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStrikeOut(strikeOut);
}

  // proto:  qreal QTextCharFormat::fontWordSpacing();
qreal _ZNK15QTextCharFormat15fontWordSpacingEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontWordSpacing();
}

  // proto:  QString QTextCharFormat::toolTip();
QString* _ZNK15QTextCharFormat7toolTipEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->toolTip();
  return new QString(recret);
}

  // proto:  void QTextCharFormat::setAnchorNames(const QStringList & names);
void _ZN15QTextCharFormat14setAnchorNamesERK11QStringList(void *that, const QStringList & names)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchorNames(names);
}

  // proto:  void QTextCharFormat::setFontFixedPitch(bool fixedPitch);
void _ZN15QTextCharFormat17setFontFixedPitchEb(void *that, bool fixedPitch)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontFixedPitch(fixedPitch);
}

  // proto:  void QTextCharFormat::setFontStyleStrategy(QFont::StyleStrategy strategy);
void _ZN15QTextCharFormat20setFontStyleStrategyEN5QFont13StyleStrategyE(void *that, QFont::StyleStrategy strategy)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStyleStrategy(strategy);
}

  // proto:  void QTextCharFormat::setFontItalic(bool italic);
void _ZN15QTextCharFormat13setFontItalicEb(void *that, bool italic)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontItalic(italic);
}

  // proto:  void QTextCharFormat::setFontFamily(const QString & family);
void _ZN15QTextCharFormat13setFontFamilyERK7QString(void *that, const QString & family)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontFamily(family);
}

  // proto:  bool QTextCharFormat::fontFixedPitch();
bool _ZNK15QTextCharFormat14fontFixedPitchEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontFixedPitch();
}

  // proto:  void QTextCharFormat::setAnchorHref(const QString & value);
void _ZN15QTextCharFormat13setAnchorHrefERK7QString(void *that, const QString & value)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchorHref(value);
}

  // proto:  int QTextCharFormat::fontStretch();
int _ZNK15QTextCharFormat11fontStretchEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontStretch();
}

  // proto:  void QTextCharFormat::setFontKerning(bool enable);
void _ZN15QTextCharFormat14setFontKerningEb(void *that, bool enable)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontKerning(enable);
}

  // proto:  int QTextCharFormat::tableCellColumnSpan();
int _ZNK15QTextCharFormat19tableCellColumnSpanEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->tableCellColumnSpan();
}

  // proto:  qreal QTextCharFormat::fontLetterSpacing();
qreal _ZNK15QTextCharFormat17fontLetterSpacingEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontLetterSpacing();
}

  // proto:  void QTextCharFormat::setFontLetterSpacingType(QFont::SpacingType letterSpacingType);
void _ZN15QTextCharFormat24setFontLetterSpacingTypeEN5QFont11SpacingTypeE(void *that, QFont::SpacingType letterSpacingType)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontLetterSpacingType(letterSpacingType);
}

  // proto:  QString QTextCharFormat::anchorHref();
QString* _ZNK15QTextCharFormat10anchorHrefEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->anchorHref();
  return new QString(recret);
}

  // proto:  void QTextCharFormat::setFontStretch(int factor);
void _ZN15QTextCharFormat14setFontStretchEi(void *that, int factor)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStretch(factor);
}

  // proto:  void QTextCharFormat::setAnchorName(const QString & name);
void _ZN15QTextCharFormat13setAnchorNameERK7QString(void *that, const QString & name)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setAnchorName(name);
}

  // proto:  bool QTextCharFormat::fontKerning();
bool _ZNK15QTextCharFormat11fontKerningEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontKerning();
}

  // proto:  void QTextCharFormat::setFontWeight(int weight);
void _ZN15QTextCharFormat13setFontWeightEi(void *that, int weight)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontWeight(weight);
}

  // proto:  void QTextCharFormat::setFontStyleHint(QFont::StyleHint hint, QFont::StyleStrategy strategy);
void _ZN15QTextCharFormat16setFontStyleHintEN5QFont9StyleHintENS0_13StyleStrategyE(void *that, QFont::StyleHint hint, QFont::StyleStrategy strategy)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontStyleHint(hint, strategy);
}

  // proto:  void QTextCharFormat::setFontWordSpacing(qreal spacing);
void _ZN15QTextCharFormat18setFontWordSpacingEd(void *that, double spacing)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontWordSpacing(spacing);
}

  // proto:  QColor QTextCharFormat::underlineColor();
QColor* _ZNK15QTextCharFormat14underlineColorEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->underlineColor();
  return new QColor(recret);
}

  // proto:  int QTextCharFormat::fontWeight();
int _ZNK15QTextCharFormat10fontWeightEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  return cthat->fontWeight();
}

  // proto:  void QTextCharFormat::setFontOverline(bool overline);
void _ZN15QTextCharFormat15setFontOverlineEb(void *that, bool overline)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setFontOverline(overline);
}

  // proto:  void QTextCharFormat::setTableCellColumnSpan(int tableCellColumnSpan);
void _ZN15QTextCharFormat22setTableCellColumnSpanEi(void *that, int tableCellColumnSpan)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
   cthat->setTableCellColumnSpan(tableCellColumnSpan);
}

  // proto:  QPen QTextCharFormat::textOutline();
QPen* _ZNK15QTextCharFormat11textOutlineEv(void *that)

{
  QTextCharFormat *cthat = (QTextCharFormat *)that;
  auto recret = cthat->textOutline();
  return new QPen(recret);
}

  // proto:  bool QTextTableFormat::isValid();
bool _ZNK16QTextTableFormat7isValidEv(void *that)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->isValid();
}

  // proto:  void QTextTableFormat::setColumnWidthConstraints(const QVector<QTextLength> & constraints);
void _ZN16QTextTableFormat25setColumnWidthConstraintsERK7QVectorI11QTextLengthE(void *that, const QVector<QTextLength> & constraints)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setColumnWidthConstraints(constraints);
}

  // proto:  int QTextTableFormat::headerRowCount();
int _ZNK16QTextTableFormat14headerRowCountEv(void *that)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->headerRowCount();
}

  // proto:  int QTextTableFormat::columns();
int _ZNK16QTextTableFormat7columnsEv(void *that)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->columns();
}

  // proto:  QVector<QTextLength> QTextTableFormat::columnWidthConstraints();
QVector<QTextLength> _ZNK16QTextTableFormat22columnWidthConstraintsEv(void *that)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->columnWidthConstraints();
}

  // proto:  void QTextTableFormat::setAlignment(Qt::Alignment alignment);
void _ZN16QTextTableFormat12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *that, Qt::Alignment alignment)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setAlignment(alignment);
}

  // proto:  void QTextTableFormat::setCellPadding(qreal padding);
void _ZN16QTextTableFormat14setCellPaddingEd(void *that, double padding)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setCellPadding(padding);
}

  // proto:  qreal QTextTableFormat::cellPadding();
qreal _ZNK16QTextTableFormat11cellPaddingEv(void *that)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->cellPadding();
}

  // proto:  void QTextTableFormat::setCellSpacing(qreal spacing);
void _ZN16QTextTableFormat14setCellSpacingEd(void *that, double spacing)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setCellSpacing(spacing);
}

  // proto:  void QTextTableFormat::setColumns(int columns);
void _ZN16QTextTableFormat10setColumnsEi(void *that, int columns)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setColumns(columns);
}

  // proto:  void QTextTableFormat::clearColumnWidthConstraints();
void _ZN16QTextTableFormat27clearColumnWidthConstraintsEv(void *that)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->clearColumnWidthConstraints();
}

  // proto:  void QTextTableFormat::setHeaderRowCount(int count);
void _ZN16QTextTableFormat17setHeaderRowCountEi(void *that, int count)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
   cthat->setHeaderRowCount(count);
}

  // proto:  qreal QTextTableFormat::cellSpacing();
qreal _ZNK16QTextTableFormat11cellSpacingEv(void *that)

{
  QTextTableFormat *cthat = (QTextTableFormat *)that;
  return cthat->cellSpacing();
}

  // proto:  void QTextTableCellFormat::setLeftPadding(qreal padding);
void _ZN20QTextTableCellFormat14setLeftPaddingEd(void *that, double padding)

{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
   cthat->setLeftPadding(padding);
}

  // proto:  bool QTextTableCellFormat::isValid();
bool _ZNK20QTextTableCellFormat7isValidEv(void *that)

{
  QTextTableCellFormat *cthat = (QTextTableCellFormat *)that;
  return cthat->isValid();
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

  // proto:  int QTextListFormat::indent();
int _ZNK15QTextListFormat6indentEv(void *that)

{
  QTextListFormat *cthat = (QTextListFormat *)that;
  return cthat->indent();
}

  // proto:  void QTextListFormat::setIndent(int indent);
void _ZN15QTextListFormat9setIndentEi(void *that, int indent)

{
  QTextListFormat *cthat = (QTextListFormat *)that;
   cthat->setIndent(indent);
}

  // proto:  QString QTextListFormat::numberSuffix();
QString* _ZNK15QTextListFormat12numberSuffixEv(void *that)

{
  QTextListFormat *cthat = (QTextListFormat *)that;
  auto recret = cthat->numberSuffix();
  return new QString(recret);
}

  // proto:  QString QTextListFormat::numberPrefix();
QString* _ZNK15QTextListFormat12numberPrefixEv(void *that)

{
  QTextListFormat *cthat = (QTextListFormat *)that;
  auto recret = cthat->numberPrefix();
  return new QString(recret);
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

  // proto:  void QTextFrameFormat::setBorderStyle(QTextFrameFormat::BorderStyle style);
void _ZN16QTextFrameFormat14setBorderStyleENS_11BorderStyleE(void *that, QTextFrameFormat::BorderStyle style)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBorderStyle(style);
}

  // proto:  void QTextFrameFormat::setHeight(qreal height);
void _ZN16QTextFrameFormat9setHeightEd(void *that, double height)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextFrameFormat::setBorderBrush(const QBrush & brush);
void _ZN16QTextFrameFormat14setBorderBrushERK6QBrush(void *that, const QBrush & brush)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBorderBrush(brush);
}

  // proto:  qreal QTextFrameFormat::margin();
qreal _ZNK16QTextFrameFormat6marginEv(void *that)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  return cthat->margin();
}

  // proto:  QBrush QTextFrameFormat::borderBrush();
QBrush* _ZNK16QTextFrameFormat11borderBrushEv(void *that)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  auto recret = cthat->borderBrush();
  return new QBrush(recret);
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

  // proto:  void QTextFrameFormat::setHeight(const QTextLength & height);
void _ZN16QTextFrameFormat9setHeightERK11QTextLength(void *that, const QTextLength & height)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setHeight(height);
}

  // proto:  void QTextFrameFormat::setWidth(const QTextLength & length);
void _ZN16QTextFrameFormat8setWidthERK11QTextLength(void *that, const QTextLength & length)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setWidth(length);
}

  // proto:  void QTextFrameFormat::setPosition(QTextFrameFormat::Position f);
void _ZN16QTextFrameFormat11setPositionENS_8PositionE(void *that, QTextFrameFormat::Position f)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setPosition(f);
}

  // proto:  void QTextFrameFormat::setBottomMargin(qreal margin);
void _ZN16QTextFrameFormat15setBottomMarginEd(void *that, double margin)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setBottomMargin(margin);
}

  // proto:  void QTextFrameFormat::setPageBreakPolicy(PageBreakFlags flags);
void _ZN16QTextFrameFormat18setPageBreakPolicyE6QFlagsIN11QTextFormat13PageBreakFlagEE(void *that, QTextFormat::PageBreakFlag flags)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setPageBreakPolicy(flags);
}

  // proto:  QTextLength QTextFrameFormat::height();
QTextLength* _ZNK16QTextFrameFormat6heightEv(void *that)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  auto recret = cthat->height();
  return new QTextLength(recret);
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

  // proto:  QTextLength QTextFrameFormat::width();
QTextLength* _ZNK16QTextFrameFormat5widthEv(void *that)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  auto recret = cthat->width();
  return new QTextLength(recret);
}

  // proto:  qreal QTextFrameFormat::padding();
qreal _ZNK16QTextFrameFormat7paddingEv(void *that)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  return cthat->padding();
}

  // proto:  void QTextFrameFormat::setLeftMargin(qreal margin);
void _ZN16QTextFrameFormat13setLeftMarginEd(void *that, double margin)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
   cthat->setLeftMargin(margin);
}

  // proto:  qreal QTextFrameFormat::border();
qreal _ZNK16QTextFrameFormat6borderEv(void *that)

{
  QTextFrameFormat *cthat = (QTextFrameFormat *)that;
  return cthat->border();
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

