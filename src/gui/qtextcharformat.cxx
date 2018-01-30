//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

// QTextCharFormat is pure virtual: false
// QTextCharFormat has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:557
// [-2] void QTextCharFormat(const class QTextFormat &)
extern "C"
void* callback_ZN15QTextCharFormatC1ERK11QTextFormat = 0;
extern "C" void set_callback_ZN15QTextCharFormatC1ERK11QTextFormat(void*cbfn)
{ callback_ZN15QTextCharFormatC1ERK11QTextFormat = cbfn; }

class MyQTextCharFormat : public QTextCharFormat {
public:
  virtual ~MyQTextCharFormat() {}
// void QTextCharFormat()
MyQTextCharFormat() : QTextCharFormat() {}
// void QTextCharFormat(const class QTextFormat &)
MyQTextCharFormat(const QTextFormat & fmt) : QTextCharFormat(fmt) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:412
// [-2] void QTextCharFormat()
extern "C"
void* C_ZN15QTextCharFormatC2Ev() {
  return  new QTextCharFormat();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:414
// [1] bool isValid()
extern "C"
bool C_ZNK15QTextCharFormat7isValidEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:420
// [-2] void setFont(const class QFont &, enum QTextCharFormat::FontPropertiesInheritanceBehavior)
extern "C"
void C_ZN15QTextCharFormat7setFontERK5QFontNS_33FontPropertiesInheritanceBehaviorE(void *this_, const QFont & font, QTextCharFormat::FontPropertiesInheritanceBehavior behavior) {
  ((QTextCharFormat*)this_)->setFont(font, behavior);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:421
// [-2] void setFont(const class QFont &)
extern "C"
void C_ZN15QTextCharFormat7setFontERK5QFont(void *this_, const QFont & font) {
  ((QTextCharFormat*)this_)->setFont(font);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:422
// [16] QFont font()
extern "C"
void* C_ZNK15QTextCharFormat4fontEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->font();
return new QFont(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:424
// [-2] void setFontFamily(const class QString &)
extern "C"
void C_ZN15QTextCharFormat13setFontFamilyERK7QString(void *this_, const QString & family) {
  ((QTextCharFormat*)this_)->setFontFamily(family);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:426
// [8] QString fontFamily()
extern "C"
void* C_ZNK15QTextCharFormat10fontFamilyEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->fontFamily();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:429
// [-2] void setFontPointSize(qreal)
extern "C"
void C_ZN15QTextCharFormat16setFontPointSizeEd(void *this_, qreal size) {
  ((QTextCharFormat*)this_)->setFontPointSize(size);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:431
// [8] qreal fontPointSize()
extern "C"
qreal C_ZNK15QTextCharFormat13fontPointSizeEv(void *this_) {
  return (qreal)((QTextCharFormat*)this_)->fontPointSize();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:434
// [-2] void setFontWeight(int)
extern "C"
void C_ZN15QTextCharFormat13setFontWeightEi(void *this_, int weight) {
  ((QTextCharFormat*)this_)->setFontWeight(weight);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:436
// [4] int fontWeight()
extern "C"
int C_ZNK15QTextCharFormat10fontWeightEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->fontWeight();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:438
// [-2] void setFontItalic(_Bool)
extern "C"
void C_ZN15QTextCharFormat13setFontItalicEb(void *this_, bool italic) {
  ((QTextCharFormat*)this_)->setFontItalic(italic);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:440
// [1] bool fontItalic()
extern "C"
bool C_ZNK15QTextCharFormat10fontItalicEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontItalic();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:442
// [-2] void setFontCapitalization(class QFont::Capitalization)
extern "C"
void C_ZN15QTextCharFormat21setFontCapitalizationEN5QFont14CapitalizationE(void *this_, QFont::Capitalization capitalization) {
  ((QTextCharFormat*)this_)->setFontCapitalization(capitalization);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:444
// [4] QFont::Capitalization fontCapitalization()
extern "C"
QFont::Capitalization C_ZNK15QTextCharFormat18fontCapitalizationEv(void *this_) {
  return (QFont::Capitalization)((QTextCharFormat*)this_)->fontCapitalization();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:446
// [-2] void setFontLetterSpacingType(class QFont::SpacingType)
extern "C"
void C_ZN15QTextCharFormat24setFontLetterSpacingTypeEN5QFont11SpacingTypeE(void *this_, QFont::SpacingType letterSpacingType) {
  ((QTextCharFormat*)this_)->setFontLetterSpacingType(letterSpacingType);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:448
// [4] QFont::SpacingType fontLetterSpacingType()
extern "C"
QFont::SpacingType C_ZNK15QTextCharFormat21fontLetterSpacingTypeEv(void *this_) {
  return (QFont::SpacingType)((QTextCharFormat*)this_)->fontLetterSpacingType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:450
// [-2] void setFontLetterSpacing(qreal)
extern "C"
void C_ZN15QTextCharFormat20setFontLetterSpacingEd(void *this_, qreal spacing) {
  ((QTextCharFormat*)this_)->setFontLetterSpacing(spacing);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:452
// [8] qreal fontLetterSpacing()
extern "C"
qreal C_ZNK15QTextCharFormat17fontLetterSpacingEv(void *this_) {
  return (qreal)((QTextCharFormat*)this_)->fontLetterSpacing();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:454
// [-2] void setFontWordSpacing(qreal)
extern "C"
void C_ZN15QTextCharFormat18setFontWordSpacingEd(void *this_, qreal spacing) {
  ((QTextCharFormat*)this_)->setFontWordSpacing(spacing);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:456
// [8] qreal fontWordSpacing()
extern "C"
qreal C_ZNK15QTextCharFormat15fontWordSpacingEv(void *this_) {
  return (qreal)((QTextCharFormat*)this_)->fontWordSpacing();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:459
// [-2] void setFontUnderline(_Bool)
extern "C"
void C_ZN15QTextCharFormat16setFontUnderlineEb(void *this_, bool underline) {
  ((QTextCharFormat*)this_)->setFontUnderline(underline);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:461
// [1] bool fontUnderline()
extern "C"
bool C_ZNK15QTextCharFormat13fontUnderlineEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontUnderline();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:463
// [-2] void setFontOverline(_Bool)
extern "C"
void C_ZN15QTextCharFormat15setFontOverlineEb(void *this_, bool overline) {
  ((QTextCharFormat*)this_)->setFontOverline(overline);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:465
// [1] bool fontOverline()
extern "C"
bool C_ZNK15QTextCharFormat12fontOverlineEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontOverline();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:468
// [-2] void setFontStrikeOut(_Bool)
extern "C"
void C_ZN15QTextCharFormat16setFontStrikeOutEb(void *this_, bool strikeOut) {
  ((QTextCharFormat*)this_)->setFontStrikeOut(strikeOut);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:470
// [1] bool fontStrikeOut()
extern "C"
bool C_ZNK15QTextCharFormat13fontStrikeOutEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontStrikeOut();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:473
// [-2] void setUnderlineColor(const class QColor &)
extern "C"
void C_ZN15QTextCharFormat17setUnderlineColorERK6QColor(void *this_, const QColor & color) {
  ((QTextCharFormat*)this_)->setUnderlineColor(color);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:475
// [16] QColor underlineColor()
extern "C"
void* C_ZNK15QTextCharFormat14underlineColorEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->underlineColor();
return new QColor(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:478
// [-2] void setFontFixedPitch(_Bool)
extern "C"
void C_ZN15QTextCharFormat17setFontFixedPitchEb(void *this_, bool fixedPitch) {
  ((QTextCharFormat*)this_)->setFontFixedPitch(fixedPitch);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:480
// [1] bool fontFixedPitch()
extern "C"
bool C_ZNK15QTextCharFormat14fontFixedPitchEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontFixedPitch();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:483
// [-2] void setFontStretch(int)
extern "C"
void C_ZN15QTextCharFormat14setFontStretchEi(void *this_, int factor) {
  ((QTextCharFormat*)this_)->setFontStretch(factor);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:485
// [4] int fontStretch()
extern "C"
int C_ZNK15QTextCharFormat11fontStretchEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->fontStretch();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:488
// [-2] void setFontStyleHint(class QFont::StyleHint, class QFont::StyleStrategy)
extern "C"
void C_ZN15QTextCharFormat16setFontStyleHintEN5QFont9StyleHintENS0_13StyleStrategyE(void *this_, QFont::StyleHint hint, QFont::StyleStrategy strategy) {
  ((QTextCharFormat*)this_)->setFontStyleHint(hint, strategy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:490
// [-2] void setFontStyleStrategy(class QFont::StyleStrategy)
extern "C"
void C_ZN15QTextCharFormat20setFontStyleStrategyEN5QFont13StyleStrategyE(void *this_, QFont::StyleStrategy strategy) {
  ((QTextCharFormat*)this_)->setFontStyleStrategy(strategy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:492
// [4] QFont::StyleHint fontStyleHint()
extern "C"
QFont::StyleHint C_ZNK15QTextCharFormat13fontStyleHintEv(void *this_) {
  return (QFont::StyleHint)((QTextCharFormat*)this_)->fontStyleHint();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:494
// [4] QFont::StyleStrategy fontStyleStrategy()
extern "C"
QFont::StyleStrategy C_ZNK15QTextCharFormat17fontStyleStrategyEv(void *this_) {
  return (QFont::StyleStrategy)((QTextCharFormat*)this_)->fontStyleStrategy();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:497
// [-2] void setFontHintingPreference(class QFont::HintingPreference)
extern "C"
void C_ZN15QTextCharFormat24setFontHintingPreferenceEN5QFont17HintingPreferenceE(void *this_, QFont::HintingPreference hintingPreference) {
  ((QTextCharFormat*)this_)->setFontHintingPreference(hintingPreference);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:502
// [4] QFont::HintingPreference fontHintingPreference()
extern "C"
QFont::HintingPreference C_ZNK15QTextCharFormat21fontHintingPreferenceEv(void *this_) {
  return (QFont::HintingPreference)((QTextCharFormat*)this_)->fontHintingPreference();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:507
// [-2] void setFontKerning(_Bool)
extern "C"
void C_ZN15QTextCharFormat14setFontKerningEb(void *this_, bool enable) {
  ((QTextCharFormat*)this_)->setFontKerning(enable);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:509
// [1] bool fontKerning()
extern "C"
bool C_ZNK15QTextCharFormat11fontKerningEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontKerning();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:512
// [-2] void setUnderlineStyle(enum QTextCharFormat::UnderlineStyle)
extern "C"
void C_ZN15QTextCharFormat17setUnderlineStyleENS_14UnderlineStyleE(void *this_, QTextCharFormat::UnderlineStyle style) {
  ((QTextCharFormat*)this_)->setUnderlineStyle(style);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:513
// [4] QTextCharFormat::UnderlineStyle underlineStyle()
extern "C"
QTextCharFormat::UnderlineStyle C_ZNK15QTextCharFormat14underlineStyleEv(void *this_) {
  return (QTextCharFormat::UnderlineStyle)((QTextCharFormat*)this_)->underlineStyle();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:516
// [-2] void setVerticalAlignment(enum QTextCharFormat::VerticalAlignment)
extern "C"
void C_ZN15QTextCharFormat20setVerticalAlignmentENS_17VerticalAlignmentE(void *this_, QTextCharFormat::VerticalAlignment alignment) {
  ((QTextCharFormat*)this_)->setVerticalAlignment(alignment);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:518
// [4] QTextCharFormat::VerticalAlignment verticalAlignment()
extern "C"
QTextCharFormat::VerticalAlignment C_ZNK15QTextCharFormat17verticalAlignmentEv(void *this_) {
  return (QTextCharFormat::VerticalAlignment)((QTextCharFormat*)this_)->verticalAlignment();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:521
// [-2] void setTextOutline(const class QPen &)
extern "C"
void C_ZN15QTextCharFormat14setTextOutlineERK4QPen(void *this_, const QPen & pen) {
  ((QTextCharFormat*)this_)->setTextOutline(pen);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:523
// [8] QPen textOutline()
extern "C"
void* C_ZNK15QTextCharFormat11textOutlineEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->textOutline();
return new QPen(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:526
// [-2] void setToolTip(const class QString &)
extern "C"
void C_ZN15QTextCharFormat10setToolTipERK7QString(void *this_, const QString & tip) {
  ((QTextCharFormat*)this_)->setToolTip(tip);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:528
// [8] QString toolTip()
extern "C"
void* C_ZNK15QTextCharFormat7toolTipEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->toolTip();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:531
// [-2] void setAnchor(_Bool)
extern "C"
void C_ZN15QTextCharFormat9setAnchorEb(void *this_, bool anchor) {
  ((QTextCharFormat*)this_)->setAnchor(anchor);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:533
// [1] bool isAnchor()
extern "C"
bool C_ZNK15QTextCharFormat8isAnchorEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->isAnchor();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:536
// [-2] void setAnchorHref(const class QString &)
extern "C"
void C_ZN15QTextCharFormat13setAnchorHrefERK7QString(void *this_, const QString & value) {
  ((QTextCharFormat*)this_)->setAnchorHref(value);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:538
// [8] QString anchorHref()
extern "C"
void* C_ZNK15QTextCharFormat10anchorHrefEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->anchorHref();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:541
// [-2] void setAnchorName(const class QString &)
extern "C"
void C_ZN15QTextCharFormat13setAnchorNameERK7QString(void *this_, const QString & name) {
  ((QTextCharFormat*)this_)->setAnchorName(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:543
// [8] QString anchorName()
extern "C"
void* C_ZNK15QTextCharFormat10anchorNameEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->anchorName();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:545
// [-2] void setAnchorNames(const class QStringList &)
extern "C"
void C_ZN15QTextCharFormat14setAnchorNamesERK11QStringList(void *this_, const QStringList & names) {
  ((QTextCharFormat*)this_)->setAnchorNames(names);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:549
// [-2] void setTableCellRowSpan(int)
extern "C"
void C_ZN15QTextCharFormat19setTableCellRowSpanEi(void *this_, int tableCellRowSpan) {
  ((QTextCharFormat*)this_)->setTableCellRowSpan(tableCellRowSpan);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:550
// [4] int tableCellRowSpan()
extern "C"
int C_ZNK15QTextCharFormat16tableCellRowSpanEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->tableCellRowSpan();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:552
// [-2] void setTableCellColumnSpan(int)
extern "C"
void C_ZN15QTextCharFormat22setTableCellColumnSpanEi(void *this_, int tableCellColumnSpan) {
  ((QTextCharFormat*)this_)->setTableCellColumnSpan(tableCellColumnSpan);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:553
// [4] int tableCellColumnSpan()
extern "C"
int C_ZNK15QTextCharFormat19tableCellColumnSpanEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->tableCellColumnSpan();
}
//  main block end
