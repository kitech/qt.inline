// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qtabwidget.h
// dst-file: /src/widgets/qtabwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtabwidget.h>


#include <qstring.h>
#include <qicon.h>
#include <qsize.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qtabwidget_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTabWidget_Class_Size()
{
  return sizeof(QTabWidget);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 146, column 10>
//   // proto:  void QTabWidget::setCurrentWidget(QWidget * widget);
// _ZN10QTabWidget16setCurrentWidgetEP7QWidget setCurrentWidget(class QWidget *)
extern "C"
void
C_ZN10QTabWidget16setCurrentWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QTabWidget*)qthis)->setCurrentWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 114, column 14>
//   // proto:  QTabWidget::TabShape QTabWidget::tabShape();
// _ZNK10QTabWidget8tabShapeEv tabShape()
extern "C"
QTabWidget::TabShape
C_ZNK10QTabWidget8tabShapeEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->tabShape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 99, column 9>
//   // proto:  int QTabWidget::count();
// _ZNK10QTabWidget5countEv count()
extern "C"
int
C_ZNK10QTabWidget5countEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 150, column 10>
//   // proto:  void QTabWidget::tabCloseRequested(int index);
// _ZN10QTabWidget17tabCloseRequestedEi tabCloseRequested(int)
extern "C"
void
C_ZN10QTabWidget17tabCloseRequestedEi(void *qthis,
int arg1) {
  ((QTabWidget*)qthis)->tabCloseRequested(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 135, column 10>
//   // proto:  void QTabWidget::setDocumentMode(bool set);
// _ZN10QTabWidget15setDocumentModeEb setDocumentMode(_Bool)
extern "C"
void
C_ZN10QTabWidget15setDocumentModeEb(void *qthis,
bool arg1) {
  ((QTabWidget*)qthis)->setDocumentMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 119, column 9>
//   // proto:  int QTabWidget::heightForWidth(int width);
// _ZNK10QTabWidget14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK10QTabWidget14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabWidget*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 68, column 9>
//   // proto:  int QTabWidget::addTab(QWidget * widget, const QString & );
// _ZN10QTabWidget6addTabEP7QWidgetRK7QString addTab(class QWidget *, const class QString &)
extern "C"
int
C_ZN10QTabWidget6addTabEP7QWidgetRK7QString(void *qthis,
QWidget * arg1,
const QString* arg2) {
  auto ret =
  ((QTabWidget*)qthis)->addTab(arg1,
*((const QString*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 79, column 13>
//   // proto:  QString QTabWidget::tabText(int index);
// _ZNK10QTabWidget7tabTextEi tabText(int)
extern "C"
QString*
C_ZNK10QTabWidget7tabTextEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabWidget*)qthis)->tabText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 140, column 10>
//   // proto:  void QTabWidget::clear();
// _ZN10QTabWidget5clearEv clear()
extern "C"
void
C_ZN10QTabWidget5clearEv(void *qthis) {
  ((QTabWidget*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 120, column 10>
//   // proto:  bool QTabWidget::hasHeightForWidth();
// _ZNK10QTabWidget17hasHeightForWidthEv hasHeightForWidth()
extern "C"
bool
C_ZNK10QTabWidget17hasHeightForWidthEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->hasHeightForWidth();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 142, column 14>
//   // proto:  QTabBar * QTabWidget::tabBar();
// _ZNK10QTabWidget6tabBarEv tabBar()
extern "C"
void*
C_ZNK10QTabWidget6tabBarEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->tabBar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 106, column 10>
//   // proto:  bool QTabWidget::tabsClosable();
// _ZNK10QTabWidget12tabsClosableEv tabsClosable()
extern "C"
bool
C_ZNK10QTabWidget12tabsClosableEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->tabsClosable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 72, column 9>
//   // proto:  int QTabWidget::insertTab(int index, QWidget * widget, const QIcon & icon, const QString & label);
// _ZN10QTabWidget9insertTabEiP7QWidgetRK5QIconRK7QString insertTab(int, class QWidget *, const class QIcon &, const class QString &)
extern "C"
int
C_ZN10QTabWidget9insertTabEiP7QWidgetRK5QIconRK7QString(void *qthis,
int arg1,
QWidget * arg2,
const QIcon* arg3,
const QString* arg4) {
  auto ret =
  ((QTabWidget*)qthis)->insertTab(arg1,
arg2,
*((const QIcon*)arg3),
*((const QString*)arg4));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 123, column 15>
//   // proto:  QWidget * QTabWidget::cornerWidget(Qt::Corner corner);
// _ZNK10QTabWidget12cornerWidgetEN2Qt6CornerE cornerWidget(Qt::Corner)
extern "C"
void*
C_ZNK10QTabWidget12cornerWidgetEN2Qt6CornerE(void *qthis,
Qt::Corner* arg1) {
  auto ret =
  ((QTabWidget*)qthis)->cornerWidget(*((Qt::Corner*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 69, column 9>
//   // proto:  int QTabWidget::addTab(QWidget * widget, const QIcon & icon, const QString & label);
// _ZN10QTabWidget6addTabEP7QWidgetRK5QIconRK7QString addTab(class QWidget *, const class QIcon &, const class QString &)
extern "C"
int
C_ZN10QTabWidget6addTabEP7QWidgetRK5QIconRK7QString(void *qthis,
QWidget * arg1,
const QIcon* arg2,
const QString* arg3) {
  auto ret =
  ((QTabWidget*)qthis)->addTab(arg1,
*((const QIcon*)arg2),
*((const QString*)arg3));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 132, column 10>
//   // proto:  void QTabWidget::setUsesScrollButtons(bool useButtons);
// _ZN10QTabWidget20setUsesScrollButtonsEb setUsesScrollButtons(_Bool)
extern "C"
void
C_ZN10QTabWidget20setUsesScrollButtonsEb(void *qthis,
bool arg1) {
  ((QTabWidget*)qthis)->setUsesScrollButtons(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 51, column 5>
//   // proto:  const QMetaObject * QTabWidget::metaObject();
// _ZNK10QTabWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QTabWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 87, column 13>
//   // proto:  QString QTabWidget::tabToolTip(int index);
// _ZNK10QTabWidget10tabToolTipEi tabToolTip(int)
extern "C"
QString*
C_ZNK10QTabWidget10tabToolTipEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabWidget*)qthis)->tabToolTip(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 96, column 14>
//   // proto:  QWidget * QTabWidget::currentWidget();
// _ZNK10QTabWidget13currentWidgetEv currentWidget()
extern "C"
void*
C_ZNK10QTabWidget13currentWidgetEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->currentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 129, column 10>
//   // proto:  void QTabWidget::setIconSize(const QSize & size);
// _ZN10QTabWidget11setIconSizeERK5QSize setIconSize(const class QSize &)
extern "C"
void
C_ZN10QTabWidget11setIconSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QTabWidget*)qthis)->setIconSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 126, column 10>
//   // proto:  void QTabWidget::setElideMode(Qt::TextElideMode );
// _ZN10QTabWidget12setElideModeEN2Qt13TextElideModeE setElideMode(Qt::TextElideMode)
extern "C"
void
C_ZN10QTabWidget12setElideModeEN2Qt13TextElideModeE(void *qthis,
Qt::TextElideMode* arg1) {
  ((QTabWidget*)qthis)->setElideMode(*((Qt::TextElideMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 97, column 14>
//   // proto:  QWidget * QTabWidget::widget(int index);
// _ZNK10QTabWidget6widgetEi widget(int)
extern "C"
void*
C_ZNK10QTabWidget6widgetEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabWidget*)qthis)->widget(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 110, column 10>
//   // proto:  void QTabWidget::setMovable(bool movable);
// _ZN10QTabWidget10setMovableEb setMovable(_Bool)
extern "C"
void
C_ZN10QTabWidget10setMovableEb(void *qthis,
bool arg1) {
  ((QTabWidget*)qthis)->setMovable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 134, column 10>
//   // proto:  bool QTabWidget::documentMode();
// _ZNK10QTabWidget12documentModeEv documentMode()
extern "C"
bool
C_ZNK10QTabWidget12documentModeEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->documentMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 92, column 13>
//   // proto:  QString QTabWidget::tabWhatsThis(int index);
// _ZNK10QTabWidget12tabWhatsThisEi tabWhatsThis(int)
extern "C"
QString*
C_ZNK10QTabWidget12tabWhatsThisEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabWidget*)qthis)->tabWhatsThis(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 151, column 10>
//   // proto:  void QTabWidget::tabBarClicked(int index);
// _ZN10QTabWidget13tabBarClickedEi tabBarClicked(int)
extern "C"
void
C_ZN10QTabWidget13tabBarClickedEi(void *qthis,
int arg1) {
  ((QTabWidget*)qthis)->tabBarClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 80, column 10>
//   // proto:  void QTabWidget::setTabText(int index, const QString & );
// _ZN10QTabWidget10setTabTextEiRK7QString setTabText(int, const class QString &)
extern "C"
void
C_ZN10QTabWidget10setTabTextEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QTabWidget*)qthis)->setTabText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 65, column 14>
//   // proto:  void QTabWidget::QTabWidget(QWidget * parent);
extern "C"
QTabWidget*
C_ZN10QTabWidgetC2EP7QWidget(QWidget * arg1) {
  auto ret = new QTabWidget(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 137, column 10>
//   // proto:  bool QTabWidget::tabBarAutoHide();
// _ZNK10QTabWidget14tabBarAutoHideEv tabBarAutoHide()
extern "C"
bool
C_ZNK10QTabWidget14tabBarAutoHideEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->tabBarAutoHide();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 149, column 10>
//   // proto:  void QTabWidget::currentChanged(int index);
// _ZN10QTabWidget14currentChangedEi currentChanged(int)
extern "C"
void
C_ZN10QTabWidget14currentChangedEi(void *qthis,
int arg1) {
  ((QTabWidget*)qthis)->currentChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 83, column 10>
//   // proto:  void QTabWidget::setTabIcon(int index, const QIcon & icon);
// _ZN10QTabWidget10setTabIconEiRK5QIcon setTabIcon(int, const class QIcon &)
extern "C"
void
C_ZN10QTabWidget10setTabIconEiRK5QIcon(void *qthis,
int arg1,
const QIcon* arg2) {
  ((QTabWidget*)qthis)->setTabIcon(arg1,
*((const QIcon*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 82, column 11>
//   // proto:  QIcon QTabWidget::tabIcon(int index);
// _ZNK10QTabWidget7tabIconEi tabIcon(int)
extern "C"
QIcon*
C_ZNK10QTabWidget7tabIconEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabWidget*)qthis)->tabIcon(arg1);
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 103, column 17>
//   // proto:  QTabWidget::TabPosition QTabWidget::tabPosition();
// _ZNK10QTabWidget11tabPositionEv tabPosition()
extern "C"
QTabWidget::TabPosition
C_ZNK10QTabWidget11tabPositionEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->tabPosition();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 76, column 10>
//   // proto:  bool QTabWidget::isTabEnabled(int index);
// _ZNK10QTabWidget12isTabEnabledEi isTabEnabled(int)
extern "C"
bool
C_ZNK10QTabWidget12isTabEnabledEi(void *qthis,
int arg1) {
  auto ret =
  ((QTabWidget*)qthis)->isTabEnabled(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 138, column 10>
//   // proto:  void QTabWidget::setTabBarAutoHide(bool enabled);
// _ZN10QTabWidget17setTabBarAutoHideEb setTabBarAutoHide(_Bool)
extern "C"
void
C_ZN10QTabWidget17setTabBarAutoHideEb(void *qthis,
bool arg1) {
  ((QTabWidget*)qthis)->setTabBarAutoHide(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 128, column 11>
//   // proto:  QSize QTabWidget::iconSize();
// _ZNK10QTabWidget8iconSizeEv iconSize()
extern "C"
QSize*
C_ZNK10QTabWidget8iconSizeEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->iconSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 107, column 10>
//   // proto:  void QTabWidget::setTabsClosable(bool closeable);
// _ZN10QTabWidget15setTabsClosableEb setTabsClosable(_Bool)
extern "C"
void
C_ZN10QTabWidget15setTabsClosableEb(void *qthis,
bool arg1) {
  ((QTabWidget*)qthis)->setTabsClosable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 118, column 11>
//   // proto:  QSize QTabWidget::minimumSizeHint();
// _ZNK10QTabWidget15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK10QTabWidget15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 145, column 10>
//   // proto:  void QTabWidget::setCurrentIndex(int index);
// _ZN10QTabWidget15setCurrentIndexEi setCurrentIndex(int)
extern "C"
void
C_ZN10QTabWidget15setCurrentIndexEi(void *qthis,
int arg1) {
  ((QTabWidget*)qthis)->setCurrentIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 104, column 10>
//   // proto:  void QTabWidget::setTabPosition(QTabWidget::TabPosition );
// _ZN10QTabWidget14setTabPositionENS_11TabPositionE setTabPosition(enum QTabWidget::TabPosition)
extern "C"
void
C_ZN10QTabWidget14setTabPositionENS_11TabPositionE(void *qthis,
QTabWidget::TabPosition arg1) {
  ((QTabWidget*)qthis)->setTabPosition(arg1);
}
//   // proto:  void QTabWidget::~QTabWidget();
extern "C"
void C_ZN10QTabWidgetD2Ev(void *qthis) {
  delete (QTabWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 91, column 10>
//   // proto:  void QTabWidget::setTabWhatsThis(int index, const QString & text);
// _ZN10QTabWidget15setTabWhatsThisEiRK7QString setTabWhatsThis(int, const class QString &)
extern "C"
void
C_ZN10QTabWidget15setTabWhatsThisEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QTabWidget*)qthis)->setTabWhatsThis(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 117, column 11>
//   // proto:  QSize QTabWidget::sizeHint();
// _ZNK10QTabWidget8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK10QTabWidget8sizeHintEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 115, column 10>
//   // proto:  void QTabWidget::setTabShape(QTabWidget::TabShape s);
// _ZN10QTabWidget11setTabShapeENS_8TabShapeE setTabShape(enum QTabWidget::TabShape)
extern "C"
void
C_ZN10QTabWidget11setTabShapeENS_8TabShapeE(void *qthis,
QTabWidget::TabShape arg1) {
  ((QTabWidget*)qthis)->setTabShape(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 98, column 9>
//   // proto:  int QTabWidget::indexOf(QWidget * widget);
// _ZNK10QTabWidget7indexOfEP7QWidget indexOf(class QWidget *)
extern "C"
int
C_ZNK10QTabWidget7indexOfEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QTabWidget*)qthis)->indexOf(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 74, column 10>
//   // proto:  void QTabWidget::removeTab(int index);
// _ZN10QTabWidget9removeTabEi removeTab(int)
extern "C"
void
C_ZN10QTabWidget9removeTabEi(void *qthis,
int arg1) {
  ((QTabWidget*)qthis)->removeTab(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 86, column 10>
//   // proto:  void QTabWidget::setTabToolTip(int index, const QString & tip);
// _ZN10QTabWidget13setTabToolTipEiRK7QString setTabToolTip(int, const class QString &)
extern "C"
void
C_ZN10QTabWidget13setTabToolTipEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QTabWidget*)qthis)->setTabToolTip(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 109, column 10>
//   // proto:  bool QTabWidget::isMovable();
// _ZNK10QTabWidget9isMovableEv isMovable()
extern "C"
bool
C_ZNK10QTabWidget9isMovableEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->isMovable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 131, column 10>
//   // proto:  bool QTabWidget::usesScrollButtons();
// _ZNK10QTabWidget17usesScrollButtonsEv usesScrollButtons()
extern "C"
bool
C_ZNK10QTabWidget17usesScrollButtonsEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->usesScrollButtons();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 152, column 10>
//   // proto:  void QTabWidget::tabBarDoubleClicked(int index);
// _ZN10QTabWidget19tabBarDoubleClickedEi tabBarDoubleClicked(int)
extern "C"
void
C_ZN10QTabWidget19tabBarDoubleClickedEi(void *qthis,
int arg1) {
  ((QTabWidget*)qthis)->tabBarDoubleClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 95, column 9>
//   // proto:  int QTabWidget::currentIndex();
// _ZNK10QTabWidget12currentIndexEv currentIndex()
extern "C"
int
C_ZNK10QTabWidget12currentIndexEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->currentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 71, column 9>
//   // proto:  int QTabWidget::insertTab(int index, QWidget * widget, const QString & );
// _ZN10QTabWidget9insertTabEiP7QWidgetRK7QString insertTab(int, class QWidget *, const class QString &)
extern "C"
int
C_ZN10QTabWidget9insertTabEiP7QWidgetRK7QString(void *qthis,
int arg1,
QWidget * arg2,
const QString* arg3) {
  auto ret =
  ((QTabWidget*)qthis)->insertTab(arg1,
arg2,
*((const QString*)arg3));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 125, column 23>
//   // proto:  Qt::TextElideMode QTabWidget::elideMode();
// _ZNK10QTabWidget9elideModeEv elideMode()
extern "C"
Qt::TextElideMode
C_ZNK10QTabWidget9elideModeEv(void *qthis) {
  auto ret =
  ((QTabWidget*)qthis)->elideMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 122, column 10>
//   // proto:  void QTabWidget::setCornerWidget(QWidget * w, Qt::Corner corner);
// _ZN10QTabWidget15setCornerWidgetEP7QWidgetN2Qt6CornerE setCornerWidget(class QWidget *, Qt::Corner)
extern "C"
void
C_ZN10QTabWidget15setCornerWidgetEP7QWidgetN2Qt6CornerE(void *qthis,
QWidget * arg1,
Qt::Corner* arg2) {
  ((QTabWidget*)qthis)->setCornerWidget(arg1,
*((Qt::Corner*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtabwidget.h', line 77, column 10>
//   // proto:  void QTabWidget::setTabEnabled(int index, bool );
// _ZN10QTabWidget13setTabEnabledEib setTabEnabled(int, _Bool)
extern "C"
void
C_ZN10QTabWidget13setTabEnabledEib(void *qthis,
int arg1,
bool arg2) {
  ((QTabWidget*)qthis)->setTabEnabled(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QTabWidget_SlotProxy here
class QTabWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTabWidget_SlotProxy():QObject(){}

public slots:
  // tabBarDoubleClicked(int)
  void slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget19tabBarDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabBarClicked(int)
  void slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget13tabBarClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // tabCloseRequested(int)
  void slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget17tabCloseRequestedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN10QTabWidget14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtabwidget.moc"

extern "C" {
  QTabWidget_SlotProxy* QTabWidget_SlotProxy_new()
  {
    return new QTabWidget_SlotProxy();
  }
};

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget19tabBarDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi = (decltype(that->slot_func__ZN10QTabWidget19tabBarDoubleClickedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabBarDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget19tabBarDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget19tabBarDoubleClickedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget13tabBarClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget13tabBarClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget13tabBarClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget13tabBarClickedEi = (decltype(that->slot_func__ZN10QTabWidget13tabBarClickedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabBarClicked(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget13tabBarClickedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget13tabBarClickedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget17tabCloseRequestedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget17tabCloseRequestedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget17tabCloseRequestedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget17tabCloseRequestedEi = (decltype(that->slot_func__ZN10QTabWidget17tabCloseRequestedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(tabCloseRequested(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget17tabCloseRequestedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget17tabCloseRequestedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTabWidget_SlotProxy::slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0) {
  if (this->slot_func__ZN10QTabWidget14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QTabWidget14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QTabWidget_SlotProxy_connect__ZN10QTabWidget14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTabWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QTabWidget14currentChangedEi = (decltype(that->slot_func__ZN10QTabWidget14currentChangedEi))ffifptr;
  QObject::connect((QTabWidget*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN10QTabWidget14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QTabWidget_SlotProxy_disconnect__ZN10QTabWidget14currentChangedEi(QTabWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

