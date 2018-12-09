//  header block begin

// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaplayercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlayerControl is pure virtual: true
// QMediaPlayerControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaPlayerControl_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaPlayerControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaPlayerControl_t qt_meta_stringdata_MyQMediaPlayerControl = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQMediaPlayerControl"
  },
  "MyQMediaPlayerControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaPlayerControl[] = {
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
class Q_DECL_EXPORT MyQMediaPlayerControl : public QMediaPlayerControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaPlayerControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaPlayerControl.data,
  qt_meta_data_MyQMediaPlayerControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaPlayerControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaPlayerControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaPlayerControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaPlayerControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMediaPlayer::State state()
  virtual QMediaPlayer::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaPlayer::State)(int)(irv);
      // Elaborated Enum QMediaPlayer::State
    } else {
    return (QMediaPlayer::State){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QMediaPlayer::MediaStatus mediaStatus()
  virtual QMediaPlayer::MediaStatus mediaStatus() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mediaStatus", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMediaPlayer::MediaStatus)(int)(irv);
      // Elaborated Enum QMediaPlayer::MediaStatus
    } else {
    return (QMediaPlayer::MediaStatus){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qint64 position()
  virtual qint64 position() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"position", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setPosition(qint64)
  virtual void setPosition(qint64 position)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setPosition", &handled, 1, (uint64_t)position, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::setPosition(position);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int volume()
  virtual int volume() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"volume", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setVolume(int)
  virtual void setVolume(int volume)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setVolume", &handled, 1, (uint64_t)volume, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::setVolume(volume);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setMuted(bool)
  virtual void setMuted(bool muted)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMuted", &handled, 1, (uint64_t)muted, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::setMuted(muted);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int bufferStatus()
  virtual int bufferStatus() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bufferStatus", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isAudioAvailable()
  virtual bool isAudioAvailable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isAudioAvailable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isVideoAvailable()
  virtual bool isVideoAvailable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isVideoAvailable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isSeekable()
  virtual bool isSeekable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isSeekable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QMediaTimeRange availablePlaybackRanges()
  virtual QMediaTimeRange availablePlaybackRanges() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availablePlaybackRanges", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QMediaTimeRange){};}
    auto prv = (QMediaTimeRange*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QMediaTimeRange
    } else {
    return (QMediaTimeRange){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal playbackRate()
  virtual qreal playbackRate() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"playbackRate", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setPlaybackRate(qreal)
  virtual void setPlaybackRate(qreal rate)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setPlaybackRate", &handled, 1, (uint64_t)&rate, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::setPlaybackRate(rate);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QMediaContent media()
  virtual QMediaContent media() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"media", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QMediaContent){};}
    auto prv = (QMediaContent*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QMediaContent
    } else {
    return (QMediaContent){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] const QIODevice * mediaStream()
  virtual const QIODevice * mediaStream() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mediaStream", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (const QIODevice *)(irv);
      // Pointer Pointer const QIODevice *
    } else {
    return (const QIODevice *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setMedia(const QMediaContent &, QIODevice *)
  virtual void setMedia(const QMediaContent & media, QIODevice * stream)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMedia", &handled, 2, (uint64_t)&media, (uint64_t)stream, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::setMedia(media, stream);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void play()
  virtual void play()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"play", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::play();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void pause()
  virtual void pause()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"pause", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::pause();
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
    // QMediaPlayerControl::stop();
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMediaPlayerControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaPlayerControl* qo = (MyQMediaPlayerControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:61
// [4] QMediaPlayer::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:63
// [4] QMediaPlayer::MediaStatus mediaStatus()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:65
// [8] qint64 duration()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:67
// [8] qint64 position()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:68
// [-2] void setPosition(qint64)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:70
// [4] int volume()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:71
// [-2] void setVolume(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:73
// [1] bool isMuted()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:74
// [-2] void setMuted(bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:76
// [4] int bufferStatus()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:78
// [1] bool isAudioAvailable()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:79
// [1] bool isVideoAvailable()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:81
// [1] bool isSeekable()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:83
// [8] QMediaTimeRange availablePlaybackRanges()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:85
// [8] qreal playbackRate()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:86
// [-2] void setPlaybackRate(qreal)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:88
// [8] QMediaContent media()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:89
// [8] const QIODevice * mediaStream()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:90
// [-2] void setMedia(const QMediaContent &, QIODevice *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:92
// [-2] void play()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:93
// [-2] void pause()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:94
// [-2] void stop()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QMediaPlayerControl10metaObjectEv(void *this_) {
  return (void*)((QMediaPlayerControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QMediaPlayerControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaPlayerControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QMediaPlayerControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaPlayerControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QMediaPlayerControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaPlayerControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QMediaPlayerControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaPlayerControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:59
// [-2] void ~QMediaPlayerControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControlD2Ev(void *this_) {
  delete (QMediaPlayerControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:61
// [4] QMediaPlayer::State state()
extern "C" Q_DECL_EXPORT
QMediaPlayer::State C_ZNK19QMediaPlayerControl5stateEv(void *this_) {
  return (QMediaPlayer::State)((QMediaPlayerControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:63
// [4] QMediaPlayer::MediaStatus mediaStatus()
extern "C" Q_DECL_EXPORT
QMediaPlayer::MediaStatus C_ZNK19QMediaPlayerControl11mediaStatusEv(void *this_) {
  return (QMediaPlayer::MediaStatus)((QMediaPlayerControl*)this_)->mediaStatus();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:65
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK19QMediaPlayerControl8durationEv(void *this_) {
  return (qint64)((QMediaPlayerControl*)this_)->duration();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:67
// [8] qint64 position()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK19QMediaPlayerControl8positionEv(void *this_) {
  return (qint64)((QMediaPlayerControl*)this_)->position();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:68
// [-2] void setPosition(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl11setPositionEx(void *this_, qint64 position) {
  ((QMediaPlayerControl*)this_)->setPosition(position);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:70
// [4] int volume()
extern "C" Q_DECL_EXPORT
int C_ZNK19QMediaPlayerControl6volumeEv(void *this_) {
  return (int)((QMediaPlayerControl*)this_)->volume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:71
// [-2] void setVolume(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl9setVolumeEi(void *this_, int volume) {
  ((QMediaPlayerControl*)this_)->setVolume(volume);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:73
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QMediaPlayerControl7isMutedEv(void *this_) {
  return (bool)((QMediaPlayerControl*)this_)->isMuted();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:74
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl8setMutedEb(void *this_, bool muted) {
  ((QMediaPlayerControl*)this_)->setMuted(muted);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:76
// [4] int bufferStatus()
extern "C" Q_DECL_EXPORT
int C_ZNK19QMediaPlayerControl12bufferStatusEv(void *this_) {
  return (int)((QMediaPlayerControl*)this_)->bufferStatus();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:78
// [1] bool isAudioAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QMediaPlayerControl16isAudioAvailableEv(void *this_) {
  return (bool)((QMediaPlayerControl*)this_)->isAudioAvailable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:79
// [1] bool isVideoAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QMediaPlayerControl16isVideoAvailableEv(void *this_) {
  return (bool)((QMediaPlayerControl*)this_)->isVideoAvailable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:81
// [1] bool isSeekable()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QMediaPlayerControl10isSeekableEv(void *this_) {
  return (bool)((QMediaPlayerControl*)this_)->isSeekable();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:83
// [8] QMediaTimeRange availablePlaybackRanges()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QMediaPlayerControl23availablePlaybackRangesEv(void *this_) {
  auto rv = ((QMediaPlayerControl*)this_)->availablePlaybackRanges();
return new QMediaTimeRange(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:85
// [8] qreal playbackRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QMediaPlayerControl12playbackRateEv(void *this_) {
  return (qreal)((QMediaPlayerControl*)this_)->playbackRate();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:86
// [-2] void setPlaybackRate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl15setPlaybackRateEd(void *this_, qreal rate) {
  ((QMediaPlayerControl*)this_)->setPlaybackRate(rate);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:88
// [8] QMediaContent media()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QMediaPlayerControl5mediaEv(void *this_) {
  auto rv = ((QMediaPlayerControl*)this_)->media();
return new QMediaContent(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:89
// [8] const QIODevice * mediaStream()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QMediaPlayerControl11mediaStreamEv(void *this_) {
  return (void*)((QMediaPlayerControl*)this_)->mediaStream();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:90
// [-2] void setMedia(const QMediaContent &, QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl8setMediaERK13QMediaContentP9QIODevice(void *this_, QMediaContent* media, QIODevice * stream) {
  ((QMediaPlayerControl*)this_)->setMedia(*media, stream);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:92
// [-2] void play()
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl4playEv(void *this_) {
  ((QMediaPlayerControl*)this_)->play();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:93
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl5pauseEv(void *this_) {
  ((QMediaPlayerControl*)this_)->pause();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:94
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl4stopEv(void *this_) {
  ((QMediaPlayerControl*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:97
// [-2] void mediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl12mediaChangedERK13QMediaContent(void *this_, QMediaContent* content) {
  ((QMediaPlayerControl*)this_)->mediaChanged(*content);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:98
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl15durationChangedEx(void *this_, qint64 duration) {
  ((QMediaPlayerControl*)this_)->durationChanged(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:99
// [-2] void positionChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl15positionChangedEx(void *this_, qint64 position) {
  ((QMediaPlayerControl*)this_)->positionChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:100
// [-2] void stateChanged(QMediaPlayer::State)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl12stateChangedEN12QMediaPlayer5StateE(void *this_, QMediaPlayer::State newState) {
  ((QMediaPlayerControl*)this_)->stateChanged(newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:101
// [-2] void mediaStatusChanged(QMediaPlayer::MediaStatus)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl18mediaStatusChangedEN12QMediaPlayer11MediaStatusE(void *this_, QMediaPlayer::MediaStatus status) {
  ((QMediaPlayerControl*)this_)->mediaStatusChanged(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:102
// [-2] void volumeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl13volumeChangedEi(void *this_, int volume) {
  ((QMediaPlayerControl*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:103
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl12mutedChangedEb(void *this_, bool muted) {
  ((QMediaPlayerControl*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:104
// [-2] void audioAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl21audioAvailableChangedEb(void *this_, bool audioAvailable) {
  ((QMediaPlayerControl*)this_)->audioAvailableChanged(audioAvailable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:105
// [-2] void videoAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl21videoAvailableChangedEb(void *this_, bool videoAvailable) {
  ((QMediaPlayerControl*)this_)->videoAvailableChanged(videoAvailable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:106
// [-2] void bufferStatusChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl19bufferStatusChangedEi(void *this_, int percentFilled) {
  ((QMediaPlayerControl*)this_)->bufferStatusChanged(percentFilled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:107
// [-2] void seekableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl15seekableChangedEb(void *this_, bool arg0) {
  ((QMediaPlayerControl*)this_)->seekableChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:108
// [-2] void availablePlaybackRangesChanged(const QMediaTimeRange &)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl30availablePlaybackRangesChangedERK15QMediaTimeRange(void *this_, QMediaTimeRange* arg0) {
  ((QMediaPlayerControl*)this_)->availablePlaybackRangesChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:109
// [-2] void playbackRateChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl19playbackRateChangedEd(void *this_, qreal rate) {
  ((QMediaPlayerControl*)this_)->playbackRateChanged(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:110
// [-2] void error(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QMediaPlayerControl5errorEiRK7QString(void *this_, int error, QString* errorString) {
  ((QMediaPlayerControl*)this_)->error(error, *errorString);
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
