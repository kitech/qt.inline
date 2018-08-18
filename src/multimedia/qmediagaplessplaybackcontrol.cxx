//  header block begin
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h
#ifndef protected
#define protected public
#endif
#include <qmediagaplessplaybackcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaGaplessPlaybackControl is pure virtual: true
// QMediaGaplessPlaybackControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaGaplessPlaybackControl : public QMediaGaplessPlaybackControl {
public:
  virtual ~MyQMediaGaplessPlaybackControl() {}
// void QMediaGaplessPlaybackControl(QObject *)
MyQMediaGaplessPlaybackControl(QObject * parent) : QMediaGaplessPlaybackControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QMediaGaplessPlaybackControl10metaObjectEv(void *this_) {
  return (void*)((QMediaGaplessPlaybackControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QMediaGaplessPlaybackControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaGaplessPlaybackControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QMediaGaplessPlaybackControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaGaplessPlaybackControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QMediaGaplessPlaybackControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaGaplessPlaybackControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QMediaGaplessPlaybackControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaGaplessPlaybackControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:54
// [-2] void ~QMediaGaplessPlaybackControl()
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControlD2Ev(void *this_) {
  delete (QMediaGaplessPlaybackControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:56
// [8] QMediaContent nextMedia()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QMediaGaplessPlaybackControl9nextMediaEv(void *this_) {
  auto rv = ((QMediaGaplessPlaybackControl*)this_)->nextMedia();
return new QMediaContent(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:57
// [-2] void setNextMedia(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl12setNextMediaERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaGaplessPlaybackControl*)this_)->setNextMedia(*media);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:59
// [1] bool isCrossfadeSupported()
extern "C" Q_DECL_EXPORT
bool C_ZNK28QMediaGaplessPlaybackControl20isCrossfadeSupportedEv(void *this_) {
  return (bool)((QMediaGaplessPlaybackControl*)this_)->isCrossfadeSupported();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:60
// [8] qreal crossfadeTime()
extern "C" Q_DECL_EXPORT
qreal C_ZNK28QMediaGaplessPlaybackControl13crossfadeTimeEv(void *this_) {
  return (qreal)((QMediaGaplessPlaybackControl*)this_)->crossfadeTime();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:61
// [-2] void setCrossfadeTime(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl16setCrossfadeTimeEd(void *this_, qreal crossfadeTime) {
  ((QMediaGaplessPlaybackControl*)this_)->setCrossfadeTime(crossfadeTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:64
// [-2] void crossfadeTimeChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl20crossfadeTimeChangedEd(void *this_, qreal crossfadeTime) {
  ((QMediaGaplessPlaybackControl*)this_)->crossfadeTimeChanged(crossfadeTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:65
// [-2] void nextMediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl16nextMediaChangedERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaGaplessPlaybackControl*)this_)->nextMediaChanged(*media);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:66
// [-2] void advancedToNextMedia()
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl19advancedToNextMediaEv(void *this_) {
  ((QMediaGaplessPlaybackControl*)this_)->advancedToNextMedia();
}

//  main block end
