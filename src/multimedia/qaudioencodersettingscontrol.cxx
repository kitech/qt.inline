//  header block begin
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList supportedAudioCodecs()
  virtual QStringList supportedAudioCodecs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedAudioCodecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString codecDescription(const QString &)
  virtual QString codecDescription(const QString & codecName) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"codecDescription", &handled, 1, (uint64_t)&codecName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<int> supportedSampleRates(const QAudioEncoderSettings &, bool *)
  virtual QList<int> supportedSampleRates(const QAudioEncoderSettings & settings, bool * continuous) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedSampleRates", &handled, 2, (uint64_t)&settings, (uint64_t)continuous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<int>){};}
    auto prv = (QList<int>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<int>
    } else {
    return (QList<int>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAudioEncoderSettings audioSettings()
  virtual QAudioEncoderSettings audioSettings() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"audioSettings", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioEncoderSettings){};}
    auto prv = (QAudioEncoderSettings*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioEncoderSettings
    } else {
    return (QAudioEncoderSettings){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setAudioSettings(const QAudioEncoderSettings &)
  virtual void setAudioSettings(const QAudioEncoderSettings & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAudioSettings", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioEncoderSettingsControl::setAudioSettings(arg0);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:66
// [8] QStringList supportedAudioCodecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:67
// [8] QString codecDescription(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:69
// [-2] QList<int> supportedSampleRates(const QAudioEncoderSettings &, bool *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:72
// [8] QAudioEncoderSettings audioSettings()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:73
// [-2] void setAudioSettings(const QAudioEncoderSettings &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QAudioEncoderSettingsControl10metaObjectEv(void *this_) {
  return (void*)((QAudioEncoderSettingsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QAudioEncoderSettingsControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioEncoderSettingsControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QAudioEncoderSettingsControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioEncoderSettingsControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QAudioEncoderSettingsControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioEncoderSettingsControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QAudioEncoderSettingsControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioEncoderSettingsControl::trUtf8(s, c, n);
return new QString(rv);
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
// /usr/include/qt/QtMultimedia/qaudioencodersettingscontrol.h:69
// [-2] QList<int> supportedSampleRates(const QAudioEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<int>* C_ZNK28QAudioEncoderSettingsControl20supportedSampleRatesERK21QAudioEncoderSettingsPb(void *this_, QAudioEncoderSettings* settings, bool * continuous) {
  auto rv = ((QAudioEncoderSettingsControl*)this_)->supportedSampleRates(*settings, continuous);
return new QList<int>(rv);
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
