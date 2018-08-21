//  header block begin
// /usr/include/qt/QtWidgets/qtoolbar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtoolbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolBar is pure virtual: false
// QToolBar has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQToolBar : public QToolBar {
public:
  virtual ~MyQToolBar() {}
// void QToolBar(const QString &, QWidget *)
MyQToolBar(const QString & title, QWidget * parent) : QToolBar(title, parent) {}
// void QToolBar(QWidget *)
MyQToolBar(QWidget * parent) : QToolBar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void actionEvent(QActionEvent *)
  virtual void actionEvent(QActionEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBar::actionEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBar::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBar::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QToolBar::event(event);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOptionToolBar *)
  virtual void initStyleOption(QStyleOptionToolBar * option) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBar::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:191
// [-2] void actionEvent(QActionEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar11actionEventEP12QActionEvent(void *this_, QActionEvent * event) {
  ((QToolBar*)this_)->QToolBar::actionEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:192
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QToolBar*)this_)->QToolBar::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:193
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QToolBar*)this_)->QToolBar::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:194
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QToolBar5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QToolBar*)this_)->QToolBar::event(event);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:195
// [-2] void initStyleOption(QStyleOptionToolBar *)
extern "C" Q_DECL_EXPORT
void C_ZNK8QToolBar15initStyleOptionEP19QStyleOptionToolBar(void *this_, QStyleOptionToolBar * option) {
  ((QToolBar*)this_)->QToolBar::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBar10metaObjectEv(void *this_) {
  return (void*)((QToolBar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QToolBar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QToolBar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QToolBar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolBar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolBar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:79
// [-2] void QToolBar(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBarC2ERK7QStringP7QWidget(QString* title, QWidget * parent) {
  auto _nilp = (MyQToolBar*)(0);
  return  new MyQToolBar(*title, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:80
// [-2] void QToolBar(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQToolBar*)(0);
  return  new MyQToolBar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:81
// [-2] void ~QToolBar()
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBarD2Ev(void *this_) {
  delete (QToolBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:83
// [-2] void setMovable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar10setMovableEb(void *this_, bool movable) {
  ((QToolBar*)this_)->setMovable(movable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:84
// [1] bool isMovable()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QToolBar9isMovableEv(void *this_) {
  return (bool)((QToolBar*)this_)->isMovable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:86
// [-2] void setAllowedAreas(Qt::ToolBarAreas)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar15setAllowedAreasE6QFlagsIN2Qt11ToolBarAreaEE(void *this_, QFlags<Qt::ToolBarArea> areas) {
  ((QToolBar*)this_)->setAllowedAreas(areas);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:87
// [4] Qt::ToolBarAreas allowedAreas()
extern "C" Q_DECL_EXPORT
Qt::ToolBarAreas C_ZNK8QToolBar12allowedAreasEv(void *this_) {
  return (Qt::ToolBarAreas)((QToolBar*)this_)->allowedAreas();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:89
// [1] bool isAreaAllowed(Qt::ToolBarArea)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE(void *this_, Qt::ToolBarArea area) {
  return (bool)((QToolBar*)this_)->isAreaAllowed(area);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:92
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QToolBar*)this_)->setOrientation(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:93
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK8QToolBar11orientationEv(void *this_) {
  return (Qt::Orientation)((QToolBar*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:95
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar5clearEv(void *this_) {
  ((QToolBar*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:98
// [8] QAction * addAction(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar9addActionERK7QString(void *this_, QString* text) {
  return (void*)((QToolBar*)this_)->addAction(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:99
// [8] QAction * addAction(const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar9addActionERK5QIconRK7QString(void *this_, QIcon* icon, QString* text) {
  return (void*)((QToolBar*)this_)->addAction(*icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:100
// [8] QAction * addAction(const QString &, const QObject *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar9addActionERK7QStringPK7QObjectPKc(void *this_, QString* text, const QObject * receiver, const char * member) {
  return (void*)((QToolBar*)this_)->addAction(*text, receiver, member);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:101
// [8] QAction * addAction(const QIcon &, const QString &, const QObject *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar9addActionERK5QIconRK7QStringPK7QObjectPKc(void *this_, QIcon* icon, QString* text, const QObject * receiver, const char * member) {
  return (void*)((QToolBar*)this_)->addAction(*icon, *text, receiver, member);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:155
// [8] QAction * addSeparator()
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar12addSeparatorEv(void *this_) {
  return (void*)((QToolBar*)this_)->addSeparator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:156
// [8] QAction * insertSeparator(QAction *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar15insertSeparatorEP7QAction(void *this_, QAction * before) {
  return (void*)((QToolBar*)this_)->insertSeparator(before);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:158
// [8] QAction * addWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar9addWidgetEP7QWidget(void *this_, QWidget * widget) {
  return (void*)((QToolBar*)this_)->addWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:159
// [8] QAction * insertWidget(QAction *, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBar12insertWidgetEP7QActionP7QWidget(void *this_, QAction * before, QWidget * widget) {
  return (void*)((QToolBar*)this_)->insertWidget(before, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:161
// [16] QRect actionGeometry(QAction *)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBar14actionGeometryEP7QAction(void *this_, QAction * action) {
  auto rv = ((QToolBar*)this_)->actionGeometry(action);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:162
// [8] QAction * actionAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBar8actionAtERK6QPoint(void *this_, QPoint* p) {
  return (void*)((QToolBar*)this_)->actionAt(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:163
// [8] QAction * actionAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBar8actionAtEii(void *this_, int x, int y) {
  return (void*)((QToolBar*)this_)->actionAt(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:165
// [8] QAction * toggleViewAction()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBar16toggleViewActionEv(void *this_) {
  return (void*)((QToolBar*)this_)->toggleViewAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:167
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBar8iconSizeEv(void *this_) {
  auto rv = ((QToolBar*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:168
// [4] Qt::ToolButtonStyle toolButtonStyle()
extern "C" Q_DECL_EXPORT
Qt::ToolButtonStyle C_ZNK8QToolBar15toolButtonStyleEv(void *this_) {
  return (Qt::ToolButtonStyle)((QToolBar*)this_)->toolButtonStyle();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtoolbar.h:170
// [8] QWidget * widgetForAction(QAction *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBar15widgetForActionEP7QAction(void *this_, QAction * action) {
  return (void*)((QToolBar*)this_)->widgetForAction(action);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:172
// [1] bool isFloatable()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QToolBar11isFloatableEv(void *this_) {
  return (bool)((QToolBar*)this_)->isFloatable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:173
// [-2] void setFloatable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar12setFloatableEb(void *this_, bool floatable) {
  ((QToolBar*)this_)->setFloatable(floatable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:174
// [1] bool isFloating()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QToolBar10isFloatingEv(void *this_) {
  return (bool)((QToolBar*)this_)->isFloating();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:177
// [-2] void setIconSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar11setIconSizeERK5QSize(void *this_, QSize* iconSize) {
  ((QToolBar*)this_)->setIconSize(*iconSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:178
// [-2] void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QToolBar*)this_)->setToolButtonStyle(toolButtonStyle);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:181
// [-2] void actionTriggered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar15actionTriggeredEP7QAction(void *this_, QAction * action) {
  ((QToolBar*)this_)->actionTriggered(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:182
// [-2] void movableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar14movableChangedEb(void *this_, bool movable) {
  ((QToolBar*)this_)->movableChanged(movable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:183
// [-2] void allowedAreasChanged(Qt::ToolBarAreas)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(void *this_, QFlags<Qt::ToolBarArea> allowedAreas) {
  ((QToolBar*)this_)->allowedAreasChanged(allowedAreas);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:184
// [-2] void orientationChanged(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar18orientationChangedEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QToolBar*)this_)->orientationChanged(orientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:185
// [-2] void iconSizeChanged(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar15iconSizeChangedERK5QSize(void *this_, QSize* iconSize) {
  ((QToolBar*)this_)->iconSizeChanged(*iconSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:186
// [-2] void toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QToolBar*)this_)->toolButtonStyleChanged(toolButtonStyle);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qtoolbar.h:187
// [-2] void topLevelChanged(bool)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar15topLevelChangedEb(void *this_, bool topLevel) {
  ((QToolBar*)this_)->topLevelChanged(topLevel);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qtoolbar.h:188
// [-2] void visibilityChanged(bool)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBar17visibilityChangedEb(void *this_, bool visible) {
  ((QToolBar*)this_)->visibilityChanged(visible);
}
#endif // QT_VERSION >= 0x040700

//  main block end
