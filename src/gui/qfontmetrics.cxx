// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qfontmetrics.h
// dst-file: /src/gui/qfontmetrics.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfontmetrics.h>


#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qfontmetrics_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 71, column 10>
//   // proto:  void QFontMetrics::swap(QFontMetrics & other);
if (true) {
  auto f = [](QFontMetrics flythis, QFontMetrics & arg1) {
    ((QFontMetrics*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QFontMetrics4swapERS_ swap(class QFontMetrics &)
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 103, column 18>
//   // proto:  QRect QFontMetrics::boundingRect(int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray);
if (true) {
  auto f = [](QFontMetrics flythis, int arg1, int arg2, int arg3, int arg4, int arg5, const QString & arg6, int arg7, int * arg8) {
    ((QFontMetrics*)0)->boundingRect(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    flythis.boundingRect(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
  if (f == nullptr){}
}
// _ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi boundingRect(int, int, int, int, int, const class QString &, int, int *)
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 145, column 10>
//   // proto:  void QFontMetricsF::swap(QFontMetricsF & other);
if (true) {
  auto f = [](QFontMetricsF flythis, QFontMetricsF & arg1) {
    ((QFontMetricsF*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QFontMetricsF4swapERS_ swap(class QFontMetricsF &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFontMetrics_Class_Size()
{
  return sizeof(QFontMetrics);
}

extern "C"
int QFontMetricsF_Class_Size()
{
  return sizeof(QFontMetricsF);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 81, column 9>
//   // proto:  int QFontMetrics::maxWidth();
// _ZNK12QFontMetrics8maxWidthEv maxWidth()
extern "C"
int
C_ZNK12QFontMetrics8maxWidthEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->maxWidth();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QFontMetrics::~QFontMetrics();
extern "C"
void C_ZN12QFontMetricsD2Ev(void *qthis) {
  delete (QFontMetrics*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 115, column 9>
//   // proto:  int QFontMetrics::lineWidth();
// _ZNK12QFontMetrics9lineWidthEv lineWidth()
extern "C"
int
C_ZNK12QFontMetrics9lineWidthEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->lineWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 102, column 11>
//   // proto:  QRect QFontMetrics::boundingRect(const QRect & r, int flags, const QString & text, int tabstops, int * tabarray);
// _ZNK12QFontMetrics12boundingRectERK5QRectiRK7QStringiPi boundingRect(const class QRect &, int, const class QString &, int, int *)
extern "C"
QRect*
C_ZNK12QFontMetrics12boundingRectERK5QRectiRK7QStringiPi(void *qthis,
const QRect* arg1,
int arg2,
const QString* arg3,
int arg4,
int * arg5) {
  auto ret =
  ((QFontMetrics*)qthis)->boundingRect(*((const QRect*)arg1),
arg2,
*((const QString*)arg3),
arg4,
arg5);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 79, column 9>
//   // proto:  int QFontMetrics::minLeftBearing();
// _ZNK12QFontMetrics14minLeftBearingEv minLeftBearing()
extern "C"
int
C_ZNK12QFontMetrics14minLeftBearingEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->minLeftBearing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 90, column 9>
//   // proto:  int QFontMetrics::rightBearing(QChar );
// _ZNK12QFontMetrics12rightBearingE5QChar rightBearing(class QChar)
extern "C"
int
C_ZNK12QFontMetrics12rightBearingE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->rightBearing(*((QChar*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 74, column 9>
//   // proto:  int QFontMetrics::ascent();
// _ZNK12QFontMetrics6ascentEv ascent()
extern "C"
int
C_ZNK12QFontMetrics6ascentEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->ascent();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 106, column 11>
//   // proto:  QSize QFontMetrics::size(int flags, const QString & str, int tabstops, int * tabarray);
// _ZNK12QFontMetrics4sizeEiRK7QStringiPi size(int, const class QString &, int, int *)
extern "C"
QSize*
C_ZNK12QFontMetrics4sizeEiRK7QStringiPi(void *qthis,
int arg1,
const QString* arg2,
int arg3,
int * arg4) {
  auto ret =
  ((QFontMetrics*)qthis)->size(arg1,
*((const QString*)arg2),
arg3,
arg4);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 113, column 9>
//   // proto:  int QFontMetrics::overlinePos();
// _ZNK12QFontMetrics11overlinePosEv overlinePos()
extern "C"
int
C_ZNK12QFontMetrics11overlinePosEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->overlinePos();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 110, column 13>
//   // proto:  QString QFontMetrics::elidedText(const QString & text, Qt::TextElideMode mode, int width, int flags);
// _ZNK12QFontMetrics10elidedTextERK7QStringN2Qt13TextElideModeEii elidedText(const class QString &, Qt::TextElideMode, int, int)
extern "C"
QString*
C_ZNK12QFontMetrics10elidedTextERK7QStringN2Qt13TextElideModeEii(void *qthis,
const QString* arg1,
Qt::TextElideMode* arg2,
int arg3,
int arg4) {
  auto ret =
  ((QFontMetrics*)qthis)->elidedText(*((const QString*)arg1),
*((Qt::TextElideMode*)arg2),
arg3,
arg4);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 77, column 9>
//   // proto:  int QFontMetrics::leading();
// _ZNK12QFontMetrics7leadingEv leading()
extern "C"
int
C_ZNK12QFontMetrics7leadingEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->leading();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 108, column 11>
//   // proto:  QRect QFontMetrics::tightBoundingRect(const QString & text);
// _ZNK12QFontMetrics17tightBoundingRectERK7QString tightBoundingRect(const class QString &)
extern "C"
QRect*
C_ZNK12QFontMetrics17tightBoundingRectERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->tightBoundingRect(*((const QString*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 84, column 9>
//   // proto:  int QFontMetrics::averageCharWidth();
// _ZNK12QFontMetrics16averageCharWidthEv averageCharWidth()
extern "C"
int
C_ZNK12QFontMetrics16averageCharWidthEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->averageCharWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 112, column 9>
//   // proto:  int QFontMetrics::underlinePos();
// _ZNK12QFontMetrics12underlinePosEv underlinePos()
extern "C"
int
C_ZNK12QFontMetrics12underlinePosEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->underlinePos();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 86, column 10>
//   // proto:  bool QFontMetrics::inFont(QChar );
// _ZNK12QFontMetrics6inFontE5QChar inFont(class QChar)
extern "C"
bool
C_ZNK12QFontMetrics6inFontE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->inFont(*((QChar*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 76, column 9>
//   // proto:  int QFontMetrics::height();
// _ZNK12QFontMetrics6heightEv height()
extern "C"
int
C_ZNK12QFontMetrics6heightEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 94, column 9>
//   // proto:  int QFontMetrics::width(QChar );
// _ZNK12QFontMetrics5widthE5QChar width(class QChar)
extern "C"
int
C_ZNK12QFontMetrics5widthE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->width(*((QChar*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 101, column 11>
//   // proto:  QRect QFontMetrics::boundingRect(const QString & text);
// _ZNK12QFontMetrics12boundingRectERK7QString boundingRect(const class QString &)
extern "C"
QRect*
C_ZNK12QFontMetrics12boundingRectERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->boundingRect(*((const QString*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 83, column 9>
//   // proto:  int QFontMetrics::xHeight();
// _ZNK12QFontMetrics7xHeightEv xHeight()
extern "C"
int
C_ZNK12QFontMetrics7xHeightEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->xHeight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 92, column 9>
//   // proto:  int QFontMetrics::width(const QString & , int len, int flags);
// _ZNK12QFontMetrics5widthERK7QStringii width(const class QString &, int, int)
extern "C"
int
C_ZNK12QFontMetrics5widthERK7QStringii(void *qthis,
const QString* arg1,
int arg2,
int arg3) {
  auto ret =
  ((QFontMetrics*)qthis)->width(*((const QString*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 114, column 9>
//   // proto:  int QFontMetrics::strikeOutPos();
// _ZNK12QFontMetrics12strikeOutPosEv strikeOutPos()
extern "C"
int
C_ZNK12QFontMetrics12strikeOutPosEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->strikeOutPos();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 78, column 9>
//   // proto:  int QFontMetrics::lineSpacing();
// _ZNK12QFontMetrics11lineSpacingEv lineSpacing()
extern "C"
int
C_ZNK12QFontMetrics11lineSpacingEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->lineSpacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 62, column 5>
//   // proto:  void QFontMetrics::QFontMetrics(const QFontMetrics & );
extern "C"
QFontMetrics*
C_ZN12QFontMetricsC2ERKS_(const QFontMetrics* arg1) {
  auto ret = new QFontMetrics(*((const QFontMetrics*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 61, column 5>
//   // proto:  void QFontMetrics::QFontMetrics(const QFont & , QPaintDevice * pd);
extern "C"
QFontMetrics*
C_ZN12QFontMetricsC2ERK5QFontP12QPaintDevice(const QFont* arg1,
QPaintDevice * arg2) {
  auto ret = new QFontMetrics(*((const QFont*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 80, column 9>
//   // proto:  int QFontMetrics::minRightBearing();
// _ZNK12QFontMetrics15minRightBearingEv minRightBearing()
extern "C"
int
C_ZNK12QFontMetrics15minRightBearingEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->minRightBearing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 71, column 10>
//   // proto:  void QFontMetrics::swap(QFontMetrics & other);
// _ZN12QFontMetrics4swapERS_ swap(class QFontMetrics &)
extern "C"
void
C_ZN12QFontMetrics4swapERS_(void *qthis,
QFontMetrics* arg1) {
  ((QFontMetrics*)qthis)->swap(*((QFontMetrics*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 99, column 11>
//   // proto:  QRect QFontMetrics::boundingRect(QChar );
// _ZNK12QFontMetrics12boundingRectE5QChar boundingRect(class QChar)
extern "C"
QRect*
C_ZNK12QFontMetrics12boundingRectE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->boundingRect(*((QChar*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 60, column 14>
//   // proto:  void QFontMetrics::QFontMetrics(const QFont & );
extern "C"
QFontMetrics*
C_ZN12QFontMetricsC2ERK5QFont(const QFont* arg1) {
  auto ret = new QFontMetrics(*((const QFont*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 91, column 9>
//   // proto:  int QFontMetrics::width(const QString & , int len);
// _ZNK12QFontMetrics5widthERK7QStringi width(const class QString &, int)
extern "C"
int
C_ZNK12QFontMetrics5widthERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  auto ret =
  ((QFontMetrics*)qthis)->width(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 103, column 18>
//   // proto:  QRect QFontMetrics::boundingRect(int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray);
// _ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi boundingRect(int, int, int, int, int, const class QString &, int, int *)
extern "C"
QRect*
C_ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4,
int arg5,
const QString* arg6,
int arg7,
int * arg8) {
  auto ret =
  ((QFontMetrics*)qthis)->boundingRect(arg1,
arg2,
arg3,
arg4,
arg5,
*((const QString*)arg6),
arg7,
arg8);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 96, column 23>
//   // proto:  int QFontMetrics::charWidth(const QString & str, int pos);
// _ZNK12QFontMetrics9charWidthERK7QStringi charWidth(const class QString &, int)
extern "C"
int
C_ZNK12QFontMetrics9charWidthERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  auto ret =
  ((QFontMetrics*)qthis)->charWidth(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 89, column 9>
//   // proto:  int QFontMetrics::leftBearing(QChar );
// _ZNK12QFontMetrics11leftBearingE5QChar leftBearing(class QChar)
extern "C"
int
C_ZNK12QFontMetrics11leftBearingE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->leftBearing(*((QChar*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 87, column 10>
//   // proto:  bool QFontMetrics::inFontUcs4(uint ucs4);
// _ZNK12QFontMetrics10inFontUcs4Ej inFontUcs4(uint)
extern "C"
bool
C_ZNK12QFontMetrics10inFontUcs4Ej(void *qthis,
uint arg1) {
  auto ret =
  ((QFontMetrics*)qthis)->inFontUcs4(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 75, column 9>
//   // proto:  int QFontMetrics::descent();
// _ZNK12QFontMetrics7descentEv descent()
extern "C"
int
C_ZNK12QFontMetrics7descentEv(void *qthis) {
  auto ret =
  ((QFontMetrics*)qthis)->descent();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 159, column 10>
//   // proto:  bool QFontMetricsF::inFont(QChar );
// _ZNK13QFontMetricsF6inFontE5QChar inFont(class QChar)
extern "C"
bool
C_ZNK13QFontMetricsF6inFontE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->inFont(*((QChar*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 171, column 12>
//   // proto:  QSizeF QFontMetricsF::size(int flags, const QString & str, int tabstops, int * tabarray);
// _ZNK13QFontMetricsF4sizeEiRK7QStringiPi size(int, const class QString &, int, int *)
extern "C"
QSizeF*
C_ZNK13QFontMetricsF4sizeEiRK7QStringiPi(void *qthis,
int arg1,
const QString* arg2,
int arg3,
int * arg4) {
  auto ret =
  ((QFontMetricsF*)qthis)->size(arg1,
*((const QString*)arg2),
arg3,
arg4);
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 153, column 11>
//   // proto:  qreal QFontMetricsF::minRightBearing();
// _ZNK13QFontMetricsF15minRightBearingEv minRightBearing()
extern "C"
double
C_ZNK13QFontMetricsF15minRightBearingEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->minRightBearing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 135, column 5>
//   // proto:  void QFontMetricsF::QFontMetricsF(const QFontMetricsF & );
extern "C"
QFontMetricsF*
C_ZN13QFontMetricsFC2ERKS_(const QFontMetricsF* arg1) {
  auto ret = new QFontMetricsF(*((const QFontMetricsF*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 156, column 11>
//   // proto:  qreal QFontMetricsF::xHeight();
// _ZNK13QFontMetricsF7xHeightEv xHeight()
extern "C"
double
C_ZNK13QFontMetricsF7xHeightEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->xHeight();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 166, column 11>
//   // proto:  qreal QFontMetricsF::width(QChar );
// _ZNK13QFontMetricsF5widthE5QChar width(class QChar)
extern "C"
double
C_ZNK13QFontMetricsF5widthE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->width(*((QChar*)arg1));
  return ret; // 0 TypeKind.DOUBLE
}
//   // proto:  void QFontMetricsF::~QFontMetricsF();
extern "C"
void C_ZN13QFontMetricsFD2Ev(void *qthis) {
  delete (QFontMetricsF*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 170, column 12>
//   // proto:  QRectF QFontMetricsF::boundingRect(const QRectF & r, int flags, const QString & string, int tabstops, int * tabarray);
// _ZNK13QFontMetricsF12boundingRectERK6QRectFiRK7QStringiPi boundingRect(const class QRectF &, int, const class QString &, int, int *)
extern "C"
QRectF*
C_ZNK13QFontMetricsF12boundingRectERK6QRectFiRK7QStringiPi(void *qthis,
const QRectF* arg1,
int arg2,
const QString* arg3,
int arg4,
int * arg5) {
  auto ret =
  ((QFontMetricsF*)qthis)->boundingRect(*((const QRectF*)arg1),
arg2,
*((const QString*)arg3),
arg4,
arg5);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 145, column 10>
//   // proto:  void QFontMetricsF::swap(QFontMetricsF & other);
// _ZN13QFontMetricsF4swapERS_ swap(class QFontMetricsF &)
extern "C"
void
C_ZN13QFontMetricsF4swapERS_(void *qthis,
QFontMetricsF* arg1) {
  ((QFontMetricsF*)qthis)->swap(*((QFontMetricsF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 173, column 12>
//   // proto:  QRectF QFontMetricsF::tightBoundingRect(const QString & text);
// _ZNK13QFontMetricsF17tightBoundingRectERK7QString tightBoundingRect(const class QString &)
extern "C"
QRectF*
C_ZNK13QFontMetricsF17tightBoundingRectERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->tightBoundingRect(*((const QString*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 162, column 11>
//   // proto:  qreal QFontMetricsF::leftBearing(QChar );
// _ZNK13QFontMetricsF11leftBearingE5QChar leftBearing(class QChar)
extern "C"
double
C_ZNK13QFontMetricsF11leftBearingE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->leftBearing(*((QChar*)arg1));
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 163, column 11>
//   // proto:  qreal QFontMetricsF::rightBearing(QChar );
// _ZNK13QFontMetricsF12rightBearingE5QChar rightBearing(class QChar)
extern "C"
double
C_ZNK13QFontMetricsF12rightBearingE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->rightBearing(*((QChar*)arg1));
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 178, column 11>
//   // proto:  qreal QFontMetricsF::overlinePos();
// _ZNK13QFontMetricsF11overlinePosEv overlinePos()
extern "C"
double
C_ZNK13QFontMetricsF11overlinePosEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->overlinePos();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 149, column 11>
//   // proto:  qreal QFontMetricsF::height();
// _ZNK13QFontMetricsF6heightEv height()
extern "C"
double
C_ZNK13QFontMetricsF6heightEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->height();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 148, column 11>
//   // proto:  qreal QFontMetricsF::descent();
// _ZNK13QFontMetricsF7descentEv descent()
extern "C"
double
C_ZNK13QFontMetricsF7descentEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->descent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 168, column 12>
//   // proto:  QRectF QFontMetricsF::boundingRect(const QString & string);
// _ZNK13QFontMetricsF12boundingRectERK7QString boundingRect(const class QString &)
extern "C"
QRectF*
C_ZNK13QFontMetricsF12boundingRectERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->boundingRect(*((const QString*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 180, column 11>
//   // proto:  qreal QFontMetricsF::lineWidth();
// _ZNK13QFontMetricsF9lineWidthEv lineWidth()
extern "C"
double
C_ZNK13QFontMetricsF9lineWidthEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->lineWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 134, column 5>
//   // proto:  void QFontMetricsF::QFontMetricsF(const QFontMetrics & );
extern "C"
QFontMetricsF*
C_ZN13QFontMetricsFC2ERK12QFontMetrics(const QFontMetrics* arg1) {
  auto ret = new QFontMetricsF(*((const QFontMetrics*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 164, column 11>
//   // proto:  qreal QFontMetricsF::width(const QString & string);
// _ZNK13QFontMetricsF5widthERK7QString width(const class QString &)
extern "C"
double
C_ZNK13QFontMetricsF5widthERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->width(*((const QString*)arg1));
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 179, column 11>
//   // proto:  qreal QFontMetricsF::strikeOutPos();
// _ZNK13QFontMetricsF12strikeOutPosEv strikeOutPos()
extern "C"
double
C_ZNK13QFontMetricsF12strikeOutPosEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->strikeOutPos();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 151, column 11>
//   // proto:  qreal QFontMetricsF::lineSpacing();
// _ZNK13QFontMetricsF11lineSpacingEv lineSpacing()
extern "C"
double
C_ZNK13QFontMetricsF11lineSpacingEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->lineSpacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 157, column 11>
//   // proto:  qreal QFontMetricsF::averageCharWidth();
// _ZNK13QFontMetricsF16averageCharWidthEv averageCharWidth()
extern "C"
double
C_ZNK13QFontMetricsF16averageCharWidthEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->averageCharWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 133, column 5>
//   // proto:  void QFontMetricsF::QFontMetricsF(const QFont & , QPaintDevice * pd);
extern "C"
QFontMetricsF*
C_ZN13QFontMetricsFC2ERK5QFontP12QPaintDevice(const QFont* arg1,
QPaintDevice * arg2) {
  auto ret = new QFontMetricsF(*((const QFont*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 150, column 11>
//   // proto:  qreal QFontMetricsF::leading();
// _ZNK13QFontMetricsF7leadingEv leading()
extern "C"
double
C_ZNK13QFontMetricsF7leadingEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->leading();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 132, column 14>
//   // proto:  void QFontMetricsF::QFontMetricsF(const QFont & );
extern "C"
QFontMetricsF*
C_ZN13QFontMetricsFC2ERK5QFont(const QFont* arg1) {
  auto ret = new QFontMetricsF(*((const QFont*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 169, column 12>
//   // proto:  QRectF QFontMetricsF::boundingRect(QChar );
// _ZNK13QFontMetricsF12boundingRectE5QChar boundingRect(class QChar)
extern "C"
QRectF*
C_ZNK13QFontMetricsF12boundingRectE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->boundingRect(*((QChar*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 160, column 10>
//   // proto:  bool QFontMetricsF::inFontUcs4(uint ucs4);
// _ZNK13QFontMetricsF10inFontUcs4Ej inFontUcs4(uint)
extern "C"
bool
C_ZNK13QFontMetricsF10inFontUcs4Ej(void *qthis,
uint arg1) {
  auto ret =
  ((QFontMetricsF*)qthis)->inFontUcs4(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 175, column 13>
//   // proto:  QString QFontMetricsF::elidedText(const QString & text, Qt::TextElideMode mode, qreal width, int flags);
// _ZNK13QFontMetricsF10elidedTextERK7QStringN2Qt13TextElideModeEdi elidedText(const class QString &, Qt::TextElideMode, qreal, int)
extern "C"
QString*
C_ZNK13QFontMetricsF10elidedTextERK7QStringN2Qt13TextElideModeEdi(void *qthis,
const QString* arg1,
Qt::TextElideMode* arg2,
qreal arg3,
int arg4) {
  auto ret =
  ((QFontMetricsF*)qthis)->elidedText(*((const QString*)arg1),
*((Qt::TextElideMode*)arg2),
arg3,
arg4);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 152, column 11>
//   // proto:  qreal QFontMetricsF::minLeftBearing();
// _ZNK13QFontMetricsF14minLeftBearingEv minLeftBearing()
extern "C"
double
C_ZNK13QFontMetricsF14minLeftBearingEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->minLeftBearing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 147, column 11>
//   // proto:  qreal QFontMetricsF::ascent();
// _ZNK13QFontMetricsF6ascentEv ascent()
extern "C"
double
C_ZNK13QFontMetricsF6ascentEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->ascent();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 154, column 11>
//   // proto:  qreal QFontMetricsF::maxWidth();
// _ZNK13QFontMetricsF8maxWidthEv maxWidth()
extern "C"
double
C_ZNK13QFontMetricsF8maxWidthEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->maxWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontmetrics.h', line 177, column 11>
//   // proto:  qreal QFontMetricsF::underlinePos();
// _ZNK13QFontMetricsF12underlinePosEv underlinePos()
extern "C"
double
C_ZNK13QFontMetricsF12underlinePosEv(void *qthis) {
  auto ret =
  ((QFontMetricsF*)qthis)->underlinePos();
  return ret; // 0 TypeKind.DOUBLE
}
// <= ext block end

// body block begin =>
// <= body block end

