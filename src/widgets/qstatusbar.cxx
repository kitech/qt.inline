//  header block begin

// /usr/include/qt/QtWidgets/qstatusbar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstatusbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStatusBar is pure virtual: false
// QStatusBar has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStatusBar_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStatusBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStatusBar_t qt_meta_stringdata_MyQStatusBar = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQStatusBar"
  },
  "MyQStatusBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStatusBar[] = {
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
class Q_DECL_EXPORT MyQStatusBar : public QStatusBar {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStatusBar::staticMetaObject,
  qt_meta_stringdata_MyQStatusBar.data,
  qt_meta_data_MyQStatusBar,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStatusBar.stringdata0))
      return static_cast<void*>(this);
  return QStatusBar::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStatusBar::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStatusBar() {}
// void QStatusBar(QWidget *)
MyQStatusBar(QWidget * parent) : QStatusBar(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStatusBar::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStatusBar::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QStatusBar::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QStatusBar::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QStatusBar_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStatusBar* qo = (MyQStatusBar*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:83
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QStatusBar*)this_)->QStatusBar::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:84
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QStatusBar*)this_)->QStatusBar::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:85
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QStatusBar*)this_)->QStatusBar::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:90
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QStatusBar5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QStatusBar*)this_)->QStatusBar::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStatusBar10metaObjectEv(void *this_) {
  return (void*)((QStatusBar*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStatusBar11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStatusBar*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QStatusBar11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStatusBar*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStatusBar2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStatusBar::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStatusBar6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStatusBar::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:60
// [-2] void QStatusBar(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QStatusBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQStatusBar*)(0);
  return  new MyQStatusBar(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:61
// [-2] void ~QStatusBar()
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBarD2Ev(void *this_) {
  delete (QStatusBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:63
// [-2] void addWidget(QWidget *, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar9addWidgetEP7QWidgeti(void *this_, QWidget * widget, int stretch) {
  ((QStatusBar*)this_)->addWidget(widget, stretch);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qstatusbar.h:64
// [4] int insertWidget(int, QWidget *, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZN10QStatusBar12insertWidgetEiP7QWidgeti(void *this_, int index, QWidget * widget, int stretch) {
  return (int)((QStatusBar*)this_)->insertWidget(index, widget, stretch);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:65
// [-2] void addPermanentWidget(QWidget *, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar18addPermanentWidgetEP7QWidgeti(void *this_, QWidget * widget, int stretch) {
  ((QStatusBar*)this_)->addPermanentWidget(widget, stretch);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qstatusbar.h:66
// [4] int insertPermanentWidget(int, QWidget *, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZN10QStatusBar21insertPermanentWidgetEiP7QWidgeti(void *this_, int index, QWidget * widget, int stretch) {
  return (int)((QStatusBar*)this_)->insertPermanentWidget(index, widget, stretch);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:67
// [-2] void removeWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar12removeWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QStatusBar*)this_)->removeWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:69
// [-2] void setSizeGripEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar18setSizeGripEnabledEb(void *this_, bool arg0) {
  ((QStatusBar*)this_)->setSizeGripEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:70
// [1] bool isSizeGripEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QStatusBar17isSizeGripEnabledEv(void *this_) {
  return (bool)((QStatusBar*)this_)->isSizeGripEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:72
// [8] QString currentMessage()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QStatusBar14currentMessageEv(void *this_) {
  auto rv = ((QStatusBar*)this_)->currentMessage();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:75
// [-2] void showMessage(const QString &, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar11showMessageERK7QStringi(void *this_, QString* text, int timeout) {
  ((QStatusBar*)this_)->showMessage(*text, timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:76
// [-2] void clearMessage()
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar12clearMessageEv(void *this_) {
  ((QStatusBar*)this_)->clearMessage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstatusbar.h:80
// [-2] void messageChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QStatusBar14messageChangedERK7QString(void *this_, QString* text) {
  ((QStatusBar*)this_)->messageChanged(*text);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
