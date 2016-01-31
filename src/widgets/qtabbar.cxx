// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qtabbar.h
// dst-file: /src/widgets/qtabbar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtabbar.h>


#include <qstring.h>
#include <qicon.h>
#include <qsize.h>
#include <qrect.h>
#include <qnamespace.h>
#include <qcolor.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qtabbar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTabBar_Class_Size()
{
  return sizeof(QTabBar);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 142, column 10>
//   // proto:  bool QTabBar::usesScrollButtons();
// _ZNK7QTabBar17usesScrollButtonsEv usesScrollButtons()
extern "C"
bool
C_ZNK7QTabBar17usesScrollButtonsEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->usesScrollButtons();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 163, column 10>
//   // proto:  bool QTabBar::autoHide();
// _ZNK7QTabBar8autoHideEv autoHide()
extern "C"
bool
C_ZNK7QTabBar8autoHideEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->autoHide();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 116, column 13>
//   // proto:  QString QTabBar::tabToolTip(int index);
// _ZNK7QTabBar10tabToolTipEi tabToolTip(int)
extern "C"
QString*
C_ZNK7QTabBar10tabToolTipEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabToolTip(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 148, column 10>
//   // proto:  void QTabBar::setTabButton(int index, QTabBar::ButtonPosition position, QWidget * widget);
// _ZN7QTabBar12setTabButtonEiNS_14ButtonPositionEP7QWidget setTabButton(int, enum QTabBar::ButtonPosition, class QWidget *)
extern "C"
void
C_ZN7QTabBar12setTabButtonEiNS_14ButtonPositionEP7QWidget(void *qthis,
int arg1,
QTabBar::ButtonPosition arg2,
QWidget * arg3) {
  ((QTabBar*)qthis)->setTabButton(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 154, column 10>
//   // proto:  bool QTabBar::expanding();
// _ZNK7QTabBar9expandingEv expanding()
extern "C"
bool
C_ZNK7QTabBar9expandingEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->expanding();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 161, column 10>
//   // proto:  void QTabBar::setDocumentMode(bool set);
// _ZN7QTabBar15setDocumentModeEb setDocumentMode(_Bool)
extern "C"
void
C_ZN7QTabBar15setDocumentModeEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setDocumentMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 131, column 9>
//   // proto:  int QTabBar::count();
// _ZNK7QTabBar5countEv count()
extern "C"
int
C_ZNK7QTabBar5countEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 167, column 10>
//   // proto:  void QTabBar::setChangeCurrentOnDrag(bool change);
// _ZN7QTabBar22setChangeCurrentOnDragEb setChangeCurrentOnDrag(_Bool)
extern "C"
void
C_ZN7QTabBar22setChangeCurrentOnDragEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setChangeCurrentOnDrag(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 108, column 11>
//   // proto:  QIcon QTabBar::tabIcon(int index);
// _ZNK7QTabBar7tabIconEi tabIcon(int)
extern "C"
QIcon*
C_ZNK7QTabBar7tabIconEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabIcon(arg1);
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 112, column 10>
//   // proto:  void QTabBar::setElideMode(Qt::TextElideMode );
// _ZN7QTabBar12setElideModeEN2Qt13TextElideModeE setElideMode(Qt::TextElideMode)
extern "C"
void
C_ZN7QTabBar12setElideModeEN2Qt13TextElideModeE(void *qthis,
Qt::TextElideMode* arg1) {
  ((QTabBar*)qthis)->setElideMode(*((Qt::TextElideMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 176, column 10>
//   // proto:  void QTabBar::tabBarClicked(int index);
// _ZN7QTabBar13tabBarClickedEi tabBarClicked(int)
extern "C"
void
C_ZN7QTabBar13tabBarClickedEi(void *qthis,
int arg1) {
  ((QTabBar*)qthis)->tabBarClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 134, column 11>
//   // proto:  QSize QTabBar::minimumSizeHint();
// _ZNK7QTabBar15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK7QTabBar15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 146, column 10>
//   // proto:  void QTabBar::setTabsClosable(bool closable);
// _ZN7QTabBar15setTabsClosableEb setTabsClosable(_Bool)
extern "C"
void
C_ZN7QTabBar15setTabsClosableEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setTabsClosable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 166, column 10>
//   // proto:  bool QTabBar::changeCurrentOnDrag();
// _ZNK7QTabBar19changeCurrentOnDragEv changeCurrentOnDrag()
extern "C"
bool
C_ZNK7QTabBar19changeCurrentOnDragEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->changeCurrentOnDrag();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 120, column 10>
//   // proto:  void QTabBar::setTabWhatsThis(int index, const QString & text);
// _ZN7QTabBar15setTabWhatsThisEiRK7QString setTabWhatsThis(int, const class QString &)
extern "C"
void
C_ZN7QTabBar15setTabWhatsThisEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QTabBar*)qthis)->setTabWhatsThis(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 50, column 5>
//   // proto:  const QMetaObject * QTabBar::metaObject();
// _ZNK7QTabBar10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QTabBar10metaObjectEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 94, column 9>
//   // proto:  int QTabBar::insertTab(int index, const QIcon & icon, const QString & text);
// _ZN7QTabBar9insertTabEiRK5QIconRK7QString insertTab(int, const class QIcon &, const class QString &)
extern "C"
int
C_ZN7QTabBar9insertTabEiRK5QIconRK7QString(void *qthis,
int arg1,
const QIcon* arg2,
const QString* arg3) {
  auto ret =
  ((QTabBar*)qthis)->insertTab(arg1,
*((const QIcon*)arg2),
*((const QString*)arg3));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 109, column 10>
//   // proto:  void QTabBar::setTabIcon(int index, const QIcon & icon);
// _ZN7QTabBar10setTabIconEiRK5QIcon setTabIcon(int, const class QIcon &)
extern "C"
void
C_ZN7QTabBar10setTabIconEiRK5QIcon(void *qthis,
int arg1,
const QIcon* arg2) {
  ((QTabBar*)qthis)->setTabIcon(arg1,
*((const QIcon*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 157, column 10>
//   // proto:  bool QTabBar::isMovable();
// _ZNK7QTabBar9isMovableEv isMovable()
extern "C"
bool
C_ZNK7QTabBar9isMovableEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->isMovable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 155, column 10>
//   // proto:  void QTabBar::setExpanding(bool enabled);
// _ZN7QTabBar12setExpandingEb setExpanding(_Bool)
extern "C"
void
C_ZN7QTabBar12setExpandingEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setExpanding(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 96, column 10>
//   // proto:  void QTabBar::removeTab(int index);
// _ZN7QTabBar9removeTabEi removeTab(int)
extern "C"
void
C_ZN7QTabBar9removeTabEi(void *qthis,
int arg1) {
  ((QTabBar*)qthis)->removeTab(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 100, column 10>
//   // proto:  void QTabBar::setTabEnabled(int index, bool );
// _ZN7QTabBar13setTabEnabledEib setTabEnabled(int, _Bool)
extern "C"
void
C_ZN7QTabBar13setTabEnabledEib(void *qthis,
int arg1,
bool arg2) {
  ((QTabBar*)qthis)->setTabEnabled(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 99, column 10>
//   // proto:  bool QTabBar::isTabEnabled(int index);
// _ZNK7QTabBar12isTabEnabledEi isTabEnabled(int)
extern "C"
bool
C_ZNK7QTabBar12isTabEnabledEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->isTabEnabled(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 170, column 10>
//   // proto:  void QTabBar::setCurrentIndex(int index);
// _ZN7QTabBar15setCurrentIndexEi setCurrentIndex(int)
extern "C"
void
C_ZN7QTabBar15setCurrentIndexEi(void *qthis,
int arg1) {
  ((QTabBar*)qthis)->setCurrentIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 127, column 11>
//   // proto:  QRect QTabBar::tabRect(int index);
// _ZNK7QTabBar7tabRectEi tabRect(int)
extern "C"
QRect*
C_ZNK7QTabBar7tabRectEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabRect(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 145, column 10>
//   // proto:  bool QTabBar::tabsClosable();
// _ZNK7QTabBar12tabsClosableEv tabsClosable()
extern "C"
bool
C_ZNK7QTabBar12tabsClosableEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->tabsClosable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 174, column 10>
//   // proto:  void QTabBar::tabCloseRequested(int index);
// _ZN7QTabBar17tabCloseRequestedEi tabCloseRequested(int)
extern "C"
void
C_ZN7QTabBar17tabCloseRequestedEi(void *qthis,
int arg1) {
  ((QTabBar*)qthis)->tabCloseRequested(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 158, column 10>
//   // proto:  void QTabBar::setMovable(bool movable);
// _ZN7QTabBar10setMovableEb setMovable(_Bool)
extern "C"
void
C_ZN7QTabBar10setMovableEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setMovable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 164, column 10>
//   // proto:  void QTabBar::setAutoHide(bool hide);
// _ZN7QTabBar11setAutoHideEb setAutoHide(_Bool)
extern "C"
void
C_ZN7QTabBar11setAutoHideEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setAutoHide(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 139, column 11>
//   // proto:  QSize QTabBar::iconSize();
// _ZNK7QTabBar8iconSizeEv iconSize()
extern "C"
QSize*
C_ZNK7QTabBar8iconSizeEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->iconSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 88, column 10>
//   // proto:  void QTabBar::setShape(QTabBar::Shape shape);
// _ZN7QTabBar8setShapeENS_5ShapeE setShape(enum QTabBar::Shape)
extern "C"
void
C_ZN7QTabBar8setShapeENS_5ShapeE(void *qthis,
QTabBar::Shape arg1) {
  ((QTabBar*)qthis)->setShape(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 102, column 13>
//   // proto:  QString QTabBar::tabText(int index);
// _ZNK7QTabBar7tabTextEi tabText(int)
extern "C"
QString*
C_ZNK7QTabBar7tabTextEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 111, column 23>
//   // proto:  Qt::TextElideMode QTabBar::elideMode();
// _ZNK7QTabBar9elideModeEv elideMode()
extern "C"
Qt::TextElideMode
C_ZNK7QTabBar9elideModeEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->elideMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 121, column 13>
//   // proto:  QString QTabBar::tabWhatsThis(int index);
// _ZNK7QTabBar12tabWhatsThisEi tabWhatsThis(int)
extern "C"
QString*
C_ZNK7QTabBar12tabWhatsThisEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabWhatsThis(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 160, column 10>
//   // proto:  bool QTabBar::documentMode();
// _ZNK7QTabBar12documentModeEv documentMode()
extern "C"
bool
C_ZNK7QTabBar12documentModeEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->documentMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 128, column 9>
//   // proto:  int QTabBar::tabAt(const QPoint & pos);
// _ZNK7QTabBar5tabAtERK6QPoint tabAt(const class QPoint &)
extern "C"
int
C_ZNK7QTabBar5tabAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabAt(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 124, column 10>
//   // proto:  void QTabBar::setTabData(int index, const QVariant & data);
// _ZN7QTabBar10setTabDataEiRK8QVariant setTabData(int, const class QVariant &)
extern "C"
void
C_ZN7QTabBar10setTabDataEiRK8QVariant(void *qthis,
int arg1,
const QVariant* arg2) {
  ((QTabBar*)qthis)->setTabData(arg1,
*((const QVariant*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 68, column 14>
//   // proto:  void QTabBar::QTabBar(QWidget * parent);
extern "C"
QTabBar*
C_ZN7QTabBarC2EP7QWidget(QWidget * arg1) {
  auto ret = new QTabBar(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 105, column 12>
//   // proto:  QColor QTabBar::tabTextColor(int index);
// _ZNK7QTabBar12tabTextColorEi tabTextColor(int)
extern "C"
QColor*
C_ZNK7QTabBar12tabTextColorEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabTextColor(arg1);
  return new QColor(ret); // 5
}
//   // proto:  void QTabBar::~QTabBar();
extern "C"
void C_ZN7QTabBarD2Ev(void *qthis) {
  delete (QTabBar*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 87, column 11>
//   // proto:  QTabBar::Shape QTabBar::shape();
// _ZNK7QTabBar5shapeEv shape()
extern "C"
QTabBar::Shape
C_ZNK7QTabBar5shapeEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->shape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 93, column 9>
//   // proto:  int QTabBar::insertTab(int index, const QString & text);
// _ZN7QTabBar9insertTabEiRK7QString insertTab(int, const class QString &)
extern "C"
int
C_ZN7QTabBar9insertTabEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  auto ret =
  ((QTabBar*)qthis)->insertTab(arg1,
*((const QString*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 177, column 10>
//   // proto:  void QTabBar::tabBarDoubleClicked(int index);
// _ZN7QTabBar19tabBarDoubleClickedEi tabBarDoubleClicked(int)
extern "C"
void
C_ZN7QTabBar19tabBarDoubleClickedEi(void *qthis,
int arg1) {
  ((QTabBar*)qthis)->tabBarDoubleClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 90, column 9>
//   // proto:  int QTabBar::addTab(const QString & text);
// _ZN7QTabBar6addTabERK7QString addTab(const class QString &)
extern "C"
int
C_ZN7QTabBar6addTabERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QTabBar*)qthis)->addTab(*((const QString*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 151, column 23>
//   // proto:  QTabBar::SelectionBehavior QTabBar::selectionBehaviorOnRemove();
// _ZNK7QTabBar25selectionBehaviorOnRemoveEv selectionBehaviorOnRemove()
extern "C"
QTabBar::SelectionBehavior
C_ZNK7QTabBar25selectionBehaviorOnRemoveEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->selectionBehaviorOnRemove();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 91, column 9>
//   // proto:  int QTabBar::addTab(const QIcon & icon, const QString & text);
// _ZN7QTabBar6addTabERK5QIconRK7QString addTab(const class QIcon &, const class QString &)
extern "C"
int
C_ZN7QTabBar6addTabERK5QIconRK7QString(void *qthis,
const QIcon* arg1,
const QString* arg2) {
  auto ret =
  ((QTabBar*)qthis)->addTab(*((const QIcon*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 115, column 10>
//   // proto:  void QTabBar::setTabToolTip(int index, const QString & tip);
// _ZN7QTabBar13setTabToolTipEiRK7QString setTabToolTip(int, const class QString &)
extern "C"
void
C_ZN7QTabBar13setTabToolTipEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QTabBar*)qthis)->setTabToolTip(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 173, column 10>
//   // proto:  void QTabBar::currentChanged(int index);
// _ZN7QTabBar14currentChangedEi currentChanged(int)
extern "C"
void
C_ZN7QTabBar14currentChangedEi(void *qthis,
int arg1) {
  ((QTabBar*)qthis)->currentChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 106, column 10>
//   // proto:  void QTabBar::setTabTextColor(int index, const QColor & color);
// _ZN7QTabBar15setTabTextColorEiRK6QColor setTabTextColor(int, const class QColor &)
extern "C"
void
C_ZN7QTabBar15setTabTextColorEiRK6QColor(void *qthis,
int arg1,
const QColor* arg2) {
  ((QTabBar*)qthis)->setTabTextColor(arg1,
*((const QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 97, column 10>
//   // proto:  void QTabBar::moveTab(int from, int to);
// _ZN7QTabBar7moveTabEii moveTab(int, int)
extern "C"
void
C_ZN7QTabBar7moveTabEii(void *qthis,
int arg1,
int arg2) {
  ((QTabBar*)qthis)->moveTab(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 149, column 14>
//   // proto:  QWidget * QTabBar::tabButton(int index, QTabBar::ButtonPosition position);
// _ZNK7QTabBar9tabButtonEiNS_14ButtonPositionE tabButton(int, enum QTabBar::ButtonPosition)
extern "C"
void*
C_ZNK7QTabBar9tabButtonEiNS_14ButtonPositionE(void *qthis,
int arg1,
QTabBar::ButtonPosition arg2) {
  auto ret =
  ((QTabBar*)qthis)->tabButton(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 152, column 10>
//   // proto:  void QTabBar::setSelectionBehaviorOnRemove(QTabBar::SelectionBehavior behavior);
// _ZN7QTabBar28setSelectionBehaviorOnRemoveENS_17SelectionBehaviorE setSelectionBehaviorOnRemove(enum QTabBar::SelectionBehavior)
extern "C"
void
C_ZN7QTabBar28setSelectionBehaviorOnRemoveENS_17SelectionBehaviorE(void *qthis,
QTabBar::SelectionBehavior arg1) {
  ((QTabBar*)qthis)->setSelectionBehaviorOnRemove(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 125, column 14>
//   // proto:  QVariant QTabBar::tabData(int index);
// _ZNK7QTabBar7tabDataEi tabData(int)
extern "C"
QVariant*
C_ZNK7QTabBar7tabDataEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabBar*)qthis)->tabData(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 137, column 10>
//   // proto:  bool QTabBar::drawBase();
// _ZNK7QTabBar8drawBaseEv drawBase()
extern "C"
bool
C_ZNK7QTabBar8drawBaseEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->drawBase();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 130, column 9>
//   // proto:  int QTabBar::currentIndex();
// _ZNK7QTabBar12currentIndexEv currentIndex()
extern "C"
int
C_ZNK7QTabBar12currentIndexEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->currentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 136, column 10>
//   // proto:  void QTabBar::setDrawBase(bool drawTheBase);
// _ZN7QTabBar11setDrawBaseEb setDrawBase(_Bool)
extern "C"
void
C_ZN7QTabBar11setDrawBaseEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setDrawBase(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 143, column 10>
//   // proto:  void QTabBar::setUsesScrollButtons(bool useButtons);
// _ZN7QTabBar20setUsesScrollButtonsEb setUsesScrollButtons(_Bool)
extern "C"
void
C_ZN7QTabBar20setUsesScrollButtonsEb(void *qthis,
bool arg1) {
  ((QTabBar*)qthis)->setUsesScrollButtons(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 133, column 11>
//   // proto:  QSize QTabBar::sizeHint();
// _ZNK7QTabBar8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK7QTabBar8sizeHintEv(void *qthis) {
  auto ret =
  ((QTabBar*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 140, column 10>
//   // proto:  void QTabBar::setIconSize(const QSize & size);
// _ZN7QTabBar11setIconSizeERK5QSize setIconSize(const class QSize &)
extern "C"
void
C_ZN7QTabBar11setIconSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QTabBar*)qthis)->setIconSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 103, column 10>
//   // proto:  void QTabBar::setTabText(int index, const QString & text);
// _ZN7QTabBar10setTabTextEiRK7QString setTabText(int, const class QString &)
extern "C"
void
C_ZN7QTabBar10setTabTextEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QTabBar*)qthis)->setTabText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabbar.h', line 175, column 10>
//   // proto:  void QTabBar::tabMoved(int from, int to);
// _ZN7QTabBar8tabMovedEii tabMoved(int, int)
extern "C"
void
C_ZN7QTabBar8tabMovedEii(void *qthis,
int arg1,
int arg2) {
  ((QTabBar*)qthis)->tabMoved(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QTabBar_SlotProxy here
class QTabBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTabBar_SlotProxy():QObject(){}

public slots:
  // tabBarClicked(int)
  void slot_proxy_func__ZN7QTabBar13tabBarClickedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar13tabBarClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabBarDoubleClicked(int)
  void slot_proxy_func__ZN7QTabBar19tabBarDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar19tabBarDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabCloseRequested(int)
  void slot_proxy_func__ZN7QTabBar17tabCloseRequestedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar17tabCloseRequestedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabMoved(int, int)
  void slot_proxy_func__ZN7QTabBar8tabMovedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN7QTabBar8tabMovedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN7QTabBar14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN7QTabBar14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtabbar.moc"

extern "C" {
  QTabBar_SlotProxy* QTabBar_SlotProxy_new()
  {
    return new QTabBar_SlotProxy();
  }
};

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar13tabBarClickedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar13tabBarClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar13tabBarClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar13tabBarClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar13tabBarClickedEi = (decltype(that->slot_func__ZN7QTabBar13tabBarClickedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabBarClicked(int)), that, SLOT(slot_proxy_func__ZN7QTabBar13tabBarClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar13tabBarClickedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar19tabBarDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar19tabBarDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar19tabBarDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar19tabBarDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar19tabBarDoubleClickedEi = (decltype(that->slot_func__ZN7QTabBar19tabBarDoubleClickedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabBarDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN7QTabBar19tabBarDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar19tabBarDoubleClickedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar17tabCloseRequestedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar17tabCloseRequestedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar17tabCloseRequestedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar17tabCloseRequestedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar17tabCloseRequestedEi = (decltype(that->slot_func__ZN7QTabBar17tabCloseRequestedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabCloseRequested(int)), that, SLOT(slot_proxy_func__ZN7QTabBar17tabCloseRequestedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar17tabCloseRequestedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar8tabMovedEii(int arg0, int arg1) {
  if (this->slot_func__ZN7QTabBar8tabMovedEii != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar8tabMovedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar8tabMovedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar8tabMovedEii = (decltype(that->slot_func__ZN7QTabBar8tabMovedEii))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(tabMoved(int, int)), that, SLOT(slot_proxy_func__ZN7QTabBar8tabMovedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar8tabMovedEii(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabBar_SlotProxy::slot_proxy_func__ZN7QTabBar14currentChangedEi(int arg0) {
  if (this->slot_func__ZN7QTabBar14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QTabBar14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabBar_SlotProxy_connect__ZN7QTabBar14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QTabBar14currentChangedEi = (decltype(that->slot_func__ZN7QTabBar14currentChangedEi))ffifptr;
  QObject::connect((QTabBar*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN7QTabBar14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QTabBar_SlotProxy_disconnect__ZN7QTabBar14currentChangedEi(QTabBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

