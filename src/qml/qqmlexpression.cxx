//  header block begin
// since 0x050000
// /usr/include/qt/QtQml/qqmlexpression.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlexpression.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlExpression is pure virtual: false
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
  virtual ~MyQQmlExpression() {}
// void QQmlExpression()
MyQQmlExpression() : QQmlExpression() {}
// void QQmlExpression(QQmlContext *, QObject *, const QString &, QObject *)
MyQQmlExpression(QQmlContext * arg0, QObject * arg1, const QString & arg2, QObject * arg3) : QQmlExpression(arg0, arg1, arg2, arg3) {}
// void QQmlExpression(const QQmlScriptString &, QQmlContext *, QObject *, QObject *)
MyQQmlExpression(const QQmlScriptString & arg0, QQmlContext * arg1, QObject * arg2, QObject * arg3) : QQmlExpression(arg0, arg1, arg2, arg3) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlExpression10metaObjectEv(void *this_) {
  return (void*)((QQmlExpression*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlExpression11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlExpression*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QQmlExpression11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlExpression*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlExpression2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlExpression::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlExpression6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlExpression::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:62
// [-2] void QQmlExpression()
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlExpressionC2Ev() {
  return  new MyQQmlExpression();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:63
// [-2] void QQmlExpression(QQmlContext *, QObject *, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlExpressionC2EP11QQmlContextP7QObjectRK7QStringS3_(QQmlContext * arg0, QObject * arg1, QString* arg2, QObject * arg3) {
  return  new MyQQmlExpression(arg0, arg1, *arg2, arg3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:64
// [-2] void QQmlExpression(const QQmlScriptString &, QQmlContext *, QObject *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlExpressionC2ERK16QQmlScriptStringP11QQmlContextP7QObjectS6_(QQmlScriptString* arg0, QQmlContext * arg1, QObject * arg2, QObject * arg3) {
  return  new MyQQmlExpression(*arg0, arg1, arg2, arg3);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:65
// [-2] void ~QQmlExpression()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlExpressionD2Ev(void *this_) {
  delete (QQmlExpression*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:67
// [8] QQmlEngine * engine()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlExpression6engineEv(void *this_) {
  return (void*)((QQmlExpression*)this_)->engine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:68
// [8] QQmlContext * context()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlExpression7contextEv(void *this_) {
  return (void*)((QQmlExpression*)this_)->context();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:70
// [8] QString expression()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlExpression10expressionEv(void *this_) {
  auto rv = ((QQmlExpression*)this_)->expression();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:71
// [-2] void setExpression(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlExpression13setExpressionERK7QString(void *this_, QString* arg0) {
  ((QQmlExpression*)this_)->setExpression(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:73
// [1] bool notifyOnValueChanged()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QQmlExpression20notifyOnValueChangedEv(void *this_) {
  return (bool)((QQmlExpression*)this_)->notifyOnValueChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:74
// [-2] void setNotifyOnValueChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlExpression23setNotifyOnValueChangedEb(void *this_, bool arg0) {
  ((QQmlExpression*)this_)->setNotifyOnValueChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:76
// [8] QString sourceFile()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlExpression10sourceFileEv(void *this_) {
  auto rv = ((QQmlExpression*)this_)->sourceFile();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:77
// [4] int lineNumber()
extern "C" Q_DECL_EXPORT
int C_ZNK14QQmlExpression10lineNumberEv(void *this_) {
  return (int)((QQmlExpression*)this_)->lineNumber();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:78
// [4] int columnNumber()
extern "C" Q_DECL_EXPORT
int C_ZNK14QQmlExpression12columnNumberEv(void *this_) {
  return (int)((QQmlExpression*)this_)->columnNumber();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:79
// [-2] void setSourceLocation(const QString &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlExpression17setSourceLocationERK7QStringii(void *this_, QString* fileName, int line, int column) {
  ((QQmlExpression*)this_)->setSourceLocation(*fileName, line, column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:81
// [8] QObject * scopeObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlExpression11scopeObjectEv(void *this_) {
  return (void*)((QQmlExpression*)this_)->scopeObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:83
// [1] bool hasError()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QQmlExpression8hasErrorEv(void *this_) {
  return (bool)((QQmlExpression*)this_)->hasError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:84
// [-2] void clearError()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlExpression10clearErrorEv(void *this_) {
  ((QQmlExpression*)this_)->clearError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:85
// [8] QQmlError error()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QQmlExpression5errorEv(void *this_) {
  auto rv = ((QQmlExpression*)this_)->error();
return new QQmlError(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:87
// [16] QVariant evaluate(bool *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QQmlExpression8evaluateEPb(void *this_, bool * valueIsUndefined) {
  auto rv = ((QQmlExpression*)this_)->evaluate(valueIsUndefined);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlexpression.h:90
// [-2] void valueChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QQmlExpression12valueChangedEv(void *this_) {
  ((QQmlExpression*)this_)->valueChanged();
}

//  main block end
