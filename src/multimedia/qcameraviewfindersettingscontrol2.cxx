//  header block begin

// since 0x050500
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettingsControl2 is pure virtual: true
// QCameraViewfinderSettingsControl2 has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraViewfinderSettingsControl2_t {
  QByteArrayData data[1];
  char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraViewfinderSettingsControl2_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraViewfinderSettingsControl2_t qt_meta_stringdata_MyQCameraViewfinderSettingsControl2 = {
   {
  QT_MOC_LITERAL(0, 0, 35), // "MyQCameraViewfinderSettingsControl2"
  },
  "MyQCameraViewfinderSettingsControl2"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraViewfinderSettingsControl2[] = {
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
class Q_DECL_EXPORT MyQCameraViewfinderSettingsControl2 : public QCameraViewfinderSettingsControl2 {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraViewfinderSettingsControl2::staticMetaObject,
  qt_meta_stringdata_MyQCameraViewfinderSettingsControl2.data,
  qt_meta_data_MyQCameraViewfinderSettingsControl2,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraViewfinderSettingsControl2.stringdata0))
      return static_cast<void*>(this);
  return QCameraViewfinderSettingsControl2::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraViewfinderSettingsControl2::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraViewfinderSettingsControl2() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QCameraViewfinderSettings> supportedViewfinderSettings()
  virtual QList<QCameraViewfinderSettings> supportedViewfinderSettings() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedViewfinderSettings", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QCameraViewfinderSettings>){};}
    auto prv = (QList<QCameraViewfinderSettings>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QCameraViewfinderSettings>
    } else {
    return (QList<QCameraViewfinderSettings>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QCameraViewfinderSettings viewfinderSettings()
  virtual QCameraViewfinderSettings viewfinderSettings() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewfinderSettings", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QCameraViewfinderSettings){};}
    auto prv = (QCameraViewfinderSettings*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QCameraViewfinderSettings
    } else {
    return (QCameraViewfinderSettings){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setViewfinderSettings(const QCameraViewfinderSettings &)
  virtual void setViewfinderSettings(const QCameraViewfinderSettings & settings)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setViewfinderSettings", &handled, 1, (uint64_t)&settings, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraViewfinderSettingsControl2::setViewfinderSettings(settings);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraViewfinderSettingsControl2_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraViewfinderSettingsControl2* qo = (MyQCameraViewfinderSettingsControl2*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:89
// [-2] QList<QCameraViewfinderSettings> supportedViewfinderSettings()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:91
// [8] QCameraViewfinderSettings viewfinderSettings()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:92
// [-2] void setViewfinderSettings(const QCameraViewfinderSettings &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK33QCameraViewfinderSettingsControl210metaObjectEv(void *this_) {
  return (void*)((QCameraViewfinderSettingsControl2*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraViewfinderSettingsControl211qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraViewfinderSettingsControl2*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN33QCameraViewfinderSettingsControl211qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraViewfinderSettingsControl2*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraViewfinderSettingsControl22trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl2::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:85
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraViewfinderSettingsControl26trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl2::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:87
// [-2] void ~QCameraViewfinderSettingsControl2()
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraViewfinderSettingsControl2D2Ev(void *this_) {
  delete (QCameraViewfinderSettingsControl2*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:89
// [-2] QList<QCameraViewfinderSettings> supportedViewfinderSettings()
extern "C" Q_DECL_EXPORT
QList<QCameraViewfinderSettings>* C_ZNK33QCameraViewfinderSettingsControl227supportedViewfinderSettingsEv(void *this_) {
  auto rv = ((QCameraViewfinderSettingsControl2*)this_)->supportedViewfinderSettings();
return new QList<QCameraViewfinderSettings>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:91
// [8] QCameraViewfinderSettings viewfinderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK33QCameraViewfinderSettingsControl218viewfinderSettingsEv(void *this_) {
  auto rv = ((QCameraViewfinderSettingsControl2*)this_)->viewfinderSettings();
return new QCameraViewfinderSettings(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:92
// [-2] void setViewfinderSettings(const QCameraViewfinderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraViewfinderSettingsControl221setViewfinderSettingsERK25QCameraViewfinderSettings(void *this_, QCameraViewfinderSettings* settings) {
  ((QCameraViewfinderSettingsControl2*)this_)->setViewfinderSettings(*settings);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
