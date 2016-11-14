// /usr/include/qt/QtGui/qfont.h
#include <qfont.h>
#include <QtGui>

// /usr/include/qt/QtGui/qfont.h:160
// void QFont()
extern "C"
void* C_ZN5QFontC1Ev() {
  return new QFont();
}
// /usr/include/qt/QtGui/qfont.h:161
// void QFont(const class QString &, int, int, _Bool)
extern "C"
void* C_ZN5QFontC1ERK7QStringiib(const QString & family, int pointSize, int weight, bool italic) {
  return new QFont(family, pointSize, weight, italic);
}
// /usr/include/qt/QtGui/qfont.h:162
// void QFont(const class QFont &, class QPaintDevice *)
extern "C"
void* C_ZN5QFontC1ERKS_P12QPaintDevice(const QFont & a0, QPaintDevice * pd) {
  return new QFont(a0, pd);
}
// /usr/include/qt/QtGui/qfont.h:164
// void ~QFont()
extern "C"
void C_ZN5QFontD1Ev(void *this_) {
  delete (QFont*)(this_);
}
// inline
// /usr/include/qt/QtGui/qfont.h:166
// void swap(class QFont &)
extern "C"
void C_ZN5QFont4swapERS_(void *this_, QFont & other) {
  ((QFont*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qfont.h:169
// QString family()
extern "C"
void C_ZNK5QFont6familyEv(void *this_) {
  /*return*/ ((QFont*)this_)->family();
}
// /usr/include/qt/QtGui/qfont.h:170
// void setFamily(const class QString &)
extern "C"
void C_ZN5QFont9setFamilyERK7QString(void *this_, const QString & a0) {
  ((QFont*)this_)->setFamily(a0);
}
// /usr/include/qt/QtGui/qfont.h:172
// QString styleName()
extern "C"
void C_ZNK5QFont9styleNameEv(void *this_) {
  /*return*/ ((QFont*)this_)->styleName();
}
// /usr/include/qt/QtGui/qfont.h:173
// void setStyleName(const class QString &)
extern "C"
void C_ZN5QFont12setStyleNameERK7QString(void *this_, const QString & a0) {
  ((QFont*)this_)->setStyleName(a0);
}
// /usr/include/qt/QtGui/qfont.h:175
// int pointSize()
extern "C"
void C_ZNK5QFont9pointSizeEv(void *this_) {
  /*return*/ ((QFont*)this_)->pointSize();
}
// /usr/include/qt/QtGui/qfont.h:176
// void setPointSize(int)
extern "C"
void C_ZN5QFont12setPointSizeEi(void *this_, int a0) {
  ((QFont*)this_)->setPointSize(a0);
}
// /usr/include/qt/QtGui/qfont.h:177
// qreal pointSizeF()
extern "C"
void C_ZNK5QFont10pointSizeFEv(void *this_) {
  /*return*/ ((QFont*)this_)->pointSizeF();
}
// /usr/include/qt/QtGui/qfont.h:178
// void setPointSizeF(qreal)
extern "C"
void C_ZN5QFont13setPointSizeFEd(void *this_, qreal a0) {
  ((QFont*)this_)->setPointSizeF(a0);
}
// /usr/include/qt/QtGui/qfont.h:180
// int pixelSize()
extern "C"
void C_ZNK5QFont9pixelSizeEv(void *this_) {
  /*return*/ ((QFont*)this_)->pixelSize();
}
// /usr/include/qt/QtGui/qfont.h:181
// void setPixelSize(int)
extern "C"
void C_ZN5QFont12setPixelSizeEi(void *this_, int a0) {
  ((QFont*)this_)->setPixelSize(a0);
}
// /usr/include/qt/QtGui/qfont.h:183
// int weight()
extern "C"
void C_ZNK5QFont6weightEv(void *this_) {
  /*return*/ ((QFont*)this_)->weight();
}
// /usr/include/qt/QtGui/qfont.h:184
// void setWeight(int)
extern "C"
void C_ZN5QFont9setWeightEi(void *this_, int a0) {
  ((QFont*)this_)->setWeight(a0);
}
// inline
// /usr/include/qt/QtGui/qfont.h:186
// bool bold()
extern "C"
void C_ZNK5QFont4boldEv(void *this_) {
  /*return*/ ((QFont*)this_)->bold();
}
// inline
// /usr/include/qt/QtGui/qfont.h:187
// void setBold(_Bool)
extern "C"
void C_ZN5QFont7setBoldEb(void *this_, bool a0) {
  ((QFont*)this_)->setBold(a0);
}
// /usr/include/qt/QtGui/qfont.h:189
// void setStyle(enum QFont::Style)
extern "C"
void C_ZN5QFont8setStyleENS_5StyleE(void *this_, QFont::Style style) {
  ((QFont*)this_)->setStyle(style);
}
// /usr/include/qt/QtGui/qfont.h:190
// QFont::Style style()
extern "C"
void C_ZNK5QFont5styleEv(void *this_) {
  /*return*/ ((QFont*)this_)->style();
}
// inline
// /usr/include/qt/QtGui/qfont.h:192
// bool italic()
extern "C"
void C_ZNK5QFont6italicEv(void *this_) {
  /*return*/ ((QFont*)this_)->italic();
}
// inline
// /usr/include/qt/QtGui/qfont.h:193
// void setItalic(_Bool)
extern "C"
void C_ZN5QFont9setItalicEb(void *this_, bool b) {
  ((QFont*)this_)->setItalic(b);
}
// /usr/include/qt/QtGui/qfont.h:195
// bool underline()
extern "C"
void C_ZNK5QFont9underlineEv(void *this_) {
  /*return*/ ((QFont*)this_)->underline();
}
// /usr/include/qt/QtGui/qfont.h:196
// void setUnderline(_Bool)
extern "C"
void C_ZN5QFont12setUnderlineEb(void *this_, bool a0) {
  ((QFont*)this_)->setUnderline(a0);
}
// /usr/include/qt/QtGui/qfont.h:198
// bool overline()
extern "C"
void C_ZNK5QFont8overlineEv(void *this_) {
  /*return*/ ((QFont*)this_)->overline();
}
// /usr/include/qt/QtGui/qfont.h:199
// void setOverline(_Bool)
extern "C"
void C_ZN5QFont11setOverlineEb(void *this_, bool a0) {
  ((QFont*)this_)->setOverline(a0);
}
// /usr/include/qt/QtGui/qfont.h:201
// bool strikeOut()
extern "C"
void C_ZNK5QFont9strikeOutEv(void *this_) {
  /*return*/ ((QFont*)this_)->strikeOut();
}
// /usr/include/qt/QtGui/qfont.h:202
// void setStrikeOut(_Bool)
extern "C"
void C_ZN5QFont12setStrikeOutEb(void *this_, bool a0) {
  ((QFont*)this_)->setStrikeOut(a0);
}
// /usr/include/qt/QtGui/qfont.h:204
// bool fixedPitch()
extern "C"
void C_ZNK5QFont10fixedPitchEv(void *this_) {
  /*return*/ ((QFont*)this_)->fixedPitch();
}
// /usr/include/qt/QtGui/qfont.h:205
// void setFixedPitch(_Bool)
extern "C"
void C_ZN5QFont13setFixedPitchEb(void *this_, bool a0) {
  ((QFont*)this_)->setFixedPitch(a0);
}
// /usr/include/qt/QtGui/qfont.h:207
// bool kerning()
extern "C"
void C_ZNK5QFont7kerningEv(void *this_) {
  /*return*/ ((QFont*)this_)->kerning();
}
// /usr/include/qt/QtGui/qfont.h:208
// void setKerning(_Bool)
extern "C"
void C_ZN5QFont10setKerningEb(void *this_, bool a0) {
  ((QFont*)this_)->setKerning(a0);
}
// /usr/include/qt/QtGui/qfont.h:210
// QFont::StyleHint styleHint()
extern "C"
void C_ZNK5QFont9styleHintEv(void *this_) {
  /*return*/ ((QFont*)this_)->styleHint();
}
// /usr/include/qt/QtGui/qfont.h:211
// QFont::StyleStrategy styleStrategy()
extern "C"
void C_ZNK5QFont13styleStrategyEv(void *this_) {
  /*return*/ ((QFont*)this_)->styleStrategy();
}
// /usr/include/qt/QtGui/qfont.h:212
// void setStyleHint(enum QFont::StyleHint, enum QFont::StyleStrategy)
extern "C"
void C_ZN5QFont12setStyleHintENS_9StyleHintENS_13StyleStrategyE(void *this_, QFont::StyleHint a0, QFont::StyleStrategy a1) {
  ((QFont*)this_)->setStyleHint(a0, a1);
}
// /usr/include/qt/QtGui/qfont.h:213
// void setStyleStrategy(enum QFont::StyleStrategy)
extern "C"
void C_ZN5QFont16setStyleStrategyENS_13StyleStrategyE(void *this_, QFont::StyleStrategy s) {
  ((QFont*)this_)->setStyleStrategy(s);
}
// /usr/include/qt/QtGui/qfont.h:215
// int stretch()
extern "C"
void C_ZNK5QFont7stretchEv(void *this_) {
  /*return*/ ((QFont*)this_)->stretch();
}
// /usr/include/qt/QtGui/qfont.h:216
// void setStretch(int)
extern "C"
void C_ZN5QFont10setStretchEi(void *this_, int a0) {
  ((QFont*)this_)->setStretch(a0);
}
// /usr/include/qt/QtGui/qfont.h:218
// qreal letterSpacing()
extern "C"
void C_ZNK5QFont13letterSpacingEv(void *this_) {
  /*return*/ ((QFont*)this_)->letterSpacing();
}
// /usr/include/qt/QtGui/qfont.h:219
// QFont::SpacingType letterSpacingType()
extern "C"
void C_ZNK5QFont17letterSpacingTypeEv(void *this_) {
  /*return*/ ((QFont*)this_)->letterSpacingType();
}
// /usr/include/qt/QtGui/qfont.h:220
// void setLetterSpacing(enum QFont::SpacingType, qreal)
extern "C"
void C_ZN5QFont16setLetterSpacingENS_11SpacingTypeEd(void *this_, QFont::SpacingType type, qreal spacing) {
  ((QFont*)this_)->setLetterSpacing(type, spacing);
}
// /usr/include/qt/QtGui/qfont.h:222
// qreal wordSpacing()
extern "C"
void C_ZNK5QFont11wordSpacingEv(void *this_) {
  /*return*/ ((QFont*)this_)->wordSpacing();
}
// /usr/include/qt/QtGui/qfont.h:223
// void setWordSpacing(qreal)
extern "C"
void C_ZN5QFont14setWordSpacingEd(void *this_, qreal spacing) {
  ((QFont*)this_)->setWordSpacing(spacing);
}
// /usr/include/qt/QtGui/qfont.h:225
// void setCapitalization(enum QFont::Capitalization)
extern "C"
void C_ZN5QFont17setCapitalizationENS_14CapitalizationE(void *this_, QFont::Capitalization a0) {
  ((QFont*)this_)->setCapitalization(a0);
}
// /usr/include/qt/QtGui/qfont.h:226
// QFont::Capitalization capitalization()
extern "C"
void C_ZNK5QFont14capitalizationEv(void *this_) {
  /*return*/ ((QFont*)this_)->capitalization();
}
// /usr/include/qt/QtGui/qfont.h:228
// void setHintingPreference(enum QFont::HintingPreference)
extern "C"
void C_ZN5QFont20setHintingPreferenceENS_17HintingPreferenceE(void *this_, QFont::HintingPreference hintingPreference) {
  ((QFont*)this_)->setHintingPreference(hintingPreference);
}
// /usr/include/qt/QtGui/qfont.h:229
// QFont::HintingPreference hintingPreference()
extern "C"
void C_ZNK5QFont17hintingPreferenceEv(void *this_) {
  /*return*/ ((QFont*)this_)->hintingPreference();
}
// /usr/include/qt/QtGui/qfont.h:232
// bool rawMode()
extern "C"
void C_ZNK5QFont7rawModeEv(void *this_) {
  /*return*/ ((QFont*)this_)->rawMode();
}
// /usr/include/qt/QtGui/qfont.h:233
// void setRawMode(_Bool)
extern "C"
void C_ZN5QFont10setRawModeEb(void *this_, bool a0) {
  ((QFont*)this_)->setRawMode(a0);
}
// /usr/include/qt/QtGui/qfont.h:237
// bool exactMatch()
extern "C"
void C_ZNK5QFont10exactMatchEv(void *this_) {
  /*return*/ ((QFont*)this_)->exactMatch();
}
// /usr/include/qt/QtGui/qfont.h:244
// bool isCopyOf(const class QFont &)
extern "C"
void C_ZNK5QFont8isCopyOfERKS_(void *this_, const QFont & a0) {
  /*return*/ ((QFont*)this_)->isCopyOf(a0);
}
// /usr/include/qt/QtGui/qfont.h:252
// void setRawName(const class QString &)
extern "C"
void C_ZN5QFont10setRawNameERK7QString(void *this_, const QString & a0) {
  ((QFont*)this_)->setRawName(a0);
}
// /usr/include/qt/QtGui/qfont.h:253
// QString rawName()
extern "C"
void C_ZNK5QFont7rawNameEv(void *this_) {
  /*return*/ ((QFont*)this_)->rawName();
}
// /usr/include/qt/QtGui/qfont.h:256
// QString key()
extern "C"
void C_ZNK5QFont3keyEv(void *this_) {
  /*return*/ ((QFont*)this_)->key();
}
// /usr/include/qt/QtGui/qfont.h:258
// QString toString()
extern "C"
void C_ZNK5QFont8toStringEv(void *this_) {
  /*return*/ ((QFont*)this_)->toString();
}
// /usr/include/qt/QtGui/qfont.h:259
// bool fromString(const class QString &)
extern "C"
void C_ZN5QFont10fromStringERK7QString(void *this_, const QString & a0) {
  /*return*/ ((QFont*)this_)->fromString(a0);
}
// static
// /usr/include/qt/QtGui/qfont.h:261
// QString substitute(const class QString &)
extern "C"
void C_ZN5QFont10substituteERK7QString(const QString & a0) {
  /*return*/ QFont::substitute(a0);
}
// static
// /usr/include/qt/QtGui/qfont.h:262
// QStringList substitutes(const class QString &)
extern "C"
void C_ZN5QFont11substitutesERK7QString(const QString & a0) {
  /*return*/ QFont::substitutes(a0);
}
// static
// /usr/include/qt/QtGui/qfont.h:263
// QStringList substitutions()
extern "C"
void C_ZN5QFont13substitutionsEv() {
  /*return*/ QFont::substitutions();
}
// static
// /usr/include/qt/QtGui/qfont.h:264
// void insertSubstitution(const class QString &, const class QString &)
extern "C"
void C_ZN5QFont18insertSubstitutionERK7QStringS2_(const QString & a0, const QString & a1) {
  QFont::insertSubstitution(a0, a1);
}
// static
// /usr/include/qt/QtGui/qfont.h:265
// void insertSubstitutions(const class QString &, const class QStringList &)
extern "C"
void C_ZN5QFont19insertSubstitutionsERK7QStringRK11QStringList(const QString & a0, const QStringList & a1) {
  QFont::insertSubstitutions(a0, a1);
}
// static
// /usr/include/qt/QtGui/qfont.h:266
// void removeSubstitutions(const class QString &)
extern "C"
void C_ZN5QFont19removeSubstitutionsERK7QString(const QString & a0) {
  QFont::removeSubstitutions(a0);
}
// static
// /usr/include/qt/QtGui/qfont.h:270
// void initialize()
extern "C"
void C_ZN5QFont10initializeEv() {
  QFont::initialize();
}
// static
// /usr/include/qt/QtGui/qfont.h:271
// void cleanup()
extern "C"
void C_ZN5QFont7cleanupEv() {
  QFont::cleanup();
}
// static
// /usr/include/qt/QtGui/qfont.h:272
// void cacheStatistics()
extern "C"
void C_ZN5QFont15cacheStatisticsEv() {
  QFont::cacheStatistics();
}
// /usr/include/qt/QtGui/qfont.h:274
// QString defaultFamily()
extern "C"
void C_ZNK5QFont13defaultFamilyEv(void *this_) {
  /*return*/ ((QFont*)this_)->defaultFamily();
}
// /usr/include/qt/QtGui/qfont.h:275
// QString lastResortFamily()
extern "C"
void C_ZNK5QFont16lastResortFamilyEv(void *this_) {
  /*return*/ ((QFont*)this_)->lastResortFamily();
}
// /usr/include/qt/QtGui/qfont.h:276
// QString lastResortFont()
extern "C"
void C_ZNK5QFont14lastResortFontEv(void *this_) {
  /*return*/ ((QFont*)this_)->lastResortFont();
}
// /usr/include/qt/QtGui/qfont.h:278
// QFont resolve(const class QFont &)
extern "C"
void C_ZNK5QFont7resolveERKS_(void *this_, const QFont & a0) {
  /*return*/ ((QFont*)this_)->resolve(a0);
}
// inline
// /usr/include/qt/QtGui/qfont.h:279
// uint resolve()
extern "C"
void C_ZNK5QFont7resolveEv(void *this_) {
  /*return*/ ((QFont*)this_)->resolve();
}
// inline
// /usr/include/qt/QtGui/qfont.h:280
// void resolve(uint)
extern "C"
void C_ZN5QFont7resolveEj(void *this_, uint mask) {
  ((QFont*)this_)->resolve(mask);
}