//  header block begin
// /usr/include/qt/QtMultimedia/qmediarecorder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediarecorder.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaRecorder is pure virtual: false
// QMediaRecorder has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaRecorder : public QMediaRecorder {
public:
  virtual ~MyQMediaRecorder() {}
// void QMediaRecorder(QMediaObject *, QObject *)
MyQMediaRecorder(QMediaObject * mediaObject, QObject * parent) : QMediaRecorder(mediaObject, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool setMediaObject(QMediaObject *)
  virtual bool setMediaObject(QMediaObject * object)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMediaObject", &handled, 1, (uint64_t)object, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMediaRecorder::setMediaObject(object);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:197
// [1] bool setMediaObject(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaRecorder14setMediaObjectEP12QMediaObject(void *this_, QMediaObject * object) {
  return (bool)((QMediaRecorder*)this_)->QMediaRecorder::setMediaObject(object);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:67
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder10metaObjectEv(void *this_) {
  return (void*)((QMediaRecorder*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:67
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaRecorder11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaRecorder*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:67
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QMediaRecorder11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaRecorder*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:67
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaRecorder2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaRecorder::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:67
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaRecorder6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaRecorder::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:109
// [-2] void QMediaRecorder(QMediaObject *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaRecorderC2EP12QMediaObjectP7QObject(QMediaObject * mediaObject, QObject * parent) {
  auto _nilp = (MyQMediaRecorder*)(0);
  return  new MyQMediaRecorder(mediaObject, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:110
// [-2] void ~QMediaRecorder()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorderD2Ev(void *this_) {
  delete (QMediaRecorder*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:112
// [8] QMediaObject * mediaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder11mediaObjectEv(void *this_) {
  return (void*)((QMediaRecorder*)this_)->mediaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:114
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaRecorder11isAvailableEv(void *this_) {
  return (bool)((QMediaRecorder*)this_)->isAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:115
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK14QMediaRecorder12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QMediaRecorder*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:117
// [8] QUrl outputLocation()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder14outputLocationEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->outputLocation();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:118
// [1] bool setOutputLocation(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaRecorder17setOutputLocationERK4QUrl(void *this_, QUrl* location) {
  return (bool)((QMediaRecorder*)this_)->setOutputLocation(*location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:120
// [8] QUrl actualLocation()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder14actualLocationEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->actualLocation();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:122
// [4] QMediaRecorder::State state()
extern "C" Q_DECL_EXPORT
QMediaRecorder::State C_ZNK14QMediaRecorder5stateEv(void *this_) {
  return (QMediaRecorder::State)((QMediaRecorder*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:123
// [4] QMediaRecorder::Status status()
extern "C" Q_DECL_EXPORT
QMediaRecorder::Status C_ZNK14QMediaRecorder6statusEv(void *this_) {
  return (QMediaRecorder::Status)((QMediaRecorder*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:125
// [4] QMediaRecorder::Error error()
extern "C" Q_DECL_EXPORT
QMediaRecorder::Error C_ZNK14QMediaRecorder5errorEv(void *this_) {
  return (QMediaRecorder::Error)((QMediaRecorder*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:126
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder11errorStringEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:128
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK14QMediaRecorder8durationEv(void *this_) {
  return (qint64)((QMediaRecorder*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:130
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaRecorder7isMutedEv(void *this_) {
  return (bool)((QMediaRecorder*)this_)->isMuted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:131
// [8] qreal volume()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QMediaRecorder6volumeEv(void *this_) {
  return (qreal)((QMediaRecorder*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:133
// [8] QStringList supportedContainers()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder19supportedContainersEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->supportedContainers();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:134
// [8] QString containerDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder20containerDescriptionERK7QString(void *this_, QString* format) {
  auto rv = ((QMediaRecorder*)this_)->containerDescription(*format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:136
// [8] QStringList supportedAudioCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder20supportedAudioCodecsEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->supportedAudioCodecs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:137
// [8] QString audioCodecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder21audioCodecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QMediaRecorder*)this_)->audioCodecDescription(*codecName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:139
// [-2] QList<int> supportedAudioSampleRates(const QAudioEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK14QMediaRecorder25supportedAudioSampleRatesERK21QAudioEncoderSettingsPb(void *this_, QAudioEncoderSettings* settings, bool * continuous) {
  auto rv = ((QMediaRecorder*)this_)->supportedAudioSampleRates(*settings, continuous);
return new QList<int>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:142
// [8] QStringList supportedVideoCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder20supportedVideoCodecsEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->supportedVideoCodecs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:143
// [8] QString videoCodecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder21videoCodecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QMediaRecorder*)this_)->videoCodecDescription(*codecName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:145
// [8] QList<QSize> supportedResolutions(const QVideoEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK14QMediaRecorder20supportedResolutionsERK21QVideoEncoderSettingsPb(void *this_, QVideoEncoderSettings* settings, bool * continuous) {
  auto rv = ((QMediaRecorder*)this_)->supportedResolutions(*settings, continuous);
return new QList<QSize>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:148
// [-2] QList<qreal> supportedFrameRates(const QVideoEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<qreal>* C_ZNK14QMediaRecorder19supportedFrameRatesERK21QVideoEncoderSettingsPb(void *this_, QVideoEncoderSettings* settings, bool * continuous) {
  auto rv = ((QMediaRecorder*)this_)->supportedFrameRates(*settings, continuous);
return new QList<qreal>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:151
// [8] QAudioEncoderSettings audioSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder13audioSettingsEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->audioSettings();
return new QAudioEncoderSettings(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:152
// [8] QVideoEncoderSettings videoSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder13videoSettingsEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->videoSettings();
return new QVideoEncoderSettings(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:153
// [8] QString containerFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder15containerFormatEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->containerFormat();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:155
// [-2] void setAudioSettings(const QAudioEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder16setAudioSettingsERK21QAudioEncoderSettings(void *this_, QAudioEncoderSettings* audioSettings) {
  ((QMediaRecorder*)this_)->setAudioSettings(*audioSettings);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:156
// [-2] void setVideoSettings(const QVideoEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder16setVideoSettingsERK21QVideoEncoderSettings(void *this_, QVideoEncoderSettings* videoSettings) {
  ((QMediaRecorder*)this_)->setVideoSettings(*videoSettings);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:157
// [-2] void setContainerFormat(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder18setContainerFormatERK7QString(void *this_, QString* container) {
  ((QMediaRecorder*)this_)->setContainerFormat(*container);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:159
// [-2] void setEncodingSettings(const QAudioEncoderSettings &, const QVideoEncoderSettings &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder19setEncodingSettingsERK21QAudioEncoderSettingsRK21QVideoEncoderSettingsRK7QString(void *this_, QAudioEncoderSettings* audioSettings, QVideoEncoderSettings* videoSettings, QString* containerMimeType) {
  ((QMediaRecorder*)this_)->setEncodingSettings(*audioSettings, *videoSettings, *containerMimeType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:163
// [1] bool isMetaDataAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaRecorder19isMetaDataAvailableEv(void *this_) {
  return (bool)((QMediaRecorder*)this_)->isMetaDataAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:164
// [1] bool isMetaDataWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaRecorder18isMetaDataWritableEv(void *this_) {
  return (bool)((QMediaRecorder*)this_)->isMetaDataWritable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:166
// [16] QVariant metaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder8metaDataERK7QString(void *this_, QString* key) {
  auto rv = ((QMediaRecorder*)this_)->metaData(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:167
// [-2] void setMetaData(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder11setMetaDataERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMediaRecorder*)this_)->setMetaData(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:168
// [8] QStringList availableMetaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaRecorder17availableMetaDataEv(void *this_) {
  auto rv = ((QMediaRecorder*)this_)->availableMetaData();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:171
// [-2] void record()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder6recordEv(void *this_) {
  ((QMediaRecorder*)this_)->record();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:172
// [-2] void pause()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder5pauseEv(void *this_) {
  ((QMediaRecorder*)this_)->pause();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:173
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder4stopEv(void *this_) {
  ((QMediaRecorder*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:174
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder8setMutedEb(void *this_, bool muted) {
  ((QMediaRecorder*)this_)->setMuted(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:175
// [-2] void setVolume(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder9setVolumeEd(void *this_, qreal volume) {
  ((QMediaRecorder*)this_)->setVolume(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:178
// [-2] void stateChanged(QMediaRecorder::State)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder12stateChangedENS_5StateE(void *this_, QMediaRecorder::State state) {
  ((QMediaRecorder*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:179
// [-2] void statusChanged(QMediaRecorder::Status)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder13statusChangedENS_6StatusE(void *this_, QMediaRecorder::Status status) {
  ((QMediaRecorder*)this_)->statusChanged(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:180
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder15durationChangedEx(void *this_, qint64 duration) {
  ((QMediaRecorder*)this_)->durationChanged(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:181
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder12mutedChangedEb(void *this_, bool muted) {
  ((QMediaRecorder*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:182
// [-2] void volumeChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder13volumeChangedEd(void *this_, qreal volume) {
  ((QMediaRecorder*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:183
// [-2] void actualLocationChanged(const QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder21actualLocationChangedERK4QUrl(void *this_, QUrl* location) {
  ((QMediaRecorder*)this_)->actualLocationChanged(*location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:185
// [-2] void error(QMediaRecorder::Error)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder5errorENS_5ErrorE(void *this_, QMediaRecorder::Error error) {
  ((QMediaRecorder*)this_)->error(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:187
// [-2] void metaDataAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder24metaDataAvailableChangedEb(void *this_, bool available) {
  ((QMediaRecorder*)this_)->metaDataAvailableChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:188
// [-2] void metaDataWritableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder23metaDataWritableChangedEb(void *this_, bool writable) {
  ((QMediaRecorder*)this_)->metaDataWritableChanged(writable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:189
// [-2] void metaDataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder15metaDataChangedEv(void *this_) {
  ((QMediaRecorder*)this_)->metaDataChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:190
// [-2] void metaDataChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder15metaDataChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMediaRecorder*)this_)->metaDataChanged(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:192
// [-2] void availabilityChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder19availabilityChangedEb(void *this_, bool available) {
  ((QMediaRecorder*)this_)->availabilityChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:193
// [-2] void availabilityChanged(QMultimedia::AvailabilityStatus)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaRecorder19availabilityChangedEN11QMultimedia18AvailabilityStatusE(void *this_, QMultimedia::AvailabilityStatus availability) {
  ((QMediaRecorder*)this_)->availabilityChanged(availability);
}

//  main block end
