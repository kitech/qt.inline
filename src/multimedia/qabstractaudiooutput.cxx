//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioOutput is pure virtual: true
// QAbstractAudioOutput has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractAudioOutput_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractAudioOutput_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractAudioOutput_t qt_meta_stringdata_MyQAbstractAudioOutput = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAbstractAudioOutput"
  },
  "MyQAbstractAudioOutput"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractAudioOutput[] = {
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
class Q_DECL_EXPORT MyQAbstractAudioOutput : public QAbstractAudioOutput {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractAudioOutput::staticMetaObject,
  qt_meta_stringdata_MyQAbstractAudioOutput.data,
  qt_meta_data_MyQAbstractAudioOutput,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractAudioOutput.stringdata0))
      return static_cast<void*>(this);
  return QAbstractAudioOutput::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractAudioOutput::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractAudioOutput() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void start(QIODevice *)
  virtual void start(QIODevice * device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 1, (uint64_t)device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::start(device);
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
    // QAbstractAudioOutput::stop();
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
    // QAbstractAudioOutput::reset();
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
    // QAbstractAudioOutput::suspend();
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
    // QAbstractAudioOutput::resume();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int bytesFree()
  virtual int bytesFree() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bytesFree", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
    // QAbstractAudioOutput::setBufferSize(value);
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
    // QAbstractAudioOutput::setNotifyInterval(milliSeconds);
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
    // QAbstractAudioOutput::setFormat(fmt_);
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

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:78
// [-2] void start(QIODevice *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:79
// [8] QIODevice * start()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:80
// [-2] void stop()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:81
// [-2] void reset()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:82
// [-2] void suspend()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:83
// [-2] void resume()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:84
// [4] int bytesFree()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:85
// [4] int periodSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:86
// [-2] void setBufferSize(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:87
// [4] int bufferSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:88
// [-2] void setNotifyInterval(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:89
// [4] int notifyInterval()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:90
// [8] qint64 processedUSecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:91
// [8] qint64 elapsedUSecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:92
// [4] QAudio::Error error()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:93
// [4] QAudio::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:94
// [-2] void setFormat(const QAudioFormat &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:95
// [8] QAudioFormat format()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractAudioOutput10metaObjectEv(void *this_) {
  return (void*)((QAbstractAudioOutput*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractAudioOutput*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QAbstractAudioOutput11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractAudioOutput*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioOutput::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:75
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractAudioOutput::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:78
// [-2] void start(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput5startEP9QIODevice(void *this_, QIODevice * device) {
  ((QAbstractAudioOutput*)this_)->start(device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:79
// [8] QIODevice * start()
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractAudioOutput5startEv(void *this_) {
  return (void*)((QAbstractAudioOutput*)this_)->start();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:80
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput4stopEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->stop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:81
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput5resetEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->reset();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:82
// [-2] void suspend()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput7suspendEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->suspend();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:83
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput6resumeEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->resume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:84
// [4] int bytesFree()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput9bytesFreeEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->bytesFree();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:85
// [4] int periodSize()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput10periodSizeEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->periodSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:86
// [-2] void setBufferSize(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput13setBufferSizeEi(void *this_, int value) {
  ((QAbstractAudioOutput*)this_)->setBufferSize(value);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:87
// [4] int bufferSize()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput10bufferSizeEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->bufferSize();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:88
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QAbstractAudioOutput*)this_)->setNotifyInterval(milliSeconds);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:89
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK20QAbstractAudioOutput14notifyIntervalEv(void *this_) {
  return (int)((QAbstractAudioOutput*)this_)->notifyInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:90
// [8] qint64 processedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAbstractAudioOutput14processedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioOutput*)this_)->processedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:91
// [8] qint64 elapsedUSecs()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK20QAbstractAudioOutput12elapsedUSecsEv(void *this_) {
  return (qint64)((QAbstractAudioOutput*)this_)->elapsedUSecs();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:92
// [4] QAudio::Error error()
extern "C" Q_DECL_EXPORT
QAudio::Error C_ZNK20QAbstractAudioOutput5errorEv(void *this_) {
  return (QAudio::Error)((QAbstractAudioOutput*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:93
// [4] QAudio::State state()
extern "C" Q_DECL_EXPORT
QAudio::State C_ZNK20QAbstractAudioOutput5stateEv(void *this_) {
  return (QAudio::State)((QAbstractAudioOutput*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:94
// [-2] void setFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput9setFormatERK12QAudioFormat(void *this_, QAudioFormat* fmt_) {
  ((QAbstractAudioOutput*)this_)->setFormat(*fmt_);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:95
// [8] QAudioFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractAudioOutput6formatEv(void *this_) {
  auto rv = ((QAbstractAudioOutput*)this_)->format();
return new QAudioFormat(rv);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:96
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput9setVolumeEd(void *this_, qreal arg0) {
  ((QAbstractAudioOutput*)this_)->setVolume(arg0);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:97
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QAbstractAudioOutput6volumeEv(void *this_) {
  return (qreal)((QAbstractAudioOutput*)this_)->volume();
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:98
// [8] QString category()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractAudioOutput8categoryEv(void *this_) {
  auto rv = ((QAbstractAudioOutput*)this_)->category();
return new QString(rv);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:99
// [-2] void setCategory(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput11setCategoryERK7QString(void *this_, QString* arg0) {
  ((QAbstractAudioOutput*)this_)->setCategory(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:102
// [-2] void errorChanged(QAudio::Error)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput12errorChangedEN6QAudio5ErrorE(void *this_, QAudio::Error arg0) {
  ((QAbstractAudioOutput*)this_)->errorChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:103
// [-2] void stateChanged(QAudio::State)
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput12stateChangedEN6QAudio5StateE(void *this_, QAudio::State arg0) {
  ((QAbstractAudioOutput*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:104
// [-2] void notify()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutput6notifyEv(void *this_) {
  ((QAbstractAudioOutput*)this_)->notify();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractAudioOutputD2Ev(void *this_) {
  delete (QAbstractAudioOutput*)(this_);
}
//  main block end
