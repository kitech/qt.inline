//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QIntValidator is pure virtual: false
// QIntValidator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQIntValidator_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIntValidator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIntValidator_t qt_meta_stringdata_MyQIntValidator = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQIntValidator"
  },
  "MyQIntValidator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIntValidator[] = {
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
class Q_DECL_EXPORT MyQIntValidator : public QIntValidator {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QIntValidator::staticMetaObject,
  qt_meta_stringdata_MyQIntValidator.data,
  qt_meta_data_MyQIntValidator,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQIntValidator.stringdata0))
      return static_cast<void*>(this);
  return QIntValidator::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QIntValidator::qt_metacall(_c, _id, _a);
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
  virtual ~MyQIntValidator() {}
// void QIntValidator(QObject *)
MyQIntValidator(QObject * parent) : QIntValidator(parent) {}
// void QIntValidator(int, int, QObject *)
MyQIntValidator(int bottom, int top, QObject * parent) : QIntValidator(bottom, top, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QIntValidator_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQIntValidator* qo = (MyQIntValidator*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:91
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QIntValidator10metaObjectEv(void *this_) {
  return (void*)((QIntValidator*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:91
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QIntValidator11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QIntValidator*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:91
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QIntValidator11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QIntValidator*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:91
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QIntValidator2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIntValidator::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:91
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QIntValidator6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIntValidator::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:96
// [-2] void QIntValidator(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QIntValidatorC2EP7QObject(QObject * parent) {
  return  new MyQIntValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:97
// [-2] void QIntValidator(int, int, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QIntValidatorC2EiiP7QObject(int bottom, int top, QObject * parent) {
  return  new MyQIntValidator(bottom, top, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:98
// [-2] void ~QIntValidator()
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidatorD2Ev(void *this_) {
  delete (QIntValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:100
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK13QIntValidator8validateER7QStringRi(void *this_, QString* arg0, int & arg1) {
  return (QValidator::State)((QIntValidator*)this_)->validate(*arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:101
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QIntValidator5fixupER7QString(void *this_, QString* input) {
  ((QIntValidator*)this_)->fixup(*input);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:103
// [-2] void setBottom(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator9setBottomEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setBottom(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:104
// [-2] void setTop(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator6setTopEi(void *this_, int arg0) {
  ((QIntValidator*)this_)->setTop(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:105
// [-2] void setRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator8setRangeEii(void *this_, int bottom, int top) {
  ((QIntValidator*)this_)->setRange(bottom, top);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:107
// [4] int bottom()
extern "C" Q_DECL_EXPORT
int C_ZNK13QIntValidator6bottomEv(void *this_) {
  return (int)((QIntValidator*)this_)->bottom();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:108
// [4] int top()
extern "C" Q_DECL_EXPORT
int C_ZNK13QIntValidator3topEv(void *this_) {
  return (int)((QIntValidator*)this_)->top();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:110
// [-2] void bottomChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator13bottomChangedEi(void *this_, int bottom) {
  ((QIntValidator*)this_)->bottomChanged(bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:111
// [-2] void topChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QIntValidator10topChangedEi(void *this_, int top) {
  ((QIntValidator*)this_)->topChanged(top);
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
