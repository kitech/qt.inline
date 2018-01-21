//  header block begin
// /usr/include/qt/QtWidgets/qdockwidget.h
#include <qdockwidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QDockWidget10metaObjectEv(void *this_) {
  /*return*/ ((QDockWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdockwidget.h:67
// void QDockWidget(const class QString &, class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN11QDockWidgetC1ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & title, QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QDockWidget(title, parent, flags);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:69
// void QDockWidget(class QWidget *, Qt::WindowFlags)
extern "C"
void* C_ZN11QDockWidgetC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  return new QDockWidget(parent, flags);
}
// virtual
// /usr/include/qt/QtWidgets/qdockwidget.h:70
// void ~QDockWidget()
extern "C"
void C_ZN11QDockWidgetD1Ev(void *this_) {
  delete (QDockWidget*)(this_);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:72
// QWidget * widget()
extern "C"
void C_ZNK11QDockWidget6widgetEv(void *this_) {
  /*return*/ ((QDockWidget*)this_)->widget();
}
// /usr/include/qt/QtWidgets/qdockwidget.h:73
// void setWidget(class QWidget *)
extern "C"
void C_ZN11QDockWidget9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QDockWidget*)this_)->setWidget(widget);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:89
// void setFeatures(DockWidgetFeatures)
extern "C"
void C_ZN11QDockWidget11setFeaturesE6QFlagsINS_17DockWidgetFeatureEE(void *this_, QFlags<QDockWidget::DockWidgetFeature> features) {
  ((QDockWidget*)this_)->setFeatures(features);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:90
// DockWidgetFeatures features()
extern "C"
void C_ZNK11QDockWidget8featuresEv(void *this_) {
  /*return*/ ((QDockWidget*)this_)->features();
}
// /usr/include/qt/QtWidgets/qdockwidget.h:92
// void setFloating(_Bool)
extern "C"
void C_ZN11QDockWidget11setFloatingEb(void *this_, bool floating) {
  ((QDockWidget*)this_)->setFloating(floating);
}
// inline
// /usr/include/qt/QtWidgets/qdockwidget.h:93
// bool isFloating()
extern "C"
void C_ZNK11QDockWidget10isFloatingEv(void *this_) {
  /*return*/ ((QDockWidget*)this_)->isFloating();
}
// /usr/include/qt/QtWidgets/qdockwidget.h:95
// void setAllowedAreas(Qt::DockWidgetAreas)
extern "C"
void C_ZN11QDockWidget15setAllowedAreasE6QFlagsIN2Qt14DockWidgetAreaEE(void *this_, QFlags<Qt::DockWidgetArea> areas) {
  ((QDockWidget*)this_)->setAllowedAreas(areas);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:96
// Qt::DockWidgetAreas allowedAreas()
extern "C"
void C_ZNK11QDockWidget12allowedAreasEv(void *this_) {
  /*return*/ ((QDockWidget*)this_)->allowedAreas();
}
// /usr/include/qt/QtWidgets/qdockwidget.h:98
// void setTitleBarWidget(class QWidget *)
extern "C"
void C_ZN11QDockWidget17setTitleBarWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QDockWidget*)this_)->setTitleBarWidget(widget);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:99
// QWidget * titleBarWidget()
extern "C"
void C_ZNK11QDockWidget14titleBarWidgetEv(void *this_) {
  /*return*/ ((QDockWidget*)this_)->titleBarWidget();
}
// inline
// /usr/include/qt/QtWidgets/qdockwidget.h:101
// bool isAreaAllowed(Qt::DockWidgetArea)
extern "C"
void C_ZNK11QDockWidget13isAreaAllowedEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  /*return*/ ((QDockWidget*)this_)->isAreaAllowed(area);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:105
// QAction * toggleViewAction()
extern "C"
void C_ZNK11QDockWidget16toggleViewActionEv(void *this_) {
  /*return*/ ((QDockWidget*)this_)->toggleViewAction();
}
// /usr/include/qt/QtWidgets/qdockwidget.h:109
// void featuresChanged(class QDockWidget::DockWidgetFeatures)
extern "C"
void C_ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(void *this_, QFlags<QDockWidget::DockWidgetFeature> features) {
  ((QDockWidget*)this_)->featuresChanged(features);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:110
// void topLevelChanged(_Bool)
extern "C"
void C_ZN11QDockWidget15topLevelChangedEb(void *this_, bool topLevel) {
  ((QDockWidget*)this_)->topLevelChanged(topLevel);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:111
// void allowedAreasChanged(Qt::DockWidgetAreas)
extern "C"
void C_ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(void *this_, QFlags<Qt::DockWidgetArea> allowedAreas) {
  ((QDockWidget*)this_)->allowedAreasChanged(allowedAreas);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:112
// void visibilityChanged(_Bool)
extern "C"
void C_ZN11QDockWidget17visibilityChangedEb(void *this_, bool visible) {
  ((QDockWidget*)this_)->visibilityChanged(visible);
}
// /usr/include/qt/QtWidgets/qdockwidget.h:113
// void dockLocationChanged(Qt::DockWidgetArea)
extern "C"
void C_ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  ((QDockWidget*)this_)->dockLocationChanged(area);
}
//  main block end
