//  header block begin
// since 0x050400
// /usr/include/qt/QtQuick/qsgengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgengine.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGEngine is pure virtual: false
// QSGEngine has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGEngine_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGEngine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGEngine_t qt_meta_stringdata_MyQSGEngine = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQSGEngine"
  },
  "MyQSGEngine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGEngine[] = {
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
class Q_DECL_EXPORT MyQSGEngine : public QSGEngine {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSGEngine::staticMetaObject,
  qt_meta_stringdata_MyQSGEngine.data,
  qt_meta_data_MyQSGEngine,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSGEngine.stringdata0))
      return static_cast<void*>(this);
  return QSGEngine::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSGEngine::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSGEngine() {}
// void QSGEngine(QObject *)
MyQSGEngine(QObject * parent) : QSGEngine(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QSGEngine_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSGEngine* qo = (MyQSGEngine*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine10metaObjectEv(void *this_) {
  return (void*)((QSGEngine*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSGEngine11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSGEngine*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QSGEngine11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSGEngine*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSGEngine2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGEngine::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSGEngine6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGEngine::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:70
// [-2] void QSGEngine(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSGEngineC2EP7QObject(QObject * parent) {
  return  new MyQSGEngine(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:71
// [-2] void ~QSGEngine()
extern "C" Q_DECL_EXPORT
void C_ZN9QSGEngineD2Ev(void *this_) {
  delete (QSGEngine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:73
// [-2] void initialize(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void C_ZN9QSGEngine10initializeEP14QOpenGLContext(void *this_, QOpenGLContext * context) {
  ((QSGEngine*)this_)->initialize(context);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:74
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN9QSGEngine10invalidateEv(void *this_) {
  ((QSGEngine*)this_)->invalidate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:76
// [8] QSGAbstractRenderer * createRenderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine14createRendererEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createRenderer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:77
// [8] QSGTexture * createTextureFromImage(const QImage &, QSGEngine::CreateTextureOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine22createTextureFromImageERK6QImage6QFlagsINS_19CreateTextureOptionEE(void *this_, QImage* image, QFlags<QSGEngine::CreateTextureOption> options) {
  return (void*)((QSGEngine*)this_)->createTextureFromImage(*image, options);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgengine.h:78
// [8] QSGTexture * createTextureFromId(uint, const QSize &, QSGEngine::CreateTextureOptions)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine19createTextureFromIdEjRK5QSize6QFlagsINS_19CreateTextureOptionEE(void *this_, uint id, QSize* size, QFlags<QSGEngine::CreateTextureOption> options) {
  return (void*)((QSGEngine*)this_)->createTextureFromId(id, *size, options);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qsgengine.h:79
// [8] QSGRendererInterface * rendererInterface()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine17rendererInterfaceEv(void *this_) {
  return (void*)((QSGEngine*)this_)->rendererInterface();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qsgengine.h:80
// [8] QSGRectangleNode * createRectangleNode()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine19createRectangleNodeEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createRectangleNode();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qsgengine.h:81
// [8] QSGImageNode * createImageNode()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine15createImageNodeEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createImageNode();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtQuick/qsgengine.h:82
// [8] QSGNinePatchNode * createNinePatchNode()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSGEngine19createNinePatchNodeEv(void *this_) {
  return (void*)((QSGEngine*)this_)->createNinePatchNode();
}
#endif // QT_VERSION >= 0x050800

//  main block end
