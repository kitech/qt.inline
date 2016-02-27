// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qfont.h
// dst-file: /src/gui/qfont.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfont.h>


#include <qstring.h>
#include <qstringlist.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qfont_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 186, column 17>
//   // proto:  bool QFont::italic();
if (true) {
  auto f = [](QFont flythis) {
    ((QFont*)0)->italic();
    flythis.italic();
  };
  if (f == nullptr){}
}
// _ZNK5QFont6italicEv italic()
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 187, column 17>
//   // proto:  void QFont::setItalic(bool b);
if (true) {
  auto f = [](QFont flythis, bool arg1) {
    ((QFont*)0)->setItalic(arg1);
    flythis.setItalic(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFont9setItalicEb setItalic(_Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 274, column 17>
//   // proto:  void QFont::resolve(uint mask);
if (true) {
  auto f = [](QFont flythis, uint arg1) {
    ((QFont*)0)->resolve(arg1);
    flythis.resolve(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFont7resolveEj resolve(uint)
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 181, column 17>
//   // proto:  void QFont::setBold(bool );
if (true) {
  auto f = [](QFont flythis, bool arg1) {
    ((QFont*)0)->setBold(arg1);
    flythis.setBold(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFont7setBoldEb setBold(_Bool)
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 180, column 17>
//   // proto:  bool QFont::bold();
if (true) {
  auto f = [](QFont flythis) {
    ((QFont*)0)->bold();
    flythis.bold();
  };
  if (f == nullptr){}
}
// _ZNK5QFont4boldEv bold()
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 160, column 10>
//   // proto:  void QFont::swap(QFont & other);
if (true) {
  auto f = [](QFont flythis, QFont & arg1) {
    ((QFont*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFont4swapERS_ swap(class QFont &)
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 273, column 17>
//   // proto:  uint QFont::resolve();
if (true) {
  auto f = [](QFont flythis) {
    ((QFont*)0)->resolve();
    flythis.resolve();
  };
  if (f == nullptr){}
}
// _ZNK5QFont7resolveEv resolve()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFont_Class_Size()
{
  return sizeof(QFont);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 217, column 10>
//   // proto:  void QFont::setWordSpacing(qreal spacing);
// _ZN5QFont14setWordSpacingEd setWordSpacing(qreal)
extern "C"
void
C_ZN5QFont14setWordSpacingEd(void *qthis,
qreal arg1) {
  ((QFont*)qthis)->setWordSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 183, column 10>
//   // proto:  void QFont::setStyle(QFont::Style style);
// _ZN5QFont8setStyleENS_5StyleE setStyle(enum QFont::Style)
extern "C"
void
C_ZN5QFont8setStyleENS_5StyleE(void *qthis,
QFont::Style arg1) {
  ((QFont*)qthis)->setStyle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 247, column 27>
//   // proto:  QString QFont::rawName();
// _ZNK5QFont7rawNameEv rawName()
extern "C"
QString*
C_ZNK5QFont7rawNameEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->rawName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 227, column 10>
//   // proto:  void QFont::setRawMode(bool );
// _ZN5QFont10setRawModeEb setRawMode(_Bool)
extern "C"
void
C_ZN5QFont10setRawModeEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setRawMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 167, column 10>
//   // proto:  void QFont::setStyleName(const QString & );
// _ZN5QFont12setStyleNameERK7QString setStyleName(const class QString &)
extern "C"
void
C_ZN5QFont12setStyleNameERK7QString(void *qthis,
const QString* arg1) {
  ((QFont*)qthis)->setStyleName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 272, column 11>
//   // proto:  QFont QFont::resolve(const QFont & );
// _ZNK5QFont7resolveERKS_ resolve(const class QFont &)
extern "C"
QFont*
C_ZNK5QFont7resolveERKS_(void *qthis,
const QFont* arg1) {
  auto ret =
  ((QFont*)qthis)->resolve(*((const QFont*)arg1));
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 195, column 10>
//   // proto:  bool QFont::strikeOut();
// _ZNK5QFont9strikeOutEv strikeOut()
extern "C"
bool
C_ZNK5QFont9strikeOutEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->strikeOut();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 174, column 9>
//   // proto:  int QFont::pixelSize();
// _ZNK5QFont9pixelSizeEv pixelSize()
extern "C"
int
C_ZNK5QFont9pixelSizeEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->pixelSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 222, column 10>
//   // proto:  void QFont::setHintingPreference(QFont::HintingPreference hintingPreference);
// _ZN5QFont20setHintingPreferenceENS_17HintingPreferenceE setHintingPreference(enum QFont::HintingPreference)
extern "C"
void
C_ZN5QFont20setHintingPreferenceENS_17HintingPreferenceE(void *qthis,
QFont::HintingPreference arg1) {
  ((QFont*)qthis)->setHintingPreference(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 178, column 10>
//   // proto:  void QFont::setWeight(int );
// _ZN5QFont9setWeightEi setWeight(int)
extern "C"
void
C_ZN5QFont9setWeightEi(void *qthis,
int arg1) {
  ((QFont*)qthis)->setWeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 177, column 9>
//   // proto:  int QFont::weight();
// _ZNK5QFont6weightEv weight()
extern "C"
int
C_ZNK5QFont6weightEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->weight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 259, column 17>
//   // proto: static void QFont::insertSubstitutions(const QString & , const QStringList & );
// _ZN5QFont19insertSubstitutionsERK7QStringRK11QStringList insertSubstitutions(const class QString &, const class QStringList &)
extern "C"
void
C_ZN5QFont19insertSubstitutionsERK7QStringRK11QStringList(const QString* arg1,
const QStringList* arg2) {
  QFont::insertSubstitutions(*((const QString*)arg1),
*((const QStringList*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 201, column 10>
//   // proto:  bool QFont::kerning();
// _ZNK5QFont7kerningEv kerning()
extern "C"
bool
C_ZNK5QFont7kerningEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->kerning();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 257, column 24>
//   // proto: static QStringList QFont::substitutions();
// _ZN5QFont13substitutionsEv substitutions()
extern "C"
QStringList*
C_ZN5QFont13substitutionsEv() {
  auto ret =
  QFont::substitutions();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 186, column 17>
//   // proto:  bool QFont::italic();
// _ZNK5QFont6italicEv italic()
extern "C"
bool
C_ZNK5QFont6italicEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->italic();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 190, column 10>
//   // proto:  void QFont::setUnderline(bool );
// _ZN5QFont12setUnderlineEb setUnderline(_Bool)
extern "C"
void
C_ZN5QFont12setUnderlineEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setUnderline(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 212, column 11>
//   // proto:  qreal QFont::letterSpacing();
// _ZNK5QFont13letterSpacingEv letterSpacing()
extern "C"
double
C_ZNK5QFont13letterSpacingEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->letterSpacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 170, column 10>
//   // proto:  void QFont::setPointSize(int );
// _ZN5QFont12setPointSizeEi setPointSize(int)
extern "C"
void
C_ZN5QFont12setPointSizeEi(void *qthis,
int arg1) {
  ((QFont*)qthis)->setPointSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 155, column 5>
//   // proto:  void QFont::QFont(const QString & family, int pointSize, int weight, bool italic);
extern "C"
QFont*
C_ZN5QFontC2ERK7QStringiib(const QString* arg1,
int arg2,
int arg3,
bool arg4) {
  auto ret = new QFont(*((const QString*)arg1), arg2, arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 214, column 10>
//   // proto:  void QFont::setLetterSpacing(QFont::SpacingType type, qreal spacing);
// _ZN5QFont16setLetterSpacingENS_11SpacingTypeEd setLetterSpacing(enum QFont::SpacingType, qreal)
extern "C"
void
C_ZN5QFont16setLetterSpacingENS_11SpacingTypeEd(void *qthis,
QFont::SpacingType arg1,
qreal arg2) {
  ((QFont*)qthis)->setLetterSpacing(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 193, column 10>
//   // proto:  void QFont::setOverline(bool );
// _ZN5QFont11setOverlineEb setOverline(_Bool)
extern "C"
void
C_ZN5QFont11setOverlineEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setOverline(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 184, column 11>
//   // proto:  QFont::Style QFont::style();
// _ZNK5QFont5styleEv style()
extern "C"
QFont::Style
C_ZNK5QFont5styleEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->style();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 163, column 13>
//   // proto:  QString QFont::family();
// _ZNK5QFont6familyEv family()
extern "C"
QString*
C_ZNK5QFont6familyEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->family();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 269, column 13>
//   // proto:  QString QFont::lastResortFamily();
// _ZNK5QFont16lastResortFamilyEv lastResortFamily()
extern "C"
QString*
C_ZNK5QFont16lastResortFamilyEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->lastResortFamily();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 187, column 17>
//   // proto:  void QFont::setItalic(bool b);
// _ZN5QFont9setItalicEb setItalic(_Bool)
extern "C"
void
C_ZN5QFont9setItalicEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setItalic(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 164, column 10>
//   // proto:  void QFont::setFamily(const QString & );
// _ZN5QFont9setFamilyERK7QString setFamily(const class QString &)
extern "C"
void
C_ZN5QFont9setFamilyERK7QString(void *qthis,
const QString* arg1) {
  ((QFont*)qthis)->setFamily(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 157, column 5>
//   // proto:  void QFont::QFont(const QFont & );
extern "C"
QFont*
C_ZN5QFontC2ERKS_(const QFont* arg1) {
  auto ret = new QFont(*((const QFont*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 192, column 10>
//   // proto:  bool QFont::overline();
// _ZNK5QFont8overlineEv overline()
extern "C"
bool
C_ZNK5QFont8overlineEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->overline();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QFont::~QFont();
extern "C"
void C_ZN5QFontD2Ev(void *qthis) {
  delete (QFont*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 274, column 17>
//   // proto:  void QFont::resolve(uint mask);
// _ZN5QFont7resolveEj resolve(uint)
extern "C"
void
C_ZN5QFont7resolveEj(void *qthis,
uint arg1) {
  ((QFont*)qthis)->resolve(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 181, column 17>
//   // proto:  void QFont::setBold(bool );
// _ZN5QFont7setBoldEb setBold(_Bool)
extern "C"
void
C_ZN5QFont7setBoldEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setBold(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 266, column 17>
//   // proto: static void QFont::cacheStatistics();
// _ZN5QFont15cacheStatisticsEv cacheStatistics()
extern "C"
void
C_ZN5QFont15cacheStatisticsEv() {
  QFont::cacheStatistics();
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 172, column 10>
//   // proto:  void QFont::setPointSizeF(qreal );
// _ZN5QFont13setPointSizeFEd setPointSizeF(qreal)
extern "C"
void
C_ZN5QFont13setPointSizeFEd(void *qthis,
qreal arg1) {
  ((QFont*)qthis)->setPointSizeF(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 219, column 10>
//   // proto:  void QFont::setCapitalization(QFont::Capitalization );
// _ZN5QFont17setCapitalizationENS_14CapitalizationE setCapitalization(enum QFont::Capitalization)
extern "C"
void
C_ZN5QFont17setCapitalizationENS_14CapitalizationE(void *qthis,
QFont::Capitalization arg1) {
  ((QFont*)qthis)->setCapitalization(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 256, column 24>
//   // proto: static QStringList QFont::substitutes(const QString & );
// _ZN5QFont11substitutesERK7QString substitutes(const class QString &)
extern "C"
QStringList*
C_ZN5QFont11substitutesERK7QString(const QString* arg1) {
  auto ret =
  QFont::substitutes(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 216, column 11>
//   // proto:  qreal QFont::wordSpacing();
// _ZNK5QFont11wordSpacingEv wordSpacing()
extern "C"
double
C_ZNK5QFont11wordSpacingEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->wordSpacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 252, column 13>
//   // proto:  QString QFont::toString();
// _ZNK5QFont8toStringEv toString()
extern "C"
QString*
C_ZNK5QFont8toStringEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->toString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 171, column 11>
//   // proto:  qreal QFont::pointSizeF();
// _ZNK5QFont10pointSizeFEv pointSizeF()
extern "C"
double
C_ZNK5QFont10pointSizeFEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->pointSizeF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 258, column 17>
//   // proto: static void QFont::insertSubstitution(const QString & , const QString & );
// _ZN5QFont18insertSubstitutionERK7QStringS2_ insertSubstitution(const class QString &, const class QString &)
extern "C"
void
C_ZN5QFont18insertSubstitutionERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  QFont::insertSubstitution(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 210, column 10>
//   // proto:  void QFont::setStretch(int );
// _ZN5QFont10setStretchEi setStretch(int)
extern "C"
void
C_ZN5QFont10setStretchEi(void *qthis,
int arg1) {
  ((QFont*)qthis)->setStretch(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 166, column 13>
//   // proto:  QString QFont::styleName();
// _ZNK5QFont9styleNameEv styleName()
extern "C"
QString*
C_ZNK5QFont9styleNameEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->styleName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 154, column 5>
//   // proto:  void QFont::QFont();
extern "C"
QFont*
C_ZN5QFontC2Ev() {
  auto ret = new QFont();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 223, column 23>
//   // proto:  QFont::HintingPreference QFont::hintingPreference();
// _ZNK5QFont17hintingPreferenceEv hintingPreference()
extern "C"
QFont::HintingPreference
C_ZNK5QFont17hintingPreferenceEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->hintingPreference();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 206, column 10>
//   // proto:  void QFont::setStyleHint(QFont::StyleHint , QFont::StyleStrategy );
// _ZN5QFont12setStyleHintENS_9StyleHintENS_13StyleStrategyE setStyleHint(enum QFont::StyleHint, enum QFont::StyleStrategy)
extern "C"
void
C_ZN5QFont12setStyleHintENS_9StyleHintENS_13StyleStrategyE(void *qthis,
QFont::StyleHint arg1,
QFont::StyleStrategy arg2) {
  ((QFont*)qthis)->setStyleHint(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 226, column 10>
//   // proto:  bool QFont::rawMode();
// _ZNK5QFont7rawModeEv rawMode()
extern "C"
bool
C_ZNK5QFont7rawModeEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->rawMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 253, column 10>
//   // proto:  bool QFont::fromString(const QString & );
// _ZN5QFont10fromStringERK7QString fromString(const class QString &)
extern "C"
bool
C_ZN5QFont10fromStringERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFont*)qthis)->fromString(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 204, column 15>
//   // proto:  QFont::StyleHint QFont::styleHint();
// _ZNK5QFont9styleHintEv styleHint()
extern "C"
QFont::StyleHint
C_ZNK5QFont9styleHintEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->styleHint();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 189, column 10>
//   // proto:  bool QFont::underline();
// _ZNK5QFont9underlineEv underline()
extern "C"
bool
C_ZNK5QFont9underlineEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->underline();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 238, column 10>
//   // proto:  bool QFont::isCopyOf(const QFont & );
// _ZNK5QFont8isCopyOfERKS_ isCopyOf(const class QFont &)
extern "C"
bool
C_ZNK5QFont8isCopyOfERKS_(void *qthis,
const QFont* arg1) {
  auto ret =
  ((QFont*)qthis)->isCopyOf(*((const QFont*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 169, column 9>
//   // proto:  int QFont::pointSize();
// _ZNK5QFont9pointSizeEv pointSize()
extern "C"
int
C_ZNK5QFont9pointSizeEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->pointSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 202, column 10>
//   // proto:  void QFont::setKerning(bool );
// _ZN5QFont10setKerningEb setKerning(_Bool)
extern "C"
void
C_ZN5QFont10setKerningEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setKerning(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 180, column 17>
//   // proto:  bool QFont::bold();
// _ZNK5QFont4boldEv bold()
extern "C"
bool
C_ZNK5QFont4boldEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->bold();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 198, column 10>
//   // proto:  bool QFont::fixedPitch();
// _ZNK5QFont10fixedPitchEv fixedPitch()
extern "C"
bool
C_ZNK5QFont10fixedPitchEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->fixedPitch();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 156, column 5>
//   // proto:  void QFont::QFont(const QFont & , QPaintDevice * pd);
extern "C"
QFont*
C_ZN5QFontC2ERKS_P12QPaintDevice(const QFont* arg1,
QPaintDevice * arg2) {
  auto ret = new QFont(*((const QFont*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 255, column 20>
//   // proto: static QString QFont::substitute(const QString & );
// _ZN5QFont10substituteERK7QString substitute(const class QString &)
extern "C"
QString*
C_ZN5QFont10substituteERK7QString(const QString* arg1) {
  auto ret =
  QFont::substitute(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 207, column 10>
//   // proto:  void QFont::setStyleStrategy(QFont::StyleStrategy s);
// _ZN5QFont16setStyleStrategyENS_13StyleStrategyE setStyleStrategy(enum QFont::StyleStrategy)
extern "C"
void
C_ZN5QFont16setStyleStrategyENS_13StyleStrategyE(void *qthis,
QFont::StyleStrategy arg1) {
  ((QFont*)qthis)->setStyleStrategy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 205, column 19>
//   // proto:  QFont::StyleStrategy QFont::styleStrategy();
// _ZNK5QFont13styleStrategyEv styleStrategy()
extern "C"
QFont::StyleStrategy
C_ZNK5QFont13styleStrategyEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->styleStrategy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 213, column 17>
//   // proto:  QFont::SpacingType QFont::letterSpacingType();
// _ZNK5QFont17letterSpacingTypeEv letterSpacingType()
extern "C"
QFont::SpacingType
C_ZNK5QFont17letterSpacingTypeEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->letterSpacingType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 199, column 10>
//   // proto:  void QFont::setFixedPitch(bool );
// _ZN5QFont13setFixedPitchEb setFixedPitch(_Bool)
extern "C"
void
C_ZN5QFont13setFixedPitchEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setFixedPitch(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 260, column 17>
//   // proto: static void QFont::removeSubstitutions(const QString & );
// _ZN5QFont19removeSubstitutionsERK7QString removeSubstitutions(const class QString &)
extern "C"
void
C_ZN5QFont19removeSubstitutionsERK7QString(const QString* arg1) {
  QFont::removeSubstitutions(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 175, column 10>
//   // proto:  void QFont::setPixelSize(int );
// _ZN5QFont12setPixelSizeEi setPixelSize(int)
extern "C"
void
C_ZN5QFont12setPixelSizeEi(void *qthis,
int arg1) {
  ((QFont*)qthis)->setPixelSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 264, column 17>
//   // proto: static void QFont::initialize();
// _ZN5QFont10initializeEv initialize()
extern "C"
void
C_ZN5QFont10initializeEv() {
  QFont::initialize();
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 250, column 13>
//   // proto:  QString QFont::key();
// _ZNK5QFont3keyEv key()
extern "C"
QString*
C_ZNK5QFont3keyEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->key();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 270, column 13>
//   // proto:  QString QFont::lastResortFont();
// _ZNK5QFont14lastResortFontEv lastResortFont()
extern "C"
QString*
C_ZNK5QFont14lastResortFontEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->lastResortFont();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 220, column 20>
//   // proto:  QFont::Capitalization QFont::capitalization();
// _ZNK5QFont14capitalizationEv capitalization()
extern "C"
QFont::Capitalization
C_ZNK5QFont14capitalizationEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->capitalization();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 160, column 10>
//   // proto:  void QFont::swap(QFont & other);
// _ZN5QFont4swapERS_ swap(class QFont &)
extern "C"
void
C_ZN5QFont4swapERS_(void *qthis,
QFont* arg1) {
  ((QFont*)qthis)->swap(*((QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 268, column 13>
//   // proto:  QString QFont::defaultFamily();
// _ZNK5QFont13defaultFamilyEv defaultFamily()
extern "C"
QString*
C_ZNK5QFont13defaultFamilyEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->defaultFamily();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 196, column 10>
//   // proto:  void QFont::setStrikeOut(bool );
// _ZN5QFont12setStrikeOutEb setStrikeOut(_Bool)
extern "C"
void
C_ZN5QFont12setStrikeOutEb(void *qthis,
bool arg1) {
  ((QFont*)qthis)->setStrikeOut(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 273, column 17>
//   // proto:  uint QFont::resolve();
// _ZNK5QFont7resolveEv resolve()
extern "C"
unsigned int
C_ZNK5QFont7resolveEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->resolve();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 265, column 17>
//   // proto: static void QFont::cleanup();
// _ZN5QFont7cleanupEv cleanup()
extern "C"
void
C_ZN5QFont7cleanupEv() {
  QFont::cleanup();
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 231, column 10>
//   // proto:  bool QFont::exactMatch();
// _ZNK5QFont10exactMatchEv exactMatch()
extern "C"
bool
C_ZNK5QFont10exactMatchEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->exactMatch();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 209, column 9>
//   // proto:  int QFont::stretch();
// _ZNK5QFont7stretchEv stretch()
extern "C"
int
C_ZNK5QFont7stretchEv(void *qthis) {
  auto ret =
  ((QFont*)qthis)->stretch();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfont.h', line 246, column 24>
//   // proto:  void QFont::setRawName(const QString & );
// _ZN5QFont10setRawNameERK7QString setRawName(const class QString &)
extern "C"
void
C_ZN5QFont10setRawNameERK7QString(void *qthis,
const QString* arg1) {
  ((QFont*)qthis)->setRawName(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

