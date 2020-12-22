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

// QCheckBox is pure virtual: false false
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
// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Extend Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcheckbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3296945882 (24)_ZN9QCheckBox2trEPKcS1_i
//static
/*void qm3296945882(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCheckBox::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCheckBox::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:61
// [-2] void QCheckBox(QWidget *) 
// (11)qm421980486 (25)_ZN9QCheckBoxC2EP7QWidget
/*void* qm421980486(QWidget * parent)*/{
  auto _nilp = (MyQCheckBox*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QCheckBox(parent);
  this_ =  new MyQCheckBox(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:62
// [-2] void QCheckBox(const QString &, QWidget *) 
// (12)qm1488224333 (35)_ZN9QCheckBoxC2ERK7QStringP7QWidget
/*void* qm1488224333(const QString & text, QWidget * parent)*/{
  auto _nilp = (MyQCheckBox*)(0);
  const QString & text = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QCheckBox(text, parent);
  this_ =  new MyQCheckBox(text, parent);
}


/*void C_ZN9QCheckBoxD2Ev(void *this_)*/ {
  delete (QCheckBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcheckbox
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
