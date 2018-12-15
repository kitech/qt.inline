//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QDoubleValidator is pure virtual: false
// QDoubleValidator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDoubleValidator_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDoubleValidator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDoubleValidator_t qt_meta_stringdata_MyQDoubleValidator = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQDoubleValidator"
  },
  "MyQDoubleValidator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDoubleValidator[] = {
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
class Q_DECL_EXPORT MyQDoubleValidator : public QDoubleValidator {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDoubleValidator::staticMetaObject,
  qt_meta_stringdata_MyQDoubleValidator.data,
  qt_meta_data_MyQDoubleValidator,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDoubleValidator.stringdata0))
      return static_cast<void*>(this);
  return QDoubleValidator::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDoubleValidator::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDoubleValidator() {}
// void QDoubleValidator(QObject *)
MyQDoubleValidator(QObject * parent) : QDoubleValidator(parent) {}
// void QDoubleValidator(double, double, int, QObject *)
MyQDoubleValidator(double bottom, double top, int decimals, QObject * parent) : QDoubleValidator(bottom, top, decimals, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QDoubleValidator_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDoubleValidator* qo = (MyQDoubleValidator*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:128
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QDoubleValidator10metaObjectEv(void *this_) {
  return (void*)((QDoubleValidator*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:128
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDoubleValidator11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDoubleValidator*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:128
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QDoubleValidator11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDoubleValidator*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:128
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDoubleValidator2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDoubleValidator::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:128
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDoubleValidator6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDoubleValidator::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:135
// [-2] void QDoubleValidator(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDoubleValidatorC2EP7QObject(QObject * parent) {
  return  new MyQDoubleValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:136
// [-2] void QDoubleValidator(double, double, int, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QDoubleValidatorC2EddiP7QObject(double bottom, double top, int decimals, QObject * parent) {
  return  new MyQDoubleValidator(bottom, top, decimals, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:137
// [-2] void ~QDoubleValidator()
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidatorD2Ev(void *this_) {
  delete (QDoubleValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:144
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK16QDoubleValidator8validateER7QStringRi(void *this_, QString* arg0, int & arg1) {
  return (QValidator::State)((QDoubleValidator*)this_)->validate(*arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:146
// [-2] void setRange(double, double, int)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator8setRangeEddi(void *this_, double bottom, double top, int decimals) {
  ((QDoubleValidator*)this_)->setRange(bottom, top, decimals);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:147
// [-2] void setBottom(double)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator9setBottomEd(void *this_, double arg0) {
  ((QDoubleValidator*)this_)->setBottom(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:148
// [-2] void setTop(double)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator6setTopEd(void *this_, double arg0) {
  ((QDoubleValidator*)this_)->setTop(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:149
// [-2] void setDecimals(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator11setDecimalsEi(void *this_, int arg0) {
  ((QDoubleValidator*)this_)->setDecimals(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:150
// [-2] void setNotation(QDoubleValidator::Notation)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator11setNotationENS_8NotationE(void *this_, QDoubleValidator::Notation arg0) {
  ((QDoubleValidator*)this_)->setNotation(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:152
// [8] double bottom()
extern "C" Q_DECL_EXPORT
double C_ZNK16QDoubleValidator6bottomEv(void *this_) {
  return (double)((QDoubleValidator*)this_)->bottom();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:153
// [8] double top()
extern "C" Q_DECL_EXPORT
double C_ZNK16QDoubleValidator3topEv(void *this_) {
  return (double)((QDoubleValidator*)this_)->top();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:154
// [4] int decimals()
extern "C" Q_DECL_EXPORT
int C_ZNK16QDoubleValidator8decimalsEv(void *this_) {
  return (int)((QDoubleValidator*)this_)->decimals();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:155
// [4] QDoubleValidator::Notation notation()
extern "C" Q_DECL_EXPORT
QDoubleValidator::Notation C_ZNK16QDoubleValidator8notationEv(void *this_) {
  return (QDoubleValidator::Notation)((QDoubleValidator*)this_)->notation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:158
// [-2] void bottomChanged(double)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator13bottomChangedEd(void *this_, double bottom) {
  ((QDoubleValidator*)this_)->bottomChanged(bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:159
// [-2] void topChanged(double)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator10topChangedEd(void *this_, double top) {
  ((QDoubleValidator*)this_)->topChanged(top);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:160
// [-2] void decimalsChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator15decimalsChangedEi(void *this_, int decimals) {
  ((QDoubleValidator*)this_)->decimalsChanged(decimals);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:161
// [-2] void notationChanged(QDoubleValidator::Notation)
extern "C" Q_DECL_EXPORT
void C_ZN16QDoubleValidator15notationChangedENS_8NotationE(void *this_, QDoubleValidator::Notation notation) {
  ((QDoubleValidator*)this_)->notationChanged(notation);
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
