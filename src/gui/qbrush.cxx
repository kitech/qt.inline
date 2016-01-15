#include <qcolor.h>
#include <qmatrix.h>
#include <qnamespace.h>
#include <qtransform.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qbrush.h
// dst-file: /src/gui/qbrush.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qbrush.h>

extern "C" {

int QRadialGradient_Class_Size()
{
  return sizeof(QRadialGradient);
}

int QConicalGradient_Class_Size()
{
  return sizeof(QConicalGradient);
}

int QBrush_Class_Size()
{
  return sizeof(QBrush);
}

int QGradient_Class_Size()
{
  return sizeof(QGradient);
}

int QBrushData_Class_Size()
{
  return sizeof(QBrushData);
}

int QLinearGradient_Class_Size()
{
  return sizeof(QLinearGradient);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qbrush_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 283, column 17>
//   // proto:  void QRadialGradient::setFocalPoint(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QRadialGradient*)0)->setFocalPoint(arg1, arg2);
  };
}
// _ZN15QRadialGradient13setFocalPointEdd setFocalPoint(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 279, column 17>
//   // proto:  void QRadialGradient::setCenter(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QRadialGradient*)0)->setCenter(arg1, arg2);
  };
}
// _ZN15QRadialGradient9setCenterEdd setCenter(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 305, column 17>
//   // proto:  void QConicalGradient::setCenter(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QConicalGradient*)0)->setCenter(arg1, arg2);
  };
}
// _ZN16QConicalGradient9setCenterEdd setCenter(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 124, column 21>
//   // proto:  DataPtr & QBrush::data_ptr();
if (false) {
  auto f = []() {
    ((QBrush*)0)->data_ptr();
  };
}
// _ZN6QBrush8data_ptrEv data_ptr()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 90, column 23>
//   // proto:  QTransform QBrush::transform();
if (false) {
  auto f = []() {
    ((QBrush*)0)->transform();
  };
}
// _ZNK6QBrush9transformEv transform()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 84, column 27>
//   // proto:  Qt::BrushStyle QBrush::style();
if (false) {
  auto f = []() {
    ((QBrush*)0)->style();
  };
}
// _ZNK6QBrush5styleEv style()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 87, column 27>
//   // proto:  const QMatrix & QBrush::matrix();
if (false) {
  auto f = []() {
    ((QBrush*)0)->matrix();
  };
}
// _ZNK6QBrush6matrixEv matrix()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 122, column 17>
//   // proto:  bool QBrush::isDetached();
if (false) {
  auto f = []() {
    ((QBrush*)0)->isDetached();
  };
}
// _ZNK6QBrush10isDetachedEv isDetached()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 79, column 17>
//   // proto:  void QBrush::swap(QBrush & other);
if (false) {
  auto f = [](QBrush & arg1) {
    ((QBrush*)0)->swap(arg1);
  };
}
// _ZN6QBrush4swapERS_ swap(class QBrush &)
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 101, column 17>
//   // proto:  void QBrush::setColor(Qt::GlobalColor color);
if (false) {
  auto f = [](Qt::GlobalColor arg1) {
    ((QBrush*)0)->setColor(arg1);
  };
}
// _ZN6QBrush8setColorEN2Qt11GlobalColorE setColor(Qt::GlobalColor)
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 99, column 26>
//   // proto:  const QColor & QBrush::color();
if (false) {
  auto f = []() {
    ((QBrush*)0)->color();
  };
}
// _ZNK6QBrush5colorEv color()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 201, column 10>
//   // proto:  QGradient::Type QGradient::type();
if (false) {
  auto f = []() {
    ((QGradient*)0)->type();
  };
}
// _ZNK9QGradient4typeEv type()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 204, column 12>
//   // proto:  QGradient::Spread QGradient::spread();
if (false) {
  auto f = []() {
    ((QGradient*)0)->spread();
  };
}
// _ZNK9QGradient6spreadEv spread()
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 203, column 17>
//   // proto:  void QGradient::setSpread(QGradient::Spread spread);
if (false) {
  auto f = [](QGradient::Spread arg1) {
    ((QGradient*)0)->setSpread(arg1);
  };
}
// _ZN9QGradient9setSpreadENS_6SpreadE setSpread(enum QGradient::Spread)
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 260, column 17>
//   // proto:  void QLinearGradient::setFinalStop(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QLinearGradient*)0)->setFinalStop(arg1, arg2);
  };
}
// _ZN15QLinearGradient12setFinalStopEdd setFinalStop(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtGui/qbrush.h', line 256, column 17>
//   // proto:  void QLinearGradient::setStart(qreal x, qreal y);
if (false) {
  auto f = [](qreal arg1, qreal arg2) {
    ((QLinearGradient*)0)->setStart(arg1, arg2);
  };
}
// _ZN15QLinearGradient8setStartEdd setStart(qreal, qreal)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

