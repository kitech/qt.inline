//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegExpValidator is pure virtual: false
// QRegExpValidator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRegExpValidator_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRegExpValidator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRegExpValidator_t qt_meta_stringdata_MyQRegExpValidator = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQRegExpValidator"
  },
  "MyQRegExpValidator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRegExpValidator[] = {
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
class Q_DECL_EXPORT MyQRegExpValidator : public QRegExpValidator {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRegExpValidator::staticMetaObject,
  qt_meta_stringdata_MyQRegExpValidator.data,
  qt_meta_data_MyQRegExpValidator,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQRegExpValidator.stringdata0))
      return static_cast<void*>(this);
  return QRegExpValidator::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRegExpValidator::qt_metacall(_c, _id, _a);
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
  virtual ~MyQRegExpValidator() {}
// void QRegExpValidator(QObject *)
MyQRegExpValidator(QObject * parent) : QRegExpValidator(parent) {}
// void QRegExpValidator(const QRegExp &, QObject *)
MyQRegExpValidator(const QRegExp & rx, QObject * parent) : QRegExpValidator(rx, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QRegExpValidator_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRegExpValidator* qo = (MyQRegExpValidator*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:173
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QRegExpValidator10metaObjectEv(void *this_) {
  return (void*)((QRegExpValidator*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:173
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRegExpValidator11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRegExpValidator*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:173
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QRegExpValidator11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRegExpValidator*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:173
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRegExpValidator2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRegExpValidator::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:173
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRegExpValidator6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRegExpValidator::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:177
// [-2] void QRegExpValidator(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRegExpValidatorC2EP7QObject(QObject * parent) {
  return  new MyQRegExpValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:178
// [-2] void QRegExpValidator(const QRegExp &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRegExpValidatorC2ERK7QRegExpP7QObject(QRegExp* rx, QObject * parent) {
  return  new MyQRegExpValidator(*rx, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:179
// [-2] void ~QRegExpValidator()
extern "C" Q_DECL_EXPORT
void C_ZN16QRegExpValidatorD2Ev(void *this_) {
  delete (QRegExpValidator*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:181
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK16QRegExpValidator8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QRegExpValidator*)this_)->validate(*input, pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:183
// [-2] void setRegExp(const QRegExp &)
extern "C" Q_DECL_EXPORT
void C_ZN16QRegExpValidator9setRegExpERK7QRegExp(void *this_, QRegExp* rx) {
  ((QRegExpValidator*)this_)->setRegExp(*rx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:184
// [8] const QRegExp & regExp()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QRegExpValidator6regExpEv(void *this_) {
  auto& rv = ((QRegExpValidator*)this_)->regExp();
return new QRegExp(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:187
// [-2] void regExpChanged(const QRegExp &)
extern "C" Q_DECL_EXPORT
void C_ZN16QRegExpValidator13regExpChangedERK7QRegExp(void *this_, QRegExp* regExp) {
  ((QRegExpValidator*)this_)->regExpChanged(*regExp);
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
