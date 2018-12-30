//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(dockwidget)
// /usr/include/qt/QtWidgets/qdockwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdockwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDockWidget is pure virtual: false
// QDockWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDockWidget_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDockWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDockWidget_t qt_meta_stringdata_MyQDockWidget = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQDockWidget"
  },
  "MyQDockWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDockWidget[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQDockWidget : public QDockWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDockWidget::staticMetaObject,
  qt_meta_stringdata_MyQDockWidget.data,
  qt_meta_data_MyQDockWidget,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQDockWidget.stringdata0))
      return static_cast<void*>(this);
  return QDockWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDockWidget::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQDockWidget() {}
// void QDockWidget(const QString &, QWidget *, Qt::WindowFlags)
MyQDockWidget(const QString & title, QWidget * parent, QFlags<Qt::WindowType> flags) : QDockWidget(title, parent, flags) {}
// void QDockWidget(QWidget *, Qt::WindowFlags)
MyQDockWidget(QWidget * parent, QFlags<Qt::WindowType> flags) : QDockWidget(parent, flags) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDockWidget::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDockWidget::closeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDockWidget::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QDockWidget::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QDockWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDockWidget* qo = (MyQDockWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:116
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QDockWidget*)this_)->QDockWidget::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:117
// [-2] void closeEvent(QCloseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget10closeEventEP11QCloseEvent(void *this_, QCloseEvent * event) {
  ((QDockWidget*)this_)->QDockWidget::closeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:118
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QDockWidget*)this_)->QDockWidget::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:119
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QDockWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QDockWidget*)this_)->QDockWidget::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QDockWidget10metaObjectEv(void *this_) {
  return (void*)((QDockWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDockWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDockWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QDockWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDockWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDockWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDockWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDockWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDockWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:66
// [-2] void QDockWidget(const QString &, QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN11QDockWidgetC2ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* title, QWidget * parent, QFlags<Qt::WindowType> flags) {
  auto _nilp = (MyQDockWidget*)(0);
  return  new MyQDockWidget(*title, parent, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:68
// [-2] void QDockWidget(QWidget *, Qt::WindowFlags)
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
// [-2] void setWidget(QWidget *)
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
// [-2] void setFloating(bool)
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
// since 4.3
// /usr/include/qt/QtWidgets/qdockwidget.h:98
// [-2] void setTitleBarWidget(QWidget *)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget17setTitleBarWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QDockWidget*)this_)->setTitleBarWidget(widget);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qdockwidget.h:99
// [8] QWidget * titleBarWidget()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK11QDockWidget14titleBarWidgetEv(void *this_) {
  return (void*)((QDockWidget*)this_)->titleBarWidget();
}
#endif // QT_VERSION >= 0x040300

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
// [-2] void featuresChanged(QDockWidget::DockWidgetFeatures)
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE(void *this_, QFlags<QDockWidget::DockWidgetFeature> features) {
  ((QDockWidget*)this_)->featuresChanged(features);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:110
// [-2] void topLevelChanged(bool)
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
// since 4.3
// /usr/include/qt/QtWidgets/qdockwidget.h:112
// [-2] void visibilityChanged(bool)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget17visibilityChangedEb(void *this_, bool visible) {
  ((QDockWidget*)this_)->visibilityChanged(visible);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qdockwidget.h:113
// [-2] void dockLocationChanged(Qt::DockWidgetArea)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN11QDockWidget19dockLocationChangedEN2Qt14DockWidgetAreaE(void *this_, Qt::DockWidgetArea area) {
  ((QDockWidget*)this_)->dockLocationChanged(area);
}
#endif // QT_VERSION >= 0x040300

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dockwidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
