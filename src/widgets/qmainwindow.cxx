//  header block begin

// /usr/include/qt/QtWidgets/qmainwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmainwindow.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMainWindow is pure virtual: false
// QMainWindow has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMainWindow_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMainWindow_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMainWindow_t qt_meta_stringdata_MyQMainWindow = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQMainWindow"
  },
  "MyQMainWindow"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMainWindow[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQMainWindow : public QMainWindow {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMainWindow::staticMetaObject,
  qt_meta_stringdata_MyQMainWindow.data,
  qt_meta_data_MyQMainWindow,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQMainWindow.stringdata0))
      return static_cast<void*>(this);
  return QMainWindow::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMainWindow::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQMainWindow() {}
// void QMainWindow(QWidget *, Qt::WindowFlags)
MyQMainWindow(QWidget * parent, QFlags<Qt::WindowType> flags) : QMainWindow(parent, flags) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMainWindow::contextMenuEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMainWindow::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMainWindow_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMainWindow* qo = (MyQMainWindow*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:205
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * event) {
  ((QMainWindow*)this_)->QMainWindow::contextMenuEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:207
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMainWindow5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QMainWindow*)this_)->QMainWindow::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMainWindow10metaObjectEv(void *this_) {
  return (void*)((QMainWindow*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMainWindow11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMainWindow*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QMainWindow11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMainWindow*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMainWindow2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMainWindow::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMainWindow6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMainWindow::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:93
// [-2] void QMainWindow(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMainWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQMainWindow*)(0);
  return  new MyQMainWindow(parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:94
// [-2] void ~QMainWindow()
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindowD2Ev(void *this_) {
  delete (QMainWindow*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:96
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMainWindow8iconSizeEv(void *this_) {
  auto rv = ((QMainWindow*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:97
// [-2] void setIconSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow11setIconSizeERK5QSize(void *this_, QSize* iconSize) {
  ((QMainWindow*)this_)->setIconSize(*iconSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:99
// [4] Qt::ToolButtonStyle toolButtonStyle()
extern "C" Q_DECL_EXPORT
Qt::ToolButtonStyle C_ZNK11QMainWindow15toolButtonStyleEv(void *this_) {
  return (Qt::ToolButtonStyle)((QMainWindow*)this_)->toolButtonStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:100
// [-2] void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QMainWindow*)this_)->setToolButtonStyle(toolButtonStyle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:103
// [1] bool isAnimated()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QMainWindow10isAnimatedEv(void *this_) {
  return (bool)((QMainWindow*)this_)->isAnimated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:104
// [1] bool isDockNestingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QMainWindow20isDockNestingEnabledEv(void *this_) {
  return (bool)((QMainWindow*)this_)->isDockNestingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:108
// [1] bool documentMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QMainWindow12documentModeEv(void *this_) {
  return (bool)((QMainWindow*)this_)->documentMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:109
// [-2] void setDocumentMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow15setDocumentModeEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setDocumentMode(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:113
// [4] QTabWidget::TabShape tabShape()
extern "C" Q_DECL_EXPORT
QTabWidget::TabShape C_ZNK11QMainWindow8tabShapeEv(void *this_) {
  return (QTabWidget::TabShape)((QMainWindow*)this_)->tabShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:114
// [-2] void setTabShape(QTabWidget::TabShape)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow11setTabShapeEN10QTabWidget8TabShapeE(void *this_, QTabWidget::TabShape tabShape) {
  ((QMainWindow*)this_)->setTabShape(tabShape);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qmainwindow.h:115
// [4] QTabWidget::TabPosition tabPosition(Qt::DockWidgetArea)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QTabWidget::TabPosition C_ZNK11QMainWindow11tabPositionEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  return (QTabWidget::TabPosition)((QMainWindow*)this_)->tabPosition(area);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qmainwindow.h:116
// [-2] void setTabPosition(Qt::DockWidgetAreas, QTabWidget::TabPosition)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow14setTabPositionE6QFlagsIN2Qt14DockWidgetAreaEEN10QTabWidget11TabPositionE(void *this_, QFlags<Qt::DockWidgetArea> areas, QTabWidget::TabPosition tabPosition) {
  ((QMainWindow*)this_)->setTabPosition(areas, tabPosition);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:119
// [-2] void setDockOptions(QMainWindow::DockOptions)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow14setDockOptionsE6QFlagsINS_10DockOptionEE(void *this_, QFlags<QMainWindow::DockOption> options) {
  ((QMainWindow*)this_)->setDockOptions(options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:120
// [4] QMainWindow::DockOptions dockOptions()
extern "C" Q_DECL_EXPORT
QMainWindow::DockOptions* C_ZNK11QMainWindow11dockOptionsEv(void *this_) {
  auto rv = ((QMainWindow*)this_)->dockOptions();
return new QMainWindow::DockOptions(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:122
// [1] bool isSeparator(const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QMainWindow11isSeparatorERK6QPoint(void *this_, QPoint* pos) {
  return (bool)((QMainWindow*)this_)->isSeparator(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:125
// [8] QMenuBar * menuBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMainWindow7menuBarEv(void *this_) {
  return (void*)((QMainWindow*)this_)->menuBar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:126
// [-2] void setMenuBar(QMenuBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow10setMenuBarEP8QMenuBar(void *this_, QMenuBar * menubar) {
  ((QMainWindow*)this_)->setMenuBar(menubar);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmainwindow.h:128
// [8] QWidget * menuWidget()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMainWindow10menuWidgetEv(void *this_) {
  return (void*)((QMainWindow*)this_)->menuWidget();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qmainwindow.h:129
// [-2] void setMenuWidget(QWidget *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow13setMenuWidgetEP7QWidget(void *this_, QWidget * menubar) {
  ((QMainWindow*)this_)->setMenuWidget(menubar);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:133
// [8] QStatusBar * statusBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMainWindow9statusBarEv(void *this_) {
  return (void*)((QMainWindow*)this_)->statusBar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:134
// [-2] void setStatusBar(QStatusBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow12setStatusBarEP10QStatusBar(void *this_, QStatusBar * statusbar) {
  ((QMainWindow*)this_)->setStatusBar(statusbar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:137
// [8] QWidget * centralWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMainWindow13centralWidgetEv(void *this_) {
  return (void*)((QMainWindow*)this_)->centralWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:138
// [-2] void setCentralWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow16setCentralWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QMainWindow*)this_)->setCentralWidget(widget);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qmainwindow.h:140
// [8] QWidget * takeCentralWidget()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN11QMainWindow17takeCentralWidgetEv(void *this_) {
  return (void*)((QMainWindow*)this_)->takeCentralWidget();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:143
// [-2] void setCorner(Qt::Corner, Qt::DockWidgetArea)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow9setCornerEN2Qt6CornerENS0_14DockWidgetAreaE(void *this_, Qt::Corner corner, Qt::DockWidgetArea area) {
  ((QMainWindow*)this_)->setCorner(corner, area);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:144
// [4] Qt::DockWidgetArea corner(Qt::Corner)
extern "C" Q_DECL_EXPORT
Qt::DockWidgetArea C_ZNK11QMainWindow6cornerEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  return (Qt::DockWidgetArea)((QMainWindow*)this_)->corner(corner);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:148
// [-2] void addToolBarBreak(Qt::ToolBarArea)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow15addToolBarBreakEN2Qt11ToolBarAreaE(void *this_, Qt::ToolBarArea area) {
  ((QMainWindow*)this_)->addToolBarBreak(area);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:149
// [-2] void insertToolBarBreak(QToolBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow18insertToolBarBreakEP8QToolBar(void *this_, QToolBar * before) {
  ((QMainWindow*)this_)->insertToolBarBreak(before);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:151
// [-2] void addToolBar(Qt::ToolBarArea, QToolBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow10addToolBarEN2Qt11ToolBarAreaEP8QToolBar(void *this_, Qt::ToolBarArea area, QToolBar * toolbar) {
  ((QMainWindow*)this_)->addToolBar(area, toolbar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:152
// [-2] void addToolBar(QToolBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow10addToolBarEP8QToolBar(void *this_, QToolBar * toolbar) {
  ((QMainWindow*)this_)->addToolBar(toolbar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:153
// [8] QToolBar * addToolBar(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QMainWindow10addToolBarERK7QString(void *this_, QString* title) {
  return (void*)((QMainWindow*)this_)->addToolBar(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:154
// [-2] void insertToolBar(QToolBar *, QToolBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow13insertToolBarEP8QToolBarS1_(void *this_, QToolBar * before, QToolBar * toolbar) {
  ((QMainWindow*)this_)->insertToolBar(before, toolbar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:155
// [-2] void removeToolBar(QToolBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow13removeToolBarEP8QToolBar(void *this_, QToolBar * toolbar) {
  ((QMainWindow*)this_)->removeToolBar(toolbar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:156
// [-2] void removeToolBarBreak(QToolBar *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow18removeToolBarBreakEP8QToolBar(void *this_, QToolBar * before) {
  ((QMainWindow*)this_)->removeToolBarBreak(before);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:158
// [1] bool unifiedTitleAndToolBarOnMac()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QMainWindow27unifiedTitleAndToolBarOnMacEv(void *this_) {
  return (bool)((QMainWindow*)this_)->unifiedTitleAndToolBarOnMac();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:160
// [4] Qt::ToolBarArea toolBarArea(QToolBar *)
extern "C" Q_DECL_EXPORT
Qt::ToolBarArea C_ZNK11QMainWindow11toolBarAreaEP8QToolBar(void *this_, QToolBar * toolbar) {
  return (Qt::ToolBarArea)((QMainWindow*)this_)->toolBarArea(toolbar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:161
// [1] bool toolBarBreak(QToolBar *)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QMainWindow12toolBarBreakEP8QToolBar(void *this_, QToolBar * toolbar) {
  return (bool)((QMainWindow*)this_)->toolBarBreak(toolbar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:164
// [-2] void addDockWidget(Qt::DockWidgetArea, QDockWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidget(void *this_, Qt::DockWidgetArea area, QDockWidget * dockwidget) {
  ((QMainWindow*)this_)->addDockWidget(area, dockwidget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:165
// [-2] void addDockWidget(Qt::DockWidgetArea, QDockWidget *, Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidgetNS0_11OrientationE(void *this_, Qt::DockWidgetArea area, QDockWidget * dockwidget, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->addDockWidget(area, dockwidget, orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:167
// [-2] void splitDockWidget(QDockWidget *, QDockWidget *, Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow15splitDockWidgetEP11QDockWidgetS1_N2Qt11OrientationE(void *this_, QDockWidget * after, QDockWidget * dockwidget, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->splitDockWidget(after, dockwidget, orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:169
// [-2] void tabifyDockWidget(QDockWidget *, QDockWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow16tabifyDockWidgetEP11QDockWidgetS1_(void *this_, QDockWidget * first, QDockWidget * second) {
  ((QMainWindow*)this_)->tabifyDockWidget(first, second);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qmainwindow.h:170
// [-2] QList<QDockWidget *> tabifiedDockWidgets(QDockWidget *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<QDockWidget *>* C_ZNK11QMainWindow19tabifiedDockWidgetsEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  auto rv = ((QMainWindow*)this_)->tabifiedDockWidgets(dockwidget);
return new QList<QDockWidget *>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:171
// [-2] void removeDockWidget(QDockWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow16removeDockWidgetEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  ((QMainWindow*)this_)->removeDockWidget(dockwidget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:172
// [1] bool restoreDockWidget(QDockWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMainWindow17restoreDockWidgetEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  return (bool)((QMainWindow*)this_)->restoreDockWidget(dockwidget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:174
// [4] Qt::DockWidgetArea dockWidgetArea(QDockWidget *)
extern "C" Q_DECL_EXPORT
Qt::DockWidgetArea C_ZNK11QMainWindow14dockWidgetAreaEP11QDockWidget(void *this_, QDockWidget * dockwidget) {
  return (Qt::DockWidgetArea)((QMainWindow*)this_)->dockWidgetArea(dockwidget);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtWidgets/qmainwindow.h:176
// [-2] void resizeDocks(const QList<QDockWidget *> &, const QList<int> &, Qt::Orientation)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow11resizeDocksERK5QListIP11QDockWidgetERKS0_IiEN2Qt11OrientationE(void *this_, QList<QDockWidget *>* docks, QList<int>* sizes, Qt::Orientation orientation) {
  ((QMainWindow*)this_)->resizeDocks(*docks, *sizes, orientation);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:180
// [8] QByteArray saveState(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QMainWindow9saveStateEi(void *this_, int version) {
  auto rv = ((QMainWindow*)this_)->saveState(version);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:181
// [1] bool restoreState(const QByteArray &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN11QMainWindow12restoreStateERK10QByteArrayi(void *this_, QByteArray* state, int version) {
  return (bool)((QMainWindow*)this_)->restoreState(*state, version);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:184
// [8] QMenu * createPopupMenu()
extern "C" Q_DECL_EXPORT
void* C_ZN11QMainWindow15createPopupMenuEv(void *this_) {
  return (void*)((QMainWindow*)this_)->createPopupMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:189
// [-2] void setAnimated(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow11setAnimatedEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setAnimated(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:190
// [-2] void setDockNestingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow21setDockNestingEnabledEb(void *this_, bool enabled) {
  ((QMainWindow*)this_)->setDockNestingEnabled(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:193
// [-2] void setUnifiedTitleAndToolBarOnMac(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow30setUnifiedTitleAndToolBarOnMacEb(void *this_, bool set) {
  ((QMainWindow*)this_)->setUnifiedTitleAndToolBarOnMac(set);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:197
// [-2] void iconSizeChanged(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow15iconSizeChangedERK5QSize(void *this_, QSize* iconSize) {
  ((QMainWindow*)this_)->iconSizeChanged(*iconSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:198
// [-2] void toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QMainWindow*)this_)->toolButtonStyleChanged(toolButtonStyle);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qmainwindow.h:200
// [-2] void tabifiedDockWidgetActivated(QDockWidget *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN11QMainWindow27tabifiedDockWidgetActivatedEP11QDockWidget(void *this_, QDockWidget * dockWidget) {
  ((QMainWindow*)this_)->tabifiedDockWidgetActivated(dockWidget);
}
#endif // QT_VERSION >= 0x050800

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
