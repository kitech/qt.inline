// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qcursor.h
// dst-file: /src/gui/qcursor.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcursor.h>


#include <qpixmap.h>
#include <qnamespace.h>
#include <qpoint.h>
// <= header block end

// main block begin =>
void __keep_qcursor_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 102, column 24>
//   // proto: static void QCursor::setPos(QScreen * screen, const QPoint & p);
if (true) {
  auto f = [](QCursor flythis, QScreen * arg1, const QPoint & arg2) {
    ((QCursor*)0)->setPos(arg1, arg2);
    flythis.setPos(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN7QCursor6setPosEP7QScreenRK6QPoint setPos(class QScreen *, const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 101, column 24>
//   // proto: static void QCursor::setPos(const QPoint & p);
if (true) {
  auto f = [](QCursor flythis, const QPoint & arg1) {
    ((QCursor*)0)->setPos(arg1);
    flythis.setPos(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QCursor6setPosERK6QPoint setPos(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 83, column 5>
//   // proto:  void QCursor::QCursor(QCursor && other);
if (true) {
  auto f = [](QCursor && arg1) {
    new QCursor(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCursor_Class_Size()
{
  return sizeof(QCursor);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 100, column 17>
//   // proto: static void QCursor::setPos(QScreen * screen, int x, int y);
// _ZN7QCursor6setPosEP7QScreenii setPos(class QScreen *, int, int)
extern "C"
void
C_ZN7QCursor6setPosEP7QScreenii(QScreen * arg1,
int arg2,
int arg3) {
  QCursor::setPos(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 94, column 13>
//   // proto:  QPixmap QCursor::pixmap();
// _ZNK7QCursor6pixmapEv pixmap()
extern "C"
QPixmap*
C_ZNK7QCursor6pixmapEv(void *qthis) {
  auto ret =
  ((QCursor*)qthis)->pixmap();
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 77, column 5>
//   // proto:  void QCursor::QCursor(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY);
extern "C"
QCursor*
C_ZN7QCursorC2ERK7QBitmapS2_ii(const QBitmap* arg1,
const QBitmap* arg2,
int arg3,
int arg4) {
  auto ret = new QCursor(*((const QBitmap*)arg1), *((const QBitmap*)arg2), arg3, arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 78, column 5>
//   // proto:  void QCursor::QCursor(const QPixmap & pixmap, int hotX, int hotY);
extern "C"
QCursor*
C_ZN7QCursorC2ERK7QPixmapii(const QPixmap* arg1,
int arg2,
int arg3) {
  auto ret = new QCursor(*((const QPixmap*)arg1), arg2, arg3);
  return ret;
}
//   // proto:  void QCursor::~QCursor();
extern "C"
void C_ZN7QCursorD2Ev(void *qthis) {
  delete (QCursor*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 93, column 20>
//   // proto:  const QBitmap * QCursor::mask();
// _ZNK7QCursor4maskEv mask()
extern "C"
void*
C_ZNK7QCursor4maskEv(void *qthis) {
  auto ret =
  ((QCursor*)qthis)->mask();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 79, column 5>
//   // proto:  void QCursor::QCursor(const QCursor & cursor);
extern "C"
QCursor*
C_ZN7QCursorC2ERKS_(const QCursor* arg1) {
  auto ret = new QCursor(*((const QCursor*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 99, column 17>
//   // proto: static void QCursor::setPos(int x, int y);
// _ZN7QCursor6setPosEii setPos(int, int)
extern "C"
void
C_ZN7QCursor6setPosEii(int arg1,
int arg2) {
  QCursor::setPos(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 102, column 24>
//   // proto: static void QCursor::setPos(QScreen * screen, const QPoint & p);
// _ZN7QCursor6setPosEP7QScreenRK6QPoint setPos(class QScreen *, const class QPoint &)
extern "C"
void
C_ZN7QCursor6setPosEP7QScreenRK6QPoint(QScreen * arg1,
const QPoint* arg2) {
  QCursor::setPos(arg1,
*((const QPoint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 101, column 24>
//   // proto: static void QCursor::setPos(const QPoint & p);
// _ZN7QCursor6setPosERK6QPoint setPos(const class QPoint &)
extern "C"
void
C_ZN7QCursor6setPosERK6QPoint(const QPoint* arg1) {
  QCursor::setPos(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 89, column 21>
//   // proto:  Qt::CursorShape QCursor::shape();
// _ZNK7QCursor5shapeEv shape()
extern "C"
Qt::CursorShape
C_ZNK7QCursor5shapeEv(void *qthis) {
  auto ret =
  ((QCursor*)qthis)->shape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 83, column 5>
//   // proto:  void QCursor::QCursor(QCursor && other);
extern "C"
QCursor*
C_ZN7QCursorC2EOS_(QCursor* arg1) {
  auto ret = new QCursor(*((QCursor*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 92, column 20>
//   // proto:  const QBitmap * QCursor::bitmap();
// _ZNK7QCursor6bitmapEv bitmap()
extern "C"
void*
C_ZNK7QCursor6bitmapEv(void *qthis) {
  auto ret =
  ((QCursor*)qthis)->bitmap();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 98, column 19>
//   // proto: static QPoint QCursor::pos(const QScreen * screen);
// _ZN7QCursor3posEPK7QScreen pos(const class QScreen *)
extern "C"
QPoint*
C_ZN7QCursor3posEPK7QScreen(const QScreen * arg1) {
  auto ret =
  QCursor::pos(arg1);
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 90, column 10>
//   // proto:  void QCursor::setShape(Qt::CursorShape newShape);
// _ZN7QCursor8setShapeEN2Qt11CursorShapeE setShape(Qt::CursorShape)
extern "C"
void
C_ZN7QCursor8setShapeEN2Qt11CursorShapeE(void *qthis,
Qt::CursorShape* arg1) {
  ((QCursor*)qthis)->setShape(*((Qt::CursorShape*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 76, column 5>
//   // proto:  void QCursor::QCursor(Qt::CursorShape shape);
extern "C"
QCursor*
C_ZN7QCursorC2EN2Qt11CursorShapeE(Qt::CursorShape* arg1) {
  auto ret = new QCursor(*((Qt::CursorShape*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 97, column 19>
//   // proto: static QPoint QCursor::pos();
// _ZN7QCursor3posEv pos()
extern "C"
QPoint*
C_ZN7QCursor3posEv() {
  auto ret =
  QCursor::pos();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 75, column 5>
//   // proto:  void QCursor::QCursor();
extern "C"
QCursor*
C_ZN7QCursorC2Ev() {
  auto ret = new QCursor();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qcursor.h', line 95, column 12>
//   // proto:  QPoint QCursor::hotSpot();
// _ZNK7QCursor7hotSpotEv hotSpot()
extern "C"
QPoint*
C_ZNK7QCursor7hotSpotEv(void *qthis) {
  auto ret =
  ((QCursor*)qthis)->hotSpot();
  return new QPoint(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

