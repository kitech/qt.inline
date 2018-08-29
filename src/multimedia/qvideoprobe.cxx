//  header block begin
// /usr/include/qt/QtMultimedia/qvideoprobe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideoprobe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoProbe is pure virtual: false
// QVideoProbe has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQVideoProbe_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoProbe_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoProbe_t qt_meta_stringdata_MyQVideoProbe = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQVideoProbe"
  },
  "MyQVideoProbe"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoProbe[] = {
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
class Q_DECL_EXPORT MyQVideoProbe : public QVideoProbe {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QVideoProbe::staticMetaObject,
  qt_meta_stringdata_MyQVideoProbe.data,
  qt_meta_data_MyQVideoProbe,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQVideoProbe.stringdata0))
      return static_cast<void*>(this);
  return QVideoProbe::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QVideoProbe::qt_metacall(_c, _id, _a);
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
  virtual ~MyQVideoProbe() {}
// void QVideoProbe(QObject *)
MyQVideoProbe(QObject * parent) : QVideoProbe(parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QVideoProbe10metaObjectEv(void *this_) {
  return (void*)((QVideoProbe*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbe11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoProbe*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QVideoProbe11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoProbe*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbe2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoProbe::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbe6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoProbe::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:56
// [-2] void QVideoProbe(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QVideoProbeC2EP7QObject(QObject * parent) {
  return  new MyQVideoProbe(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:57
// [-2] void ~QVideoProbe()
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoProbeD2Ev(void *this_) {
  delete (QVideoProbe*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:59
// [1] bool setSource(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QVideoProbe9setSourceEP12QMediaObject(void *this_, QMediaObject * source) {
  return (bool)((QVideoProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:60
// [1] bool setSource(QMediaRecorder *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QVideoProbe9setSourceEP14QMediaRecorder(void *this_, QMediaRecorder * source) {
  return (bool)((QVideoProbe*)this_)->setSource(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:62
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QVideoProbe8isActiveEv(void *this_) {
  return (bool)((QVideoProbe*)this_)->isActive();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:65
// [-2] void videoFrameProbed(const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoProbe16videoFrameProbedERK11QVideoFrame(void *this_, QVideoFrame* videoFrame) {
  ((QVideoProbe*)this_)->videoFrameProbed(*videoFrame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoprobe.h:66
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN11QVideoProbe5flushEv(void *this_) {
  ((QVideoProbe*)this_)->flush();
}

//  main block end
