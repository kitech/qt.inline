//  header block begin
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h
#ifndef protected
#define protected public
#endif
#include <qradiotunercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioTunerControl is pure virtual: true
// QRadioTunerControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRadioTunerControl : public QRadioTunerControl {
public:
  virtual ~MyQRadioTunerControl() {}
// void QRadioTunerControl(QObject *)
MyQRadioTunerControl(QObject * parent) : QRadioTunerControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QRadioTunerControl10metaObjectEv(void *this_) {
  return (void*)((QRadioTunerControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:56
// [-2] void ~QRadioTunerControl()
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControlD2Ev(void *this_) {
  delete (QRadioTunerControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:58
// [4] QRadioTuner::State state()
extern "C" Q_DECL_EXPORT
QRadioTuner::State C_ZNK18QRadioTunerControl5stateEv(void *this_) {
  return (QRadioTuner::State)((QRadioTunerControl*)this_)->state();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:60
// [4] QRadioTuner::Band band()
extern "C" Q_DECL_EXPORT
QRadioTuner::Band C_ZNK18QRadioTunerControl4bandEv(void *this_) {
  return (QRadioTuner::Band)((QRadioTunerControl*)this_)->band();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:61
// [-2] void setBand(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl7setBandEN11QRadioTuner4BandE(void *this_, QRadioTuner::Band b) {
  ((QRadioTunerControl*)this_)->setBand(b);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:62
// [1] bool isBandSupported(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QRadioTunerControl15isBandSupportedEN11QRadioTuner4BandE(void *this_, QRadioTuner::Band b) {
  return (bool)((QRadioTunerControl*)this_)->isBandSupported(b);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:64
// [4] int frequency()
extern "C" Q_DECL_EXPORT
int C_ZNK18QRadioTunerControl9frequencyEv(void *this_) {
  return (int)((QRadioTunerControl*)this_)->frequency();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:65
// [4] int frequencyStep(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
int C_ZNK18QRadioTunerControl13frequencyStepEN11QRadioTuner4BandE(void *this_, QRadioTuner::Band b) {
  return (int)((QRadioTunerControl*)this_)->frequencyStep(b);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:67
// [-2] void setFrequency(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl12setFrequencyEi(void *this_, int frequency) {
  ((QRadioTunerControl*)this_)->setFrequency(frequency);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:69
// [1] bool isStereo()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QRadioTunerControl8isStereoEv(void *this_) {
  return (bool)((QRadioTunerControl*)this_)->isStereo();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:70
// [4] QRadioTuner::StereoMode stereoMode()
extern "C" Q_DECL_EXPORT
QRadioTuner::StereoMode C_ZNK18QRadioTunerControl10stereoModeEv(void *this_) {
  return (QRadioTuner::StereoMode)((QRadioTunerControl*)this_)->stereoMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:71
// [-2] void setStereoMode(QRadioTuner::StereoMode)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl13setStereoModeEN11QRadioTuner10StereoModeE(void *this_, QRadioTuner::StereoMode mode) {
  ((QRadioTunerControl*)this_)->setStereoMode(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:73
// [4] int signalStrength()
extern "C" Q_DECL_EXPORT
int C_ZNK18QRadioTunerControl14signalStrengthEv(void *this_) {
  return (int)((QRadioTunerControl*)this_)->signalStrength();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:75
// [4] int volume()
extern "C" Q_DECL_EXPORT
int C_ZNK18QRadioTunerControl6volumeEv(void *this_) {
  return (int)((QRadioTunerControl*)this_)->volume();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:76
// [-2] void setVolume(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl9setVolumeEi(void *this_, int volume) {
  ((QRadioTunerControl*)this_)->setVolume(volume);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:78
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QRadioTunerControl7isMutedEv(void *this_) {
  return (bool)((QRadioTunerControl*)this_)->isMuted();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:79
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl8setMutedEb(void *this_, bool muted) {
  ((QRadioTunerControl*)this_)->setMuted(muted);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:81
// [1] bool isSearching()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QRadioTunerControl11isSearchingEv(void *this_) {
  return (bool)((QRadioTunerControl*)this_)->isSearching();
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:83
// [1] bool isAntennaConnected()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QRadioTunerControl18isAntennaConnectedEv(void *this_) {
  return (bool)((QRadioTunerControl*)this_)->isAntennaConnected();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:85
// [-2] void searchForward()
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl13searchForwardEv(void *this_) {
  ((QRadioTunerControl*)this_)->searchForward();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:86
// [-2] void searchBackward()
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl14searchBackwardEv(void *this_) {
  ((QRadioTunerControl*)this_)->searchBackward();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:87
// [-2] void searchAllStations(QRadioTuner::SearchMode)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl17searchAllStationsEN11QRadioTuner10SearchModeE(void *this_, QRadioTuner::SearchMode searchMode) {
  ((QRadioTunerControl*)this_)->searchAllStations(searchMode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:88
// [-2] void cancelSearch()
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl12cancelSearchEv(void *this_) {
  ((QRadioTunerControl*)this_)->cancelSearch();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:90
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl5startEv(void *this_) {
  ((QRadioTunerControl*)this_)->start();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:91
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl4stopEv(void *this_) {
  ((QRadioTunerControl*)this_)->stop();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:93
// [4] QRadioTuner::Error error()
extern "C" Q_DECL_EXPORT
QRadioTuner::Error C_ZNK18QRadioTunerControl5errorEv(void *this_) {
  return (QRadioTuner::Error)((QRadioTunerControl*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:94
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QRadioTunerControl11errorStringEv(void *this_) {
  auto rv = ((QRadioTunerControl*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:97
// [-2] void stateChanged(QRadioTuner::State)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl12stateChangedEN11QRadioTuner5StateE(void *this_, QRadioTuner::State state) {
  ((QRadioTunerControl*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:98
// [-2] void bandChanged(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl11bandChangedEN11QRadioTuner4BandE(void *this_, QRadioTuner::Band band) {
  ((QRadioTunerControl*)this_)->bandChanged(band);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:99
// [-2] void frequencyChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl16frequencyChangedEi(void *this_, int frequency) {
  ((QRadioTunerControl*)this_)->frequencyChanged(frequency);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:100
// [-2] void stereoStatusChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl19stereoStatusChangedEb(void *this_, bool stereo) {
  ((QRadioTunerControl*)this_)->stereoStatusChanged(stereo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:101
// [-2] void searchingChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl16searchingChangedEb(void *this_, bool searching) {
  ((QRadioTunerControl*)this_)->searchingChanged(searching);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:102
// [-2] void signalStrengthChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl21signalStrengthChangedEi(void *this_, int signalStrength) {
  ((QRadioTunerControl*)this_)->signalStrengthChanged(signalStrength);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:103
// [-2] void volumeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl13volumeChangedEi(void *this_, int volume) {
  ((QRadioTunerControl*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:104
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl12mutedChangedEb(void *this_, bool muted) {
  ((QRadioTunerControl*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:105
// [-2] void error(QRadioTuner::Error)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl5errorEN11QRadioTuner5ErrorE(void *this_, QRadioTuner::Error err_) {
  ((QRadioTunerControl*)this_)->error(err_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:106
// [-2] void stationFound(int, QString)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl12stationFoundEi7QString(void *this_, int frequency, QString* stationId) {
  ((QRadioTunerControl*)this_)->stationFound(frequency, *stationId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:107
// [-2] void antennaConnectedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QRadioTunerControl23antennaConnectedChangedEb(void *this_, bool connectionStatus) {
  ((QRadioTunerControl*)this_)->antennaConnectedChanged(connectionStatus);
}

//  main block end
