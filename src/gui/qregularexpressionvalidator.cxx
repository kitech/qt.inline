//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegularExpressionValidator is pure virtual: false false
// QRegularExpressionValidator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRegularExpressionValidator_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRegularExpressionValidator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRegularExpressionValidator_t qt_meta_stringdata_MyQRegularExpressionValidator = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQRegularExpressionValidator"
  },
  "MyQRegularExpressionValidator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRegularExpressionValidator[] = {
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
class Q_DECL_EXPORT MyQRegularExpressionValidator : public QRegularExpressionValidator {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRegularExpressionValidator::staticMetaObject,
  qt_meta_stringdata_MyQRegularExpressionValidator.data,
  qt_meta_data_MyQRegularExpressionValidator,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQRegularExpressionValidator.stringdata0))
      return static_cast<void*>(this);
  return QRegularExpressionValidator::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRegularExpressionValidator::qt_metacall(_c, _id, _a);
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
  virtual ~MyQRegularExpressionValidator() {}
// void QRegularExpressionValidator(QObject *)
MyQRegularExpressionValidator(QObject * parent) : QRegularExpressionValidator(parent) {}
// void QRegularExpressionValidator(const QRegularExpression &, QObject *)
MyQRegularExpressionValidator(const QRegularExpression & re, QObject * parent) : QRegularExpressionValidator(re, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QRegularExpressionValidator_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRegularExpressionValidator* qo = (MyQRegularExpressionValidator*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregularexpressionvalidator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:206
// [8] QString tr(const char *, const char *, int) 
// (12)qm1149065219 (43)_ZN27QRegularExpressionValidator2trEPKcS1_i
//static
/*void qm1149065219(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRegularExpressionValidator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRegularExpressionValidator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:210
// [-2] void QRegularExpressionValidator(QObject *) 
// (12)qm3422406708 (44)_ZN27QRegularExpressionValidatorC2EP7QObject
/*void* qm3422406708(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QRegularExpressionValidator(parent);
  this_ =  new MyQRegularExpressionValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:211
// [-2] void QRegularExpressionValidator(const QRegularExpression &, QObject *) 
// (12)qm3277368562 (66)_ZN27QRegularExpressionValidatorC2ERK18QRegularExpressionP7QObject
/*void* qm3277368562(const QRegularExpression & re, QObject * parent)*/{
  const QRegularExpression & re = *(const QRegularExpression *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QRegularExpressionValidator(re, parent);
  this_ =  new MyQRegularExpressionValidator(re, parent);
}


/*void C_ZN27QRegularExpressionValidatorD2Ev(void *this_)*/ {
  delete (QRegularExpressionValidator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregularexpressionvalidator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
