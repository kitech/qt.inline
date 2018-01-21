//  header block begin
// /usr/include/qt/QtWidgets/qmainwindow.h
#include <qmainwindow.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qmainwindow.h:60
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QMainWindow10metaObjectEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:92
// void QMainWindow(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN11QMainWindowC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QMainWindow(parent, flags);
}
// virtual
// /usr/include/qt/QtWidgets/qmainwindow.h:93
// void ~QMainWindow()
extern "C"
void C_ZN11QMainWindowD1Ev(void *this_) {
  delete (QMainWindow*)(this_);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:95
// QSize iconSize()
extern "C"
void C_ZNK11QMainWindow8iconSizeEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->iconSize();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:96
// void setIconSize(const class QSize &)
extern "C"
void C_ZN11QMainWindow11setIconSizeERK5QSize(void *this_, const QSize & iconSize) {
  ((QMainWindow*)this_)->setIconSize(iconSize);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:98
// Qt::ToolButtonStyle toolButtonStyle()
extern "C"
void C_ZNK11QMainWindow15toolButtonStyleEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->toolButtonStyle();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:99
// void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void C_ZN11QMainWindow18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QMainWindow*)this_)->setToolButtonStyle(toolButtonStyle);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:102
// bool isAnimated()
extern "C"
void C_ZNK11QMainWindow10isAnimatedEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->isAnimated();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:103
// bool isDockNestingEnabled()
extern "C"
void C_ZNK11QMainWindow20isDockNestingEnabledEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->isDockNestingEnabled();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:107
// bool documentMode()
extern "C"
void C_ZNK11QMainWindow12documentModeEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->documentMode();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:108
// void setDocumentMode(_Bool)
extern "C"
void C_ZN11QMainWindow15setDocumentModeEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setDocumentMode(enabled);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:112
// QTabWidget::TabShape tabShape()
extern "C"
void C_ZNK11QMainWindow8tabShapeEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->tabShape();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:113
// void setTabShape(class QTabWidget::TabShape)
extern "C"
void C_ZN11QMainWindow11setTabShapeEN10QTabWidget8TabShapeE(void *this_, QTabWidget::TabShape tabShape) {
  ((QMainWindow*)this_)->setTabShape(tabShape);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:114
// QTabWidget::TabPosition tabPosition(Qt::DockWidgetArea)
extern "C"
void C_ZNK11QMainWindow11tabPositionEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  /*return*/ ((QMainWindow*)this_)->tabPosition(area);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:115
// void setTabPosition(Qt::DockWidgetAreas, class QTabWidget::TabPosition)
extern "C"
void C_ZN11QMainWindow14setTabPositionE6QFlagsIN2Qt14DockWidgetAreaEEN10QTabWidget11TabPositionE(void *this_, QFlags<Qt::DockWidgetArea> areas, QTabWidget::TabPosition tabPosition) {
  ((QMainWindow*)this_)->setTabPosition(areas, tabPosition);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:118
// void setDockOptions(DockOptions)
extern "C"
void C_ZN11QMainWindow14setDockOptionsE6QFlagsINS_10DockOptionEE(void *this_, QFlags<QMainWindow::DockOption> options) {
  ((QMainWindow*)this_)->setDockOptions(options);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:119
// DockOptions dockOptions()
extern "C"
void C_ZNK11QMainWindow11dockOptionsEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->dockOptions();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:121
// bool isSeparator(const class QPoint &)
extern "C"
void C_ZNK11QMainWindow11isSeparatorERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QMainWindow*)this_)->isSeparator(pos);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:124
// QMenuBar * menuBar()
extern "C"
void C_ZNK11QMainWindow7menuBarEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->menuBar();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:125
// void setMenuBar(class QMenuBar *)
extern "C"
void C_ZN11QMainWindow10setMenuBarEP8QMenuBar(void *this_, QMenuBar * menubar) {
  ((QMainWindow*)this_)->setMenuBar(menubar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:127
// QWidget * menuWidget()
extern "C"
void C_ZNK11QMainWindow10menuWidgetEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->menuWidget();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:128
// void setMenuWidget(class QWidget *)
extern "C"
void C_ZN11QMainWindow13setMenuWidgetEP7QWidget(void *this_, QWidget * menubar) {
  ((QMainWindow*)this_)->setMenuWidget(menubar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:132
// QStatusBar * statusBar()
extern "C"
void C_ZNK11QMainWindow9statusBarEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->statusBar();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:133
// void setStatusBar(class QStatusBar *)
extern "C"
void C_ZN11QMainWindow12setStatusBarEP10QStatusBar(void *this_, QStatusBar * statusbar) {
  ((QMainWindow*)this_)->setStatusBar(statusbar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:136
// QWidget * centralWidget()
extern "C"
void C_ZNK11QMainWindow13centralWidgetEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->centralWidget();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:137
// void setCentralWidget(class QWidget *)
extern "C"
void C_ZN11QMainWindow16setCentralWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QMainWindow*)this_)->setCentralWidget(widget);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:139
// QWidget * takeCentralWidget()
extern "C"
void C_ZN11QMainWindow17takeCentralWidgetEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->takeCentralWidget();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:142
// void setCorner(Qt::Corner, Qt::DockWidgetArea)
extern "C"
void C_ZN11QMainWindow9setCornerEN2Qt6CornerENS0_14DockWidgetAreaE(void *this_, Qt::Corner corner, Qt::DockWidgetArea area) {
  ((QMainWindow*)this_)->setCorner(corner, area);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:143
// Qt::DockWidgetArea corner(Qt::Corner)
extern "C"
void C_ZNK11QMainWindow6cornerEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  /*return*/ ((QMainWindow*)this_)->corner(corner);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:147
// void addToolBarBreak(Qt::ToolBarArea)
extern "C"
void C_ZN11QMainWindow15addToolBarBreakEN2Qt11ToolBarAreaE(void *this_, Qt::ToolBarArea area) {
  ((QMainWindow*)this_)->addToolBarBreak(area);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:148
// void insertToolBarBreak(class QToolBar *)
extern "C"
void C_ZN11QMainWindow18insertToolBarBreakEP8QToolBar(void *this_, QToolBar * before) {
  ((QMainWindow*)this_)->insertToolBarBreak(before);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:150
// void addToolBar(Qt::ToolBarArea, class QToolBar *)
extern "C"
void C_ZN11QMainWindow10addToolBarEN2Qt11ToolBarAreaEP8QToolBar(void *this_, Qt::ToolBarArea area, QToolBar * toolbar) {
  ((QMainWindow*)this_)->addToolBar(area, toolbar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:151
// void addToolBar(class QToolBar *)
extern "C"
void C_ZN11QMainWindow10addToolBarEP8QToolBar(void *this_, QToolBar * toolbar) {
  ((QMainWindow*)this_)->addToolBar(toolbar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:152
// QToolBar * addToolBar(const class QString &)
extern "C"
void C_ZN11QMainWindow10addToolBarERK7QString(void *this_, const QString & title) {
  /*return*/ ((QMainWindow*)this_)->addToolBar(title);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:153
// void insertToolBar(class QToolBar *, class QToolBar *)
extern "C"
void C_ZN11QMainWindow13insertToolBarEP8QToolBarS1_(void *this_, QToolBar * before, QToolBar * toolbar) {
  ((QMainWindow*)this_)->insertToolBar(before, toolbar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:154
// void removeToolBar(class QToolBar *)
extern "C"
void C_ZN11QMainWindow13removeToolBarEP8QToolBar(void *this_, QToolBar * toolbar) {
  ((QMainWindow*)this_)->removeToolBar(toolbar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:155
// void removeToolBarBreak(class QToolBar *)
extern "C"
void C_ZN11QMainWindow18removeToolBarBreakEP8QToolBar(void *this_, QToolBar * before) {
  ((QMainWindow*)this_)->removeToolBarBreak(before);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:157
// bool unifiedTitleAndToolBarOnMac()
extern "C"
void C_ZNK11QMainWindow27unifiedTitleAndToolBarOnMacEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->unifiedTitleAndToolBarOnMac();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:159
// Qt::ToolBarArea toolBarArea(class QToolBar *)
extern "C"
void C_ZNK11QMainWindow11toolBarAreaEP8QToolBar(void *this_, QToolBar * toolbar) {
  /*return*/ ((QMainWindow*)this_)->toolBarArea(toolbar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:160
// bool toolBarBreak(class QToolBar *)
extern "C"
void C_ZNK11QMainWindow12toolBarBreakEP8QToolBar(void *this_, QToolBar * toolbar) {
  /*return*/ ((QMainWindow*)this_)->toolBarBreak(toolbar);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:163
// void addDockWidget(Qt::DockWidgetArea, class QDockWidget *)
extern "C"
void C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidget(void *this_, Qt::DockWidgetArea area, QDockWidget * dockwidget) {
  ((QMainWindow*)this_)->addDockWidget(area, dockwidget);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:164
// void addDockWidget(Qt::DockWidgetArea, class QDockWidget *, Qt::Orientation)
extern "C"
void C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidgetNS0_11OrientationE(void *this_, Qt::DockWidgetArea area, QDockWidget * dockwidget, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->addDockWidget(area, dockwidget, orientation);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:166
// void splitDockWidget(class QDockWidget *, class QDockWidget *, Qt::Orientation)
extern "C"
void C_ZN11QMainWindow15splitDockWidgetEP11QDockWidgetS1_N2Qt11OrientationE(void *this_, QDockWidget * after, QDockWidget * dockwidget, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->splitDockWidget(after, dockwidget, orientation);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:168
// void tabifyDockWidget(class QDockWidget *, class QDockWidget *)
extern "C"
void C_ZN11QMainWindow16tabifyDockWidgetEP11QDockWidgetS1_(void *this_, QDockWidget * first, QDockWidget * second) {
  ((QMainWindow*)this_)->tabifyDockWidget(first, second);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:169
// QList<QDockWidget *> tabifiedDockWidgets(class QDockWidget *)
extern "C"
void C_ZNK11QMainWindow19tabifiedDockWidgetsEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  /*return*/ ((QMainWindow*)this_)->tabifiedDockWidgets(dockwidget);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:170
// void removeDockWidget(class QDockWidget *)
extern "C"
void C_ZN11QMainWindow16removeDockWidgetEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  ((QMainWindow*)this_)->removeDockWidget(dockwidget);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:171
// bool restoreDockWidget(class QDockWidget *)
extern "C"
void C_ZN11QMainWindow17restoreDockWidgetEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  /*return*/ ((QMainWindow*)this_)->restoreDockWidget(dockwidget);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:173
// Qt::DockWidgetArea dockWidgetArea(class QDockWidget *)
extern "C"
void C_ZNK11QMainWindow14dockWidgetAreaEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  /*return*/ ((QMainWindow*)this_)->dockWidgetArea(dockwidget);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:175
// void resizeDocks(const QList<class QDockWidget *> &, const QList<int> &, Qt::Orientation)
extern "C"
void C_ZN11QMainWindow11resizeDocksERK5QListIP11QDockWidgetERKS0_IiEN2Qt11OrientationE(void *this_, const QList<QDockWidget *> & docks, const QList<int> & sizes, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->resizeDocks(docks, sizes, orientation);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:179
// QByteArray saveState(int)
extern "C"
void C_ZNK11QMainWindow9saveStateEi(void *this_, int version) {
  /*return*/ ((QMainWindow*)this_)->saveState(version);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:180
// bool restoreState(const class QByteArray &, int)
extern "C"
void C_ZN11QMainWindow12restoreStateERK10QByteArrayi(void *this_, const QByteArray & state, int version) {
  /*return*/ ((QMainWindow*)this_)->restoreState(state, version);
}
// virtual
// /usr/include/qt/QtWidgets/qmainwindow.h:183
// QMenu * createPopupMenu()
extern "C"
void C_ZN11QMainWindow15createPopupMenuEv(void *this_) {
  /*return*/ ((QMainWindow*)this_)->createPopupMenu();
}
// /usr/include/qt/QtWidgets/qmainwindow.h:188
// void setAnimated(_Bool)
extern "C"
void C_ZN11QMainWindow11setAnimatedEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setAnimated(enabled);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:189
// void setDockNestingEnabled(_Bool)
extern "C"
void C_ZN11QMainWindow21setDockNestingEnabledEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setDockNestingEnabled(enabled);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:192
// void setUnifiedTitleAndToolBarOnMac(_Bool)
extern "C"
void C_ZN11QMainWindow30setUnifiedTitleAndToolBarOnMacEb(void *this_, bool set) {
  ((QMainWindow*)this_)->setUnifiedTitleAndToolBarOnMac(set);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:196
// void iconSizeChanged(const class QSize &)
extern "C"
void C_ZN11QMainWindow15iconSizeChangedERK5QSize(void *this_, const QSize & iconSize) {
  ((QMainWindow*)this_)->iconSizeChanged(iconSize);
}
// /usr/include/qt/QtWidgets/qmainwindow.h:197
// void toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C"
void C_ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QMainWindow*)this_)->toolButtonStyleChanged(toolButtonStyle);
}
//  main block end
