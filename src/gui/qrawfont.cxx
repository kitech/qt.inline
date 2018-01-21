//  header block begin
// /usr/include/qt/QtGui/qrawfont.h
#include <qrawfont.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qrawfont.h:73
// void QRawFont()
extern "C"
void* C_ZN8QRawFontC1Ev() {
  return new QRawFont();
}
// /usr/include/qt/QtGui/qrawfont.h:74
// void QRawFont(const class QString &, qreal, class QFont::HintingPreference)
extern "C"
void* C_ZN8QRawFontC1ERK7QStringdN5QFont17HintingPreferenceE(const QString & fileName, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  return new QRawFont(fileName, pixelSize, hintingPreference);
}
// /usr/include/qt/QtGui/qrawfont.h:77
// void QRawFont(const class QByteArray &, qreal, class QFont::HintingPreference)
extern "C"
void* C_ZN8QRawFontC1ERK10QByteArraydN5QFont17HintingPreferenceE(const QByteArray & fontData, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  return new QRawFont(fontData, pixelSize, hintingPreference);
}
// /usr/include/qt/QtGui/qrawfont.h:85
// void ~QRawFont()
extern "C"
void C_ZN8QRawFontD1Ev(void *this_) {
  delete (QRawFont*)(this_);
}
// inline
// /usr/include/qt/QtGui/qrawfont.h:87
// void swap(class QRawFont &)
extern "C"
void C_ZN8QRawFont4swapERS_(void *this_, QRawFont & other) {
  ((QRawFont*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qrawfont.h:89
// bool isValid()
extern "C"
void C_ZNK8QRawFont7isValidEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->isValid();
}
// /usr/include/qt/QtGui/qrawfont.h:95
// QString familyName()
extern "C"
void C_ZNK8QRawFont10familyNameEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->familyName();
}
// /usr/include/qt/QtGui/qrawfont.h:96
// QString styleName()
extern "C"
void C_ZNK8QRawFont9styleNameEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->styleName();
}
// /usr/include/qt/QtGui/qrawfont.h:98
// QFont::Style style()
extern "C"
void C_ZNK8QRawFont5styleEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->style();
}
// /usr/include/qt/QtGui/qrawfont.h:99
// int weight()
extern "C"
void C_ZNK8QRawFont6weightEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->weight();
}
// /usr/include/qt/QtGui/qrawfont.h:101
// QVector<quint32> glyphIndexesForString(const class QString &)
extern "C"
void C_ZNK8QRawFont21glyphIndexesForStringERK7QString(void *this_, const QString & text) {
  /*return*/ ((QRawFont*)this_)->glyphIndexesForString(text);
}
// inline
// /usr/include/qt/QtGui/qrawfont.h:102
// QVector<QPointF> advancesForGlyphIndexes(const QVector<quint32> &)
extern "C"
void C_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE(void *this_, const QVector<quint32> & glyphIndexes) {
  /*return*/ ((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes);
}
// inline
// /usr/include/qt/QtGui/qrawfont.h:103
// QVector<QPointF> advancesForGlyphIndexes(const QVector<quint32> &, LayoutFlags)
extern "C"
void C_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE6QFlagsINS_10LayoutFlagEE(void *this_, const QVector<quint32> & glyphIndexes, QFlags<QRawFont::LayoutFlag> layoutFlags) {
  /*return*/ ((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes, layoutFlags);
}
// /usr/include/qt/QtGui/qrawfont.h:104
// bool glyphIndexesForChars(const class QChar *, int, quint32 *, int *)
extern "C"
void C_ZNK8QRawFont20glyphIndexesForCharsEPK5QChariPjPi(void *this_, const QChar * chars, int numChars, quint32 * glyphIndexes, int * numGlyphs) {
  /*return*/ ((QRawFont*)this_)->glyphIndexesForChars(chars, numChars, glyphIndexes, numGlyphs);
}
// /usr/include/qt/QtGui/qrawfont.h:105
// bool advancesForGlyphIndexes(const quint32 *, class QPointF *, int)
extern "C"
void C_ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi(void *this_, const quint32 * glyphIndexes, QPointF * advances, int numGlyphs) {
  /*return*/ ((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs);
}
// /usr/include/qt/QtGui/qrawfont.h:106
// bool advancesForGlyphIndexes(const quint32 *, class QPointF *, int, LayoutFlags)
extern "C"
void C_ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi6QFlagsINS_10LayoutFlagEE(void *this_, const quint32 * glyphIndexes, QPointF * advances, int numGlyphs, QFlags<QRawFont::LayoutFlag> layoutFlags) {
  /*return*/ ((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes, advances, numGlyphs, layoutFlags);
}
// /usr/include/qt/QtGui/qrawfont.h:108
// QImage alphaMapForGlyph(quint32, enum QRawFont::AntialiasingType, const class QTransform &)
extern "C"
void C_ZNK8QRawFont16alphaMapForGlyphEjNS_16AntialiasingTypeERK10QTransform(void *this_, quint32 glyphIndex, QRawFont::AntialiasingType antialiasingType, const QTransform & transform) {
  /*return*/ ((QRawFont*)this_)->alphaMapForGlyph(glyphIndex, antialiasingType, transform);
}
// /usr/include/qt/QtGui/qrawfont.h:111
// QPainterPath pathForGlyph(quint32)
extern "C"
void C_ZNK8QRawFont12pathForGlyphEj(void *this_, quint32 glyphIndex) {
  /*return*/ ((QRawFont*)this_)->pathForGlyph(glyphIndex);
}
// /usr/include/qt/QtGui/qrawfont.h:112
// QRectF boundingRect(quint32)
extern "C"
void C_ZNK8QRawFont12boundingRectEj(void *this_, quint32 glyphIndex) {
  /*return*/ ((QRawFont*)this_)->boundingRect(glyphIndex);
}
// /usr/include/qt/QtGui/qrawfont.h:114
// void setPixelSize(qreal)
extern "C"
void C_ZN8QRawFont12setPixelSizeEd(void *this_, qreal pixelSize) {
  ((QRawFont*)this_)->setPixelSize(pixelSize);
}
// /usr/include/qt/QtGui/qrawfont.h:115
// qreal pixelSize()
extern "C"
void C_ZNK8QRawFont9pixelSizeEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->pixelSize();
}
// /usr/include/qt/QtGui/qrawfont.h:117
// QFont::HintingPreference hintingPreference()
extern "C"
void C_ZNK8QRawFont17hintingPreferenceEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->hintingPreference();
}
// /usr/include/qt/QtGui/qrawfont.h:119
// qreal ascent()
extern "C"
void C_ZNK8QRawFont6ascentEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->ascent();
}
// /usr/include/qt/QtGui/qrawfont.h:120
// qreal descent()
extern "C"
void C_ZNK8QRawFont7descentEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->descent();
}
// /usr/include/qt/QtGui/qrawfont.h:121
// qreal leading()
extern "C"
void C_ZNK8QRawFont7leadingEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->leading();
}
// /usr/include/qt/QtGui/qrawfont.h:122
// qreal xHeight()
extern "C"
void C_ZNK8QRawFont7xHeightEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->xHeight();
}
// /usr/include/qt/QtGui/qrawfont.h:123
// qreal averageCharWidth()
extern "C"
void C_ZNK8QRawFont16averageCharWidthEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->averageCharWidth();
}
// /usr/include/qt/QtGui/qrawfont.h:124
// qreal maxCharWidth()
extern "C"
void C_ZNK8QRawFont12maxCharWidthEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->maxCharWidth();
}
// /usr/include/qt/QtGui/qrawfont.h:125
// qreal lineThickness()
extern "C"
void C_ZNK8QRawFont13lineThicknessEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->lineThickness();
}
// /usr/include/qt/QtGui/qrawfont.h:126
// qreal underlinePosition()
extern "C"
void C_ZNK8QRawFont17underlinePositionEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->underlinePosition();
}
// /usr/include/qt/QtGui/qrawfont.h:128
// qreal unitsPerEm()
extern "C"
void C_ZNK8QRawFont10unitsPerEmEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->unitsPerEm();
}
// /usr/include/qt/QtGui/qrawfont.h:130
// void loadFromFile(const class QString &, qreal, class QFont::HintingPreference)
extern "C"
void C_ZN8QRawFont12loadFromFileERK7QStringdN5QFont17HintingPreferenceE(void *this_, const QString & fileName, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  ((QRawFont*)this_)->loadFromFile(fileName, pixelSize, hintingPreference);
}
// /usr/include/qt/QtGui/qrawfont.h:134
// void loadFromData(const class QByteArray &, qreal, class QFont::HintingPreference)
extern "C"
void C_ZN8QRawFont12loadFromDataERK10QByteArraydN5QFont17HintingPreferenceE(void *this_, const QByteArray & fontData, qreal pixelSize, QFont::HintingPreference hintingPreference) {
  ((QRawFont*)this_)->loadFromData(fontData, pixelSize, hintingPreference);
}
// /usr/include/qt/QtGui/qrawfont.h:138
// bool supportsCharacter(uint)
extern "C"
void C_ZNK8QRawFont17supportsCharacterEj(void *this_, uint ucs4) {
  /*return*/ ((QRawFont*)this_)->supportsCharacter(ucs4);
}
// /usr/include/qt/QtGui/qrawfont.h:139
// bool supportsCharacter(class QChar)
extern "C"
void C_ZNK8QRawFont17supportsCharacterE5QChar(void *this_, QChar character) {
  /*return*/ ((QRawFont*)this_)->supportsCharacter(character);
}
// /usr/include/qt/QtGui/qrawfont.h:140
// QList<QFontDatabase::WritingSystem> supportedWritingSystems()
extern "C"
void C_ZNK8QRawFont23supportedWritingSystemsEv(void *this_) {
  /*return*/ ((QRawFont*)this_)->supportedWritingSystems();
}
// /usr/include/qt/QtGui/qrawfont.h:142
// QByteArray fontTable(const char *)
extern "C"
void C_ZNK8QRawFont9fontTableEPKc(void *this_, const char * tagName) {
  /*return*/ ((QRawFont*)this_)->fontTable(tagName);
}
// static
// /usr/include/qt/QtGui/qrawfont.h:144
// QRawFont fromFont(const class QFont &, class QFontDatabase::WritingSystem)
extern "C"
void C_ZN8QRawFont8fromFontERK5QFontN13QFontDatabase13WritingSystemE(const QFont & font, QFontDatabase::WritingSystem writingSystem) {
  /*return*/ QRawFont::fromFont(font, writingSystem);
}
//  main block end
