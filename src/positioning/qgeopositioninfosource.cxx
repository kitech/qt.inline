//  header block begin

// /usr/include/qt/QtPositioning/qgeopositioninfosource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfoSource is pure virtual: true true
// QGeoPositionInfoSource has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoPositionInfoSource_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoPositionInfoSource_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoPositionInfoSource_t qt_meta_stringdata_MyQGeoPositionInfoSource = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQGeoPositionInfoSource"
  },
  "MyQGeoPositionInfoSource"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoPositionInfoSource[] = {
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
class Q_DECL_EXPORT MyQGeoPositionInfoSource : public QGeoPositionInfoSource {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGeoPositionInfoSource::staticMetaObject,
  qt_meta_stringdata_MyQGeoPositionInfoSource.data,
  qt_meta_data_MyQGeoPositionInfoSource,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGeoPositionInfoSource.stringdata0))
      return static_cast<void*>(this);
  return QGeoPositionInfoSource::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGeoPositionInfoSource::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGeoPositionInfoSource() {}
// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QGeoPositionInfo lastKnownPosition(bool)
  virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"lastKnownPosition", &handled, 1, (uint64_t)fromSatellitePositioningMethodsOnly, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QGeoPositionInfo){};}
    auto prv = (QGeoPositionInfo*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QGeoPositionInfo
    } else {
    return (QGeoPositionInfo){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods()
  virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedPositioningMethods", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoPositionInfoSource::PositioningMethods)(int)(irv);
      // Typedef Record QFlags<QGeoPositionInfoSource::PositioningMethod>
    } else {
    return (QGeoPositionInfoSource::PositioningMethods){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int minimumUpdateInterval()
  virtual int minimumUpdateInterval() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"minimumUpdateInterval", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QGeoPositionInfoSource::Error error()
  virtual QGeoPositionInfoSource::Error error() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"error", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoPositionInfoSource::Error)(int)(irv);
      // Enum Enum QGeoPositionInfoSource::Error
    } else {
    return (QGeoPositionInfoSource::Error){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void startUpdates()
  virtual void startUpdates()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"startUpdates", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGeoPositionInfoSource::startUpdates();
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void stopUpdates()
  virtual void stopUpdates()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stopUpdates", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGeoPositionInfoSource::stopUpdates();
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void requestUpdate(int)
  virtual void requestUpdate(int timeout)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestUpdate", &handled, 1, (uint64_t)timeout, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGeoPositionInfoSource::requestUpdate(timeout);
  }
  }

// void QGeoPositionInfoSource(QObject *)
MyQGeoPositionInfoSource(QObject * parent) : QGeoPositionInfoSource(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QGeoPositionInfoSource_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGeoPositionInfoSource* qo = (MyQGeoPositionInfoSource*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgeopositioninfosource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:52
// [8] QString tr(const char *, const char *, int) 
// (12)qm2713281523 (38)_ZN22QGeoPositionInfoSource2trEPKcS1_i
//static
/*void qm2713281523(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGeoPositionInfoSource::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGeoPositionInfoSource::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QGeoPositionInfoSourceD2Ev(void *this_)*/ {
  delete (QGeoPositionInfoSource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgeopositioninfosource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
