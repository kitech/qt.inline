//  header block begin
// /usr/include/qt/QtWidgets/qradiobutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiobutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRadioButton is pure virtual: false
// QRadioButton has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQRadioButton_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRadioButton_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRadioButton_t qt_meta_stringdata_MyQRadioButton = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQRadioButton"
  },
  "MyQRadioButton"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRadioButton[] = {
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
class Q_DECL_EXPORT MyQRadioButton : public QRadioButton {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRadioButton::staticMetaObject,
  qt_meta_stringdata_MyQRadioButton.data,
  qt_meta_data_MyQRadioButton,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQRadioButton.stringdata0))
      return static_cast<void*>(this);
  return QRadioButton::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRadioButton::qt_metacall(_c, _id, _a);
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
  virtual ~MyQRadioButton() {}
// void QRadioButton(QWidget *)
MyQRadioButton(QWidget * parent) : QRadioButton(parent) {}
// void QRadioButton(const QString &, QWidget *)
MyQRadioButton(const QString & text, QWidget * parent) : QRadioButton(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QRadioButton::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool hitButton(const QPoint &)
  virtual bool hitButton(const QPoint & arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitButton", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QRadioButton::hitButton(arg0);
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
    QRadioButton::paintEvent(arg0);
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
    QRadioButton::mouseMoveEvent(arg0);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:67
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QRadioButton5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QRadioButton*)this_)->QRadioButton::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:68
// [1] bool hitButton(const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QRadioButton9hitButtonERK6QPoint(void *this_, QPoint* arg0) {
  return (bool)((QRadioButton*)this_)->QRadioButton::hitButton(*arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:69
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QRadioButton10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QRadioButton*)this_)->QRadioButton::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:70
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN12QRadioButton14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QRadioButton*)this_)->QRadioButton::mouseMoveEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QRadioButton10metaObjectEv(void *this_) {
  return (void*)((QRadioButton*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QRadioButton11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRadioButton*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QRadioButton11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRadioButton*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QRadioButton2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioButton::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QRadioButton6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioButton::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:59
// [-2] void QRadioButton(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QRadioButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQRadioButton*)(0);
  return  new MyQRadioButton(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:60
// [-2] void QRadioButton(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QRadioButtonC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQRadioButton*)(0);
  return  new MyQRadioButton(*text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:61
// [-2] void ~QRadioButton()
extern "C" Q_DECL_EXPORT
void C_ZN12QRadioButtonD2Ev(void *this_) {
  delete (QRadioButton*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:63
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QRadioButton8sizeHintEv(void *this_) {
  auto rv = ((QRadioButton*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:64
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QRadioButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QRadioButton*)this_)->minimumSizeHint();
return new QSize(rv);
}

//  main block end
