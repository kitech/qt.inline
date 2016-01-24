// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qlayout.h
// dst-file: /src/widgets/qlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlayout.h>


#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qnamespace.h>
#include <qmargins.h>
// <= header block end

// main block begin =>
void __keep_qlayout_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLayout_Class_Size()
{
  return sizeof(QLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 83, column 10>
//   // proto:  void QLayout::setContentsMargins(int left, int top, int right, int bottom);
// _ZN7QLayout18setContentsMarginsEiiii setContentsMargins(int, int, int, int)
extern "C"
void
C_ZN7QLayout18setContentsMarginsEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QLayout*)qthis)->setContentsMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 90, column 10>
//   // proto:  bool QLayout::setAlignment(QLayout * l, Qt::Alignment alignment);
// _ZN7QLayout12setAlignmentEPS_6QFlagsIN2Qt13AlignmentFlagEE setAlignment(class QLayout *, Qt::Alignment)
extern "C"
bool
C_ZN7QLayout12setAlignmentEPS_6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QLayout * arg1,
Qt::Alignment* arg2) {
  auto ret =
  ((QLayout*)qthis)->setAlignment(arg1,
*((Qt::Alignment*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 78, column 9>
//   // proto:  int QLayout::spacing();
// _ZNK7QLayout7spacingEv spacing()
extern "C"
int
C_ZNK7QLayout7spacingEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->spacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 74, column 5>
//   // proto:  void QLayout::QLayout();
extern "C"
QLayout*
C_ZN7QLayoutC2Ev() {
  // auto ret = new QLayout();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 101, column 11>
//   // proto:  QRect QLayout::geometry();
// _ZNK7QLayout8geometryEv geometry()
extern "C"
QRect*
C_ZNK7QLayout8geometryEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->geometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 118, column 17>
//   // proto:  int QLayout::count();
// _ZNK7QLayout5countEv count()
extern "C"
int
C_ZNK7QLayout5countEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 113, column 11>
//   // proto:  QSize QLayout::maximumSize();
// _ZNK7QLayout11maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK7QLayout11maximumSizeEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 95, column 10>
//   // proto:  void QLayout::setMenuBar(QWidget * w);
// _ZN7QLayout10setMenuBarEP7QWidget setMenuBar(class QWidget *)
extern "C"
void
C_ZN7QLayout10setMenuBarEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QLayout*)qthis)->setMenuBar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 117, column 17>
//   // proto:  int QLayout::indexOf(QWidget * );
// _ZNK7QLayout7indexOfEP7QWidget indexOf(class QWidget *)
extern "C"
int
C_ZNK7QLayout7indexOfEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QLayout*)qthis)->indexOf(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 131, column 10>
//   // proto:  void QLayout::setEnabled(bool );
// _ZN7QLayout10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN7QLayout10setEnabledEb(void *qthis,
bool arg1) {
  ((QLayout*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 112, column 11>
//   // proto:  QSize QLayout::minimumSize();
// _ZNK7QLayout11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK7QLayout11minimumSizeEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 116, column 26>
//   // proto:  QLayoutItem * QLayout::takeAt(int index);
// _ZN7QLayout6takeAtEi takeAt(int)
extern "C"
void*
C_ZN7QLayout6takeAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QLayout*)qthis)->takeAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 120, column 31>
//   // proto:  QSizePolicy::ControlTypes QLayout::controlTypes();
// _ZNK7QLayout12controlTypesEv controlTypes()
extern "C"
QFlags<QSizePolicy::ControlType>*
C_ZNK7QLayout12controlTypesEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->controlTypes();
  return new QFlags<QSizePolicy::ControlType>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 127, column 11>
//   // proto:  QSize QLayout::totalMaximumSize();
// _ZNK7QLayout16totalMaximumSizeEv totalMaximumSize()
extern "C"
QSize*
C_ZNK7QLayout16totalMaximumSizeEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->totalMaximumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 100, column 10>
//   // proto:  void QLayout::invalidate();
// _ZN7QLayout10invalidateEv invalidate()
extern "C"
void
C_ZN7QLayout10invalidateEv(void *qthis) {
  ((QLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 103, column 10>
//   // proto:  void QLayout::update();
// _ZN7QLayout6updateEv update()
extern "C"
void
C_ZN7QLayout6updateEv(void *qthis) {
  ((QLayout*)qthis)->update();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 87, column 11>
//   // proto:  QRect QLayout::contentsRect();
// _ZNK7QLayout12contentsRectEv contentsRect()
extern "C"
QRect*
C_ZNK7QLayout12contentsRectEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->contentsRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 128, column 11>
//   // proto:  QSize QLayout::totalSizeHint();
// _ZNK7QLayout13totalSizeHintEv totalSizeHint()
extern "C"
QSize*
C_ZNK7QLayout13totalSizeHintEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->totalSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 73, column 5>
//   // proto:  void QLayout::QLayout(QWidget * parent);
extern "C"
QLayout*
C_ZN7QLayoutC2EP7QWidget(QWidget * arg1) {
  // auto ret = new QLayout(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 89, column 10>
//   // proto:  bool QLayout::setAlignment(QWidget * w, Qt::Alignment alignment);
// _ZN7QLayout12setAlignmentEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE setAlignment(class QWidget *, Qt::Alignment)
extern "C"
bool
C_ZN7QLayout12setAlignmentEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QWidget * arg1,
Qt::Alignment* arg2) {
  auto ret =
  ((QLayout*)qthis)->setAlignment(arg1,
*((Qt::Alignment*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 106, column 18>
//   // proto:  void QLayout::addItem(QLayoutItem * );
// _ZN7QLayout7addItemEP11QLayoutItem addItem(class QLayoutItem *)
extern "C"
void
C_ZN7QLayout7addItemEP11QLayoutItem(void *qthis,
QLayoutItem * arg1) {
  ((QLayout*)qthis)->addItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 125, column 9>
//   // proto:  int QLayout::totalHeightForWidth(int w);
// _ZNK7QLayout19totalHeightForWidthEi totalHeightForWidth(int)
extern "C"
int
C_ZNK7QLayout19totalHeightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QLayout*)qthis)->totalHeightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 80, column 10>
//   // proto:  void QLayout::setMargin(int );
// _ZN7QLayout9setMarginEi setMargin(int)
extern "C"
void
C_ZN7QLayout9setMarginEi(void *qthis,
int arg1) {
  ((QLayout*)qthis)->setMargin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 119, column 10>
//   // proto:  bool QLayout::isEmpty();
// _ZNK7QLayout7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK7QLayout7isEmptyEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 105, column 10>
//   // proto:  void QLayout::addWidget(QWidget * w);
// _ZN7QLayout9addWidgetEP7QWidget addWidget(class QWidget *)
extern "C"
void
C_ZN7QLayout9addWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QLayout*)qthis)->addWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 93, column 10>
//   // proto:  void QLayout::setSizeConstraint(QLayout::SizeConstraint );
// _ZN7QLayout17setSizeConstraintENS_14SizeConstraintE setSizeConstraint(enum QLayout::SizeConstraint)
extern "C"
void
C_ZN7QLayout17setSizeConstraintENS_14SizeConstraintE(void *qthis,
QLayout::SizeConstraint arg1) {
  ((QLayout*)qthis)->setSizeConstraint(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 85, column 10>
//   // proto:  void QLayout::getContentsMargins(int * left, int * top, int * right, int * bottom);
// _ZNK7QLayout18getContentsMarginsEPiS0_S0_S0_ getContentsMargins(int *, int *, int *, int *)
extern "C"
void
C_ZNK7QLayout18getContentsMarginsEPiS0_S0_S0_(void *qthis,
int * arg1,
int * arg2,
int * arg3,
int * arg4) {
  ((QLayout*)qthis)->getContentsMargins(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 123, column 18>
//   // proto:  QLayoutItem * QLayout::replaceWidget(QWidget * from, QWidget * to, Qt::FindChildOptions options);
// _ZN7QLayout13replaceWidgetEP7QWidgetS1_6QFlagsIN2Qt15FindChildOptionEE replaceWidget(class QWidget *, class QWidget *, Qt::FindChildOptions)
extern "C"
void*
C_ZN7QLayout13replaceWidgetEP7QWidgetS1_6QFlagsIN2Qt15FindChildOptionEE(void *qthis,
QWidget * arg1,
QWidget * arg2,
Qt::FindChildOptions* arg3) {
  auto ret =
  ((QLayout*)qthis)->replaceWidget(arg1,
arg2,
*((Qt::FindChildOptions*)arg3));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 129, column 14>
//   // proto:  QLayout * QLayout::layout();
// _ZN7QLayout6layoutEv layout()
extern "C"
void*
C_ZN7QLayout6layoutEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->layout();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 102, column 10>
//   // proto:  bool QLayout::activate();
// _ZN7QLayout8activateEv activate()
extern "C"
bool
C_ZN7QLayout8activateEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->activate();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 132, column 10>
//   // proto:  bool QLayout::isEnabled();
// _ZNK7QLayout9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK7QLayout9isEnabledEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QLayout::~QLayout();
extern "C"
void C_ZN7QLayoutD2Ev(void *qthis) {
  delete (QLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 77, column 9>
//   // proto:  int QLayout::margin();
// _ZNK7QLayout6marginEv margin()
extern "C"
int
C_ZNK7QLayout6marginEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->margin();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 111, column 22>
//   // proto:  Qt::Orientations QLayout::expandingDirections();
// _ZNK7QLayout19expandingDirectionsEv expandingDirections()
extern "C"
QFlags<Qt::Orientation>*
C_ZNK7QLayout19expandingDirectionsEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->expandingDirections();
  return new QFlags<Qt::Orientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 81, column 10>
//   // proto:  void QLayout::setSpacing(int );
// _ZN7QLayout10setSpacingEi setSpacing(int)
extern "C"
void
C_ZN7QLayout10setSpacingEi(void *qthis,
int arg1) {
  ((QLayout*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 96, column 14>
//   // proto:  QWidget * QLayout::menuBar();
// _ZNK7QLayout7menuBarEv menuBar()
extern "C"
void*
C_ZNK7QLayout7menuBarEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->menuBar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 56, column 5>
//   // proto:  const QMetaObject * QLayout::metaObject();
// _ZNK7QLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 115, column 26>
//   // proto:  QLayoutItem * QLayout::itemAt(int index);
// _ZNK7QLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK7QLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 98, column 14>
//   // proto:  QWidget * QLayout::parentWidget();
// _ZNK7QLayout12parentWidgetEv parentWidget()
extern "C"
void*
C_ZNK7QLayout12parentWidgetEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->parentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 108, column 10>
//   // proto:  void QLayout::removeWidget(QWidget * w);
// _ZN7QLayout12removeWidgetEP7QWidget removeWidget(class QWidget *)
extern "C"
void
C_ZN7QLayout12removeWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QLayout*)qthis)->removeWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 94, column 20>
//   // proto:  QLayout::SizeConstraint QLayout::sizeConstraint();
// _ZNK7QLayout14sizeConstraintEv sizeConstraint()
extern "C"
QLayout::SizeConstraint
C_ZNK7QLayout14sizeConstraintEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->sizeConstraint();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 109, column 10>
//   // proto:  void QLayout::removeItem(QLayoutItem * );
// _ZN7QLayout10removeItemEP11QLayoutItem removeItem(class QLayoutItem *)
extern "C"
void
C_ZN7QLayout10removeItemEP11QLayoutItem(void *qthis,
QLayoutItem * arg1) {
  ((QLayout*)qthis)->removeItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 86, column 14>
//   // proto:  QMargins QLayout::contentsMargins();
// _ZNK7QLayout15contentsMarginsEv contentsMargins()
extern "C"
QMargins*
C_ZNK7QLayout15contentsMarginsEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->contentsMargins();
  return new QMargins(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 126, column 11>
//   // proto:  QSize QLayout::totalMinimumSize();
// _ZNK7QLayout16totalMinimumSizeEv totalMinimumSize()
extern "C"
QSize*
C_ZNK7QLayout16totalMinimumSizeEv(void *qthis) {
  auto ret =
  ((QLayout*)qthis)->totalMinimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 114, column 18>
//   // proto:  void QLayout::setGeometry(const QRect & );
// _ZN7QLayout11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN7QLayout11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QLayout*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 135, column 18>
//   // proto: static QSize QLayout::closestAcceptableSize(const QWidget * w, const QSize & s);
// _ZN7QLayout21closestAcceptableSizeEPK7QWidgetRK5QSize closestAcceptableSize(const class QWidget *, const class QSize &)
extern "C"
QSize*
C_ZN7QLayout21closestAcceptableSizeEPK7QWidgetRK5QSize(const QWidget * arg1,
const QSize* arg2) {
  auto ret =
  QLayout::closestAcceptableSize(arg1,
*((const QSize*)arg2));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlayout.h', line 84, column 10>
//   // proto:  void QLayout::setContentsMargins(const QMargins & margins);
// _ZN7QLayout18setContentsMarginsERK8QMargins setContentsMargins(const class QMargins &)
extern "C"
void
C_ZN7QLayout18setContentsMarginsERK8QMargins(void *qthis,
const QMargins* arg1) {
  ((QLayout*)qthis)->setContentsMargins(*((const QMargins*)arg1));
}
// <= ext block end

// body block begin =>
// QLayout_SlotProxy here
class QLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qlayout.moc"

extern "C" {
  QLayout_SlotProxy* QLayout_SlotProxy_new()
  {
    return new QLayout_SlotProxy();
  }
};

// <= body block end

