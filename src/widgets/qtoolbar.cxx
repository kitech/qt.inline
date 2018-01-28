//  header block begin
// /usr/include/qt/QtWidgets/qtoolbar.h
#include <qtoolbar.h>
#include <QtWidgets>

// QToolBar is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:191
// [-2] void actionEvent(class QActionEvent *)
extern "C"
void* callback_ZN8QToolBar11actionEventEP12QActionEvent = 0;
extern "C" void set_callback_ZN8QToolBar11actionEventEP12QActionEvent(void*cbfn)
{ callback_ZN8QToolBar11actionEventEP12QActionEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:192
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN8QToolBar11changeEventEP6QEvent = 0;
extern "C" void set_callback_ZN8QToolBar11changeEventEP6QEvent(void*cbfn)
{ callback_ZN8QToolBar11changeEventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:193
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN8QToolBar10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN8QToolBar10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN8QToolBar10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:194
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN8QToolBar5eventEP6QEvent = 0;
extern "C" void set_callback_ZN8QToolBar5eventEP6QEvent(void*cbfn)
{ callback_ZN8QToolBar5eventEP6QEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:195
// [-2] void initStyleOption(class QStyleOptionToolBar *)
extern "C"
void* callback_ZNK8QToolBar15initStyleOptionEP19QStyleOptionToolBar = 0;
extern "C" void set_callback_ZNK8QToolBar15initStyleOptionEP19QStyleOptionToolBar(void*cbfn)
{ callback_ZNK8QToolBar15initStyleOptionEP19QStyleOptionToolBar = cbfn; }

class MyQToolBar : public QToolBar {
public:
MyQToolBar(const QString & title, QWidget * parent) : QToolBar(title, parent) {}
MyQToolBar(QWidget * parent) : QToolBar(parent) {}
// void actionEvent(class QActionEvent *)
// void actionEvent(class QActionEvent *)
virtual void actionEvent(QActionEvent * event) {
  if (callback_ZN8QToolBar11actionEventEP12QActionEvent != 0) {
  // callback_ZN8QToolBar11actionEventEP12QActionEvent(event);
}}
// void changeEvent(class QEvent *)
// void changeEvent(class QEvent *)
virtual void changeEvent(QEvent * event) {
  if (callback_ZN8QToolBar11changeEventEP6QEvent != 0) {
  // callback_ZN8QToolBar11changeEventEP6QEvent(event);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * event) {
  if (callback_ZN8QToolBar10paintEventEP11QPaintEvent != 0) {
  // callback_ZN8QToolBar10paintEventEP11QPaintEvent(event);
}}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * event) {
  if (callback_ZN8QToolBar5eventEP6QEvent != 0) {
  // callback_ZN8QToolBar5eventEP6QEvent(event);
}}
// void initStyleOption(class QStyleOptionToolBar *)
// void initStyleOption(class QStyleOptionToolBar *)
virtual void initStyleOption(QStyleOptionToolBar * option) {
  if (callback_ZNK8QToolBar15initStyleOptionEP19QStyleOptionToolBar != 0) {
  // callback_ZNK8QToolBar15initStyleOptionEP19QStyleOptionToolBar(option);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:61
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK8QToolBar10metaObjectEv(void *this_) {
  return (void*)((QToolBar*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:79
// [-2] void QToolBar(const class QString &, class QWidget *)
extern "C"
void* C_ZN8QToolBarC1ERK7QStringP7QWidget(const QString & title, QWidget * parent) {
  (MyQToolBar*)(0);
  return  new MyQToolBar(title, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:80
// [-2] void QToolBar(class QWidget *)
extern "C"
void* C_ZN8QToolBarC1EP7QWidget(QWidget * parent) {
  (MyQToolBar*)(0);
  return  new MyQToolBar(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:81
// [-2] void ~QToolBar()
extern "C"
void C_ZN8QToolBarD1Ev(void *this_) {
  delete (QToolBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:83
// [-2] void setMovable(_Bool)
extern "C"
void C_ZN8QToolBar10setMovableEb(void *this_, bool movable) {
  ((QToolBar*)this_)->setMovable(movable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:84
// [1] bool isMovable()
extern "C"
bool C_ZNK8QToolBar9isMovableEv(void *this_) {
  return (bool)((QToolBar*)this_)->isMovable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:87
// [4] Qt::ToolBarAreas allowedAreas()
extern "C"
Qt::ToolBarAreas C_ZNK8QToolBar12allowedAreasEv(void *this_) {
  return (Qt::ToolBarAreas)((QToolBar*)this_)->allowedAreas();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:89
// [1] bool isAreaAllowed(Qt::ToolBarArea)
extern "C"
bool C_ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE(void *this_, Qt::ToolBarArea area) {
  return (bool)((QToolBar*)this_)->isAreaAllowed(area);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:92
// [-2] void setOrientation(Qt::Orientation)
extern "C"
void C_ZN8QToolBar14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QToolBar*)this_)->setOrientation(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:93
// [4] Qt::Orientation orientation()
extern "C"
Qt::Orientation C_ZNK8QToolBar11orientationEv(void *this_) {
  return (Qt::Orientation)((QToolBar*)this_)->orientation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:95
// [-2] void clear()
extern "C"
void C_ZN8QToolBar5clearEv(void *this_) {
  ((QToolBar*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:98
// [8] QAction * addAction(const class QString &)
extern "C"
void* C_ZN8QToolBar9addActionERK7QString(void *this_, const QString & text) {
  return (void*)((QToolBar*)this_)->addAction(text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:99
// [8] QAction * addAction(const class QIcon &, const class QString &)
extern "C"
void* C_ZN8QToolBar9addActionERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & text) {
  return (void*)((QToolBar*)this_)->addAction(icon, text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:100
// [8] QAction * addAction(const class QString &, const class QObject *, const char *)
extern "C"
void* C_ZN8QToolBar9addActionERK7QStringPK7QObjectPKc(void *this_, const QString & text, const QObject * receiver, const char * member) {
  return (void*)((QToolBar*)this_)->addAction(text, receiver, member);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:101
// [8] QAction * addAction(const class QIcon &, const class QString &, const class QObject *, const char *)
extern "C"
void* C_ZN8QToolBar9addActionERK5QIconRK7QStringPK7QObjectPKc(void *this_, const QIcon & icon, const QString & text, const QObject * receiver, const char * member) {
  return (void*)((QToolBar*)this_)->addAction(icon, text, receiver, member);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:155
// [8] QAction * addSeparator()
extern "C"
void* C_ZN8QToolBar12addSeparatorEv(void *this_) {
  return (void*)((QToolBar*)this_)->addSeparator();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:156
// [8] QAction * insertSeparator(class QAction *)
extern "C"
void* C_ZN8QToolBar15insertSeparatorEP7QAction(void *this_, QAction * before) {
  return (void*)((QToolBar*)this_)->insertSeparator(before);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:158
// [8] QAction * addWidget(class QWidget *)
extern "C"
void* C_ZN8QToolBar9addWidgetEP7QWidget(void *this_, QWidget * widget) {
  return (void*)((QToolBar*)this_)->addWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:159
// [8] QAction * insertWidget(class QAction *, class QWidget *)
extern "C"
void* C_ZN8QToolBar12insertWidgetEP7QActionP7QWidget(void *this_, QAction * before, QWidget * widget) {
  return (void*)((QToolBar*)this_)->insertWidget(before, widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:161
// [16] QRect actionGeometry(class QAction *)
extern "C"
void* C_ZNK8QToolBar14actionGeometryEP7QAction(void *this_, QAction * action) {
  auto rv = ((QToolBar*)this_)->actionGeometry(action);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:162
// [8] QAction * actionAt(const class QPoint &)
extern "C"
void* C_ZNK8QToolBar8actionAtERK6QPoint(void *this_, const QPoint & p) {
  return (void*)((QToolBar*)this_)->actionAt(p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:163
// [8] QAction * actionAt(int, int)
extern "C"
void* C_ZNK8QToolBar8actionAtEii(void *this_, int x, int y) {
  return (void*)((QToolBar*)this_)->actionAt(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:165
// [8] QAction * toggleViewAction()
extern "C"
void* C_ZNK8QToolBar16toggleViewActionEv(void *this_) {
  return (void*)((QToolBar*)this_)->toggleViewAction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:167
// [8] QSize iconSize()
extern "C"
void* C_ZNK8QToolBar8iconSizeEv(void *this_) {
  auto rv = ((QToolBar*)this_)->iconSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:168
// [4] Qt::ToolButtonStyle toolButtonStyle()
extern "C"
Qt::ToolButtonStyle C_ZNK8QToolBar15toolButtonStyleEv(void *this_) {
  return (Qt::ToolButtonStyle)((QToolBar*)this_)->toolButtonStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:170
// [8] QWidget * widgetForAction(class QAction *)
extern "C"
void* C_ZNK8QToolBar15widgetForActionEP7QAction(void *this_, QAction * action) {
  return (void*)((QToolBar*)this_)->widgetForAction(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:172
// [1] bool isFloatable()
extern "C"
bool C_ZNK8QToolBar11isFloatableEv(void *this_) {
  return (bool)((QToolBar*)this_)->isFloatable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:173
// [-2] void setFloatable(_Bool)
extern "C"
void C_ZN8QToolBar12setFloatableEb(void *this_, bool floatable) {
  ((QToolBar*)this_)->setFloatable(floatable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:174
// [1] bool isFloating()
extern "C"
bool C_ZNK8QToolBar10isFloatingEv(void *this_) {
  return (bool)((QToolBar*)this_)->isFloating();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:177
// [-2] void setIconSize(const class QSize &)
extern "C"
void C_ZN8QToolBar11setIconSizeERK5QSize(void *this_, const QSize & iconSize) {
  ((QToolBar*)this_)->setIconSize(iconSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:178
// [-2] void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void C_ZN8QToolBar18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QToolBar*)this_)->setToolButtonStyle(toolButtonStyle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:181
// [-2] void actionTriggered(class QAction *)
extern "C"
void C_ZN8QToolBar15actionTriggeredEP7QAction(void *this_, QAction * action) {
  ((QToolBar*)this_)->actionTriggered(action);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:182
// [-2] void movableChanged(_Bool)
extern "C"
void C_ZN8QToolBar14movableChangedEb(void *this_, bool movable) {
  ((QToolBar*)this_)->movableChanged(movable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:184
// [-2] void orientationChanged(Qt::Orientation)
extern "C"
void C_ZN8QToolBar18orientationChangedEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QToolBar*)this_)->orientationChanged(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:185
// [-2] void iconSizeChanged(const class QSize &)
extern "C"
void C_ZN8QToolBar15iconSizeChangedERK5QSize(void *this_, const QSize & iconSize) {
  ((QToolBar*)this_)->iconSizeChanged(iconSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:186
// [-2] void toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C"
void C_ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QToolBar*)this_)->toolButtonStyleChanged(toolButtonStyle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:187
// [-2] void topLevelChanged(_Bool)
extern "C"
void C_ZN8QToolBar15topLevelChangedEb(void *this_, bool topLevel) {
  ((QToolBar*)this_)->topLevelChanged(topLevel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:188
// [-2] void visibilityChanged(_Bool)
extern "C"
void C_ZN8QToolBar17visibilityChangedEb(void *this_, bool visible) {
  ((QToolBar*)this_)->visibilityChanged(visible);
}
//  main block end
