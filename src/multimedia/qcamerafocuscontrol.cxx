//  header block begin

// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocuscontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocusControl is pure virtual: true true
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Extend Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamerafocuscontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocuscontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1110316972 (35)_ZN19QCameraFocusControl2trEPKcS1_i
//static
/*void qm1110316972(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraFocusControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraFocusControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QCameraFocusControlD2Ev(void *this_)*/ {
  delete (QCameraFocusControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamerafocuscontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
