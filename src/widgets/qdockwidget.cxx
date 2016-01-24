// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qdockwidget.h
// dst-file: /src/widgets/qdockwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdockwidget.h>


#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qdockwidget_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 86, column 17>
//   // proto:  bool QDockWidget::isFloating();
if (true) {
  auto f = [](QDockWidget flythis) {
    ((QDockWidget*)0)->isFloating();
    flythis.isFloating();
  };
  if (f == nullptr){}
}
// _ZNK11QDockWidget10isFloatingEv isFloating()
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 94, column 17>
//   // proto:  bool QDockWidget::isAreaAllowed(Qt::DockWidgetArea area);
if (true) {
  auto f = [](QDockWidget flythis, Qt::DockWidgetArea arg1) {
    ((QDockWidget*)0)->isAreaAllowed(arg1);
    flythis.isAreaAllowed(arg1);
  };
  if (f == nullptr){}
}
// _ZNK11QDockWidget13isAreaAllowedEN2Qt14DockWidgetAreaE isAreaAllowed(Qt::DockWidgetArea)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDockWidget_Class_Size()
{
  return sizeof(QDockWidget);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 89, column 25>
//   // proto:  Qt::DockWidgetAreas QDockWidget::allowedAreas();
// _ZNK11QDockWidget12allowedAreasEv allowedAreas()
extern "C"
QFlags<Qt::DockWidgetArea>*
C_ZNK11QDockWidget12allowedAreasEv(void *qthis) {
  auto ret =
  ((QDockWidget*)qthis)->allowedAreas();
  return new QFlags<Qt::DockWidgetArea>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 65, column 14>
//   // proto:  QWidget * QDockWidget::widget();
// _ZNK11QDockWidget6widgetEv widget()
extern "C"
void*
C_ZNK11QDockWidget6widgetEv(void *qthis) {
  auto ret =
  ((QDockWidget*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 85, column 10>
//   // proto:  void QDockWidget::setFloating(bool floating);
// _ZN11QDockWidget11setFloatingEb setFloating(_Bool)
extern "C"
void
C_ZN11QDockWidget11setFloatingEb(void *qthis,
bool arg1) {
  ((QDockWidget*)qthis)->setFloating(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 106, column 10>
//   // proto:  void QDockWidget::dockLocationChanged(Qt::DockWidgetArea area);
// _ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE dockLocationChanged(Qt::DockWidgetArea)
extern "C"
void
C_ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(void *qthis,
Qt::DockWidgetArea* arg1) {
  ((QDockWidget*)qthis)->dockLocationChanged(*((Qt::DockWidgetArea*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 92, column 14>
//   // proto:  QWidget * QDockWidget::titleBarWidget();
// _ZNK11QDockWidget14titleBarWidgetEv titleBarWidget()
extern "C"
void*
C_ZNK11QDockWidget14titleBarWidgetEv(void *qthis) {
  auto ret =
  ((QDockWidget*)qthis)->titleBarWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 104, column 10>
//   // proto:  void QDockWidget::allowedAreasChanged(Qt::DockWidgetAreas allowedAreas);
// _ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE allowedAreasChanged(Qt::DockWidgetAreas)
extern "C"
void
C_ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(void *qthis,
Qt::DockWidgetAreas* arg1) {
  ((QDockWidget*)qthis)->allowedAreasChanged(*((Qt::DockWidgetAreas*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 103, column 10>
//   // proto:  void QDockWidget::topLevelChanged(bool topLevel);
// _ZN11QDockWidget15topLevelChangedEb topLevelChanged(_Bool)
extern "C"
void
C_ZN11QDockWidget15topLevelChangedEb(void *qthis,
bool arg1) {
  ((QDockWidget*)qthis)->topLevelChanged(arg1);
}
//   // proto:  void QDockWidget::~QDockWidget();
extern "C"
void C_ZN11QDockWidgetD2Ev(void *qthis) {
  delete (QDockWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 88, column 10>
//   // proto:  void QDockWidget::setAllowedAreas(Qt::DockWidgetAreas areas);
// _ZN11QDockWidget15setAllowedAreasE6QFlagsIN2Qt14DockWidgetAreaEE setAllowedAreas(Qt::DockWidgetAreas)
extern "C"
void
C_ZN11QDockWidget15setAllowedAreasE6QFlagsIN2Qt14DockWidgetAreaEE(void *qthis,
Qt::DockWidgetAreas* arg1) {
  ((QDockWidget*)qthis)->setAllowedAreas(*((Qt::DockWidgetAreas*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 62, column 14>
//   // proto:  void QDockWidget::QDockWidget(QWidget * parent, Qt::WindowFlags flags);
extern "C"
QDockWidget*
C_ZN11QDockWidgetC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QDockWidget(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 82, column 10>
//   // proto:  void QDockWidget::setFeatures(DockWidgetFeatures features);
// _ZN11QDockWidget11setFeaturesE6QFlagsINS_17DockWidgetFeatureEE setFeatures(DockWidgetFeatures)
extern "C"
void
C_ZN11QDockWidget11setFeaturesE6QFlagsINS_17DockWidgetFeatureEE(void *qthis,
QDockWidget::DockWidgetFeatures arg1) {
  ((QDockWidget*)qthis)->setFeatures(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 61, column 14>
//   // proto:  void QDockWidget::QDockWidget(const QString & title, QWidget * parent, Qt::WindowFlags flags);
extern "C"
QDockWidget*
C_ZN11QDockWidgetC2ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString* arg1,
QWidget * arg2,
Qt::WindowFlags* arg3) {
  auto ret = new QDockWidget(*((const QString*)arg1),
arg2,
*((Qt::WindowFlags*)arg3));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 66, column 10>
//   // proto:  void QDockWidget::setWidget(QWidget * widget);
// _ZN11QDockWidget9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN11QDockWidget9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QDockWidget*)qthis)->setWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 102, column 10>
//   // proto:  void QDockWidget::featuresChanged(QDockWidget::DockWidgetFeatures features);
// _ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE featuresChanged(class QDockWidget::DockWidgetFeatures)
extern "C"
void
C_ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(void *qthis,
QDockWidget::DockWidgetFeatures* arg1) {
  ((QDockWidget*)qthis)->featuresChanged(*((QDockWidget::DockWidgetFeatures*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 86, column 17>
//   // proto:  bool QDockWidget::isFloating();
// _ZNK11QDockWidget10isFloatingEv isFloating()
extern "C"
bool
C_ZNK11QDockWidget10isFloatingEv(void *qthis) {
  auto ret =
  ((QDockWidget*)qthis)->isFloating();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 98, column 14>
//   // proto:  QAction * QDockWidget::toggleViewAction();
// _ZNK11QDockWidget16toggleViewActionEv toggleViewAction()
extern "C"
void*
C_ZNK11QDockWidget16toggleViewActionEv(void *qthis) {
  auto ret =
  ((QDockWidget*)qthis)->toggleViewAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 83, column 24>
//   // proto:  DockWidgetFeatures QDockWidget::features();
// _ZNK11QDockWidget8featuresEv features()
extern "C"
QFlags<QDockWidget::DockWidgetFeature>*
C_ZNK11QDockWidget8featuresEv(void *qthis) {
  auto ret =
  ((QDockWidget*)qthis)->features();
  return new QFlags<QDockWidget::DockWidgetFeature>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 91, column 10>
//   // proto:  void QDockWidget::setTitleBarWidget(QWidget * widget);
// _ZN11QDockWidget17setTitleBarWidgetEP7QWidget setTitleBarWidget(class QWidget *)
extern "C"
void
C_ZN11QDockWidget17setTitleBarWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QDockWidget*)qthis)->setTitleBarWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 51, column 5>
//   // proto:  const QMetaObject * QDockWidget::metaObject();
// _ZNK11QDockWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QDockWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QDockWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 94, column 17>
//   // proto:  bool QDockWidget::isAreaAllowed(Qt::DockWidgetArea area);
// _ZNK11QDockWidget13isAreaAllowedEN2Qt14DockWidgetAreaE isAreaAllowed(Qt::DockWidgetArea)
extern "C"
bool
C_ZNK11QDockWidget13isAreaAllowedEN2Qt14DockWidgetAreaE(void *qthis,
Qt::DockWidgetArea* arg1) {
  auto ret =
  ((QDockWidget*)qthis)->isAreaAllowed(*((Qt::DockWidgetArea*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdockwidget.h', line 105, column 10>
//   // proto:  void QDockWidget::visibilityChanged(bool visible);
// _ZN11QDockWidget17visibilityChangedEb visibilityChanged(_Bool)
extern "C"
void
C_ZN11QDockWidget17visibilityChangedEb(void *qthis,
bool arg1) {
  ((QDockWidget*)qthis)->visibilityChanged(arg1);
}
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

