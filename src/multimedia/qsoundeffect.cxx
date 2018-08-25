//  header block begin
// /usr/include/qt/QtMultimedia/qsoundeffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsoundeffect.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QSoundEffect is pure virtual: false
// QSoundEffect has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSoundEffect : public QSoundEffect {
public:
  virtual ~MyQSoundEffect() {}
// void QSoundEffect(QObject *)
MyQSoundEffect(QObject * parent) : QSoundEffect(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSoundEffect10metaObjectEv(void *this_) {
  return (void*)((QSoundEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSoundEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSoundEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QSoundEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSoundEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSoundEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSoundEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSoundEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSoundEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:83
// [-2] void QSoundEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSoundEffectC2EP7QObject(QObject * parent) {
  return  new MyQSoundEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:84
// [-2] void ~QSoundEffect()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffectD2Ev(void *this_) {
  delete (QSoundEffect*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:86
// [8] QStringList supportedMimeTypes()
extern "C" Q_DECL_EXPORT
void* C_ZN12QSoundEffect18supportedMimeTypesEv() {
  auto rv = QSoundEffect::supportedMimeTypes();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:88
// [8] QUrl source()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSoundEffect6sourceEv(void *this_) {
  auto rv = ((QSoundEffect*)this_)->source();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:89
// [-2] void setSource(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect9setSourceERK4QUrl(void *this_, QUrl* url) {
  ((QSoundEffect*)this_)->setSource(*url);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:91
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSoundEffect9loopCountEv(void *this_) {
  return (int)((QSoundEffect*)this_)->loopCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:92
// [4] int loopsRemaining()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSoundEffect14loopsRemainingEv(void *this_) {
  return (int)((QSoundEffect*)this_)->loopsRemaining();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:93
// [-2] void setLoopCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect12setLoopCountEi(void *this_, int loopCount) {
  ((QSoundEffect*)this_)->setLoopCount(loopCount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:95
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QSoundEffect6volumeEv(void *this_) {
  return (qreal)((QSoundEffect*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:96
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect9setVolumeEd(void *this_, qreal volume) {
  ((QSoundEffect*)this_)->setVolume(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:98
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSoundEffect7isMutedEv(void *this_) {
  return (bool)((QSoundEffect*)this_)->isMuted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:99
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect8setMutedEb(void *this_, bool muted) {
  ((QSoundEffect*)this_)->setMuted(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:101
// [1] bool isLoaded()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSoundEffect8isLoadedEv(void *this_) {
  return (bool)((QSoundEffect*)this_)->isLoaded();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:103
// [1] bool isPlaying()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSoundEffect9isPlayingEv(void *this_) {
  return (bool)((QSoundEffect*)this_)->isPlaying();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:104
// [4] QSoundEffect::Status status()
extern "C" Q_DECL_EXPORT
QSoundEffect::Status C_ZNK12QSoundEffect6statusEv(void *this_) {
  return (QSoundEffect::Status)((QSoundEffect*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:106
// [8] QString category()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSoundEffect8categoryEv(void *this_) {
  auto rv = ((QSoundEffect*)this_)->category();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:107
// [-2] void setCategory(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect11setCategoryERK7QString(void *this_, QString* category) {
  ((QSoundEffect*)this_)->setCategory(*category);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:110
// [-2] void sourceChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect13sourceChangedEv(void *this_) {
  ((QSoundEffect*)this_)->sourceChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:111
// [-2] void loopCountChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect16loopCountChangedEv(void *this_) {
  ((QSoundEffect*)this_)->loopCountChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:112
// [-2] void loopsRemainingChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect21loopsRemainingChangedEv(void *this_) {
  ((QSoundEffect*)this_)->loopsRemainingChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:113
// [-2] void volumeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect13volumeChangedEv(void *this_) {
  ((QSoundEffect*)this_)->volumeChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:114
// [-2] void mutedChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect12mutedChangedEv(void *this_) {
  ((QSoundEffect*)this_)->mutedChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:115
// [-2] void loadedChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect13loadedChangedEv(void *this_) {
  ((QSoundEffect*)this_)->loadedChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:116
// [-2] void playingChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect14playingChangedEv(void *this_) {
  ((QSoundEffect*)this_)->playingChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:117
// [-2] void statusChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect13statusChangedEv(void *this_) {
  ((QSoundEffect*)this_)->statusChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:118
// [-2] void categoryChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect15categoryChangedEv(void *this_) {
  ((QSoundEffect*)this_)->categoryChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:121
// [-2] void play()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect4playEv(void *this_) {
  ((QSoundEffect*)this_)->play();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qsoundeffect.h:122
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN12QSoundEffect4stopEv(void *this_) {
  ((QSoundEffect*)this_)->stop();
}

//  main block end
