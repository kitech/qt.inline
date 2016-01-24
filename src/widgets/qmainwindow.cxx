// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qmainwindow.h
// dst-file: /src/widgets/qmainwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmainwindow.h>


#include <qnamespace.h>
#include <qtabwidget.h>
#include <qbytearray.h>
#include <qsize.h>
#include <qlist.h>
#include <qapplication.h>
// <= header block end

// main block begin =>
void __keep_qmainwindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMainWindow_Class_Size()
{
  return sizeof(QMainWindow);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 125, column 17>
//   // proto:  QStatusBar * QMainWindow::statusBar();
// _ZNK11QMainWindow9statusBarEv statusBar()
extern "C"
void*
C_ZNK11QMainWindow9statusBarEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->statusBar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 178, column 10>
//   // proto:  void QMainWindow::setAnimated(bool enabled);
// _ZN11QMainWindow11setAnimatedEb setAnimated(_Bool)
extern "C"
void
C_ZN11QMainWindow11setAnimatedEb(void *qthis,
bool arg1) {
  ((QMainWindow*)qthis)->setAnimated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 179, column 10>
//   // proto:  void QMainWindow::setDockNestingEnabled(bool enabled);
// _ZN11QMainWindow21setDockNestingEnabledEb setDockNestingEnabled(_Bool)
extern "C"
void
C_ZN11QMainWindow21setDockNestingEnabledEb(void *qthis,
bool arg1) {
  ((QMainWindow*)qthis)->setDockNestingEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 135, column 10>
//   // proto:  void QMainWindow::setCorner(Qt::Corner corner, Qt::DockWidgetArea area);
// _ZN11QMainWindow9setCornerEN2Qt6CornerENS0_14DockWidgetAreaE setCorner(Qt::Corner, Qt::DockWidgetArea)
extern "C"
void
C_ZN11QMainWindow9setCornerEN2Qt6CornerENS0_14DockWidgetAreaE(void *qthis,
Qt::Corner* arg1,
Qt::DockWidgetArea* arg2) {
  ((QMainWindow*)qthis)->setCorner(*((Qt::Corner*)arg1),
*((Qt::DockWidgetArea*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 152, column 21>
//   // proto:  Qt::ToolBarArea QMainWindow::toolBarArea(QToolBar * toolbar);
// _ZNK11QMainWindow11toolBarAreaEP8QToolBar toolBarArea(class QToolBar *)
extern "C"
Qt::ToolBarArea
C_ZNK11QMainWindow11toolBarAreaEP8QToolBar(void *qthis,
QToolBar * arg1) {
  auto ret =
  ((QMainWindow*)qthis)->toolBarArea(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 186, column 10>
//   // proto:  void QMainWindow::iconSizeChanged(const QSize & iconSize);
// _ZN11QMainWindow15iconSizeChangedERK5QSize iconSizeChanged(const class QSize &)
extern "C"
void
C_ZN11QMainWindow15iconSizeChangedERK5QSize(void *qthis,
const QSize* arg1) {
  ((QMainWindow*)qthis)->iconSizeChanged(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 166, column 24>
//   // proto:  Qt::DockWidgetArea QMainWindow::dockWidgetArea(QDockWidget * dockwidget);
// _ZNK11QMainWindow14dockWidgetAreaEP11QDockWidget dockWidgetArea(class QDockWidget *)
extern "C"
Qt::DockWidgetArea
C_ZNK11QMainWindow14dockWidgetAreaEP11QDockWidget(void *qthis,
QDockWidget * arg1) {
  auto ret =
  ((QMainWindow*)qthis)->dockWidgetArea(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 159, column 10>
//   // proto:  void QMainWindow::splitDockWidget(QDockWidget * after, QDockWidget * dockwidget, Qt::Orientation orientation);
// _ZN11QMainWindow15splitDockWidgetEP11QDockWidgetS1_N2Qt11OrientationE splitDockWidget(class QDockWidget *, class QDockWidget *, Qt::Orientation)
extern "C"
void
C_ZN11QMainWindow15splitDockWidgetEP11QDockWidgetS1_N2Qt11OrientationE(void *qthis,
QDockWidget * arg1,
QDockWidget * arg2,
Qt::Orientation* arg3) {
  ((QMainWindow*)qthis)->splitDockWidget(arg1,
arg2,
*((Qt::Orientation*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 150, column 10>
//   // proto:  bool QMainWindow::unifiedTitleAndToolBarOnMac();
// _ZNK11QMainWindow27unifiedTitleAndToolBarOnMacEv unifiedTitleAndToolBarOnMac()
extern "C"
bool
C_ZNK11QMainWindow27unifiedTitleAndToolBarOnMacEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->unifiedTitleAndToolBarOnMac();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 156, column 10>
//   // proto:  void QMainWindow::addDockWidget(Qt::DockWidgetArea area, QDockWidget * dockwidget);
// _ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidget addDockWidget(Qt::DockWidgetArea, class QDockWidget *)
extern "C"
void
C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidget(void *qthis,
Qt::DockWidgetArea* arg1,
QDockWidget * arg2) {
  ((QMainWindow*)qthis)->addDockWidget(*((Qt::DockWidgetArea*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 120, column 15>
//   // proto:  QWidget * QMainWindow::menuWidget();
// _ZNK11QMainWindow10menuWidgetEv menuWidget()
extern "C"
void*
C_ZNK11QMainWindow10menuWidgetEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->menuWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 161, column 10>
//   // proto:  void QMainWindow::tabifyDockWidget(QDockWidget * first, QDockWidget * second);
// _ZN11QMainWindow16tabifyDockWidgetEP11QDockWidgetS1_ tabifyDockWidget(class QDockWidget *, class QDockWidget *)
extern "C"
void
C_ZN11QMainWindow16tabifyDockWidgetEP11QDockWidgetS1_(void *qthis,
QDockWidget * arg1,
QDockWidget * arg2) {
  ((QMainWindow*)qthis)->tabifyDockWidget(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 107, column 29>
//   // proto:  QTabWidget::TabPosition QMainWindow::tabPosition(Qt::DockWidgetArea area);
// _ZNK11QMainWindow11tabPositionEN2Qt14DockWidgetAreaE tabPosition(Qt::DockWidgetArea)
extern "C"
QTabWidget::TabPosition
C_ZNK11QMainWindow11tabPositionEN2Qt14DockWidgetAreaE(void *qthis,
Qt::DockWidgetArea* arg1) {
  auto ret =
  ((QMainWindow*)qthis)->tabPosition(*((Qt::DockWidgetArea*)arg1));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 85, column 14>
//   // proto:  void QMainWindow::QMainWindow(QWidget * parent, Qt::WindowFlags flags);
extern "C"
QMainWindow*
C_ZN11QMainWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QMainWindow(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 108, column 10>
//   // proto:  void QMainWindow::setTabPosition(Qt::DockWidgetAreas areas, QTabWidget::TabPosition tabPosition);
// _ZN11QMainWindow14setTabPositionE6QFlagsIN2Qt14DockWidgetAreaEEN10QTabWidget11TabPositionE setTabPosition(Qt::DockWidgetAreas, class QTabWidget::TabPosition)
extern "C"
void
C_ZN11QMainWindow14setTabPositionE6QFlagsIN2Qt14DockWidgetAreaEEN10QTabWidget11TabPositionE(void *qthis,
Qt::DockWidgetAreas* arg1,
QTabWidget::TabPosition* arg2) {
  ((QMainWindow*)qthis)->setTabPosition(*((Qt::DockWidgetAreas*)arg1),
*((QTabWidget::TabPosition*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 101, column 10>
//   // proto:  void QMainWindow::setDocumentMode(bool enabled);
// _ZN11QMainWindow15setDocumentModeEb setDocumentMode(_Bool)
extern "C"
void
C_ZN11QMainWindow15setDocumentModeEb(void *qthis,
bool arg1) {
  ((QMainWindow*)qthis)->setDocumentMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 129, column 14>
//   // proto:  QWidget * QMainWindow::centralWidget();
// _ZNK11QMainWindow13centralWidgetEv centralWidget()
extern "C"
void*
C_ZNK11QMainWindow13centralWidgetEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->centralWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 106, column 10>
//   // proto:  void QMainWindow::setTabShape(QTabWidget::TabShape tabShape);
// _ZN11QMainWindow11setTabShapeEN10QTabWidget8TabShapeE setTabShape(class QTabWidget::TabShape)
extern "C"
void
C_ZN11QMainWindow11setTabShapeEN10QTabWidget8TabShapeE(void *qthis,
QTabWidget::TabShape* arg1) {
  ((QMainWindow*)qthis)->setTabShape(*((QTabWidget::TabShape*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 163, column 10>
//   // proto:  void QMainWindow::removeDockWidget(QDockWidget * dockwidget);
// _ZN11QMainWindow16removeDockWidgetEP11QDockWidget removeDockWidget(class QDockWidget *)
extern "C"
void
C_ZN11QMainWindow16removeDockWidgetEP11QDockWidget(void *qthis,
QDockWidget * arg1) {
  ((QMainWindow*)qthis)->removeDockWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 95, column 10>
//   // proto:  bool QMainWindow::isAnimated();
// _ZNK11QMainWindow10isAnimatedEv isAnimated()
extern "C"
bool
C_ZNK11QMainWindow10isAnimatedEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->isAnimated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 145, column 15>
//   // proto:  QToolBar * QMainWindow::addToolBar(const QString & title);
// _ZN11QMainWindow10addToolBarERK7QString addToolBar(const class QString &)
extern "C"
void*
C_ZN11QMainWindow10addToolBarERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMainWindow*)qthis)->addToolBar(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 89, column 10>
//   // proto:  void QMainWindow::setIconSize(const QSize & iconSize);
// _ZN11QMainWindow11setIconSizeERK5QSize setIconSize(const class QSize &)
extern "C"
void
C_ZN11QMainWindow11setIconSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QMainWindow*)qthis)->setIconSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 169, column 16>
//   // proto:  QByteArray QMainWindow::saveState(int version);
// _ZNK11QMainWindow9saveStateEi saveState(int)
extern "C"
QByteArray*
C_ZNK11QMainWindow9saveStateEi(void *qthis,
int arg1) {
  auto ret =
  ((QMainWindow*)qthis)->saveState(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 170, column 10>
//   // proto:  bool QMainWindow::restoreState(const QByteArray & state, int version);
// _ZN11QMainWindow12restoreStateERK10QByteArrayi restoreState(const class QByteArray &, int)
extern "C"
bool
C_ZN11QMainWindow12restoreStateERK10QByteArrayi(void *qthis,
const QByteArray* arg1,
int arg2) {
  auto ret =
  ((QMainWindow*)qthis)->restoreState(*((const QByteArray*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 157, column 10>
//   // proto:  void QMainWindow::addDockWidget(Qt::DockWidgetArea area, QDockWidget * dockwidget, Qt::Orientation orientation);
// _ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidgetNS0_11OrientationE addDockWidget(Qt::DockWidgetArea, class QDockWidget *, Qt::Orientation)
extern "C"
void
C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidgetNS0_11OrientationE(void *qthis,
Qt::DockWidgetArea* arg1,
QDockWidget * arg2,
Qt::Orientation* arg3) {
  ((QMainWindow*)qthis)->addDockWidget(*((Qt::DockWidgetArea*)arg1),
arg2,
*((Qt::Orientation*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 146, column 10>
//   // proto:  void QMainWindow::insertToolBar(QToolBar * before, QToolBar * toolbar);
// _ZN11QMainWindow13insertToolBarEP8QToolBarS1_ insertToolBar(class QToolBar *, class QToolBar *)
extern "C"
void
C_ZN11QMainWindow13insertToolBarEP8QToolBarS1_(void *qthis,
QToolBar * arg1,
QToolBar * arg2) {
  ((QMainWindow*)qthis)->insertToolBar(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 173, column 20>
//   // proto:  QMenu * QMainWindow::createPopupMenu();
// _ZN11QMainWindow15createPopupMenuEv createPopupMenu()
extern "C"
void*
C_ZN11QMainWindow15createPopupMenuEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->createPopupMenu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 182, column 10>
//   // proto:  void QMainWindow::setUnifiedTitleAndToolBarOnMac(bool set);
// _ZN11QMainWindow30setUnifiedTitleAndToolBarOnMacEb setUnifiedTitleAndToolBarOnMac(_Bool)
extern "C"
void
C_ZN11QMainWindow30setUnifiedTitleAndToolBarOnMacEb(void *qthis,
bool arg1) {
  ((QMainWindow*)qthis)->setUnifiedTitleAndToolBarOnMac(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 144, column 10>
//   // proto:  void QMainWindow::addToolBar(QToolBar * toolbar);
// _ZN11QMainWindow10addToolBarEP8QToolBar addToolBar(class QToolBar *)
extern "C"
void
C_ZN11QMainWindow10addToolBarEP8QToolBar(void *qthis,
QToolBar * arg1) {
  ((QMainWindow*)qthis)->addToolBar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 91, column 25>
//   // proto:  Qt::ToolButtonStyle QMainWindow::toolButtonStyle();
// _ZNK11QMainWindow15toolButtonStyleEv toolButtonStyle()
extern "C"
Qt::ToolButtonStyle
C_ZNK11QMainWindow15toolButtonStyleEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->toolButtonStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 148, column 10>
//   // proto:  void QMainWindow::removeToolBarBreak(QToolBar * before);
// _ZN11QMainWindow18removeToolBarBreakEP8QToolBar removeToolBarBreak(class QToolBar *)
extern "C"
void
C_ZN11QMainWindow18removeToolBarBreakEP8QToolBar(void *qthis,
QToolBar * arg1) {
  ((QMainWindow*)qthis)->removeToolBarBreak(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 153, column 10>
//   // proto:  bool QMainWindow::toolBarBreak(QToolBar * toolbar);
// _ZNK11QMainWindow12toolBarBreakEP8QToolBar toolBarBreak(class QToolBar *)
extern "C"
bool
C_ZNK11QMainWindow12toolBarBreakEP8QToolBar(void *qthis,
QToolBar * arg1) {
  auto ret =
  ((QMainWindow*)qthis)->toolBarBreak(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 164, column 10>
//   // proto:  bool QMainWindow::restoreDockWidget(QDockWidget * dockwidget);
// _ZN11QMainWindow17restoreDockWidgetEP11QDockWidget restoreDockWidget(class QDockWidget *)
extern "C"
bool
C_ZN11QMainWindow17restoreDockWidgetEP11QDockWidget(void *qthis,
QDockWidget * arg1) {
  auto ret =
  ((QMainWindow*)qthis)->restoreDockWidget(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 117, column 15>
//   // proto:  QMenuBar * QMainWindow::menuBar();
// _ZNK11QMainWindow7menuBarEv menuBar()
extern "C"
void*
C_ZNK11QMainWindow7menuBarEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->menuBar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 126, column 10>
//   // proto:  void QMainWindow::setStatusBar(QStatusBar * statusbar);
// _ZN11QMainWindow12setStatusBarEP10QStatusBar setStatusBar(class QStatusBar *)
extern "C"
void
C_ZN11QMainWindow12setStatusBarEP10QStatusBar(void *qthis,
QStatusBar * arg1) {
  ((QMainWindow*)qthis)->setStatusBar(arg1);
}
//   // proto:  void QMainWindow::~QMainWindow();
extern "C"
void C_ZN11QMainWindowD2Ev(void *qthis) {
  delete (QMainWindow*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 114, column 10>
//   // proto:  bool QMainWindow::isSeparator(const QPoint & pos);
// _ZNK11QMainWindow11isSeparatorERK6QPoint isSeparator(const class QPoint &)
extern "C"
bool
C_ZNK11QMainWindow11isSeparatorERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QMainWindow*)qthis)->isSeparator(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 187, column 10>
//   // proto:  void QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle toolButtonStyle);
// _ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C"
void
C_ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *qthis,
Qt::ToolButtonStyle* arg1) {
  ((QMainWindow*)qthis)->toolButtonStyleChanged(*((Qt::ToolButtonStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 88, column 11>
//   // proto:  QSize QMainWindow::iconSize();
// _ZNK11QMainWindow8iconSizeEv iconSize()
extern "C"
QSize*
C_ZNK11QMainWindow8iconSizeEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->iconSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 92, column 10>
//   // proto:  void QMainWindow::setToolButtonStyle(Qt::ToolButtonStyle toolButtonStyle);
// _ZN11QMainWindow18setToolButtonStyleEN2Qt15ToolButtonStyleE setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void
C_ZN11QMainWindow18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *qthis,
Qt::ToolButtonStyle* arg1) {
  ((QMainWindow*)qthis)->setToolButtonStyle(*((Qt::ToolButtonStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 54, column 5>
//   // proto:  const QMetaObject * QMainWindow::metaObject();
// _ZNK11QMainWindow10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QMainWindow10metaObjectEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 141, column 10>
//   // proto:  void QMainWindow::insertToolBarBreak(QToolBar * before);
// _ZN11QMainWindow18insertToolBarBreakEP8QToolBar insertToolBarBreak(class QToolBar *)
extern "C"
void
C_ZN11QMainWindow18insertToolBarBreakEP8QToolBar(void *qthis,
QToolBar * arg1) {
  ((QMainWindow*)qthis)->insertToolBarBreak(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 132, column 14>
//   // proto:  QWidget * QMainWindow::takeCentralWidget();
// _ZN11QMainWindow17takeCentralWidgetEv takeCentralWidget()
extern "C"
void*
C_ZN11QMainWindow17takeCentralWidgetEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->takeCentralWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 112, column 17>
//   // proto:  DockOptions QMainWindow::dockOptions();
// _ZNK11QMainWindow11dockOptionsEv dockOptions()
extern "C"
QFlags<QMainWindow::DockOption>*
C_ZNK11QMainWindow11dockOptionsEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->dockOptions();
  return new QFlags<QMainWindow::DockOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 96, column 10>
//   // proto:  bool QMainWindow::isDockNestingEnabled();
// _ZNK11QMainWindow20isDockNestingEnabledEv isDockNestingEnabled()
extern "C"
bool
C_ZNK11QMainWindow20isDockNestingEnabledEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->isDockNestingEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 140, column 10>
//   // proto:  void QMainWindow::addToolBarBreak(Qt::ToolBarArea area);
// _ZN11QMainWindow15addToolBarBreakEN2Qt11ToolBarAreaE addToolBarBreak(Qt::ToolBarArea)
extern "C"
void
C_ZN11QMainWindow15addToolBarBreakEN2Qt11ToolBarAreaE(void *qthis,
Qt::ToolBarArea* arg1) {
  ((QMainWindow*)qthis)->addToolBarBreak(*((Qt::ToolBarArea*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 111, column 10>
//   // proto:  void QMainWindow::setDockOptions(DockOptions options);
// _ZN11QMainWindow14setDockOptionsE6QFlagsINS_10DockOptionEE setDockOptions(DockOptions)
extern "C"
void
C_ZN11QMainWindow14setDockOptionsE6QFlagsINS_10DockOptionEE(void *qthis,
QMainWindow::DockOptions arg1) {
  ((QMainWindow*)qthis)->setDockOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 105, column 26>
//   // proto:  QTabWidget::TabShape QMainWindow::tabShape();
// _ZNK11QMainWindow8tabShapeEv tabShape()
extern "C"
QTabWidget::TabShape
C_ZNK11QMainWindow8tabShapeEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->tabShape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 143, column 10>
//   // proto:  void QMainWindow::addToolBar(Qt::ToolBarArea area, QToolBar * toolbar);
// _ZN11QMainWindow10addToolBarEN2Qt11ToolBarAreaEP8QToolBar addToolBar(Qt::ToolBarArea, class QToolBar *)
extern "C"
void
C_ZN11QMainWindow10addToolBarEN2Qt11ToolBarAreaEP8QToolBar(void *qthis,
Qt::ToolBarArea* arg1,
QToolBar * arg2) {
  ((QMainWindow*)qthis)->addToolBar(*((Qt::ToolBarArea*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 100, column 10>
//   // proto:  bool QMainWindow::documentMode();
// _ZNK11QMainWindow12documentModeEv documentMode()
extern "C"
bool
C_ZNK11QMainWindow12documentModeEv(void *qthis) {
  auto ret =
  ((QMainWindow*)qthis)->documentMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 121, column 10>
//   // proto:  void QMainWindow::setMenuWidget(QWidget * menubar);
// _ZN11QMainWindow13setMenuWidgetEP7QWidget setMenuWidget(class QWidget *)
extern "C"
void
C_ZN11QMainWindow13setMenuWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QMainWindow*)qthis)->setMenuWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 147, column 10>
//   // proto:  void QMainWindow::removeToolBar(QToolBar * toolbar);
// _ZN11QMainWindow13removeToolBarEP8QToolBar removeToolBar(class QToolBar *)
extern "C"
void
C_ZN11QMainWindow13removeToolBarEP8QToolBar(void *qthis,
QToolBar * arg1) {
  ((QMainWindow*)qthis)->removeToolBar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 130, column 10>
//   // proto:  void QMainWindow::setCentralWidget(QWidget * widget);
// _ZN11QMainWindow16setCentralWidgetEP7QWidget setCentralWidget(class QWidget *)
extern "C"
void
C_ZN11QMainWindow16setCentralWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QMainWindow*)qthis)->setCentralWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 118, column 10>
//   // proto:  void QMainWindow::setMenuBar(QMenuBar * menubar);
// _ZN11QMainWindow10setMenuBarEP8QMenuBar setMenuBar(class QMenuBar *)
extern "C"
void
C_ZN11QMainWindow10setMenuBarEP8QMenuBar(void *qthis,
QMenuBar * arg1) {
  ((QMainWindow*)qthis)->setMenuBar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 136, column 24>
//   // proto:  Qt::DockWidgetArea QMainWindow::corner(Qt::Corner corner);
// _ZNK11QMainWindow6cornerEN2Qt6CornerE corner(Qt::Corner)
extern "C"
Qt::DockWidgetArea
C_ZNK11QMainWindow6cornerEN2Qt6CornerE(void *qthis,
Qt::Corner* arg1) {
  auto ret =
  ((QMainWindow*)qthis)->corner(*((Qt::Corner*)arg1));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmainwindow.h', line 162, column 25>
//   // proto:  QList<QDockWidget *> QMainWindow::tabifiedDockWidgets(QDockWidget * dockwidget);
// _ZNK11QMainWindow19tabifiedDockWidgetsEP11QDockWidget tabifiedDockWidgets(class QDockWidget *)
extern "C"
QList<QDockWidget *>*
C_ZNK11QMainWindow19tabifiedDockWidgetsEP11QDockWidget(void *qthis,
QDockWidget * arg1) {
  auto ret =
  ((QMainWindow*)qthis)->tabifiedDockWidgets(arg1);
  return new QList<QDockWidget *>(ret); // 5
}
// <= ext block end

// body block begin =>
// QMainWindow_SlotProxy here
class QMainWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMainWindow_SlotProxy():QObject(){}

public slots:
  // toolButtonStyleChanged(Qt::ToolButtonStyle)
  void slot_proxy_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0);
public:
  void (*slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE)(void* rsfptr, Qt::ToolButtonStyle arg0) = NULL;
public slots:
  // iconSizeChanged(const class QSize &)
  void slot_proxy_func__ZN11QMainWindow15iconSizeChangedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize)(void* rsfptr, const QSize & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmainwindow.moc"

extern "C" {
  QMainWindow_SlotProxy* QMainWindow_SlotProxy_new()
  {
    return new QMainWindow_SlotProxy();
  }
};

void QMainWindow_SlotProxy::slot_proxy_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0) {
  if (this->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE != NULL) {
    // do smth...
    this->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(this->rsfptr, arg0);
  }
}
extern "C"
void* QMainWindow_SlotProxy_connect__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMainWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE = (decltype(that->slot_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE))ffifptr;
  QObject::connect((QMainWindow*)sender, SIGNAL(toolButtonStyleChanged(Qt::ToolButtonStyle)), that, SLOT(slot_proxy_func__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0)));
  return that;
}
extern "C"
void QMainWindow_SlotProxy_disconnect__ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QMainWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMainWindow_SlotProxy::slot_proxy_func__ZN11QMainWindow15iconSizeChangedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize(this->rsfptr, arg0);
  }
}
extern "C"
void* QMainWindow_SlotProxy_connect__ZN11QMainWindow15iconSizeChangedERK5QSize(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMainWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize = (decltype(that->slot_func__ZN11QMainWindow15iconSizeChangedERK5QSize))ffifptr;
  QObject::connect((QMainWindow*)sender, SIGNAL(iconSizeChanged(const class QSize &)), that, SLOT(slot_proxy_func__ZN11QMainWindow15iconSizeChangedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QMainWindow_SlotProxy_disconnect__ZN11QMainWindow15iconSizeChangedERK5QSize(QMainWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

