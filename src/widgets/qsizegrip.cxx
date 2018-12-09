//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtWidgets/qsizegrip.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsizegrip.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSizeGrip is pure virtual: false
// QSizeGrip has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSizeGrip_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSizeGrip_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSizeGrip_t qt_meta_stringdata_MyQSizeGrip = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQSizeGrip"
  },
  "MyQSizeGrip"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSizeGrip[] = {
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
class Q_DECL_EXPORT MyQSizeGrip : public QSizeGrip {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSizeGrip::staticMetaObject,
  qt_meta_stringdata_MyQSizeGrip.data,
  qt_meta_data_MyQSizeGrip,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSizeGrip.stringdata0))
      return static_cast<void*>(this);
  return QSizeGrip::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSizeGrip::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSizeGrip() {}
// void QSizeGrip(QWidget *)
MyQSizeGrip(QWidget * parent) : QSizeGrip(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * mouseEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)mouseEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::mouseReleaseEvent(mouseEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void moveEvent(QMoveEvent *)
  virtual void moveEvent(QMoveEvent * moveEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveEvent", &handled, 1, (uint64_t)moveEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::moveEvent(moveEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)showEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::showEvent(showEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * hideEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)hideEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSizeGrip::hideEvent(hideEvent);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSizeGrip::eventFilter(arg0, arg1);
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
    return QSizeGrip::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSizeGrip_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSizeGrip* qo = (MyQSizeGrip*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:62
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:63
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:64
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSizeGrip*)this_)->QSizeGrip::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:65
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * mouseEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::mouseReleaseEvent(mouseEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:66
// [-2] void moveEvent(QMoveEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip9moveEventEP10QMoveEvent(void *this_, QMoveEvent * moveEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::moveEvent(moveEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:67
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip9showEventEP10QShowEvent(void *this_, QShowEvent * showEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::showEvent(showEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:68
// [-2] void hideEvent(QHideEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip9hideEventEP10QHideEvent(void *this_, QHideEvent * hideEvent) {
  ((QSizeGrip*)this_)->QSizeGrip::hideEvent(hideEvent);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:69
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSizeGrip11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QSizeGrip*)this_)->QSizeGrip::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:70
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSizeGrip5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QSizeGrip*)this_)->QSizeGrip::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSizeGrip10metaObjectEv(void *this_) {
  return (void*)((QSizeGrip*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGrip11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSizeGrip*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QSizeGrip11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSizeGrip*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGrip2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSizeGrip::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGrip6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSizeGrip::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:55
// [-2] void QSizeGrip(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSizeGripC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSizeGrip*)(0);
  return  new MyQSizeGrip(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:56
// [-2] void ~QSizeGrip()
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGripD2Ev(void *this_) {
  delete (QSizeGrip*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:58
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSizeGrip8sizeHintEv(void *this_) {
  auto rv = ((QSizeGrip*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizegrip.h:59
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QSizeGrip10setVisibleEb(void *this_, bool arg0) {
  ((QSizeGrip*)this_)->setVisible(arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
