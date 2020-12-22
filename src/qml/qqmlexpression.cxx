//  header block begin

// /usr/include/qt/QtQml/qqmlexpression.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlexpression.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExpression is pure virtual: false false
// QQmlExpression has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQmlExpression_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlExpression_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlExpression_t qt_meta_stringdata_MyQQmlExpression = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQQmlExpression"
  },
  "MyQQmlExpression"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlExpression[] = {
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
class Q_DECL_EXPORT MyQQmlExpression : public QQmlExpression {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlExpression::staticMetaObject,
  qt_meta_stringdata_MyQQmlExpression.data,
  qt_meta_data_MyQQmlExpression,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlExpression.stringdata0))
      return static_cast<void*>(this);
  return QQmlExpression::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlExpression::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlExpression() {}
// void QQmlExpression()
MyQQmlExpression() : QQmlExpression() {}
// void QQmlExpression(QQmlContext *, QObject *, const QString &, QObject *)
MyQQmlExpression(QQmlContext * arg0, QObject * arg1, const QString & arg2, QObject * arg3) : QQmlExpression(arg0, arg1, arg2, arg3) {}
// void QQmlExpression(const QQmlScriptString &, QQmlContext *, QObject *, QObject *)
MyQQmlExpression(const QQmlScriptString & arg0, QQmlContext * arg1, QObject * arg2, QObject * arg3) : QQmlExpression(arg0, arg1, arg2, arg3) {}
};

extern "C" Q_DECL_EXPORT
void* C_QQmlExpression_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQmlExpression* qo = (MyQQmlExpression*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlexpression(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm1344201900 (30)_ZN14QQmlExpression2trEPKcS1_i
//static
/*void qm1344201900(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlExpression::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlExpression::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:62
// [-2] void QQmlExpression() 
// (11)qm823953404 (23)_ZN14QQmlExpressionC2Ev
/*void* qm823953404()*/{
  ;
  this_ =  new QQmlExpression();
  this_ =  new MyQQmlExpression();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:63
// [-2] void QQmlExpression(QQmlContext *, QObject *, const QString &, QObject *) 
// (11)qm155982464 (58)_ZN14QQmlExpressionC2EP11QQmlContextP7QObjectRK7QStringS3_
/*void* qm155982464(QQmlContext * arg0, QObject * arg1, const QString & arg2, QObject * arg3)*/{
  QQmlContext * arg0 = *(QQmlContext **)this_; QObject * arg1 = *(QObject **)this_; const QString & arg2 = *(const QString *)this_; QObject * arg3 = *(QObject **)this_;
  this_ =  new QQmlExpression(arg0, arg1, arg2, arg3);
  this_ =  new MyQQmlExpression(arg0, arg1, arg2, arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:64
// [-2] void QQmlExpression(const QQmlScriptString &, QQmlContext *, QObject *, QObject *) 
// (12)qm2884495650 (68)_ZN14QQmlExpressionC2ERK16QQmlScriptStringP11QQmlContextP7QObjectS6_
/*void* qm2884495650(const QQmlScriptString & arg0, QQmlContext * arg1, QObject * arg2, QObject * arg3)*/{
  const QQmlScriptString & arg0 = *(const QQmlScriptString *)this_; QQmlContext * arg1 = *(QQmlContext **)this_; QObject * arg2 = *(QObject **)this_; QObject * arg3 = *(QObject **)this_;
  this_ =  new QQmlExpression(arg0, arg1, arg2, arg3);
  this_ =  new MyQQmlExpression(arg0, arg1, arg2, arg3);
}


/*void C_ZN14QQmlExpressionD2Ev(void *this_)*/ {
  delete (QQmlExpression*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlexpression
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
