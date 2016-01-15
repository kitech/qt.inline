#include <qglobal.h>
#include <qsize.h>
#include <qpoint.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qrect.h
// dst-file: /src/core/qrect.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qrect.h>

extern "C" {

int QRect_Class_Size()
{
  return sizeof(QRect);
}

int QRectF_Class_Size()
{
  return sizeof(QRectF);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qrect_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 61, column 33>
//   // proto:  int QRect::right();
if (false) {
  auto f = []() {
    ((QRect*)0)->right();
  };
}
// _ZNK5QRect5rightEv right()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 101, column 42>
//   // proto:  void QRect::moveTo(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->moveTo(arg1);
  };
}
// _ZN5QRect6moveToERK6QPoint moveTo(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 89, column 42>
//   // proto:  void QRect::moveTopLeft(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->moveTopLeft(arg1);
  };
}
// _ZN5QRect11moveTopLeftERK6QPoint moveTopLeft(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 87, column 42>
//   // proto:  void QRect::moveRight(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->moveRight(arg1);
  };
}
// _ZN5QRect9moveRightEi moveRight(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 51, column 22>
//   // proto:  void QRect::QRect(const QPoint & topleft, const QPoint & bottomright);
if (false) {
  auto f = [](const QPoint & arg1, const QPoint & arg2) {
    new QRect(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 97, column 35>
//   // proto:  QRect QRect::translated(int dx, int dy);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QRect*)0)->translated(arg1, arg2);
  };
}
// _ZNK5QRect10translatedEii translated(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 83, column 36>
//   // proto:  QPoint QRect::center();
if (false) {
  auto f = []() {
    ((QRect*)0)->center();
  };
}
// _ZNK5QRect6centerEv center()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 91, column 42>
//   // proto:  void QRect::moveTopRight(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->moveTopRight(arg1);
  };
}
// _ZN5QRect12moveTopRightERK6QPoint moveTopRight(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 67, column 42>
//   // proto:  void QRect::setLeft(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setLeft(arg1);
  };
}
// _ZN5QRect7setLeftEi setLeft(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 59, column 33>
//   // proto:  int QRect::left();
if (false) {
  auto f = []() {
    ((QRect*)0)->left();
  };
}
// _ZNK5QRect4leftEv left()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 129, column 18>
//   // proto:  QRect QRect::intersected(const QRect & other);
if (false) {
  auto f = [](const QRect & arg1) {
    ((QRect*)0)->intersected(arg1);
  };
}
// _ZNK5QRect11intersectedERKS_ intersected(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 127, column 17>
//   // proto:  bool QRect::contains(int x, int y, bool proper);
if (false) {
  auto f = [](int arg1, int arg2, bool arg3) {
    ((QRect*)0)->contains(arg1, arg2, arg3);
  };
}
// _ZNK5QRect8containsEiib contains(int, int, _Bool)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 80, column 36>
//   // proto:  QPoint QRect::bottomRight();
if (false) {
  auto f = []() {
    ((QRect*)0)->bottomRight();
  };
}
// _ZNK5QRect11bottomRightEv bottomRight()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 57, column 34>
//   // proto:  bool QRect::isValid();
if (false) {
  auto f = []() {
    ((QRect*)0)->isValid();
  };
}
// _ZNK5QRect7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 112, column 35>
//   // proto:  QSize QRect::size();
if (false) {
  auto f = []() {
    ((QRect*)0)->size();
  };
}
// _ZNK5QRect4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 128, column 18>
//   // proto:  QRect QRect::united(const QRect & other);
if (false) {
  auto f = [](const QRect & arg1) {
    ((QRect*)0)->united(arg1);
  };
}
// _ZNK5QRect6unitedERKS_ united(const class QRect &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 109, column 42>
//   // proto:  void QRect::adjust(int x1, int y1, int x2, int y2);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QRect*)0)->adjust(arg1, arg2, arg3, arg4);
  };
}
// _ZN5QRect6adjustEiiii adjust(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 55, column 34>
//   // proto:  bool QRect::isNull();
if (false) {
  auto f = []() {
    ((QRect*)0)->isNull();
  };
}
// _ZNK5QRect6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 70, column 42>
//   // proto:  void QRect::setBottom(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setBottom(arg1);
  };
}
// _ZN5QRect9setBottomEi setBottom(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 117, column 42>
//   // proto:  void QRect::setSize(const QSize & s);
if (false) {
  auto f = [](const QSize & arg1) {
    ((QRect*)0)->setSize(arg1);
  };
}
// _ZN5QRect7setSizeERK5QSize setSize(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 66, column 33>
//   // proto:  int QRect::y();
if (false) {
  auto f = []() {
    ((QRect*)0)->y();
  };
}
// _ZNK5QRect1yEv y()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 65, column 33>
//   // proto:  int QRect::x();
if (false) {
  auto f = []() {
    ((QRect*)0)->x();
  };
}
// _ZNK5QRect1xEv x()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 110, column 35>
//   // proto:  QRect QRect::adjusted(int x1, int y1, int x2, int y2);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QRect*)0)->adjusted(arg1, arg2, arg3, arg4);
  };
}
// _ZNK5QRect8adjustedEiiii adjusted(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 52, column 22>
//   // proto:  void QRect::QRect(const QPoint & topleft, const QSize & size);
if (false) {
  auto f = [](const QPoint & arg1, const QSize & arg2) {
    new QRect(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 114, column 33>
//   // proto:  int QRect::height();
if (false) {
  auto f = []() {
    ((QRect*)0)->height();
  };
}
// _ZNK5QRect6heightEv height()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 53, column 22>
//   // proto:  void QRect::QRect(int left, int top, int width, int height);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    new QRect(arg1, arg2, arg3, arg4);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 92, column 42>
//   // proto:  void QRect::moveBottomLeft(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->moveBottomLeft(arg1);
  };
}
// _ZN5QRect14moveBottomLeftERK6QPoint moveBottomLeft(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 60, column 33>
//   // proto:  int QRect::top();
if (false) {
  auto f = []() {
    ((QRect*)0)->top();
  };
}
// _ZNK5QRect3topEv top()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 100, column 42>
//   // proto:  void QRect::moveTo(int x, int t);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QRect*)0)->moveTo(arg1, arg2);
  };
}
// _ZN5QRect6moveToEii moveTo(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 104, column 42>
//   // proto:  void QRect::getRect(int * x, int * y, int * w, int * h);
if (false) {
  auto f = [](int * arg1, int * arg2, int * arg3, int * arg4) {
    ((QRect*)0)->getRect(arg1, arg2, arg3, arg4);
  };
}
// _ZNK5QRect7getRectEPiS0_S0_S0_ getRect(int *, int *, int *, int *)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 133, column 35>
//   // proto:  QRect QRect::marginsRemoved(const QMargins & margins);
if (false) {
  auto f = [](const QMargins & arg1) {
    ((QRect*)0)->marginsRemoved(arg1);
  };
}
// _ZNK5QRect14marginsRemovedERK8QMargins marginsRemoved(const class QMargins &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 95, column 42>
//   // proto:  void QRect::translate(int dx, int dy);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QRect*)0)->translate(arg1, arg2);
  };
}
// _ZN5QRect9translateEii translate(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 79, column 36>
//   // proto:  QPoint QRect::topLeft();
if (false) {
  auto f = []() {
    ((QRect*)0)->topLeft();
  };
}
// _ZNK5QRect7topLeftEv topLeft()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 113, column 33>
//   // proto:  int QRect::width();
if (false) {
  auto f = []() {
    ((QRect*)0)->width();
  };
}
// _ZNK5QRect5widthEv width()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 103, column 42>
//   // proto:  void QRect::setRect(int x, int y, int w, int h);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QRect*)0)->setRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN5QRect7setRectEiiii setRect(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 93, column 42>
//   // proto:  void QRect::moveCenter(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->moveCenter(arg1);
  };
}
// _ZN5QRect10moveCenterERK6QPoint moveCenter(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 76, column 42>
//   // proto:  void QRect::setTopRight(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->setTopRight(arg1);
  };
}
// _ZN5QRect11setTopRightERK6QPoint setTopRight(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 106, column 42>
//   // proto:  void QRect::setCoords(int x1, int y1, int x2, int y2);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, int arg4) {
    ((QRect*)0)->setCoords(arg1, arg2, arg3, arg4);
  };
}
// _ZN5QRect9setCoordsEiiii setCoords(int, int, int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 96, column 42>
//   // proto:  void QRect::translate(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->translate(arg1);
  };
}
// _ZN5QRect9translateERK6QPoint translate(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 88, column 42>
//   // proto:  void QRect::moveBottom(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->moveBottom(arg1);
  };
}
// _ZN5QRect10moveBottomEi moveBottom(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 77, column 42>
//   // proto:  void QRect::setBottomLeft(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->setBottomLeft(arg1);
  };
}
// _ZN5QRect13setBottomLeftERK6QPoint setBottomLeft(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 107, column 42>
//   // proto:  void QRect::getCoords(int * x1, int * y1, int * x2, int * y2);
if (false) {
  auto f = [](int * arg1, int * arg2, int * arg3, int * arg4) {
    ((QRect*)0)->getCoords(arg1, arg2, arg3, arg4);
  };
}
// _ZNK5QRect9getCoordsEPiS0_S0_S0_ getCoords(int *, int *, int *, int *)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 81, column 36>
//   // proto:  QPoint QRect::topRight();
if (false) {
  auto f = []() {
    ((QRect*)0)->topRight();
  };
}
// _ZNK5QRect8topRightEv topRight()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 75, column 42>
//   // proto:  void QRect::setBottomRight(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->setBottomRight(arg1);
  };
}
// _ZN5QRect14setBottomRightERK6QPoint setBottomRight(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 116, column 42>
//   // proto:  void QRect::setHeight(int h);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setHeight(arg1);
  };
}
// _ZN5QRect9setHeightEi setHeight(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 56, column 34>
//   // proto:  bool QRect::isEmpty();
if (false) {
  auto f = []() {
    ((QRect*)0)->isEmpty();
  };
}
// _ZNK5QRect7isEmptyEv isEmpty()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 126, column 17>
//   // proto:  bool QRect::contains(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QRect*)0)->contains(arg1, arg2);
  };
}
// _ZNK5QRect8containsEii contains(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 90, column 42>
//   // proto:  void QRect::moveBottomRight(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->moveBottomRight(arg1);
  };
}
// _ZN5QRect15moveBottomRightERK6QPoint moveBottomRight(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 82, column 36>
//   // proto:  QPoint QRect::bottomLeft();
if (false) {
  auto f = []() {
    ((QRect*)0)->bottomLeft();
  };
}
// _ZNK5QRect10bottomLeftEv bottomLeft()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 68, column 42>
//   // proto:  void QRect::setTop(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setTop(arg1);
  };
}
// _ZN5QRect6setTopEi setTop(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 62, column 33>
//   // proto:  int QRect::bottom();
if (false) {
  auto f = []() {
    ((QRect*)0)->bottom();
  };
}
// _ZNK5QRect6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 50, column 22>
//   // proto:  void QRect::QRect();
if (false) {
  auto f = []() {
    new QRect();
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 132, column 35>
//   // proto:  QRect QRect::marginsAdded(const QMargins & margins);
if (false) {
  auto f = [](const QMargins & arg1) {
    ((QRect*)0)->marginsAdded(arg1);
  };
}
// _ZNK5QRect12marginsAddedERK8QMargins marginsAdded(const class QMargins &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 115, column 42>
//   // proto:  void QRect::setWidth(int w);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setWidth(arg1);
  };
}
// _ZN5QRect8setWidthEi setWidth(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 72, column 42>
//   // proto:  void QRect::setY(int y);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setY(arg1);
  };
}
// _ZN5QRect4setYEi setY(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 86, column 42>
//   // proto:  void QRect::moveTop(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->moveTop(arg1);
  };
}
// _ZN5QRect7moveTopEi moveTop(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 71, column 42>
//   // proto:  void QRect::setX(int x);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setX(arg1);
  };
}
// _ZN5QRect4setXEi setX(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 69, column 42>
//   // proto:  void QRect::setRight(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->setRight(arg1);
  };
}
// _ZN5QRect8setRightEi setRight(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 74, column 42>
//   // proto:  void QRect::setTopLeft(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->setTopLeft(arg1);
  };
}
// _ZN5QRect10setTopLeftERK6QPoint setTopLeft(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 85, column 42>
//   // proto:  void QRect::moveLeft(int pos);
if (false) {
  auto f = [](int arg1) {
    ((QRect*)0)->moveLeft(arg1);
  };
}
// _ZN5QRect8moveLeftEi moveLeft(int)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 98, column 35>
//   // proto:  QRect QRect::translated(const QPoint & p);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QRect*)0)->translated(arg1);
  };
}
// _ZNK5QRect10translatedERK6QPoint translated(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 496, column 22>
//   // proto:  void QRectF::QRectF();
if (false) {
  auto f = []() {
    new QRectF();
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 537, column 42>
//   // proto:  void QRectF::moveBottomRight(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->moveBottomRight(arg1);
  };
}
// _ZN6QRectF15moveBottomRightERK7QPointF moveBottomRight(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 548, column 42>
//   // proto:  void QRectF::moveTo(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QRectF*)0)->moveTo(arg1, arg2);
  };
}
// _ZN6QRectF6moveToEdd moveTo(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 508, column 35>
//   // proto:  qreal QRectF::top();
if (false) {
  auto f = []() {
    ((QRectF*)0)->top();
  };
}
// _ZNK6QRectF3topEv top()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 524, column 37>
//   // proto:  QPointF QRectF::bottomLeft();
if (false) {
  auto f = []() {
    ((QRectF*)0)->bottomLeft();
  };
}
// _ZNK6QRectF10bottomLeftEv bottomLeft()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 564, column 42>
//   // proto:  void QRectF::setHeight(qreal h);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setHeight(arg1);
  };
}
// _ZN6QRectF9setHeightEd setHeight(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 565, column 42>
//   // proto:  void QRectF::setSize(const QSizeF & s);
if (false) {
  auto f = [](const QSizeF & arg1) {
    ((QRectF*)0)->setSize(arg1);
  };
}
// _ZN6QRectF7setSizeERK6QSizeF setSize(const class QSizeF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 498, column 22>
//   // proto:  void QRectF::QRectF(const QPointF & topleft, const QPointF & bottomRight);
if (false) {
  auto f = [](const QPointF & arg1, const QPointF & arg2) {
    new QRectF(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 549, column 42>
//   // proto:  void QRectF::moveTo(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->moveTo(arg1);
  };
}
// _ZN6QRectF6moveToERK7QPointF moveTo(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 516, column 42>
//   // proto:  void QRectF::setRight(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setRight(arg1);
  };
}
// _ZN6QRectF8setRightEd setRight(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 530, column 42>
//   // proto:  void QRectF::setBottomLeft(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->setBottomLeft(arg1);
  };
}
// _ZN6QRectF13setBottomLeftERK7QPointF setBottomLeft(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 523, column 37>
//   // proto:  QPointF QRectF::topRight();
if (false) {
  auto f = []() {
    ((QRectF*)0)->topRight();
  };
}
// _ZNK6QRectF8topRightEv topRight()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 560, column 36>
//   // proto:  QSizeF QRectF::size();
if (false) {
  auto f = []() {
    ((QRectF*)0)->size();
  };
}
// _ZNK6QRectF4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 557, column 42>
//   // proto:  void QRectF::adjust(qreal x1, qreal y1, qreal x2, qreal y2);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QRectF*)0)->adjust(arg1, arg2, arg3, arg4);
  };
}
// _ZN6QRectF6adjustEdddd adjust(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 534, column 42>
//   // proto:  void QRectF::moveRight(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->moveRight(arg1);
  };
}
// _ZN6QRectF9moveRightEd moveRight(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 513, column 35>
//   // proto:  qreal QRectF::y();
if (false) {
  auto f = []() {
    ((QRectF*)0)->y();
  };
}
// _ZNK6QRectF1yEv y()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 522, column 37>
//   // proto:  QPointF QRectF::bottomRight();
if (false) {
  auto f = []() {
    ((QRectF*)0)->bottomRight();
  };
}
// _ZNK6QRectF11bottomRightEv bottomRight()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 517, column 42>
//   // proto:  void QRectF::setBottom(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setBottom(arg1);
  };
}
// _ZN6QRectF9setBottomEd setBottom(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 539, column 42>
//   // proto:  void QRectF::moveBottomLeft(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->moveBottomLeft(arg1);
  };
}
// _ZN6QRectF14moveBottomLeftERK7QPointF moveBottomLeft(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 535, column 42>
//   // proto:  void QRectF::moveBottom(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->moveBottom(arg1);
  };
}
// _ZN6QRectF10moveBottomEd moveBottom(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 552, column 42>
//   // proto:  void QRectF::getRect(qreal * x, qreal * y, qreal * w, qreal * h);
if (false) {
  auto f = [](qreal * arg1, qreal * arg2, qreal * arg3, qreal * arg4) {
    ((QRectF*)0)->getRect(arg1, arg2, arg3, arg4);
  };
}
// _ZNK6QRectF7getRectEPdS0_S0_S0_ getRect(qreal *, qreal *, qreal *, qreal *)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 512, column 35>
//   // proto:  qreal QRectF::x();
if (false) {
  auto f = []() {
    ((QRectF*)0)->x();
  };
}
// _ZNK6QRectF1xEv x()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 510, column 35>
//   // proto:  qreal QRectF::bottom();
if (false) {
  auto f = []() {
    ((QRectF*)0)->bottom();
  };
}
// _ZNK6QRectF6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 502, column 34>
//   // proto:  bool QRectF::isNull();
if (false) {
  auto f = []() {
    ((QRectF*)0)->isNull();
  };
}
// _ZNK6QRectF6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 497, column 22>
//   // proto:  void QRectF::QRectF(const QPointF & topleft, const QSizeF & size);
if (false) {
  auto f = [](const QPointF & arg1, const QSizeF & arg2) {
    new QRectF(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 563, column 42>
//   // proto:  void QRectF::setWidth(qreal w);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setWidth(arg1);
  };
}
// _ZN6QRectF8setWidthEd setWidth(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 562, column 35>
//   // proto:  qreal QRectF::height();
if (false) {
  auto f = []() {
    ((QRectF*)0)->height();
  };
}
// _ZNK6QRectF6heightEv height()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 543, column 42>
//   // proto:  void QRectF::translate(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->translate(arg1);
  };
}
// _ZN6QRectF9translateERK7QPointF translate(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 540, column 42>
//   // proto:  void QRectF::moveCenter(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->moveCenter(arg1);
  };
}
// _ZN6QRectF10moveCenterERK7QPointF moveCenter(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 580, column 36>
//   // proto:  QRectF QRectF::marginsRemoved(const QMarginsF & margins);
if (false) {
  auto f = [](const QMarginsF & arg1) {
    ((QRectF*)0)->marginsRemoved(arg1);
  };
}
// _ZNK6QRectF14marginsRemovedERK9QMarginsF marginsRemoved(const class QMarginsF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 574, column 17>
//   // proto:  bool QRectF::contains(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QRectF*)0)->contains(arg1, arg2);
  };
}
// _ZNK6QRectF8containsEdd contains(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 518, column 42>
//   // proto:  void QRectF::setX(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setX(arg1);
  };
}
// _ZN6QRectF4setXEd setX(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 551, column 42>
//   // proto:  void QRectF::setRect(qreal x, qreal y, qreal w, qreal h);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QRectF*)0)->setRect(arg1, arg2, arg3, arg4);
  };
}
// _ZN6QRectF7setRectEdddd setRect(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 525, column 37>
//   // proto:  QPointF QRectF::center();
if (false) {
  auto f = []() {
    ((QRectF*)0)->center();
  };
}
// _ZNK6QRectF6centerEv center()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 514, column 42>
//   // proto:  void QRectF::setLeft(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setLeft(arg1);
  };
}
// _ZN6QRectF7setLeftEd setLeft(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 576, column 19>
//   // proto:  QRectF QRectF::intersected(const QRectF & other);
if (false) {
  auto f = [](const QRectF & arg1) {
    ((QRectF*)0)->intersected(arg1);
  };
}
// _ZNK6QRectF11intersectedERKS_ intersected(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 521, column 37>
//   // proto:  QPointF QRectF::topLeft();
if (false) {
  auto f = []() {
    ((QRectF*)0)->topLeft();
  };
}
// _ZNK6QRectF7topLeftEv topLeft()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 507, column 35>
//   // proto:  qreal QRectF::left();
if (false) {
  auto f = []() {
    ((QRectF*)0)->left();
  };
}
// _ZNK6QRectF4leftEv left()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 519, column 42>
//   // proto:  void QRectF::setY(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setY(arg1);
  };
}
// _ZN6QRectF4setYEd setY(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 536, column 42>
//   // proto:  void QRectF::moveTopLeft(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->moveTopLeft(arg1);
  };
}
// _ZN6QRectF11moveTopLeftERK7QPointF moveTopLeft(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 561, column 35>
//   // proto:  qreal QRectF::width();
if (false) {
  auto f = []() {
    ((QRectF*)0)->width();
  };
}
// _ZNK6QRectF5widthEv width()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 515, column 42>
//   // proto:  void QRectF::setTop(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->setTop(arg1);
  };
}
// _ZN6QRectF6setTopEd setTop(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 504, column 34>
//   // proto:  bool QRectF::isValid();
if (false) {
  auto f = []() {
    ((QRectF*)0)->isValid();
  };
}
// _ZNK6QRectF7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 542, column 42>
//   // proto:  void QRectF::translate(qreal dx, qreal dy);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QRectF*)0)->translate(arg1, arg2);
  };
}
// _ZN6QRectF9translateEdd translate(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 499, column 22>
//   // proto:  void QRectF::QRectF(qreal left, qreal top, qreal width, qreal height);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    new QRectF(arg1, arg2, arg3, arg4);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 592, column 35>
//   // proto:  QRect QRectF::toRect();
if (false) {
  auto f = []() {
    ((QRectF*)0)->toRect();
  };
}
// _ZNK6QRectF6toRectEv toRect()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 532, column 42>
//   // proto:  void QRectF::moveLeft(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->moveLeft(arg1);
  };
}
// _ZN6QRectF8moveLeftEd moveLeft(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 527, column 42>
//   // proto:  void QRectF::setTopLeft(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->setTopLeft(arg1);
  };
}
// _ZN6QRectF10setTopLeftERK7QPointF setTopLeft(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 528, column 42>
//   // proto:  void QRectF::setBottomRight(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->setBottomRight(arg1);
  };
}
// _ZN6QRectF14setBottomRightERK7QPointF setBottomRight(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 579, column 36>
//   // proto:  QRectF QRectF::marginsAdded(const QMarginsF & margins);
if (false) {
  auto f = [](const QMarginsF & arg1) {
    ((QRectF*)0)->marginsAdded(arg1);
  };
}
// _ZNK6QRectF12marginsAddedERK9QMarginsF marginsAdded(const class QMarginsF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 546, column 36>
//   // proto:  QRectF QRectF::translated(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->translated(arg1);
  };
}
// _ZNK6QRectF10translatedERK7QPointF translated(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 555, column 42>
//   // proto:  void QRectF::getCoords(qreal * x1, qreal * y1, qreal * x2, qreal * y2);
if (false) {
  auto f = [](qreal * arg1, qreal * arg2, qreal * arg3, qreal * arg4) {
    ((QRectF*)0)->getCoords(arg1, arg2, arg3, arg4);
  };
}
// _ZNK6QRectF9getCoordsEPdS0_S0_S0_ getCoords(qreal *, qreal *, qreal *, qreal *)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 529, column 42>
//   // proto:  void QRectF::setTopRight(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->setTopRight(arg1);
  };
}
// _ZN6QRectF11setTopRightERK7QPointF setTopRight(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 533, column 42>
//   // proto:  void QRectF::moveTop(qreal pos);
if (false) {
  auto f = [](qreal arg1) {
    ((QRectF*)0)->moveTop(arg1);
  };
}
// _ZN6QRectF7moveTopEd moveTop(qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 554, column 42>
//   // proto:  void QRectF::setCoords(qreal x1, qreal y1, qreal x2, qreal y2);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QRectF*)0)->setCoords(arg1, arg2, arg3, arg4);
  };
}
// _ZN6QRectF9setCoordsEdddd setCoords(qreal, qreal, qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 545, column 36>
//   // proto:  QRectF QRectF::translated(qreal dx, qreal dy);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QRectF*)0)->translated(arg1, arg2);
  };
}
// _ZNK6QRectF10translatedEdd translated(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 503, column 34>
//   // proto:  bool QRectF::isEmpty();
if (false) {
  auto f = []() {
    ((QRectF*)0)->isEmpty();
  };
}
// _ZNK6QRectF7isEmptyEv isEmpty()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 538, column 42>
//   // proto:  void QRectF::moveTopRight(const QPointF & p);
if (false) {
  auto f = [](const QPointF & arg1) {
    ((QRectF*)0)->moveTopRight(arg1);
  };
}
// _ZN6QRectF12moveTopRightERK7QPointF moveTopRight(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 575, column 19>
//   // proto:  QRectF QRectF::united(const QRectF & other);
if (false) {
  auto f = [](const QRectF & arg1) {
    ((QRectF*)0)->united(arg1);
  };
}
// _ZNK6QRectF6unitedERKS_ united(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 509, column 35>
//   // proto:  qreal QRectF::right();
if (false) {
  auto f = []() {
    ((QRectF*)0)->right();
  };
}
// _ZNK6QRectF5rightEv right()
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 500, column 22>
//   // proto:  void QRectF::QRectF(const QRect & rect);
if (false) {
  auto f = [](const QRect & arg1) {
    new QRectF(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qrect.h', line 558, column 36>
//   // proto:  QRectF QRectF::adjusted(qreal x1, qreal y1, qreal x2, qreal y2);
if (false) {
  auto f = [](qreal arg1, qreal arg2, qreal arg3, qreal arg4) {
    ((QRectF*)0)->adjusted(arg1, arg2, arg3, arg4);
  };
}
// _ZNK6QRectF8adjustedEdddd adjusted(qreal, qreal, qreal, qreal)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

