// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qgraphicsgridlayout.h
// dst-file: /src/widgets/qgraphicsgridlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicsgridlayout.h>


#include <qnamespace.h>
#include <qglobal.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qgraphicsgridlayout_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 55, column 17>
//   // proto:  void QGraphicsGridLayout::addItem(QGraphicsLayoutItem * item, int row, int column, Qt::Alignment alignment);
if (true) {
  auto f = [](QGraphicsGridLayout flythis, QGraphicsLayoutItem * arg1, int arg2, int arg3, Qt::Alignment arg4) {
    ((QGraphicsGridLayout*)0)->addItem(arg1, arg2, arg3, arg4);
    flythis.addItem(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE addItem(class QGraphicsLayoutItem *, int, int, Qt::Alignment)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsGridLayout_Class_Size()
{
  return sizeof(QGraphicsGridLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 90, column 19>
//   // proto:  Qt::Alignment QGraphicsGridLayout::rowAlignment(int row);
// _ZNK19QGraphicsGridLayout12rowAlignmentEi rowAlignment(int)
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK19QGraphicsGridLayout12rowAlignmentEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->rowAlignment(arg1);
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 75, column 10>
//   // proto:  void QGraphicsGridLayout::setRowPreferredHeight(int row, qreal height);
// _ZN19QGraphicsGridLayout21setRowPreferredHeightEid setRowPreferredHeight(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout21setRowPreferredHeightEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setRowPreferredHeight(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 98, column 9>
//   // proto:  int QGraphicsGridLayout::columnCount();
// _ZNK19QGraphicsGridLayout11columnCountEv columnCount()
extern "C"
int
C_ZNK19QGraphicsGridLayout11columnCountEv(void *qthis) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->columnCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 104, column 26>
//   // proto:  QGraphicsLayoutItem * QGraphicsGridLayout::itemAt(int index);
// _ZNK19QGraphicsGridLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK19QGraphicsGridLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 103, column 9>
//   // proto:  int QGraphicsGridLayout::count();
// _ZNK19QGraphicsGridLayout5countEv count()
extern "C"
int
C_ZNK19QGraphicsGridLayout5countEv(void *qthis) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 87, column 10>
//   // proto:  void QGraphicsGridLayout::setColumnFixedWidth(int column, qreal width);
// _ZN19QGraphicsGridLayout19setColumnFixedWidthEid setColumnFixedWidth(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout19setColumnFixedWidthEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setColumnFixedWidth(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 85, column 10>
//   // proto:  void QGraphicsGridLayout::setColumnMaximumWidth(int column, qreal width);
// _ZN19QGraphicsGridLayout21setColumnMaximumWidthEid setColumnMaximumWidth(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout21setColumnMaximumWidthEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setColumnMaximumWidth(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 69, column 9>
//   // proto:  int QGraphicsGridLayout::rowStretchFactor(int row);
// _ZNK19QGraphicsGridLayout16rowStretchFactorEi rowStretchFactor(int)
extern "C"
int
C_ZNK19QGraphicsGridLayout16rowStretchFactorEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->rowStretchFactor(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 60, column 11>
//   // proto:  qreal QGraphicsGridLayout::verticalSpacing();
// _ZNK19QGraphicsGridLayout15verticalSpacingEv verticalSpacing()
extern "C"
double
C_ZNK19QGraphicsGridLayout15verticalSpacingEv(void *qthis) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->verticalSpacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 71, column 9>
//   // proto:  int QGraphicsGridLayout::columnStretchFactor(int column);
// _ZNK19QGraphicsGridLayout19columnStretchFactorEi columnStretchFactor(int)
extern "C"
int
C_ZNK19QGraphicsGridLayout19columnStretchFactorEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->columnStretchFactor(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 77, column 10>
//   // proto:  void QGraphicsGridLayout::setRowMaximumHeight(int row, qreal height);
// _ZN19QGraphicsGridLayout19setRowMaximumHeightEid setRowMaximumHeight(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout19setRowMaximumHeightEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setRowMaximumHeight(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 106, column 10>
//   // proto:  void QGraphicsGridLayout::removeItem(QGraphicsLayoutItem * item);
// _ZN19QGraphicsGridLayout10removeItemEP19QGraphicsLayoutItem removeItem(class QGraphicsLayoutItem *)
extern "C"
void
C_ZN19QGraphicsGridLayout10removeItemEP19QGraphicsLayoutItem(void *qthis,
QGraphicsLayoutItem * arg1) {
  ((QGraphicsGridLayout*)qthis)->removeItem(arg1);
}
//   // proto:  void QGraphicsGridLayout::~QGraphicsGridLayout();
extern "C"
void C_ZN19QGraphicsGridLayoutD2Ev(void *qthis) {
  delete (QGraphicsGridLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 74, column 11>
//   // proto:  qreal QGraphicsGridLayout::rowMinimumHeight(int row);
// _ZNK19QGraphicsGridLayout16rowMinimumHeightEi rowMinimumHeight(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout16rowMinimumHeightEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->rowMinimumHeight(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 95, column 19>
//   // proto:  Qt::Alignment QGraphicsGridLayout::alignment(QGraphicsLayoutItem * item);
// _ZNK19QGraphicsGridLayout9alignmentEP19QGraphicsLayoutItem alignment(class QGraphicsLayoutItem *)
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK19QGraphicsGridLayout9alignmentEP19QGraphicsLayoutItem(void *qthis,
QGraphicsLayoutItem * arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->alignment(arg1);
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 78, column 11>
//   // proto:  qreal QGraphicsGridLayout::rowMaximumHeight(int row);
// _ZNK19QGraphicsGridLayout16rowMaximumHeightEi rowMaximumHeight(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout16rowMaximumHeightEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->rowMaximumHeight(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 50, column 5>
//   // proto:  void QGraphicsGridLayout::QGraphicsGridLayout(QGraphicsLayoutItem * parent);
extern "C"
QGraphicsGridLayout*
C_ZN19QGraphicsGridLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * arg1) {
  auto ret = new QGraphicsGridLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 65, column 10>
//   // proto:  void QGraphicsGridLayout::setColumnSpacing(int column, qreal spacing);
// _ZN19QGraphicsGridLayout16setColumnSpacingEid setColumnSpacing(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout16setColumnSpacingEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setColumnSpacing(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 64, column 11>
//   // proto:  qreal QGraphicsGridLayout::rowSpacing(int row);
// _ZNK19QGraphicsGridLayout10rowSpacingEi rowSpacing(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout10rowSpacingEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->rowSpacing(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 86, column 11>
//   // proto:  qreal QGraphicsGridLayout::columnMaximumWidth(int column);
// _ZNK19QGraphicsGridLayout18columnMaximumWidthEi columnMaximumWidth(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout18columnMaximumWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->columnMaximumWidth(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 79, column 10>
//   // proto:  void QGraphicsGridLayout::setRowFixedHeight(int row, qreal height);
// _ZN19QGraphicsGridLayout17setRowFixedHeightEid setRowFixedHeight(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout17setRowFixedHeightEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setRowFixedHeight(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 76, column 11>
//   // proto:  qreal QGraphicsGridLayout::rowPreferredHeight(int row);
// _ZNK19QGraphicsGridLayout18rowPreferredHeightEi rowPreferredHeight(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout18rowPreferredHeightEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->rowPreferredHeight(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 100, column 26>
//   // proto:  QGraphicsLayoutItem * QGraphicsGridLayout::itemAt(int row, int column);
// _ZNK19QGraphicsGridLayout6itemAtEii itemAt(int, int)
extern "C"
void*
C_ZNK19QGraphicsGridLayout6itemAtEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->itemAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 55, column 17>
//   // proto:  void QGraphicsGridLayout::addItem(QGraphicsLayoutItem * item, int row, int column, Qt::Alignment alignment);
// _ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE addItem(class QGraphicsLayoutItem *, int, int, Qt::Alignment)
extern "C"
void
C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemii6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QGraphicsLayoutItem * arg1,
int arg2,
int arg3,
Qt::Alignment* arg4) {
  ((QGraphicsGridLayout*)qthis)->addItem(arg1,
arg2,
arg3,
*((Qt::Alignment*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 59, column 10>
//   // proto:  void QGraphicsGridLayout::setVerticalSpacing(qreal spacing);
// _ZN19QGraphicsGridLayout18setVerticalSpacingEd setVerticalSpacing(qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout18setVerticalSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsGridLayout*)qthis)->setVerticalSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 111, column 10>
//   // proto:  void QGraphicsGridLayout::setGeometry(const QRectF & rect);
// _ZN19QGraphicsGridLayout11setGeometryERK6QRectF setGeometry(const class QRectF &)
extern "C"
void
C_ZN19QGraphicsGridLayout11setGeometryERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsGridLayout*)qthis)->setGeometry(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 94, column 10>
//   // proto:  void QGraphicsGridLayout::setAlignment(QGraphicsLayoutItem * item, Qt::Alignment alignment);
// _ZN19QGraphicsGridLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE setAlignment(class QGraphicsLayoutItem *, Qt::Alignment)
extern "C"
void
C_ZN19QGraphicsGridLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QGraphicsLayoutItem * arg1,
Qt::Alignment* arg2) {
  ((QGraphicsGridLayout*)qthis)->setAlignment(arg1,
*((Qt::Alignment*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 97, column 9>
//   // proto:  int QGraphicsGridLayout::rowCount();
// _ZNK19QGraphicsGridLayout8rowCountEv rowCount()
extern "C"
int
C_ZNK19QGraphicsGridLayout8rowCountEv(void *qthis) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->rowCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 61, column 10>
//   // proto:  void QGraphicsGridLayout::setSpacing(qreal spacing);
// _ZN19QGraphicsGridLayout10setSpacingEd setSpacing(qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout10setSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsGridLayout*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 53, column 10>
//   // proto:  void QGraphicsGridLayout::addItem(QGraphicsLayoutItem * item, int row, int column, int rowSpan, int columnSpan, Qt::Alignment alignment);
// _ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE addItem(class QGraphicsLayoutItem *, int, int, int, int, Qt::Alignment)
extern "C"
void
C_ZN19QGraphicsGridLayout7addItemEP19QGraphicsLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QGraphicsLayoutItem * arg1,
int arg2,
int arg3,
int arg4,
int arg5,
Qt::Alignment* arg6) {
  ((QGraphicsGridLayout*)qthis)->addItem(arg1,
arg2,
arg3,
arg4,
arg5,
*((Qt::Alignment*)arg6));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 68, column 10>
//   // proto:  void QGraphicsGridLayout::setRowStretchFactor(int row, int stretch);
// _ZN19QGraphicsGridLayout19setRowStretchFactorEii setRowStretchFactor(int, int)
extern "C"
void
C_ZN19QGraphicsGridLayout19setRowStretchFactorEii(void *qthis,
int arg1,
int arg2) {
  ((QGraphicsGridLayout*)qthis)->setRowStretchFactor(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 92, column 19>
//   // proto:  Qt::Alignment QGraphicsGridLayout::columnAlignment(int column);
// _ZNK19QGraphicsGridLayout15columnAlignmentEi columnAlignment(int)
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK19QGraphicsGridLayout15columnAlignmentEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->columnAlignment(arg1);
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 82, column 11>
//   // proto:  qreal QGraphicsGridLayout::columnMinimumWidth(int column);
// _ZNK19QGraphicsGridLayout18columnMinimumWidthEi columnMinimumWidth(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout18columnMinimumWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->columnMinimumWidth(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 81, column 10>
//   // proto:  void QGraphicsGridLayout::setColumnMinimumWidth(int column, qreal width);
// _ZN19QGraphicsGridLayout21setColumnMinimumWidthEid setColumnMinimumWidth(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout21setColumnMinimumWidthEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setColumnMinimumWidth(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 73, column 10>
//   // proto:  void QGraphicsGridLayout::setRowMinimumHeight(int row, qreal height);
// _ZN19QGraphicsGridLayout19setRowMinimumHeightEid setRowMinimumHeight(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout19setRowMinimumHeightEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setRowMinimumHeight(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 57, column 10>
//   // proto:  void QGraphicsGridLayout::setHorizontalSpacing(qreal spacing);
// _ZN19QGraphicsGridLayout20setHorizontalSpacingEd setHorizontalSpacing(qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout20setHorizontalSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsGridLayout*)qthis)->setHorizontalSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 112, column 12>
//   // proto:  QSizeF QGraphicsGridLayout::sizeHint(Qt::SizeHint which, const QSizeF & constraint);
// _ZNK19QGraphicsGridLayout8sizeHintEN2Qt8SizeHintERK6QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
QSizeF*
C_ZNK19QGraphicsGridLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *qthis,
Qt::SizeHint* arg1,
const QSizeF* arg2) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->sizeHint(*((Qt::SizeHint*)arg1),
*((const QSizeF*)arg2));
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 91, column 10>
//   // proto:  void QGraphicsGridLayout::setColumnAlignment(int column, Qt::Alignment alignment);
// _ZN19QGraphicsGridLayout18setColumnAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE setColumnAlignment(int, Qt::Alignment)
extern "C"
void
C_ZN19QGraphicsGridLayout18setColumnAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
int arg1,
Qt::Alignment* arg2) {
  ((QGraphicsGridLayout*)qthis)->setColumnAlignment(arg1,
*((Qt::Alignment*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 58, column 11>
//   // proto:  qreal QGraphicsGridLayout::horizontalSpacing();
// _ZNK19QGraphicsGridLayout17horizontalSpacingEv horizontalSpacing()
extern "C"
double
C_ZNK19QGraphicsGridLayout17horizontalSpacingEv(void *qthis) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->horizontalSpacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 70, column 10>
//   // proto:  void QGraphicsGridLayout::setColumnStretchFactor(int column, int stretch);
// _ZN19QGraphicsGridLayout22setColumnStretchFactorEii setColumnStretchFactor(int, int)
extern "C"
void
C_ZN19QGraphicsGridLayout22setColumnStretchFactorEii(void *qthis,
int arg1,
int arg2) {
  ((QGraphicsGridLayout*)qthis)->setColumnStretchFactor(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 108, column 10>
//   // proto:  void QGraphicsGridLayout::invalidate();
// _ZN19QGraphicsGridLayout10invalidateEv invalidate()
extern "C"
void
C_ZN19QGraphicsGridLayout10invalidateEv(void *qthis) {
  ((QGraphicsGridLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 84, column 11>
//   // proto:  qreal QGraphicsGridLayout::columnPreferredWidth(int column);
// _ZNK19QGraphicsGridLayout20columnPreferredWidthEi columnPreferredWidth(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout20columnPreferredWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->columnPreferredWidth(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 83, column 10>
//   // proto:  void QGraphicsGridLayout::setColumnPreferredWidth(int column, qreal width);
// _ZN19QGraphicsGridLayout23setColumnPreferredWidthEid setColumnPreferredWidth(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout23setColumnPreferredWidthEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setColumnPreferredWidth(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 66, column 11>
//   // proto:  qreal QGraphicsGridLayout::columnSpacing(int column);
// _ZNK19QGraphicsGridLayout13columnSpacingEi columnSpacing(int)
extern "C"
double
C_ZNK19QGraphicsGridLayout13columnSpacingEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsGridLayout*)qthis)->columnSpacing(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 89, column 10>
//   // proto:  void QGraphicsGridLayout::setRowAlignment(int row, Qt::Alignment alignment);
// _ZN19QGraphicsGridLayout15setRowAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE setRowAlignment(int, Qt::Alignment)
extern "C"
void
C_ZN19QGraphicsGridLayout15setRowAlignmentEi6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
int arg1,
Qt::Alignment* arg2) {
  ((QGraphicsGridLayout*)qthis)->setRowAlignment(arg1,
*((Qt::Alignment*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 63, column 10>
//   // proto:  void QGraphicsGridLayout::setRowSpacing(int row, qreal spacing);
// _ZN19QGraphicsGridLayout13setRowSpacingEid setRowSpacing(int, qreal)
extern "C"
void
C_ZN19QGraphicsGridLayout13setRowSpacingEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsGridLayout*)qthis)->setRowSpacing(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicsgridlayout.h', line 105, column 10>
//   // proto:  void QGraphicsGridLayout::removeAt(int index);
// _ZN19QGraphicsGridLayout8removeAtEi removeAt(int)
extern "C"
void
C_ZN19QGraphicsGridLayout8removeAtEi(void *qthis,
int arg1) {
  ((QGraphicsGridLayout*)qthis)->removeAt(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

