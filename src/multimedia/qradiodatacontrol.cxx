//  header block begin

// /usr/include/qt/QtMultimedia/qradiodatacontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiodatacontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioDataControl is pure virtual: true true
// QRadioDataControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRadioDataControl_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRadioDataControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRadioDataControl_t qt_meta_stringdata_MyQRadioDataControl = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQRadioDataControl"
  },
  "MyQRadioDataControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRadioDataControl[] = {
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
class Q_DECL_EXPORT MyQRadioDataControl : public QRadioDataControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QRadioDataControl::staticMetaObject,
  qt_meta_stringdata_MyQRadioDataControl.data,
  qt_meta_data_MyQRadioDataControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQRadioDataControl.stringdata0))
      return static_cast<void*>(this);
  return QRadioDataControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QRadioDataControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQRadioDataControl() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString stationId()
  virtual QString stationId() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stationId", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QRadioData::ProgramType programType()
  virtual QRadioData::ProgramType programType() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"programType", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QRadioData::ProgramType)(int)(irv);
      // Elaborated Enum QRadioData::ProgramType
    } else {
    return (QRadioData::ProgramType){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString programTypeName()
  virtual QString programTypeName() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"programTypeName", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString stationName()
  virtual QString stationName() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stationName", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString radioText()
  virtual QString radioText() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"radioText", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setAlternativeFrequenciesEnabled(bool)
  virtual void setAlternativeFrequenciesEnabled(bool enabled)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAlternativeFrequenciesEnabled", &handled, 1, (uint64_t)enabled, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRadioDataControl::setAlternativeFrequenciesEnabled(enabled);
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool isAlternativeFrequenciesEnabled()
  virtual bool isAlternativeFrequenciesEnabled() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isAlternativeFrequenciesEnabled", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QRadioData::Error error()
  virtual QRadioData::Error error() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"error", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QRadioData::Error)(int)(irv);
      // Elaborated Enum QRadioData::Error
    } else {
    return (QRadioData::Error){};
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
void* C_QRadioDataControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQRadioDataControl* qo = (MyQRadioDataControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qradiodatacontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm4181347171 (33)_ZN17QRadioDataControl2trEPKcS1_i
//static
/*void qm4181347171(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QRadioDataControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QRadioDataControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QRadioDataControlD2Ev(void *this_)*/ {
  delete (QRadioDataControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qradiodatacontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
