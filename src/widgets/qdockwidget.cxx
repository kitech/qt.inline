// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qdockwidget.h
// dst-file: /src/widgets/qdockwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qdockwidget.h>

extern "C" {

int QDockWidget_Class_Size()
{
  return sizeof(QDockWidget);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qdockwidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 86, column 17>
//   // proto:  bool QDockWidget::isFloating();
if (false) {
  auto f = []() {
    ((QDockWidget*)0)->isFloating();
  };
}
// _ZNK11QDockWidget10isFloatingEv isFloating()
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 94, column 17>
//   // proto:  bool QDockWidget::isAreaAllowed(Qt::DockWidgetArea area);
if (false) {
  auto f = [](Qt::DockWidgetArea arg1) {
    ((QDockWidget*)0)->isAreaAllowed(arg1);
  };
}
// _ZNK11QDockWidget13isAreaAllowedEN2Qt14DockWidgetAreaE isAreaAllowed(Qt::DockWidgetArea)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QDockWidget_SlotProxy here
class QDockWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDockWidget_SlotProxy():QObject(){}

public slots:
  // dockLocationChanged(Qt::DockWidgetArea)
  void slot_proxy_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(Qt::DockWidgetArea arg0);
public:
  void (*slot_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE)(void* rsfptr, Qt::DockWidgetArea arg0) = NULL;
public slots:
  // featuresChanged(class QDockWidget::DockWidgetFeatures)
  void slot_proxy_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(QDockWidget::DockWidgetFeatures arg0);
public:
  void (*slot_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE)(void* rsfptr, QDockWidget::DockWidgetFeatures arg0) = NULL;
public slots:
  // visibilityChanged(_Bool)
  void slot_proxy_func__ZN11QDockWidget17visibilityChangedEb(bool arg0);
public:
  void (*slot_func__ZN11QDockWidget17visibilityChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // topLevelChanged(_Bool)
  void slot_proxy_func__ZN11QDockWidget15topLevelChangedEb(bool arg0);
public:
  void (*slot_func__ZN11QDockWidget15topLevelChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // allowedAreasChanged(Qt::DockWidgetAreas)
  void slot_proxy_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(Qt::DockWidgetAreas arg0);
public:
  void (*slot_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE)(void* rsfptr, Qt::DockWidgetAreas arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdockwidget.moc"

extern "C" {
  QDockWidget_SlotProxy* QDockWidget_SlotProxy_new()
  {
    return new QDockWidget_SlotProxy();
  }
};

void QDockWidget_SlotProxy::slot_proxy_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(Qt::DockWidgetArea arg0) {
  if (this->slot_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE != NULL) {
    // do smth...
    this->slot_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(this->rsfptr, arg0);
  }
}
extern "C"
void* QDockWidget_SlotProxy_connect__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDockWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE = (decltype(that->slot_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE))ffifptr;
  QObject::connect((QDockWidget*)sender, SIGNAL(dockLocationChanged(Qt::DockWidgetArea)), that, SLOT(slot_proxy_func__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(Qt::DockWidgetArea arg0)));
  return that;
}
extern "C"
void QDockWidget_SlotProxy_disconnect__ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(QDockWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDockWidget_SlotProxy::slot_proxy_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(QDockWidget::DockWidgetFeatures arg0) {
  if (this->slot_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE != NULL) {
    // do smth...
    this->slot_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(this->rsfptr, arg0);
  }
}
extern "C"
void* QDockWidget_SlotProxy_connect__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDockWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE = (decltype(that->slot_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE))ffifptr;
  QObject::connect((QDockWidget*)sender, SIGNAL(featuresChanged(class QDockWidget::DockWidgetFeatures)), that, SLOT(slot_proxy_func__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(QDockWidget::DockWidgetFeatures arg0)));
  return that;
}
extern "C"
void QDockWidget_SlotProxy_disconnect__ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(QDockWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDockWidget_SlotProxy::slot_proxy_func__ZN11QDockWidget17visibilityChangedEb(bool arg0) {
  if (this->slot_func__ZN11QDockWidget17visibilityChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN11QDockWidget17visibilityChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QDockWidget_SlotProxy_connect__ZN11QDockWidget17visibilityChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDockWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QDockWidget17visibilityChangedEb = (decltype(that->slot_func__ZN11QDockWidget17visibilityChangedEb))ffifptr;
  QObject::connect((QDockWidget*)sender, SIGNAL(visibilityChanged(_Bool)), that, SLOT(slot_proxy_func__ZN11QDockWidget17visibilityChangedEb(bool arg0)));
  return that;
}
extern "C"
void QDockWidget_SlotProxy_disconnect__ZN11QDockWidget17visibilityChangedEb(QDockWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDockWidget_SlotProxy::slot_proxy_func__ZN11QDockWidget15topLevelChangedEb(bool arg0) {
  if (this->slot_func__ZN11QDockWidget15topLevelChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN11QDockWidget15topLevelChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QDockWidget_SlotProxy_connect__ZN11QDockWidget15topLevelChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDockWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QDockWidget15topLevelChangedEb = (decltype(that->slot_func__ZN11QDockWidget15topLevelChangedEb))ffifptr;
  QObject::connect((QDockWidget*)sender, SIGNAL(topLevelChanged(_Bool)), that, SLOT(slot_proxy_func__ZN11QDockWidget15topLevelChangedEb(bool arg0)));
  return that;
}
extern "C"
void QDockWidget_SlotProxy_disconnect__ZN11QDockWidget15topLevelChangedEb(QDockWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDockWidget_SlotProxy::slot_proxy_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(Qt::DockWidgetAreas arg0) {
  if (this->slot_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE != NULL) {
    // do smth...
    this->slot_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(this->rsfptr, arg0);
  }
}
extern "C"
void* QDockWidget_SlotProxy_connect__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDockWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE = (decltype(that->slot_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE))ffifptr;
  QObject::connect((QDockWidget*)sender, SIGNAL(allowedAreasChanged(Qt::DockWidgetAreas)), that, SLOT(slot_proxy_func__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(Qt::DockWidgetAreas arg0)));
  return that;
}
extern "C"
void QDockWidget_SlotProxy_disconnect__ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(QDockWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

