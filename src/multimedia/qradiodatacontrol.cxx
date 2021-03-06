//  header block begin

// /usr/include/qt/QtMultimedia/qradiodatacontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qradiodatacontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QRadioDataControl is pure virtual: true
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
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:58
// [8] QString stationId()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:59
// [4] QRadioData::ProgramType programType()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:60
// [8] QString programTypeName()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:61
// [8] QString stationName()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:62
// [8] QString radioText()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:63
// [-2] void setAlternativeFrequenciesEnabled(bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:64
// [1] bool isAlternativeFrequenciesEnabled()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:66
// [4] QRadioData::Error error()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:67
// [8] QString errorString()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QRadioDataControl10metaObjectEv(void *this_) {
  return (void*)((QRadioDataControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QRadioDataControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRadioDataControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QRadioDataControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRadioDataControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QRadioDataControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioDataControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QRadioDataControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRadioDataControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:56
// [-2] void ~QRadioDataControl()
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControlD2Ev(void *this_) {
  delete (QRadioDataControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:58
// [8] QString stationId()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QRadioDataControl9stationIdEv(void *this_) {
  auto rv = ((QRadioDataControl*)this_)->stationId();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:59
// [4] QRadioData::ProgramType programType()
extern "C" Q_DECL_EXPORT
QRadioData::ProgramType C_ZNK17QRadioDataControl11programTypeEv(void *this_) {
  return (QRadioData::ProgramType)((QRadioDataControl*)this_)->programType();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:60
// [8] QString programTypeName()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QRadioDataControl15programTypeNameEv(void *this_) {
  auto rv = ((QRadioDataControl*)this_)->programTypeName();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:61
// [8] QString stationName()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QRadioDataControl11stationNameEv(void *this_) {
  auto rv = ((QRadioDataControl*)this_)->stationName();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:62
// [8] QString radioText()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QRadioDataControl9radioTextEv(void *this_) {
  auto rv = ((QRadioDataControl*)this_)->radioText();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:63
// [-2] void setAlternativeFrequenciesEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl32setAlternativeFrequenciesEnabledEb(void *this_, bool enabled) {
  ((QRadioDataControl*)this_)->setAlternativeFrequenciesEnabled(enabled);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:64
// [1] bool isAlternativeFrequenciesEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QRadioDataControl31isAlternativeFrequenciesEnabledEv(void *this_) {
  return (bool)((QRadioDataControl*)this_)->isAlternativeFrequenciesEnabled();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:66
// [4] QRadioData::Error error()
extern "C" Q_DECL_EXPORT
QRadioData::Error C_ZNK17QRadioDataControl5errorEv(void *this_) {
  return (QRadioData::Error)((QRadioDataControl*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:67
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QRadioDataControl11errorStringEv(void *this_) {
  auto rv = ((QRadioDataControl*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:70
// [-2] void stationIdChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl16stationIdChangedE7QString(void *this_, QString* stationId) {
  ((QRadioDataControl*)this_)->stationIdChanged(*stationId);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:71
// [-2] void programTypeChanged(QRadioData::ProgramType)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl18programTypeChangedEN10QRadioData11ProgramTypeE(void *this_, QRadioData::ProgramType programType) {
  ((QRadioDataControl*)this_)->programTypeChanged(programType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:72
// [-2] void programTypeNameChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl22programTypeNameChangedE7QString(void *this_, QString* programTypeName) {
  ((QRadioDataControl*)this_)->programTypeNameChanged(*programTypeName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:73
// [-2] void stationNameChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl18stationNameChangedE7QString(void *this_, QString* stationName) {
  ((QRadioDataControl*)this_)->stationNameChanged(*stationName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:74
// [-2] void radioTextChanged(QString)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl16radioTextChangedE7QString(void *this_, QString* radioText) {
  ((QRadioDataControl*)this_)->radioTextChanged(*radioText);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:75
// [-2] void alternativeFrequenciesEnabledChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl36alternativeFrequenciesEnabledChangedEb(void *this_, bool enabled) {
  ((QRadioDataControl*)this_)->alternativeFrequenciesEnabledChanged(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodatacontrol.h:76
// [-2] void error(QRadioData::Error)
extern "C" Q_DECL_EXPORT
void C_ZN17QRadioDataControl5errorEN10QRadioData5ErrorE(void *this_, QRadioData::Error err_) {
  ((QRadioDataControl*)this_)->error(err_);
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
