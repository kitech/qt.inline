//  header block begin
// /usr/include/qt/QtMultimedia/qsound.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsound.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QSound is pure virtual: false
// QSound has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSound_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSound_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSound_t qt_meta_stringdata_MyQSound = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQSound"
  },
  "MyQSound"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSound[] = {
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
class Q_DECL_EXPORT MyQSound : public QSound {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSound::staticMetaObject,
  qt_meta_stringdata_MyQSound.data,
  qt_meta_data_MyQSound,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSound.stringdata0))
      return static_cast<void*>(this);
  return QSound::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSound::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSound() {}
// void QSound(const QString &, QObject *)
MyQSound(const QString & filename, QObject * parent) : QSound(filename, parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSound10metaObjectEv(void *this_) {
  return (void*)((QSound*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSound11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSound*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN6QSound11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSound*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSound2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSound::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSound6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSound::trUtf8(s, c, n);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:59
// [-2] void play(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN6QSound4playERK7QString(QString* filename) {
  QSound::play(*filename);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:61
// [-2] void QSound(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSoundC2ERK7QStringP7QObject(QString* filename, QObject * parent) {
  return  new MyQSound(*filename, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:62
// [-2] void ~QSound()
extern "C" Q_DECL_EXPORT
void C_ZN6QSoundD2Ev(void *this_) {
  delete (QSound*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:64
// [4] int loops()
extern "C" Q_DECL_EXPORT
int C_ZNK6QSound5loopsEv(void *this_) {
  return (int)((QSound*)this_)->loops();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:65
// [4] int loopsRemaining()
extern "C" Q_DECL_EXPORT
int C_ZNK6QSound14loopsRemainingEv(void *this_) {
  return (int)((QSound*)this_)->loopsRemaining();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:66
// [-2] void setLoops(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QSound8setLoopsEi(void *this_, int arg0) {
  ((QSound*)this_)->setLoops(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:67
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSound8fileNameEv(void *this_) {
  auto rv = ((QSound*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:69
// [1] bool isFinished()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QSound10isFinishedEv(void *this_) {
  return (bool)((QSound*)this_)->isFinished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:72
// [-2] void play()
extern "C" Q_DECL_EXPORT
void C_ZN6QSound4playEv(void *this_) {
  ((QSound*)this_)->play();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsound.h:73
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN6QSound4stopEv(void *this_) {
  ((QSound*)this_)->stop();
}

//  main block end
