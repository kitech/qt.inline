// /usr/include/qt/QtWidgets/qtabwidget.h
#include <qtabwidget.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qtabwidget.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QTabWidget10metaObjectEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:71
// void QTabWidget(class QWidget *)
extern "C"
void* C_ZN10QTabWidgetC1EP7QWidget(QWidget * parent) {
  return new QTabWidget(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtabwidget.h:72
// void ~QTabWidget()
extern "C"
void C_ZN10QTabWidgetD1Ev(void *this_) {
  delete (QTabWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:74
// int addTab(class QWidget *, const class QString &)
extern "C"
void C_ZN10QTabWidget6addTabEP7QWidgetRK7QString(void *this_, QWidget * widget, const QString & a1) {
  /*return*/ ((QTabWidget*)this_)->addTab(widget, a1);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:75
// int addTab(class QWidget *, const class QIcon &, const class QString &)
extern "C"
void C_ZN10QTabWidget6addTabEP7QWidgetRK5QIconRK7QString(void *this_, QWidget * widget, const QIcon & icon, const QString & label) {
  /*return*/ ((QTabWidget*)this_)->addTab(widget, icon, label);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:77
// int insertTab(int, class QWidget *, const class QString &)
extern "C"
void C_ZN10QTabWidget9insertTabEiP7QWidgetRK7QString(void *this_, int index, QWidget * widget, const QString & a2) {
  /*return*/ ((QTabWidget*)this_)->insertTab(index, widget, a2);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:78
// int insertTab(int, class QWidget *, const class QIcon &, const class QString &)
extern "C"
void C_ZN10QTabWidget9insertTabEiP7QWidgetRK5QIconRK7QString(void *this_, int index, QWidget * widget, const QIcon & icon, const QString & label) {
  /*return*/ ((QTabWidget*)this_)->insertTab(index, widget, icon, label);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:80
// void removeTab(int)
extern "C"
void C_ZN10QTabWidget9removeTabEi(void *this_, int index) {
  ((QTabWidget*)this_)->removeTab(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:82
// bool isTabEnabled(int)
extern "C"
void C_ZNK10QTabWidget12isTabEnabledEi(void *this_, int index) {
  /*return*/ ((QTabWidget*)this_)->isTabEnabled(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:83
// void setTabEnabled(int, _Bool)
extern "C"
void C_ZN10QTabWidget13setTabEnabledEib(void *this_, int index, bool a1) {
  ((QTabWidget*)this_)->setTabEnabled(index, a1);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:85
// QString tabText(int)
extern "C"
void C_ZNK10QTabWidget7tabTextEi(void *this_, int index) {
  /*return*/ ((QTabWidget*)this_)->tabText(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:86
// void setTabText(int, const class QString &)
extern "C"
void C_ZN10QTabWidget10setTabTextEiRK7QString(void *this_, int index, const QString & a1) {
  ((QTabWidget*)this_)->setTabText(index, a1);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:88
// QIcon tabIcon(int)
extern "C"
void C_ZNK10QTabWidget7tabIconEi(void *this_, int index) {
  /*return*/ ((QTabWidget*)this_)->tabIcon(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:89
// void setTabIcon(int, const class QIcon &)
extern "C"
void C_ZN10QTabWidget10setTabIconEiRK5QIcon(void *this_, int index, const QIcon & icon) {
  ((QTabWidget*)this_)->setTabIcon(index, icon);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:92
// void setTabToolTip(int, const class QString &)
extern "C"
void C_ZN10QTabWidget13setTabToolTipEiRK7QString(void *this_, int index, const QString & tip) {
  ((QTabWidget*)this_)->setTabToolTip(index, tip);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:93
// QString tabToolTip(int)
extern "C"
void C_ZNK10QTabWidget10tabToolTipEi(void *this_, int index) {
  /*return*/ ((QTabWidget*)this_)->tabToolTip(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:97
// void setTabWhatsThis(int, const class QString &)
extern "C"
void C_ZN10QTabWidget15setTabWhatsThisEiRK7QString(void *this_, int index, const QString & text) {
  ((QTabWidget*)this_)->setTabWhatsThis(index, text);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:98
// QString tabWhatsThis(int)
extern "C"
void C_ZNK10QTabWidget12tabWhatsThisEi(void *this_, int index) {
  /*return*/ ((QTabWidget*)this_)->tabWhatsThis(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:101
// int currentIndex()
extern "C"
void C_ZNK10QTabWidget12currentIndexEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:102
// QWidget * currentWidget()
extern "C"
void C_ZNK10QTabWidget13currentWidgetEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->currentWidget();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:103
// QWidget * widget(int)
extern "C"
void C_ZNK10QTabWidget6widgetEi(void *this_, int index) {
  /*return*/ ((QTabWidget*)this_)->widget(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:104
// int indexOf(class QWidget *)
extern "C"
void C_ZNK10QTabWidget7indexOfEP7QWidget(void *this_, QWidget * widget) {
  /*return*/ ((QTabWidget*)this_)->indexOf(widget);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:105
// int count()
extern "C"
void C_ZNK10QTabWidget5countEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->count();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:109
// QTabWidget::TabPosition tabPosition()
extern "C"
void C_ZNK10QTabWidget11tabPositionEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->tabPosition();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:110
// void setTabPosition(enum QTabWidget::TabPosition)
extern "C"
void C_ZN10QTabWidget14setTabPositionENS_11TabPositionE(void *this_, QTabWidget::TabPosition a0) {
  ((QTabWidget*)this_)->setTabPosition(a0);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:112
// bool tabsClosable()
extern "C"
void C_ZNK10QTabWidget12tabsClosableEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->tabsClosable();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:113
// void setTabsClosable(_Bool)
extern "C"
void C_ZN10QTabWidget15setTabsClosableEb(void *this_, bool closeable) {
  ((QTabWidget*)this_)->setTabsClosable(closeable);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:115
// bool isMovable()
extern "C"
void C_ZNK10QTabWidget9isMovableEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->isMovable();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:116
// void setMovable(_Bool)
extern "C"
void C_ZN10QTabWidget10setMovableEb(void *this_, bool movable) {
  ((QTabWidget*)this_)->setMovable(movable);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:120
// QTabWidget::TabShape tabShape()
extern "C"
void C_ZNK10QTabWidget8tabShapeEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->tabShape();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:121
// void setTabShape(enum QTabWidget::TabShape)
extern "C"
void C_ZN10QTabWidget11setTabShapeENS_8TabShapeE(void *this_, QTabWidget::TabShape s) {
  ((QTabWidget*)this_)->setTabShape(s);
}
// virtual
// /usr/include/qt/QtWidgets/qtabwidget.h:123
// QSize sizeHint()
extern "C"
void C_ZNK10QTabWidget8sizeHintEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qtabwidget.h:124
// QSize minimumSizeHint()
extern "C"
void C_ZNK10QTabWidget15minimumSizeHintEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->minimumSizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qtabwidget.h:125
// int heightForWidth(int)
extern "C"
void C_ZNK10QTabWidget14heightForWidthEi(void *this_, int width) {
  /*return*/ ((QTabWidget*)this_)->heightForWidth(width);
}
// virtual
// /usr/include/qt/QtWidgets/qtabwidget.h:126
// bool hasHeightForWidth()
extern "C"
void C_ZNK10QTabWidget17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->hasHeightForWidth();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:128
// void setCornerWidget(class QWidget *, Qt::Corner)
extern "C"
void C_ZN10QTabWidget15setCornerWidgetEP7QWidgetN2Qt6CornerE(void *this_, QWidget * w, Qt::Corner corner) {
  ((QTabWidget*)this_)->setCornerWidget(w, corner);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:129
// QWidget * cornerWidget(Qt::Corner)
extern "C"
void C_ZNK10QTabWidget12cornerWidgetEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  /*return*/ ((QTabWidget*)this_)->cornerWidget(corner);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:131
// Qt::TextElideMode elideMode()
extern "C"
void C_ZNK10QTabWidget9elideModeEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->elideMode();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:132
// void setElideMode(Qt::TextElideMode)
extern "C"
void C_ZN10QTabWidget12setElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode a0) {
  ((QTabWidget*)this_)->setElideMode(a0);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:134
// QSize iconSize()
extern "C"
void C_ZNK10QTabWidget8iconSizeEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->iconSize();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:135
// void setIconSize(const class QSize &)
extern "C"
void C_ZN10QTabWidget11setIconSizeERK5QSize(void *this_, const QSize & size) {
  ((QTabWidget*)this_)->setIconSize(size);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:137
// bool usesScrollButtons()
extern "C"
void C_ZNK10QTabWidget17usesScrollButtonsEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->usesScrollButtons();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:138
// void setUsesScrollButtons(_Bool)
extern "C"
void C_ZN10QTabWidget20setUsesScrollButtonsEb(void *this_, bool useButtons) {
  ((QTabWidget*)this_)->setUsesScrollButtons(useButtons);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:140
// bool documentMode()
extern "C"
void C_ZNK10QTabWidget12documentModeEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->documentMode();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:141
// void setDocumentMode(_Bool)
extern "C"
void C_ZN10QTabWidget15setDocumentModeEb(void *this_, bool set) {
  ((QTabWidget*)this_)->setDocumentMode(set);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:143
// bool tabBarAutoHide()
extern "C"
void C_ZNK10QTabWidget14tabBarAutoHideEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->tabBarAutoHide();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:144
// void setTabBarAutoHide(_Bool)
extern "C"
void C_ZN10QTabWidget17setTabBarAutoHideEb(void *this_, bool enabled) {
  ((QTabWidget*)this_)->setTabBarAutoHide(enabled);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:146
// void clear()
extern "C"
void C_ZN10QTabWidget5clearEv(void *this_) {
  ((QTabWidget*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:148
// QTabBar * tabBar()
extern "C"
void C_ZNK10QTabWidget6tabBarEv(void *this_) {
  /*return*/ ((QTabWidget*)this_)->tabBar();
}
// /usr/include/qt/QtWidgets/qtabwidget.h:151
// void setCurrentIndex(int)
extern "C"
void C_ZN10QTabWidget15setCurrentIndexEi(void *this_, int index) {
  ((QTabWidget*)this_)->setCurrentIndex(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:152
// void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN10QTabWidget16setCurrentWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QTabWidget*)this_)->setCurrentWidget(widget);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:155
// void currentChanged(int)
extern "C"
void C_ZN10QTabWidget14currentChangedEi(void *this_, int index) {
  ((QTabWidget*)this_)->currentChanged(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:156
// void tabCloseRequested(int)
extern "C"
void C_ZN10QTabWidget17tabCloseRequestedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabCloseRequested(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:157
// void tabBarClicked(int)
extern "C"
void C_ZN10QTabWidget13tabBarClickedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabBarClicked(index);
}
// /usr/include/qt/QtWidgets/qtabwidget.h:158
// void tabBarDoubleClicked(int)
extern "C"
void C_ZN10QTabWidget19tabBarDoubleClickedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabBarDoubleClicked(index);
}