//  header block begin
// since 0x040800
// /usr/include/qt/QtGui/qrawfont.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrawfont.h>
#include <QtGui>
#include "callback_inherit.h"

// QRawFont is pure virtual: false
// QRawFont has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRawFont : public QRawFont {
public:
  virtual ~MyQRawFont() {}
// void QRawFont()
MyQRawFont() : QRawFont() {}
// void QRawFont(const QString &, qreal, QFont::HintingPreference)
MyQRawFont(const QString & fileName, qreal pixelSize, QFont::HintingPreference hintingPreference) : QRawFont(fileName, pixelSize, hintingPreference) {}
// void QRawFont(const QByteArray &, qreal, QFont::HintingPreference)
MyQRawFont(const QByteArray & fontData, qreal pixelSize, QFont::HintingPreference hintingPreference) : QRawFont(fontData, pixelSize, hintingPreference) {}
// void QRawFont(const QRawFont &)
MyQRawFont(const QRawFont & other) : QRawFont(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:74
// [-2] void QRawFont()
extern "C" Q_DECL_EXPORT
void* C_ZN8QRawFontC2Ev() {
  return  new QRawFont();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:75
// [-2] void QRawFont(const QString &, qreal, QFont::HintingPreference)
extern "C" Q_DECL_EXPORT
void* C_ZN8QRawFontC2ERK7QStringdN5QFont17HintingPreferenceE(QString* fileName, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  return  new QRawFont(*fileName, pixelSize, hintingPreference);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:78
// [-2] void QRawFont(const QByteArray &, qreal, QFont::HintingPreference)
extern "C" Q_DECL_EXPORT
void* C_ZN8QRawFontC2ERK10QByteArraydN5QFont17HintingPreferenceE(QByteArray* fontData, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  return  new QRawFont(*fontData, pixelSize, hintingPreference);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:81
// [-2] void QRawFont(const QRawFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QRawFontC2ERKS_(QRawFont* other) {
  return  new QRawFont(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:83
// [8] QRawFont & operator=(QRawFont &&)
extern "C" Q_DECL_EXPORT
void* C_ZN8QRawFontaSEOS_(void *this_, QRawFont && other) {
  auto& rv = ((QRawFont*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:85
// [8] QRawFont & operator=(const QRawFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QRawFontaSERKS_(void *this_, QRawFont* other) {
  auto& rv = ((QRawFont*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:86
// [-2] void ~QRawFont()
extern "C" Q_DECL_EXPORT
void C_ZN8QRawFontD2Ev(void *this_) {
  delete (QRawFont*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qrawfont.h:88
// [-2] void swap(QRawFont &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN8QRawFont4swapERS_(void *this_, QRawFont* other) {
  ((QRawFont*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:90
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFont7isValidEv(void *this_) {
  return (bool)((QRawFont*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:92
// [1] bool operator==(const QRawFont &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFonteqERKS_(void *this_, QRawFont* other) {
  return (bool)((QRawFont*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:93
// [1] bool operator!=(const QRawFont &)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFontneERKS_(void *this_, QRawFont* other) {
  return (bool)((QRawFont*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:96
// [8] QString familyName()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QRawFont10familyNameEv(void *this_) {
  auto rv = ((QRawFont*)this_)->familyName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:97
// [8] QString styleName()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QRawFont9styleNameEv(void *this_) {
  auto rv = ((QRawFont*)this_)->styleName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:99
// [4] QFont::Style style()
extern "C" Q_DECL_EXPORT
QFont::Style C_ZNK8QRawFont5styleEv(void *this_) {
  return (QFont::Style)((QRawFont*)this_)->style();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:100
// [4] int weight()
extern "C" Q_DECL_EXPORT
int C_ZNK8QRawFont6weightEv(void *this_) {
  return (int)((QRawFont*)this_)->weight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:102
// [8] QVector<quint32> glyphIndexesForString(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK8QRawFont21glyphIndexesForStringERK7QString(void *this_, QString* text) {
  auto rv = ((QRawFont*)this_)->glyphIndexesForString(*text);
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:103
// [8] QVector<QPointF> advancesForGlyphIndexes(const QVector<quint32> &)
extern "C" Q_DECL_EXPORT
void C_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE(void *this_, QVector<unsigned int>* glyphIndexes) {
  auto rv = ((QRawFont*)this_)->advancesForGlyphIndexes(*glyphIndexes);
/*return rv;*/
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:104
// [8] QVector<QPointF> advancesForGlyphIndexes(const QVector<quint32> &, QRawFont::LayoutFlags)
extern "C" Q_DECL_EXPORT
void C_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE6QFlagsINS_10LayoutFlagEE(void *this_, QVector<unsigned int>* glyphIndexes, QFlags<QRawFont::LayoutFlag> layoutFlags) {
  auto rv = ((QRawFont*)this_)->advancesForGlyphIndexes(*glyphIndexes, layoutFlags);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:105
// [1] bool glyphIndexesForChars(const QChar *, int, quint32 *, int *)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFont20glyphIndexesForCharsEPK5QChariPjPi(void *this_, const QChar * chars, int numChars, quint32 * glyphIndexes, int * numGlyphs) {
  return (bool)((QRawFont*)this_)->glyphIndexesForChars(chars, numChars, glyphIndexes, numGlyphs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:106
// [1] bool advancesForGlyphIndexes(const quint32 *, QPointF *, int)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi(void *this_, const quint32 * glyphIndexes, QPointF * advances, int numGlyphs) {
  return (bool)((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:107
// [1] bool advancesForGlyphIndexes(const quint32 *, QPointF *, int, QRawFont::LayoutFlags)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi6QFlagsINS_10LayoutFlagEE(void *this_, const quint32 * glyphIndexes, QPointF * advances, int numGlyphs, QFlags<QRawFont::LayoutFlag> layoutFlags) {
  return (bool)((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs, layoutFlags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:109
// [32] QImage alphaMapForGlyph(quint32, QRawFont::AntialiasingType, const QTransform &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QRawFont16alphaMapForGlyphEjNS_16AntialiasingTypeERK10QTransform(void *this_, quint32 glyphIndex, QRawFont::AntialiasingType antialiasingType, QTransform* transform) {
  auto rv = ((QRawFont*)this_)->alphaMapForGlyph(glyphIndex, antialiasingType, *transform);
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:112
// [8] QPainterPath pathForGlyph(quint32)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QRawFont12pathForGlyphEj(void *this_, quint32 glyphIndex) {
  auto rv = ((QRawFont*)this_)->pathForGlyph(glyphIndex);
return new QPainterPath(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qrawfont.h:113
// [32] QRectF boundingRect(quint32)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK8QRawFont12boundingRectEj(void *this_, quint32 glyphIndex) {
  auto rv = ((QRawFont*)this_)->boundingRect(glyphIndex);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:115
// [-2] void setPixelSize(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN8QRawFont12setPixelSizeEd(void *this_, qreal pixelSize) {
  ((QRawFont*)this_)->setPixelSize(pixelSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:116
// [8] qreal pixelSize()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont9pixelSizeEv(void *this_) {
  return (qreal)((QRawFont*)this_)->pixelSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:118
// [4] QFont::HintingPreference hintingPreference()
extern "C" Q_DECL_EXPORT
QFont::HintingPreference C_ZNK8QRawFont17hintingPreferenceEv(void *this_) {
  return (QFont::HintingPreference)((QRawFont*)this_)->hintingPreference();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:120
// [8] qreal ascent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont6ascentEv(void *this_) {
  return (qreal)((QRawFont*)this_)->ascent();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qrawfont.h:121
// [8] qreal capHeight()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont9capHeightEv(void *this_) {
  return (qreal)((QRawFont*)this_)->capHeight();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:122
// [8] qreal descent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont7descentEv(void *this_) {
  return (qreal)((QRawFont*)this_)->descent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:123
// [8] qreal leading()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont7leadingEv(void *this_) {
  return (qreal)((QRawFont*)this_)->leading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:124
// [8] qreal xHeight()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont7xHeightEv(void *this_) {
  return (qreal)((QRawFont*)this_)->xHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:125
// [8] qreal averageCharWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont16averageCharWidthEv(void *this_) {
  return (qreal)((QRawFont*)this_)->averageCharWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:126
// [8] qreal maxCharWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont12maxCharWidthEv(void *this_) {
  return (qreal)((QRawFont*)this_)->maxCharWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:127
// [8] qreal lineThickness()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont13lineThicknessEv(void *this_) {
  return (qreal)((QRawFont*)this_)->lineThickness();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:128
// [8] qreal underlinePosition()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont17underlinePositionEv(void *this_) {
  return (qreal)((QRawFont*)this_)->underlinePosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:130
// [8] qreal unitsPerEm()
extern "C" Q_DECL_EXPORT
qreal C_ZNK8QRawFont10unitsPerEmEv(void *this_) {
  return (qreal)((QRawFont*)this_)->unitsPerEm();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:132
// [-2] void loadFromFile(const QString &, qreal, QFont::HintingPreference)
extern "C" Q_DECL_EXPORT
void C_ZN8QRawFont12loadFromFileERK7QStringdN5QFont17HintingPreferenceE(void *this_, QString* fileName, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  ((QRawFont*)this_)->loadFromFile(*fileName, pixelSize, hintingPreference);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:136
// [-2] void loadFromData(const QByteArray &, qreal, QFont::HintingPreference)
extern "C" Q_DECL_EXPORT
void C_ZN8QRawFont12loadFromDataERK10QByteArraydN5QFont17HintingPreferenceE(void *this_, QByteArray* fontData, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  ((QRawFont*)this_)->loadFromData(*fontData, pixelSize, hintingPreference);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:140
// [1] bool supportsCharacter(uint)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFont17supportsCharacterEj(void *this_, uint ucs4) {
  return (bool)((QRawFont*)this_)->supportsCharacter(ucs4);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:141
// [1] bool supportsCharacter(QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QRawFont17supportsCharacterE5QChar(void *this_, QChar* character) {
  return (bool)((QRawFont*)this_)->supportsCharacter(*character);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:142
// [-2] QList<QFontDatabase::WritingSystem> supportedWritingSystems()
extern "C" Q_DECL_EXPORT
QList<QFontDatabase::WritingSystem>* C_ZNK8QRawFont23supportedWritingSystemsEv(void *this_) {
  auto rv = ((QRawFont*)this_)->supportedWritingSystems();
return new QList<QFontDatabase::WritingSystem>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:144
// [8] QByteArray fontTable(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QRawFont9fontTableEPKc(void *this_, const char * tagName) {
  auto rv = ((QRawFont*)this_)->fontTable(tagName);
return new QByteArray(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:146
// [8] QRawFont fromFont(const QFont &, QFontDatabase::WritingSystem)
extern "C" Q_DECL_EXPORT
void* C_ZN8QRawFont8fromFontERK5QFontN13QFontDatabase13WritingSystemE(QFont* font, QFontDatabase::WritingSystem writingSystem) {
  auto rv = QRawFont::fromFont(*font, writingSystem);
return new QRawFont(rv);
}

//  main block end
