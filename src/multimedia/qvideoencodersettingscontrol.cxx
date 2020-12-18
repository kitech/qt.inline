//  header block begin

// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideoencodersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoEncoderSettingsControl is pure virtual: true true
// QVideoEncoderSettingsControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVideoEncoderSettingsControl_t {
  QByteArrayData data[1];
  char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoEncoderSettingsControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoEncoderSettingsControl_t qt_meta_stringdata_MyQVideoEncoderSettingsControl = {
   {
  QT_MOC_LITERAL(0, 0, 30), // "MyQVideoEncoderSettingsControl"
  },
  "MyQVideoEncoderSettingsControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoEncoderSettingsControl[] = {
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
class Q_DECL_EXPORT MyQVideoEncoderSettingsControl : public QVideoEncoderSettingsControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QVideoEncoderSettingsControl::staticMetaObject,
  qt_meta_stringdata_MyQVideoEncoderSettingsControl.data,
  qt_meta_data_MyQVideoEncoderSettingsControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQVideoEncoderSettingsControl.stringdata0))
      return static_cast<void*>(this);
  return QVideoEncoderSettingsControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QVideoEncoderSettingsControl::qt_metacall(_c, _id, _a);
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString videoCodecDescription(const QString &)
  virtual QString videoCodecDescription(const QString & codec) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"videoCodecDescription", &handled, 1, (uint64_t)&codec, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" Q_DECL_EXPORT
void* C_QVideoEncoderSettingsControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQVideoEncoderSettingsControl* qo = (MyQVideoEncoderSettingsControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideoencodersettingscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideoencodersettingscontrol.h:62
// [8] QString tr(const char *, const char *, int) 
// (12)qm3079370560 (44)_ZN28QVideoEncoderSettingsControl2trEPKcS1_i
//static
/*void qm3079370560(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QVideoEncoderSettingsControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QVideoEncoderSettingsControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN28QVideoEncoderSettingsControlD2Ev(void *this_)*/ {
  delete (QVideoEncoderSettingsControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideoencodersettingscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
