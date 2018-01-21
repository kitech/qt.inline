//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextformat.h:411
// void QTextCharFormat()
extern "C"
void* C_ZN15QTextCharFormatC1Ev() {
  return new QTextCharFormat();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:413
// bool isValid()
extern "C"
void C_ZNK15QTextCharFormat7isValidEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->isValid();
}
// /usr/include/qt/QtGui/qtextformat.h:419
// void setFont(const class QFont &, enum QTextCharFormat::FontPropertiesInheritanceBehavior)
extern "C"
void C_ZN15QTextCharFormat7setFontERK5QFontNS_33FontPropertiesInheritanceBehaviorE(void *this_, const QFont & font, QTextCharFormat::FontPropertiesInheritanceBehavior behavior) {
  ((QTextCharFormat*)this_)->setFont(font, behavior);
}
// /usr/include/qt/QtGui/qtextformat.h:420
// void setFont(const class QFont &)
extern "C"
void C_ZN15QTextCharFormat7setFontERK5QFont(void *this_, const QFont & font) {
  ((QTextCharFormat*)this_)->setFont(font);
}
// /usr/include/qt/QtGui/qtextformat.h:421
// QFont font()
extern "C"
void C_ZNK15QTextCharFormat4fontEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->font();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:423
// void setFontFamily(const class QString &)
extern "C"
void C_ZN15QTextCharFormat13setFontFamilyERK7QString(void *this_, const QString & family) {
  ((QTextCharFormat*)this_)->setFontFamily(family);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:425
// QString fontFamily()
extern "C"
void C_ZNK15QTextCharFormat10fontFamilyEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontFamily();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:428
// void setFontPointSize(qreal)
extern "C"
void C_ZN15QTextCharFormat16setFontPointSizeEd(void *this_, qreal size) {
  ((QTextCharFormat*)this_)->setFontPointSize(size);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:430
// qreal fontPointSize()
extern "C"
void C_ZNK15QTextCharFormat13fontPointSizeEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontPointSize();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:433
// void setFontWeight(int)
extern "C"
void C_ZN15QTextCharFormat13setFontWeightEi(void *this_, int weight) {
  ((QTextCharFormat*)this_)->setFontWeight(weight);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:435
// int fontWeight()
extern "C"
void C_ZNK15QTextCharFormat10fontWeightEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontWeight();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:437
// void setFontItalic(_Bool)
extern "C"
void C_ZN15QTextCharFormat13setFontItalicEb(void *this_, bool italic) {
  ((QTextCharFormat*)this_)->setFontItalic(italic);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:439
// bool fontItalic()
extern "C"
void C_ZNK15QTextCharFormat10fontItalicEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontItalic();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:441
// void setFontCapitalization(class QFont::Capitalization)
extern "C"
void C_ZN15QTextCharFormat21setFontCapitalizationEN5QFont14CapitalizationE(void *this_, QFont::Capitalization capitalization) {
  ((QTextCharFormat*)this_)->setFontCapitalization(capitalization);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:443
// QFont::Capitalization fontCapitalization()
extern "C"
void C_ZNK15QTextCharFormat18fontCapitalizationEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontCapitalization();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:445
// void setFontLetterSpacingType(class QFont::SpacingType)
extern "C"
void C_ZN15QTextCharFormat24setFontLetterSpacingTypeEN5QFont11SpacingTypeE(void *this_, QFont::SpacingType letterSpacingType) {
  ((QTextCharFormat*)this_)->setFontLetterSpacingType(letterSpacingType);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:447
// QFont::SpacingType fontLetterSpacingType()
extern "C"
void C_ZNK15QTextCharFormat21fontLetterSpacingTypeEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontLetterSpacingType();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:449
// void setFontLetterSpacing(qreal)
extern "C"
void C_ZN15QTextCharFormat20setFontLetterSpacingEd(void *this_, qreal spacing) {
  ((QTextCharFormat*)this_)->setFontLetterSpacing(spacing);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:451
// qreal fontLetterSpacing()
extern "C"
void C_ZNK15QTextCharFormat17fontLetterSpacingEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontLetterSpacing();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:453
// void setFontWordSpacing(qreal)
extern "C"
void C_ZN15QTextCharFormat18setFontWordSpacingEd(void *this_, qreal spacing) {
  ((QTextCharFormat*)this_)->setFontWordSpacing(spacing);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:455
// qreal fontWordSpacing()
extern "C"
void C_ZNK15QTextCharFormat15fontWordSpacingEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontWordSpacing();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:458
// void setFontUnderline(_Bool)
extern "C"
void C_ZN15QTextCharFormat16setFontUnderlineEb(void *this_, bool underline) {
  ((QTextCharFormat*)this_)->setFontUnderline(underline);
}
// /usr/include/qt/QtGui/qtextformat.h:460
// bool fontUnderline()
extern "C"
void C_ZNK15QTextCharFormat13fontUnderlineEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontUnderline();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:462
// void setFontOverline(_Bool)
extern "C"
void C_ZN15QTextCharFormat15setFontOverlineEb(void *this_, bool overline) {
  ((QTextCharFormat*)this_)->setFontOverline(overline);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:464
// bool fontOverline()
extern "C"
void C_ZNK15QTextCharFormat12fontOverlineEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontOverline();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:467
// void setFontStrikeOut(_Bool)
extern "C"
void C_ZN15QTextCharFormat16setFontStrikeOutEb(void *this_, bool strikeOut) {
  ((QTextCharFormat*)this_)->setFontStrikeOut(strikeOut);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:469
// bool fontStrikeOut()
extern "C"
void C_ZNK15QTextCharFormat13fontStrikeOutEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontStrikeOut();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:472
// void setUnderlineColor(const class QColor &)
extern "C"
void C_ZN15QTextCharFormat17setUnderlineColorERK6QColor(void *this_, const QColor & color) {
  ((QTextCharFormat*)this_)->setUnderlineColor(color);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:474
// QColor underlineColor()
extern "C"
void C_ZNK15QTextCharFormat14underlineColorEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->underlineColor();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:477
// void setFontFixedPitch(_Bool)
extern "C"
void C_ZN15QTextCharFormat17setFontFixedPitchEb(void *this_, bool fixedPitch) {
  ((QTextCharFormat*)this_)->setFontFixedPitch(fixedPitch);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:479
// bool fontFixedPitch()
extern "C"
void C_ZNK15QTextCharFormat14fontFixedPitchEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontFixedPitch();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:482
// void setFontStretch(int)
extern "C"
void C_ZN15QTextCharFormat14setFontStretchEi(void *this_, int factor) {
  ((QTextCharFormat*)this_)->setFontStretch(factor);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:484
// int fontStretch()
extern "C"
void C_ZNK15QTextCharFormat11fontStretchEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontStretch();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:487
// void setFontStyleHint(class QFont::StyleHint, class QFont::StyleStrategy)
extern "C"
void C_ZN15QTextCharFormat16setFontStyleHintEN5QFont9StyleHintENS0_13StyleStrategyE(void *this_, QFont::StyleHint hint, QFont::StyleStrategy strategy) {
  ((QTextCharFormat*)this_)->setFontStyleHint(hint, strategy);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:489
// void setFontStyleStrategy(class QFont::StyleStrategy)
extern "C"
void C_ZN15QTextCharFormat20setFontStyleStrategyEN5QFont13StyleStrategyE(void *this_, QFont::StyleStrategy strategy) {
  ((QTextCharFormat*)this_)->setFontStyleStrategy(strategy);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:491
// QFont::StyleHint fontStyleHint()
extern "C"
void C_ZNK15QTextCharFormat13fontStyleHintEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontStyleHint();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:493
// QFont::StyleStrategy fontStyleStrategy()
extern "C"
void C_ZNK15QTextCharFormat17fontStyleStrategyEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontStyleStrategy();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:496
// void setFontHintingPreference(class QFont::HintingPreference)
extern "C"
void C_ZN15QTextCharFormat24setFontHintingPreferenceEN5QFont17HintingPreferenceE(void *this_, QFont::HintingPreference hintingPreference) {
  ((QTextCharFormat*)this_)->setFontHintingPreference(hintingPreference);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:501
// QFont::HintingPreference fontHintingPreference()
extern "C"
void C_ZNK15QTextCharFormat21fontHintingPreferenceEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontHintingPreference();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:506
// void setFontKerning(_Bool)
extern "C"
void C_ZN15QTextCharFormat14setFontKerningEb(void *this_, bool enable) {
  ((QTextCharFormat*)this_)->setFontKerning(enable);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:508
// bool fontKerning()
extern "C"
void C_ZNK15QTextCharFormat11fontKerningEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->fontKerning();
}
// /usr/include/qt/QtGui/qtextformat.h:511
// void setUnderlineStyle(enum QTextCharFormat::UnderlineStyle)
extern "C"
void C_ZN15QTextCharFormat17setUnderlineStyleENS_14UnderlineStyleE(void *this_, QTextCharFormat::UnderlineStyle style) {
  ((QTextCharFormat*)this_)->setUnderlineStyle(style);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:512
// QTextCharFormat::UnderlineStyle underlineStyle()
extern "C"
void C_ZNK15QTextCharFormat14underlineStyleEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->underlineStyle();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:515
// void setVerticalAlignment(enum QTextCharFormat::VerticalAlignment)
extern "C"
void C_ZN15QTextCharFormat20setVerticalAlignmentENS_17VerticalAlignmentE(void *this_, QTextCharFormat::VerticalAlignment alignment) {
  ((QTextCharFormat*)this_)->setVerticalAlignment(alignment);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:517
// QTextCharFormat::VerticalAlignment verticalAlignment()
extern "C"
void C_ZNK15QTextCharFormat17verticalAlignmentEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->verticalAlignment();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:520
// void setTextOutline(const class QPen &)
extern "C"
void C_ZN15QTextCharFormat14setTextOutlineERK4QPen(void *this_, const QPen & pen) {
  ((QTextCharFormat*)this_)->setTextOutline(pen);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:522
// QPen textOutline()
extern "C"
void C_ZNK15QTextCharFormat11textOutlineEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->textOutline();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:525
// void setToolTip(const class QString &)
extern "C"
void C_ZN15QTextCharFormat10setToolTipERK7QString(void *this_, const QString & tip) {
  ((QTextCharFormat*)this_)->setToolTip(tip);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:527
// QString toolTip()
extern "C"
void C_ZNK15QTextCharFormat7toolTipEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->toolTip();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:530
// void setAnchor(_Bool)
extern "C"
void C_ZN15QTextCharFormat9setAnchorEb(void *this_, bool anchor) {
  ((QTextCharFormat*)this_)->setAnchor(anchor);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:532
// bool isAnchor()
extern "C"
void C_ZNK15QTextCharFormat8isAnchorEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->isAnchor();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:535
// void setAnchorHref(const class QString &)
extern "C"
void C_ZN15QTextCharFormat13setAnchorHrefERK7QString(void *this_, const QString & value) {
  ((QTextCharFormat*)this_)->setAnchorHref(value);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:537
// QString anchorHref()
extern "C"
void C_ZNK15QTextCharFormat10anchorHrefEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->anchorHref();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:540
// void setAnchorName(const class QString &)
extern "C"
void C_ZN15QTextCharFormat13setAnchorNameERK7QString(void *this_, const QString & name) {
  ((QTextCharFormat*)this_)->setAnchorName(name);
}
// /usr/include/qt/QtGui/qtextformat.h:542
// QString anchorName()
extern "C"
void C_ZNK15QTextCharFormat10anchorNameEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->anchorName();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:544
// void setAnchorNames(const class QStringList &)
extern "C"
void C_ZN15QTextCharFormat14setAnchorNamesERK11QStringList(void *this_, const QStringList & names) {
  ((QTextCharFormat*)this_)->setAnchorNames(names);
}
// /usr/include/qt/QtGui/qtextformat.h:546
// QStringList anchorNames()
extern "C"
void C_ZNK15QTextCharFormat11anchorNamesEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->anchorNames();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:548
// void setTableCellRowSpan(int)
extern "C"
void C_ZN15QTextCharFormat19setTableCellRowSpanEi(void *this_, int tableCellRowSpan) {
  ((QTextCharFormat*)this_)->setTableCellRowSpan(tableCellRowSpan);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:549
// int tableCellRowSpan()
extern "C"
void C_ZNK15QTextCharFormat16tableCellRowSpanEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->tableCellRowSpan();
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:551
// void setTableCellColumnSpan(int)
extern "C"
void C_ZN15QTextCharFormat22setTableCellColumnSpanEi(void *this_, int tableCellColumnSpan) {
  ((QTextCharFormat*)this_)->setTableCellColumnSpan(tableCellColumnSpan);
}
// inline
// /usr/include/qt/QtGui/qtextformat.h:552
// int tableCellColumnSpan()
extern "C"
void C_ZNK15QTextCharFormat19tableCellColumnSpanEv(void *this_) {
  /*return*/ ((QTextCharFormat*)this_)->tableCellColumnSpan();
}
//  main block end
