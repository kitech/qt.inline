//  header block begin

// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaplayercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlayerControl is pure virtual: true true
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
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setMuted(bool)
  virtual void setMuted(bool mute)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMuted", &handled, 1, (uint64_t)mute, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaPlayerControl::setMuted(mute);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaplayercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm1545282650 (35)_ZN19QMediaPlayerControl2trEPKcS1_i
//static
/*void qm1545282650(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaPlayerControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaPlayerControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QMediaPlayerControlD2Ev(void *this_)*/ {
  delete (QMediaPlayerControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaplayercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
