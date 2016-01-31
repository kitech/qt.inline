// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qrawfont.h
// dst-file: /src/gui/qrawfont.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qrawfont.h>


#include <qglobal.h>
#include <qfont.h>
#include <qrect.h>
#include <qvector.h>
#include <qstring.h>
#include <qimage.h>
#include <qlist.h>
#include <qfontdatabase.h>
#include <qpainterpath.h>
#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qrawfont_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 95, column 29>
//   // proto:  QVector<QPointF> QRawFont::advancesForGlyphIndexes(const QVector<quint32> & glyphIndexes, LayoutFlags layoutFlags);
if (true) {
  auto f = [](QRawFont flythis, const QVector<quint32> & arg1, QRawFont::LayoutFlags arg2) {
    ((QRawFont*)0)->advancesForGlyphIndexes(arg1, arg2);
    flythis.advancesForGlyphIndexes(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE6QFlagsINS_10LayoutFlagEE advancesForGlyphIndexes(const QVector<quint32> &, LayoutFlags)
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 81, column 10>
//   // proto:  void QRawFont::swap(QRawFont & other);
if (true) {
  auto f = [](QRawFont flythis, QRawFont & arg1) {
    ((QRawFont*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN8QRawFont4swapERS_ swap(class QRawFont &)
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 94, column 29>
//   // proto:  QVector<QPointF> QRawFont::advancesForGlyphIndexes(const QVector<quint32> & glyphIndexes);
if (true) {
  auto f = [](QRawFont flythis, const QVector<quint32> & arg1) {
    ((QRawFont*)0)->advancesForGlyphIndexes(arg1);
    flythis.advancesForGlyphIndexes(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE advancesForGlyphIndexes(const QVector<quint32> &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRawFont_Class_Size()
{
  return sizeof(QRawFont);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 115, column 11>
//   // proto:  qreal QRawFont::averageCharWidth();
// _ZNK8QRawFont16averageCharWidthEv averageCharWidth()
extern "C"
double
C_ZNK8QRawFont16averageCharWidthEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->averageCharWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 111, column 11>
//   // proto:  qreal QRawFont::ascent();
// _ZNK8QRawFont6ascentEv ascent()
extern "C"
double
C_ZNK8QRawFont6ascentEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->ascent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 113, column 11>
//   // proto:  qreal QRawFont::leading();
// _ZNK8QRawFont7leadingEv leading()
extern "C"
double
C_ZNK8QRawFont7leadingEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->leading();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 122, column 10>
//   // proto:  void QRawFont::loadFromFile(const QString & fileName, qreal pixelSize, QFont::HintingPreference hintingPreference);
// _ZN8QRawFont12loadFromFileERK7QStringdN5QFont17HintingPreferenceE loadFromFile(const class QString &, qreal, class QFont::HintingPreference)
extern "C"
void
C_ZN8QRawFont12loadFromFileERK7QStringdN5QFont17HintingPreferenceE(void *qthis,
const QString* arg1,
qreal arg2,
QFont::HintingPreference* arg3) {
  ((QRawFont*)qthis)->loadFromFile(*((const QString*)arg1),
arg2,
*((QFont::HintingPreference*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 117, column 11>
//   // proto:  qreal QRawFont::lineThickness();
// _ZNK8QRawFont13lineThicknessEv lineThickness()
extern "C"
double
C_ZNK8QRawFont13lineThicknessEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->lineThickness();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 90, column 18>
//   // proto:  QFont::Style QRawFont::style();
// _ZNK8QRawFont5styleEv style()
extern "C"
QFont::Style
C_ZNK8QRawFont5styleEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->style();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 77, column 10>
//   // proto:  bool QRawFont::isValid();
// _ZNK8QRawFont7isValidEv isValid()
extern "C"
bool
C_ZNK8QRawFont7isValidEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 104, column 12>
//   // proto:  QRectF QRawFont::boundingRect(quint32 glyphIndex);
// _ZNK8QRawFont12boundingRectEj boundingRect(quint32)
extern "C"
QRectF*
C_ZNK8QRawFont12boundingRectEj(void *qthis,
quint32 arg1) {
  auto ret =
  ((QRawFont*)qthis)->boundingRect(arg1);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 130, column 10>
//   // proto:  bool QRawFont::supportsCharacter(uint ucs4);
// _ZNK8QRawFont17supportsCharacterEj supportsCharacter(uint)
extern "C"
bool
C_ZNK8QRawFont17supportsCharacterEj(void *qthis,
uint arg1) {
  auto ret =
  ((QRawFont*)qthis)->supportsCharacter(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 95, column 29>
//   // proto:  QVector<QPointF> QRawFont::advancesForGlyphIndexes(const QVector<quint32> & glyphIndexes, LayoutFlags layoutFlags);
// _ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE6QFlagsINS_10LayoutFlagEE advancesForGlyphIndexes(const QVector<quint32> &, LayoutFlags)
extern "C"
QVector<QPointF>*
C_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE6QFlagsINS_10LayoutFlagEE(void *qthis,
const QVector<quint32>* arg1,
QRawFont::LayoutFlags arg2) {
  auto ret =
  ((QRawFont*)qthis)->advancesForGlyphIndexes(*((const QVector<quint32>*)arg1),
arg2);
  return new QVector<QPointF>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 81, column 10>
//   // proto:  void QRawFont::swap(QRawFont & other);
// _ZN8QRawFont4swapERS_ swap(class QRawFont &)
extern "C"
void
C_ZN8QRawFont4swapERS_(void *qthis,
QRawFont* arg1) {
  ((QRawFont*)qthis)->swap(*((QRawFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 71, column 5>
//   // proto:  void QRawFont::QRawFont(const QByteArray & fontData, qreal pixelSize, QFont::HintingPreference hintingPreference);
extern "C"
QRawFont*
C_ZN8QRawFontC2ERK10QByteArraydN5QFont17HintingPreferenceE(const QByteArray* arg1,
qreal arg2,
QFont::HintingPreference* arg3) {
  auto ret = new QRawFont(*((const QByteArray*)arg1),
arg2,
*((QFont::HintingPreference*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 126, column 10>
//   // proto:  void QRawFont::loadFromData(const QByteArray & fontData, qreal pixelSize, QFont::HintingPreference hintingPreference);
// _ZN8QRawFont12loadFromDataERK10QByteArraydN5QFont17HintingPreferenceE loadFromData(const class QByteArray &, qreal, class QFont::HintingPreference)
extern "C"
void
C_ZN8QRawFont12loadFromDataERK10QByteArraydN5QFont17HintingPreferenceE(void *qthis,
const QByteArray* arg1,
qreal arg2,
QFont::HintingPreference* arg3) {
  ((QRawFont*)qthis)->loadFromData(*((const QByteArray*)arg1),
arg2,
*((QFont::HintingPreference*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 112, column 11>
//   // proto:  qreal QRawFont::descent();
// _ZNK8QRawFont7descentEv descent()
extern "C"
double
C_ZNK8QRawFont7descentEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->descent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 67, column 5>
//   // proto:  void QRawFont::QRawFont();
extern "C"
QRawFont*
C_ZN8QRawFontC2Ev() {
  auto ret = new QRawFont();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 106, column 10>
//   // proto:  void QRawFont::setPixelSize(qreal pixelSize);
// _ZN8QRawFont12setPixelSizeEd setPixelSize(qreal)
extern "C"
void
C_ZN8QRawFont12setPixelSizeEd(void *qthis,
qreal arg1) {
  ((QRawFont*)qthis)->setPixelSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 96, column 10>
//   // proto:  bool QRawFont::glyphIndexesForChars(const QChar * chars, int numChars, quint32 * glyphIndexes, int * numGlyphs);
// _ZNK8QRawFont20glyphIndexesForCharsEPK5QChariPjPi glyphIndexesForChars(const class QChar *, int, quint32 *, int *)
extern "C"
bool
C_ZNK8QRawFont20glyphIndexesForCharsEPK5QChariPjPi(void *qthis,
const QChar * arg1,
int arg2,
quint32 * arg3,
int * arg4) {
  auto ret =
  ((QRawFont*)qthis)->glyphIndexesForChars(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 88, column 13>
//   // proto:  QString QRawFont::styleName();
// _ZNK8QRawFont9styleNameEv styleName()
extern "C"
QString*
C_ZNK8QRawFont9styleNameEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->styleName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 100, column 12>
//   // proto:  QImage QRawFont::alphaMapForGlyph(quint32 glyphIndex, QRawFont::AntialiasingType antialiasingType, const QTransform & transform);
// _ZNK8QRawFont16alphaMapForGlyphEjNS_16AntialiasingTypeERK10QTransform alphaMapForGlyph(quint32, enum QRawFont::AntialiasingType, const class QTransform &)
extern "C"
QImage*
C_ZNK8QRawFont16alphaMapForGlyphEjNS_16AntialiasingTypeERK10QTransform(void *qthis,
quint32 arg1,
QRawFont::AntialiasingType arg2,
const QTransform* arg3) {
  auto ret =
  ((QRawFont*)qthis)->alphaMapForGlyph(arg1,
arg2,
*((const QTransform*)arg3));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 118, column 11>
//   // proto:  qreal QRawFont::underlinePosition();
// _ZNK8QRawFont17underlinePositionEv underlinePosition()
extern "C"
double
C_ZNK8QRawFont17underlinePositionEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->underlinePosition();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 120, column 11>
//   // proto:  qreal QRawFont::unitsPerEm();
// _ZNK8QRawFont10unitsPerEmEv unitsPerEm()
extern "C"
double
C_ZNK8QRawFont10unitsPerEmEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->unitsPerEm();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 68, column 5>
//   // proto:  void QRawFont::QRawFont(const QString & fileName, qreal pixelSize, QFont::HintingPreference hintingPreference);
extern "C"
QRawFont*
C_ZN8QRawFontC2ERK7QStringdN5QFont17HintingPreferenceE(const QString* arg1,
qreal arg2,
QFont::HintingPreference* arg3) {
  auto ret = new QRawFont(*((const QString*)arg1),
arg2,
*((QFont::HintingPreference*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 109, column 30>
//   // proto:  QFont::HintingPreference QRawFont::hintingPreference();
// _ZNK8QRawFont17hintingPreferenceEv hintingPreference()
extern "C"
QFont::HintingPreference
C_ZNK8QRawFont17hintingPreferenceEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->hintingPreference();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 132, column 41>
//   // proto:  QList<QFontDatabase::WritingSystem> QRawFont::supportedWritingSystems();
// _ZNK8QRawFont23supportedWritingSystemsEv supportedWritingSystems()
extern "C"
QList<QFontDatabase::WritingSystem>*
C_ZNK8QRawFont23supportedWritingSystemsEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->supportedWritingSystems();
  return new QList<QFontDatabase::WritingSystem>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 131, column 10>
//   // proto:  bool QRawFont::supportsCharacter(QChar character);
// _ZNK8QRawFont17supportsCharacterE5QChar supportsCharacter(class QChar)
extern "C"
bool
C_ZNK8QRawFont17supportsCharacterE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QRawFont*)qthis)->supportsCharacter(*((QChar*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 87, column 13>
//   // proto:  QString QRawFont::familyName();
// _ZNK8QRawFont10familyNameEv familyName()
extern "C"
QString*
C_ZNK8QRawFont10familyNameEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->familyName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 97, column 10>
//   // proto:  bool QRawFont::advancesForGlyphIndexes(const quint32 * glyphIndexes, QPointF * advances, int numGlyphs);
// _ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi advancesForGlyphIndexes(const quint32 *, class QPointF *, int)
extern "C"
bool
C_ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi(void *qthis,
const quint32 * arg1,
QPointF * arg2,
int arg3) {
  auto ret =
  ((QRawFont*)qthis)->advancesForGlyphIndexes(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 107, column 11>
//   // proto:  qreal QRawFont::pixelSize();
// _ZNK8QRawFont9pixelSizeEv pixelSize()
extern "C"
double
C_ZNK8QRawFont9pixelSizeEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->pixelSize();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 91, column 9>
//   // proto:  int QRawFont::weight();
// _ZNK8QRawFont6weightEv weight()
extern "C"
int
C_ZNK8QRawFont6weightEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->weight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 74, column 5>
//   // proto:  void QRawFont::QRawFont(const QRawFont & other);
extern "C"
QRawFont*
C_ZN8QRawFontC2ERKS_(const QRawFont* arg1) {
  auto ret = new QRawFont(*((const QRawFont*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 94, column 29>
//   // proto:  QVector<QPointF> QRawFont::advancesForGlyphIndexes(const QVector<quint32> & glyphIndexes);
// _ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE advancesForGlyphIndexes(const QVector<quint32> &)
extern "C"
QVector<QPointF>*
C_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE(void *qthis,
const QVector<quint32>* arg1) {
  auto ret =
  ((QRawFont*)qthis)->advancesForGlyphIndexes(*((const QVector<quint32>*)arg1));
  return new QVector<QPointF>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 98, column 10>
//   // proto:  bool QRawFont::advancesForGlyphIndexes(const quint32 * glyphIndexes, QPointF * advances, int numGlyphs, LayoutFlags layoutFlags);
// _ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi6QFlagsINS_10LayoutFlagEE advancesForGlyphIndexes(const quint32 *, class QPointF *, int, LayoutFlags)
extern "C"
bool
C_ZNK8QRawFont23advancesForGlyphIndexesEPKjP7QPointFi6QFlagsINS_10LayoutFlagEE(void *qthis,
const quint32 * arg1,
QPointF * arg2,
int arg3,
QRawFont::LayoutFlags arg4) {
  auto ret =
  ((QRawFont*)qthis)->advancesForGlyphIndexes(arg1,
arg2,
arg3,
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 114, column 11>
//   // proto:  qreal QRawFont::xHeight();
// _ZNK8QRawFont7xHeightEv xHeight()
extern "C"
double
C_ZNK8QRawFont7xHeightEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->xHeight();
  return ret; // 0 TypeKind.DOUBLE
}
//   // proto:  void QRawFont::~QRawFont();
extern "C"
void C_ZN8QRawFontD2Ev(void *qthis) {
  delete (QRawFont*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 103, column 18>
//   // proto:  QPainterPath QRawFont::pathForGlyph(quint32 glyphIndex);
// _ZNK8QRawFont12pathForGlyphEj pathForGlyph(quint32)
extern "C"
QPainterPath*
C_ZNK8QRawFont12pathForGlyphEj(void *qthis,
quint32 arg1) {
  auto ret =
  ((QRawFont*)qthis)->pathForGlyph(arg1);
  return new QPainterPath(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 136, column 21>
//   // proto: static QRawFont QRawFont::fromFont(const QFont & font, QFontDatabase::WritingSystem writingSystem);
// _ZN8QRawFont8fromFontERK5QFontN13QFontDatabase13WritingSystemE fromFont(const class QFont &, class QFontDatabase::WritingSystem)
extern "C"
QRawFont*
C_ZN8QRawFont8fromFontERK5QFontN13QFontDatabase13WritingSystemE(const QFont* arg1,
QFontDatabase::WritingSystem* arg2) {
  auto ret =
  QRawFont::fromFont(*((const QFont*)arg1),
*((QFontDatabase::WritingSystem*)arg2));
  return new QRawFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 134, column 16>
//   // proto:  QByteArray QRawFont::fontTable(const char * tagName);
// _ZNK8QRawFont9fontTableEPKc fontTable(const char *)
extern "C"
QByteArray*
C_ZNK8QRawFont9fontTableEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QRawFont*)qthis)->fontTable(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 116, column 11>
//   // proto:  qreal QRawFont::maxCharWidth();
// _ZNK8QRawFont12maxCharWidthEv maxCharWidth()
extern "C"
double
C_ZNK8QRawFont12maxCharWidthEv(void *qthis) {
  auto ret =
  ((QRawFont*)qthis)->maxCharWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qrawfont.h', line 93, column 22>
//   // proto:  QVector<quint32> QRawFont::glyphIndexesForString(const QString & text);
// _ZNK8QRawFont21glyphIndexesForStringERK7QString glyphIndexesForString(const class QString &)
extern "C"
QVector<unsigned int>*
C_ZNK8QRawFont21glyphIndexesForStringERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QRawFont*)qthis)->glyphIndexesForString(*((const QString*)arg1));
  return new QVector<unsigned int>(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

