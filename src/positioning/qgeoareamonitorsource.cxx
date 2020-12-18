//  header block begin

// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeoareamonitorsource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoAreaMonitorSource is pure virtual: true true
// QGeoAreaMonitorSource has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoAreaMonitorSource_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoAreaMonitorSource_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoAreaMonitorSource_t qt_meta_stringdata_MyQGeoAreaMonitorSource = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQGeoAreaMonitorSource"
  },
  "MyQGeoAreaMonitorSource"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoAreaMonitorSource[] = {
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
class Q_DECL_EXPORT MyQGeoAreaMonitorSource : public QGeoAreaMonitorSource {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGeoAreaMonitorSource::staticMetaObject,
  qt_meta_stringdata_MyQGeoAreaMonitorSource.data,
  qt_meta_data_MyQGeoAreaMonitorSource,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGeoAreaMonitorSource.stringdata0))
      return static_cast<void*>(this);
  return QGeoAreaMonitorSource::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGeoAreaMonitorSource::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGeoAreaMonitorSource() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QGeoAreaMonitorSource::Error error()
  virtual QGeoAreaMonitorSource::Error error() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"error", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoAreaMonitorSource::Error)(int)(irv);
      // Enum Enum QGeoAreaMonitorSource::Error
    } else {
    return (QGeoAreaMonitorSource::Error){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures()
  virtual QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedAreaMonitorFeatures", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoAreaMonitorSource::AreaMonitorFeatures)(int)(irv);
      // Typedef Record QFlags<QGeoAreaMonitorSource::AreaMonitorFeature>
    } else {
    return (QGeoAreaMonitorSource::AreaMonitorFeatures){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool startMonitoring(const QGeoAreaMonitorInfo &)
  virtual bool startMonitoring(const QGeoAreaMonitorInfo & monitor)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"startMonitoring", &handled, 1, (uint64_t)&monitor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool stopMonitoring(const QGeoAreaMonitorInfo &)
  virtual bool stopMonitoring(const QGeoAreaMonitorInfo & monitor)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stopMonitoring", &handled, 1, (uint64_t)&monitor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool requestUpdate(const QGeoAreaMonitorInfo &, const char *)
  virtual bool requestUpdate(const QGeoAreaMonitorInfo & monitor, const char * signal)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestUpdate", &handled, 2, (uint64_t)&monitor, (uint64_t)signal, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QGeoAreaMonitorInfo> activeMonitors()
  virtual QList<QGeoAreaMonitorInfo> activeMonitors() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"activeMonitors", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QGeoAreaMonitorInfo>){};}
    auto prv = (QList<QGeoAreaMonitorInfo>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QGeoAreaMonitorInfo>
    } else {
    return (QList<QGeoAreaMonitorInfo>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape &)
  virtual QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape & lookupArea) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"activeMonitors", &handled, 1, (uint64_t)&lookupArea, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QGeoAreaMonitorInfo>){};}
    auto prv = (QList<QGeoAreaMonitorInfo>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QGeoAreaMonitorInfo>
    } else {
    return (QList<QGeoAreaMonitorInfo>){};
  }
  }

// void QGeoAreaMonitorSource(QObject *)
MyQGeoAreaMonitorSource(QObject * parent) : QGeoAreaMonitorSource(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QGeoAreaMonitorSource_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGeoAreaMonitorSource* qo = (MyQGeoAreaMonitorSource*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeoareamonitorsource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm3588000948 (37)_ZN21QGeoAreaMonitorSource2trEPKcS1_i
//static
/*void qm3588000948(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGeoAreaMonitorSource::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGeoAreaMonitorSource::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QGeoAreaMonitorSourceD2Ev(void *this_)*/ {
  delete (QGeoAreaMonitorSource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeoareamonitorsource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
