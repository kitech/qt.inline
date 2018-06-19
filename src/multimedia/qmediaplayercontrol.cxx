//  header block begin
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h
#ifndef protected
#define protected public
#endif
#include <qmediaplayercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlayerControl is pure virtual: true
// QMediaPlayerControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaPlayerControl : public QMediaPlayerControl {
public:
  virtual ~MyQMediaPlayerControl() {}
// void QMediaPlayerControl(QObject *)
MyQMediaPlayerControl(QObject * parent) : QMediaPlayerControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayercontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QMediaPlayerControl10metaObjectEv(void *this_) {
  return (void*)((QMediaPlayerControl*)this_)->metaObject();
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
