//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglvertexarrayobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVertexArrayObject is pure virtual: false
// QOpenGLVertexArrayObject has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQOpenGLVertexArrayObject_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLVertexArrayObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLVertexArrayObject_t qt_meta_stringdata_MyQOpenGLVertexArrayObject = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQOpenGLVertexArrayObject"
  },
  "MyQOpenGLVertexArrayObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLVertexArrayObject[] = {
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
class Q_DECL_EXPORT MyQOpenGLVertexArrayObject : public QOpenGLVertexArrayObject {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOpenGLVertexArrayObject::staticMetaObject,
  qt_meta_stringdata_MyQOpenGLVertexArrayObject.data,
  qt_meta_data_MyQOpenGLVertexArrayObject,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQOpenGLVertexArrayObject.stringdata0))
      return static_cast<void*>(this);
  return QOpenGLVertexArrayObject::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOpenGLVertexArrayObject::qt_metacall(_c, _id, _a);
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
  virtual ~MyQOpenGLVertexArrayObject() {}
// void QOpenGLVertexArrayObject(QObject *)
MyQOpenGLVertexArrayObject(QObject * parent) : QOpenGLVertexArrayObject(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QOpenGLVertexArrayObject_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQOpenGLVertexArrayObject* qo = (MyQOpenGLVertexArrayObject*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QOpenGLVertexArrayObject10metaObjectEv(void *this_) {
  return (void*)((QOpenGLVertexArrayObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLVertexArrayObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN24QOpenGLVertexArrayObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLVertexArrayObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLVertexArrayObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLVertexArrayObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:59
// [-2] void QOpenGLVertexArrayObject(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QOpenGLVertexArrayObjectC2EP7QObject(QObject * parent) {
  return  new MyQOpenGLVertexArrayObject(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:60
// [-2] void ~QOpenGLVertexArrayObject()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObjectD2Ev(void *this_) {
  delete (QOpenGLVertexArrayObject*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:62
// [1] bool create()
extern "C" Q_DECL_EXPORT
bool C_ZN24QOpenGLVertexArrayObject6createEv(void *this_) {
  return (bool)((QOpenGLVertexArrayObject*)this_)->create();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:63
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObject7destroyEv(void *this_) {
  ((QOpenGLVertexArrayObject*)this_)->destroy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:64
// [1] bool isCreated()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QOpenGLVertexArrayObject9isCreatedEv(void *this_) {
  return (bool)((QOpenGLVertexArrayObject*)this_)->isCreated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:65
// [4] GLuint objectId()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK24QOpenGLVertexArrayObject8objectIdEv(void *this_) {
  return (GLuint)((QOpenGLVertexArrayObject*)this_)->objectId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:66
// [-2] void bind()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObject4bindEv(void *this_) {
  ((QOpenGLVertexArrayObject*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglvertexarrayobject.h:67
// [-2] void release()
extern "C" Q_DECL_EXPORT
void C_ZN24QOpenGLVertexArrayObject7releaseEv(void *this_) {
  ((QOpenGLVertexArrayObject*)this_)->release();
}

//  main block end
