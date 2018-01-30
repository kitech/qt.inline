//  header block begin
// /usr/include/qt/QtWidgets/qmainwindow.h
#include <qmainwindow.h>
#include <QtWidgets>

// QMainWindow is pure virtual: false
// QMainWindow has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:206
// [-2] void contextMenuEvent(class QContextMenuEvent *)
extern "C"
void* callback_ZN11QMainWindow16contextMenuEventEP17QContextMenuEvent = 0;
extern "C" void set_callback_ZN11QMainWindow16contextMenuEventEP17QContextMenuEvent(void*cbfn)
{ callback_ZN11QMainWindow16contextMenuEventEP17QContextMenuEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:208
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN11QMainWindow5eventEP6QEvent = 0;
extern "C" void set_callback_ZN11QMainWindow5eventEP6QEvent(void*cbfn)
{ callback_ZN11QMainWindow5eventEP6QEvent = cbfn; }

class MyQMainWindow : public QMainWindow {
public:
  virtual ~MyQMainWindow() {}
// void QMainWindow(class QWidget *, Qt::WindowFlags)
MyQMainWindow(QWidget * parent, QFlags<Qt::WindowType> flags) : QMainWindow(parent, flags) {}
// void contextMenuEvent(class QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * event) {
    if (callback_ZN11QMainWindow16contextMenuEventEP17QContextMenuEvent != 0) {
      // callback_ZN11QMainWindow16contextMenuEventEP17QContextMenuEvent(event);
    }
    QMainWindow::contextMenuEvent(event);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    if (callback_ZN11QMainWindow5eventEP6QEvent != 0) {
      // callback_ZN11QMainWindow5eventEP6QEvent(event);
    }
    return QMainWindow::event(event);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:62
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QMainWindow10metaObjectEv(void *this_) {
  return (void*)((QMainWindow*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:94
// [-2] void QMainWindow(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN11QMainWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQMainWindow*)(0);
  return  new MyQMainWindow(parent, flags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:95
// [-2] void ~QMainWindow()
extern "C"
void C_ZN11QMainWindowD2Ev(void *this_) {
  delete (QMainWindow*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:97
// [8] QSize iconSize()
extern "C"
void* C_ZNK11QMainWindow8iconSizeEv(void *this_) {
  auto rv = ((QMainWindow*)this_)->iconSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:98
// [-2] void setIconSize(const class QSize &)
extern "C"
void C_ZN11QMainWindow11setIconSizeERK5QSize(void *this_, const QSize & iconSize) {
  ((QMainWindow*)this_)->setIconSize(iconSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:100
// [4] Qt::ToolButtonStyle toolButtonStyle()
extern "C"
Qt::ToolButtonStyle C_ZNK11QMainWindow15toolButtonStyleEv(void *this_) {
  return (Qt::ToolButtonStyle)((QMainWindow*)this_)->toolButtonStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:101
// [-2] void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void C_ZN11QMainWindow18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QMainWindow*)this_)->setToolButtonStyle(toolButtonStyle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:104
// [1] bool isAnimated()
extern "C"
bool C_ZNK11QMainWindow10isAnimatedEv(void *this_) {
  return (bool)((QMainWindow*)this_)->isAnimated();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:105
// [1] bool isDockNestingEnabled()
extern "C"
bool C_ZNK11QMainWindow20isDockNestingEnabledEv(void *this_) {
  return (bool)((QMainWindow*)this_)->isDockNestingEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:109
// [1] bool documentMode()
extern "C"
bool C_ZNK11QMainWindow12documentModeEv(void *this_) {
  return (bool)((QMainWindow*)this_)->documentMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:110
// [-2] void setDocumentMode(_Bool)
extern "C"
void C_ZN11QMainWindow15setDocumentModeEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setDocumentMode(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:114
// [4] QTabWidget::TabShape tabShape()
extern "C"
QTabWidget::TabShape C_ZNK11QMainWindow8tabShapeEv(void *this_) {
  return (QTabWidget::TabShape)((QMainWindow*)this_)->tabShape();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:115
// [-2] void setTabShape(class QTabWidget::TabShape)
extern "C"
void C_ZN11QMainWindow11setTabShapeEN10QTabWidget8TabShapeE(void *this_, QTabWidget::TabShape tabShape) {
  ((QMainWindow*)this_)->setTabShape(tabShape);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:116
// [4] QTabWidget::TabPosition tabPosition(Qt::DockWidgetArea)
extern "C"
QTabWidget::TabPosition C_ZNK11QMainWindow11tabPositionEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  return (QTabWidget::TabPosition)((QMainWindow*)this_)->tabPosition(area);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:121
// [4] QMainWindow::DockOptions dockOptions()
extern "C"
void C_ZNK11QMainWindow11dockOptionsEv(void *this_) {
  auto rv = ((QMainWindow*)this_)->dockOptions();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:123
// [1] bool isSeparator(const class QPoint &)
extern "C"
bool C_ZNK11QMainWindow11isSeparatorERK6QPoint(void *this_, const QPoint & pos) {
  return (bool)((QMainWindow*)this_)->isSeparator(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:126
// [8] QMenuBar * menuBar()
extern "C"
void* C_ZNK11QMainWindow7menuBarEv(void *this_) {
  return (void*)((QMainWindow*)this_)->menuBar();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:127
// [-2] void setMenuBar(class QMenuBar *)
extern "C"
void C_ZN11QMainWindow10setMenuBarEP8QMenuBar(void *this_, QMenuBar * menubar) {
  ((QMainWindow*)this_)->setMenuBar(menubar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:129
// [8] QWidget * menuWidget()
extern "C"
void* C_ZNK11QMainWindow10menuWidgetEv(void *this_) {
  return (void*)((QMainWindow*)this_)->menuWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:130
// [-2] void setMenuWidget(class QWidget *)
extern "C"
void C_ZN11QMainWindow13setMenuWidgetEP7QWidget(void *this_, QWidget * menubar) {
  ((QMainWindow*)this_)->setMenuWidget(menubar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:134
// [8] QStatusBar * statusBar()
extern "C"
void* C_ZNK11QMainWindow9statusBarEv(void *this_) {
  return (void*)((QMainWindow*)this_)->statusBar();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:135
// [-2] void setStatusBar(class QStatusBar *)
extern "C"
void C_ZN11QMainWindow12setStatusBarEP10QStatusBar(void *this_, QStatusBar * statusbar) {
  ((QMainWindow*)this_)->setStatusBar(statusbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:138
// [8] QWidget * centralWidget()
extern "C"
void* C_ZNK11QMainWindow13centralWidgetEv(void *this_) {
  return (void*)((QMainWindow*)this_)->centralWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:139
// [-2] void setCentralWidget(class QWidget *)
extern "C"
void C_ZN11QMainWindow16setCentralWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QMainWindow*)this_)->setCentralWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:141
// [8] QWidget * takeCentralWidget()
extern "C"
void* C_ZN11QMainWindow17takeCentralWidgetEv(void *this_) {
  return (void*)((QMainWindow*)this_)->takeCentralWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:144
// [-2] void setCorner(Qt::Corner, Qt::DockWidgetArea)
extern "C"
void C_ZN11QMainWindow9setCornerEN2Qt6CornerENS0_14DockWidgetAreaE(void *this_, Qt::Corner corner, Qt::DockWidgetArea area) {
  ((QMainWindow*)this_)->setCorner(corner, area);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:145
// [4] Qt::DockWidgetArea corner(Qt::Corner)
extern "C"
Qt::DockWidgetArea C_ZNK11QMainWindow6cornerEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  return (Qt::DockWidgetArea)((QMainWindow*)this_)->corner(corner);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:149
// [-2] void addToolBarBreak(Qt::ToolBarArea)
extern "C"
void C_ZN11QMainWindow15addToolBarBreakEN2Qt11ToolBarAreaE(void *this_, Qt::ToolBarArea area) {
  ((QMainWindow*)this_)->addToolBarBreak(area);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:150
// [-2] void insertToolBarBreak(class QToolBar *)
extern "C"
void C_ZN11QMainWindow18insertToolBarBreakEP8QToolBar(void *this_, QToolBar * before) {
  ((QMainWindow*)this_)->insertToolBarBreak(before);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:152
// [-2] void addToolBar(Qt::ToolBarArea, class QToolBar *)
extern "C"
void C_ZN11QMainWindow10addToolBarEN2Qt11ToolBarAreaEP8QToolBar(void *this_, Qt::ToolBarArea area, QToolBar * toolbar) {
  ((QMainWindow*)this_)->addToolBar(area, toolbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:153
// [-2] void addToolBar(class QToolBar *)
extern "C"
void C_ZN11QMainWindow10addToolBarEP8QToolBar(void *this_, QToolBar * toolbar) {
  ((QMainWindow*)this_)->addToolBar(toolbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:154
// [8] QToolBar * addToolBar(const class QString &)
extern "C"
void* C_ZN11QMainWindow10addToolBarERK7QString(void *this_, const QString & title) {
  return (void*)((QMainWindow*)this_)->addToolBar(title);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:155
// [-2] void insertToolBar(class QToolBar *, class QToolBar *)
extern "C"
void C_ZN11QMainWindow13insertToolBarEP8QToolBarS1_(void *this_, QToolBar * before, QToolBar * toolbar) {
  ((QMainWindow*)this_)->insertToolBar(before, toolbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:156
// [-2] void removeToolBar(class QToolBar *)
extern "C"
void C_ZN11QMainWindow13removeToolBarEP8QToolBar(void *this_, QToolBar * toolbar) {
  ((QMainWindow*)this_)->removeToolBar(toolbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:157
// [-2] void removeToolBarBreak(class QToolBar *)
extern "C"
void C_ZN11QMainWindow18removeToolBarBreakEP8QToolBar(void *this_, QToolBar * before) {
  ((QMainWindow*)this_)->removeToolBarBreak(before);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:159
// [1] bool unifiedTitleAndToolBarOnMac()
extern "C"
bool C_ZNK11QMainWindow27unifiedTitleAndToolBarOnMacEv(void *this_) {
  return (bool)((QMainWindow*)this_)->unifiedTitleAndToolBarOnMac();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:161
// [4] Qt::ToolBarArea toolBarArea(class QToolBar *)
extern "C"
Qt::ToolBarArea C_ZNK11QMainWindow11toolBarAreaEP8QToolBar(void *this_, QToolBar * toolbar) {
  return (Qt::ToolBarArea)((QMainWindow*)this_)->toolBarArea(toolbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:162
// [1] bool toolBarBreak(class QToolBar *)
extern "C"
bool C_ZNK11QMainWindow12toolBarBreakEP8QToolBar(void *this_, QToolBar * toolbar) {
  return (bool)((QMainWindow*)this_)->toolBarBreak(toolbar);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:165
// [-2] void addDockWidget(Qt::DockWidgetArea, class QDockWidget *)
extern "C"
void C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidget(void *this_, Qt::DockWidgetArea area, QDockWidget * dockwidget) {
  ((QMainWindow*)this_)->addDockWidget(area, dockwidget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:166
// [-2] void addDockWidget(Qt::DockWidgetArea, class QDockWidget *, Qt::Orientation)
extern "C"
void C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidgetNS0_11OrientationE(void *this_, Qt::DockWidgetArea area, QDockWidget * dockwidget, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->addDockWidget(area, dockwidget, orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:168
// [-2] void splitDockWidget(class QDockWidget *, class QDockWidget *, Qt::Orientation)
extern "C"
void C_ZN11QMainWindow15splitDockWidgetEP11QDockWidgetS1_N2Qt11OrientationE(void *this_, QDockWidget * after, QDockWidget * dockwidget, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->splitDockWidget(after, dockwidget, orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:170
// [-2] void tabifyDockWidget(class QDockWidget *, class QDockWidget *)
extern "C"
void C_ZN11QMainWindow16tabifyDockWidgetEP11QDockWidgetS1_(void *this_, QDockWidget * first, QDockWidget * second) {
  ((QMainWindow*)this_)->tabifyDockWidget(first, second);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:172
// [-2] void removeDockWidget(class QDockWidget *)
extern "C"
void C_ZN11QMainWindow16removeDockWidgetEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  ((QMainWindow*)this_)->removeDockWidget(dockwidget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:173
// [1] bool restoreDockWidget(class QDockWidget *)
extern "C"
bool C_ZN11QMainWindow17restoreDockWidgetEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  return (bool)((QMainWindow*)this_)->restoreDockWidget(dockwidget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:175
// [4] Qt::DockWidgetArea dockWidgetArea(class QDockWidget *)
extern "C"
Qt::DockWidgetArea C_ZNK11QMainWindow14dockWidgetAreaEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  return (Qt::DockWidgetArea)((QMainWindow*)this_)->dockWidgetArea(dockwidget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:181
// [8] QByteArray saveState(int)
extern "C"
void* C_ZNK11QMainWindow9saveStateEi(void *this_, int version) {
  auto rv = ((QMainWindow*)this_)->saveState(version);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:182
// [1] bool restoreState(const class QByteArray &, int)
extern "C"
bool C_ZN11QMainWindow12restoreStateERK10QByteArrayi(void *this_, const QByteArray & state, int version) {
  return (bool)((QMainWindow*)this_)->restoreState(state, version);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:185
// [8] QMenu * createPopupMenu()
extern "C"
void* C_ZN11QMainWindow15createPopupMenuEv(void *this_) {
  return (void*)((QMainWindow*)this_)->createPopupMenu();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:190
// [-2] void setAnimated(_Bool)
extern "C"
void C_ZN11QMainWindow11setAnimatedEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setAnimated(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:191
// [-2] void setDockNestingEnabled(_Bool)
extern "C"
void C_ZN11QMainWindow21setDockNestingEnabledEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setDockNestingEnabled(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:194
// [-2] void setUnifiedTitleAndToolBarOnMac(_Bool)
extern "C"
void C_ZN11QMainWindow30setUnifiedTitleAndToolBarOnMacEb(void *this_, bool set) {
  ((QMainWindow*)this_)->setUnifiedTitleAndToolBarOnMac(set);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:198
// [-2] void iconSizeChanged(const class QSize &)
extern "C"
void C_ZN11QMainWindow15iconSizeChangedERK5QSize(void *this_, const QSize & iconSize) {
  ((QMainWindow*)this_)->iconSizeChanged(iconSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:199
// [-2] void toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C"
void C_ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QMainWindow*)this_)->toolButtonStyleChanged(toolButtonStyle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:201
// [-2] void tabifiedDockWidgetActivated(class QDockWidget *)
extern "C"
void C_ZN11QMainWindow27tabifiedDockWidgetActivatedEP11QDockWidget(void *this_, QDockWidget * dockWidget) {
  ((QMainWindow*)this_)->tabifiedDockWidgetActivated(dockWidget);
}
//  main block end
