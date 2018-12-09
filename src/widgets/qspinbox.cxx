//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtWidgets/qspinbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSpinBox is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:93
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QSpinBox5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSpinBox*)this_)->QSpinBox::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:94
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK8QSpinBox8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QSpinBox*)this_)->QSpinBox::validate(*input, pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:95
// [4] int valueFromText(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox13valueFromTextERK7QString(void *this_, QString* text) {
  return (int)((QSpinBox*)this_)->QSpinBox::valueFromText(*text);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:96
// [8] QString textFromValue(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox13textFromValueEi(void *this_, int val) {
  auto rv = ((QSpinBox*)this_)->QSpinBox::textFromValue(val);
return new QString(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:97
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK8QSpinBox5fixupER7QString(void *this_, QString* str) {
  ((QSpinBox*)this_)->QSpinBox::fixup(*str);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox10metaObjectEv(void *this_) {
  return (void*)((QSpinBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QSpinBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSpinBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QSpinBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSpinBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QSpinBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSpinBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QSpinBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSpinBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:65
// [-2] void QSpinBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QSpinBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSpinBox*)(0);
  return  new MyQSpinBox(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:66
// [-2] void ~QSpinBox()
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBoxD2Ev(void *this_) {
  delete (QSpinBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:68
// [4] int value()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox5valueEv(void *this_) {
  return (int)((QSpinBox*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:70
// [8] QString prefix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox6prefixEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->prefix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:71
// [-2] void setPrefix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox9setPrefixERK7QString(void *this_, QString* prefix) {
  ((QSpinBox*)this_)->setPrefix(*prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:73
// [8] QString suffix()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox6suffixEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->suffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:74
// [-2] void setSuffix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox9setSuffixERK7QString(void *this_, QString* suffix) {
  ((QSpinBox*)this_)->setSuffix(*suffix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:76
// [8] QString cleanText()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSpinBox9cleanTextEv(void *this_) {
  auto rv = ((QSpinBox*)this_)->cleanText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:78
// [4] int singleStep()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox10singleStepEv(void *this_) {
  return (int)((QSpinBox*)this_)->singleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:79
// [-2] void setSingleStep(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox13setSingleStepEi(void *this_, int val) {
  ((QSpinBox*)this_)->setSingleStep(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:81
// [4] int minimum()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox7minimumEv(void *this_) {
  return (int)((QSpinBox*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:82
// [-2] void setMinimum(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox10setMinimumEi(void *this_, int min) {
  ((QSpinBox*)this_)->setMinimum(min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:84
// [4] int maximum()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox7maximumEv(void *this_) {
  return (int)((QSpinBox*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:85
// [-2] void setMaximum(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox10setMaximumEi(void *this_, int max) {
  ((QSpinBox*)this_)->setMaximum(max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:87
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox8setRangeEii(void *this_, int min, int max) {
  ((QSpinBox*)this_)->setRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:89
// [4] int displayIntegerBase()
extern "C" Q_DECL_EXPORT
int C_ZNK8QSpinBox18displayIntegerBaseEv(void *this_) {
  return (int)((QSpinBox*)this_)->displayIntegerBase();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:90
// [-2] void setDisplayIntegerBase(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox21setDisplayIntegerBaseEi(void *this_, int base) {
  ((QSpinBox*)this_)->setDisplayIntegerBase(base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:101
// [-2] void setValue(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox8setValueEi(void *this_, int val) {
  ((QSpinBox*)this_)->setValue(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:104
// [-2] void valueChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox12valueChangedEi(void *this_, int arg0) {
  ((QSpinBox*)this_)->valueChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:105
// [-2] void valueChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QSpinBox12valueChangedERK7QString(void *this_, QString* arg0) {
  ((QSpinBox*)this_)->valueChanged(*arg0);
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
