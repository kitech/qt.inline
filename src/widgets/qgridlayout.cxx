// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qgridlayout.h
// dst-file: /src/widgets/qgridlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgridlayout.h>


#include <qsize.h>
#include <qnamespace.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qgridlayout_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 95, column 17>
//   // proto:  void QGridLayout::addWidget(QWidget * w);
if (true) {
  auto f = [](QGridLayout flythis, QWidget * arg1) {
    ((QGridLayout*)0)->addWidget(arg1);
    flythis.addWidget(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QGridLayout9addWidgetEP7QWidget addWidget(class QWidget *)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGridLayout_Class_Size()
{
  return sizeof(QGridLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 78, column 10>
//   // proto:  void QGridLayout::setRowMinimumHeight(int row, int minSize);
// _ZN11QGridLayout19setRowMinimumHeightEii setRowMinimumHeight(int, int)
extern "C"
void
C_ZN11QGridLayout19setRowMinimumHeightEii(void *qthis,
int arg1,
int arg2) {
  ((QGridLayout*)qthis)->setRowMinimumHeight(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 106, column 18>
//   // proto:  QLayoutItem * QGridLayout::takeAt(int index);
// _ZN11QGridLayout6takeAtEi takeAt(int)
extern "C"
void*
C_ZN11QGridLayout6takeAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->takeAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 113, column 10>
//   // proto:  void QGridLayout::getItemPosition(int idx, int * row, int * column, int * rowSpan, int * columnSpan);
// _ZNK11QGridLayout15getItemPositionEiPiS0_S0_S0_ getItemPosition(int, int *, int *, int *, int *)
extern "C"
void
C_ZNK11QGridLayout15getItemPositionEiPiS0_S0_S0_(void *qthis,
int arg1,
int * arg2,
int * arg3,
int * arg4,
int * arg5) {
  ((QGridLayout*)qthis)->getItemPosition(arg1,
arg2,
arg3,
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 101, column 10>
//   // proto:  void QGridLayout::setOriginCorner(Qt::Corner );
// _ZN11QGridLayout15setOriginCornerEN2Qt6CornerE setOriginCorner(Qt::Corner)
extern "C"
void
C_ZN11QGridLayout15setOriginCornerEN2Qt6CornerE(void *qthis,
Qt::Corner* arg1) {
  ((QGridLayout*)qthis)->setOriginCorner(*((Qt::Corner*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 90, column 9>
//   // proto:  int QGridLayout::minimumHeightForWidth(int );
// _ZNK11QGridLayout21minimumHeightForWidthEi minimumHeightForWidth(int)
extern "C"
int
C_ZNK11QGridLayout21minimumHeightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->minimumHeightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 80, column 9>
//   // proto:  int QGridLayout::rowMinimumHeight(int row);
// _ZNK11QGridLayout16rowMinimumHeightEi rowMinimumHeight(int)
extern "C"
int
C_ZNK11QGridLayout16rowMinimumHeightEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->rowMinimumHeight(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 93, column 10>
//   // proto:  void QGridLayout::invalidate();
// _ZN11QGridLayout10invalidateEv invalidate()
extern "C"
void
C_ZN11QGridLayout10invalidateEv(void *qthis) {
  ((QGridLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 107, column 9>
//   // proto:  int QGridLayout::count();
// _ZNK11QGridLayout5countEv count()
extern "C"
int
C_ZNK11QGridLayout5countEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 74, column 10>
//   // proto:  void QGridLayout::setColumnStretch(int column, int stretch);
// _ZN11QGridLayout16setColumnStretchEii setColumnStretch(int, int)
extern "C"
void
C_ZN11QGridLayout16setColumnStretchEii(void *qthis,
int arg1,
int arg2) {
  ((QGridLayout*)qthis)->setColumnStretch(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 71, column 9>
//   // proto:  int QGridLayout::spacing();
// _ZNK11QGridLayout7spacingEv spacing()
extern "C"
int
C_ZNK11QGridLayout7spacingEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->spacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 99, column 10>
//   // proto:  void QGridLayout::addLayout(QLayout * , int row, int column, int rowSpan, int columnSpan, Qt::Alignment );
// _ZN11QGridLayout9addLayoutEP7QLayoutiiii6QFlagsIN2Qt13AlignmentFlagEE addLayout(class QLayout *, int, int, int, int, Qt::Alignment)
extern "C"
void
C_ZN11QGridLayout9addLayoutEP7QLayoutiiii6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QLayout * arg1,
int arg2,
int arg3,
int arg4,
int arg5,
Qt::Alignment* arg6) {
  ((QGridLayout*)qthis)->addLayout(arg1,
arg2,
arg3,
arg4,
arg5,
*((Qt::Alignment*)arg6));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 75, column 9>
//   // proto:  int QGridLayout::rowStretch(int row);
// _ZNK11QGridLayout10rowStretchEi rowStretch(int)
extern "C"
int
C_ZNK11QGridLayout10rowStretchEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->rowStretch(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 62, column 11>
//   // proto:  QSize QGridLayout::sizeHint();
// _ZNK11QGridLayout8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QGridLayout8sizeHintEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 84, column 9>
//   // proto:  int QGridLayout::rowCount();
// _ZNK11QGridLayout8rowCountEv rowCount()
extern "C"
int
C_ZNK11QGridLayout8rowCountEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->rowCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 102, column 16>
//   // proto:  Qt::Corner QGridLayout::originCorner();
// _ZNK11QGridLayout12originCornerEv originCorner()
extern "C"
Qt::Corner
C_ZNK11QGridLayout12originCornerEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->originCorner();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 108, column 10>
//   // proto:  void QGridLayout::setGeometry(const QRect & );
// _ZN11QGridLayout11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN11QGridLayout11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QGridLayout*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 68, column 10>
//   // proto:  void QGridLayout::setVerticalSpacing(int spacing);
// _ZN11QGridLayout18setVerticalSpacingEi setVerticalSpacing(int)
extern "C"
void
C_ZN11QGridLayout18setVerticalSpacingEi(void *qthis,
int arg1) {
  ((QGridLayout*)qthis)->setVerticalSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 66, column 10>
//   // proto:  void QGridLayout::setHorizontalSpacing(int spacing);
// _ZN11QGridLayout20setHorizontalSpacingEi setHorizontalSpacing(int)
extern "C"
void
C_ZN11QGridLayout20setHorizontalSpacingEi(void *qthis,
int arg1) {
  ((QGridLayout*)qthis)->setHorizontalSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 76, column 9>
//   // proto:  int QGridLayout::columnStretch(int column);
// _ZNK11QGridLayout13columnStretchEi columnStretch(int)
extern "C"
int
C_ZNK11QGridLayout13columnStretchEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->columnStretch(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 112, column 10>
//   // proto:  void QGridLayout::setDefaultPositioning(int n, Qt::Orientation orient);
// _ZN11QGridLayout21setDefaultPositioningEiN2Qt11OrientationE setDefaultPositioning(int, Qt::Orientation)
extern "C"
void
C_ZN11QGridLayout21setDefaultPositioningEiN2Qt11OrientationE(void *qthis,
int arg1,
Qt::Orientation* arg2) {
  ((QGridLayout*)qthis)->setDefaultPositioning(arg1,
*((Qt::Orientation*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 83, column 9>
//   // proto:  int QGridLayout::columnCount();
// _ZNK11QGridLayout11columnCountEv columnCount()
extern "C"
int
C_ZNK11QGridLayout11columnCountEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->columnCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 81, column 9>
//   // proto:  int QGridLayout::columnMinimumWidth(int column);
// _ZNK11QGridLayout18columnMinimumWidthEi columnMinimumWidth(int)
extern "C"
int
C_ZNK11QGridLayout18columnMinimumWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->columnMinimumWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 63, column 11>
//   // proto:  QSize QGridLayout::minimumSize();
// _ZNK11QGridLayout11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK11QGridLayout11minimumSizeEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 98, column 10>
//   // proto:  void QGridLayout::addLayout(QLayout * , int row, int column, Qt::Alignment );
// _ZN11QGridLayout9addLayoutEP7QLayoutii6QFlagsIN2Qt13AlignmentFlagEE addLayout(class QLayout *, int, int, Qt::Alignment)
extern "C"
void
C_ZN11QGridLayout9addLayoutEP7QLayoutii6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QLayout * arg1,
int arg2,
int arg3,
Qt::Alignment* arg4) {
  ((QGridLayout*)qthis)->addLayout(arg1,
arg2,
arg3,
*((Qt::Alignment*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 88, column 10>
//   // proto:  bool QGridLayout::hasHeightForWidth();
// _ZNK11QGridLayout17hasHeightForWidthEv hasHeightForWidth()
extern "C"
bool
C_ZNK11QGridLayout17hasHeightForWidthEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->hasHeightForWidth();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 86, column 11>
//   // proto:  QRect QGridLayout::cellRect(int row, int column);
// _ZNK11QGridLayout8cellRectEii cellRect(int, int)
extern "C"
QRect*
C_ZNK11QGridLayout8cellRectEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QGridLayout*)qthis)->cellRect(arg1,
arg2);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 73, column 10>
//   // proto:  void QGridLayout::setRowStretch(int row, int stretch);
// _ZN11QGridLayout13setRowStretchEii setRowStretch(int, int)
extern "C"
void
C_ZN11QGridLayout13setRowStretchEii(void *qthis,
int arg1,
int arg2) {
  ((QGridLayout*)qthis)->setRowStretch(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 96, column 10>
//   // proto:  void QGridLayout::addWidget(QWidget * , int row, int column, Qt::Alignment );
// _ZN11QGridLayout9addWidgetEP7QWidgetii6QFlagsIN2Qt13AlignmentFlagEE addWidget(class QWidget *, int, int, Qt::Alignment)
extern "C"
void
C_ZN11QGridLayout9addWidgetEP7QWidgetii6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QWidget * arg1,
int arg2,
int arg3,
Qt::Alignment* arg4) {
  ((QGridLayout*)qthis)->addWidget(arg1,
arg2,
arg3,
*((Qt::Alignment*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 97, column 10>
//   // proto:  void QGridLayout::addWidget(QWidget * , int row, int column, int rowSpan, int columnSpan, Qt::Alignment );
// _ZN11QGridLayout9addWidgetEP7QWidgetiiii6QFlagsIN2Qt13AlignmentFlagEE addWidget(class QWidget *, int, int, int, int, Qt::Alignment)
extern "C"
void
C_ZN11QGridLayout9addWidgetEP7QWidgetiiii6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QWidget * arg1,
int arg2,
int arg3,
int arg4,
int arg5,
Qt::Alignment* arg6) {
  ((QGridLayout*)qthis)->addWidget(arg1,
arg2,
arg3,
arg4,
arg5,
*((Qt::Alignment*)arg6));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 92, column 22>
//   // proto:  Qt::Orientations QGridLayout::expandingDirections();
// _ZNK11QGridLayout19expandingDirectionsEv expandingDirections()
extern "C"
QFlags<Qt::Orientation>*
C_ZNK11QGridLayout19expandingDirectionsEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->expandingDirections();
  return new QFlags<Qt::Orientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 105, column 18>
//   // proto:  QLayoutItem * QGridLayout::itemAtPosition(int row, int column);
// _ZNK11QGridLayout14itemAtPositionEii itemAtPosition(int, int)
extern "C"
void*
C_ZNK11QGridLayout14itemAtPositionEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QGridLayout*)qthis)->itemAtPosition(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 51, column 5>
//   // proto:  const QMetaObject * QGridLayout::metaObject();
// _ZNK11QGridLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QGridLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 69, column 9>
//   // proto:  int QGridLayout::verticalSpacing();
// _ZNK11QGridLayout15verticalSpacingEv verticalSpacing()
extern "C"
int
C_ZNK11QGridLayout15verticalSpacingEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->verticalSpacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 57, column 14>
//   // proto:  void QGridLayout::QGridLayout(QWidget * parent);
extern "C"
QGridLayout*
C_ZN11QGridLayoutC2EP7QWidget(QWidget * arg1) {
  auto ret = new QGridLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 67, column 9>
//   // proto:  int QGridLayout::horizontalSpacing();
// _ZNK11QGridLayout17horizontalSpacingEv horizontalSpacing()
extern "C"
int
C_ZNK11QGridLayout17horizontalSpacingEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->horizontalSpacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 79, column 10>
//   // proto:  void QGridLayout::setColumnMinimumWidth(int column, int minSize);
// _ZN11QGridLayout21setColumnMinimumWidthEii setColumnMinimumWidth(int, int)
extern "C"
void
C_ZN11QGridLayout21setColumnMinimumWidthEii(void *qthis,
int arg1,
int arg2) {
  ((QGridLayout*)qthis)->setColumnMinimumWidth(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 58, column 5>
//   // proto:  void QGridLayout::QGridLayout();
extern "C"
QGridLayout*
C_ZN11QGridLayoutC2Ev() {
  auto ret = new QGridLayout();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 89, column 9>
//   // proto:  int QGridLayout::heightForWidth(int );
// _ZNK11QGridLayout14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK11QGridLayout14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QGridLayout::~QGridLayout();
extern "C"
void C_ZN11QGridLayoutD2Ev(void *qthis) {
  delete (QGridLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 110, column 10>
//   // proto:  void QGridLayout::addItem(QLayoutItem * item, int row, int column, int rowSpan, int columnSpan, Qt::Alignment );
// _ZN11QGridLayout7addItemEP11QLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE addItem(class QLayoutItem *, int, int, int, int, Qt::Alignment)
extern "C"
void
C_ZN11QGridLayout7addItemEP11QLayoutItemiiii6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QLayoutItem * arg1,
int arg2,
int arg3,
int arg4,
int arg5,
Qt::Alignment* arg6) {
  ((QGridLayout*)qthis)->addItem(arg1,
arg2,
arg3,
arg4,
arg5,
*((Qt::Alignment*)arg6));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 70, column 10>
//   // proto:  void QGridLayout::setSpacing(int spacing);
// _ZN11QGridLayout10setSpacingEi setSpacing(int)
extern "C"
void
C_ZN11QGridLayout10setSpacingEi(void *qthis,
int arg1) {
  ((QGridLayout*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 95, column 17>
//   // proto:  void QGridLayout::addWidget(QWidget * w);
// _ZN11QGridLayout9addWidgetEP7QWidget addWidget(class QWidget *)
extern "C"
void
C_ZN11QGridLayout9addWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QGridLayout*)qthis)->addWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 104, column 18>
//   // proto:  QLayoutItem * QGridLayout::itemAt(int index);
// _ZNK11QGridLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK11QGridLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QGridLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgridlayout.h', line 64, column 11>
//   // proto:  QSize QGridLayout::maximumSize();
// _ZNK11QGridLayout11maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK11QGridLayout11maximumSizeEv(void *qthis) {
  auto ret =
  ((QGridLayout*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <= ext block end

// body block begin =>
// QGridLayout_SlotProxy here
class QGridLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGridLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgridlayout.moc"

extern "C" {
  QGridLayout_SlotProxy* QGridLayout_SlotProxy_new()
  {
    return new QGridLayout_SlotProxy();
  }
};

// <= body block end

