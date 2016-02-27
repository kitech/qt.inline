// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qpen.h
// dst-file: /src/gui/qpen.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpen.h>


#include <qglobal.h>
#include <qnamespace.h>
#include <qcolor.h>
#include <qvector.h>
#include <qregion.h>
#include <qbrush.h>
// <= header block end

// main block begin =>
void __keep_qpen_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 72, column 10>
//   // proto:  void QPen::swap(QPen & other);
if (true) {
  auto f = [](QPen flythis, QPen & arg1) {
    ((QPen*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN4QPen4swapERS_ swap(class QPen &)
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 67, column 5>
//   // proto:  void QPen::QPen(QPen && other);
if (true) {
  auto f = [](QPen && arg1) {
    new QPen(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPen_Class_Size()
{
  return sizeof(QPen);
}

// <= use block end

// ext block begin =>
//   // proto:  void QPen::~QPen();
extern "C"
void C_ZN4QPenD2Ev(void *qthis) {
  delete (QPen*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 80, column 11>
//   // proto:  qreal QPen::dashOffset();
// _ZNK4QPen10dashOffsetEv dashOffset()
extern "C"
double
C_ZNK4QPen10dashOffsetEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->dashOffset();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 58, column 5>
//   // proto:  void QPen::QPen(const QColor & color);
extern "C"
QPen*
C_ZN4QPenC2ERK6QColor(const QColor* arg1) {
  auto ret = new QPen(*((const QColor*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 83, column 11>
//   // proto:  qreal QPen::miterLimit();
// _ZNK4QPen10miterLimitEv miterLimit()
extern "C"
double
C_ZNK4QPen10miterLimitEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->miterLimit();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 74, column 18>
//   // proto:  Qt::PenStyle QPen::style();
// _ZNK4QPen5styleEv style()
extern "C"
Qt::PenStyle
C_ZNK4QPen5styleEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->style();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 75, column 10>
//   // proto:  void QPen::setStyle(Qt::PenStyle );
// _ZN4QPen8setStyleEN2Qt8PenStyleE setStyle(Qt::PenStyle)
extern "C"
void
C_ZN4QPen8setStyleEN2Qt8PenStyleE(void *qthis,
Qt::PenStyle* arg1) {
  ((QPen*)qthis)->setStyle(*((Qt::PenStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 87, column 10>
//   // proto:  void QPen::setWidthF(qreal width);
// _ZN4QPen9setWidthFEd setWidthF(qreal)
extern "C"
void
C_ZN4QPen9setWidthFEd(void *qthis,
qreal arg1) {
  ((QPen*)qthis)->setWidthF(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 96, column 10>
//   // proto:  void QPen::setBrush(const QBrush & brush);
// _ZN4QPen8setBrushERK6QBrush setBrush(const class QBrush &)
extern "C"
void
C_ZN4QPen8setBrushERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QPen*)qthis)->setBrush(*((const QBrush*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 78, column 10>
//   // proto:  void QPen::setDashPattern(const QVector<qreal> & pattern);
// _ZN4QPen14setDashPatternERK7QVectorIdE setDashPattern(const QVector<qreal> &)
extern "C"
void
C_ZN4QPen14setDashPatternERK7QVectorIdE(void *qthis,
const QVector<qreal>* arg1) {
  ((QPen*)qthis)->setDashPattern(*((const QVector<qreal>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 92, column 12>
//   // proto:  QColor QPen::color();
// _ZNK4QPen5colorEv color()
extern "C"
QColor*
C_ZNK4QPen5colorEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->color();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 90, column 10>
//   // proto:  void QPen::setWidth(int width);
// _ZN4QPen8setWidthEi setWidth(int)
extern "C"
void
C_ZN4QPen8setWidthEi(void *qthis,
int arg1) {
  ((QPen*)qthis)->setWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 86, column 11>
//   // proto:  qreal QPen::widthF();
// _ZNK4QPen6widthFEv widthF()
extern "C"
double
C_ZNK4QPen6widthFEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->widthF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 107, column 10>
//   // proto:  void QPen::setCosmetic(bool cosmetic);
// _ZN4QPen11setCosmeticEb setCosmetic(_Bool)
extern "C"
void
C_ZN4QPen11setCosmeticEb(void *qthis,
bool arg1) {
  ((QPen*)qthis)->setCosmetic(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 104, column 10>
//   // proto:  void QPen::setJoinStyle(Qt::PenJoinStyle pcs);
// _ZN4QPen12setJoinStyleEN2Qt12PenJoinStyleE setJoinStyle(Qt::PenJoinStyle)
extern "C"
void
C_ZN4QPen12setJoinStyleEN2Qt12PenJoinStyleE(void *qthis,
Qt::PenJoinStyle* arg1) {
  ((QPen*)qthis)->setJoinStyle(*((Qt::PenJoinStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 98, column 10>
//   // proto:  bool QPen::isSolid();
// _ZNK4QPen7isSolidEv isSolid()
extern "C"
bool
C_ZNK4QPen7isSolidEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->isSolid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 93, column 10>
//   // proto:  void QPen::setColor(const QColor & color);
// _ZN4QPen8setColorERK6QColor setColor(const class QColor &)
extern "C"
void
C_ZN4QPen8setColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QPen*)qthis)->setColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 77, column 20>
//   // proto:  QVector<qreal> QPen::dashPattern();
// _ZNK4QPen11dashPatternEv dashPattern()
extern "C"
QVector<double>*
C_ZNK4QPen11dashPatternEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->dashPattern();
  return new QVector<double>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 113, column 10>
//   // proto:  bool QPen::isDetached();
// _ZN4QPen10isDetachedEv isDetached()
extern "C"
bool
C_ZN4QPen10isDetachedEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 57, column 5>
//   // proto:  void QPen::QPen(Qt::PenStyle );
extern "C"
QPen*
C_ZN4QPenC2EN2Qt8PenStyleE(Qt::PenStyle* arg1) {
  auto ret = new QPen(*((Qt::PenStyle*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 61, column 5>
//   // proto:  void QPen::QPen(const QPen & pen);
extern "C"
QPen*
C_ZN4QPenC2ERKS_(const QPen* arg1) {
  auto ret = new QPen(*((const QPen*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 84, column 10>
//   // proto:  void QPen::setMiterLimit(qreal limit);
// _ZN4QPen13setMiterLimitEd setMiterLimit(qreal)
extern "C"
void
C_ZN4QPen13setMiterLimitEd(void *qthis,
qreal arg1) {
  ((QPen*)qthis)->setMiterLimit(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 56, column 5>
//   // proto:  void QPen::QPen();
extern "C"
QPen*
C_ZN4QPenC2Ev() {
  auto ret = new QPen();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 103, column 22>
//   // proto:  Qt::PenJoinStyle QPen::joinStyle();
// _ZNK4QPen9joinStyleEv joinStyle()
extern "C"
Qt::PenJoinStyle
C_ZNK4QPen9joinStyleEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->joinStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 89, column 9>
//   // proto:  int QPen::width();
// _ZNK4QPen5widthEv width()
extern "C"
int
C_ZNK4QPen5widthEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 72, column 10>
//   // proto:  void QPen::swap(QPen & other);
// _ZN4QPen4swapERS_ swap(class QPen &)
extern "C"
void
C_ZN4QPen4swapERS_(void *qthis,
QPen* arg1) {
  ((QPen*)qthis)->swap(*((QPen*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 95, column 12>
//   // proto:  QBrush QPen::brush();
// _ZNK4QPen5brushEv brush()
extern "C"
QBrush*
C_ZNK4QPen5brushEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->brush();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 100, column 21>
//   // proto:  Qt::PenCapStyle QPen::capStyle();
// _ZNK4QPen8capStyleEv capStyle()
extern "C"
Qt::PenCapStyle
C_ZNK4QPen8capStyleEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->capStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 101, column 10>
//   // proto:  void QPen::setCapStyle(Qt::PenCapStyle pcs);
// _ZN4QPen11setCapStyleEN2Qt11PenCapStyleE setCapStyle(Qt::PenCapStyle)
extern "C"
void
C_ZN4QPen11setCapStyleEN2Qt11PenCapStyleE(void *qthis,
Qt::PenCapStyle* arg1) {
  ((QPen*)qthis)->setCapStyle(*((Qt::PenCapStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 106, column 10>
//   // proto:  bool QPen::isCosmetic();
// _ZNK4QPen10isCosmeticEv isCosmetic()
extern "C"
bool
C_ZNK4QPen10isCosmeticEv(void *qthis) {
  auto ret =
  ((QPen*)qthis)->isCosmetic();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 67, column 5>
//   // proto:  void QPen::QPen(QPen && other);
extern "C"
QPen*
C_ZN4QPenC2EOS_(QPen* arg1) {
  auto ret = new QPen(*((QPen*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 81, column 10>
//   // proto:  void QPen::setDashOffset(qreal doffset);
// _ZN4QPen13setDashOffsetEd setDashOffset(qreal)
extern "C"
void
C_ZN4QPen13setDashOffsetEd(void *qthis,
qreal arg1) {
  ((QPen*)qthis)->setDashOffset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpen.h', line 59, column 5>
//   // proto:  void QPen::QPen(const QBrush & brush, qreal width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j);
extern "C"
QPen*
C_ZN4QPenC2ERK6QBrushdN2Qt8PenStyleENS3_11PenCapStyleENS3_12PenJoinStyleE(const QBrush* arg1,
qreal arg2,
Qt::PenStyle* arg3,
Qt::PenCapStyle* arg4,
Qt::PenJoinStyle* arg5) {
  auto ret = new QPen(*((const QBrush*)arg1), arg2, *((Qt::PenStyle*)arg3), *((Qt::PenCapStyle*)arg4), *((Qt::PenJoinStyle*)arg5));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

