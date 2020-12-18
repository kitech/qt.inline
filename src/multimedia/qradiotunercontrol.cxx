//  header block begin

// /usr/include/qt/QtMultimedia/qradiotunercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiotunercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioTunerControl is pure virtual: true true
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
  virtual ~MyQRadioTunerControl() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QRadioTunerControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRadioTunerControl* qo = (MyQRadioTunerControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qradiotunercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm443520327 (34)_ZN18QRadioTunerControl2trEPKcS1_i
//static
/*void qm443520327(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRadioTunerControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRadioTunerControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Extend Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotunercontrol.h:83
// [1] bool isAntennaConnected() const
// (12)qm1001931574 (46)_ZNK18QRadioTunerControl18isAntennaConnectedEv
//static
/*void qm1001931574()*/ {
  ;
  (void) ((QRadioTunerControl*)this_)->isAntennaConnected();
   auto xptr = (bool (QRadioTunerControl::*)() const ) &QRadioTunerControl::isAntennaConnected;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QRadioTunerControlD2Ev(void *this_)*/ {
  delete (QRadioTunerControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qradiotunercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
