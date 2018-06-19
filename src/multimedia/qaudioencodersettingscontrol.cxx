//  header block begin
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h
#ifndef protected
#define protected public
#endif
#include <qaudioencodersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioEncoderSettingsControl is pure virtual: true
// QAudioEncoderSettingsControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioEncoderSettingsControl : public QAudioEncoderSettingsControl {
public:
  virtual ~MyQAudioEncoderSettingsControl() {}
// void QAudioEncoderSettingsControl(QObject *)
MyQAudioEncoderSettingsControl(QObject * parent) : QAudioEncoderSettingsControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QAudioEncoderSettingsControl10metaObjectEv(void *this_) {
  return (void*)((QAudioEncoderSettingsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:64
// [-2] void ~QAudioEncoderSettingsControl()
extern "C" Q_DECL_EXPORT
void C_ZN28QAudioEncoderSettingsControlD2Ev(void *this_) {
  delete (QAudioEncoderSettingsControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:66
// [8] QStringList supportedAudioCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QAudioEncoderSettingsControl20supportedAudioCodecsEv(void *this_) {
  auto rv = ((QAudioEncoderSettingsControl*)this_)->supportedAudioCodecs();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:67
// [8] QString codecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK28QAudioEncoderSettingsControl16codecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QAudioEncoderSettingsControl*)this_)->codecDescription(*codecName);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:72
// [8] QAudioEncoderSettings audioSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QAudioEncoderSettingsControl13audioSettingsEv(void *this_) {
  auto rv = ((QAudioEncoderSettingsControl*)this_)->audioSettings();
return new QAudioEncoderSettings(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:73
// [-2] void setAudioSettings(const QAudioEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN28QAudioEncoderSettingsControl16setAudioSettingsERK21QAudioEncoderSettings(void *this_, QAudioEncoderSettings* arg0) {
  ((QAudioEncoderSettingsControl*)this_)->setAudioSettings(*arg0);
}

//  main block end
