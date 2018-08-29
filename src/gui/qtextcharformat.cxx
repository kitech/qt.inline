//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextCharFormat is pure virtual: false
// QTextCharFormat has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextCharFormat_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextCharFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextCharFormat_t qt_meta_stringdata_MyQTextCharFormat = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQTextCharFormat"
  },
  "MyQTextCharFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextCharFormat[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQTextCharFormat : public QTextCharFormat {
public:
  virtual ~MyQTextCharFormat() {}
// void QTextCharFormat()
MyQTextCharFormat() : QTextCharFormat() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:412
// [-2] void QTextCharFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN15QTextCharFormatC2Ev() {
  return  new QTextCharFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:414
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat7isValidEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:420
// [-2] void setFont(const QFont &, QTextCharFormat::FontPropertiesInheritanceBehavior)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat7setFontERK5QFontNS_33FontPropertiesInheritanceBehaviorE(void *this_, QFont* font, QTextCharFormat::FontPropertiesInheritanceBehavior behavior) {
  ((QTextCharFormat*)this_)->setFont(*font, behavior);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:421
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat7setFontERK5QFont(void *this_, QFont* font) {
  ((QTextCharFormat*)this_)->setFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:422
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat4fontEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->font();
return new QFont(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:424
// [-2] void setFontFamily(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat13setFontFamilyERK7QString(void *this_, QString* family) {
  ((QTextCharFormat*)this_)->setFontFamily(*family);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:426
// [8] QString fontFamily()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat10fontFamilyEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->fontFamily();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:429
// [-2] void setFontPointSize(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat16setFontPointSizeEd(void *this_, qreal size) {
  ((QTextCharFormat*)this_)->setFontPointSize(size);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:431
// [8] qreal fontPointSize()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QTextCharFormat13fontPointSizeEv(void *this_) {
  return (qreal)((QTextCharFormat*)this_)->fontPointSize();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:434
// [-2] void setFontWeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat13setFontWeightEi(void *this_, int weight) {
  ((QTextCharFormat*)this_)->setFontWeight(weight);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:436
// [4] int fontWeight()
extern "C" Q_DECL_EXPORT
int C_ZNK15QTextCharFormat10fontWeightEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->fontWeight();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:438
// [-2] void setFontItalic(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat13setFontItalicEb(void *this_, bool italic) {
  ((QTextCharFormat*)this_)->setFontItalic(italic);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:440
// [1] bool fontItalic()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat10fontItalicEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontItalic();
}

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:442
// [-2] void setFontCapitalization(QFont::Capitalization)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat21setFontCapitalizationEN5QFont14CapitalizationE(void *this_, QFont::Capitalization capitalization) {
  ((QTextCharFormat*)this_)->setFontCapitalization(capitalization);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:444
// [4] QFont::Capitalization fontCapitalization()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QFont::Capitalization C_ZNK15QTextCharFormat18fontCapitalizationEv(void *this_) {
  return (QFont::Capitalization)((QTextCharFormat*)this_)->fontCapitalization();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qtextformat.h:446
// [-2] void setFontLetterSpacingType(QFont::SpacingType)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat24setFontLetterSpacingTypeEN5QFont11SpacingTypeE(void *this_, QFont::SpacingType letterSpacingType) {
  ((QTextCharFormat*)this_)->setFontLetterSpacingType(letterSpacingType);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qtextformat.h:448
// [4] QFont::SpacingType fontLetterSpacingType()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
QFont::SpacingType C_ZNK15QTextCharFormat21fontLetterSpacingTypeEv(void *this_) {
  return (QFont::SpacingType)((QTextCharFormat*)this_)->fontLetterSpacingType();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:450
// [-2] void setFontLetterSpacing(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat20setFontLetterSpacingEd(void *this_, qreal spacing) {
  ((QTextCharFormat*)this_)->setFontLetterSpacing(spacing);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:452
// [8] qreal fontLetterSpacing()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QTextCharFormat17fontLetterSpacingEv(void *this_) {
  return (qreal)((QTextCharFormat*)this_)->fontLetterSpacing();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:454
// [-2] void setFontWordSpacing(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat18setFontWordSpacingEd(void *this_, qreal spacing) {
  ((QTextCharFormat*)this_)->setFontWordSpacing(spacing);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:456
// [8] qreal fontWordSpacing()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QTextCharFormat15fontWordSpacingEv(void *this_) {
  return (qreal)((QTextCharFormat*)this_)->fontWordSpacing();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:459
// [-2] void setFontUnderline(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat16setFontUnderlineEb(void *this_, bool underline) {
  ((QTextCharFormat*)this_)->setFontUnderline(underline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:461
// [1] bool fontUnderline()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat13fontUnderlineEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontUnderline();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:463
// [-2] void setFontOverline(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat15setFontOverlineEb(void *this_, bool overline) {
  ((QTextCharFormat*)this_)->setFontOverline(overline);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:465
// [1] bool fontOverline()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat12fontOverlineEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontOverline();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:468
// [-2] void setFontStrikeOut(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat16setFontStrikeOutEb(void *this_, bool strikeOut) {
  ((QTextCharFormat*)this_)->setFontStrikeOut(strikeOut);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:470
// [1] bool fontStrikeOut()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat13fontStrikeOutEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontStrikeOut();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:473
// [-2] void setUnderlineColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat17setUnderlineColorERK6QColor(void *this_, QColor* color) {
  ((QTextCharFormat*)this_)->setUnderlineColor(*color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:475
// [16] QColor underlineColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat14underlineColorEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->underlineColor();
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:478
// [-2] void setFontFixedPitch(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat17setFontFixedPitchEb(void *this_, bool fixedPitch) {
  ((QTextCharFormat*)this_)->setFontFixedPitch(fixedPitch);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:480
// [1] bool fontFixedPitch()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat14fontFixedPitchEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontFixedPitch();
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qtextformat.h:483
// [-2] void setFontStretch(int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat14setFontStretchEi(void *this_, int factor) {
  ((QTextCharFormat*)this_)->setFontStretch(factor);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qtextformat.h:485
// [4] int fontStretch()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK15QTextCharFormat11fontStretchEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->fontStretch();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextformat.h:488
// [-2] void setFontStyleHint(QFont::StyleHint, QFont::StyleStrategy)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat16setFontStyleHintEN5QFont9StyleHintENS0_13StyleStrategyE(void *this_, QFont::StyleHint hint, QFont::StyleStrategy strategy) {
  ((QTextCharFormat*)this_)->setFontStyleHint(hint, strategy);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextformat.h:490
// [-2] void setFontStyleStrategy(QFont::StyleStrategy)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat20setFontStyleStrategyEN5QFont13StyleStrategyE(void *this_, QFont::StyleStrategy strategy) {
  ((QTextCharFormat*)this_)->setFontStyleStrategy(strategy);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextformat.h:492
// [4] QFont::StyleHint fontStyleHint()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QFont::StyleHint C_ZNK15QTextCharFormat13fontStyleHintEv(void *this_) {
  return (QFont::StyleHint)((QTextCharFormat*)this_)->fontStyleHint();
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextformat.h:494
// [4] QFont::StyleStrategy fontStyleStrategy()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QFont::StyleStrategy C_ZNK15QTextCharFormat17fontStyleStrategyEv(void *this_) {
  return (QFont::StyleStrategy)((QTextCharFormat*)this_)->fontStyleStrategy();
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:497
// [-2] void setFontHintingPreference(QFont::HintingPreference)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat24setFontHintingPreferenceEN5QFont17HintingPreferenceE(void *this_, QFont::HintingPreference hintingPreference) {
  ((QTextCharFormat*)this_)->setFontHintingPreference(hintingPreference);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:502
// [4] QFont::HintingPreference fontHintingPreference()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
QFont::HintingPreference C_ZNK15QTextCharFormat21fontHintingPreferenceEv(void *this_) {
  return (QFont::HintingPreference)((QTextCharFormat*)this_)->fontHintingPreference();
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextformat.h:507
// [-2] void setFontKerning(bool)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat14setFontKerningEb(void *this_, bool enable) {
  ((QTextCharFormat*)this_)->setFontKerning(enable);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtextformat.h:509
// [1] bool fontKerning()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat11fontKerningEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->fontKerning();
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:512
// [-2] void setUnderlineStyle(QTextCharFormat::UnderlineStyle)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat17setUnderlineStyleENS_14UnderlineStyleE(void *this_, QTextCharFormat::UnderlineStyle style) {
  ((QTextCharFormat*)this_)->setUnderlineStyle(style);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextformat.h:513
// [4] QTextCharFormat::UnderlineStyle underlineStyle()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QTextCharFormat::UnderlineStyle C_ZNK15QTextCharFormat14underlineStyleEv(void *this_) {
  return (QTextCharFormat::UnderlineStyle)((QTextCharFormat*)this_)->underlineStyle();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:516
// [-2] void setVerticalAlignment(QTextCharFormat::VerticalAlignment)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat20setVerticalAlignmentENS_17VerticalAlignmentE(void *this_, QTextCharFormat::VerticalAlignment alignment) {
  ((QTextCharFormat*)this_)->setVerticalAlignment(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:518
// [4] QTextCharFormat::VerticalAlignment verticalAlignment()
extern "C" Q_DECL_EXPORT
QTextCharFormat::VerticalAlignment C_ZNK15QTextCharFormat17verticalAlignmentEv(void *this_) {
  return (QTextCharFormat::VerticalAlignment)((QTextCharFormat*)this_)->verticalAlignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:521
// [-2] void setTextOutline(const QPen &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat14setTextOutlineERK4QPen(void *this_, QPen* pen) {
  ((QTextCharFormat*)this_)->setTextOutline(*pen);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:523
// [8] QPen textOutline()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat11textOutlineEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->textOutline();
return new QPen(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:526
// [-2] void setToolTip(const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat10setToolTipERK7QString(void *this_, QString* tip) {
  ((QTextCharFormat*)this_)->setToolTip(*tip);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:528
// [8] QString toolTip()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat7toolTipEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->toolTip();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:531
// [-2] void setAnchor(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat9setAnchorEb(void *this_, bool anchor) {
  ((QTextCharFormat*)this_)->setAnchor(anchor);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:533
// [1] bool isAnchor()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextCharFormat8isAnchorEv(void *this_) {
  return (bool)((QTextCharFormat*)this_)->isAnchor();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:536
// [-2] void setAnchorHref(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat13setAnchorHrefERK7QString(void *this_, QString* value) {
  ((QTextCharFormat*)this_)->setAnchorHref(*value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:538
// [8] QString anchorHref()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat10anchorHrefEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->anchorHref();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:541
// [-2] void setAnchorName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat13setAnchorNameERK7QString(void *this_, QString* name) {
  ((QTextCharFormat*)this_)->setAnchorName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:543
// [8] QString anchorName()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat10anchorNameEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->anchorName();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:545
// [-2] void setAnchorNames(const QStringList &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat14setAnchorNamesERK11QStringList(void *this_, QStringList* names) {
  ((QTextCharFormat*)this_)->setAnchorNames(*names);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qtextformat.h:547
// [8] QStringList anchorNames()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextCharFormat11anchorNamesEv(void *this_) {
  auto rv = ((QTextCharFormat*)this_)->anchorNames();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:549
// [-2] void setTableCellRowSpan(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat19setTableCellRowSpanEi(void *this_, int tableCellRowSpan) {
  ((QTextCharFormat*)this_)->setTableCellRowSpan(tableCellRowSpan);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:550
// [4] int tableCellRowSpan()
extern "C" Q_DECL_EXPORT
int C_ZNK15QTextCharFormat16tableCellRowSpanEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->tableCellRowSpan();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:552
// [-2] void setTableCellColumnSpan(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormat22setTableCellColumnSpanEi(void *this_, int tableCellColumnSpan) {
  ((QTextCharFormat*)this_)->setTableCellColumnSpan(tableCellColumnSpan);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:553
// [4] int tableCellColumnSpan()
extern "C" Q_DECL_EXPORT
int C_ZNK15QTextCharFormat19tableCellColumnSpanEv(void *this_) {
  return (int)((QTextCharFormat*)this_)->tableCellColumnSpan();
}


extern "C" Q_DECL_EXPORT
void C_ZN15QTextCharFormatD2Ev(void *this_) {
  delete (QTextCharFormat*)(this_);
}
//  main block end
