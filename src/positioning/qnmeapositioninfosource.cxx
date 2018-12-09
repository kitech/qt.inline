//  header block begin

// since 0x050200
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnmeapositioninfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QNmeaPositionInfoSource is pure virtual: false
// QNmeaPositionInfoSource has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNmeaPositionInfoSource_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNmeaPositionInfoSource_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNmeaPositionInfoSource_t qt_meta_stringdata_MyQNmeaPositionInfoSource = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQNmeaPositionInfoSource"
  },
  "MyQNmeaPositionInfoSource"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNmeaPositionInfoSource[] = {
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
class Q_DECL_EXPORT MyQNmeaPositionInfoSource : public QNmeaPositionInfoSource {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QNmeaPositionInfoSource::staticMetaObject,
  qt_meta_stringdata_MyQNmeaPositionInfoSource.data,
  qt_meta_data_MyQNmeaPositionInfoSource,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQNmeaPositionInfoSource.stringdata0))
      return static_cast<void*>(this);
  return QNmeaPositionInfoSource::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QNmeaPositionInfoSource::qt_metacall(_c, _id, _a);
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
  virtual ~MyQNmeaPositionInfoSource() {}
// void QNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode, QObject *)
MyQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode, QObject * parent) : QNmeaPositionInfoSource(updateMode, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool parsePosInfoFromNmeaData(const char *, int, QGeoPositionInfo *, bool *)
  virtual bool parsePosInfoFromNmeaData(const char * data, int size, QGeoPositionInfo * posInfo, bool * hasFix)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parsePosInfoFromNmeaData", &handled, 4, (uint64_t)data, (uint64_t)size, (uint64_t)posInfo, (uint64_t)hasFix, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QNmeaPositionInfoSource_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQNmeaPositionInfoSource* qo = (MyQNmeaPositionInfoSource*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:83
// [1] bool parsePosInfoFromNmeaData(const char *, int, QGeoPositionInfo *, bool *)
extern "C" Q_DECL_EXPORT
bool C_ZN23QNmeaPositionInfoSource24parsePosInfoFromNmeaDataEPKciP16QGeoPositionInfoPb(void *this_, const char * data, int size, QGeoPositionInfo * posInfo, bool * hasFix) {
  return (bool)((QNmeaPositionInfoSource*)this_)->QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QNmeaPositionInfoSource10metaObjectEv(void *this_) {
  return (void*)((QNmeaPositionInfoSource*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:51
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QNmeaPositionInfoSource11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QNmeaPositionInfoSource*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:51
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QNmeaPositionInfoSource11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QNmeaPositionInfoSource*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:51
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QNmeaPositionInfoSource2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNmeaPositionInfoSource::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:51
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QNmeaPositionInfoSource6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QNmeaPositionInfoSource::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:58
// [-2] void QNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QNmeaPositionInfoSourceC2ENS_10UpdateModeEP7QObject(QNmeaPositionInfoSource::UpdateMode updateMode, QObject * parent) {
  auto _nilp = (MyQNmeaPositionInfoSource*)(0);
  return  new MyQNmeaPositionInfoSource(updateMode, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:59
// [-2] void ~QNmeaPositionInfoSource()
extern "C" Q_DECL_EXPORT
void C_ZN23QNmeaPositionInfoSourceD2Ev(void *this_) {
  delete (QNmeaPositionInfoSource*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:61
// [-2] void setUserEquivalentRangeError(double)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN23QNmeaPositionInfoSource27setUserEquivalentRangeErrorEd(void *this_, double uere) {
  ((QNmeaPositionInfoSource*)this_)->setUserEquivalentRangeError(uere);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:62
// [8] double userEquivalentRangeError()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
double C_ZNK23QNmeaPositionInfoSource24userEquivalentRangeErrorEv(void *this_) {
  return (double)((QNmeaPositionInfoSource*)this_)->userEquivalentRangeError();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:64
// [4] QNmeaPositionInfoSource::UpdateMode updateMode()
extern "C" Q_DECL_EXPORT
QNmeaPositionInfoSource::UpdateMode C_ZNK23QNmeaPositionInfoSource10updateModeEv(void *this_) {
  return (QNmeaPositionInfoSource::UpdateMode)((QNmeaPositionInfoSource*)this_)->updateMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:66
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN23QNmeaPositionInfoSource9setDeviceEP9QIODevice(void *this_, QIODevice * source) {
  ((QNmeaPositionInfoSource*)this_)->setDevice(source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:67
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QNmeaPositionInfoSource6deviceEv(void *this_) {
  return (void*)((QNmeaPositionInfoSource*)this_)->device();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:69
// [-2] void setUpdateInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QNmeaPositionInfoSource17setUpdateIntervalEi(void *this_, int msec) {
  ((QNmeaPositionInfoSource*)this_)->setUpdateInterval(msec);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:71
// [8] QGeoPositionInfo lastKnownPosition(bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK23QNmeaPositionInfoSource17lastKnownPositionEb(void *this_, bool fromSatellitePositioningMethodsOnly) {
  auto rv = ((QNmeaPositionInfoSource*)this_)->lastKnownPosition(fromSatellitePositioningMethodsOnly);
return new QGeoPositionInfo(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:72
// [4] QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods()
extern "C" Q_DECL_EXPORT
QGeoPositionInfoSource::PositioningMethods* C_ZNK23QNmeaPositionInfoSource27supportedPositioningMethodsEv(void *this_) {
  auto rv = ((QNmeaPositionInfoSource*)this_)->supportedPositioningMethods();
return new QGeoPositionInfoSource::PositioningMethods(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:73
// [4] int minimumUpdateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK23QNmeaPositionInfoSource21minimumUpdateIntervalEv(void *this_) {
  return (int)((QNmeaPositionInfoSource*)this_)->minimumUpdateInterval();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:74
// [4] QGeoPositionInfoSource::Error error()
extern "C" Q_DECL_EXPORT
QGeoPositionInfoSource::Error C_ZNK23QNmeaPositionInfoSource5errorEv(void *this_) {
  return (QGeoPositionInfoSource::Error)((QNmeaPositionInfoSource*)this_)->error();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:78
// [-2] void startUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN23QNmeaPositionInfoSource12startUpdatesEv(void *this_) {
  ((QNmeaPositionInfoSource*)this_)->startUpdates();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:79
// [-2] void stopUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN23QNmeaPositionInfoSource11stopUpdatesEv(void *this_) {
  ((QNmeaPositionInfoSource*)this_)->stopUpdates();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h:80
// [-2] void requestUpdate(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QNmeaPositionInfoSource13requestUpdateEi(void *this_, int timeout) {
  ((QNmeaPositionInfoSource*)this_)->requestUpdate(timeout);
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
