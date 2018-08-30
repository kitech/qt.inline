//  header block begin
// /usr/include/qt/QtMultimedia/qradiotuner.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiotuner.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioTuner is pure virtual: false
// QRadioTuner has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQRadioTuner_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRadioTuner_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRadioTuner_t qt_meta_stringdata_MyQRadioTuner = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQRadioTuner"
  },
  "MyQRadioTuner"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRadioTuner[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQRadioTuner : public QRadioTuner {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRadioTuner::staticMetaObject,
  qt_meta_stringdata_MyQRadioTuner.data,
  qt_meta_data_MyQRadioTuner,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQRadioTuner.stringdata0))
      return static_cast<void*>(this);
  return QRadioTuner::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRadioTuner::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQRadioTuner() {}
// void QRadioTuner(QObject *)
MyQRadioTuner(QObject * parent) : QRadioTuner(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QRadioTuner_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRadioTuner* qo = (MyQRadioTuner*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRadioTuner10metaObjectEv(void *this_) {
  return (void*)((QRadioTuner*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRadioTuner11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRadioTuner*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QRadioTuner11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRadioTuner*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRadioTuner2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioTuner::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRadioTuner6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioTuner::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:81
// [-2] void QRadioTuner(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QRadioTunerC2EP7QObject(QObject * parent) {
  return  new MyQRadioTuner(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:82
// [-2] void ~QRadioTuner()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTunerD2Ev(void *this_) {
  delete (QRadioTuner*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:84
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK11QRadioTuner12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QRadioTuner*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:86
// [4] QRadioTuner::State state()
extern "C" Q_DECL_EXPORT
QRadioTuner::State C_ZNK11QRadioTuner5stateEv(void *this_) {
  return (QRadioTuner::State)((QRadioTuner*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:88
// [4] QRadioTuner::Band band()
extern "C" Q_DECL_EXPORT
QRadioTuner::Band C_ZNK11QRadioTuner4bandEv(void *this_) {
  return (QRadioTuner::Band)((QRadioTuner*)this_)->band();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:90
// [1] bool isBandSupported(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner15isBandSupportedENS_4BandE(void *this_, QRadioTuner::Band b) {
  return (bool)((QRadioTuner*)this_)->isBandSupported(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:92
// [4] int frequency()
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner9frequencyEv(void *this_) {
  return (int)((QRadioTuner*)this_)->frequency();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:93
// [4] int frequencyStep(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner13frequencyStepENS_4BandE(void *this_, QRadioTuner::Band band) {
  return (int)((QRadioTuner*)this_)->frequencyStep(band);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:94
// [8] QPair<int, int> frequencyRange(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZNK11QRadioTuner14frequencyRangeENS_4BandE(void *this_, QRadioTuner::Band band) {
  auto rv = ((QRadioTuner*)this_)->frequencyRange(band);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:96
// [1] bool isStereo()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner8isStereoEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isStereo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:97
// [-2] void setStereoMode(QRadioTuner::StereoMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner13setStereoModeENS_10StereoModeE(void *this_, QRadioTuner::StereoMode mode) {
  ((QRadioTuner*)this_)->setStereoMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:98
// [4] QRadioTuner::StereoMode stereoMode()
extern "C" Q_DECL_EXPORT
QRadioTuner::StereoMode C_ZNK11QRadioTuner10stereoModeEv(void *this_) {
  return (QRadioTuner::StereoMode)((QRadioTuner*)this_)->stereoMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:100
// [4] int signalStrength()
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner14signalStrengthEv(void *this_) {
  return (int)((QRadioTuner*)this_)->signalStrength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:102
// [4] int volume()
extern "C" Q_DECL_EXPORT
int C_ZNK11QRadioTuner6volumeEv(void *this_) {
  return (int)((QRadioTuner*)this_)->volume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:103
// [1] bool isMuted()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner7isMutedEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isMuted();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:105
// [1] bool isSearching()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner11isSearchingEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isSearching();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:107
// [1] bool isAntennaConnected()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QRadioTuner18isAntennaConnectedEv(void *this_) {
  return (bool)((QRadioTuner*)this_)->isAntennaConnected();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:109
// [4] QRadioTuner::Error error()
extern "C" Q_DECL_EXPORT
QRadioTuner::Error C_ZNK11QRadioTuner5errorEv(void *this_) {
  return (QRadioTuner::Error)((QRadioTuner*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:110
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRadioTuner11errorStringEv(void *this_) {
  auto rv = ((QRadioTuner*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:112
// [8] QRadioData * radioData()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QRadioTuner9radioDataEv(void *this_) {
  return (void*)((QRadioTuner*)this_)->radioData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:115
// [-2] void searchForward()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner13searchForwardEv(void *this_) {
  ((QRadioTuner*)this_)->searchForward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:116
// [-2] void searchBackward()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner14searchBackwardEv(void *this_) {
  ((QRadioTuner*)this_)->searchBackward();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:117
// [-2] void searchAllStations(QRadioTuner::SearchMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner17searchAllStationsENS_10SearchModeE(void *this_, QRadioTuner::SearchMode searchMode) {
  ((QRadioTuner*)this_)->searchAllStations(searchMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:118
// [-2] void cancelSearch()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12cancelSearchEv(void *this_) {
  ((QRadioTuner*)this_)->cancelSearch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:120
// [-2] void setBand(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner7setBandENS_4BandE(void *this_, QRadioTuner::Band band) {
  ((QRadioTuner*)this_)->setBand(band);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:121
// [-2] void setFrequency(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12setFrequencyEi(void *this_, int frequency) {
  ((QRadioTuner*)this_)->setFrequency(frequency);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:123
// [-2] void setVolume(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner9setVolumeEi(void *this_, int volume) {
  ((QRadioTuner*)this_)->setVolume(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:124
// [-2] void setMuted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner8setMutedEb(void *this_, bool muted) {
  ((QRadioTuner*)this_)->setMuted(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:126
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner5startEv(void *this_) {
  ((QRadioTuner*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:127
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner4stopEv(void *this_) {
  ((QRadioTuner*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:130
// [-2] void stateChanged(QRadioTuner::State)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12stateChangedENS_5StateE(void *this_, QRadioTuner::State state) {
  ((QRadioTuner*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:131
// [-2] void bandChanged(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner11bandChangedENS_4BandE(void *this_, QRadioTuner::Band band) {
  ((QRadioTuner*)this_)->bandChanged(band);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:132
// [-2] void frequencyChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner16frequencyChangedEi(void *this_, int frequency) {
  ((QRadioTuner*)this_)->frequencyChanged(frequency);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:133
// [-2] void stereoStatusChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner19stereoStatusChangedEb(void *this_, bool stereo) {
  ((QRadioTuner*)this_)->stereoStatusChanged(stereo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:134
// [-2] void searchingChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner16searchingChangedEb(void *this_, bool searching) {
  ((QRadioTuner*)this_)->searchingChanged(searching);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:135
// [-2] void signalStrengthChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner21signalStrengthChangedEi(void *this_, int signalStrength) {
  ((QRadioTuner*)this_)->signalStrengthChanged(signalStrength);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:136
// [-2] void volumeChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner13volumeChangedEi(void *this_, int volume) {
  ((QRadioTuner*)this_)->volumeChanged(volume);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:137
// [-2] void mutedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12mutedChangedEb(void *this_, bool muted) {
  ((QRadioTuner*)this_)->mutedChanged(muted);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:138
// [-2] void stationFound(int, QString)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner12stationFoundEi7QString(void *this_, int frequency, QString* stationId) {
  ((QRadioTuner*)this_)->stationFound(frequency, *stationId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:139
// [-2] void antennaConnectedChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner23antennaConnectedChangedEb(void *this_, bool connectionStatus) {
  ((QRadioTuner*)this_)->antennaConnectedChanged(connectionStatus);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:141
// [-2] void error(QRadioTuner::Error)
extern "C" Q_DECL_EXPORT
void C_ZN11QRadioTuner5errorENS_5ErrorE(void *this_, QRadioTuner::Error error) {
  ((QRadioTuner*)this_)->error(error);
}

//  main block end
