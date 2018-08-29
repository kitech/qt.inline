//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeosatelliteinfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoSatelliteInfoSource is pure virtual: true
// QGeoSatelliteInfoSource has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGeoSatelliteInfoSource_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoSatelliteInfoSource_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoSatelliteInfoSource_t qt_meta_stringdata_MyQGeoSatelliteInfoSource = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQGeoSatelliteInfoSource"
  },
  "MyQGeoSatelliteInfoSource"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoSatelliteInfoSource[] = {
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
class Q_DECL_EXPORT MyQGeoSatelliteInfoSource : public QGeoSatelliteInfoSource {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGeoSatelliteInfoSource::staticMetaObject,
  qt_meta_stringdata_MyQGeoSatelliteInfoSource.data,
  qt_meta_data_MyQGeoSatelliteInfoSource,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGeoSatelliteInfoSource.stringdata0))
      return static_cast<void*>(this);
  return QGeoSatelliteInfoSource::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGeoSatelliteInfoSource::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGeoSatelliteInfoSource() {}
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QGeoSatelliteInfoSource::Error error()
  virtual QGeoSatelliteInfoSource::Error error() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"error", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QGeoSatelliteInfoSource::Error)(int)(irv);
      // Enum Enum QGeoSatelliteInfoSource::Error
    } else {
    return (QGeoSatelliteInfoSource::Error){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void startUpdates()
  virtual void startUpdates()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"startUpdates", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGeoSatelliteInfoSource::startUpdates();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void stopUpdates()
  virtual void stopUpdates()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stopUpdates", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGeoSatelliteInfoSource::stopUpdates();
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void requestUpdate(int)
  virtual void requestUpdate(int timeout)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestUpdate", &handled, 1, (uint64_t)timeout, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGeoSatelliteInfoSource::requestUpdate(timeout);
  }
  }

// void QGeoSatelliteInfoSource(QObject *)
MyQGeoSatelliteInfoSource(QObject * parent) : QGeoSatelliteInfoSource(parent) {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:76
// [4] int minimumUpdateInterval()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:77
// [4] QGeoSatelliteInfoSource::Error error()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:80
// [-2] void startUpdates()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:81
// [-2] void stopUpdates()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:83
// [-2] void requestUpdate(int)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGeoSatelliteInfoSource10metaObjectEv(void *this_) {
  return (void*)((QGeoSatelliteInfoSource*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGeoSatelliteInfoSource*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QGeoSatelliteInfoSource11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGeoSatelliteInfoSource*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGeoSatelliteInfoSource::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGeoSatelliteInfoSource::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:65
// [-2] void QGeoSatelliteInfoSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSourceC2EP7QObject(QObject * parent) {
  return  new MyQGeoSatelliteInfoSource(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:66
// [-2] void ~QGeoSatelliteInfoSource()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSourceD2Ev(void *this_) {
  delete (QGeoSatelliteInfoSource*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:68
// [8] QGeoSatelliteInfoSource * createDefaultSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource19createDefaultSourceEP7QObject(QObject * parent) {
  return (void*)QGeoSatelliteInfoSource::createDefaultSource(parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:69
// [8] QGeoSatelliteInfoSource * createSource(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource12createSourceERK7QStringP7QObject(QString* sourceName, QObject * parent) {
  return (void*)QGeoSatelliteInfoSource::createSource(*sourceName, parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:70
// [8] QStringList availableSources()
extern "C" Q_DECL_EXPORT
void* C_ZN23QGeoSatelliteInfoSource16availableSourcesEv() {
  auto rv = QGeoSatelliteInfoSource::availableSources();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:72
// [8] QString sourceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGeoSatelliteInfoSource10sourceNameEv(void *this_) {
  auto rv = ((QGeoSatelliteInfoSource*)this_)->sourceName();
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:74
// [-2] void setUpdateInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource17setUpdateIntervalEi(void *this_, int msec) {
  ((QGeoSatelliteInfoSource*)this_)->setUpdateInterval(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:75
// [4] int updateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK23QGeoSatelliteInfoSource14updateIntervalEv(void *this_) {
  return (int)((QGeoSatelliteInfoSource*)this_)->updateInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:76
// [4] int minimumUpdateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK23QGeoSatelliteInfoSource21minimumUpdateIntervalEv(void *this_) {
  return (int)((QGeoSatelliteInfoSource*)this_)->minimumUpdateInterval();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:77
// [4] QGeoSatelliteInfoSource::Error error()
extern "C" Q_DECL_EXPORT
QGeoSatelliteInfoSource::Error C_ZNK23QGeoSatelliteInfoSource5errorEv(void *this_) {
  return (QGeoSatelliteInfoSource::Error)((QGeoSatelliteInfoSource*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:80
// [-2] void startUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource12startUpdatesEv(void *this_) {
  ((QGeoSatelliteInfoSource*)this_)->startUpdates();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:81
// [-2] void stopUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource11stopUpdatesEv(void *this_) {
  ((QGeoSatelliteInfoSource*)this_)->stopUpdates();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:83
// [-2] void requestUpdate(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource13requestUpdateEi(void *this_, int timeout) {
  ((QGeoSatelliteInfoSource*)this_)->requestUpdate(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:86
// [-2] void satellitesInViewUpdated(const QList<QGeoSatelliteInfo> &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource23satellitesInViewUpdatedERK5QListI17QGeoSatelliteInfoE(void *this_, QList<QGeoSatelliteInfo>* satellites) {
  ((QGeoSatelliteInfoSource*)this_)->satellitesInViewUpdated(*satellites);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:87
// [-2] void satellitesInUseUpdated(const QList<QGeoSatelliteInfo> &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource22satellitesInUseUpdatedERK5QListI17QGeoSatelliteInfoE(void *this_, QList<QGeoSatelliteInfo>* satellites) {
  ((QGeoSatelliteInfoSource*)this_)->satellitesInUseUpdated(*satellites);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:88
// [-2] void requestTimeout()
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource14requestTimeoutEv(void *this_) {
  ((QGeoSatelliteInfoSource*)this_)->requestTimeout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfosource.h:89
// [-2] void error(QGeoSatelliteInfoSource::Error)
extern "C" Q_DECL_EXPORT
void C_ZN23QGeoSatelliteInfoSource5errorENS_5ErrorE(void *this_, QGeoSatelliteInfoSource::Error arg0) {
  ((QGeoSatelliteInfoSource*)this_)->error(arg0);
}

//  main block end
