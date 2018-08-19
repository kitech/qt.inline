//  header block begin
// /usr/include/qt/QtGui/qfont.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfont.h>
#include <QtGui>
#include "callback_inherit.h"

// QFont is pure virtual: false
// QFont has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFont : public QFont {
public:
  virtual ~MyQFont() {}
// void QFont()
MyQFont() : QFont() {}
// void QFont(const QString &, int, int, bool)
MyQFont(const QString & family, int pointSize, int weight, bool italic) : QFont(family, pointSize, weight, italic) {}
// void QFont(const QFont &, QPaintDevice *)
MyQFont(const QFont & arg0, QPaintDevice * pd) : QFont(arg0, pd) {}
// void QFont(const QFont &)
MyQFont(const QFont & arg0) : QFont(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:170
// [-2] void QFont()
extern "C" Q_DECL_EXPORT
void* C_ZN5QFontC2Ev() {
  return  new QFont();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:171
// [-2] void QFont(const QString &, int, int, bool)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFontC2ERK7QStringiib(QString* family, int pointSize, int weight, bool italic) {
  return  new QFont(*family, pointSize, weight, italic);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:172
// [-2] void QFont(const QFont &, QPaintDevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFontC2ERKS_P12QPaintDevice(QFont* arg0, QPaintDevice * pd) {
  return  new QFont(*arg0, pd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:173
// [-2] void QFont(const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFontC2ERKS_(QFont* arg0) {
  return  new QFont(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:174
// [-2] void ~QFont()
extern "C" Q_DECL_EXPORT
void C_ZN5QFontD2Ev(void *this_) {
  delete (QFont*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qfont.h:176
// [-2] void swap(QFont &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN5QFont4swapERS_(void *this_, QFont* other) {
  ((QFont*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:179
// [8] QString family()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont6familyEv(void *this_) {
  auto rv = ((QFont*)this_)->family();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:180
// [-2] void setFamily(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont9setFamilyERK7QString(void *this_, QString* arg0) {
  ((QFont*)this_)->setFamily(*arg0);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qfont.h:182
// [8] QString styleName()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont9styleNameEv(void *this_) {
  auto rv = ((QFont*)this_)->styleName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qfont.h:183
// [-2] void setStyleName(const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN5QFont12setStyleNameERK7QString(void *this_, QString* arg0) {
  ((QFont*)this_)->setStyleName(*arg0);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:185
// [4] int pointSize()
extern "C" Q_DECL_EXPORT
int C_ZNK5QFont9pointSizeEv(void *this_) {
  return (int)((QFont*)this_)->pointSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:186
// [-2] void setPointSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont12setPointSizeEi(void *this_, int arg0) {
  ((QFont*)this_)->setPointSize(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:187
// [8] qreal pointSizeF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK5QFont10pointSizeFEv(void *this_) {
  return (qreal)((QFont*)this_)->pointSizeF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:188
// [-2] void setPointSizeF(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont13setPointSizeFEd(void *this_, qreal arg0) {
  ((QFont*)this_)->setPointSizeF(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:190
// [4] int pixelSize()
extern "C" Q_DECL_EXPORT
int C_ZNK5QFont9pixelSizeEv(void *this_) {
  return (int)((QFont*)this_)->pixelSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:191
// [-2] void setPixelSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont12setPixelSizeEi(void *this_, int arg0) {
  ((QFont*)this_)->setPixelSize(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:193
// [4] int weight()
extern "C" Q_DECL_EXPORT
int C_ZNK5QFont6weightEv(void *this_) {
  return (int)((QFont*)this_)->weight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:194
// [-2] void setWeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont9setWeightEi(void *this_, int arg0) {
  ((QFont*)this_)->setWeight(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:196
// [1] bool bold()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont4boldEv(void *this_) {
  return (bool)((QFont*)this_)->bold();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:197
// [-2] void setBold(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont7setBoldEb(void *this_, bool arg0) {
  ((QFont*)this_)->setBold(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:199
// [-2] void setStyle(QFont::Style)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont8setStyleENS_5StyleE(void *this_, QFont::Style style) {
  ((QFont*)this_)->setStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:200
// [4] QFont::Style style()
extern "C" Q_DECL_EXPORT
QFont::Style C_ZNK5QFont5styleEv(void *this_) {
  return (QFont::Style)((QFont*)this_)->style();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:202
// [1] bool italic()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont6italicEv(void *this_) {
  return (bool)((QFont*)this_)->italic();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:203
// [-2] void setItalic(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont9setItalicEb(void *this_, bool b) {
  ((QFont*)this_)->setItalic(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:205
// [1] bool underline()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont9underlineEv(void *this_) {
  return (bool)((QFont*)this_)->underline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:206
// [-2] void setUnderline(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont12setUnderlineEb(void *this_, bool arg0) {
  ((QFont*)this_)->setUnderline(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:208
// [1] bool overline()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont8overlineEv(void *this_) {
  return (bool)((QFont*)this_)->overline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:209
// [-2] void setOverline(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont11setOverlineEb(void *this_, bool arg0) {
  ((QFont*)this_)->setOverline(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:211
// [1] bool strikeOut()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont9strikeOutEv(void *this_) {
  return (bool)((QFont*)this_)->strikeOut();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:212
// [-2] void setStrikeOut(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont12setStrikeOutEb(void *this_, bool arg0) {
  ((QFont*)this_)->setStrikeOut(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:214
// [1] bool fixedPitch()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont10fixedPitchEv(void *this_) {
  return (bool)((QFont*)this_)->fixedPitch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:215
// [-2] void setFixedPitch(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont13setFixedPitchEb(void *this_, bool arg0) {
  ((QFont*)this_)->setFixedPitch(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:217
// [1] bool kerning()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont7kerningEv(void *this_) {
  return (bool)((QFont*)this_)->kerning();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:218
// [-2] void setKerning(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont10setKerningEb(void *this_, bool arg0) {
  ((QFont*)this_)->setKerning(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:220
// [4] QFont::StyleHint styleHint()
extern "C" Q_DECL_EXPORT
QFont::StyleHint C_ZNK5QFont9styleHintEv(void *this_) {
  return (QFont::StyleHint)((QFont*)this_)->styleHint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:221
// [4] QFont::StyleStrategy styleStrategy()
extern "C" Q_DECL_EXPORT
QFont::StyleStrategy C_ZNK5QFont13styleStrategyEv(void *this_) {
  return (QFont::StyleStrategy)((QFont*)this_)->styleStrategy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:222
// [-2] void setStyleHint(QFont::StyleHint, QFont::StyleStrategy)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont12setStyleHintENS_9StyleHintENS_13StyleStrategyE(void *this_, QFont::StyleHint arg0, QFont::StyleStrategy arg1) {
  ((QFont*)this_)->setStyleHint(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:223
// [-2] void setStyleStrategy(QFont::StyleStrategy)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont16setStyleStrategyENS_13StyleStrategyE(void *this_, QFont::StyleStrategy s) {
  ((QFont*)this_)->setStyleStrategy(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:225
// [4] int stretch()
extern "C" Q_DECL_EXPORT
int C_ZNK5QFont7stretchEv(void *this_) {
  return (int)((QFont*)this_)->stretch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:226
// [-2] void setStretch(int)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont10setStretchEi(void *this_, int arg0) {
  ((QFont*)this_)->setStretch(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qfont.h:228
// [8] qreal letterSpacing()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK5QFont13letterSpacingEv(void *this_) {
  return (qreal)((QFont*)this_)->letterSpacing();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qfont.h:229
// [4] QFont::SpacingType letterSpacingType()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QFont::SpacingType C_ZNK5QFont17letterSpacingTypeEv(void *this_) {
  return (QFont::SpacingType)((QFont*)this_)->letterSpacingType();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:230
// [-2] void setLetterSpacing(QFont::SpacingType, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont16setLetterSpacingENS_11SpacingTypeEd(void *this_, QFont::SpacingType type_, qreal spacing) {
  ((QFont*)this_)->setLetterSpacing(type_, spacing);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qfont.h:232
// [8] qreal wordSpacing()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK5QFont11wordSpacingEv(void *this_) {
  return (qreal)((QFont*)this_)->wordSpacing();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qfont.h:233
// [-2] void setWordSpacing(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN5QFont14setWordSpacingEd(void *this_, qreal spacing) {
  ((QFont*)this_)->setWordSpacing(spacing);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:235
// [-2] void setCapitalization(QFont::Capitalization)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont17setCapitalizationENS_14CapitalizationE(void *this_, QFont::Capitalization arg0) {
  ((QFont*)this_)->setCapitalization(arg0);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qfont.h:236
// [4] QFont::Capitalization capitalization()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QFont::Capitalization C_ZNK5QFont14capitalizationEv(void *this_) {
  return (QFont::Capitalization)((QFont*)this_)->capitalization();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:238
// [-2] void setHintingPreference(QFont::HintingPreference)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont20setHintingPreferenceENS_17HintingPreferenceE(void *this_, QFont::HintingPreference hintingPreference) {
  ((QFont*)this_)->setHintingPreference(hintingPreference);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qfont.h:239
// [4] QFont::HintingPreference hintingPreference()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
QFont::HintingPreference C_ZNK5QFont17hintingPreferenceEv(void *this_) {
  return (QFont::HintingPreference)((QFont*)this_)->hintingPreference();
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:242
// [1] bool rawMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont7rawModeEv(void *this_) {
  return (bool)((QFont*)this_)->rawMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:243
// [-2] void setRawMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont10setRawModeEb(void *this_, bool arg0) {
  ((QFont*)this_)->setRawMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:247
// [1] bool exactMatch()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont10exactMatchEv(void *this_) {
  return (bool)((QFont*)this_)->exactMatch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:249
// [16] QFont & operator=(const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFontaSERKS_(void *this_, QFont* arg0) {
  auto& rv = ((QFont*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:250
// [1] bool operator==(const QFont &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFonteqERKS_(void *this_, QFont* arg0) {
  return (bool)((QFont*)this_)->operator==(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:251
// [1] bool operator!=(const QFont &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFontneERKS_(void *this_, QFont* arg0) {
  return (bool)((QFont*)this_)->operator!=(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:252
// [1] bool operator<(const QFont &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFontltERKS_(void *this_, QFont* arg0) {
  return (bool)((QFont*)this_)->operator<(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:254
// [1] bool isCopyOf(const QFont &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFont8isCopyOfERKS_(void *this_, QFont* arg0) {
  return (bool)((QFont*)this_)->isCopyOf(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:256
// [16] QFont & operator=(QFont &&)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFontaSEOS_(void *this_, QFont && other) {
  auto& rv = ((QFont*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:262
// [-2] void setRawName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont10setRawNameERK7QString(void *this_, QString* arg0) {
  ((QFont*)this_)->setRawName(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:263
// [8] QString rawName()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont7rawNameEv(void *this_) {
  auto rv = ((QFont*)this_)->rawName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:266
// [8] QString key()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont3keyEv(void *this_) {
  auto rv = ((QFont*)this_)->key();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:268
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont8toStringEv(void *this_) {
  auto rv = ((QFont*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:269
// [1] bool fromString(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFont10fromStringERK7QString(void *this_, QString* arg0) {
  return (bool)((QFont*)this_)->fromString(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:271
// [8] QString substitute(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFont10substituteERK7QString(QString* arg0) {
  auto rv = QFont::substitute(*arg0);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:272
// [8] QStringList substitutes(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFont11substitutesERK7QString(QString* arg0) {
  auto rv = QFont::substitutes(*arg0);
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:273
// [8] QStringList substitutions()
extern "C" Q_DECL_EXPORT
void* C_ZN5QFont13substitutionsEv() {
  auto rv = QFont::substitutions();
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:274
// [-2] void insertSubstitution(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont18insertSubstitutionERK7QStringS2_(QString* arg0, QString* arg1) {
  QFont::insertSubstitution(*arg0, *arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:275
// [-2] void insertSubstitutions(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont19insertSubstitutionsERK7QStringRK11QStringList(QString* arg0, QStringList* arg1) {
  QFont::insertSubstitutions(*arg0, *arg1);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qfont.h:276
// [-2] void removeSubstitutions(const QString &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN5QFont19removeSubstitutionsERK7QString(QString* arg0) {
  QFont::removeSubstitutions(*arg0);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:280
// [-2] void initialize()
extern "C" Q_DECL_EXPORT
void C_ZN5QFont10initializeEv() {
  QFont::initialize();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:281
// [-2] void cleanup()
extern "C" Q_DECL_EXPORT
void C_ZN5QFont7cleanupEv() {
  QFont::cleanup();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:282
// [-2] void cacheStatistics()
extern "C" Q_DECL_EXPORT
void C_ZN5QFont15cacheStatisticsEv() {
  QFont::cacheStatistics();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:284
// [8] QString defaultFamily()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont13defaultFamilyEv(void *this_) {
  auto rv = ((QFont*)this_)->defaultFamily();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:285
// [8] QString lastResortFamily()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont16lastResortFamilyEv(void *this_) {
  auto rv = ((QFont*)this_)->lastResortFamily();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:286
// [8] QString lastResortFont()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont14lastResortFontEv(void *this_) {
  auto rv = ((QFont*)this_)->lastResortFont();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:288
// [16] QFont resolve(const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFont7resolveERKS_(void *this_, QFont* arg0) {
  auto rv = ((QFont*)this_)->resolve(*arg0);
return new QFont(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:289
// [4] uint resolve()
extern "C" Q_DECL_EXPORT
uint C_ZNK5QFont7resolveEv(void *this_) {
  return (uint)((QFont*)this_)->resolve();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:290
// [-2] void resolve(uint)
extern "C" Q_DECL_EXPORT
void C_ZN5QFont7resolveEj(void *this_, uint mask) {
  ((QFont*)this_)->resolve(mask);
}

//  main block end
