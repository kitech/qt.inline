//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(pushbutton)
// /usr/include/qt/QtWidgets/qpushbutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpushbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPushButton is pure virtual: false false
// QPushButton has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPushButton_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPushButton_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPushButton_t qt_meta_stringdata_MyQPushButton = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQPushButton"
  },
  "MyQPushButton"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPushButton[] = {
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
class Q_DECL_EXPORT MyQPushButton : public QPushButton {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QPushButton::staticMetaObject,
  qt_meta_stringdata_MyQPushButton.data,
  qt_meta_data_MyQPushButton,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQPushButton.stringdata0))
      return static_cast<void*>(this);
  return QPushButton::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QPushButton::qt_metacall(_c, _id, _a);
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
  virtual ~MyQPushButton() {}
// void QPushButton(QWidget *)
MyQPushButton(QWidget * parent) : QPushButton(parent) {}
// void QPushButton(const QString &, QWidget *)
MyQPushButton(const QString & text, QWidget * parent) : QPushButton(text, parent) {}
// void QPushButton(const QIcon &, const QString &, QWidget *)
MyQPushButton(const QIcon & icon, const QString & text, QWidget * parent) : QPushButton(icon, text, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QPushButton::event(e);
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
    QPushButton::paintEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPushButton::keyPressEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPushButton::focusInEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPushButton::focusOutEvent(arg0);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool hitButton(const QPoint &)
  virtual bool hitButton(const QPoint & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitButton", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QPushButton::hitButton(pos);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QPushButton_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQPushButton* qo = (MyQPushButton*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpushbutton(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm1577062780 (27)_ZN11QPushButton2trEPKcS1_i
//static
/*void qm1577062780(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QPushButton::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QPushButton::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:64
// [-2] void QPushButton(QWidget *) 
// (11)qm638151916 (28)_ZN11QPushButtonC2EP7QWidget
/*void* qm638151916(QWidget * parent)*/{
  auto _nilp = (MyQPushButton*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QPushButton(parent);
  this_ =  new MyQPushButton(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:65
// [-2] void QPushButton(const QString &, QWidget *) 
// (12)qm3027368468 (38)_ZN11QPushButtonC2ERK7QStringP7QWidget
/*void* qm3027368468(const QString & text, QWidget * parent)*/{
  auto _nilp = (MyQPushButton*)(0);
  const QString & text = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QPushButton(text, parent);
  this_ =  new MyQPushButton(text, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:66
// [-2] void QPushButton(const QIcon &, const QString &, QWidget *) 
// (11)qm720180025 (46)_ZN11QPushButtonC2ERK5QIconRK7QStringP7QWidget
/*void* qm720180025(const QIcon & icon, const QString & text, QWidget * parent)*/{
  auto _nilp = (MyQPushButton*)(0);
  const QIcon & icon = *(const QIcon *)this_; const QString & text = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QPushButton(icon, text, parent);
  this_ =  new MyQPushButton(icon, text, parent);
}


/*void C_ZN11QPushButtonD2Ev(void *this_)*/ {
  delete (QPushButton*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpushbutton
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(pushbutton)
#endif // #ifndef QT_MINIMAL
//  footer block end
