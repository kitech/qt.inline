// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qrawfont.h
// dst-file: /src/gui/qrawfont.cxx
//

// header block begin =>
#include <qrawfont.h>

extern "C" {

int QRawFont_Class_Size()
{
  return sizeof(QRawFont);
}

// QRawFont(const class QByteArray &, qreal, class QFont::HintingPreference)
QRawFont* dector_ZN8QRawFontC1ERK10QByteArraydN5QFont17HintingPreferenceE(const QByteArray & fontData, double pixelSize, QFont::HintingPreference hintingPreference)
{
  // static_assert(sizeof(QRawFont) == 32, "tyszerr");
  QRawFont* rthis = new QRawFont(fontData, pixelSize, hintingPreference);
  return rthis;
}

// QRawFont()
QRawFont* dector_ZN8QRawFontC1Ev()
{
  // static_assert(sizeof(QRawFont) == 32, "tyszerr");
  QRawFont* rthis = new QRawFont();
  return rthis;
}

// QRawFont(const class QString &, qreal, class QFont::HintingPreference)
QRawFont* dector_ZN8QRawFontC1ERK7QStringdN5QFont17HintingPreferenceE(const QString & fileName, double pixelSize, QFont::HintingPreference hintingPreference)
{
  // static_assert(sizeof(QRawFont) == 32, "tyszerr");
  QRawFont* rthis = new QRawFont(fileName, pixelSize, hintingPreference);
  return rthis;
}

// QRawFont(const class QRawFont &)
QRawFont* dector_ZN8QRawFontC1ERKS_(const QRawFont & other)
{
  // static_assert(sizeof(QRawFont) == 32, "tyszerr");
  QRawFont* rthis = new QRawFont(other);
  return rthis;
}

// ~QRawFont()
void dedtor_ZN8QRawFontD0Ev(QRawFont* that)
{
  QRawFont* rthis = (QRawFont*)that;
  delete rthis;
}

  // proto:  QVector<QPointF> QRawFont::advancesForGlyphIndexes(const QVector<quint32> & glyphIndexes, LayoutFlags layoutFlags);
QVector<QPointF> demth_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE6QFlagsINS_10LayoutFlagEE(void *that, const QVector<quint32> & glyphIndexes, QRawFont::LayoutFlag layoutFlags)
{
  QRawFont *cthat = (QRawFont *)that;
  return cthat->advancesForGlyphIndexes(glyphIndexes, layoutFlags);
}

  // proto:  QVector<QPointF> QRawFont::advancesForGlyphIndexes(const QVector<quint32> & glyphIndexes);
QVector<QPointF> demth_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE(void *that, const QVector<quint32> & glyphIndexes)
{
  QRawFont *cthat = (QRawFont *)that;
  return cthat->advancesForGlyphIndexes(glyphIndexes);
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

