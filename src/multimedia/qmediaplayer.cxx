//  header block begin
// /usr/include/qt/QtMultimedia/qmediaplayer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaplayer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlayer is pure virtual: false
// QMediaPlayer has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaPlayer_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaPlayer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaPlayer_t qt_meta_stringdata_MyQMediaPlayer = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQMediaPlayer"
  },
  "MyQMediaPlayer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaPlayer[] = {
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
class Q_DECL_EXPORT MyQMediaPlayer : public QMediaPlayer {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaPlayer::staticMetaObject,
  qt_meta_stringdata_MyQMediaPlayer.data,
  qt_meta_data_MyQMediaPlayer,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaPlayer.stringdata0))
      return static_cast<void*>(this);
  return QMediaPlayer::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaPlayer::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaPlayer() {}
// void QMediaPlayer(QObject *, QMediaPlayer::Flags)
MyQMediaPlayer(QObject * parent, QFlags<QMediaPlayer::Flag> flags) : QMediaPlayer(parent, flags) {}
};

extern "C" Q_DECL_EXPORT
void* C_QMediaPlayer_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaPlayer* qo = (MyQMediaPlayer*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer10metaObjectEv(void *this_) {
  return (void*)((QMediaPlayer*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaPlayer11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaPlayer*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QMediaPlayer11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaPlayer*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaPlayer2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaPlayer::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaPlayer6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaPlayer::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:122
// [-2] void QMediaPlayer(QObject *, QMediaPlayer::Flags)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaPlayerC2EP7QObject6QFlagsINS_4FlagEE(QObject * parent, QFlags<QMediaPlayer::Flag> flags) {
  return  new MyQMediaPlayer(parent, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:123
// [-2] void ~QMediaPlayer()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayerD2Ev(void *this_) {
  delete (QMediaPlayer*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:125
// [4] QMultimedia::SupportEstimate hasSupport(const QString &, const QStringList &, QMediaPlayer::Flags)
extern "C" Q_DECL_EXPORT
QMultimedia::SupportEstimate C_ZN12QMediaPlayer10hasSupportERK7QStringRK11QStringList6QFlagsINS_4FlagEE(QString* mimeType, QStringList* codecs, QFlags<QMediaPlayer::Flag> flags) {
  return (QMultimedia::SupportEstimate)QMediaPlayer::hasSupport(*mimeType, *codecs, flags);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:128
// [8] QStringList supportedMimeTypes(QMediaPlayer::Flags)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMediaPlayer18supportedMimeTypesE6QFlagsINS_4FlagEE(QFlags<QMediaPlayer::Flag> flags) {
  auto rv = QMediaPlayer::supportedMimeTypes(flags);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:130
// [-2] void setVideoOutput(QVideoWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer14setVideoOutputEP12QVideoWidget(void *this_, QVideoWidget * arg0) {
  ((QMediaPlayer*)this_)->setVideoOutput(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:131
// [-2] void setVideoOutput(QGraphicsVideoItem *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer14setVideoOutputEP18QGraphicsVideoItem(void *this_, QGraphicsVideoItem * arg0) {
  ((QMediaPlayer*)this_)->setVideoOutput(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:132
// [-2] void setVideoOutput(QAbstractVideoSurface *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer14setVideoOutputEP21QAbstractVideoSurface(void *this_, QAbstractVideoSurface * surface) {
  ((QMediaPlayer*)this_)->setVideoOutput(surface);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:134
// [8] QMediaContent media()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer5mediaEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->media();
return new QMediaContent(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:135
// [8] const QIODevice * mediaStream()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer11mediaStreamEv(void *this_) {
  return (void*)((QMediaPlayer*)this_)->mediaStream();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:136
// [8] QMediaPlaylist * playlist()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer8playlistEv(void *this_) {
  return (void*)((QMediaPlayer*)this_)->playlist();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:137
// [8] QMediaContent currentMedia()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer12currentMediaEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->currentMedia();
return new QMediaContent(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:139
// [4] QMediaPlayer::State state()
extern "C" Q_DECL_EXPORT
QMediaPlayer::State C_ZNK12QMediaPlayer5stateEv(void *this_) {
  return (QMediaPlayer::State)((QMediaPlayer*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:140
// [4] QMediaPlayer::MediaStatus mediaStatus()
extern "C" Q_DECL_EXPORT
QMediaPlayer::MediaStatus C_ZNK12QMediaPlayer11mediaStatusEv(void *this_) {
  return (QMediaPlayer::MediaStatus)((QMediaPlayer*)this_)->mediaStatus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:142
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QMediaPlayer8durationEv(void *this_) {
  return (qint64)((QMediaPlayer*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:143
// [8] qint64 position()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QMediaPlayer8positionEv(void *this_) {
  return (qint64)((QMediaPlayer*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:145
// [4] int volume()
extern "C" Q_DECL_EXPORT
int C_ZNK12QMediaPlayer6volumeEv(void *this_) {
  return (int)((QMediaPlayer*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:146
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer7isMutedEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isMuted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:147
// [1] bool isAudioAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer16isAudioAvailableEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isAudioAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:148
// [1] bool isVideoAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer16isVideoAvailableEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isVideoAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:150
// [4] int bufferStatus()
extern "C" Q_DECL_EXPORT
int C_ZNK12QMediaPlayer12bufferStatusEv(void *this_) {
  return (int)((QMediaPlayer*)this_)->bufferStatus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:152
// [1] bool isSeekable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaPlayer10isSeekableEv(void *this_) {
  return (bool)((QMediaPlayer*)this_)->isSeekable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:153
// [8] qreal playbackRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QMediaPlayer12playbackRateEv(void *this_) {
  return (qreal)((QMediaPlayer*)this_)->playbackRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:155
// [4] QMediaPlayer::Error error()
extern "C" Q_DECL_EXPORT
QMediaPlayer::Error C_ZNK12QMediaPlayer5errorEv(void *this_) {
  return (QMediaPlayer::Error)((QMediaPlayer*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:156
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer11errorStringEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:158
// [8] QNetworkConfiguration currentNetworkConfiguration()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaPlayer27currentNetworkConfigurationEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->currentNetworkConfiguration();
return new QNetworkConfiguration(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:160
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK12QMediaPlayer12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QMediaPlayer*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:162
// [4] QAudio::Role audioRole()
extern "C" Q_DECL_EXPORT
QAudio::Role C_ZNK12QMediaPlayer9audioRoleEv(void *this_) {
  return (QAudio::Role)((QMediaPlayer*)this_)->audioRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:163
// [-2] void setAudioRole(QAudio::Role)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12setAudioRoleEN6QAudio4RoleE(void *this_, QAudio::Role audioRole) {
  ((QMediaPlayer*)this_)->setAudioRole(audioRole);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtMultimedia/qmediaplayer.h:164
// [-2] QList<QAudio::Role> supportedAudioRoles()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
QList<QAudio::Role>* C_ZNK12QMediaPlayer19supportedAudioRolesEv(void *this_) {
  auto rv = ((QMediaPlayer*)this_)->supportedAudioRoles();
return new QList<QAudio::Role>(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:167
// [-2] void play()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer4playEv(void *this_) {
  ((QMediaPlayer*)this_)->play();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:168
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer5pauseEv(void *this_) {
  ((QMediaPlayer*)this_)->pause();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:169
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer4stopEv(void *this_) {
  ((QMediaPlayer*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:171
// [-2] void setPosition(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer11setPositionEx(void *this_, qint64 position) {
  ((QMediaPlayer*)this_)->setPosition(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:172
// [-2] void setVolume(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer9setVolumeEi(void *this_, int volume) {
  ((QMediaPlayer*)this_)->setVolume(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:173
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer8setMutedEb(void *this_, bool muted) {
  ((QMediaPlayer*)this_)->setMuted(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:175
// [-2] void setPlaybackRate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15setPlaybackRateEd(void *this_, qreal rate) {
  ((QMediaPlayer*)this_)->setPlaybackRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:177
// [-2] void setMedia(const QMediaContent &, QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer8setMediaERK13QMediaContentP9QIODevice(void *this_, QMediaContent* media, QIODevice * stream) {
  ((QMediaPlayer*)this_)->setMedia(*media, stream);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:178
// [-2] void setPlaylist(QMediaPlaylist *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer11setPlaylistEP14QMediaPlaylist(void *this_, QMediaPlaylist * playlist) {
  ((QMediaPlayer*)this_)->setPlaylist(playlist);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:180
// [-2] void setNetworkConfigurations(const QList<QNetworkConfiguration> &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer24setNetworkConfigurationsERK5QListI21QNetworkConfigurationE(void *this_, QList<QNetworkConfiguration>* configurations) {
  ((QMediaPlayer*)this_)->setNetworkConfigurations(*configurations);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:183
// [-2] void mediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12mediaChangedERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaPlayer*)this_)->mediaChanged(*media);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:184
// [-2] void currentMediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer19currentMediaChangedERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaPlayer*)this_)->currentMediaChanged(*media);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:186
// [-2] void stateChanged(QMediaPlayer::State)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12stateChangedENS_5StateE(void *this_, QMediaPlayer::State newState) {
  ((QMediaPlayer*)this_)->stateChanged(newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:187
// [-2] void mediaStatusChanged(QMediaPlayer::MediaStatus)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer18mediaStatusChangedENS_11MediaStatusE(void *this_, QMediaPlayer::MediaStatus status) {
  ((QMediaPlayer*)this_)->mediaStatusChanged(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:189
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15durationChangedEx(void *this_, qint64 duration) {
  ((QMediaPlayer*)this_)->durationChanged(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:190
// [-2] void positionChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15positionChangedEx(void *this_, qint64 position) {
  ((QMediaPlayer*)this_)->positionChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:192
// [-2] void volumeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer13volumeChangedEi(void *this_, int volume) {
  ((QMediaPlayer*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:193
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer12mutedChangedEb(void *this_, bool muted) {
  ((QMediaPlayer*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:194
// [-2] void audioAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer21audioAvailableChangedEb(void *this_, bool available) {
  ((QMediaPlayer*)this_)->audioAvailableChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:195
// [-2] void videoAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer21videoAvailableChangedEb(void *this_, bool videoAvailable) {
  ((QMediaPlayer*)this_)->videoAvailableChanged(videoAvailable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:197
// [-2] void bufferStatusChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer19bufferStatusChangedEi(void *this_, int percentFilled) {
  ((QMediaPlayer*)this_)->bufferStatusChanged(percentFilled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:199
// [-2] void seekableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer15seekableChangedEb(void *this_, bool seekable) {
  ((QMediaPlayer*)this_)->seekableChanged(seekable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:200
// [-2] void playbackRateChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer19playbackRateChangedEd(void *this_, qreal rate) {
  ((QMediaPlayer*)this_)->playbackRateChanged(rate);
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtMultimedia/qmediaplayer.h:202
// [-2] void audioRoleChanged(QAudio::Role)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer16audioRoleChangedEN6QAudio4RoleE(void *this_, QAudio::Role role) {
  ((QMediaPlayer*)this_)->audioRoleChanged(role);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:204
// [-2] void error(QMediaPlayer::Error)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer5errorENS_5ErrorE(void *this_, QMediaPlayer::Error error) {
  ((QMediaPlayer*)this_)->error(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:206
// [-2] void networkConfigurationChanged(const QNetworkConfiguration &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer27networkConfigurationChangedERK21QNetworkConfiguration(void *this_, QNetworkConfiguration* configuration) {
  ((QMediaPlayer*)this_)->networkConfigurationChanged(*configuration);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:208
// [1] bool bind(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QMediaPlayer4bindEP7QObject(void *this_, QObject * arg0) {
  return (bool)((QMediaPlayer*)this_)->bind(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:209
// [-2] void unbind(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaPlayer6unbindEP7QObject(void *this_, QObject * arg0) {
  ((QMediaPlayer*)this_)->unbind(arg0);
}

//  main block end
