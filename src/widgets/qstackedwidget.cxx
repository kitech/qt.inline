//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(stackedwidget)
// /usr/include/qt/QtWidgets/qstackedwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstackedwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStackedWidget is pure virtual: false
// QStackedWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStackedWidget_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStackedWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStackedWidget_t qt_meta_stringdata_MyQStackedWidget = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQStackedWidget"
  },
  "MyQStackedWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStackedWidget[] = {
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
class Q_DECL_EXPORT MyQStackedWidget : public QStackedWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStackedWidget::staticMetaObject,
  qt_meta_stringdata_MyQStackedWidget.data,
  qt_meta_data_MyQStackedWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStackedWidget.stringdata0))
      return static_cast<void*>(this);
  return QStackedWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStackedWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStackedWidget() {}
// void QStackedWidget(QWidget *)
MyQStackedWidget(QWidget * parent) : QStackedWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QStackedWidget::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QStackedWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStackedWidget* qo = (MyQStackedWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:82
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QStackedWidget5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QStackedWidget*)this_)->QStackedWidget::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedWidget10metaObjectEv(void *this_) {
  return (void*)((QStackedWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStackedWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStackedWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStackedWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStackedWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:59
// [-2] void QStackedWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQStackedWidget*)(0);
  return  new MyQStackedWidget(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:60
// [-2] void ~QStackedWidget()
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidgetD2Ev(void *this_) {
  delete (QStackedWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:62
// [4] int addWidget(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedWidget9addWidgetEP7QWidget(void *this_, QWidget * w) {
  return (int)((QStackedWidget*)this_)->addWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:63
// [4] int insertWidget(int, QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedWidget12insertWidgetEiP7QWidget(void *this_, int index, QWidget * w) {
  return (int)((QStackedWidget*)this_)->insertWidget(index, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:64
// [-2] void removeWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget12removeWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->removeWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:66
// [8] QWidget * currentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedWidget13currentWidgetEv(void *this_) {
  return (void*)((QStackedWidget*)this_)->currentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:67
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedWidget12currentIndexEv(void *this_) {
  return (int)((QStackedWidget*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:69
// [4] int indexOf(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedWidget7indexOfEP7QWidget(void *this_, QWidget * arg0) {
  return (int)((QStackedWidget*)this_)->indexOf(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:70
// [8] QWidget * widget(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedWidget6widgetEi(void *this_, int arg0) {
  return (void*)((QStackedWidget*)this_)->widget(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:71
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedWidget5countEv(void *this_) {
  return (int)((QStackedWidget*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:74
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget15setCurrentIndexEi(void *this_, int index) {
  ((QStackedWidget*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:75
// [-2] void setCurrentWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget16setCurrentWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedWidget*)this_)->setCurrentWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:78
// [-2] void currentChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget14currentChangedEi(void *this_, int arg0) {
  ((QStackedWidget*)this_)->currentChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedwidget.h:79
// [-2] void widgetRemoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedWidget13widgetRemovedEi(void *this_, int index) {
  ((QStackedWidget*)this_)->widgetRemoved(index);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(stackedwidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
