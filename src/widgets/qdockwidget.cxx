//  header block begin
// /usr/include/qt/QtWidgets/qdockwidget.h
#ifndef protected
#define protected public
#endif
#include <qdockwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDockWidget is pure virtual: false
// QDockWidget has virtual projected: true
//  header block end

//  main block begin

class MyQDockWidget : public QDockWidget {
public:
  virtual ~MyQDockWidget() {}
// void QDockWidget(const class QString &, class QWidget *, Qt::WindowFlags)
MyQDockWidget(const QString & title, QWidget * parent, QFlags<Qt::WindowType> flags) : QDockWidget(title, parent, flags) {}
// void QDockWidget(class QWidget *, Qt::WindowFlags)
MyQDockWidget(QWidget * parent, QFlags<Qt::WindowType> flags) : QDockWidget(parent, flags) {}
// Protected virtual Visibility=Default Availability=Available
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDockWidget::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void closeEvent(class QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDockWidget::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDockWidget::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QDockWidget::event(event);
  }
  }

// Protected Visibility=Default Availability=Available
// void initStyleOption(class QStyleOptionDockWidget *)
  virtual void initStyleOption(QStyleOptionDockWidget * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDockWidget::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:116
// [-2] void changeEvent(class QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QDockWidget*)this_)->QDockWidget::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:117
// [-2] void closeEvent(class QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QDockWidget*)this_)->QDockWidget::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:118
// [-2] void paintEvent(class QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QDockWidget*)this_)->QDockWidget::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:119
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QDockWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QDockWidget*)this_)->QDockWidget::event(event);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:120
// [-2] void initStyleOption(class QStyleOptionDockWidget *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QDockWidget15initStyleOptionEP22QStyleOptionDockWidget(void *this_, QStyleOptionDockWidget * option) {
  ((QDockWidget*)this_)->QDockWidget::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QDockWidget10metaObjectEv(void *this_) {
  return (void*)((QDockWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:66
// [-2] void QDockWidget(const class QString &, class QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDockWidgetC2ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* title, QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQDockWidget*)(0);
  return  new MyQDockWidget(*title, parent, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:68
// [-2] void QDockWidget(class QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDockWidgetC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQDockWidget*)(0);
  return  new MyQDockWidget(parent, flags);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:69
// [-2] void ~QDockWidget()
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidgetD2Ev(void *this_) {
  delete (QDockWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:71
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QDockWidget6widgetEv(void *this_) {
  return (void*)((QDockWidget*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:72
// [-2] void setWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QDockWidget*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:89
// [-2] void setFeatures(QDockWidget::DockWidgetFeatures)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget11setFeaturesE6QFlagsINS_17DockWidgetFeatureEE(void *this_, QFlags<QDockWidget::DockWidgetFeature> features) {
  ((QDockWidget*)this_)->setFeatures(features);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:90
// [4] QDockWidget::DockWidgetFeatures features()
extern "C" Q_DECL_EXPORT
QDockWidget::DockWidgetFeatures* C_ZNK11QDockWidget8featuresEv(void *this_) {
  auto rv = ((QDockWidget*)this_)->features();
return new QDockWidget::DockWidgetFeatures(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:92
// [-2] void setFloating(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget11setFloatingEb(void *this_, bool floating) {
  ((QDockWidget*)this_)->setFloating(floating);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:93
// [1] bool isFloating()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QDockWidget10isFloatingEv(void *this_) {
  return (bool)((QDockWidget*)this_)->isFloating();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:95
// [-2] void setAllowedAreas(Qt::DockWidgetAreas)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget15setAllowedAreasE6QFlagsIN2Qt14DockWidgetAreaEE(void *this_, QFlags<Qt::DockWidgetArea> areas) {
  ((QDockWidget*)this_)->setAllowedAreas(areas);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:96
// [4] Qt::DockWidgetAreas allowedAreas()
extern "C" Q_DECL_EXPORT
Qt::DockWidgetAreas C_ZNK11QDockWidget12allowedAreasEv(void *this_) {
  return (Qt::DockWidgetAreas)((QDockWidget*)this_)->allowedAreas();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:98
// [-2] void setTitleBarWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget17setTitleBarWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QDockWidget*)this_)->setTitleBarWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:99
// [8] QWidget * titleBarWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QDockWidget14titleBarWidgetEv(void *this_) {
  return (void*)((QDockWidget*)this_)->titleBarWidget();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:101
// [1] bool isAreaAllowed(Qt::DockWidgetArea)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QDockWidget13isAreaAllowedEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  return (bool)((QDockWidget*)this_)->isAreaAllowed(area);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:105
// [8] QAction * toggleViewAction()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QDockWidget16toggleViewActionEv(void *this_) {
  return (void*)((QDockWidget*)this_)->toggleViewAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:109
// [-2] void featuresChanged(class QDockWidget::DockWidgetFeatures)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(void *this_, QFlags<QDockWidget::DockWidgetFeature> features) {
  ((QDockWidget*)this_)->featuresChanged(features);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:110
// [-2] void topLevelChanged(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget15topLevelChangedEb(void *this_, bool topLevel) {
  ((QDockWidget*)this_)->topLevelChanged(topLevel);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:111
// [-2] void allowedAreasChanged(Qt::DockWidgetAreas)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE(void *this_, QFlags<Qt::DockWidgetArea> allowedAreas) {
  ((QDockWidget*)this_)->allowedAreasChanged(allowedAreas);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:112
// [-2] void visibilityChanged(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget17visibilityChangedEb(void *this_, bool visible) {
  ((QDockWidget*)this_)->visibilityChanged(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:113
// [-2] void dockLocationChanged(Qt::DockWidgetArea)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  ((QDockWidget*)this_)->dockLocationChanged(area);
}

//  main block end
