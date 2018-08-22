//  header block begin
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QSize> supportedResolutions(const QVideoEncoderSettings &, bool *)
  virtual QList<QSize> supportedResolutions(const QVideoEncoderSettings & settings, bool * continuous) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedResolutions", &handled, 2, (uint64_t)&settings, (uint64_t)continuous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QSize>){};}
    auto prv = (QList<QSize>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QSize>
    } else {
    return (QList<QSize>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<qreal> supportedFrameRates(const QVideoEncoderSettings &, bool *)
  virtual QList<qreal> supportedFrameRates(const QVideoEncoderSettings & settings, bool * continuous) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedFrameRates", &handled, 2, (uint64_t)&settings, (uint64_t)continuous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<qreal>){};}
    auto prv = (QList<qreal>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<double>
    } else {
    return (QList<qreal>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList supportedVideoCodecs()
  virtual QStringList supportedVideoCodecs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedVideoCodecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString videoCodecDescription(const QString &)
  virtual QString videoCodecDescription(const QString & codecName) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"videoCodecDescription", &handled, 1, (uint64_t)&codecName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QVideoEncoderSettings videoSettings()
  virtual QVideoEncoderSettings videoSettings() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"videoSettings", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVideoEncoderSettings){};}
    auto prv = (QVideoEncoderSettings*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVideoEncoderSettings
    } else {
    return (QVideoEncoderSettings){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setVideoSettings(const QVideoEncoderSettings &)
  virtual void setVideoSettings(const QVideoEncoderSettings & settings)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setVideoSettings", &handled, 1, (uint64_t)&settings, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoEncoderSettingsControl::setVideoSettings(settings);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:67
// [8] QList<QSize> supportedResolutions(const QVideoEncoderSettings &, bool *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:70
// [-2] QList<qreal> supportedFrameRates(const QVideoEncoderSettings &, bool *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:73
// [8] QStringList supportedVideoCodecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:74
// [8] QString videoCodecDescription(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:76
// [8] QVideoEncoderSettings videoSettings()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:77
// [-2] void setVideoSettings(const QVideoEncoderSettings &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QVideoEncoderSettingsControl10metaObjectEv(void *this_) {
  return (void*)((QVideoEncoderSettingsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QVideoEncoderSettingsControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoEncoderSettingsControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QVideoEncoderSettingsControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoEncoderSettingsControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QVideoEncoderSettingsControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoEncoderSettingsControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QVideoEncoderSettingsControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoEncoderSettingsControl::trUtf8(s, c, n);
return new QString(rv);
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
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:70
// [-2] QList<qreal> supportedFrameRates(const QVideoEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<qreal>* C_ZNK28QVideoEncoderSettingsControl19supportedFrameRatesERK21QVideoEncoderSettingsPb(void *this_, QVideoEncoderSettings* settings, bool * continuous) {
  auto rv = ((QVideoEncoderSettingsControl*)this_)->supportedFrameRates(*settings, continuous);
return new QList<qreal>(rv);
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
