//  header block begin

// /usr/include/qt/QtGui/qvalidator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvalidator.h>
#include <QtGui>
#include "callback_inherit.h"

// QDoubleValidator is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdoublevalidator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:129
// [8] QString tr(const char *, const char *, int) 
// (11)qm934685506 (32)_ZN16QDoubleValidator2trEPKcS1_i
//static
/*void qm934685506(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDoubleValidator::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDoubleValidator::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:136
// [-2] void QDoubleValidator(QObject *) 
// (12)qm3394597441 (33)_ZN16QDoubleValidatorC2EP7QObject
/*void* qm3394597441(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QDoubleValidator(parent);
  this_ =  new MyQDoubleValidator(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:137
// [-2] void QDoubleValidator(double, double, int, QObject *) 
// (12)qm3181960926 (36)_ZN16QDoubleValidatorC2EddiP7QObject
/*void* qm3181960926(double bottom, double top, int decimals, QObject * parent)*/{
  double bottom = *(double*)this_; double top = *(double*)this_; int decimals = *(int*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QDoubleValidator(bottom, top, decimals, parent);
  this_ =  new MyQDoubleValidator(bottom, top, decimals, parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:153
// [8] double bottom() const
// (11)qm422299839 (31)_ZNK16QDoubleValidator6bottomEv
//static
/*void qm422299839()*/ {
  ;
  (void) ((QDoubleValidator*)this_)->bottom();
   auto xptr = (double (QDoubleValidator::*)() const ) &QDoubleValidator::bottom;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:154
// [8] double top() const
// (11)qm772593677 (28)_ZNK16QDoubleValidator3topEv
//static
/*void qm772593677()*/ {
  ;
  (void) ((QDoubleValidator*)this_)->top();
   auto xptr = (double (QDoubleValidator::*)() const ) &QDoubleValidator::top;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvalidator.h:155
// [4] int decimals() const
// (12)qm1789650654 (33)_ZNK16QDoubleValidator8decimalsEv
//static
/*void qm1789650654()*/ {
  ;
  (void) ((QDoubleValidator*)this_)->decimals();
   auto xptr = (int (QDoubleValidator::*)() const ) &QDoubleValidator::decimals;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QDoubleValidatorD2Ev(void *this_)*/ {
  delete (QDoubleValidator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdoublevalidator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
