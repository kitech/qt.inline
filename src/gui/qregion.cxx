// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qregion.h
// dst-file: /src/gui/qregion.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qregion.h>


#include <qrect.h>
#include <qvector.h>
// <= header block end

// main block begin =>
void __keep_qregion_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 82, column 20>
//   // proto:  QRegion QRegion::translated(const QPoint & p);
if (true) {
  auto f = [](QRegion flythis, const QPoint & arg1) {
    ((QRegion*)0)->translated(arg1);
    flythis.translated(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QRegion10translatedERK6QPoint translated(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 72, column 17>
//   // proto:  void QRegion::swap(QRegion & other);
if (true) {
  auto f = [](QRegion flythis, QRegion & arg1) {
    ((QRegion*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QRegion4swapERS_ swap(class QRegion &)
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 80, column 17>
//   // proto:  void QRegion::translate(const QPoint & p);
if (true) {
  auto f = [](QRegion flythis, const QPoint & arg1) {
    ((QRegion*)0)->translate(arg1);
    flythis.translate(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QRegion9translateERK6QPoint translate(const class QPoint &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRegion_Class_Size()
{
  return sizeof(QRegion);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 74, column 10>
//   // proto:  bool QRegion::isNull();
// _ZNK7QRegion6isNullEv isNull()
extern "C"
bool
C_ZNK7QRegion6isNullEv(void *qthis) {
  auto ret =
  ((QRegion*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 103, column 11>
//   // proto:  QRect QRegion::boundingRect();
// _ZNK7QRegion12boundingRectEv boundingRect()
extern "C"
QRect*
C_ZNK7QRegion12boundingRectEv(void *qthis) {
  auto ret =
  ((QRegion*)qthis)->boundingRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 64, column 5>
//   // proto:  void QRegion::QRegion(const QRegion & region);
extern "C"
QRegion*
C_ZN7QRegionC2ERKS_(const QRegion* arg1) {
  auto ret = new QRegion(*((const QRegion*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 106, column 9>
//   // proto:  int QRegion::rectCount();
// _ZNK7QRegion9rectCountEv rectCount()
extern "C"
int
C_ZNK7QRegion9rectCountEv(void *qthis) {
  auto ret =
  ((QRegion*)qthis)->rectCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 79, column 10>
//   // proto:  void QRegion::translate(int dx, int dy);
// _ZN7QRegion9translateEii translate(int, int)
extern "C"
void
C_ZN7QRegion9translateEii(void *qthis,
int arg1,
int arg2) {
  ((QRegion*)qthis)->translate(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 84, column 13>
//   // proto:  QRegion QRegion::united(const QRegion & r);
// _ZNK7QRegion6unitedERKS_ united(const class QRegion &)
extern "C"
QRegion*
C_ZNK7QRegion6unitedERKS_(void *qthis,
const QRegion* arg1) {
  auto ret =
  ((QRegion*)qthis)->united(*((const QRegion*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 82, column 20>
//   // proto:  QRegion QRegion::translated(const QPoint & p);
// _ZNK7QRegion10translatedERK6QPoint translated(const class QPoint &)
extern "C"
QRegion*
C_ZNK7QRegion10translatedERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QRegion*)qthis)->translated(*((const QPoint*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 72, column 17>
//   // proto:  void QRegion::swap(QRegion & other);
// _ZN7QRegion4swapERS_ swap(class QRegion &)
extern "C"
void
C_ZN7QRegion4swapERS_(void *qthis,
QRegion* arg1) {
  ((QRegion*)qthis)->swap(*((QRegion*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 65, column 5>
//   // proto:  void QRegion::QRegion(const QBitmap & bitmap);
extern "C"
QRegion*
C_ZN7QRegionC2ERK7QBitmap(const QBitmap* arg1) {
  auto ret = new QRegion(*((const QBitmap*)arg1));
  return ret;
}
//   // proto:  void QRegion::~QRegion();
extern "C"
void C_ZN7QRegionD2Ev(void *qthis) {
  delete (QRegion*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 63, column 5>
//   // proto:  void QRegion::QRegion(const QPolygon & pa, Qt::FillRule fillRule);
extern "C"
QRegion*
C_ZN7QRegionC2ERK8QPolygonN2Qt8FillRuleE(const QPolygon* arg1,
Qt::FillRule* arg2) {
  auto ret = new QRegion(*((const QPolygon*)arg1), *((Qt::FillRule*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 80, column 17>
//   // proto:  void QRegion::translate(const QPoint & p);
// _ZN7QRegion9translateERK6QPoint translate(const class QPoint &)
extern "C"
void
C_ZN7QRegion9translateERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QRegion*)qthis)->translate(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 60, column 5>
//   // proto:  void QRegion::QRegion();
extern "C"
QRegion*
C_ZN7QRegionC2Ev() {
  auto ret = new QRegion();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 77, column 10>
//   // proto:  bool QRegion::contains(const QRect & r);
// _ZNK7QRegion8containsERK5QRect contains(const class QRect &)
extern "C"
bool
C_ZNK7QRegion8containsERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QRegion*)qthis)->contains(*((const QRect*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 62, column 5>
//   // proto:  void QRegion::QRegion(const QRect & r, QRegion::RegionType t);
extern "C"
QRegion*
C_ZN7QRegionC2ERK5QRectNS_10RegionTypeE(const QRect* arg1,
QRegion::RegionType arg2) {
  auto ret = new QRegion(*((const QRect*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 73, column 10>
//   // proto:  bool QRegion::isEmpty();
// _ZNK7QRegion7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK7QRegion7isEmptyEv(void *qthis) {
  auto ret =
  ((QRegion*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 61, column 5>
//   // proto:  void QRegion::QRegion(int x, int y, int w, int h, QRegion::RegionType t);
extern "C"
QRegion*
C_ZN7QRegionC2EiiiiNS_10RegionTypeE(int arg1,
int arg2,
int arg3,
int arg4,
QRegion::RegionType arg5) {
  auto ret = new QRegion(arg1, arg2, arg3, arg4, arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 87, column 13>
//   // proto:  QRegion QRegion::intersected(const QRect & r);
// _ZNK7QRegion11intersectedERK5QRect intersected(const class QRect &)
extern "C"
QRegion*
C_ZNK7QRegion11intersectedERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QRegion*)qthis)->intersected(*((const QRect*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 105, column 10>
//   // proto:  void QRegion::setRects(const QRect * rect, int num);
// _ZN7QRegion8setRectsEPK5QRecti setRects(const class QRect *, int)
extern "C"
void
C_ZN7QRegion8setRectsEPK5QRecti(void *qthis,
const QRect * arg1,
int arg2) {
  ((QRegion*)qthis)->setRects(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 104, column 20>
//   // proto:  QVector<QRect> QRegion::rects();
// _ZNK7QRegion5rectsEv rects()
extern "C"
QVector<QRect>*
C_ZNK7QRegion5rectsEv(void *qthis) {
  auto ret =
  ((QRegion*)qthis)->rects();
  return new QVector<QRect>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 88, column 13>
//   // proto:  QRegion QRegion::subtracted(const QRegion & r);
// _ZNK7QRegion10subtractedERKS_ subtracted(const class QRegion &)
extern "C"
QRegion*
C_ZNK7QRegion10subtractedERKS_(void *qthis,
const QRegion* arg1) {
  auto ret =
  ((QRegion*)qthis)->subtracted(*((const QRegion*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 101, column 10>
//   // proto:  bool QRegion::intersects(const QRect & r);
// _ZNK7QRegion10intersectsERK5QRect intersects(const class QRect &)
extern "C"
bool
C_ZNK7QRegion10intersectsERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QRegion*)qthis)->intersects(*((const QRect*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 81, column 13>
//   // proto:  QRegion QRegion::translated(int dx, int dy);
// _ZNK7QRegion10translatedEii translated(int, int)
extern "C"
QRegion*
C_ZNK7QRegion10translatedEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QRegion*)qthis)->translated(arg1,
arg2);
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 86, column 13>
//   // proto:  QRegion QRegion::intersected(const QRegion & r);
// _ZNK7QRegion11intersectedERKS_ intersected(const class QRegion &)
extern "C"
QRegion*
C_ZNK7QRegion11intersectedERKS_(void *qthis,
const QRegion* arg1) {
  auto ret =
  ((QRegion*)qthis)->intersected(*((const QRegion*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 85, column 13>
//   // proto:  QRegion QRegion::united(const QRect & r);
// _ZNK7QRegion6unitedERK5QRect united(const class QRect &)
extern "C"
QRegion*
C_ZNK7QRegion6unitedERK5QRect(void *qthis,
const QRect* arg1) {
  auto ret =
  ((QRegion*)qthis)->united(*((const QRect*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 89, column 13>
//   // proto:  QRegion QRegion::xored(const QRegion & r);
// _ZNK7QRegion5xoredERKS_ xored(const class QRegion &)
extern "C"
QRegion*
C_ZNK7QRegion5xoredERKS_(void *qthis,
const QRegion* arg1) {
  auto ret =
  ((QRegion*)qthis)->xored(*((const QRegion*)arg1));
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 100, column 10>
//   // proto:  bool QRegion::intersects(const QRegion & r);
// _ZNK7QRegion10intersectsERKS_ intersects(const class QRegion &)
extern "C"
bool
C_ZNK7QRegion10intersectsERKS_(void *qthis,
const QRegion* arg1) {
  auto ret =
  ((QRegion*)qthis)->intersects(*((const QRegion*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qregion.h', line 76, column 10>
//   // proto:  bool QRegion::contains(const QPoint & p);
// _ZNK7QRegion8containsERK6QPoint contains(const class QPoint &)
extern "C"
bool
C_ZNK7QRegion8containsERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QRegion*)qthis)->contains(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

