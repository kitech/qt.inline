// /usr/include/qt/QtWidgets/qtabbar.h
#include <qtabbar.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qtabbar.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QTabBar10metaObjectEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtabbar.h:74
// void QTabBar(class QWidget *)
extern "C"
void* C_ZN7QTabBarC1EP7QWidget(QWidget * parent) {
  return new QTabBar(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtabbar.h:75
// void ~QTabBar()
extern "C"
void C_ZN7QTabBarD1Ev(void *this_) {
  delete (QTabBar*)(this_);
}
// /usr/include/qt/QtWidgets/qtabbar.h:93
// QTabBar::Shape shape()
extern "C"
void C_ZNK7QTabBar5shapeEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->shape();
}
// /usr/include/qt/QtWidgets/qtabbar.h:94
// void setShape(enum QTabBar::Shape)
extern "C"
void C_ZN7QTabBar8setShapeENS_5ShapeE(void *this_, QTabBar::Shape shape) {
  ((QTabBar*)this_)->setShape(shape);
}
// /usr/include/qt/QtWidgets/qtabbar.h:96
// int addTab(const class QString &)
extern "C"
void C_ZN7QTabBar6addTabERK7QString(void *this_, const QString & text) {
  /*return*/ ((QTabBar*)this_)->addTab(text);
}
// /usr/include/qt/QtWidgets/qtabbar.h:97
// int addTab(const class QIcon &, const class QString &)
extern "C"
void C_ZN7QTabBar6addTabERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & text) {
  /*return*/ ((QTabBar*)this_)->addTab(icon, text);
}
// /usr/include/qt/QtWidgets/qtabbar.h:99
// int insertTab(int, const class QString &)
extern "C"
void C_ZN7QTabBar9insertTabEiRK7QString(void *this_, int index, const QString & text) {
  /*return*/ ((QTabBar*)this_)->insertTab(index, text);
}
// /usr/include/qt/QtWidgets/qtabbar.h:100
// int insertTab(int, const class QIcon &, const class QString &)
extern "C"
void C_ZN7QTabBar9insertTabEiRK5QIconRK7QString(void *this_, int index, const QIcon & icon, const QString & text) {
  /*return*/ ((QTabBar*)this_)->insertTab(index, icon, text);
}
// /usr/include/qt/QtWidgets/qtabbar.h:102
// void removeTab(int)
extern "C"
void C_ZN7QTabBar9removeTabEi(void *this_, int index) {
  ((QTabBar*)this_)->removeTab(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:103
// void moveTab(int, int)
extern "C"
void C_ZN7QTabBar7moveTabEii(void *this_, int from, int to) {
  ((QTabBar*)this_)->moveTab(from, to);
}
// /usr/include/qt/QtWidgets/qtabbar.h:105
// bool isTabEnabled(int)
extern "C"
void C_ZNK7QTabBar12isTabEnabledEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->isTabEnabled(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:106
// void setTabEnabled(int, _Bool)
extern "C"
void C_ZN7QTabBar13setTabEnabledEib(void *this_, int index, bool a1) {
  ((QTabBar*)this_)->setTabEnabled(index, a1);
}
// /usr/include/qt/QtWidgets/qtabbar.h:108
// QString tabText(int)
extern "C"
void C_ZNK7QTabBar7tabTextEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->tabText(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:109
// void setTabText(int, const class QString &)
extern "C"
void C_ZN7QTabBar10setTabTextEiRK7QString(void *this_, int index, const QString & text) {
  ((QTabBar*)this_)->setTabText(index, text);
}
// /usr/include/qt/QtWidgets/qtabbar.h:111
// QColor tabTextColor(int)
extern "C"
void C_ZNK7QTabBar12tabTextColorEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->tabTextColor(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:112
// void setTabTextColor(int, const class QColor &)
extern "C"
void C_ZN7QTabBar15setTabTextColorEiRK6QColor(void *this_, int index, const QColor & color) {
  ((QTabBar*)this_)->setTabTextColor(index, color);
}
// /usr/include/qt/QtWidgets/qtabbar.h:114
// QIcon tabIcon(int)
extern "C"
void C_ZNK7QTabBar7tabIconEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->tabIcon(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:115
// void setTabIcon(int, const class QIcon &)
extern "C"
void C_ZN7QTabBar10setTabIconEiRK5QIcon(void *this_, int index, const QIcon & icon) {
  ((QTabBar*)this_)->setTabIcon(index, icon);
}
// /usr/include/qt/QtWidgets/qtabbar.h:117
// Qt::TextElideMode elideMode()
extern "C"
void C_ZNK7QTabBar9elideModeEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->elideMode();
}
// /usr/include/qt/QtWidgets/qtabbar.h:118
// void setElideMode(Qt::TextElideMode)
extern "C"
void C_ZN7QTabBar12setElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode a0) {
  ((QTabBar*)this_)->setElideMode(a0);
}
// /usr/include/qt/QtWidgets/qtabbar.h:121
// void setTabToolTip(int, const class QString &)
extern "C"
void C_ZN7QTabBar13setTabToolTipEiRK7QString(void *this_, int index, const QString & tip) {
  ((QTabBar*)this_)->setTabToolTip(index, tip);
}
// /usr/include/qt/QtWidgets/qtabbar.h:122
// QString tabToolTip(int)
extern "C"
void C_ZNK7QTabBar10tabToolTipEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->tabToolTip(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:126
// void setTabWhatsThis(int, const class QString &)
extern "C"
void C_ZN7QTabBar15setTabWhatsThisEiRK7QString(void *this_, int index, const QString & text) {
  ((QTabBar*)this_)->setTabWhatsThis(index, text);
}
// /usr/include/qt/QtWidgets/qtabbar.h:127
// QString tabWhatsThis(int)
extern "C"
void C_ZNK7QTabBar12tabWhatsThisEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->tabWhatsThis(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:130
// void setTabData(int, const class QVariant &)
extern "C"
void C_ZN7QTabBar10setTabDataEiRK8QVariant(void *this_, int index, const QVariant & data) {
  ((QTabBar*)this_)->setTabData(index, data);
}
// /usr/include/qt/QtWidgets/qtabbar.h:131
// QVariant tabData(int)
extern "C"
void C_ZNK7QTabBar7tabDataEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->tabData(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:133
// QRect tabRect(int)
extern "C"
void C_ZNK7QTabBar7tabRectEi(void *this_, int index) {
  /*return*/ ((QTabBar*)this_)->tabRect(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:134
// int tabAt(const class QPoint &)
extern "C"
void C_ZNK7QTabBar5tabAtERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QTabBar*)this_)->tabAt(pos);
}
// /usr/include/qt/QtWidgets/qtabbar.h:136
// int currentIndex()
extern "C"
void C_ZNK7QTabBar12currentIndexEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qtabbar.h:137
// int count()
extern "C"
void C_ZNK7QTabBar5countEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->count();
}
// virtual
// /usr/include/qt/QtWidgets/qtabbar.h:139
// QSize sizeHint()
extern "C"
void C_ZNK7QTabBar8sizeHintEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qtabbar.h:140
// QSize minimumSizeHint()
extern "C"
void C_ZNK7QTabBar15minimumSizeHintEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qtabbar.h:142
// void setDrawBase(_Bool)
extern "C"
void C_ZN7QTabBar11setDrawBaseEb(void *this_, bool drawTheBase) {
  ((QTabBar*)this_)->setDrawBase(drawTheBase);
}
// /usr/include/qt/QtWidgets/qtabbar.h:143
// bool drawBase()
extern "C"
void C_ZNK7QTabBar8drawBaseEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->drawBase();
}
// /usr/include/qt/QtWidgets/qtabbar.h:145
// QSize iconSize()
extern "C"
void C_ZNK7QTabBar8iconSizeEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->iconSize();
}
// /usr/include/qt/QtWidgets/qtabbar.h:146
// void setIconSize(const class QSize &)
extern "C"
void C_ZN7QTabBar11setIconSizeERK5QSize(void *this_, const QSize & size) {
  ((QTabBar*)this_)->setIconSize(size);
}
// /usr/include/qt/QtWidgets/qtabbar.h:148
// bool usesScrollButtons()
extern "C"
void C_ZNK7QTabBar17usesScrollButtonsEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->usesScrollButtons();
}
// /usr/include/qt/QtWidgets/qtabbar.h:149
// void setUsesScrollButtons(_Bool)
extern "C"
void C_ZN7QTabBar20setUsesScrollButtonsEb(void *this_, bool useButtons) {
  ((QTabBar*)this_)->setUsesScrollButtons(useButtons);
}
// /usr/include/qt/QtWidgets/qtabbar.h:151
// bool tabsClosable()
extern "C"
void C_ZNK7QTabBar12tabsClosableEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->tabsClosable();
}
// /usr/include/qt/QtWidgets/qtabbar.h:152
// void setTabsClosable(_Bool)
extern "C"
void C_ZN7QTabBar15setTabsClosableEb(void *this_, bool closable) {
  ((QTabBar*)this_)->setTabsClosable(closable);
}
// /usr/include/qt/QtWidgets/qtabbar.h:154
// void setTabButton(int, enum QTabBar::ButtonPosition, class QWidget *)
extern "C"
void C_ZN7QTabBar12setTabButtonEiNS_14ButtonPositionEP7QWidget(void *this_, int index, QTabBar::ButtonPosition position, QWidget * widget) {
  ((QTabBar*)this_)->setTabButton(index, position, widget);
}
// /usr/include/qt/QtWidgets/qtabbar.h:155
// QWidget * tabButton(int, enum QTabBar::ButtonPosition)
extern "C"
void C_ZNK7QTabBar9tabButtonEiNS_14ButtonPositionE(void *this_, int index, QTabBar::ButtonPosition position) {
  /*return*/ ((QTabBar*)this_)->tabButton(index, position);
}
// /usr/include/qt/QtWidgets/qtabbar.h:157
// QTabBar::SelectionBehavior selectionBehaviorOnRemove()
extern "C"
void C_ZNK7QTabBar25selectionBehaviorOnRemoveEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->selectionBehaviorOnRemove();
}
// /usr/include/qt/QtWidgets/qtabbar.h:158
// void setSelectionBehaviorOnRemove(enum QTabBar::SelectionBehavior)
extern "C"
void C_ZN7QTabBar28setSelectionBehaviorOnRemoveENS_17SelectionBehaviorE(void *this_, QTabBar::SelectionBehavior behavior) {
  ((QTabBar*)this_)->setSelectionBehaviorOnRemove(behavior);
}
// /usr/include/qt/QtWidgets/qtabbar.h:160
// bool expanding()
extern "C"
void C_ZNK7QTabBar9expandingEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->expanding();
}
// /usr/include/qt/QtWidgets/qtabbar.h:161
// void setExpanding(_Bool)
extern "C"
void C_ZN7QTabBar12setExpandingEb(void *this_, bool enabled) {
  ((QTabBar*)this_)->setExpanding(enabled);
}
// /usr/include/qt/QtWidgets/qtabbar.h:163
// bool isMovable()
extern "C"
void C_ZNK7QTabBar9isMovableEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->isMovable();
}
// /usr/include/qt/QtWidgets/qtabbar.h:164
// void setMovable(_Bool)
extern "C"
void C_ZN7QTabBar10setMovableEb(void *this_, bool movable) {
  ((QTabBar*)this_)->setMovable(movable);
}
// /usr/include/qt/QtWidgets/qtabbar.h:166
// bool documentMode()
extern "C"
void C_ZNK7QTabBar12documentModeEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->documentMode();
}
// /usr/include/qt/QtWidgets/qtabbar.h:167
// void setDocumentMode(_Bool)
extern "C"
void C_ZN7QTabBar15setDocumentModeEb(void *this_, bool set) {
  ((QTabBar*)this_)->setDocumentMode(set);
}
// /usr/include/qt/QtWidgets/qtabbar.h:169
// bool autoHide()
extern "C"
void C_ZNK7QTabBar8autoHideEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->autoHide();
}
// /usr/include/qt/QtWidgets/qtabbar.h:170
// void setAutoHide(_Bool)
extern "C"
void C_ZN7QTabBar11setAutoHideEb(void *this_, bool hide) {
  ((QTabBar*)this_)->setAutoHide(hide);
}
// /usr/include/qt/QtWidgets/qtabbar.h:172
// bool changeCurrentOnDrag()
extern "C"
void C_ZNK7QTabBar19changeCurrentOnDragEv(void *this_) {
  /*return*/ ((QTabBar*)this_)->changeCurrentOnDrag();
}
// /usr/include/qt/QtWidgets/qtabbar.h:173
// void setChangeCurrentOnDrag(_Bool)
extern "C"
void C_ZN7QTabBar22setChangeCurrentOnDragEb(void *this_, bool change) {
  ((QTabBar*)this_)->setChangeCurrentOnDrag(change);
}
// /usr/include/qt/QtWidgets/qtabbar.h:176
// void setCurrentIndex(int)
extern "C"
void C_ZN7QTabBar15setCurrentIndexEi(void *this_, int index) {
  ((QTabBar*)this_)->setCurrentIndex(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:179
// void currentChanged(int)
extern "C"
void C_ZN7QTabBar14currentChangedEi(void *this_, int index) {
  ((QTabBar*)this_)->currentChanged(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:180
// void tabCloseRequested(int)
extern "C"
void C_ZN7QTabBar17tabCloseRequestedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabCloseRequested(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:181
// void tabMoved(int, int)
extern "C"
void C_ZN7QTabBar8tabMovedEii(void *this_, int from, int to) {
  ((QTabBar*)this_)->tabMoved(from, to);
}
// /usr/include/qt/QtWidgets/qtabbar.h:182
// void tabBarClicked(int)
extern "C"
void C_ZN7QTabBar13tabBarClickedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabBarClicked(index);
}
// /usr/include/qt/QtWidgets/qtabbar.h:183
// void tabBarDoubleClicked(int)
extern "C"
void C_ZN7QTabBar19tabBarDoubleClickedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabBarDoubleClicked(index);
}