// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qpagesize.h
// dst-file: /src/gui/qpagesize.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpagesize.h>


#include <qstring.h>
#include <qsize.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qpagesize_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 245, column 10>
//   // proto:  void QPageSize::swap(QPageSize & other);
if (true) {
  auto f = [](QPageSize flythis, QPageSize & arg1) {
    ((QPageSize*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QPageSize4swapERS_ swap(class QPageSize &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPageSize_Class_Size()
{
  return sizeof(QPageSize);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 229, column 5>
//   // proto:  void QPageSize::QPageSize();
extern "C"
QPageSize*
C_ZN9QPageSizeC2Ev() {
  auto ret = new QPageSize();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 234, column 14>
//   // proto:  void QPageSize::QPageSize(const QSizeF & size, QPageSize::Unit units, const QString & name, QPageSize::SizeMatchPolicy matchPolicy);
extern "C"
QPageSize*
C_ZN9QPageSizeC2ERK6QSizeFNS_4UnitERK7QStringNS_15SizeMatchPolicyE(const QSizeF* arg1,
QPageSize::Unit arg2,
const QString* arg3,
QPageSize::SizeMatchPolicy arg4) {
  auto ret = new QPageSize(*((const QSizeF*)arg1),
arg2,
*((const QString*)arg3),
arg4);
  return ret;
}
//   // proto:  void QPageSize::~QPageSize();
extern "C"
void C_ZN9QPageSizeD2Ev(void *qthis) {
  delete (QPageSize*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 282, column 17>
//   // proto: static QPageSize::Unit QPageSize::definitionUnits(QPageSize::PageSizeId pageSizeId);
// _ZN9QPageSize15definitionUnitsENS_10PageSizeIdE definitionUnits(enum QPageSize::PageSizeId)
extern "C"
QPageSize::Unit
C_ZN9QPageSize15definitionUnitsENS_10PageSizeIdE(QPageSize::PageSizeId arg1) {
  auto ret =
  QPageSize::definitionUnits(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 252, column 13>
//   // proto:  QString QPageSize::key();
// _ZNK9QPageSize3keyEv key()
extern "C"
QString*
C_ZNK9QPageSize3keyEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->key();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 275, column 23>
//   // proto: static QPageSize::PageSizeId QPageSize::id(const QSizeF & size, QPageSize::Unit units, QPageSize::SizeMatchPolicy matchPolicy);
// _ZN9QPageSize2idERK6QSizeFNS_4UnitENS_15SizeMatchPolicyE id(const class QSizeF &, enum QPageSize::Unit, enum QPageSize::SizeMatchPolicy)
extern "C"
QPageSize::PageSizeId
C_ZN9QPageSize2idERK6QSizeFNS_4UnitENS_15SizeMatchPolicyE(const QSizeF* arg1,
QPageSize::Unit arg2,
QPageSize::SizeMatchPolicy arg3) {
  auto ret =
  QPageSize::id(*((const QSizeF*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 253, column 13>
//   // proto:  QString QPageSize::name();
// _ZNK9QPageSize4nameEv name()
extern "C"
QString*
C_ZNK9QPageSize4nameEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 262, column 12>
//   // proto:  QSizeF QPageSize::size(QPageSize::Unit units);
// _ZNK9QPageSize4sizeENS_4UnitE size(enum QPageSize::Unit)
extern "C"
QSizeF*
C_ZNK9QPageSize4sizeENS_4UnitE(void *qthis,
QPageSize::Unit arg1) {
  auto ret =
  ((QPageSize*)qthis)->size(arg1);
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 279, column 16>
//   // proto: static int QPageSize::windowsId(QPageSize::PageSizeId pageSizeId);
// _ZN9QPageSize9windowsIdENS_10PageSizeIdE windowsId(enum QPageSize::PageSizeId)
extern "C"
int
C_ZN9QPageSize9windowsIdENS_10PageSizeIdE(QPageSize::PageSizeId arg1) {
  auto ret =
  QPageSize::windowsId(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 259, column 12>
//   // proto:  QSizeF QPageSize::definitionSize();
// _ZNK9QPageSize14definitionSizeEv definitionSize()
extern "C"
QSizeF*
C_ZNK9QPageSize14definitionSizeEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->definitionSize();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 231, column 14>
//   // proto:  void QPageSize::QPageSize(const QSize & pointSize, const QString & name, QPageSize::SizeMatchPolicy matchPolicy);
extern "C"
QPageSize*
C_ZN9QPageSizeC2ERK5QSizeRK7QStringNS_15SizeMatchPolicyE(const QSize* arg1,
const QString* arg2,
QPageSize::SizeMatchPolicy arg3) {
  auto ret = new QPageSize(*((const QSize*)arg1),
*((const QString*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 245, column 10>
//   // proto:  void QPageSize::swap(QPageSize & other);
// _ZN9QPageSize4swapERS_ swap(class QPageSize &)
extern "C"
void
C_ZN9QPageSize4swapERS_(void *qthis,
QPageSize* arg1) {
  ((QPageSize*)qthis)->swap(*((QPageSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 278, column 23>
//   // proto: static QPageSize::PageSizeId QPageSize::id(int windowsId);
// _ZN9QPageSize2idEi id(int)
extern "C"
QPageSize::PageSizeId
C_ZN9QPageSize2idEi(int arg1) {
  auto ret =
  QPageSize::id(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 255, column 16>
//   // proto:  QPageSize::PageSizeId QPageSize::id();
// _ZNK9QPageSize2idEv id()
extern "C"
QPageSize::PageSizeId
C_ZNK9QPageSize2idEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->id();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 260, column 10>
//   // proto:  QPageSize::Unit QPageSize::definitionUnits();
// _ZNK9QPageSize15definitionUnitsEv definitionUnits()
extern "C"
QPageSize::Unit
C_ZNK9QPageSize15definitionUnitsEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->definitionUnits();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 257, column 9>
//   // proto:  int QPageSize::windowsId();
// _ZNK9QPageSize9windowsIdEv windowsId()
extern "C"
int
C_ZNK9QPageSize9windowsIdEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->windowsId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 264, column 11>
//   // proto:  QSize QPageSize::sizePixels(int resolution);
// _ZNK9QPageSize10sizePixelsEi sizePixels(int)
extern "C"
QSize*
C_ZNK9QPageSize10sizePixelsEi(void *qthis,
int arg1) {
  auto ret =
  ((QPageSize*)qthis)->sizePixels(arg1);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 271, column 20>
//   // proto: static QString QPageSize::name(QPageSize::PageSizeId pageSizeId);
// _ZN9QPageSize4nameENS_10PageSizeIdE name(enum QPageSize::PageSizeId)
extern "C"
QString*
C_ZN9QPageSize4nameENS_10PageSizeIdE(QPageSize::PageSizeId arg1) {
  auto ret =
  QPageSize::name(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 237, column 5>
//   // proto:  void QPageSize::QPageSize(const QPageSize & other);
extern "C"
QPageSize*
C_ZN9QPageSizeC2ERKS_(const QPageSize* arg1) {
  auto ret = new QPageSize(*((const QPageSize*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 286, column 18>
//   // proto: static QSize QPageSize::sizePixels(QPageSize::PageSizeId pageSizeId, int resolution);
// _ZN9QPageSize10sizePixelsENS_10PageSizeIdEi sizePixels(enum QPageSize::PageSizeId, int)
extern "C"
QSize*
C_ZN9QPageSize10sizePixelsENS_10PageSizeIdEi(QPageSize::PageSizeId arg1,
int arg2) {
  auto ret =
  QPageSize::sizePixels(arg1,
arg2);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 250, column 10>
//   // proto:  bool QPageSize::isValid();
// _ZNK9QPageSize7isValidEv isValid()
extern "C"
bool
C_ZNK9QPageSize7isValidEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 266, column 12>
//   // proto:  QRectF QPageSize::rect(QPageSize::Unit units);
// _ZNK9QPageSize4rectENS_4UnitE rect(enum QPageSize::Unit)
extern "C"
QRectF*
C_ZNK9QPageSize4rectENS_4UnitE(void *qthis,
QPageSize::Unit arg1) {
  auto ret =
  ((QPageSize*)qthis)->rect(arg1);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 281, column 19>
//   // proto: static QSizeF QPageSize::definitionSize(QPageSize::PageSizeId pageSizeId);
// _ZN9QPageSize14definitionSizeENS_10PageSizeIdE definitionSize(enum QPageSize::PageSizeId)
extern "C"
QSizeF*
C_ZN9QPageSize14definitionSizeENS_10PageSizeIdE(QPageSize::PageSizeId arg1) {
  auto ret =
  QPageSize::definitionSize(arg1);
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 230, column 14>
//   // proto:  void QPageSize::QPageSize(QPageSize::PageSizeId pageSizeId);
extern "C"
QPageSize*
C_ZN9QPageSizeC2ENS_10PageSizeIdE(QPageSize::PageSizeId arg1) {
  auto ret = new QPageSize(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 273, column 23>
//   // proto: static QPageSize::PageSizeId QPageSize::id(const QSize & pointSize, QPageSize::SizeMatchPolicy matchPolicy);
// _ZN9QPageSize2idERK5QSizeNS_15SizeMatchPolicyE id(const class QSize &, enum QPageSize::SizeMatchPolicy)
extern "C"
QPageSize::PageSizeId
C_ZN9QPageSize2idERK5QSizeNS_15SizeMatchPolicyE(const QSize* arg1,
QPageSize::SizeMatchPolicy arg2) {
  auto ret =
  QPageSize::id(*((const QSize*)arg1),
arg2);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 268, column 11>
//   // proto:  QRect QPageSize::rectPixels(int resolution);
// _ZNK9QPageSize10rectPixelsEi rectPixels(int)
extern "C"
QRect*
C_ZNK9QPageSize10rectPixelsEi(void *qthis,
int arg1) {
  auto ret =
  ((QPageSize*)qthis)->rectPixels(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 267, column 11>
//   // proto:  QRect QPageSize::rectPoints();
// _ZNK9QPageSize10rectPointsEv rectPoints()
extern "C"
QRect*
C_ZNK9QPageSize10rectPointsEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->rectPoints();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 284, column 19>
//   // proto: static QSizeF QPageSize::size(QPageSize::PageSizeId pageSizeId, QPageSize::Unit units);
// _ZN9QPageSize4sizeENS_10PageSizeIdENS_4UnitE size(enum QPageSize::PageSizeId, enum QPageSize::Unit)
extern "C"
QSizeF*
C_ZN9QPageSize4sizeENS_10PageSizeIdENS_4UnitE(QPageSize::PageSizeId arg1,
QPageSize::Unit arg2) {
  auto ret =
  QPageSize::size(arg1,
arg2);
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 270, column 20>
//   // proto: static QString QPageSize::key(QPageSize::PageSizeId pageSizeId);
// _ZN9QPageSize3keyENS_10PageSizeIdE key(enum QPageSize::PageSizeId)
extern "C"
QString*
C_ZN9QPageSize3keyENS_10PageSizeIdE(QPageSize::PageSizeId arg1) {
  auto ret =
  QPageSize::key(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 285, column 18>
//   // proto: static QSize QPageSize::sizePoints(QPageSize::PageSizeId pageSizeId);
// _ZN9QPageSize10sizePointsENS_10PageSizeIdE sizePoints(enum QPageSize::PageSizeId)
extern "C"
QSize*
C_ZN9QPageSize10sizePointsENS_10PageSizeIdE(QPageSize::PageSizeId arg1) {
  auto ret =
  QPageSize::sizePoints(arg1);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 248, column 10>
//   // proto:  bool QPageSize::isEquivalentTo(const QPageSize & other);
// _ZNK9QPageSize14isEquivalentToERKS_ isEquivalentTo(const class QPageSize &)
extern "C"
bool
C_ZNK9QPageSize14isEquivalentToERKS_(void *qthis,
const QPageSize* arg1) {
  auto ret =
  ((QPageSize*)qthis)->isEquivalentTo(*((const QPageSize*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagesize.h', line 263, column 11>
//   // proto:  QSize QPageSize::sizePoints();
// _ZNK9QPageSize10sizePointsEv sizePoints()
extern "C"
QSize*
C_ZNK9QPageSize10sizePointsEv(void *qthis) {
  auto ret =
  ((QPageSize*)qthis)->sizePoints();
  return new QSize(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

