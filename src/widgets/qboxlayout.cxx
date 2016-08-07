// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qboxlayout.h
// dst-file: /src/widgets/qboxlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qboxlayout.h>


#include <qnamespace.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qboxlayout_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QBoxLayout_Class_Size()
{
  return sizeof(QBoxLayout);
}

extern "C"
int QHBoxLayout_Class_Size()
{
  return sizeof(QHBoxLayout);
}

extern "C"
int QVBoxLayout_Class_Size()
{
  return sizeof(QVBoxLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 101, column 22>
//   // proto:  Qt::Orientations QBoxLayout::expandingDirections();
// _ZNK10QBoxLayout19expandingDirectionsEv expandingDirections()
extern "C"
QFlags<Qt::Orientation>*
C_ZNK10QBoxLayout19expandingDirectionsEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->expandingDirections();
  return new QFlags<Qt::Orientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 73, column 10>
//   // proto:  void QBoxLayout::addWidget(QWidget * , int stretch, Qt::Alignment alignment);
// _ZN10QBoxLayout9addWidgetEP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE addWidget(class QWidget *, int, Qt::Alignment)
extern "C"
void
C_ZN10QBoxLayout9addWidgetEP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QWidget * arg1,
int arg2,
Qt::Alignment* arg3) {
  ((QBoxLayout*)qthis)->addWidget(arg1,
arg2,
*((Qt::Alignment*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 85, column 9>
//   // proto:  int QBoxLayout::spacing();
// _ZNK10QBoxLayout7spacingEv spacing()
extern "C"
int
C_ZNK10QBoxLayout7spacingEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->spacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 97, column 10>
//   // proto:  bool QBoxLayout::hasHeightForWidth();
// _ZNK10QBoxLayout17hasHeightForWidthEv hasHeightForWidth()
extern "C"
bool
C_ZNK10QBoxLayout17hasHeightForWidthEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->hasHeightForWidth();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 76, column 10>
//   // proto:  void QBoxLayout::addItem(QLayoutItem * );
// _ZN10QBoxLayout7addItemEP11QLayoutItem addItem(class QLayoutItem *)
extern "C"
void
C_ZN10QBoxLayout7addItemEP11QLayoutItem(void *qthis,
QLayoutItem * arg1) {
  ((QBoxLayout*)qthis)->addItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 93, column 11>
//   // proto:  QSize QBoxLayout::sizeHint();
// _ZNK10QBoxLayout8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK10QBoxLayout8sizeHintEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
//   // proto:  void QBoxLayout::~QBoxLayout();
extern "C"
void C_ZN10QBoxLayoutD2Ev(void *qthis) {
  delete (QBoxLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 78, column 10>
//   // proto:  void QBoxLayout::insertSpacing(int index, int size);
// _ZN10QBoxLayout13insertSpacingEii insertSpacing(int, int)
extern "C"
void
C_ZN10QBoxLayout13insertSpacingEii(void *qthis,
int arg1,
int arg2) {
  ((QBoxLayout*)qthis)->insertSpacing(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 90, column 10>
//   // proto:  void QBoxLayout::setStretch(int index, int stretch);
// _ZN10QBoxLayout10setStretchEii setStretch(int, int)
extern "C"
void
C_ZN10QBoxLayout10setStretchEii(void *qthis,
int arg1,
int arg2) {
  ((QBoxLayout*)qthis)->setStretch(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 63, column 14>
//   // proto:  void QBoxLayout::QBoxLayout(QBoxLayout::Direction , QWidget * parent);
extern "C"
QBoxLayout*
C_ZN10QBoxLayoutC2ENS_9DirectionEP7QWidget(QBoxLayout::Direction arg1,
QWidget * arg2) {
  auto ret = new QBoxLayout(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 79, column 10>
//   // proto:  void QBoxLayout::insertStretch(int index, int stretch);
// _ZN10QBoxLayout13insertStretchEii insertStretch(int, int)
extern "C"
void
C_ZN10QBoxLayout13insertStretchEii(void *qthis,
int arg1,
int arg2) {
  ((QBoxLayout*)qthis)->insertStretch(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 74, column 10>
//   // proto:  void QBoxLayout::addLayout(QLayout * layout, int stretch);
// _ZN10QBoxLayout9addLayoutEP7QLayouti addLayout(class QLayout *, int)
extern "C"
void
C_ZN10QBoxLayout9addLayoutEP7QLayouti(void *qthis,
QLayout * arg1,
int arg2) {
  ((QBoxLayout*)qthis)->addLayout(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 88, column 10>
//   // proto:  bool QBoxLayout::setStretchFactor(QWidget * w, int stretch);
// _ZN10QBoxLayout16setStretchFactorEP7QWidgeti setStretchFactor(class QWidget *, int)
extern "C"
bool
C_ZN10QBoxLayout16setStretchFactorEP7QWidgeti(void *qthis,
QWidget * arg1,
int arg2) {
  auto ret =
  ((QBoxLayout*)qthis)->setStretchFactor(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 102, column 10>
//   // proto:  void QBoxLayout::invalidate();
// _ZN10QBoxLayout10invalidateEv invalidate()
extern "C"
void
C_ZN10QBoxLayout10invalidateEv(void *qthis) {
  ((QBoxLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 106, column 10>
//   // proto:  void QBoxLayout::setGeometry(const QRect & );
// _ZN10QBoxLayout11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN10QBoxLayout11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QBoxLayout*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 71, column 10>
//   // proto:  void QBoxLayout::addStretch(int stretch);
// _ZN10QBoxLayout10addStretchEi addStretch(int)
extern "C"
void
C_ZN10QBoxLayout10addStretchEi(void *qthis,
int arg1) {
  ((QBoxLayout*)qthis)->addStretch(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 67, column 15>
//   // proto:  QBoxLayout::Direction QBoxLayout::direction();
// _ZNK10QBoxLayout9directionEv direction()
extern "C"
QBoxLayout::Direction
C_ZNK10QBoxLayout9directionEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->direction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 68, column 10>
//   // proto:  void QBoxLayout::setDirection(QBoxLayout::Direction );
// _ZN10QBoxLayout12setDirectionENS_9DirectionE setDirection(enum QBoxLayout::Direction)
extern "C"
void
C_ZN10QBoxLayout12setDirectionENS_9DirectionE(void *qthis,
QBoxLayout::Direction arg1) {
  ((QBoxLayout*)qthis)->setDirection(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 82, column 10>
//   // proto:  void QBoxLayout::insertLayout(int index, QLayout * layout, int stretch);
// _ZN10QBoxLayout12insertLayoutEiP7QLayouti insertLayout(int, class QLayout *, int)
extern "C"
void
C_ZN10QBoxLayout12insertLayoutEiP7QLayouti(void *qthis,
int arg1,
QLayout * arg2,
int arg3) {
  ((QBoxLayout*)qthis)->insertLayout(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 89, column 10>
//   // proto:  bool QBoxLayout::setStretchFactor(QLayout * l, int stretch);
// _ZN10QBoxLayout16setStretchFactorEP7QLayouti setStretchFactor(class QLayout *, int)
extern "C"
bool
C_ZN10QBoxLayout16setStretchFactorEP7QLayouti(void *qthis,
QLayout * arg1,
int arg2) {
  auto ret =
  ((QBoxLayout*)qthis)->setStretchFactor(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 105, column 9>
//   // proto:  int QBoxLayout::count();
// _ZNK10QBoxLayout5countEv count()
extern "C"
int
C_ZNK10QBoxLayout5countEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 103, column 18>
//   // proto:  QLayoutItem * QBoxLayout::itemAt(int );
// _ZNK10QBoxLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK10QBoxLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QBoxLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 57, column 5>
//   // proto:  const QMetaObject * QBoxLayout::metaObject();
// _ZNK10QBoxLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QBoxLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 80, column 10>
//   // proto:  void QBoxLayout::insertSpacerItem(int index, QSpacerItem * spacerItem);
// _ZN10QBoxLayout16insertSpacerItemEiP11QSpacerItem insertSpacerItem(int, class QSpacerItem *)
extern "C"
void
C_ZN10QBoxLayout16insertSpacerItemEiP11QSpacerItem(void *qthis,
int arg1,
QSpacerItem * arg2) {
  ((QBoxLayout*)qthis)->insertSpacerItem(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 98, column 9>
//   // proto:  int QBoxLayout::heightForWidth(int );
// _ZNK10QBoxLayout14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK10QBoxLayout14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QBoxLayout*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 75, column 10>
//   // proto:  void QBoxLayout::addStrut(int );
// _ZN10QBoxLayout8addStrutEi addStrut(int)
extern "C"
void
C_ZN10QBoxLayout8addStrutEi(void *qthis,
int arg1) {
  ((QBoxLayout*)qthis)->addStrut(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 95, column 11>
//   // proto:  QSize QBoxLayout::maximumSize();
// _ZNK10QBoxLayout11maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK10QBoxLayout11maximumSizeEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 91, column 9>
//   // proto:  int QBoxLayout::stretch(int index);
// _ZNK10QBoxLayout7stretchEi stretch(int)
extern "C"
int
C_ZNK10QBoxLayout7stretchEi(void *qthis,
int arg1) {
  auto ret =
  ((QBoxLayout*)qthis)->stretch(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 81, column 10>
//   // proto:  void QBoxLayout::insertWidget(int index, QWidget * widget, int stretch, Qt::Alignment alignment);
// _ZN10QBoxLayout12insertWidgetEiP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE insertWidget(int, class QWidget *, int, Qt::Alignment)
extern "C"
void
C_ZN10QBoxLayout12insertWidgetEiP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
int arg1,
QWidget * arg2,
int arg3,
Qt::Alignment* arg4) {
  ((QBoxLayout*)qthis)->insertWidget(arg1,
arg2,
arg3,
*((Qt::Alignment*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 72, column 10>
//   // proto:  void QBoxLayout::addSpacerItem(QSpacerItem * spacerItem);
// _ZN10QBoxLayout13addSpacerItemEP11QSpacerItem addSpacerItem(class QSpacerItem *)
extern "C"
void
C_ZN10QBoxLayout13addSpacerItemEP11QSpacerItem(void *qthis,
QSpacerItem * arg1) {
  ((QBoxLayout*)qthis)->addSpacerItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 99, column 9>
//   // proto:  int QBoxLayout::minimumHeightForWidth(int );
// _ZNK10QBoxLayout21minimumHeightForWidthEi minimumHeightForWidth(int)
extern "C"
int
C_ZNK10QBoxLayout21minimumHeightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QBoxLayout*)qthis)->minimumHeightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 94, column 11>
//   // proto:  QSize QBoxLayout::minimumSize();
// _ZNK10QBoxLayout11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK10QBoxLayout11minimumSizeEv(void *qthis) {
  auto ret =
  ((QBoxLayout*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 86, column 10>
//   // proto:  void QBoxLayout::setSpacing(int spacing);
// _ZN10QBoxLayout10setSpacingEi setSpacing(int)
extern "C"
void
C_ZN10QBoxLayout10setSpacingEi(void *qthis,
int arg1) {
  ((QBoxLayout*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 104, column 18>
//   // proto:  QLayoutItem * QBoxLayout::takeAt(int );
// _ZN10QBoxLayout6takeAtEi takeAt(int)
extern "C"
void*
C_ZN10QBoxLayout6takeAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QBoxLayout*)qthis)->takeAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 83, column 10>
//   // proto:  void QBoxLayout::insertItem(int index, QLayoutItem * );
// _ZN10QBoxLayout10insertItemEiP11QLayoutItem insertItem(int, class QLayoutItem *)
extern "C"
void
C_ZN10QBoxLayout10insertItemEiP11QLayoutItem(void *qthis,
int arg1,
QLayoutItem * arg2) {
  ((QBoxLayout*)qthis)->insertItem(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 70, column 10>
//   // proto:  void QBoxLayout::addSpacing(int size);
// _ZN10QBoxLayout10addSpacingEi addSpacing(int)
extern "C"
void
C_ZN10QBoxLayout10addSpacingEi(void *qthis,
int arg1) {
  ((QBoxLayout*)qthis)->addSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 117, column 14>
//   // proto:  void QHBoxLayout::QHBoxLayout(QWidget * parent);
extern "C"
QHBoxLayout*
C_ZN11QHBoxLayoutC2EP7QWidget(QWidget * arg1) {
  auto ret = new QHBoxLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 114, column 5>
//   // proto:  const QMetaObject * QHBoxLayout::metaObject();
// _ZNK11QHBoxLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QHBoxLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QHBoxLayout*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QHBoxLayout::~QHBoxLayout();
extern "C"
void C_ZN11QHBoxLayoutD2Ev(void *qthis) {
  delete (QHBoxLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 116, column 5>
//   // proto:  void QHBoxLayout::QHBoxLayout();
extern "C"
QHBoxLayout*
C_ZN11QHBoxLayoutC2Ev() {
  auto ret = new QHBoxLayout();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 129, column 5>
//   // proto:  void QVBoxLayout::QVBoxLayout();
extern "C"
QVBoxLayout*
C_ZN11QVBoxLayoutC2Ev() {
  auto ret = new QVBoxLayout();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 127, column 5>
//   // proto:  const QMetaObject * QVBoxLayout::metaObject();
// _ZNK11QVBoxLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QVBoxLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QVBoxLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qboxlayout.h', line 130, column 14>
//   // proto:  void QVBoxLayout::QVBoxLayout(QWidget * parent);
extern "C"
QVBoxLayout*
C_ZN11QVBoxLayoutC2EP7QWidget(QWidget * arg1) {
  auto ret = new QVBoxLayout(arg1);
  return ret;
}
//   // proto:  void QVBoxLayout::~QVBoxLayout();
extern "C"
void C_ZN11QVBoxLayoutD2Ev(void *qthis) {
  delete (QVBoxLayout*)qthis;
}
// <= ext block end

// body block begin =>
// QBoxLayout_SlotProxy here
class QBoxLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QBoxLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QBoxLayout_SlotProxy* QBoxLayout_SlotProxy_new()
  {
    return new QBoxLayout_SlotProxy();
  }
};

// QHBoxLayout_SlotProxy here
class QHBoxLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QHBoxLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QHBoxLayout_SlotProxy* QHBoxLayout_SlotProxy_new()
  {
    return new QHBoxLayout_SlotProxy();
  }
};

// QVBoxLayout_SlotProxy here
class QVBoxLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QVBoxLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qboxlayout.moc"

extern "C" {
  QVBoxLayout_SlotProxy* QVBoxLayout_SlotProxy_new()
  {
    return new QVBoxLayout_SlotProxy();
  }
};

// <= body block end

