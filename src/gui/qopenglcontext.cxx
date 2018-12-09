//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qopenglcontext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglcontext.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLContext is pure virtual: false
// QOpenGLContext has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLContext_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLContext_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLContext_t qt_meta_stringdata_MyQOpenGLContext = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQOpenGLContext"
  },
  "MyQOpenGLContext"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLContext[] = {
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
class Q_DECL_EXPORT MyQOpenGLContext : public QOpenGLContext {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOpenGLContext::staticMetaObject,
  qt_meta_stringdata_MyQOpenGLContext.data,
  qt_meta_data_MyQOpenGLContext,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQOpenGLContext.stringdata0))
      return static_cast<void*>(this);
  return QOpenGLContext::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOpenGLContext::qt_metacall(_c, _id, _a);
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
  virtual ~MyQOpenGLContext() {}
// void QOpenGLContext(QObject *)
MyQOpenGLContext(QObject * parent) : QOpenGLContext(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QOpenGLContext_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQOpenGLContext* qo = (MyQOpenGLContext*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:151
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext10metaObjectEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:151
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLContext11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLContext*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:151
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QOpenGLContext11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLContext*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:151
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLContext2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLContext::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:151
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLContext6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLContext::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:154
// [-2] void QOpenGLContext(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLContextC2EP7QObject(QObject * parent) {
  return  new MyQOpenGLContext(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:155
// [-2] void ~QOpenGLContext()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContextD2Ev(void *this_) {
  delete (QOpenGLContext*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:157
// [-2] void setFormat(const QSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContext9setFormatERK14QSurfaceFormat(void *this_, QSurfaceFormat* format) {
  ((QOpenGLContext*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:158
// [-2] void setShareContext(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContext15setShareContextEPS_(void *this_, QOpenGLContext * shareContext) {
  ((QOpenGLContext*)this_)->setShareContext(shareContext);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:159
// [-2] void setScreen(QScreen *)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContext9setScreenEP7QScreen(void *this_, QScreen * screen) {
  ((QOpenGLContext*)this_)->setScreen(screen);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qopenglcontext.h:160
// [-2] void setNativeHandle(const QVariant &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContext15setNativeHandleERK8QVariant(void *this_, QVariant* handle) {
  ((QOpenGLContext*)this_)->setNativeHandle(*handle);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:162
// [1] bool create()
extern "C" Q_DECL_EXPORT
bool C_ZN14QOpenGLContext6createEv(void *this_) {
  return (bool)((QOpenGLContext*)this_)->create();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:163
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLContext7isValidEv(void *this_) {
  return (bool)((QOpenGLContext*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:165
// [8] QSurfaceFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext6formatEv(void *this_) {
  auto rv = ((QOpenGLContext*)this_)->format();
return new QSurfaceFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:166
// [8] QOpenGLContext * shareContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext12shareContextEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->shareContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:167
// [8] QOpenGLContextGroup * shareGroup()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext10shareGroupEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->shareGroup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:168
// [8] QScreen * screen()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext6screenEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->screen();
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qopenglcontext.h:169
// [16] QVariant nativeHandle()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext12nativeHandleEv(void *this_) {
  auto rv = ((QOpenGLContext*)this_)->nativeHandle();
return new QVariant(rv);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:171
// [4] GLuint defaultFramebufferObject()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK14QOpenGLContext24defaultFramebufferObjectEv(void *this_) {
  return (GLuint)((QOpenGLContext*)this_)->defaultFramebufferObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:173
// [1] bool makeCurrent(QSurface *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QOpenGLContext11makeCurrentEP8QSurface(void *this_, QSurface * surface) {
  return (bool)((QOpenGLContext*)this_)->makeCurrent(surface);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:174
// [-2] void doneCurrent()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContext11doneCurrentEv(void *this_) {
  ((QOpenGLContext*)this_)->doneCurrent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:176
// [-2] void swapBuffers(QSurface *)
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContext11swapBuffersEP8QSurface(void *this_, QSurface * surface) {
  ((QOpenGLContext*)this_)->swapBuffers(surface);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:177
// [8] QFunctionPointer getProcAddress(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLContext14getProcAddressERK10QByteArray(void *this_, QByteArray* procName) {
  auto rv = ((QOpenGLContext*)this_)->getProcAddress(*procName);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qopenglcontext.h:178
// [8] QFunctionPointer getProcAddress(const char *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLContext14getProcAddressEPKc(void *this_, const char * procName) {
  auto rv = ((QOpenGLContext*)this_)->getProcAddress(procName);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:180
// [8] QSurface * surface()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext7surfaceEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->surface();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:182
// [8] QOpenGLContext * currentContext()
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLContext14currentContextEv() {
  return (void*)QOpenGLContext::currentContext();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:183
// [1] bool areSharing(QOpenGLContext *, QOpenGLContext *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QOpenGLContext10areSharingEPS_S0_(QOpenGLContext * first, QOpenGLContext * second) {
  return (bool)QOpenGLContext::areSharing(first, second);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:185
// [8] QPlatformOpenGLContext * handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext6handleEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->handle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:186
// [8] QPlatformOpenGLContext * shareHandle()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext11shareHandleEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->shareHandle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:188
// [8] QOpenGLFunctions * functions()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext9functionsEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->functions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:189
// [8] QOpenGLExtraFunctions * extraFunctions()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext14extraFunctionsEv(void *this_) {
  return (void*)((QOpenGLContext*)this_)->extraFunctions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:191
// [8] QAbstractOpenGLFunctions * versionFunctions(const QOpenGLVersionProfile &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QOpenGLContext16versionFunctionsERK21QOpenGLVersionProfile(void *this_, QOpenGLVersionProfile* versionProfile) {
  return (void*)((QOpenGLContext*)this_)->versionFunctions(*versionProfile);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:200
// [-2] QSet<QByteArray> extensions()
extern "C" Q_DECL_EXPORT
void C_ZNK14QOpenGLContext10extensionsEv(void *this_) {
  auto rv = ((QOpenGLContext*)this_)->extensions();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:201
// [1] bool hasExtension(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLContext12hasExtensionERK10QByteArray(void *this_, QByteArray* extension) {
  return (bool)((QOpenGLContext*)this_)->hasExtension(*extension);
}

// Public static Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglcontext.h:203
// [8] void * openGLModuleHandle()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLContext18openGLModuleHandleEv() {
  return (void*)QOpenGLContext::openGLModuleHandle();
}
#endif // QT_VERSION >= 0x050300

// Public static Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglcontext.h:210
// [4] QOpenGLContext::OpenGLModuleType openGLModuleType()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
QOpenGLContext::OpenGLModuleType C_ZN14QOpenGLContext16openGLModuleTypeEv() {
  return (QOpenGLContext::OpenGLModuleType)QOpenGLContext::openGLModuleType();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglcontext.h:212
// [1] bool isOpenGLES()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZNK14QOpenGLContext10isOpenGLESEv(void *this_) {
  return (bool)((QOpenGLContext*)this_)->isOpenGLES();
}
#endif // QT_VERSION >= 0x050300

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qopenglcontext.h:214
// [1] bool supportsThreadedOpenGL()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
bool C_ZN14QOpenGLContext22supportsThreadedOpenGLEv() {
  return (bool)QOpenGLContext::supportsThreadedOpenGL();
}
#endif // QT_VERSION >= 0x050500

// Public static Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtGui/qopenglcontext.h:215
// [8] QOpenGLContext * globalShareContext()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZN14QOpenGLContext18globalShareContextEv() {
  return (void*)QOpenGLContext::globalShareContext();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:218
// [-2] void aboutToBeDestroyed()
extern "C" Q_DECL_EXPORT
void C_ZN14QOpenGLContext18aboutToBeDestroyedEv(void *this_) {
  ((QOpenGLContext*)this_)->aboutToBeDestroyed();
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
