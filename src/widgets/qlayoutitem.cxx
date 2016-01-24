// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qlayoutitem.h
// dst-file: /src/widgets/qlayoutitem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlayoutitem.h>


#include <qsizepolicy.h>
#include <qsize.h>
#include <qnamespace.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qlayoutitem_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 56, column 21>
//   // proto:  void QLayoutItem::QLayoutItem(Qt::Alignment alignment);
if (true) {
  auto f = [](Qt::Alignment arg1) {
    // new QLayoutItem(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 74, column 19>
//   // proto:  Qt::Alignment QLayoutItem::alignment();
if (true) {
  auto f = []() {
    ((QLayoutItem*)0)->alignment();
  };
  if (f == nullptr){}
}
// _ZNK11QLayoutItem9alignmentEv alignment()
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 105, column 17>
//   // proto:  QSizePolicy QSpacerItem::sizePolicy();
if (true) {
  auto f = [](QSpacerItem flythis) {
    ((QSpacerItem*)0)->sizePolicy();
    flythis.sizePolicy();
  };
  if (f == nullptr){}
}
// _ZNK11QSpacerItem10sizePolicyEv sizePolicy()
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 88, column 5>
//   // proto:  void QSpacerItem::QSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData);
if (true) {
  auto f = [](int arg1, int arg2, QSizePolicy::Policy arg3, QSizePolicy::Policy arg4) {
    new QSpacerItem(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 119, column 14>
//   // proto:  void QWidgetItem::QWidgetItem(QWidget * w);
if (true) {
  auto f = [](QWidget * arg1) {
    new QWidgetItem(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLayoutItem_Class_Size()
{
  return sizeof(QLayoutItem);
}

extern "C"
int QSpacerItem_Class_Size()
{
  return sizeof(QSpacerItem);
}

extern "C"
int QWidgetItem_Class_Size()
{
  return sizeof(QWidgetItem);
}

extern "C"
int QWidgetItemV2_Class_Size()
{
  return sizeof(QWidgetItemV2);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 72, column 26>
//   // proto:  QSpacerItem * QLayoutItem::spacerItem();
// _ZN11QLayoutItem10spacerItemEv spacerItem()
extern "C"
void*
C_ZN11QLayoutItem10spacerItemEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->spacerItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 76, column 39>
//   // proto:  QSizePolicy::ControlTypes QLayoutItem::controlTypes();
// _ZNK11QLayoutItem12controlTypesEv controlTypes()
extern "C"
QFlags<QSizePolicy::ControlType>*
C_ZNK11QLayoutItem12controlTypesEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->controlTypes();
  return new QFlags<QSizePolicy::ControlType>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 59, column 19>
//   // proto:  QSize QLayoutItem::minimumSize();
// _ZNK11QLayoutItem11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK11QLayoutItem11minimumSizeEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 70, column 22>
//   // proto:  QWidget * QLayoutItem::widget();
// _ZN11QLayoutItem6widgetEv widget()
extern "C"
void*
C_ZN11QLayoutItem6widgetEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 68, column 18>
//   // proto:  void QLayoutItem::invalidate();
// _ZN11QLayoutItem10invalidateEv invalidate()
extern "C"
void
C_ZN11QLayoutItem10invalidateEv(void *qthis) {
  ((QLayoutItem*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 62, column 18>
//   // proto:  void QLayoutItem::setGeometry(const QRect & );
// _ZN11QLayoutItem11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN11QLayoutItem11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QLayoutItem*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 61, column 30>
//   // proto:  Qt::Orientations QLayoutItem::expandingDirections();
// _ZNK11QLayoutItem19expandingDirectionsEv expandingDirections()
extern "C"
QFlags<Qt::Orientation>*
C_ZNK11QLayoutItem19expandingDirectionsEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->expandingDirections();
  return new QFlags<Qt::Orientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 71, column 22>
//   // proto:  QLayout * QLayoutItem::layout();
// _ZN11QLayoutItem6layoutEv layout()
extern "C"
void*
C_ZN11QLayoutItem6layoutEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->layout();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 74, column 19>
//   // proto:  Qt::Alignment QLayoutItem::alignment();
// _ZNK11QLayoutItem9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK11QLayoutItem9alignmentEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 64, column 18>
//   // proto:  bool QLayoutItem::isEmpty();
// _ZNK11QLayoutItem7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK11QLayoutItem7isEmptyEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 58, column 19>
//   // proto:  QSize QLayoutItem::sizeHint();
// _ZNK11QLayoutItem8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QLayoutItem8sizeHintEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
//   // proto:  void QLayoutItem::~QLayoutItem();
extern "C"
void C_ZN11QLayoutItemD2Ev(void *qthis) {
  delete (QLayoutItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 65, column 18>
//   // proto:  bool QLayoutItem::hasHeightForWidth();
// _ZNK11QLayoutItem17hasHeightForWidthEv hasHeightForWidth()
extern "C"
bool
C_ZNK11QLayoutItem17hasHeightForWidthEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->hasHeightForWidth();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 75, column 10>
//   // proto:  void QLayoutItem::setAlignment(Qt::Alignment a);
// _ZN11QLayoutItem12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN11QLayoutItem12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QLayoutItem*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 66, column 17>
//   // proto:  int QLayoutItem::heightForWidth(int );
// _ZNK11QLayoutItem14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK11QLayoutItem14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QLayoutItem*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 63, column 19>
//   // proto:  QRect QLayoutItem::geometry();
// _ZNK11QLayoutItem8geometryEv geometry()
extern "C"
QRect*
C_ZNK11QLayoutItem8geometryEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->geometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 60, column 19>
//   // proto:  QSize QLayoutItem::maximumSize();
// _ZNK11QLayoutItem11maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK11QLayoutItem11maximumSizeEv(void *qthis) {
  auto ret =
  ((QLayoutItem*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 67, column 17>
//   // proto:  int QLayoutItem::minimumHeightForWidth(int );
// _ZNK11QLayoutItem21minimumHeightForWidthEi minimumHeightForWidth(int)
extern "C"
int
C_ZNK11QLayoutItem21minimumHeightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QLayoutItem*)qthis)->minimumHeightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 98, column 11>
//   // proto:  QSize QSpacerItem::minimumSize();
// _ZNK11QSpacerItem11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK11QSpacerItem11minimumSizeEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 105, column 17>
//   // proto:  QSizePolicy QSpacerItem::sizePolicy();
// _ZNK11QSpacerItem10sizePolicyEv sizePolicy()
extern "C"
QSizePolicy*
C_ZNK11QSpacerItem10sizePolicyEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->sizePolicy();
  return new QSizePolicy(ret); // 5
}
//   // proto:  void QSpacerItem::~QSpacerItem();
extern "C"
void C_ZN11QSpacerItemD2Ev(void *qthis) {
  delete (QSpacerItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 94, column 10>
//   // proto:  void QSpacerItem::changeSize(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData);
// _ZN11QSpacerItem10changeSizeEiiN11QSizePolicy6PolicyES1_ changeSize(int, int, class QSizePolicy::Policy, class QSizePolicy::Policy)
extern "C"
void
C_ZN11QSpacerItem10changeSizeEiiN11QSizePolicy6PolicyES1_(void *qthis,
int arg1,
int arg2,
QSizePolicy::Policy* arg3,
QSizePolicy::Policy* arg4) {
  ((QSpacerItem*)qthis)->changeSize(arg1,
arg2,
*((QSizePolicy::Policy*)arg3),
*((QSizePolicy::Policy*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 97, column 11>
//   // proto:  QSize QSpacerItem::sizeHint();
// _ZNK11QSpacerItem8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QSpacerItem8sizeHintEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 99, column 11>
//   // proto:  QSize QSpacerItem::maximumSize();
// _ZNK11QSpacerItem11maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK11QSpacerItem11maximumSizeEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 101, column 10>
//   // proto:  bool QSpacerItem::isEmpty();
// _ZNK11QSpacerItem7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK11QSpacerItem7isEmptyEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 103, column 11>
//   // proto:  QRect QSpacerItem::geometry();
// _ZNK11QSpacerItem8geometryEv geometry()
extern "C"
QRect*
C_ZNK11QSpacerItem8geometryEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->geometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 100, column 22>
//   // proto:  Qt::Orientations QSpacerItem::expandingDirections();
// _ZNK11QSpacerItem19expandingDirectionsEv expandingDirections()
extern "C"
QFlags<Qt::Orientation>*
C_ZNK11QSpacerItem19expandingDirectionsEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->expandingDirections();
  return new QFlags<Qt::Orientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 102, column 10>
//   // proto:  void QSpacerItem::setGeometry(const QRect & );
// _ZN11QSpacerItem11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN11QSpacerItem11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QSpacerItem*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 104, column 18>
//   // proto:  QSpacerItem * QSpacerItem::spacerItem();
// _ZN11QSpacerItem10spacerItemEv spacerItem()
extern "C"
void*
C_ZN11QSpacerItem10spacerItemEv(void *qthis) {
  auto ret =
  ((QSpacerItem*)qthis)->spacerItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 122, column 11>
//   // proto:  QSize QWidgetItem::sizeHint();
// _ZNK11QWidgetItem8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QWidgetItem8sizeHintEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 123, column 11>
//   // proto:  QSize QWidgetItem::minimumSize();
// _ZNK11QWidgetItem11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK11QWidgetItem11minimumSizeEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 131, column 10>
//   // proto:  bool QWidgetItem::hasHeightForWidth();
// _ZNK11QWidgetItem17hasHeightForWidthEv hasHeightForWidth()
extern "C"
bool
C_ZNK11QWidgetItem17hasHeightForWidthEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->hasHeightForWidth();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QWidgetItem::~QWidgetItem();
extern "C"
void C_ZN11QWidgetItemD2Ev(void *qthis) {
  delete (QWidgetItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 129, column 22>
//   // proto:  QWidget * QWidgetItem::widget();
// _ZN11QWidgetItem6widgetEv widget()
extern "C"
void*
C_ZN11QWidgetItem6widgetEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 127, column 10>
//   // proto:  void QWidgetItem::setGeometry(const QRect & );
// _ZN11QWidgetItem11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN11QWidgetItem11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QWidgetItem*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 125, column 22>
//   // proto:  Qt::Orientations QWidgetItem::expandingDirections();
// _ZNK11QWidgetItem19expandingDirectionsEv expandingDirections()
extern "C"
QFlags<Qt::Orientation>*
C_ZNK11QWidgetItem19expandingDirectionsEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->expandingDirections();
  return new QFlags<Qt::Orientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 132, column 9>
//   // proto:  int QWidgetItem::heightForWidth(int );
// _ZNK11QWidgetItem14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK11QWidgetItem14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QWidgetItem*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 124, column 11>
//   // proto:  QSize QWidgetItem::maximumSize();
// _ZNK11QWidgetItem11maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK11QWidgetItem11maximumSizeEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 126, column 10>
//   // proto:  bool QWidgetItem::isEmpty();
// _ZNK11QWidgetItem7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK11QWidgetItem7isEmptyEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 128, column 11>
//   // proto:  QRect QWidgetItem::geometry();
// _ZNK11QWidgetItem8geometryEv geometry()
extern "C"
QRect*
C_ZNK11QWidgetItem8geometryEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->geometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 133, column 31>
//   // proto:  QSizePolicy::ControlTypes QWidgetItem::controlTypes();
// _ZNK11QWidgetItem12controlTypesEv controlTypes()
extern "C"
QFlags<QSizePolicy::ControlType>*
C_ZNK11QWidgetItem12controlTypesEv(void *qthis) {
  auto ret =
  ((QWidgetItem*)qthis)->controlTypes();
  return new QFlags<QSizePolicy::ControlType>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 144, column 11>
//   // proto:  QSize QWidgetItemV2::sizeHint();
// _ZNK13QWidgetItemV28sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK13QWidgetItemV28sizeHintEv(void *qthis) {
  auto ret =
  ((QWidgetItemV2*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 145, column 11>
//   // proto:  QSize QWidgetItemV2::minimumSize();
// _ZNK13QWidgetItemV211minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK13QWidgetItemV211minimumSizeEv(void *qthis) {
  auto ret =
  ((QWidgetItemV2*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 147, column 9>
//   // proto:  int QWidgetItemV2::heightForWidth(int width);
// _ZNK13QWidgetItemV214heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK13QWidgetItemV214heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QWidgetItemV2*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QWidgetItemV2::~QWidgetItemV2();
extern "C"
void C_ZN13QWidgetItemV2D2Ev(void *qthis) {
  delete (QWidgetItemV2*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 141, column 14>
//   // proto:  void QWidgetItemV2::QWidgetItemV2(QWidget * widget);
extern "C"
QWidgetItemV2*
C_ZN13QWidgetItemV2C2EP7QWidget(QWidget * arg1) {
  auto ret = new QWidgetItemV2(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayoutitem.h', line 146, column 11>
//   // proto:  QSize QWidgetItemV2::maximumSize();
// _ZNK13QWidgetItemV211maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK13QWidgetItemV211maximumSizeEv(void *qthis) {
  auto ret =
  ((QWidgetItemV2*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

