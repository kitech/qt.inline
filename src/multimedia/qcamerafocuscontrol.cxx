//  header block begin

// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocuscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocusControl is pure virtual: true
// QCameraFocusControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraFocusControl_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraFocusControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraFocusControl_t qt_meta_stringdata_MyQCameraFocusControl = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQCameraFocusControl"
  },
  "MyQCameraFocusControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraFocusControl[] = {
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
class Q_DECL_EXPORT MyQCameraFocusControl : public QCameraFocusControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraFocusControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraFocusControl.data,
  qt_meta_data_MyQCameraFocusControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraFocusControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraFocusControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraFocusControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraFocusControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCameraFocus::FocusModes focusMode()
  virtual QCameraFocus::FocusModes focusMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCameraFocus::FocusModes)(int)(irv);
      // Elaborated Record QFlags<QCameraFocus::FocusMode>
    } else {
    return (QCameraFocus::FocusModes){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setFocusMode(QCameraFocus::FocusModes)
  virtual void setFocusMode(QFlags<QCameraFocus::FocusMode> mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFocusMode", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraFocusControl::setFocusMode(mode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFocusModeSupported(QCameraFocus::FocusModes)
  virtual bool isFocusModeSupported(QFlags<QCameraFocus::FocusMode> mode) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFocusModeSupported", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QCameraFocus::FocusPointMode focusPointMode()
  virtual QCameraFocus::FocusPointMode focusPointMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusPointMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QCameraFocus::FocusPointMode)(int)(irv);
      // Elaborated Enum QCameraFocus::FocusPointMode
    } else {
    return (QCameraFocus::FocusPointMode){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setFocusPointMode(QCameraFocus::FocusPointMode)
  virtual void setFocusPointMode(QCameraFocus::FocusPointMode mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFocusPointMode", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraFocusControl::setFocusPointMode(mode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isFocusPointModeSupported(QCameraFocus::FocusPointMode)
  virtual bool isFocusPointModeSupported(QCameraFocus::FocusPointMode mode) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isFocusPointModeSupported", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QPointF customFocusPoint()
  virtual QPointF customFocusPoint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"customFocusPoint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QPointF){};}
    auto prv = (QPointF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QPointF
    } else {
    return (QPointF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setCustomFocusPoint(const QPointF &)
  virtual void setCustomFocusPoint(const QPointF & point)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCustomFocusPoint", &handled, 1, (uint64_t)&point, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraFocusControl::setCustomFocusPoint(point);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QCameraFocusZoneList focusZones()
  virtual QCameraFocusZoneList focusZones() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusZones", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QCameraFocusZoneList*)(irv);
      // Typedef Record QList<QCameraFocusZone>
    } else {
    return (QCameraFocusZoneList){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraFocusControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraFocusControl* qo = (MyQCameraFocusControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:60
// [4] QCameraFocus::FocusModes focusMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:61
// [-2] void setFocusMode(QCameraFocus::FocusModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:62
// [1] bool isFocusModeSupported(QCameraFocus::FocusModes)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:64
// [4] QCameraFocus::FocusPointMode focusPointMode()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:65
// [-2] void setFocusPointMode(QCameraFocus::FocusPointMode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:66
// [1] bool isFocusPointModeSupported(QCameraFocus::FocusPointMode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:67
// [16] QPointF customFocusPoint()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:68
// [-2] void setCustomFocusPoint(const QPointF &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:70
// [-2] QCameraFocusZoneList focusZones()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraFocusControl10metaObjectEv(void *this_) {
  return (void*)((QCameraFocusControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFocusControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraFocusControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QCameraFocusControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraFocusControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFocusControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFocusControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraFocusControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFocusControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:58
// [-2] void ~QCameraFocusControl()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControlD2Ev(void *this_) {
  delete (QCameraFocusControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:60
// [4] QCameraFocus::FocusModes focusMode()
extern "C" Q_DECL_EXPORT
QCameraFocus::FocusModes C_ZNK19QCameraFocusControl9focusModeEv(void *this_) {
  return (QCameraFocus::FocusModes)((QCameraFocusControl*)this_)->focusMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:61
// [-2] void setFocusMode(QCameraFocus::FocusModes)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControl12setFocusModeE6QFlagsIN12QCameraFocus9FocusModeEE(void *this_, QFlags<QCameraFocus::FocusMode> mode) {
  ((QCameraFocusControl*)this_)->setFocusMode(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:62
// [1] bool isFocusModeSupported(QCameraFocus::FocusModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraFocusControl20isFocusModeSupportedE6QFlagsIN12QCameraFocus9FocusModeEE(void *this_, QFlags<QCameraFocus::FocusMode> mode) {
  return (bool)((QCameraFocusControl*)this_)->isFocusModeSupported(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:64
// [4] QCameraFocus::FocusPointMode focusPointMode()
extern "C" Q_DECL_EXPORT
QCameraFocus::FocusPointMode C_ZNK19QCameraFocusControl14focusPointModeEv(void *this_) {
  return (QCameraFocus::FocusPointMode)((QCameraFocusControl*)this_)->focusPointMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:65
// [-2] void setFocusPointMode(QCameraFocus::FocusPointMode)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControl17setFocusPointModeEN12QCameraFocus14FocusPointModeE(void *this_, QCameraFocus::FocusPointMode mode) {
  ((QCameraFocusControl*)this_)->setFocusPointMode(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:66
// [1] bool isFocusPointModeSupported(QCameraFocus::FocusPointMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraFocusControl25isFocusPointModeSupportedEN12QCameraFocus14FocusPointModeE(void *this_, QCameraFocus::FocusPointMode mode) {
  return (bool)((QCameraFocusControl*)this_)->isFocusPointModeSupported(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:67
// [16] QPointF customFocusPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraFocusControl16customFocusPointEv(void *this_) {
  auto rv = ((QCameraFocusControl*)this_)->customFocusPoint();
return new QPointF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:68
// [-2] void setCustomFocusPoint(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControl19setCustomFocusPointERK7QPointF(void *this_, QPointF* point) {
  ((QCameraFocusControl*)this_)->setCustomFocusPoint(*point);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:70
// [-2] QCameraFocusZoneList focusZones()
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_ZNK19QCameraFocusControl10focusZonesEv(void *this_) {
  auto rv = ((QCameraFocusControl*)this_)->focusZones();
return new QCameraFocusZoneList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:73
// [-2] void focusModeChanged(QCameraFocus::FocusModes)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControl16focusModeChangedE6QFlagsIN12QCameraFocus9FocusModeEE(void *this_, QFlags<QCameraFocus::FocusMode> mode) {
  ((QCameraFocusControl*)this_)->focusModeChanged(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:74
// [-2] void focusPointModeChanged(QCameraFocus::FocusPointMode)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControl21focusPointModeChangedEN12QCameraFocus14FocusPointModeE(void *this_, QCameraFocus::FocusPointMode mode) {
  ((QCameraFocusControl*)this_)->focusPointModeChanged(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:75
// [-2] void customFocusPointChanged(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControl23customFocusPointChangedERK7QPointF(void *this_, QPointF* point) {
  ((QCameraFocusControl*)this_)->customFocusPointChanged(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:77
// [-2] void focusZonesChanged()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraFocusControl17focusZonesChangedEv(void *this_) {
  ((QCameraFocusControl*)this_)->focusZonesChanged();
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
