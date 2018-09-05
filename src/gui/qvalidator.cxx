//  header block begin
// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QValidator is pure virtual: true
// QValidator has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQValidator_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQValidator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQValidator_t qt_meta_stringdata_MyQValidator = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQValidator"
  },
  "MyQValidator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQValidator[] = {
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
class Q_DECL_EXPORT MyQValidator : public QValidator {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QValidator::staticMetaObject,
  qt_meta_stringdata_MyQValidator.data,
  qt_meta_data_MyQValidator,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQValidator.stringdata0))
      return static_cast<void*>(this);
  return QValidator::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QValidator::qt_metacall(_c, _id, _a);
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
  virtual ~MyQValidator() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QValidator::State validate(QString &, int &)
  virtual QValidator::State validate(QString & arg0, int & arg1) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"validate", &handled, 2, (uint64_t)&arg0, (uint64_t)&arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QValidator::State)(int)(irv);
      // Enum Enum QValidator::State
    } else {
    return (QValidator::State){};
  }
  }

// void QValidator(QObject *)
MyQValidator(QObject * parent) : QValidator(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QValidator_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQValidator* qo = (MyQValidator*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:74
// [4] QValidator::State validate(QString &, int &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QValidator10metaObjectEv(void *this_) {
  return (void*)((QValidator*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QValidator11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QValidator*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QValidator11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QValidator*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QValidator2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QValidator::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QValidator6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QValidator::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:62
// [-2] void QValidator(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QValidatorC2EP7QObject(QObject * parent) {
  return  new MyQValidator(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:63
// [-2] void ~QValidator()
extern "C" Q_DECL_EXPORT
void C_ZN10QValidatorD2Ev(void *this_) {
  delete (QValidator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:71
// [-2] void setLocale(const QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN10QValidator9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QValidator*)this_)->setLocale(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:72
// [8] QLocale locale()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QValidator6localeEv(void *this_) {
  auto rv = ((QValidator*)this_)->locale();
return new QLocale(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:74
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK10QValidator8validateER7QStringRi(void *this_, QString* arg0, int & arg1) {
  return (QValidator::State)((QValidator*)this_)->validate(*arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:75
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK10QValidator5fixupER7QString(void *this_, QString* arg0) {
  ((QValidator*)this_)->fixup(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:78
// [-2] void changed()
extern "C" Q_DECL_EXPORT
void C_ZN10QValidator7changedEv(void *this_) {
  ((QValidator*)this_)->changed();
}

//  main block end
