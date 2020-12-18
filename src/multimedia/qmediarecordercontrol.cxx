//  header block begin

// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediarecordercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaRecorderControl is pure virtual: true true
// QMediaRecorderControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaRecorderControl_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaRecorderControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaRecorderControl_t qt_meta_stringdata_MyQMediaRecorderControl = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQMediaRecorderControl"
  },
  "MyQMediaRecorderControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaRecorderControl[] = {
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
class Q_DECL_EXPORT MyQMediaRecorderControl : public QMediaRecorderControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaRecorderControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaRecorderControl.data,
  qt_meta_data_MyQMediaRecorderControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaRecorderControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaRecorderControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaRecorderControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaRecorderControl() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QUrl outputLocation()
  virtual QUrl outputLocation() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"outputLocation", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QUrl){};}
    auto prv = (QUrl*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QUrl
    } else {
    return (QUrl){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool setOutputLocation(const QUrl &)
  virtual bool setOutputLocation(const QUrl & location)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setOutputLocation", &handled, 1, (uint64_t)&location, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QMediaRecorder::State state()
  virtual QMediaRecorder::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaRecorder::State)(int)(irv);
      // Elaborated Enum QMediaRecorder::State
    } else {
    return (QMediaRecorder::State){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QMediaRecorder::Status status()
  virtual QMediaRecorder::Status status() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"status", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaRecorder::Status)(int)(irv);
      // Elaborated Enum QMediaRecorder::Status
    } else {
    return (QMediaRecorder::Status){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qint64 duration()
  virtual qint64 duration() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"duration", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isMuted()
  virtual bool isMuted() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isMuted", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qreal volume()
  virtual qreal volume() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"volume", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void applySettings()
  virtual void applySettings()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"applySettings", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::applySettings();
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setState(QMediaRecorder::State)
  virtual void setState(QMediaRecorder::State state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setState", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::setState(state);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setMuted(bool)
  virtual void setMuted(bool muted)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMuted", &handled, 1, (uint64_t)muted, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::setMuted(muted);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setVolume(qreal)
  virtual void setVolume(qreal volume)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setVolume", &handled, 1, (uint64_t)&volume, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaRecorderControl::setVolume(volume);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMediaRecorderControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaRecorderControl* qo = (MyQMediaRecorderControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediarecordercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm2647007302 (37)_ZN21QMediaRecorderControl2trEPKcS1_i
//static
/*void qm2647007302(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaRecorderControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaRecorderControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QMediaRecorderControlD2Ev(void *this_)*/ {
  delete (QMediaRecorderControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediarecordercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
