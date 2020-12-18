//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextCharFormat is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextcharformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:440
// [1] bool isValid() const
// (11)qm470821457 (31)_ZNK15QTextCharFormat7isValidEv
//static
/*void qm470821457()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->isValid();
   auto xptr = (bool (QTextCharFormat::*)() const ) &QTextCharFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:450
// [-2] void setFontFamily(const QString &) 
// (12)qm3926672434 (46)_ZN15QTextCharFormat13setFontFamilyERK7QString
//static
/*void qm3926672434(const QString & family)*/ {
  const QString & family = *(const QString *)this_;
  (void) ((QTextCharFormat*)this_)->setFontFamily(family);
   auto xptr = (void (QTextCharFormat::*)(QString const&) ) &QTextCharFormat::setFontFamily;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:452
// [8] QString fontFamily() const
// (11)qm187151413 (35)_ZNK15QTextCharFormat10fontFamilyEv
//static
/*void qm187151413()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontFamily();
   auto xptr = (QString (QTextCharFormat::*)() const ) &QTextCharFormat::fontFamily;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:455
// [-2] void setFontFamilies(const QStringList &) 
// (12)qm1754402467 (53)_ZN15QTextCharFormat15setFontFamiliesERK11QStringList
//static
/*void qm1754402467(const QStringList & families)*/ {
  const QStringList & families = *(const QStringList *)this_;
  (void) ((QTextCharFormat*)this_)->setFontFamilies(families);
   auto xptr = (void (QTextCharFormat::*)(QStringList const&) ) &QTextCharFormat::setFontFamilies;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:457
// [16] QVariant fontFamilies() const
// (12)qm1964214388 (37)_ZNK15QTextCharFormat12fontFamiliesEv
//static
/*void qm1964214388()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontFamilies();
   auto xptr = (QVariant (QTextCharFormat::*)() const ) &QTextCharFormat::fontFamilies;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:460
// [-2] void setFontStyleName(const QString &) 
// (12)qm2125263384 (49)_ZN15QTextCharFormat16setFontStyleNameERK7QString
//static
/*void qm2125263384(const QString & styleName)*/ {
  const QString & styleName = *(const QString *)this_;
  (void) ((QTextCharFormat*)this_)->setFontStyleName(styleName);
   auto xptr = (void (QTextCharFormat::*)(QString const&) ) &QTextCharFormat::setFontStyleName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:462
// [16] QVariant fontStyleName() const
// (11)qm866838117 (38)_ZNK15QTextCharFormat13fontStyleNameEv
//static
/*void qm866838117()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontStyleName();
   auto xptr = (QVariant (QTextCharFormat::*)() const ) &QTextCharFormat::fontStyleName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:465
// [-2] void setFontPointSize(qreal) 
// (12)qm2382336597 (40)_ZN15QTextCharFormat16setFontPointSizeEd
//static
/*void qm2382336597(double size)*/ {
  double size = *(double*)this_;
  (void) ((QTextCharFormat*)this_)->setFontPointSize(size);
   auto xptr = (void (QTextCharFormat::*)(double) ) &QTextCharFormat::setFontPointSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:467
// [8] qreal fontPointSize() const
// (11)qm414981551 (38)_ZNK15QTextCharFormat13fontPointSizeEv
//static
/*void qm414981551()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontPointSize();
   auto xptr = (double (QTextCharFormat::*)() const ) &QTextCharFormat::fontPointSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:470
// [-2] void setFontWeight(int) 
// (12)qm2326792451 (37)_ZN15QTextCharFormat13setFontWeightEi
//static
/*void qm2326792451(int weight)*/ {
  int weight = *(int*)this_;
  (void) ((QTextCharFormat*)this_)->setFontWeight(weight);
   auto xptr = (void (QTextCharFormat::*)(int) ) &QTextCharFormat::setFontWeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:472
// [4] int fontWeight() const
// (12)qm3965868512 (35)_ZNK15QTextCharFormat10fontWeightEv
//static
/*void qm3965868512()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontWeight();
   auto xptr = (int (QTextCharFormat::*)() const ) &QTextCharFormat::fontWeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:474
// [-2] void setFontItalic(bool) 
// (12)qm2410415364 (37)_ZN15QTextCharFormat13setFontItalicEb
//static
/*void qm2410415364(bool italic)*/ {
  bool italic = *(bool*)this_;
  (void) ((QTextCharFormat*)this_)->setFontItalic(italic);
   auto xptr = (void (QTextCharFormat::*)(bool) ) &QTextCharFormat::setFontItalic;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:476
// [1] bool fontItalic() const
// (12)qm2125237359 (35)_ZNK15QTextCharFormat10fontItalicEv
//static
/*void qm2125237359()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontItalic();
   auto xptr = (bool (QTextCharFormat::*)() const ) &QTextCharFormat::fontItalic;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:478
// [-2] void setFontCapitalization(QFont::Capitalization) 
// (12)qm1683036608 (68)_ZN15QTextCharFormat21setFontCapitalizationEN5QFont14CapitalizationE
//static
/*void qm1683036608(QFont::Capitalization capitalization)*/ {
  QFont::Capitalization capitalization = *(QFont::Capitalization*)this_;
  (void) ((QTextCharFormat*)this_)->setFontCapitalization(capitalization);
   auto xptr = (void (QTextCharFormat::*)(QFont::Capitalization) ) &QTextCharFormat::setFontCapitalization;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:480
// [4] QFont::Capitalization fontCapitalization() const
// (12)qm1075548393 (43)_ZNK15QTextCharFormat18fontCapitalizationEv
//static
/*void qm1075548393()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontCapitalization();
   auto xptr = (QFont::Capitalization (QTextCharFormat::*)() const ) &QTextCharFormat::fontCapitalization;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:482
// [-2] void setFontLetterSpacingType(QFont::SpacingType) 
// (12)qm2587205215 (68)_ZN15QTextCharFormat24setFontLetterSpacingTypeEN5QFont11SpacingTypeE
//static
/*void qm2587205215(QFont::SpacingType letterSpacingType)*/ {
  QFont::SpacingType letterSpacingType = *(QFont::SpacingType*)this_;
  (void) ((QTextCharFormat*)this_)->setFontLetterSpacingType(letterSpacingType);
   auto xptr = (void (QTextCharFormat::*)(QFont::SpacingType) ) &QTextCharFormat::setFontLetterSpacingType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:484
// [4] QFont::SpacingType fontLetterSpacingType() const
// (11)qm899354398 (46)_ZNK15QTextCharFormat21fontLetterSpacingTypeEv
//static
/*void qm899354398()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontLetterSpacingType();
   auto xptr = (QFont::SpacingType (QTextCharFormat::*)() const ) &QTextCharFormat::fontLetterSpacingType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:486
// [-2] void setFontLetterSpacing(qreal) 
// (11)qm973069018 (44)_ZN15QTextCharFormat20setFontLetterSpacingEd
//static
/*void qm973069018(double spacing)*/ {
  double spacing = *(double*)this_;
  (void) ((QTextCharFormat*)this_)->setFontLetterSpacing(spacing);
   auto xptr = (void (QTextCharFormat::*)(double) ) &QTextCharFormat::setFontLetterSpacing;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:488
// [8] qreal fontLetterSpacing() const
// (12)qm1943834120 (42)_ZNK15QTextCharFormat17fontLetterSpacingEv
//static
/*void qm1943834120()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontLetterSpacing();
   auto xptr = (double (QTextCharFormat::*)() const ) &QTextCharFormat::fontLetterSpacing;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:490
// [-2] void setFontWordSpacing(qreal) 
// (12)qm1565978458 (42)_ZN15QTextCharFormat18setFontWordSpacingEd
//static
/*void qm1565978458(double spacing)*/ {
  double spacing = *(double*)this_;
  (void) ((QTextCharFormat*)this_)->setFontWordSpacing(spacing);
   auto xptr = (void (QTextCharFormat::*)(double) ) &QTextCharFormat::setFontWordSpacing;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:492
// [8] qreal fontWordSpacing() const
// (12)qm4289354748 (40)_ZNK15QTextCharFormat15fontWordSpacingEv
//static
/*void qm4289354748()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontWordSpacing();
   auto xptr = (double (QTextCharFormat::*)() const ) &QTextCharFormat::fontWordSpacing;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:495
// [-2] void setFontUnderline(bool) 
// (11)qm531319703 (40)_ZN15QTextCharFormat16setFontUnderlineEb
//static
/*void qm531319703(bool underline)*/ {
  bool underline = *(bool*)this_;
  (void) ((QTextCharFormat*)this_)->setFontUnderline(underline);
   auto xptr = (void (QTextCharFormat::*)(bool) ) &QTextCharFormat::setFontUnderline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:499
// [-2] void setFontOverline(bool) 
// (12)qm2371071337 (39)_ZN15QTextCharFormat15setFontOverlineEb
//static
/*void qm2371071337(bool overline)*/ {
  bool overline = *(bool*)this_;
  (void) ((QTextCharFormat*)this_)->setFontOverline(overline);
   auto xptr = (void (QTextCharFormat::*)(bool) ) &QTextCharFormat::setFontOverline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:501
// [1] bool fontOverline() const
// (11)qm942737220 (37)_ZNK15QTextCharFormat12fontOverlineEv
//static
/*void qm942737220()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontOverline();
   auto xptr = (bool (QTextCharFormat::*)() const ) &QTextCharFormat::fontOverline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:504
// [-2] void setFontStrikeOut(bool) 
// (12)qm1322513897 (40)_ZN15QTextCharFormat16setFontStrikeOutEb
//static
/*void qm1322513897(bool strikeOut)*/ {
  bool strikeOut = *(bool*)this_;
  (void) ((QTextCharFormat*)this_)->setFontStrikeOut(strikeOut);
   auto xptr = (void (QTextCharFormat::*)(bool) ) &QTextCharFormat::setFontStrikeOut;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:506
// [1] bool fontStrikeOut() const
// (11)qm854843174 (38)_ZNK15QTextCharFormat13fontStrikeOutEv
//static
/*void qm854843174()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontStrikeOut();
   auto xptr = (bool (QTextCharFormat::*)() const ) &QTextCharFormat::fontStrikeOut;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:509
// [-2] void setUnderlineColor(const QColor &) 
// (12)qm3774366029 (49)_ZN15QTextCharFormat17setUnderlineColorERK6QColor
//static
/*void qm3774366029(const QColor & color)*/ {
  const QColor & color = *(const QColor *)this_;
  (void) ((QTextCharFormat*)this_)->setUnderlineColor(color);
   auto xptr = (void (QTextCharFormat::*)(QColor const&) ) &QTextCharFormat::setUnderlineColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:511
// [16] QColor underlineColor() const
// (12)qm4179216520 (39)_ZNK15QTextCharFormat14underlineColorEv
//static
/*void qm4179216520()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->underlineColor();
   auto xptr = (QColor (QTextCharFormat::*)() const ) &QTextCharFormat::underlineColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:514
// [-2] void setFontFixedPitch(bool) 
// (11)qm637432409 (41)_ZN15QTextCharFormat17setFontFixedPitchEb
//static
/*void qm637432409(bool fixedPitch)*/ {
  bool fixedPitch = *(bool*)this_;
  (void) ((QTextCharFormat*)this_)->setFontFixedPitch(fixedPitch);
   auto xptr = (void (QTextCharFormat::*)(bool) ) &QTextCharFormat::setFontFixedPitch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:516
// [1] bool fontFixedPitch() const
// (12)qm1608042871 (39)_ZNK15QTextCharFormat14fontFixedPitchEv
//static
/*void qm1608042871()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontFixedPitch();
   auto xptr = (bool (QTextCharFormat::*)() const ) &QTextCharFormat::fontFixedPitch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:519
// [-2] void setFontStretch(int) 
// (12)qm4226484663 (38)_ZN15QTextCharFormat14setFontStretchEi
//static
/*void qm4226484663(int factor)*/ {
  int factor = *(int*)this_;
  (void) ((QTextCharFormat*)this_)->setFontStretch(factor);
   auto xptr = (void (QTextCharFormat::*)(int) ) &QTextCharFormat::setFontStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:521
// [4] int fontStretch() const
// (12)qm1061287539 (36)_ZNK15QTextCharFormat11fontStretchEv
//static
/*void qm1061287539()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontStretch();
   auto xptr = (int (QTextCharFormat::*)() const ) &QTextCharFormat::fontStretch;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:524
// [-2] void setFontStyleHint(QFont::StyleHint, QFont::StyleStrategy) 
// (12)qm4235249816 (77)_ZN15QTextCharFormat16setFontStyleHintEN5QFont9StyleHintENS0_13StyleStrategyE
//static
/*void qm4235249816(QFont::StyleHint hint, QFont::StyleStrategy strategy)*/ {
  QFont::StyleHint hint = *(QFont::StyleHint*)this_; QFont::StyleStrategy strategy = *(QFont::StyleStrategy*)this_;
  (void) ((QTextCharFormat*)this_)->setFontStyleHint(hint, strategy);
   auto xptr = (void (QTextCharFormat::*)(QFont::StyleHint, QFont::StyleStrategy) ) &QTextCharFormat::setFontStyleHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:526
// [-2] void setFontStyleStrategy(QFont::StyleStrategy) 
// (12)qm2228609113 (66)_ZN15QTextCharFormat20setFontStyleStrategyEN5QFont13StyleStrategyE
//static
/*void qm2228609113(QFont::StyleStrategy strategy)*/ {
  QFont::StyleStrategy strategy = *(QFont::StyleStrategy*)this_;
  (void) ((QTextCharFormat*)this_)->setFontStyleStrategy(strategy);
   auto xptr = (void (QTextCharFormat::*)(QFont::StyleStrategy) ) &QTextCharFormat::setFontStyleStrategy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:528
// [4] QFont::StyleHint fontStyleHint() const
// (12)qm3671205904 (38)_ZNK15QTextCharFormat13fontStyleHintEv
//static
/*void qm3671205904()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontStyleHint();
   auto xptr = (QFont::StyleHint (QTextCharFormat::*)() const ) &QTextCharFormat::fontStyleHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:530
// [4] QFont::StyleStrategy fontStyleStrategy() const
// (12)qm1628072599 (42)_ZNK15QTextCharFormat17fontStyleStrategyEv
//static
/*void qm1628072599()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontStyleStrategy();
   auto xptr = (QFont::StyleStrategy (QTextCharFormat::*)() const ) &QTextCharFormat::fontStyleStrategy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:533
// [-2] void setFontHintingPreference(QFont::HintingPreference) 
// (12)qm1639678188 (74)_ZN15QTextCharFormat24setFontHintingPreferenceEN5QFont17HintingPreferenceE
//static
/*void qm1639678188(QFont::HintingPreference hintingPreference)*/ {
  QFont::HintingPreference hintingPreference = *(QFont::HintingPreference*)this_;
  (void) ((QTextCharFormat*)this_)->setFontHintingPreference(hintingPreference);
   auto xptr = (void (QTextCharFormat::*)(QFont::HintingPreference) ) &QTextCharFormat::setFontHintingPreference;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:538
// [4] QFont::HintingPreference fontHintingPreference() const
// (12)qm3779178686 (46)_ZNK15QTextCharFormat21fontHintingPreferenceEv
//static
/*void qm3779178686()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontHintingPreference();
   auto xptr = (QFont::HintingPreference (QTextCharFormat::*)() const ) &QTextCharFormat::fontHintingPreference;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:543
// [-2] void setFontKerning(bool) 
// (12)qm3232841203 (38)_ZN15QTextCharFormat14setFontKerningEb
//static
/*void qm3232841203(bool enable)*/ {
  bool enable = *(bool*)this_;
  (void) ((QTextCharFormat*)this_)->setFontKerning(enable);
   auto xptr = (void (QTextCharFormat::*)(bool) ) &QTextCharFormat::setFontKerning;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:545
// [1] bool fontKerning() const
// (12)qm2479430591 (36)_ZNK15QTextCharFormat11fontKerningEv
//static
/*void qm2479430591()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->fontKerning();
   auto xptr = (bool (QTextCharFormat::*)() const ) &QTextCharFormat::fontKerning;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:549
// [4] QTextCharFormat::UnderlineStyle underlineStyle() const
// (12)qm1409983735 (39)_ZNK15QTextCharFormat14underlineStyleEv
//static
/*void qm1409983735()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->underlineStyle();
   auto xptr = (QTextCharFormat::UnderlineStyle (QTextCharFormat::*)() const ) &QTextCharFormat::underlineStyle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:552
// [-2] void setVerticalAlignment(QTextCharFormat::VerticalAlignment) 
// (12)qm3869164527 (66)_ZN15QTextCharFormat20setVerticalAlignmentENS_17VerticalAlignmentE
//static
/*void qm3869164527(QTextCharFormat::VerticalAlignment alignment)*/ {
  QTextCharFormat::VerticalAlignment alignment = *(QTextCharFormat::VerticalAlignment*)this_;
  (void) ((QTextCharFormat*)this_)->setVerticalAlignment(alignment);
   auto xptr = (void (QTextCharFormat::*)(QTextCharFormat::VerticalAlignment) ) &QTextCharFormat::setVerticalAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:554
// [4] QTextCharFormat::VerticalAlignment verticalAlignment() const
// (12)qm3313441288 (42)_ZNK15QTextCharFormat17verticalAlignmentEv
//static
/*void qm3313441288()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->verticalAlignment();
   auto xptr = (QTextCharFormat::VerticalAlignment (QTextCharFormat::*)() const ) &QTextCharFormat::verticalAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:557
// [-2] void setTextOutline(const QPen &) 
// (11)qm808729383 (44)_ZN15QTextCharFormat14setTextOutlineERK4QPen
//static
/*void qm808729383(const QPen & pen)*/ {
  const QPen & pen = *(const QPen *)this_;
  (void) ((QTextCharFormat*)this_)->setTextOutline(pen);
   auto xptr = (void (QTextCharFormat::*)(QPen const&) ) &QTextCharFormat::setTextOutline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:559
// [8] QPen textOutline() const
// (12)qm3878538943 (36)_ZNK15QTextCharFormat11textOutlineEv
//static
/*void qm3878538943()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->textOutline();
   auto xptr = (QPen (QTextCharFormat::*)() const ) &QTextCharFormat::textOutline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:562
// [-2] void setToolTip(const QString &) 
// (12)qm2263888511 (43)_ZN15QTextCharFormat10setToolTipERK7QString
//static
/*void qm2263888511(const QString & tip)*/ {
  const QString & tip = *(const QString *)this_;
  (void) ((QTextCharFormat*)this_)->setToolTip(tip);
   auto xptr = (void (QTextCharFormat::*)(QString const&) ) &QTextCharFormat::setToolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:564
// [8] QString toolTip() const
// (12)qm1636868263 (31)_ZNK15QTextCharFormat7toolTipEv
//static
/*void qm1636868263()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->toolTip();
   auto xptr = (QString (QTextCharFormat::*)() const ) &QTextCharFormat::toolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:567
// [-2] void setAnchor(bool) 
// (12)qm3920764281 (32)_ZN15QTextCharFormat9setAnchorEb
//static
/*void qm3920764281(bool anchor)*/ {
  bool anchor = *(bool*)this_;
  (void) ((QTextCharFormat*)this_)->setAnchor(anchor);
   auto xptr = (void (QTextCharFormat::*)(bool) ) &QTextCharFormat::setAnchor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:569
// [1] bool isAnchor() const
// (12)qm2862775440 (32)_ZNK15QTextCharFormat8isAnchorEv
//static
/*void qm2862775440()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->isAnchor();
   auto xptr = (bool (QTextCharFormat::*)() const ) &QTextCharFormat::isAnchor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:572
// [-2] void setAnchorHref(const QString &) 
// (11)qm148279227 (46)_ZN15QTextCharFormat13setAnchorHrefERK7QString
//static
/*void qm148279227(const QString & value)*/ {
  const QString & value = *(const QString *)this_;
  (void) ((QTextCharFormat*)this_)->setAnchorHref(value);
   auto xptr = (void (QTextCharFormat::*)(QString const&) ) &QTextCharFormat::setAnchorHref;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:574
// [8] QString anchorHref() const
// (12)qm2602032720 (35)_ZNK15QTextCharFormat10anchorHrefEv
//static
/*void qm2602032720()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->anchorHref();
   auto xptr = (QString (QTextCharFormat::*)() const ) &QTextCharFormat::anchorHref;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:585
// [-2] void setAnchorNames(const QStringList &) 
// (12)qm2638073758 (52)_ZN15QTextCharFormat14setAnchorNamesERK11QStringList
//static
/*void qm2638073758(const QStringList & names)*/ {
  const QStringList & names = *(const QStringList *)this_;
  (void) ((QTextCharFormat*)this_)->setAnchorNames(names);
   auto xptr = (void (QTextCharFormat::*)(QStringList const&) ) &QTextCharFormat::setAnchorNames;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:589
// [-2] void setTableCellRowSpan(int) 
// (12)qm3376108529 (43)_ZN15QTextCharFormat19setTableCellRowSpanEi
//static
/*void qm3376108529(int tableCellRowSpan)*/ {
  int tableCellRowSpan = *(int*)this_;
  (void) ((QTextCharFormat*)this_)->setTableCellRowSpan(tableCellRowSpan);
   auto xptr = (void (QTextCharFormat::*)(int) ) &QTextCharFormat::setTableCellRowSpan;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:590
// [4] int tableCellRowSpan() const
// (12)qm3081647831 (41)_ZNK15QTextCharFormat16tableCellRowSpanEv
//static
/*void qm3081647831()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->tableCellRowSpan();
   auto xptr = (int (QTextCharFormat::*)() const ) &QTextCharFormat::tableCellRowSpan;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:592
// [-2] void setTableCellColumnSpan(int) 
// (12)qm3342669017 (46)_ZN15QTextCharFormat22setTableCellColumnSpanEi
//static
/*void qm3342669017(int tableCellColumnSpan)*/ {
  int tableCellColumnSpan = *(int*)this_;
  (void) ((QTextCharFormat*)this_)->setTableCellColumnSpan(tableCellColumnSpan);
   auto xptr = (void (QTextCharFormat::*)(int) ) &QTextCharFormat::setTableCellColumnSpan;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:593
// [4] int tableCellColumnSpan() const
// (12)qm3511372988 (44)_ZNK15QTextCharFormat19tableCellColumnSpanEv
//static
/*void qm3511372988()*/ {
  ;
  (void) ((QTextCharFormat*)this_)->tableCellColumnSpan();
   auto xptr = (int (QTextCharFormat::*)() const ) &QTextCharFormat::tableCellColumnSpan;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QTextCharFormatD2Ev(void *this_)*/ {
  delete (QTextCharFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextcharformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
