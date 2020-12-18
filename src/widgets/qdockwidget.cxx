//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(dockwidget)
// /usr/include/qt/QtWidgets/qdockwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdockwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDockWidget is pure virtual: false false
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
// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Extend Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdockwidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm1764857788 (27)_ZN11QDockWidget2trEPKcS1_i
//static
/*void qm1764857788(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDockWidget::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDockWidget::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:96
// [1] bool isFloating() const
// (11)qm499074307 (31)_ZNK11QDockWidget10isFloatingEv
//static
/*void qm499074307()*/ {
  ;
  (void) ((QDockWidget*)this_)->isFloating();
   auto xptr = (bool (QDockWidget::*)() const ) &QDockWidget::isFloating;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:104
// [1] bool isAreaAllowed(Qt::DockWidgetArea) const
// (12)qm3005641876 (54)_ZNK11QDockWidget13isAreaAllowedEN2Qt14DockWidgetAreaE
//static
/*void qm3005641876(Qt::DockWidgetArea area)*/ {
  Qt::DockWidgetArea area = *(Qt::DockWidgetArea*)this_;
  (void) ((QDockWidget*)this_)->isAreaAllowed(area);
   auto xptr = (bool (QDockWidget::*)(Qt::DockWidgetArea) const ) &QDockWidget::isAreaAllowed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QDockWidgetD2Ev(void *this_)*/ {
  delete (QDockWidget*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdockwidget
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
