//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(checkbox)
// /usr/include/qt/QtWidgets/qcheckbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcheckbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCheckBox is pure virtual: false
// QCheckBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCheckBox_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCheckBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCheckBox_t qt_meta_stringdata_MyQCheckBox = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQCheckBox"
  },
  "MyQCheckBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCheckBox[] = {
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
class Q_DECL_EXPORT MyQCheckBox : public QCheckBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCheckBox::staticMetaObject,
  qt_meta_stringdata_MyQCheckBox.data,
  qt_meta_data_MyQCheckBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCheckBox.stringdata0))
      return static_cast<void*>(this);
  return QCheckBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCheckBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCheckBox() {}
// void QCheckBox(QWidget *)
MyQCheckBox(QWidget * parent) : QCheckBox(parent) {}
// void QCheckBox(const QString &, QWidget *)
MyQCheckBox(const QString & text, QWidget * parent) : QCheckBox(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCheckBox::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool hitButton(const QPoint &)
  virtual bool hitButton(const QPoint & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitButton", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCheckBox::hitButton(pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void checkStateSet()
  virtual void checkStateSet()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"checkStateSet", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCheckBox::checkStateSet();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void nextCheckState()
  virtual void nextCheckState()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nextCheckState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCheckBox::nextCheckState();
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
    QCheckBox::paintEvent(arg0);
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
    QCheckBox::mouseMoveEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCheckBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCheckBox* qo = (MyQCheckBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:78
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QCheckBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QCheckBox*)this_)->QCheckBox::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:79
// [1] bool hitButton(const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCheckBox9hitButtonERK6QPoint(void *this_, QPoint* pos) {
  return (bool)((QCheckBox*)this_)->QCheckBox::hitButton(*pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:80
// [-2] void checkStateSet()
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox13checkStateSetEv(void *this_) {
  ((QCheckBox*)this_)->QCheckBox::checkStateSet();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:81
// [-2] void nextCheckState()
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox14nextCheckStateEv(void *this_) {
  ((QCheckBox*)this_)->QCheckBox::nextCheckState();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:82
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QCheckBox*)this_)->QCheckBox::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:83
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QCheckBox*)this_)->QCheckBox::mouseMoveEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCheckBox10metaObjectEv(void *this_) {
  return (void*)((QCheckBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCheckBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QCheckBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCheckBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCheckBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCheckBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:61
// [-2] void QCheckBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCheckBox*)(0);
  return  new MyQCheckBox(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:62
// [-2] void QCheckBox(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBoxC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQCheckBox*)(0);
  return  new MyQCheckBox(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:63
// [-2] void ~QCheckBox()
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBoxD2Ev(void *this_) {
  delete (QCheckBox*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:65
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCheckBox8sizeHintEv(void *this_) {
  auto rv = ((QCheckBox*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:66
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCheckBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QCheckBox*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:68
// [-2] void setTristate(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox11setTristateEb(void *this_, bool y) {
  ((QCheckBox*)this_)->setTristate(y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:69
// [1] bool isTristate()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCheckBox10isTristateEv(void *this_) {
  return (bool)((QCheckBox*)this_)->isTristate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:71
// [4] Qt::CheckState checkState()
extern "C" Q_DECL_EXPORT
Qt::CheckState C_ZNK9QCheckBox10checkStateEv(void *this_) {
  return (Qt::CheckState)((QCheckBox*)this_)->checkState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:72
// [-2] void setCheckState(Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QCheckBox*)this_)->setCheckState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:75
// [-2] void stateChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox12stateChangedEi(void *this_, int arg0) {
  ((QCheckBox*)this_)->stateChanged(arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(checkbox)
#endif // #ifndef QT_MINIMAL
//  footer block end
