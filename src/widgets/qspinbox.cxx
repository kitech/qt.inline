//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(spinbox)
// /usr/include/qt/QtWidgets/qspinbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSpinBox is pure virtual: false false
// QSpinBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSpinBox_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSpinBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSpinBox_t qt_meta_stringdata_MyQSpinBox = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQSpinBox"
  },
  "MyQSpinBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSpinBox[] = {
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
class Q_DECL_EXPORT MyQSpinBox : public QSpinBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSpinBox::staticMetaObject,
  qt_meta_stringdata_MyQSpinBox.data,
  qt_meta_data_MyQSpinBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSpinBox.stringdata0))
      return static_cast<void*>(this);
  return QSpinBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSpinBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSpinBox() {}
// void QSpinBox(QWidget *)
MyQSpinBox(QWidget * parent) : QSpinBox(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSpinBox::event(event);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] QValidator::State validate(QString &, int &)
  virtual QValidator::State validate(QString & input, int & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"validate", &handled, 2, (uint64_t)&input, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QValidator::State)(int)(irv);
      // Elaborated Enum QValidator::State
    } else {
    return QSpinBox::validate(input, pos);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int valueFromText(const QString &)
  virtual int valueFromText(const QString & text) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"valueFromText", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QSpinBox::valueFromText(text);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QString textFromValue(int)
  virtual QString textFromValue(int val) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textFromValue", &handled, 1, (uint64_t)val, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return QSpinBox::textFromValue(val);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void fixup(QString &)
  virtual void fixup(QString & str) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"fixup", &handled, 1, (uint64_t)&str, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSpinBox::fixup(str);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSpinBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSpinBox* qo = (MyQSpinBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qspinbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm2594483814 (23)_ZN8QSpinBox2trEPKcS1_i
//static
/*void qm2594483814(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSpinBox::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSpinBox::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:66
// [-2] void QSpinBox(QWidget *) 
// (12)qm3685691689 (24)_ZN8QSpinBoxC2EP7QWidget
/*void* qm3685691689(QWidget * parent)*/{
  auto _nilp = (MyQSpinBox*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QSpinBox(parent);
  this_ =  new MyQSpinBox(parent);
}


/*void C_ZN8QSpinBoxD2Ev(void *this_)*/ {
  delete (QSpinBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qspinbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(spinbox)
#endif // #ifndef QT_MINIMAL
//  footer block end
