//  header block begin

// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettingscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettingsControl is pure virtual: true
// QCameraViewfinderSettingsControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraViewfinderSettingsControl_t {
  QByteArrayData data[1];
  char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraViewfinderSettingsControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraViewfinderSettingsControl_t qt_meta_stringdata_MyQCameraViewfinderSettingsControl = {
   {
  QT_MOC_LITERAL(0, 0, 34), // "MyQCameraViewfinderSettingsControl"
  },
  "MyQCameraViewfinderSettingsControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraViewfinderSettingsControl[] = {
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
class Q_DECL_EXPORT MyQCameraViewfinderSettingsControl : public QCameraViewfinderSettingsControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraViewfinderSettingsControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraViewfinderSettingsControl.data,
  qt_meta_data_MyQCameraViewfinderSettingsControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraViewfinderSettingsControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraViewfinderSettingsControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraViewfinderSettingsControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraViewfinderSettingsControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter)
  virtual bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isViewfinderParameterSupported", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter)
  virtual QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewfinderParameter", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter, const QVariant &)
  virtual void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter parameter, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setViewfinderParameter", &handled, 2, (uint64_t)parameter, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraViewfinderSettingsControl::setViewfinderParameter(parameter, value);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraViewfinderSettingsControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraViewfinderSettingsControl* qo = (MyQCameraViewfinderSettingsControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:68
// [1] bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:69
// [16] QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:70
// [-2] void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter, const QVariant &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK32QCameraViewfinderSettingsControl10metaObjectEv(void *this_) {
  return (void*)((QCameraViewfinderSettingsControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraViewfinderSettingsControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraViewfinderSettingsControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN32QCameraViewfinderSettingsControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraViewfinderSettingsControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraViewfinderSettingsControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN32QCameraViewfinderSettingsControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraViewfinderSettingsControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:66
// [-2] void ~QCameraViewfinderSettingsControl()
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraViewfinderSettingsControlD2Ev(void *this_) {
  delete (QCameraViewfinderSettingsControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:68
// [1] bool isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter)
extern "C" Q_DECL_EXPORT
bool C_ZNK32QCameraViewfinderSettingsControl30isViewfinderParameterSupportedENS_19ViewfinderParameterE(void *this_, QCameraViewfinderSettingsControl::ViewfinderParameter parameter) {
  return (bool)((QCameraViewfinderSettingsControl*)this_)->isViewfinderParameterSupported(parameter);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:69
// [16] QVariant viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter)
extern "C" Q_DECL_EXPORT
void* C_ZNK32QCameraViewfinderSettingsControl19viewfinderParameterENS_19ViewfinderParameterE(void *this_, QCameraViewfinderSettingsControl::ViewfinderParameter parameter) {
  auto rv = ((QCameraViewfinderSettingsControl*)this_)->viewfinderParameter(parameter);
return new QVariant(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettingscontrol.h:70
// [-2] void setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN32QCameraViewfinderSettingsControl22setViewfinderParameterENS_19ViewfinderParameterERK8QVariant(void *this_, QCameraViewfinderSettingsControl::ViewfinderParameter parameter, QVariant* value) {
  ((QCameraViewfinderSettingsControl*)this_)->setViewfinderParameter(parameter, *value);
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
