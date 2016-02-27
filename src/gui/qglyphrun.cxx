// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qglyphrun.h
// dst-file: /src/gui/qglyphrun.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qglyphrun.h>


#include <qpoint.h>
#include <qvector.h>
#include <qrawfont.h>
#include <qstring.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qglyphrun_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 64, column 10>
//   // proto:  void QGlyphRun::swap(QGlyphRun & other);
if (true) {
  auto f = [](QGlyphRun flythis, QGlyphRun & arg1) {
    ((QGlyphRun*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QGlyphRun4swapERS_ swap(class QGlyphRun &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGlyphRun_Class_Size()
{
  return sizeof(QGlyphRun);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 74, column 10>
//   // proto:  void QGlyphRun::setGlyphIndexes(const QVector<quint32> & glyphIndexes);
// _ZN9QGlyphRun15setGlyphIndexesERK7QVectorIjE setGlyphIndexes(const QVector<quint32> &)
extern "C"
void
C_ZN9QGlyphRun15setGlyphIndexesERK7QVectorIjE(void *qthis,
const QVector<quint32>* arg1) {
  ((QGlyphRun*)qthis)->setGlyphIndexes(*((const QVector<quint32>*)arg1));
}
//   // proto:  void QGlyphRun::~QGlyphRun();
extern "C"
void C_ZN9QGlyphRunD2Ev(void *qthis) {
  delete (QGlyphRun*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 103, column 10>
//   // proto:  void QGlyphRun::setBoundingRect(const QRectF & boundingRect);
// _ZN9QGlyphRun15setBoundingRectERK6QRectF setBoundingRect(const class QRectF &)
extern "C"
void
C_ZN9QGlyphRun15setBoundingRectERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGlyphRun*)qthis)->setBoundingRect(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 88, column 10>
//   // proto:  bool QGlyphRun::overline();
// _ZNK9QGlyphRun8overlineEv overline()
extern "C"
bool
C_ZNK9QGlyphRun8overlineEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->overline();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 69, column 10>
//   // proto:  void QGlyphRun::setRawData(const quint32 * glyphIndexArray, const QPointF * glyphPositionArray, int size);
// _ZN9QGlyphRun10setRawDataEPKjPK7QPointFi setRawData(const quint32 *, const class QPointF *, int)
extern "C"
void
C_ZN9QGlyphRun10setRawDataEPKjPK7QPointFi(void *qthis,
const quint32 * arg1,
const QPointF * arg2,
int arg3) {
  ((QGlyphRun*)qthis)->setRawData(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 87, column 10>
//   // proto:  void QGlyphRun::setOverline(bool overline);
// _ZN9QGlyphRun11setOverlineEb setOverline(_Bool)
extern "C"
void
C_ZN9QGlyphRun11setOverlineEb(void *qthis,
bool arg1) {
  ((QGlyphRun*)qthis)->setOverline(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 64, column 10>
//   // proto:  void QGlyphRun::swap(QGlyphRun & other);
// _ZN9QGlyphRun4swapERS_ swap(class QGlyphRun &)
extern "C"
void
C_ZN9QGlyphRun4swapERS_(void *qthis,
QGlyphRun* arg1) {
  ((QGlyphRun*)qthis)->swap(*((QGlyphRun*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 99, column 10>
//   // proto:  void QGlyphRun::setFlag(QGlyphRun::GlyphRunFlag flag, bool enabled);
// _ZN9QGlyphRun7setFlagENS_12GlyphRunFlagEb setFlag(enum QGlyphRun::GlyphRunFlag, _Bool)
extern "C"
void
C_ZN9QGlyphRun7setFlagENS_12GlyphRunFlagEb(void *qthis,
QGlyphRun::GlyphRunFlag arg1,
bool arg2) {
  ((QGlyphRun*)qthis)->setFlag(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 90, column 10>
//   // proto:  void QGlyphRun::setUnderline(bool underline);
// _ZN9QGlyphRun12setUnderlineEb setUnderline(_Bool)
extern "C"
void
C_ZN9QGlyphRun12setUnderlineEb(void *qthis,
bool arg1) {
  ((QGlyphRun*)qthis)->setUnderline(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 76, column 22>
//   // proto:  QVector<QPointF> QGlyphRun::positions();
// _ZNK9QGlyphRun9positionsEv positions()
extern "C"
QVector<QPointF>*
C_ZNK9QGlyphRun9positionsEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->positions();
  return new QVector<QPointF>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 79, column 10>
//   // proto:  void QGlyphRun::clear();
// _ZN9QGlyphRun5clearEv clear()
extern "C"
void
C_ZN9QGlyphRun5clearEv(void *qthis) {
  ((QGlyphRun*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 94, column 10>
//   // proto:  bool QGlyphRun::strikeOut();
// _ZNK9QGlyphRun9strikeOutEv strikeOut()
extern "C"
bool
C_ZNK9QGlyphRun9strikeOutEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->strikeOut();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 77, column 10>
//   // proto:  void QGlyphRun::setPositions(const QVector<QPointF> & positions);
// _ZN9QGlyphRun12setPositionsERK7QVectorI7QPointFE setPositions(const QVector<class QPointF> &)
extern "C"
void
C_ZN9QGlyphRun12setPositionsERK7QVectorI7QPointFE(void *qthis,
const QVector<QPointF>* arg1) {
  ((QGlyphRun*)qthis)->setPositions(*((const QVector<QPointF>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 60, column 5>
//   // proto:  void QGlyphRun::QGlyphRun();
extern "C"
QGlyphRun*
C_ZN9QGlyphRunC2Ev() {
  auto ret = new QGlyphRun();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 100, column 10>
//   // proto:  void QGlyphRun::setFlags(GlyphRunFlags flags);
// _ZN9QGlyphRun8setFlagsE6QFlagsINS_12GlyphRunFlagEE setFlags(GlyphRunFlags)
extern "C"
void
C_ZN9QGlyphRun8setFlagsE6QFlagsINS_12GlyphRunFlagEE(void *qthis,
QGlyphRun::GlyphRunFlags arg1) {
  ((QGlyphRun*)qthis)->setFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 66, column 14>
//   // proto:  QRawFont QGlyphRun::rawFont();
// _ZNK9QGlyphRun7rawFontEv rawFont()
extern "C"
QRawFont*
C_ZNK9QGlyphRun7rawFontEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->rawFont();
  return new QRawFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 67, column 10>
//   // proto:  void QGlyphRun::setRawFont(const QRawFont & rawFont);
// _ZN9QGlyphRun10setRawFontERK8QRawFont setRawFont(const class QRawFont &)
extern "C"
void
C_ZN9QGlyphRun10setRawFontERK8QRawFont(void *qthis,
const QRawFont* arg1) {
  ((QGlyphRun*)qthis)->setRawFont(*((const QRawFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 61, column 5>
//   // proto:  void QGlyphRun::QGlyphRun(const QGlyphRun & other);
extern "C"
QGlyphRun*
C_ZN9QGlyphRunC2ERKS_(const QGlyphRun* arg1) {
  auto ret = new QGlyphRun(*((const QGlyphRun*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 97, column 10>
//   // proto:  bool QGlyphRun::isRightToLeft();
// _ZNK9QGlyphRun13isRightToLeftEv isRightToLeft()
extern "C"
bool
C_ZNK9QGlyphRun13isRightToLeftEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->isRightToLeft();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 73, column 22>
//   // proto:  QVector<quint32> QGlyphRun::glyphIndexes();
// _ZNK9QGlyphRun12glyphIndexesEv glyphIndexes()
extern "C"
QVector<unsigned int>*
C_ZNK9QGlyphRun12glyphIndexesEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->glyphIndexes();
  return new QVector<unsigned int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 104, column 12>
//   // proto:  QRectF QGlyphRun::boundingRect();
// _ZNK9QGlyphRun12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK9QGlyphRun12boundingRectEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 96, column 10>
//   // proto:  void QGlyphRun::setRightToLeft(bool on);
// _ZN9QGlyphRun14setRightToLeftEb setRightToLeft(_Bool)
extern "C"
void
C_ZN9QGlyphRun14setRightToLeftEb(void *qthis,
bool arg1) {
  ((QGlyphRun*)qthis)->setRightToLeft(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 101, column 19>
//   // proto:  GlyphRunFlags QGlyphRun::flags();
// _ZNK9QGlyphRun5flagsEv flags()
extern "C"
QFlags<QGlyphRun::GlyphRunFlag>*
C_ZNK9QGlyphRun5flagsEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->flags();
  return new QFlags<QGlyphRun::GlyphRunFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 91, column 10>
//   // proto:  bool QGlyphRun::underline();
// _ZNK9QGlyphRun9underlineEv underline()
extern "C"
bool
C_ZNK9QGlyphRun9underlineEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->underline();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 93, column 10>
//   // proto:  void QGlyphRun::setStrikeOut(bool strikeOut);
// _ZN9QGlyphRun12setStrikeOutEb setStrikeOut(_Bool)
extern "C"
void
C_ZN9QGlyphRun12setStrikeOutEb(void *qthis,
bool arg1) {
  ((QGlyphRun*)qthis)->setStrikeOut(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qglyphrun.h', line 106, column 10>
//   // proto:  bool QGlyphRun::isEmpty();
// _ZNK9QGlyphRun7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK9QGlyphRun7isEmptyEv(void *qthis) {
  auto ret =
  ((QGlyphRun*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

