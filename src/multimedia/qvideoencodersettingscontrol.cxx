//  header block begin
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h
#ifndef protected
#define protected public
#endif
#include <qvideoencodersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoEncoderSettingsControl is pure virtual: true
// QVideoEncoderSettingsControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoEncoderSettingsControl : public QVideoEncoderSettingsControl {
public:
  virtual ~MyQVideoEncoderSettingsControl() {}
// void QVideoEncoderSettingsControl(QObject *)
MyQVideoEncoderSettingsControl(QObject * parent) : QVideoEncoderSettingsControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QVideoEncoderSettingsControl10metaObjectEv(void *this_) {
  return (void*)((QVideoEncoderSettingsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:65
// [-2] void ~QVideoEncoderSettingsControl()
extern "C" Q_DECL_EXPORT
void C_ZN28QVideoEncoderSettingsControlD2Ev(void *this_) {
  delete (QVideoEncoderSettingsControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:67
// [8] QList<QSize> supportedResolutions(const QVideoEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK28QVideoEncoderSettingsControl20supportedResolutionsERK21QVideoEncoderSettingsPb(void *this_, QVideoEncoderSettings* settings, bool * continuous) {
  auto rv = ((QVideoEncoderSettingsControl*)this_)->supportedResolutions(*settings, continuous);
return new QList<QSize>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:73
// [8] QStringList supportedVideoCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QVideoEncoderSettingsControl20supportedVideoCodecsEv(void *this_) {
  auto rv = ((QVideoEncoderSettingsControl*)this_)->supportedVideoCodecs();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:74
// [8] QString videoCodecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK28QVideoEncoderSettingsControl21videoCodecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QVideoEncoderSettingsControl*)this_)->videoCodecDescription(*codecName);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:76
// [8] QVideoEncoderSettings videoSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QVideoEncoderSettingsControl13videoSettingsEv(void *this_) {
  auto rv = ((QVideoEncoderSettingsControl*)this_)->videoSettings();
return new QVideoEncoderSettings(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:77
// [-2] void setVideoSettings(const QVideoEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN28QVideoEncoderSettingsControl16setVideoSettingsERK21QVideoEncoderSettings(void *this_, QVideoEncoderSettings* settings) {
  ((QVideoEncoderSettingsControl*)this_)->setVideoSettings(*settings);
}

//  main block end
