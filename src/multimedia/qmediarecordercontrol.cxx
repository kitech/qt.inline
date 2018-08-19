//  header block begin
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediarecordercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaRecorderControl is pure virtual: true
// QMediaRecorderControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaRecorderControl : public QMediaRecorderControl {
public:
  virtual ~MyQMediaRecorderControl() {}
// void QMediaRecorderControl(QObject *)
MyQMediaRecorderControl(QObject * parent) : QMediaRecorderControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMediaRecorderControl10metaObjectEv(void *this_) {
  return (void*)((QMediaRecorderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMediaRecorderControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaRecorderControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QMediaRecorderControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaRecorderControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMediaRecorderControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaRecorderControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QMediaRecorderControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaRecorderControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:61
// [-2] void ~QMediaRecorderControl()
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControlD2Ev(void *this_) {
  delete (QMediaRecorderControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:63
// [8] QUrl outputLocation()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QMediaRecorderControl14outputLocationEv(void *this_) {
  auto rv = ((QMediaRecorderControl*)this_)->outputLocation();
return new QUrl(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:64
// [1] bool setOutputLocation(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QMediaRecorderControl17setOutputLocationERK4QUrl(void *this_, QUrl* location) {
  return (bool)((QMediaRecorderControl*)this_)->setOutputLocation(*location);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:66
// [4] QMediaRecorder::State state()
extern "C" Q_DECL_EXPORT
QMediaRecorder::State C_ZNK21QMediaRecorderControl5stateEv(void *this_) {
  return (QMediaRecorder::State)((QMediaRecorderControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:67
// [4] QMediaRecorder::Status status()
extern "C" Q_DECL_EXPORT
QMediaRecorder::Status C_ZNK21QMediaRecorderControl6statusEv(void *this_) {
  return (QMediaRecorder::Status)((QMediaRecorderControl*)this_)->status();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:69
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK21QMediaRecorderControl8durationEv(void *this_) {
  return (qint64)((QMediaRecorderControl*)this_)->duration();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:71
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QMediaRecorderControl7isMutedEv(void *this_) {
  return (bool)((QMediaRecorderControl*)this_)->isMuted();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:72
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK21QMediaRecorderControl6volumeEv(void *this_) {
  return (qreal)((QMediaRecorderControl*)this_)->volume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:74
// [-2] void applySettings()
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl13applySettingsEv(void *this_) {
  ((QMediaRecorderControl*)this_)->applySettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:77
// [-2] void stateChanged(QMediaRecorder::State)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl12stateChangedEN14QMediaRecorder5StateE(void *this_, QMediaRecorder::State state) {
  ((QMediaRecorderControl*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:78
// [-2] void statusChanged(QMediaRecorder::Status)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl13statusChangedEN14QMediaRecorder6StatusE(void *this_, QMediaRecorder::Status status) {
  ((QMediaRecorderControl*)this_)->statusChanged(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:79
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl15durationChangedEx(void *this_, qint64 position) {
  ((QMediaRecorderControl*)this_)->durationChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:80
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl12mutedChangedEb(void *this_, bool muted) {
  ((QMediaRecorderControl*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:81
// [-2] void volumeChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl13volumeChangedEd(void *this_, qreal volume) {
  ((QMediaRecorderControl*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:82
// [-2] void actualLocationChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl21actualLocationChangedERK4QUrl(void *this_, QUrl* location) {
  ((QMediaRecorderControl*)this_)->actualLocationChanged(*location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:83
// [-2] void error(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl5errorEiRK7QString(void *this_, int error, QString* errorString) {
  ((QMediaRecorderControl*)this_)->error(error, *errorString);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:86
// [-2] void setState(QMediaRecorder::State)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl8setStateEN14QMediaRecorder5StateE(void *this_, QMediaRecorder::State state) {
  ((QMediaRecorderControl*)this_)->setState(state);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:87
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl8setMutedEb(void *this_, bool muted) {
  ((QMediaRecorderControl*)this_)->setMuted(muted);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecordercontrol.h:88
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN21QMediaRecorderControl9setVolumeEd(void *this_, qreal volume) {
  ((QMediaRecorderControl*)this_)->setVolume(volume);
}

//  main block end
