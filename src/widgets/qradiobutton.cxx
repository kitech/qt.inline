//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(radiobutton)
// /usr/include/qt/QtWidgets/qradiobutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiobutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QRadioButton is pure virtual: false false
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
  virtual ~MyQRadioButton() {}
// void QRadioButton(QWidget *)
MyQRadioButton(QWidget * parent) : QRadioButton(parent) {}
// void QRadioButton(const QString &, QWidget *)
MyQRadioButton(const QString & text, QWidget * parent) : QRadioButton(text, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QRadioButton_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRadioButton* qo = (MyQRadioButton*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qradiobutton(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm2863630056 (28)_ZN12QRadioButton2trEPKcS1_i
//static
/*void qm2863630056(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRadioButton::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRadioButton::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:59
// [-2] void QRadioButton(QWidget *) 
// (12)qm3516896294 (29)_ZN12QRadioButtonC2EP7QWidget
/*void* qm3516896294(QWidget * parent)*/{
  auto _nilp = (MyQRadioButton*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QRadioButton(parent);
  this_ =  new MyQRadioButton(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qradiobutton.h:60
// [-2] void QRadioButton(const QString &, QWidget *) 
// (12)qm3203710175 (39)_ZN12QRadioButtonC2ERK7QStringP7QWidget
/*void* qm3203710175(const QString & text, QWidget * parent)*/{
  auto _nilp = (MyQRadioButton*)(0);
  const QString & text = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QRadioButton(text, parent);
  this_ =  new MyQRadioButton(text, parent);
}


/*void C_ZN12QRadioButtonD2Ev(void *this_)*/ {
  delete (QRadioButton*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qradiobutton
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(radiobutton)
#endif // #ifndef QT_MINIMAL
//  footer block end
