//  header block begin
// /usr/include/qt/QtMultimedia/qaudioprobe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioprobe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioProbe is pure virtual: false
// QAudioProbe has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAudioProbe_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioProbe_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioProbe_t qt_meta_stringdata_MyQAudioProbe = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQAudioProbe"
  },
  "MyQAudioProbe"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioProbe[] = {
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
class Q_DECL_EXPORT MyQAudioProbe : public QAudioProbe {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioProbe::staticMetaObject,
  qt_meta_stringdata_MyQAudioProbe.data,
  qt_meta_data_MyQAudioProbe,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioProbe.stringdata0))
      return static_cast<void*>(this);
  return QAudioProbe::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioProbe::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioProbe() {}
// void QAudioProbe(QObject *)
MyQAudioProbe(QObject * parent) : QAudioProbe(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QAudioProbe_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioProbe* qo = (MyQAudioProbe*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QAudioProbe10metaObjectEv(void *this_) {
  return (void*)((QAudioProbe*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioProbe11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioProbe*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QAudioProbe11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioProbe*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioProbe2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioProbe::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioProbe6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioProbe::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:56
// [-2] void QAudioProbe(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QAudioProbeC2EP7QObject(QObject * parent) {
  return  new MyQAudioProbe(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:57
// [-2] void ~QAudioProbe()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioProbeD2Ev(void *this_) {
  delete (QAudioProbe*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:59
// [1] bool setSource(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QAudioProbe9setSourceEP12QMediaObject(void *this_, QMediaObject * source) {
  return (bool)((QAudioProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:60
// [1] bool setSource(QMediaRecorder *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QAudioProbe9setSourceEP14QMediaRecorder(void *this_, QMediaRecorder * source) {
  return (bool)((QAudioProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:62
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QAudioProbe8isActiveEv(void *this_) {
  return (bool)((QAudioProbe*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:65
// [-2] void audioBufferProbed(const QAudioBuffer &)
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioProbe17audioBufferProbedERK12QAudioBuffer(void *this_, QAudioBuffer* audioBuffer) {
  ((QAudioProbe*)this_)->audioBufferProbed(*audioBuffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioprobe.h:66
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN11QAudioProbe5flushEv(void *this_) {
  ((QAudioProbe*)this_)->flush();
}

//  main block end
