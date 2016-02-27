// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qtextlayout.h
// dst-file: /src/gui/qtextlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextlayout.h>


#include <qglobal.h>
#include <qrect.h>
#include <qpoint.h>
#include <qglyphrun.h>
#include <qlist.h>
#include <qfontdatabase.h>
#include <qnamespace.h>
#include <qtextoption.h>
#include <qfont.h>
#include <qstring.h>
#include <qtextformat.h>
// <= header block end

// main block begin =>
void __keep_qtextlayout_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 225, column 18>
//   // proto:  qreal QTextLine::cursorToX(int cursorPos, QTextLine::Edge edge);
if (true) {
  auto f = [](QTextLine flythis, int arg1, QTextLine::Edge arg2) {
    ((QTextLine*)0)->cursorToX(arg1, arg2);
    flythis.cursorToX(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK9QTextLine9cursorToXEiNS_4EdgeE cursorToX(int, enum QTextLine::Edge)
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 238, column 9>
//   // proto:  int QTextLine::lineNumber();
if (true) {
  auto f = [](QTextLine flythis) {
    ((QTextLine*)0)->lineNumber();
    flythis.lineNumber();
  };
  if (f == nullptr){}
}
// _ZNK9QTextLine10lineNumberEv lineNumber()
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 195, column 12>
//   // proto:  void QTextLine::QTextLine();
if (true) {
  auto f = []() {
    new QTextLine();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 196, column 17>
//   // proto:  bool QTextLine::isValid();
if (true) {
  auto f = [](QTextLine flythis) {
    ((QTextLine*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK9QTextLine7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 176, column 18>
//   // proto:  QTextEngine * QTextLayout::engine();
if (true) {
  auto f = [](QTextLayout flythis) {
    ((QTextLayout*)0)->engine();
    flythis.engine();
  };
  if (f == nullptr){}
}
// _ZNK11QTextLayout6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 64, column 5>
//   // proto:  void QTextInlineObject::QTextInlineObject(int i, QTextEngine * e);
if (true) {
  auto f = [](int arg1, QTextEngine * arg2) {
    new QTextInlineObject(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 66, column 17>
//   // proto:  bool QTextInlineObject::isValid();
if (true) {
  auto f = [](QTextInlineObject flythis) {
    ((QTextInlineObject*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK17QTextInlineObject7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 65, column 12>
//   // proto:  void QTextInlineObject::QTextInlineObject();
if (true) {
  auto f = []() {
    new QTextInlineObject();
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextLine_Class_Size()
{
  return sizeof(QTextLine);
}

extern "C"
int QTextLayout_Class_Size()
{
  return sizeof(QTextLayout);
}

extern "C"
int QTextInlineObject_Class_Size()
{
  return sizeof(QTextInlineObject);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 202, column 11>
//   // proto:  qreal QTextLine::ascent();
// _ZNK9QTextLine6ascentEv ascent()
extern "C"
double
C_ZNK9QTextLine6ascentEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->ascent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 205, column 11>
//   // proto:  qreal QTextLine::leading();
// _ZNK9QTextLine7leadingEv leading()
extern "C"
double
C_ZNK9QTextLine7leadingEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->leading();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 224, column 11>
//   // proto:  qreal QTextLine::cursorToX(int * cursorPos, QTextLine::Edge edge);
// _ZNK9QTextLine9cursorToXEPiNS_4EdgeE cursorToX(int *, enum QTextLine::Edge)
extern "C"
double
C_ZNK9QTextLine9cursorToXEPiNS_4EdgeE(void *qthis,
int * arg1,
QTextLine::Edge arg2) {
  auto ret =
  ((QTextLine*)qthis)->cursorToX(arg1,
arg2);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 235, column 9>
//   // proto:  int QTextLine::textStart();
// _ZNK9QTextLine9textStartEv textStart()
extern "C"
int
C_ZNK9QTextLine9textStartEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->textStart();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 208, column 10>
//   // proto:  bool QTextLine::leadingIncluded();
// _ZNK9QTextLine15leadingIncludedEv leadingIncluded()
extern "C"
bool
C_ZNK9QTextLine15leadingIncludedEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->leadingIncluded();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 199, column 11>
//   // proto:  qreal QTextLine::x();
// _ZNK9QTextLine1xEv x()
extern "C"
double
C_ZNK9QTextLine1xEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->x();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 204, column 11>
//   // proto:  qreal QTextLine::height();
// _ZNK9QTextLine6heightEv height()
extern "C"
double
C_ZNK9QTextLine6heightEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->height();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 225, column 18>
//   // proto:  qreal QTextLine::cursorToX(int cursorPos, QTextLine::Edge edge);
// _ZNK9QTextLine9cursorToXEiNS_4EdgeE cursorToX(int, enum QTextLine::Edge)
extern "C"
double
C_ZNK9QTextLine9cursorToXEiNS_4EdgeE(void *qthis,
int arg1,
QTextLine::Edge arg2) {
  auto ret =
  ((QTextLine*)qthis)->cursorToX(arg1,
arg2);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 200, column 11>
//   // proto:  qreal QTextLine::y();
// _ZNK9QTextLine1yEv y()
extern "C"
double
C_ZNK9QTextLine1yEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->y();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 211, column 11>
//   // proto:  qreal QTextLine::horizontalAdvance();
// _ZNK9QTextLine17horizontalAdvanceEv horizontalAdvance()
extern "C"
double
C_ZNK9QTextLine17horizontalAdvanceEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->horizontalAdvance();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 212, column 12>
//   // proto:  QRectF QTextLine::naturalTextRect();
// _ZNK9QTextLine15naturalTextRectEv naturalTextRect()
extern "C"
QRectF*
C_ZNK9QTextLine15naturalTextRectEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->naturalTextRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 230, column 10>
//   // proto:  void QTextLine::setNumColumns(int columns, qreal alignmentWidth);
// _ZN9QTextLine13setNumColumnsEid setNumColumns(int, qreal)
extern "C"
void
C_ZN9QTextLine13setNumColumnsEid(void *qthis,
int arg1,
qreal arg2) {
  ((QTextLine*)qthis)->setNumColumns(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 201, column 11>
//   // proto:  qreal QTextLine::width();
// _ZNK9QTextLine5widthEv width()
extern "C"
double
C_ZNK9QTextLine5widthEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->width();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 207, column 10>
//   // proto:  void QTextLine::setLeadingIncluded(bool included);
// _ZN9QTextLine18setLeadingIncludedEb setLeadingIncluded(_Bool)
extern "C"
void
C_ZN9QTextLine18setLeadingIncludedEb(void *qthis,
bool arg1) {
  ((QTextLine*)qthis)->setLeadingIncluded(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 232, column 10>
//   // proto:  void QTextLine::setPosition(const QPointF & pos);
// _ZN9QTextLine11setPositionERK7QPointF setPosition(const class QPointF &)
extern "C"
void
C_ZN9QTextLine11setPositionERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QTextLine*)qthis)->setPosition(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 240, column 10>
//   // proto:  void QTextLine::draw(QPainter * p, const QPointF & point, const QTextLayout::FormatRange * selection);
// _ZNK9QTextLine4drawEP8QPainterRK7QPointFPKN11QTextLayout11FormatRangeE draw(class QPainter *, const class QPointF &, const class QTextLayout::FormatRange *)
extern "C"
void
C_ZNK9QTextLine4drawEP8QPainterRK7QPointFPKN11QTextLayout11FormatRangeE(void *qthis,
QPainter * arg1,
const QPointF* arg2,
const QTextLayout::FormatRange * arg3) {
  ((QTextLine*)qthis)->draw(arg1,
*((const QPointF*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 238, column 9>
//   // proto:  int QTextLine::lineNumber();
// _ZNK9QTextLine10lineNumberEv lineNumber()
extern "C"
int
C_ZNK9QTextLine10lineNumberEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->lineNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 198, column 12>
//   // proto:  QRectF QTextLine::rect();
// _ZNK9QTextLine4rectEv rect()
extern "C"
QRectF*
C_ZNK9QTextLine4rectEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->rect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 195, column 12>
//   // proto:  void QTextLine::QTextLine();
extern "C"
QTextLine*
C_ZN9QTextLineC2Ev() {
  auto ret = new QTextLine();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 229, column 10>
//   // proto:  void QTextLine::setNumColumns(int columns);
// _ZN9QTextLine13setNumColumnsEi setNumColumns(int)
extern "C"
void
C_ZN9QTextLine13setNumColumnsEi(void *qthis,
int arg1) {
  ((QTextLine*)qthis)->setNumColumns(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 236, column 9>
//   // proto:  int QTextLine::textLength();
// _ZNK9QTextLine10textLengthEv textLength()
extern "C"
int
C_ZNK9QTextLine10textLengthEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->textLength();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 233, column 13>
//   // proto:  QPointF QTextLine::position();
// _ZNK9QTextLine8positionEv position()
extern "C"
QPointF*
C_ZNK9QTextLine8positionEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->position();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 243, column 22>
//   // proto:  QList<QGlyphRun> QTextLine::glyphRuns(int from, int length);
// _ZNK9QTextLine9glyphRunsEii glyphRuns(int, int)
extern "C"
QList<QGlyphRun>*
C_ZNK9QTextLine9glyphRunsEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QTextLine*)qthis)->glyphRuns(arg1,
arg2);
  return new QList<QGlyphRun>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 203, column 11>
//   // proto:  qreal QTextLine::descent();
// _ZNK9QTextLine7descentEv descent()
extern "C"
double
C_ZNK9QTextLine7descentEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->descent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 226, column 9>
//   // proto:  int QTextLine::xToCursor(qreal x, QTextLine::CursorPosition );
// _ZNK9QTextLine9xToCursorEdNS_14CursorPositionE xToCursor(qreal, enum QTextLine::CursorPosition)
extern "C"
int
C_ZNK9QTextLine9xToCursorEdNS_14CursorPositionE(void *qthis,
qreal arg1,
QTextLine::CursorPosition arg2) {
  auto ret =
  ((QTextLine*)qthis)->xToCursor(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 210, column 11>
//   // proto:  qreal QTextLine::naturalTextWidth();
// _ZNK9QTextLine16naturalTextWidthEv naturalTextWidth()
extern "C"
double
C_ZNK9QTextLine16naturalTextWidthEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->naturalTextWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 228, column 10>
//   // proto:  void QTextLine::setLineWidth(qreal width);
// _ZN9QTextLine12setLineWidthEd setLineWidth(qreal)
extern "C"
void
C_ZN9QTextLine12setLineWidthEd(void *qthis,
qreal arg1) {
  ((QTextLine*)qthis)->setLineWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 196, column 17>
//   // proto:  bool QTextLine::isValid();
// _ZNK9QTextLine7isValidEv isValid()
extern "C"
bool
C_ZNK9QTextLine7isValidEv(void *qthis) {
  auto ret =
  ((QTextLine*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 107, column 10>
//   // proto:  void QTextLayout::setFont(const QFont & f);
// _ZN11QTextLayout7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN11QTextLayout7setFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QTextLayout*)qthis)->setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 114, column 10>
//   // proto:  void QTextLayout::setText(const QString & string);
// _ZN11QTextLayout7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN11QTextLayout7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QTextLayout*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 137, column 25>
//   // proto:  Qt::CursorMoveStyle QTextLayout::cursorMoveStyle();
// _ZNK11QTextLayout15cursorMoveStyleEv cursorMoveStyle()
extern "C"
Qt::CursorMoveStyle
C_ZNK11QTextLayout15cursorMoveStyleEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->cursorMoveStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 153, column 10>
//   // proto:  bool QTextLayout::isValidCursorPosition(int pos);
// _ZNK11QTextLayout21isValidCursorPositionEi isValidCursorPosition(int)
extern "C"
bool
C_ZNK11QTextLayout21isValidCursorPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextLayout*)qthis)->isValidCursorPosition(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 167, column 12>
//   // proto:  QRectF QTextLayout::boundingRect();
// _ZNK11QTextLayout12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK11QTextLayout12boundingRectEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 130, column 24>
//   // proto:  QList<QTextLayout::FormatRange> QTextLayout::additionalFormats();
// _ZNK11QTextLayout17additionalFormatsEv additionalFormats()
extern "C"
QList<QTextLayout::FormatRange>*
C_ZNK11QTextLayout17additionalFormatsEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->additionalFormats();
  return new QList<QTextLayout::FormatRange>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 111, column 10>
//   // proto:  void QTextLayout::setRawFont(const QRawFont & rawFont);
// _ZN11QTextLayout10setRawFontERK8QRawFont setRawFont(const class QRawFont &)
extern "C"
void
C_ZN11QTextLayout10setRawFontERK8QRawFont(void *qthis,
const QRawFont* arg1) {
  ((QTextLayout*)qthis)->setRawFont(*((const QRawFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 117, column 10>
//   // proto:  void QTextLayout::setTextOption(const QTextOption & option);
// _ZN11QTextLayout13setTextOptionERK11QTextOption setTextOption(const class QTextOption &)
extern "C"
void
C_ZN11QTextLayout13setTextOptionERK11QTextOption(void *qthis,
const QTextOption* arg1) {
  ((QTextLayout*)qthis)->setTextOption(*((const QTextOption*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 103, column 5>
//   // proto:  void QTextLayout::QTextLayout(const QString & text, const QFont & font, QPaintDevice * paintdevice);
extern "C"
QTextLayout*
C_ZN11QTextLayoutC2ERK7QStringRK5QFontP12QPaintDevice(const QString* arg1,
const QFont* arg2,
QPaintDevice * arg3) {
  auto ret = new QTextLayout(*((const QString*)arg1), *((const QFont*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 155, column 9>
//   // proto:  int QTextLayout::previousCursorPosition(int oldPos, QTextLayout::CursorMode mode);
// _ZNK11QTextLayout22previousCursorPositionEiNS_10CursorModeE previousCursorPosition(int, enum QTextLayout::CursorMode)
extern "C"
int
C_ZNK11QTextLayout22previousCursorPositionEiNS_10CursorModeE(void *qthis,
int arg1,
QTextLayout::CursorMode arg2) {
  auto ret =
  ((QTextLayout*)qthis)->previousCursorPosition(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 165, column 10>
//   // proto:  void QTextLayout::setPosition(const QPointF & p);
// _ZN11QTextLayout11setPositionERK7QPointF setPosition(const class QPointF &)
extern "C"
void
C_ZN11QTextLayout11setPositionERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QTextLayout*)qthis)->setPosition(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 147, column 15>
//   // proto:  QTextLine QTextLayout::lineForTextPosition(int pos);
// _ZNK11QTextLayout19lineForTextPositionEi lineForTextPosition(int)
extern "C"
QTextLine*
C_ZNK11QTextLayout19lineForTextPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextLayout*)qthis)->lineForTextPosition(arg1);
  return new QTextLine(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 154, column 9>
//   // proto:  int QTextLayout::nextCursorPosition(int oldPos, QTextLayout::CursorMode mode);
// _ZNK11QTextLayout18nextCursorPositionEiNS_10CursorModeE nextCursorPosition(int, enum QTextLayout::CursorMode)
extern "C"
int
C_ZNK11QTextLayout18nextCursorPositionEiNS_10CursorModeE(void *qthis,
int arg1,
QTextLayout::CursorMode arg2) {
  auto ret =
  ((QTextLayout*)qthis)->nextCursorPosition(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 118, column 24>
//   // proto:  const QTextOption & QTextLayout::textOption();
// _ZNK11QTextLayout10textOptionEv textOption()
extern "C"
QTextOption*
C_ZNK11QTextLayout10textOptionEv(void *qthis) {
  auto& ret =
  ((QTextLayout*)qthis)->textOption();
  return new QTextOption(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 176, column 18>
//   // proto:  QTextEngine * QTextLayout::engine();
// _ZNK11QTextLayout6engineEv engine()
extern "C"
void*
C_ZNK11QTextLayout6engineEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->engine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 159, column 10>
//   // proto:  void QTextLayout::draw(QPainter * p, const QPointF & pos, const QVector<QTextLayout::FormatRange> & selections, const QRectF & clip);
// _ZNK11QTextLayout4drawEP8QPainterRK7QPointFRK7QVectorINS_11FormatRangeEERK6QRectF draw(class QPainter *, const class QPointF &, const QVector<struct QTextLayout::FormatRange> &, const class QRectF &)
extern "C"
void
C_ZNK11QTextLayout4drawEP8QPainterRK7QPointFRK7QVectorINS_11FormatRangeEERK6QRectF(void *qthis,
QPainter * arg1,
const QPointF* arg2,
const QVector<QTextLayout::FormatRange>* arg3,
const QRectF* arg4) {
  ((QTextLayout*)qthis)->draw(arg1,
*((const QPointF*)arg2),
*((const QVector<QTextLayout::FormatRange>*)arg3),
*((const QRectF*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 121, column 9>
//   // proto:  int QTextLayout::preeditAreaPosition();
// _ZNK11QTextLayout19preeditAreaPositionEv preeditAreaPosition()
extern "C"
int
C_ZNK11QTextLayout19preeditAreaPositionEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->preeditAreaPosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 131, column 10>
//   // proto:  void QTextLayout::clearAdditionalFormats();
// _ZN11QTextLayout22clearAdditionalFormatsEv clearAdditionalFormats()
extern "C"
void
C_ZN11QTextLayout22clearAdditionalFormatsEv(void *qthis) {
  ((QTextLayout*)qthis)->clearAdditionalFormats();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 156, column 9>
//   // proto:  int QTextLayout::leftCursorPosition(int oldPos);
// _ZNK11QTextLayout18leftCursorPositionEi leftCursorPosition(int)
extern "C"
int
C_ZNK11QTextLayout18leftCursorPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextLayout*)qthis)->leftCursorPosition(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 145, column 9>
//   // proto:  int QTextLayout::lineCount();
// _ZNK11QTextLayout9lineCountEv lineCount()
extern "C"
int
C_ZNK11QTextLayout9lineCountEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->lineCount();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QTextLayout::~QTextLayout();
extern "C"
void C_ZN11QTextLayoutD2Ev(void *qthis) {
  delete (QTextLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 133, column 10>
//   // proto:  void QTextLayout::setCacheEnabled(bool enable);
// _ZN11QTextLayout15setCacheEnabledEb setCacheEnabled(_Bool)
extern "C"
void
C_ZN11QTextLayout15setCacheEnabledEb(void *qthis,
bool arg1) {
  ((QTextLayout*)qthis)->setCacheEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 146, column 15>
//   // proto:  QTextLine QTextLayout::lineAt(int i);
// _ZNK11QTextLayout6lineAtEi lineAt(int)
extern "C"
QTextLine*
C_ZNK11QTextLayout6lineAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextLayout*)qthis)->lineAt(arg1);
  return new QTextLine(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 157, column 9>
//   // proto:  int QTextLayout::rightCursorPosition(int oldPos);
// _ZNK11QTextLayout19rightCursorPositionEi rightCursorPosition(int)
extern "C"
int
C_ZNK11QTextLayout19rightCursorPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextLayout*)qthis)->rightCursorPosition(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 104, column 5>
//   // proto:  void QTextLayout::QTextLayout(const QTextBlock & b);
extern "C"
QTextLayout*
C_ZN11QTextLayoutC2ERK10QTextBlock(const QTextBlock* arg1) {
  auto ret = new QTextLayout(*((const QTextBlock*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 169, column 11>
//   // proto:  qreal QTextLayout::minimumWidth();
// _ZNK11QTextLayout12minimumWidthEv minimumWidth()
extern "C"
double
C_ZNK11QTextLayout12minimumWidthEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->minimumWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 136, column 10>
//   // proto:  void QTextLayout::setCursorMoveStyle(Qt::CursorMoveStyle style);
// _ZN11QTextLayout18setCursorMoveStyleEN2Qt15CursorMoveStyleE setCursorMoveStyle(Qt::CursorMoveStyle)
extern "C"
void
C_ZN11QTextLayout18setCursorMoveStyleEN2Qt15CursorMoveStyleE(void *qthis,
Qt::CursorMoveStyle* arg1) {
  ((QTextLayout*)qthis)->setCursorMoveStyle(*((Qt::CursorMoveStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 161, column 10>
//   // proto:  void QTextLayout::drawCursor(QPainter * p, const QPointF & pos, int cursorPosition);
// _ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFi drawCursor(class QPainter *, const class QPointF &, int)
extern "C"
void
C_ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFi(void *qthis,
QPainter * arg1,
const QPointF* arg2,
int arg3) {
  ((QTextLayout*)qthis)->drawCursor(arg1,
*((const QPointF*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 108, column 11>
//   // proto:  QFont QTextLayout::font();
// _ZNK11QTextLayout4fontEv font()
extern "C"
QFont*
C_ZNK11QTextLayout4fontEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 120, column 10>
//   // proto:  void QTextLayout::setPreeditArea(int position, const QString & text);
// _ZN11QTextLayout14setPreeditAreaEiRK7QString setPreeditArea(int, const class QString &)
extern "C"
void
C_ZN11QTextLayout14setPreeditAreaEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QTextLayout*)qthis)->setPreeditArea(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 129, column 10>
//   // proto:  void QTextLayout::setAdditionalFormats(const QList<QTextLayout::FormatRange> & overrides);
// _ZN11QTextLayout20setAdditionalFormatsERK5QListINS_11FormatRangeEE setAdditionalFormats(const QList<struct QTextLayout::FormatRange> &)
extern "C"
void
C_ZN11QTextLayout20setAdditionalFormatsERK5QListINS_11FormatRangeEE(void *qthis,
const QList<QTextLayout::FormatRange>* arg1) {
  ((QTextLayout*)qthis)->setAdditionalFormats(*((const QList<QTextLayout::FormatRange>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 139, column 10>
//   // proto:  void QTextLayout::beginLayout();
// _ZN11QTextLayout11beginLayoutEv beginLayout()
extern "C"
void
C_ZN11QTextLayout11beginLayoutEv(void *qthis) {
  ((QTextLayout*)qthis)->beginLayout();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 102, column 5>
//   // proto:  void QTextLayout::QTextLayout(const QString & text);
extern "C"
QTextLayout*
C_ZN11QTextLayoutC2ERK7QString(const QString* arg1) {
  auto ret = new QTextLayout(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 177, column 10>
//   // proto:  void QTextLayout::setFlags(int flags);
// _ZN11QTextLayout8setFlagsEi setFlags(int)
extern "C"
void
C_ZN11QTextLayout8setFlagsEi(void *qthis,
int arg1) {
  ((QTextLayout*)qthis)->setFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 164, column 13>
//   // proto:  QPointF QTextLayout::position();
// _ZNK11QTextLayout8positionEv position()
extern "C"
QPointF*
C_ZNK11QTextLayout8positionEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->position();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 141, column 10>
//   // proto:  void QTextLayout::clearLayout();
// _ZN11QTextLayout11clearLayoutEv clearLayout()
extern "C"
void
C_ZN11QTextLayout11clearLayoutEv(void *qthis) {
  ((QTextLayout*)qthis)->clearLayout();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 134, column 10>
//   // proto:  bool QTextLayout::cacheEnabled();
// _ZNK11QTextLayout12cacheEnabledEv cacheEnabled()
extern "C"
bool
C_ZNK11QTextLayout12cacheEnabledEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->cacheEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 170, column 11>
//   // proto:  qreal QTextLayout::maximumWidth();
// _ZNK11QTextLayout12maximumWidthEv maximumWidth()
extern "C"
double
C_ZNK11QTextLayout12maximumWidthEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->maximumWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 115, column 13>
//   // proto:  QString QTextLayout::text();
// _ZNK11QTextLayout4textEv text()
extern "C"
QString*
C_ZNK11QTextLayout4textEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 143, column 15>
//   // proto:  QTextLine QTextLayout::createLine();
// _ZN11QTextLayout10createLineEv createLine()
extern "C"
QTextLine*
C_ZN11QTextLayout10createLineEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->createLine();
  return new QTextLine(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 122, column 13>
//   // proto:  QString QTextLayout::preeditAreaText();
// _ZNK11QTextLayout15preeditAreaTextEv preeditAreaText()
extern "C"
QString*
C_ZNK11QTextLayout15preeditAreaTextEv(void *qthis) {
  auto ret =
  ((QTextLayout*)qthis)->preeditAreaText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 162, column 10>
//   // proto:  void QTextLayout::drawCursor(QPainter * p, const QPointF & pos, int cursorPosition, int width);
// _ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFii drawCursor(class QPainter *, const class QPointF &, int, int)
extern "C"
void
C_ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFii(void *qthis,
QPainter * arg1,
const QPointF* arg2,
int arg3,
int arg4) {
  ((QTextLayout*)qthis)->drawCursor(arg1,
*((const QPointF*)arg2),
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 140, column 10>
//   // proto:  void QTextLayout::endLayout();
// _ZN11QTextLayout9endLayoutEv endLayout()
extern "C"
void
C_ZN11QTextLayout9endLayoutEv(void *qthis) {
  ((QTextLayout*)qthis)->endLayout();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 101, column 5>
//   // proto:  void QTextLayout::QTextLayout();
extern "C"
QTextLayout*
C_ZN11QTextLayoutC2Ev() {
  auto ret = new QTextLayout();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 173, column 22>
//   // proto:  QList<QGlyphRun> QTextLayout::glyphRuns(int from, int length);
// _ZNK11QTextLayout9glyphRunsEii glyphRuns(int, int)
extern "C"
QList<QGlyphRun>*
C_ZNK11QTextLayout9glyphRunsEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QTextLayout*)qthis)->glyphRuns(arg1,
arg2);
  return new QList<QGlyphRun>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 64, column 5>
//   // proto:  void QTextInlineObject::QTextInlineObject(int i, QTextEngine * e);
extern "C"
QTextInlineObject*
C_ZN17QTextInlineObjectC2EiP11QTextEngine(int arg1,
QTextEngine * arg2) {
  auto ret = new QTextInlineObject(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 77, column 10>
//   // proto:  void QTextInlineObject::setAscent(qreal a);
// _ZN17QTextInlineObject9setAscentEd setAscent(qreal)
extern "C"
void
C_ZN17QTextInlineObject9setAscentEd(void *qthis,
qreal arg1) {
  ((QTextInlineObject*)qthis)->setAscent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 69, column 11>
//   // proto:  qreal QTextInlineObject::width();
// _ZNK17QTextInlineObject5widthEv width()
extern "C"
double
C_ZNK17QTextInlineObject5widthEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->width();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 82, column 9>
//   // proto:  int QTextInlineObject::formatIndex();
// _ZNK17QTextInlineObject11formatIndexEv formatIndex()
extern "C"
int
C_ZNK17QTextInlineObject11formatIndexEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->formatIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 68, column 12>
//   // proto:  QRectF QTextInlineObject::rect();
// _ZNK17QTextInlineObject4rectEv rect()
extern "C"
QRectF*
C_ZNK17QTextInlineObject4rectEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->rect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 80, column 9>
//   // proto:  int QTextInlineObject::textPosition();
// _ZNK17QTextInlineObject12textPositionEv textPosition()
extern "C"
int
C_ZNK17QTextInlineObject12textPositionEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->textPosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 78, column 10>
//   // proto:  void QTextInlineObject::setDescent(qreal d);
// _ZN17QTextInlineObject10setDescentEd setDescent(qreal)
extern "C"
void
C_ZN17QTextInlineObject10setDescentEd(void *qthis,
qreal arg1) {
  ((QTextInlineObject*)qthis)->setDescent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 72, column 11>
//   // proto:  qreal QTextInlineObject::height();
// _ZNK17QTextInlineObject6heightEv height()
extern "C"
double
C_ZNK17QTextInlineObject6heightEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->height();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 66, column 17>
//   // proto:  bool QTextInlineObject::isValid();
// _ZNK17QTextInlineObject7isValidEv isValid()
extern "C"
bool
C_ZNK17QTextInlineObject7isValidEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 65, column 12>
//   // proto:  void QTextInlineObject::QTextInlineObject();
extern "C"
QTextInlineObject*
C_ZN17QTextInlineObjectC2Ev() {
  auto ret = new QTextInlineObject();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 74, column 25>
//   // proto:  Qt::LayoutDirection QTextInlineObject::textDirection();
// _ZNK17QTextInlineObject13textDirectionEv textDirection()
extern "C"
Qt::LayoutDirection
C_ZNK17QTextInlineObject13textDirectionEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->textDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 83, column 17>
//   // proto:  QTextFormat QTextInlineObject::format();
// _ZNK17QTextInlineObject6formatEv format()
extern "C"
QTextFormat*
C_ZNK17QTextInlineObject6formatEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->format();
  return new QTextFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 71, column 11>
//   // proto:  qreal QTextInlineObject::descent();
// _ZNK17QTextInlineObject7descentEv descent()
extern "C"
double
C_ZNK17QTextInlineObject7descentEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->descent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 70, column 11>
//   // proto:  qreal QTextInlineObject::ascent();
// _ZNK17QTextInlineObject6ascentEv ascent()
extern "C"
double
C_ZNK17QTextInlineObject6ascentEv(void *qthis) {
  auto ret =
  ((QTextInlineObject*)qthis)->ascent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlayout.h', line 76, column 10>
//   // proto:  void QTextInlineObject::setWidth(qreal w);
// _ZN17QTextInlineObject8setWidthEd setWidth(qreal)
extern "C"
void
C_ZN17QTextInlineObject8setWidthEd(void *qthis,
qreal arg1) {
  ((QTextInlineObject*)qthis)->setWidth(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

