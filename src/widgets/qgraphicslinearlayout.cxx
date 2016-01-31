// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qgraphicslinearlayout.h
// dst-file: /src/widgets/qgraphicslinearlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicslinearlayout.h>


#include <qglobal.h>
#include <qnamespace.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qgraphicslinearlayout_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 58, column 17>
//   // proto:  void QGraphicsLinearLayout::addStretch(int stretch);
if (true) {
  auto f = [](QGraphicsLinearLayout flythis, int arg1) {
    ((QGraphicsLinearLayout*)0)->addStretch(arg1);
    flythis.addStretch(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QGraphicsLinearLayout10addStretchEi addStretch(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 57, column 17>
//   // proto:  void QGraphicsLinearLayout::addItem(QGraphicsLayoutItem * item);
if (true) {
  auto f = [](QGraphicsLinearLayout flythis, QGraphicsLayoutItem * arg1) {
    ((QGraphicsLinearLayout*)0)->addItem(arg1);
    flythis.addItem(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem addItem(class QGraphicsLayoutItem *)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsLinearLayout_Class_Size()
{
  return sizeof(QGraphicsLinearLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 67, column 11>
//   // proto:  qreal QGraphicsLinearLayout::spacing();
// _ZNK21QGraphicsLinearLayout7spacingEv spacing()
extern "C"
double
C_ZNK21QGraphicsLinearLayout7spacingEv(void *qthis) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->spacing();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 50, column 5>
//   // proto:  void QGraphicsLinearLayout::QGraphicsLinearLayout(QGraphicsLayoutItem * parent);
extern "C"
QGraphicsLinearLayout*
C_ZN21QGraphicsLinearLayoutC2EP19QGraphicsLayoutItem(QGraphicsLayoutItem * arg1) {
  auto ret = new QGraphicsLinearLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 80, column 26>
//   // proto:  QGraphicsLayoutItem * QGraphicsLinearLayout::itemAt(int index);
// _ZNK21QGraphicsLinearLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK21QGraphicsLinearLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 75, column 19>
//   // proto:  Qt::Alignment QGraphicsLinearLayout::alignment(QGraphicsLayoutItem * item);
// _ZNK21QGraphicsLinearLayout9alignmentEP19QGraphicsLayoutItem alignment(class QGraphicsLayoutItem *)
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK21QGraphicsLinearLayout9alignmentEP19QGraphicsLayoutItem(void *qthis,
QGraphicsLayoutItem * arg1) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->alignment(arg1);
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 82, column 10>
//   // proto:  void QGraphicsLinearLayout::invalidate();
// _ZN21QGraphicsLinearLayout10invalidateEv invalidate()
extern "C"
void
C_ZN21QGraphicsLinearLayout10invalidateEv(void *qthis) {
  ((QGraphicsLinearLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 77, column 10>
//   // proto:  void QGraphicsLinearLayout::setGeometry(const QRectF & rect);
// _ZN21QGraphicsLinearLayout11setGeometryERK6QRectF setGeometry(const class QRectF &)
extern "C"
void
C_ZN21QGraphicsLinearLayout11setGeometryERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QGraphicsLinearLayout*)qthis)->setGeometry(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 58, column 17>
//   // proto:  void QGraphicsLinearLayout::addStretch(int stretch);
// _ZN21QGraphicsLinearLayout10addStretchEi addStretch(int)
extern "C"
void
C_ZN21QGraphicsLinearLayout10addStretchEi(void *qthis,
int arg1) {
  ((QGraphicsLinearLayout*)qthis)->addStretch(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 79, column 9>
//   // proto:  int QGraphicsLinearLayout::count();
// _ZNK21QGraphicsLinearLayout5countEv count()
extern "C"
int
C_ZNK21QGraphicsLinearLayout5countEv(void *qthis) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 66, column 10>
//   // proto:  void QGraphicsLinearLayout::setSpacing(qreal spacing);
// _ZN21QGraphicsLinearLayout10setSpacingEd setSpacing(qreal)
extern "C"
void
C_ZN21QGraphicsLinearLayout10setSpacingEd(void *qthis,
qreal arg1) {
  ((QGraphicsLinearLayout*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 55, column 21>
//   // proto:  Qt::Orientation QGraphicsLinearLayout::orientation();
// _ZNK21QGraphicsLinearLayout11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK21QGraphicsLinearLayout11orientationEv(void *qthis) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 60, column 10>
//   // proto:  void QGraphicsLinearLayout::insertItem(int index, QGraphicsLayoutItem * item);
// _ZN21QGraphicsLinearLayout10insertItemEiP19QGraphicsLayoutItem insertItem(int, class QGraphicsLayoutItem *)
extern "C"
void
C_ZN21QGraphicsLinearLayout10insertItemEiP19QGraphicsLayoutItem(void *qthis,
int arg1,
QGraphicsLayoutItem * arg2) {
  ((QGraphicsLinearLayout*)qthis)->insertItem(arg1,
arg2);
}
//   // proto:  void QGraphicsLinearLayout::~QGraphicsLinearLayout();
extern "C"
void C_ZN21QGraphicsLinearLayoutD2Ev(void *qthis) {
  delete (QGraphicsLinearLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 89, column 10>
//   // proto:  void QGraphicsLinearLayout::dump(int indent);
// _ZNK21QGraphicsLinearLayout4dumpEi dump(int)
extern "C"
void
C_ZNK21QGraphicsLinearLayout4dumpEi(void *qthis,
int arg1) {
  ((QGraphicsLinearLayout*)qthis)->dump(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 71, column 10>
//   // proto:  void QGraphicsLinearLayout::setStretchFactor(QGraphicsLayoutItem * item, int stretch);
// _ZN21QGraphicsLinearLayout16setStretchFactorEP19QGraphicsLayoutItemi setStretchFactor(class QGraphicsLayoutItem *, int)
extern "C"
void
C_ZN21QGraphicsLinearLayout16setStretchFactorEP19QGraphicsLayoutItemi(void *qthis,
QGraphicsLayoutItem * arg1,
int arg2) {
  ((QGraphicsLinearLayout*)qthis)->setStretchFactor(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 57, column 17>
//   // proto:  void QGraphicsLinearLayout::addItem(QGraphicsLayoutItem * item);
// _ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem addItem(class QGraphicsLayoutItem *)
extern "C"
void
C_ZN21QGraphicsLinearLayout7addItemEP19QGraphicsLayoutItem(void *qthis,
QGraphicsLayoutItem * arg1) {
  ((QGraphicsLinearLayout*)qthis)->addItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 51, column 5>
//   // proto:  void QGraphicsLinearLayout::QGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem * parent);
extern "C"
QGraphicsLinearLayout*
C_ZN21QGraphicsLinearLayoutC2EN2Qt11OrientationEP19QGraphicsLayoutItem(Qt::Orientation* arg1,
QGraphicsLayoutItem * arg2) {
  auto ret = new QGraphicsLinearLayout(*((Qt::Orientation*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 54, column 10>
//   // proto:  void QGraphicsLinearLayout::setOrientation(Qt::Orientation orientation);
// _ZN21QGraphicsLinearLayout14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN21QGraphicsLinearLayout14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QGraphicsLinearLayout*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 69, column 11>
//   // proto:  qreal QGraphicsLinearLayout::itemSpacing(int index);
// _ZNK21QGraphicsLinearLayout11itemSpacingEi itemSpacing(int)
extern "C"
double
C_ZNK21QGraphicsLinearLayout11itemSpacingEi(void *qthis,
int arg1) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->itemSpacing(arg1);
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 83, column 12>
//   // proto:  QSizeF QGraphicsLinearLayout::sizeHint(Qt::SizeHint which, const QSizeF & constraint);
// _ZNK21QGraphicsLinearLayout8sizeHintEN2Qt8SizeHintERK6QSizeF sizeHint(Qt::SizeHint, const class QSizeF &)
extern "C"
QSizeF*
C_ZNK21QGraphicsLinearLayout8sizeHintEN2Qt8SizeHintERK6QSizeF(void *qthis,
Qt::SizeHint* arg1,
const QSizeF* arg2) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->sizeHint(*((Qt::SizeHint*)arg1),
*((const QSizeF*)arg2));
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 64, column 10>
//   // proto:  void QGraphicsLinearLayout::removeAt(int index);
// _ZN21QGraphicsLinearLayout8removeAtEi removeAt(int)
extern "C"
void
C_ZN21QGraphicsLinearLayout8removeAtEi(void *qthis,
int arg1) {
  ((QGraphicsLinearLayout*)qthis)->removeAt(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 74, column 10>
//   // proto:  void QGraphicsLinearLayout::setAlignment(QGraphicsLayoutItem * item, Qt::Alignment alignment);
// _ZN21QGraphicsLinearLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE setAlignment(class QGraphicsLayoutItem *, Qt::Alignment)
extern "C"
void
C_ZN21QGraphicsLinearLayout12setAlignmentEP19QGraphicsLayoutItem6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QGraphicsLayoutItem * arg1,
Qt::Alignment* arg2) {
  ((QGraphicsLinearLayout*)qthis)->setAlignment(arg1,
*((Qt::Alignment*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 61, column 10>
//   // proto:  void QGraphicsLinearLayout::insertStretch(int index, int stretch);
// _ZN21QGraphicsLinearLayout13insertStretchEii insertStretch(int, int)
extern "C"
void
C_ZN21QGraphicsLinearLayout13insertStretchEii(void *qthis,
int arg1,
int arg2) {
  ((QGraphicsLinearLayout*)qthis)->insertStretch(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 68, column 10>
//   // proto:  void QGraphicsLinearLayout::setItemSpacing(int index, qreal spacing);
// _ZN21QGraphicsLinearLayout14setItemSpacingEid setItemSpacing(int, qreal)
extern "C"
void
C_ZN21QGraphicsLinearLayout14setItemSpacingEid(void *qthis,
int arg1,
qreal arg2) {
  ((QGraphicsLinearLayout*)qthis)->setItemSpacing(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 63, column 10>
//   // proto:  void QGraphicsLinearLayout::removeItem(QGraphicsLayoutItem * item);
// _ZN21QGraphicsLinearLayout10removeItemEP19QGraphicsLayoutItem removeItem(class QGraphicsLayoutItem *)
extern "C"
void
C_ZN21QGraphicsLinearLayout10removeItemEP19QGraphicsLayoutItem(void *qthis,
QGraphicsLayoutItem * arg1) {
  ((QGraphicsLinearLayout*)qthis)->removeItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicslinearlayout.h', line 72, column 9>
//   // proto:  int QGraphicsLinearLayout::stretchFactor(QGraphicsLayoutItem * item);
// _ZNK21QGraphicsLinearLayout13stretchFactorEP19QGraphicsLayoutItem stretchFactor(class QGraphicsLayoutItem *)
extern "C"
int
C_ZNK21QGraphicsLinearLayout13stretchFactorEP19QGraphicsLayoutItem(void *qthis,
QGraphicsLayoutItem * arg1) {
  auto ret =
  ((QGraphicsLinearLayout*)qthis)->stretchFactor(arg1);
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// <= body block end

