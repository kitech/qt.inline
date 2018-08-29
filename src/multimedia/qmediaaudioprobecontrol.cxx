//  header block begin
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaaudioprobecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaAudioProbeControl is pure virtual: false
// QMediaAudioProbeControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaAudioProbeControl_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaAudioProbeControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaAudioProbeControl_t qt_meta_stringdata_MyQMediaAudioProbeControl = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQMediaAudioProbeControl"
  },
  "MyQMediaAudioProbeControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaAudioProbeControl[] = {
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
class Q_DECL_EXPORT MyQMediaAudioProbeControl : public QMediaAudioProbeControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaAudioProbeControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaAudioProbeControl.data,
  qt_meta_data_MyQMediaAudioProbeControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaAudioProbeControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaAudioProbeControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaAudioProbeControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaAudioProbeControl() {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QMediaAudioProbeControl10metaObjectEv(void *this_) {
  return (void*)((QMediaAudioProbeControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaAudioProbeControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaAudioProbeControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QMediaAudioProbeControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaAudioProbeControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaAudioProbeControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAudioProbeControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:50
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QMediaAudioProbeControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaAudioProbeControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:52
// [-2] void ~QMediaAudioProbeControl()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControlD2Ev(void *this_) {
  delete (QMediaAudioProbeControl*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:55
// [-2] void audioBufferProbed(const QAudioBuffer &)
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControl17audioBufferProbedERK12QAudioBuffer(void *this_, QAudioBuffer* buffer) {
  ((QMediaAudioProbeControl*)this_)->audioBufferProbed(*buffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaaudioprobecontrol.h:56
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN23QMediaAudioProbeControl5flushEv(void *this_) {
  ((QMediaAudioProbeControl*)this_)->flush();
}

//  main block end
