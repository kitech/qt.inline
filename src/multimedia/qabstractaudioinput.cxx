//  header block begin

// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioInput is pure virtual: true
// QAbstractAudioInput has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractAudioInput_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractAudioInput_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractAudioInput_t qt_meta_stringdata_MyQAbstractAudioInput = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQAbstractAudioInput"
  },
  "MyQAbstractAudioInput"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractAudioInput[] = {
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
class Q_DECL_EXPORT MyQAbstractAudioInput : public QAbstractAudioInput {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractAudioInput::staticMetaObject,
  qt_meta_stringdata_MyQAbstractAudioInput.data,
  qt_meta_data_MyQAbstractAudioInput,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractAudioInput.stringdata0))
      return static_cast<void*>(this);
  return QAbstractAudioInput::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractAudioInput::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractAudioInput() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void start(QIODevice *)
  virtual void start(QIODevice * device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 1, (uint64_t)device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::start(device);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QIODevice * start()
  virtual QIODevice * start()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIODevice *)(irv);
      // Pointer Pointer QIODevice *
    } else {
    return (QIODevice *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void stop()
  virtual void stop()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stop", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::stop();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void reset()
  virtual void reset()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"reset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::reset();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void suspend()
  virtual void suspend()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"suspend", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::suspend();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void resume()
  virtual void resume()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resume", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::resume();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int bytesReady()
  virtual int bytesReady() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bytesReady", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int periodSize()
  virtual int periodSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"periodSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setBufferSize(int)
  virtual void setBufferSize(int value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setBufferSize", &handled, 1, (uint64_t)value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::setBufferSize(value);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int bufferSize()
  virtual int bufferSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bufferSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setNotifyInterval(int)
  virtual void setNotifyInterval(int milliSeconds)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setNotifyInterval", &handled, 1, (uint64_t)milliSeconds, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::setNotifyInterval(milliSeconds);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int notifyInterval()
  virtual int notifyInterval() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"notifyInterval", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qint64 processedUSecs()
  virtual qint64 processedUSecs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"processedUSecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qint64 elapsedUSecs()
  virtual qint64 elapsedUSecs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"elapsedUSecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QAudio::Error error()
  virtual QAudio::Error error() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"error", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudio::Error)(int)(irv);
      // Elaborated Enum QAudio::Error
    } else {
    return (QAudio::Error){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QAudio::State state()
  virtual QAudio::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudio::State)(int)(irv);
      // Elaborated Enum QAudio::State
    } else {
    return (QAudio::State){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setFormat(const QAudioFormat &)
  virtual void setFormat(const QAudioFormat & fmt_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFormat", &handled, 1, (uint64_t)&fmt_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::setFormat(fmt_);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAudioFormat format()
  virtual QAudioFormat format() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"format", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioFormat){};}
    auto prv = (QAudioFormat*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioFormat
    } else {
    return (QAudioFormat){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setVolume(qreal)
  virtual void setVolume(qreal arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setVolume", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioInput::setVolume(arg0);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
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

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractAudioInput_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractAudioInput* qo = (MyQAbstractAudioInput*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:112
// [-2] void start(QIODevice *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:113
// [8] QIODevice * start()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:114
// [-2] void stop()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:115
// [-2] void reset()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:116
// [-2] void suspend()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:117
// [-2] void resume()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:118
// [4] int bytesReady()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:119
// [4] int periodSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:120
// [-2] void setBufferSize(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:121
// [4] int bufferSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:122
// [-2] void setNotifyInterval(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:123
// [4] int notifyInterval()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:124
// [8] qint64 processedUSecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:125
// [8] qint64 elapsedUSecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:126
// [4] QAudio::Error error()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:127
// [4] QAudio::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:128
// [-2] void setFormat(const QAudioFormat &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:129
// [8] QAudioFormat format()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:130
// [-2] void setVolume(qreal)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:131
// [8] qreal volume()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractAudioInput10metaObjectEv(void *this_) {
  return (void*)((QAbstractAudioInput*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractAudioInput*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QAbstractAudioInput11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractAudioInput*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioInput::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:109
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioInput::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:112
// [-2] void start(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput5startEP9QIODevice(void *this_, QIODevice * device) {
  ((QAbstractAudioInput*)this_)->start(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:113
// [8] QIODevice * start()
extern "C" Q_DECL_EXPORT
void* C_ZN19QAbstractAudioInput5startEv(void *this_) {
  return (void*)((QAbstractAudioInput*)this_)->start();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:114
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput4stopEv(void *this_) {
  ((QAbstractAudioInput*)this_)->stop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:115
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput5resetEv(void *this_) {
  ((QAbstractAudioInput*)this_)->reset();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:116
// [-2] void suspend()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput7suspendEv(void *this_) {
  ((QAbstractAudioInput*)this_)->suspend();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:117
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput6resumeEv(void *this_) {
  ((QAbstractAudioInput*)this_)->resume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:118
// [4] int bytesReady()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput10bytesReadyEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->bytesReady();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:119
// [4] int periodSize()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput10periodSizeEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->periodSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:120
// [-2] void setBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput13setBufferSizeEi(void *this_, int value) {
  ((QAbstractAudioInput*)this_)->setBufferSize(value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:121
// [4] int bufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput10bufferSizeEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->bufferSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:122
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QAbstractAudioInput*)this_)->setNotifyInterval(milliSeconds);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:123
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK19QAbstractAudioInput14notifyIntervalEv(void *this_) {
  return (int)((QAbstractAudioInput*)this_)->notifyInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:124
// [8] qint64 processedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK19QAbstractAudioInput14processedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioInput*)this_)->processedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:125
// [8] qint64 elapsedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK19QAbstractAudioInput12elapsedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioInput*)this_)->elapsedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:126
// [4] QAudio::Error error()
extern "C" Q_DECL_EXPORT
QAudio::Error C_ZNK19QAbstractAudioInput5errorEv(void *this_) {
  return (QAudio::Error)((QAbstractAudioInput*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:127
// [4] QAudio::State state()
extern "C" Q_DECL_EXPORT
QAudio::State C_ZNK19QAbstractAudioInput5stateEv(void *this_) {
  return (QAudio::State)((QAbstractAudioInput*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:128
// [-2] void setFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput9setFormatERK12QAudioFormat(void *this_, QAudioFormat* fmt_) {
  ((QAbstractAudioInput*)this_)->setFormat(*fmt_);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:129
// [8] QAudioFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QAbstractAudioInput6formatEv(void *this_) {
  auto rv = ((QAbstractAudioInput*)this_)->format();
return new QAudioFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:130
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput9setVolumeEd(void *this_, qreal arg0) {
  ((QAbstractAudioInput*)this_)->setVolume(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:131
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QAbstractAudioInput6volumeEv(void *this_) {
  return (qreal)((QAbstractAudioInput*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:134
// [-2] void errorChanged(QAudio::Error)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput12errorChangedEN6QAudio5ErrorE(void *this_, QAudio::Error arg0) {
  ((QAbstractAudioInput*)this_)->errorChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:135
// [-2] void stateChanged(QAudio::State)
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput12stateChangedEN6QAudio5StateE(void *this_, QAudio::State arg0) {
  ((QAbstractAudioInput*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:136
// [-2] void notify()
extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInput6notifyEv(void *this_) {
  ((QAbstractAudioInput*)this_)->notify();
}


extern "C" Q_DECL_EXPORT
void C_ZN19QAbstractAudioInputD2Ev(void *this_) {
  delete (QAbstractAudioInput*)(this_);
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
