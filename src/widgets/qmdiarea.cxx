// /usr/include/qt/QtWidgets/qmdiarea.h
#include <qmdiarea.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qmdiarea.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QMdiArea10metaObjectEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:88
// void QMdiArea(class QWidget *)
extern "C"
void* C_ZN8QMdiAreaC1EP7QWidget(QWidget * parent) {
  return new QMdiArea(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qmdiarea.h:89
// void ~QMdiArea()
extern "C"
void C_ZN8QMdiAreaD1Ev(void *this_) {
  delete (QMdiArea*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qmdiarea.h:91
// QSize sizeHint()
extern "C"
void C_ZNK8QMdiArea8sizeHintEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qmdiarea.h:92
// QSize minimumSizeHint()
extern "C"
void C_ZNK8QMdiArea15minimumSizeHintEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:94
// QMdiSubWindow * currentSubWindow()
extern "C"
void C_ZNK8QMdiArea16currentSubWindowEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->currentSubWindow();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:95
// QMdiSubWindow * activeSubWindow()
extern "C"
void C_ZNK8QMdiArea15activeSubWindowEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->activeSubWindow();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:96
// QList<QMdiSubWindow *> subWindowList(enum QMdiArea::WindowOrder)
extern "C"
void C_ZNK8QMdiArea13subWindowListENS_11WindowOrderE(void *this_, QMdiArea::WindowOrder order) {
  /*return*/ ((QMdiArea*)this_)->subWindowList(order);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:98
// QMdiSubWindow * addSubWindow(class QWidget *, Qt::WindowFlags)
extern "C"
void C_ZN8QMdiArea12addSubWindowEP7QWidget6QFlagsIN2Qt10WindowTypeEE(void *this_, QWidget * widget, QFlags<Qt::WindowType> flags) {
  /*return*/ ((QMdiArea*)this_)->addSubWindow(widget, flags);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:99
// void removeSubWindow(class QWidget *)
extern "C"
void C_ZN8QMdiArea15removeSubWindowEP7QWidget(void *this_, QWidget * widget) {
  ((QMdiArea*)this_)->removeSubWindow(widget);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:101
// QBrush background()
extern "C"
void C_ZNK8QMdiArea10backgroundEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->background();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:102
// void setBackground(const class QBrush &)
extern "C"
void C_ZN8QMdiArea13setBackgroundERK6QBrush(void *this_, const QBrush & background) {
  ((QMdiArea*)this_)->setBackground(background);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:104
// QMdiArea::WindowOrder activationOrder()
extern "C"
void C_ZNK8QMdiArea15activationOrderEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->activationOrder();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:105
// void setActivationOrder(enum QMdiArea::WindowOrder)
extern "C"
void C_ZN8QMdiArea18setActivationOrderENS_11WindowOrderE(void *this_, QMdiArea::WindowOrder order) {
  ((QMdiArea*)this_)->setActivationOrder(order);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:107
// void setOption(enum QMdiArea::AreaOption, _Bool)
extern "C"
void C_ZN8QMdiArea9setOptionENS_10AreaOptionEb(void *this_, QMdiArea::AreaOption option, bool on) {
  ((QMdiArea*)this_)->setOption(option, on);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:108
// bool testOption(enum QMdiArea::AreaOption)
extern "C"
void C_ZNK8QMdiArea10testOptionENS_10AreaOptionE(void *this_, QMdiArea::AreaOption opton) {
  /*return*/ ((QMdiArea*)this_)->testOption(opton);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:110
// void setViewMode(enum QMdiArea::ViewMode)
extern "C"
void C_ZN8QMdiArea11setViewModeENS_8ViewModeE(void *this_, QMdiArea::ViewMode mode) {
  ((QMdiArea*)this_)->setViewMode(mode);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:111
// QMdiArea::ViewMode viewMode()
extern "C"
void C_ZNK8QMdiArea8viewModeEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->viewMode();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:114
// bool documentMode()
extern "C"
void C_ZNK8QMdiArea12documentModeEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->documentMode();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:115
// void setDocumentMode(_Bool)
extern "C"
void C_ZN8QMdiArea15setDocumentModeEb(void *this_, bool enabled) {
  ((QMdiArea*)this_)->setDocumentMode(enabled);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:117
// void setTabsClosable(_Bool)
extern "C"
void C_ZN8QMdiArea15setTabsClosableEb(void *this_, bool closable) {
  ((QMdiArea*)this_)->setTabsClosable(closable);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:118
// bool tabsClosable()
extern "C"
void C_ZNK8QMdiArea12tabsClosableEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->tabsClosable();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:120
// void setTabsMovable(_Bool)
extern "C"
void C_ZN8QMdiArea14setTabsMovableEb(void *this_, bool movable) {
  ((QMdiArea*)this_)->setTabsMovable(movable);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:121
// bool tabsMovable()
extern "C"
void C_ZNK8QMdiArea11tabsMovableEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->tabsMovable();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:124
// void setTabShape(class QTabWidget::TabShape)
extern "C"
void C_ZN8QMdiArea11setTabShapeEN10QTabWidget8TabShapeE(void *this_, QTabWidget::TabShape shape) {
  ((QMdiArea*)this_)->setTabShape(shape);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:125
// QTabWidget::TabShape tabShape()
extern "C"
void C_ZNK8QMdiArea8tabShapeEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->tabShape();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:127
// void setTabPosition(class QTabWidget::TabPosition)
extern "C"
void C_ZN8QMdiArea14setTabPositionEN10QTabWidget11TabPositionE(void *this_, QTabWidget::TabPosition position) {
  ((QMdiArea*)this_)->setTabPosition(position);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:128
// QTabWidget::TabPosition tabPosition()
extern "C"
void C_ZNK8QMdiArea11tabPositionEv(void *this_) {
  /*return*/ ((QMdiArea*)this_)->tabPosition();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:132
// void subWindowActivated(class QMdiSubWindow *)
extern "C"
void C_ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(void *this_, QMdiSubWindow * a0) {
  ((QMdiArea*)this_)->subWindowActivated(a0);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:135
// void setActiveSubWindow(class QMdiSubWindow *)
extern "C"
void C_ZN8QMdiArea18setActiveSubWindowEP13QMdiSubWindow(void *this_, QMdiSubWindow * window) {
  ((QMdiArea*)this_)->setActiveSubWindow(window);
}
// /usr/include/qt/QtWidgets/qmdiarea.h:136
// void tileSubWindows()
extern "C"
void C_ZN8QMdiArea14tileSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->tileSubWindows();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:137
// void cascadeSubWindows()
extern "C"
void C_ZN8QMdiArea17cascadeSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->cascadeSubWindows();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:138
// void closeActiveSubWindow()
extern "C"
void C_ZN8QMdiArea20closeActiveSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->closeActiveSubWindow();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:139
// void closeAllSubWindows()
extern "C"
void C_ZN8QMdiArea18closeAllSubWindowsEv(void *this_) {
  ((QMdiArea*)this_)->closeAllSubWindows();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:140
// void activateNextSubWindow()
extern "C"
void C_ZN8QMdiArea21activateNextSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->activateNextSubWindow();
}
// /usr/include/qt/QtWidgets/qmdiarea.h:141
// void activatePreviousSubWindow()
extern "C"
void C_ZN8QMdiArea25activatePreviousSubWindowEv(void *this_) {
  ((QMdiArea*)this_)->activatePreviousSubWindow();
}