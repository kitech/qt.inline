//  header block begin
// /usr/include/qt/QtWidgets/qspinbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qspinbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDoubleSpinBox is pure virtual: false
// QDoubleSpinBox has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQDoubleSpinBox_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDoubleSpinBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDoubleSpinBox_t qt_meta_stringdata_MyQDoubleSpinBox = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQDoubleSpinBox"
  },
  "MyQDoubleSpinBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDoubleSpinBox[] = {
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
class Q_DECL_EXPORT MyQDoubleSpinBox : public QDoubleSpinBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDoubleSpinBox::staticMetaObject,
  qt_meta_stringdata_MyQDoubleSpinBox.data,
  qt_meta_data_MyQDoubleSpinBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDoubleSpinBox.stringdata0))
      return static_cast<void*>(this);
  return QDoubleSpinBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDoubleSpinBox() {}
// void QDoubleSpinBox(QWidget *)
MyQDoubleSpinBox(QWidget * parent) : QDoubleSpinBox(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QDoubleSpinBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDoubleSpinBox* qo = (MyQDoubleSpinBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:115
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDoubleSpinBox10metaObjectEv(void *this_) {
  return (void*)((QDoubleSpinBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:115
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDoubleSpinBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDoubleSpinBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:115
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QDoubleSpinBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDoubleSpinBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:115
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDoubleSpinBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDoubleSpinBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:115
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDoubleSpinBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDoubleSpinBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:126
// [-2] void QDoubleSpinBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QDoubleSpinBoxC2EP7QWidget(QWidget * parent) {
  return  new MyQDoubleSpinBox(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:127
// [-2] void ~QDoubleSpinBox()
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBoxD2Ev(void *this_) {
  delete (QDoubleSpinBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:129
// [8] double value()
extern "C" Q_DECL_EXPORT
double C_ZNK14QDoubleSpinBox5valueEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:131
// [8] QString prefix()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDoubleSpinBox6prefixEv(void *this_) {
  auto rv = ((QDoubleSpinBox*)this_)->prefix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:132
// [-2] void setPrefix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox9setPrefixERK7QString(void *this_, QString* prefix) {
  ((QDoubleSpinBox*)this_)->setPrefix(*prefix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:134
// [8] QString suffix()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDoubleSpinBox6suffixEv(void *this_) {
  auto rv = ((QDoubleSpinBox*)this_)->suffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:135
// [-2] void setSuffix(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox9setSuffixERK7QString(void *this_, QString* suffix) {
  ((QDoubleSpinBox*)this_)->setSuffix(*suffix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:137
// [8] QString cleanText()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDoubleSpinBox9cleanTextEv(void *this_) {
  auto rv = ((QDoubleSpinBox*)this_)->cleanText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:139
// [8] double singleStep()
extern "C" Q_DECL_EXPORT
double C_ZNK14QDoubleSpinBox10singleStepEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->singleStep();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:140
// [-2] void setSingleStep(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox13setSingleStepEd(void *this_, double val) {
  ((QDoubleSpinBox*)this_)->setSingleStep(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:142
// [8] double minimum()
extern "C" Q_DECL_EXPORT
double C_ZNK14QDoubleSpinBox7minimumEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->minimum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:143
// [-2] void setMinimum(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox10setMinimumEd(void *this_, double min) {
  ((QDoubleSpinBox*)this_)->setMinimum(min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:145
// [8] double maximum()
extern "C" Q_DECL_EXPORT
double C_ZNK14QDoubleSpinBox7maximumEv(void *this_) {
  return (double)((QDoubleSpinBox*)this_)->maximum();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:146
// [-2] void setMaximum(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox10setMaximumEd(void *this_, double max) {
  ((QDoubleSpinBox*)this_)->setMaximum(max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:148
// [-2] void setRange(double, double)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox8setRangeEdd(void *this_, double min, double max) {
  ((QDoubleSpinBox*)this_)->setRange(min, max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:150
// [4] int decimals()
extern "C" Q_DECL_EXPORT
int C_ZNK14QDoubleSpinBox8decimalsEv(void *this_) {
  return (int)((QDoubleSpinBox*)this_)->decimals();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:151
// [-2] void setDecimals(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox11setDecimalsEi(void *this_, int prec) {
  ((QDoubleSpinBox*)this_)->setDecimals(prec);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:153
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK14QDoubleSpinBox8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QDoubleSpinBox*)this_)->validate(*input, pos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:154
// [8] double valueFromText(const QString &)
extern "C" Q_DECL_EXPORT
double C_ZNK14QDoubleSpinBox13valueFromTextERK7QString(void *this_, QString* text) {
  return (double)((QDoubleSpinBox*)this_)->valueFromText(*text);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:155
// [8] QString textFromValue(double)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QDoubleSpinBox13textFromValueEd(void *this_, double val) {
  auto rv = ((QDoubleSpinBox*)this_)->textFromValue(val);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:156
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK14QDoubleSpinBox5fixupER7QString(void *this_, QString* str) {
  ((QDoubleSpinBox*)this_)->fixup(*str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:159
// [-2] void setValue(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox8setValueEd(void *this_, double val) {
  ((QDoubleSpinBox*)this_)->setValue(val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:162
// [-2] void valueChanged(double)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox12valueChangedEd(void *this_, double arg0) {
  ((QDoubleSpinBox*)this_)->valueChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qspinbox.h:163
// [-2] void valueChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QDoubleSpinBox12valueChangedERK7QString(void *this_, QString* arg0) {
  ((QDoubleSpinBox*)this_)->valueChanged(*arg0);
}

//  main block end
