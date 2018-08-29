//  header block begin
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiotunercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioTunerControl is pure virtual: true
// QRadioTunerControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQRadioTunerControl_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRadioTunerControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRadioTunerControl_t qt_meta_stringdata_MyQRadioTunerControl = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQRadioTunerControl"
  },
  "MyQRadioTunerControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRadioTunerControl[] = {
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
class Q_DECL_EXPORT MyQRadioTunerControl : public QRadioTunerControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRadioTunerControl::staticMetaObject,
  qt_meta_stringdata_MyQRadioTunerControl.data,
  qt_meta_data_MyQRadioTunerControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQRadioTunerControl.stringdata0))
      return static_cast<void*>(this);
  return QRadioTunerControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRadioTunerControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQRadioTunerControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QRadioTuner::State state()
  virtual QRadioTuner::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QRadioTuner::State)(int)(irv);
      // Elaborated Enum QRadioTuner::State
    } else {
    return (QRadioTuner::State){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QRadioTuner::Band band()
  virtual QRadioTuner::Band band() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"band", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QRadioTuner::Band)(int)(irv);
      // Elaborated Enum QRadioTuner::Band
    } else {
    return (QRadioTuner::Band){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setBand(QRadioTuner::Band)
  virtual void setBand(QRadioTuner::Band b)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setBand", &handled, 1, (uint64_t)b, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::setBand(b);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isBandSupported(QRadioTuner::Band)
  virtual bool isBandSupported(QRadioTuner::Band b) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isBandSupported", &handled, 1, (uint64_t)b, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int frequency()
  virtual int frequency() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"frequency", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int frequencyStep(QRadioTuner::Band)
  virtual int frequencyStep(QRadioTuner::Band b) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"frequencyStep", &handled, 1, (uint64_t)b, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QPair<int, int> frequencyRange(QRadioTuner::Band)
  virtual QPair<int, int> frequencyRange(QRadioTuner::Band b) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"frequencyRange", &handled, 1, (uint64_t)b, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QPair<int, int>){};}
    auto prv = (QPair<int, int>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QPair<int, int>
    } else {
    return (QPair<int, int>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setFrequency(int)
  virtual void setFrequency(int frequency)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFrequency", &handled, 1, (uint64_t)frequency, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::setFrequency(frequency);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isStereo()
  virtual bool isStereo() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isStereo", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QRadioTuner::StereoMode stereoMode()
  virtual QRadioTuner::StereoMode stereoMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stereoMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QRadioTuner::StereoMode)(int)(irv);
      // Elaborated Enum QRadioTuner::StereoMode
    } else {
    return (QRadioTuner::StereoMode){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setStereoMode(QRadioTuner::StereoMode)
  virtual void setStereoMode(QRadioTuner::StereoMode mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setStereoMode", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::setStereoMode(mode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int signalStrength()
  virtual int signalStrength() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"signalStrength", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int volume()
  virtual int volume() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"volume", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setVolume(int)
  virtual void setVolume(int volume)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setVolume", &handled, 1, (uint64_t)volume, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::setVolume(volume);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isMuted()
  virtual bool isMuted() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isMuted", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setMuted(bool)
  virtual void setMuted(bool muted)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMuted", &handled, 1, (uint64_t)muted, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::setMuted(muted);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isSearching()
  virtual bool isSearching() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isSearching", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void searchForward()
  virtual void searchForward()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"searchForward", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::searchForward();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void searchBackward()
  virtual void searchBackward()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"searchBackward", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::searchBackward();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void searchAllStations(QRadioTuner::SearchMode)
  virtual void searchAllStations(QRadioTuner::SearchMode searchMode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"searchAllStations", &handled, 1, (uint64_t)searchMode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::searchAllStations(searchMode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void cancelSearch()
  virtual void cancelSearch()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"cancelSearch", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::cancelSearch();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void start()
  virtual void start()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::start();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void stop()
  virtual void stop()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stop", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioTunerControl::stop();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QRadioTuner::Error error()
  virtual QRadioTuner::Error error() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"error", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QRadioTuner::Error)(int)(irv);
      // Elaborated Enum QRadioTuner::Error
    } else {
    return (QRadioTuner::Error){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString errorString()
  virtual QString errorString() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"errorString", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:58
// [4] QRadioTuner::State state()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:60
// [4] QRadioTuner::Band band()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:61
// [-2] void setBand(QRadioTuner::Band)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:62
// [1] bool isBandSupported(QRadioTuner::Band)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:64
// [4] int frequency()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:65
// [4] int frequencyStep(QRadioTuner::Band)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:66
// [8] QPair<int, int> frequencyRange(QRadioTuner::Band)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:67
// [-2] void setFrequency(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:69
// [1] bool isStereo()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:70
// [4] QRadioTuner::StereoMode stereoMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:71
// [-2] void setStereoMode(QRadioTuner::StereoMode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:73
// [4] int signalStrength()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:75
// [4] int volume()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:76
// [-2] void setVolume(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:78
// [1] bool isMuted()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:79
// [-2] void setMuted(bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:81
// [1] bool isSearching()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:85
// [-2] void searchForward()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:86
// [-2] void searchBackward()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:87
// [-2] void searchAllStations(QRadioTuner::SearchMode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:88
// [-2] void cancelSearch()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:90
// [-2] void start()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:91
// [-2] void stop()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:93
// [4] QRadioTuner::Error error()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:94
// [8] QString errorString()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QRadioTunerControl10metaObjectEv(void *this_) {
  return (void*)((QRadioTunerControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRadioTunerControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRadioTunerControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QRadioTunerControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRadioTunerControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRadioTunerControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioTunerControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRadioTunerControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioTunerControl::trUtf8(s, c, n);
return new QString(rv);
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
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:66
// [8] QPair<int, int> frequencyRange(QRadioTuner::Band)
extern "C" Q_DECL_EXPORT
void C_ZNK18QRadioTunerControl14frequencyRangeEN11QRadioTuner4BandE(void *this_, QRadioTuner::Band b) {
  auto rv = ((QRadioTunerControl*)this_)->frequencyRange(b);
/*return rv;*/
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
