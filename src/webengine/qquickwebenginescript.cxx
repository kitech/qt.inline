//  header block begin
// since 0x050900
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickwebenginescript.h>
#include <QtWebEngine>
#include "callback_inherit.h"

// QQuickWebEngineScript is pure virtual: false
// QQuickWebEngineScript has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQuickWebEngineScript_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickWebEngineScript_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickWebEngineScript_t qt_meta_stringdata_MyQQuickWebEngineScript = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQQuickWebEngineScript"
  },
  "MyQQuickWebEngineScript"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickWebEngineScript[] = {
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
class Q_DECL_EXPORT MyQQuickWebEngineScript : public QQuickWebEngineScript {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQuickWebEngineScript::staticMetaObject,
  qt_meta_stringdata_MyQQuickWebEngineScript.data,
  qt_meta_data_MyQQuickWebEngineScript,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQuickWebEngineScript.stringdata0))
      return static_cast<void*>(this);
  return QQuickWebEngineScript::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQuickWebEngineScript::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQuickWebEngineScript() {}
// void QQuickWebEngineScript(QObject *)
MyQQuickWebEngineScript(QObject * parent) : QQuickWebEngineScript(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQuickWebEngineScript::timerEvent(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QQuickWebEngineScript_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQQuickWebEngineScript* qo = (MyQQuickWebEngineScript*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:104
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript10timerEventEP11QTimerEvent(void *this_, QTimerEvent * e) {
  ((QQuickWebEngineScript*)this_)->QQuickWebEngineScript::timerEvent(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript10metaObjectEv(void *this_) {
  return (void*)((QQuickWebEngineScript*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQuickWebEngineScript11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickWebEngineScript*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QQuickWebEngineScript11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickWebEngineScript*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQuickWebEngineScript2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWebEngineScript::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQuickWebEngineScript6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickWebEngineScript::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:77
// [-2] void QQuickWebEngineScript(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QQuickWebEngineScriptC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQQuickWebEngineScript*)(0);
  return  new MyQQuickWebEngineScript(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:78
// [-2] void ~QQuickWebEngineScript()
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScriptD2Ev(void *this_) {
  delete (QQuickWebEngineScript*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:79
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript8toStringEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->toString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:81
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript4nameEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:82
// [8] QUrl sourceUrl()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript9sourceUrlEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->sourceUrl();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:83
// [8] QString sourceCode()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QQuickWebEngineScript10sourceCodeEv(void *this_) {
  auto rv = ((QQuickWebEngineScript*)this_)->sourceCode();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:84
// [4] QQuickWebEngineScript::InjectionPoint injectionPoint()
extern "C" Q_DECL_EXPORT
QQuickWebEngineScript::InjectionPoint C_ZNK21QQuickWebEngineScript14injectionPointEv(void *this_) {
  return (QQuickWebEngineScript::InjectionPoint)((QQuickWebEngineScript*)this_)->injectionPoint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:85
// [4] QQuickWebEngineScript::ScriptWorldId worldId()
extern "C" Q_DECL_EXPORT
QQuickWebEngineScript::ScriptWorldId C_ZNK21QQuickWebEngineScript7worldIdEv(void *this_) {
  return (QQuickWebEngineScript::ScriptWorldId)((QQuickWebEngineScript*)this_)->worldId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:86
// [1] bool runOnSubframes()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QQuickWebEngineScript14runOnSubframesEv(void *this_) {
  return (bool)((QQuickWebEngineScript*)this_)->runOnSubframes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:88
// [-2] void setName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript7setNameERK7QString(void *this_, QString* name) {
  ((QQuickWebEngineScript*)this_)->setName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:89
// [-2] void setSourceUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript12setSourceUrlERK4QUrl(void *this_, QUrl* url) {
  ((QQuickWebEngineScript*)this_)->setSourceUrl(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:90
// [-2] void setSourceCode(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript13setSourceCodeERK7QString(void *this_, QString* code) {
  ((QQuickWebEngineScript*)this_)->setSourceCode(*code);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:91
// [-2] void setInjectionPoint(QQuickWebEngineScript::InjectionPoint)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript17setInjectionPointENS_14InjectionPointE(void *this_, QQuickWebEngineScript::InjectionPoint injectionPoint) {
  ((QQuickWebEngineScript*)this_)->setInjectionPoint(injectionPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:92
// [-2] void setWorldId(QQuickWebEngineScript::ScriptWorldId)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript10setWorldIdENS_13ScriptWorldIdE(void *this_, QQuickWebEngineScript::ScriptWorldId scriptWorldId) {
  ((QQuickWebEngineScript*)this_)->setWorldId(scriptWorldId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:93
// [-2] void setRunOnSubframes(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript17setRunOnSubframesEb(void *this_, bool on) {
  ((QQuickWebEngineScript*)this_)->setRunOnSubframes(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:96
// [-2] void nameChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript11nameChangedERK7QString(void *this_, QString* name) {
  ((QQuickWebEngineScript*)this_)->nameChanged(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:97
// [-2] void sourceUrlChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript16sourceUrlChangedERK4QUrl(void *this_, QUrl* url) {
  ((QQuickWebEngineScript*)this_)->sourceUrlChanged(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:98
// [-2] void sourceCodeChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript17sourceCodeChangedERK7QString(void *this_, QString* code) {
  ((QQuickWebEngineScript*)this_)->sourceCodeChanged(*code);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:99
// [-2] void injectionPointChanged(QQuickWebEngineScript::InjectionPoint)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript21injectionPointChangedENS_14InjectionPointE(void *this_, QQuickWebEngineScript::InjectionPoint injectionPoint) {
  ((QQuickWebEngineScript*)this_)->injectionPointChanged(injectionPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:100
// [-2] void worldIdChanged(QQuickWebEngineScript::ScriptWorldId)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript14worldIdChangedENS_13ScriptWorldIdE(void *this_, QQuickWebEngineScript::ScriptWorldId scriptWorldId) {
  ((QQuickWebEngineScript*)this_)->worldIdChanged(scriptWorldId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngine/qquickwebenginescript.h:101
// [-2] void runOnSubframesChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QQuickWebEngineScript21runOnSubframesChangedEb(void *this_, bool on) {
  ((QQuickWebEngineScript*)this_)->runOnSubframesChanged(on);
}

//  main block end
