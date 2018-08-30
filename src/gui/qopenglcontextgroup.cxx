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

// QOpenGLContextGroup is pure virtual: false
// QOpenGLContextGroup has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQOpenGLContextGroup_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLContextGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLContextGroup_t qt_meta_stringdata_MyQOpenGLContextGroup = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQOpenGLContextGroup"
  },
  "MyQOpenGLContextGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLContextGroup[] = {
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
class Q_DECL_EXPORT MyQOpenGLContextGroup : public QOpenGLContextGroup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOpenGLContextGroup::staticMetaObject,
  qt_meta_stringdata_MyQOpenGLContextGroup.data,
  qt_meta_data_MyQOpenGLContextGroup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQOpenGLContextGroup.stringdata0))
      return static_cast<void*>(this);
  return QOpenGLContextGroup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOpenGLContextGroup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQOpenGLContextGroup() {}
};

extern "C" Q_DECL_EXPORT
void C_QOpenGLContextGroup_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQOpenGLContextGroup* qo = (MyQOpenGLContextGroup*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QOpenGLContextGroup10metaObjectEv(void *this_) {
  return (void*)((QOpenGLContextGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLContextGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QOpenGLContextGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLContextGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLContextGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:128
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLContextGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:131
// [-2] void ~QOpenGLContextGroup()
extern "C" Q_DECL_EXPORT
void C_ZN19QOpenGLContextGroupD2Ev(void *this_) {
  delete (QOpenGLContextGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:133
// [-2] QList<QOpenGLContext *> shares()
extern "C" Q_DECL_EXPORT
QList<QOpenGLContext *>* C_ZNK19QOpenGLContextGroup6sharesEv(void *this_) {
  auto rv = ((QOpenGLContextGroup*)this_)->shares();
return new QList<QOpenGLContext *>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:135
// [8] QOpenGLContextGroup * currentContextGroup()
extern "C" Q_DECL_EXPORT
void* C_ZN19QOpenGLContextGroup19currentContextGroupEv() {
  return (void*)QOpenGLContextGroup::currentContextGroup();
}

//  main block end
