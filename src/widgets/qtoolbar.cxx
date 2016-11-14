// /usr/include/qt/QtWidgets/qtoolbar.h
#include <qtoolbar.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qtoolbar.h:60
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QToolBar10metaObjectEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:78
// void QToolBar(const class QString &, class QWidget *)
extern "C"
void* C_ZN8QToolBarC1ERK7QStringP7QWidget(const QString & title, QWidget * parent) {
  return new QToolBar(title, parent);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:79
// void QToolBar(class QWidget *)
extern "C"
void* C_ZN8QToolBarC1EP7QWidget(QWidget * parent) {
  return new QToolBar(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtoolbar.h:80
// void ~QToolBar()
extern "C"
void C_ZN8QToolBarD1Ev(void *this_) {
  delete (QToolBar*)(this_);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:82
// void setMovable(_Bool)
extern "C"
void C_ZN8QToolBar10setMovableEb(void *this_, bool movable) {
  ((QToolBar*)this_)->setMovable(movable);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:83
// bool isMovable()
extern "C"
void C_ZNK8QToolBar9isMovableEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->isMovable();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:85
// void setAllowedAreas(Qt::ToolBarAreas)
extern "C"
void C_ZN8QToolBar15setAllowedAreasE6QFlagsIN2Qt11ToolBarAreaEE(void *this_, QFlags<Qt::ToolBarArea> areas) {
  ((QToolBar*)this_)->setAllowedAreas(areas);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:86
// Qt::ToolBarAreas allowedAreas()
extern "C"
void C_ZNK8QToolBar12allowedAreasEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->allowedAreas();
}
// inline
// /usr/include/qt/QtWidgets/qtoolbar.h:88
// bool isAreaAllowed(Qt::ToolBarArea)
extern "C"
void C_ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE(void *this_, Qt::ToolBarArea area) {
  /*return*/ ((QToolBar*)this_)->isAreaAllowed(area);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:91
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN8QToolBar14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QToolBar*)this_)->setOrientation(orientation);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:92
// Qt::Orientation orientation()
extern "C"
void C_ZNK8QToolBar11orientationEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:94
// void clear()
extern "C"
void C_ZN8QToolBar5clearEv(void *this_) {
  ((QToolBar*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:97
// QAction * addAction(const class QString &)
extern "C"
void C_ZN8QToolBar9addActionERK7QString(void *this_, const QString & text) {
  /*return*/ ((QToolBar*)this_)->addAction(text);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:98
// QAction * addAction(const class QIcon &, const class QString &)
extern "C"
void C_ZN8QToolBar9addActionERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & text) {
  /*return*/ ((QToolBar*)this_)->addAction(icon, text);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:99
// QAction * addAction(const class QString &, const class QObject *, const char *)
extern "C"
void C_ZN8QToolBar9addActionERK7QStringPK7QObjectPKc(void *this_, const QString & text, const QObject * receiver, const char * member) {
  /*return*/ ((QToolBar*)this_)->addAction(text, receiver, member);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:100
// QAction * addAction(const class QIcon &, const class QString &, const class QObject *, const char *)
extern "C"
void C_ZN8QToolBar9addActionERK5QIconRK7QStringPK7QObjectPKc(void *this_, const QIcon & icon, const QString & text, const QObject * receiver, const char * member) {
  /*return*/ ((QToolBar*)this_)->addAction(icon, text, receiver, member);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:148
// QAction * addSeparator()
extern "C"
void C_ZN8QToolBar12addSeparatorEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->addSeparator();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:149
// QAction * insertSeparator(class QAction *)
extern "C"
void C_ZN8QToolBar15insertSeparatorEP7QAction(void *this_, QAction * before) {
  /*return*/ ((QToolBar*)this_)->insertSeparator(before);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:151
// QAction * addWidget(class QWidget *)
extern "C"
void C_ZN8QToolBar9addWidgetEP7QWidget(void *this_, QWidget * widget) {
  /*return*/ ((QToolBar*)this_)->addWidget(widget);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:152
// QAction * insertWidget(class QAction *, class QWidget *)
extern "C"
void C_ZN8QToolBar12insertWidgetEP7QActionP7QWidget(void *this_, QAction * before, QWidget * widget) {
  /*return*/ ((QToolBar*)this_)->insertWidget(before, widget);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:154
// QRect actionGeometry(class QAction *)
extern "C"
void C_ZNK8QToolBar14actionGeometryEP7QAction(void *this_, QAction * action) {
  /*return*/ ((QToolBar*)this_)->actionGeometry(action);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:155
// QAction * actionAt(const class QPoint &)
extern "C"
void C_ZNK8QToolBar8actionAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QToolBar*)this_)->actionAt(p);
}
// inline
// /usr/include/qt/QtWidgets/qtoolbar.h:156
// QAction * actionAt(int, int)
extern "C"
void C_ZNK8QToolBar8actionAtEii(void *this_, int x, int y) {
  /*return*/ ((QToolBar*)this_)->actionAt(x, y);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:158
// QAction * toggleViewAction()
extern "C"
void C_ZNK8QToolBar16toggleViewActionEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->toggleViewAction();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:160
// QSize iconSize()
extern "C"
void C_ZNK8QToolBar8iconSizeEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->iconSize();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:161
// Qt::ToolButtonStyle toolButtonStyle()
extern "C"
void C_ZNK8QToolBar15toolButtonStyleEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->toolButtonStyle();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:163
// QWidget * widgetForAction(class QAction *)
extern "C"
void C_ZNK8QToolBar15widgetForActionEP7QAction(void *this_, QAction * action) {
  /*return*/ ((QToolBar*)this_)->widgetForAction(action);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:165
// bool isFloatable()
extern "C"
void C_ZNK8QToolBar11isFloatableEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->isFloatable();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:166
// void setFloatable(_Bool)
extern "C"
void C_ZN8QToolBar12setFloatableEb(void *this_, bool floatable) {
  ((QToolBar*)this_)->setFloatable(floatable);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:167
// bool isFloating()
extern "C"
void C_ZNK8QToolBar10isFloatingEv(void *this_) {
  /*return*/ ((QToolBar*)this_)->isFloating();
}
// /usr/include/qt/QtWidgets/qtoolbar.h:170
// void setIconSize(const class QSize &)
extern "C"
void C_ZN8QToolBar11setIconSizeERK5QSize(void *this_, const QSize & iconSize) {
  ((QToolBar*)this_)->setIconSize(iconSize);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:171
// void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void C_ZN8QToolBar18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QToolBar*)this_)->setToolButtonStyle(toolButtonStyle);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:174
// void actionTriggered(class QAction *)
extern "C"
void C_ZN8QToolBar15actionTriggeredEP7QAction(void *this_, QAction * action) {
  ((QToolBar*)this_)->actionTriggered(action);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:175
// void movableChanged(_Bool)
extern "C"
void C_ZN8QToolBar14movableChangedEb(void *this_, bool movable) {
  ((QToolBar*)this_)->movableChanged(movable);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:176
// void allowedAreasChanged(Qt::ToolBarAreas)
extern "C"
void C_ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(void *this_, QFlags<Qt::ToolBarArea> allowedAreas) {
  ((QToolBar*)this_)->allowedAreasChanged(allowedAreas);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:177
// void orientationChanged(Qt::Orientation)
extern "C"
void C_ZN8QToolBar18orientationChangedEN2Qt11OrientationE(void *this_, Qt::Orientation orientation) {
  ((QToolBar*)this_)->orientationChanged(orientation);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:178
// void iconSizeChanged(const class QSize &)
extern "C"
void C_ZN8QToolBar15iconSizeChangedERK5QSize(void *this_, const QSize & iconSize) {
  ((QToolBar*)this_)->iconSizeChanged(iconSize);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:179
// void toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C"
void C_ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle toolButtonStyle) {
  ((QToolBar*)this_)->toolButtonStyleChanged(toolButtonStyle);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:180
// void topLevelChanged(_Bool)
extern "C"
void C_ZN8QToolBar15topLevelChangedEb(void *this_, bool topLevel) {
  ((QToolBar*)this_)->topLevelChanged(topLevel);
}
// /usr/include/qt/QtWidgets/qtoolbar.h:181
// void visibilityChanged(_Bool)
extern "C"
void C_ZN8QToolBar17visibilityChangedEb(void *this_, bool visible) {
  ((QToolBar*)this_)->visibilityChanged(visible);
}