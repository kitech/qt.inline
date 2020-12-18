//  header block begin

// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraimageprocessingcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageProcessingControl is pure virtual: true true
// QCameraImageProcessingControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraImageProcessingControl_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraImageProcessingControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraImageProcessingControl_t qt_meta_stringdata_MyQCameraImageProcessingControl = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQCameraImageProcessingControl"
  },
  "MyQCameraImageProcessingControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraImageProcessingControl[] = {
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
class Q_DECL_EXPORT MyQCameraImageProcessingControl : public QCameraImageProcessingControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraImageProcessingControl::staticMetaObject,
  qt_meta_stringdata_MyQCameraImageProcessingControl.data,
  qt_meta_data_MyQCameraImageProcessingControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraImageProcessingControl.stringdata0))
      return static_cast<void*>(this);
  return QCameraImageProcessingControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraImageProcessingControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraImageProcessingControl() {}
// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isParameterSupported(QCameraImageProcessingControl::ProcessingParameter)
  virtual bool isParameterSupported(QCameraImageProcessingControl::ProcessingParameter arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isParameterSupported", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
  virtual bool isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter parameter, const QVariant & value) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isParameterValueSupported", &handled, 2, (uint64_t)parameter, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [16] QVariant parameter(QCameraImageProcessingControl::ProcessingParameter)
  virtual QVariant parameter(QCameraImageProcessingControl::ProcessingParameter parameter) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parameter", &handled, 1, (uint64_t)parameter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return (QVariant){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setParameter(QCameraImageProcessingControl::ProcessingParameter, const QVariant &)
  virtual void setParameter(QCameraImageProcessingControl::ProcessingParameter parameter, const QVariant & value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setParameter", &handled, 2, (uint64_t)parameter, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraImageProcessingControl::setParameter(parameter, value);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraImageProcessingControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraImageProcessingControl* qo = (MyQCameraImageProcessingControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcameraimageprocessingcontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:56
// [8] QString tr(const char *, const char *, int) 
// (11)qm102313504 (45)_ZN29QCameraImageProcessingControl2trEPKcS1_i
//static
/*void qm102313504(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCameraImageProcessingControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCameraImageProcessingControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN29QCameraImageProcessingControlD2Ev(void *this_)*/ {
  delete (QCameraImageProcessingControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcameraimageprocessingcontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
