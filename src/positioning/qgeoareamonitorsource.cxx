//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeoareamonitorsource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoAreaMonitorSource is pure virtual: true
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
  virtual ~MyQGeoAreaMonitorSource() {}
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:84
// [4] QGeoAreaMonitorSource::Error error()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:85
// [-2] QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:87
// [1] bool startMonitoring(const QGeoAreaMonitorInfo &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:88
// [1] bool stopMonitoring(const QGeoAreaMonitorInfo &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:89
// [1] bool requestUpdate(const QGeoAreaMonitorInfo &, const char *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:91
// [-2] QList<QGeoAreaMonitorInfo> activeMonitors()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:92
// [-2] QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGeoAreaMonitorSource10metaObjectEv(void *this_) {
  return (void*)((QGeoAreaMonitorSource*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGeoAreaMonitorSource11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGeoAreaMonitorSource*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN21QGeoAreaMonitorSource11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGeoAreaMonitorSource*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGeoAreaMonitorSource2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGeoAreaMonitorSource::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGeoAreaMonitorSource6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGeoAreaMonitorSource::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:72
// [-2] void QGeoAreaMonitorSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGeoAreaMonitorSourceC2EP7QObject(QObject * parent) {
  return  new MyQGeoAreaMonitorSource(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:73
// [-2] void ~QGeoAreaMonitorSource()
extern "C" Q_DECL_EXPORT
void C_ZN21QGeoAreaMonitorSourceD2Ev(void *this_) {
  delete (QGeoAreaMonitorSource*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:75
// [8] QGeoAreaMonitorSource * createDefaultSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGeoAreaMonitorSource19createDefaultSourceEP7QObject(QObject * parent) {
  return (void*)QGeoAreaMonitorSource::createDefaultSource(parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:76
// [8] QGeoAreaMonitorSource * createSource(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGeoAreaMonitorSource12createSourceERK7QStringP7QObject(QString* sourceName, QObject * parent) {
  return (void*)QGeoAreaMonitorSource::createSource(*sourceName, parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:77
// [8] QStringList availableSources()
extern "C" Q_DECL_EXPORT
void* C_ZN21QGeoAreaMonitorSource16availableSourcesEv() {
  auto rv = QGeoAreaMonitorSource::availableSources();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:79
// [-2] void setPositionInfoSource(QGeoPositionInfoSource *)
extern "C" Q_DECL_EXPORT
void C_ZN21QGeoAreaMonitorSource21setPositionInfoSourceEP22QGeoPositionInfoSource(void *this_, QGeoPositionInfoSource * source) {
  ((QGeoAreaMonitorSource*)this_)->setPositionInfoSource(source);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:80
// [8] QGeoPositionInfoSource * positionInfoSource()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGeoAreaMonitorSource18positionInfoSourceEv(void *this_) {
  return (void*)((QGeoAreaMonitorSource*)this_)->positionInfoSource();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:82
// [8] QString sourceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QGeoAreaMonitorSource10sourceNameEv(void *this_) {
  auto rv = ((QGeoAreaMonitorSource*)this_)->sourceName();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:84
// [4] QGeoAreaMonitorSource::Error error()
extern "C" Q_DECL_EXPORT
QGeoAreaMonitorSource::Error C_ZNK21QGeoAreaMonitorSource5errorEv(void *this_) {
  return (QGeoAreaMonitorSource::Error)((QGeoAreaMonitorSource*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:85
// [-2] QGeoAreaMonitorSource::AreaMonitorFeatures supportedAreaMonitorFeatures()
extern "C" Q_DECL_EXPORT
QGeoAreaMonitorSource::AreaMonitorFeatures* C_ZNK21QGeoAreaMonitorSource28supportedAreaMonitorFeaturesEv(void *this_) {
  auto rv = ((QGeoAreaMonitorSource*)this_)->supportedAreaMonitorFeatures();
return new QGeoAreaMonitorSource::AreaMonitorFeatures(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:87
// [1] bool startMonitoring(const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QGeoAreaMonitorSource15startMonitoringERK19QGeoAreaMonitorInfo(void *this_, QGeoAreaMonitorInfo* monitor) {
  return (bool)((QGeoAreaMonitorSource*)this_)->startMonitoring(*monitor);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:88
// [1] bool stopMonitoring(const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZN21QGeoAreaMonitorSource14stopMonitoringERK19QGeoAreaMonitorInfo(void *this_, QGeoAreaMonitorInfo* monitor) {
  return (bool)((QGeoAreaMonitorSource*)this_)->stopMonitoring(*monitor);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:89
// [1] bool requestUpdate(const QGeoAreaMonitorInfo &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN21QGeoAreaMonitorSource13requestUpdateERK19QGeoAreaMonitorInfoPKc(void *this_, QGeoAreaMonitorInfo* monitor, const char * signal) {
  return (bool)((QGeoAreaMonitorSource*)this_)->requestUpdate(*monitor, signal);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:91
// [-2] QList<QGeoAreaMonitorInfo> activeMonitors()
extern "C" Q_DECL_EXPORT
QList<QGeoAreaMonitorInfo>* C_ZNK21QGeoAreaMonitorSource14activeMonitorsEv(void *this_) {
  auto rv = ((QGeoAreaMonitorSource*)this_)->activeMonitors();
return new QList<QGeoAreaMonitorInfo>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:92
// [-2] QList<QGeoAreaMonitorInfo> activeMonitors(const QGeoShape &)
extern "C" Q_DECL_EXPORT
QList<QGeoAreaMonitorInfo>* C_ZNK21QGeoAreaMonitorSource14activeMonitorsERK9QGeoShape(void *this_, QGeoShape* lookupArea) {
  auto rv = ((QGeoAreaMonitorSource*)this_)->activeMonitors(*lookupArea);
return new QList<QGeoAreaMonitorInfo>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:95
// [-2] void areaEntered(const QGeoAreaMonitorInfo &, const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void C_ZN21QGeoAreaMonitorSource11areaEnteredERK19QGeoAreaMonitorInfoRK16QGeoPositionInfo(void *this_, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update) {
  ((QGeoAreaMonitorSource*)this_)->areaEntered(*monitor, *update);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:96
// [-2] void areaExited(const QGeoAreaMonitorInfo &, const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void C_ZN21QGeoAreaMonitorSource10areaExitedERK19QGeoAreaMonitorInfoRK16QGeoPositionInfo(void *this_, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update) {
  ((QGeoAreaMonitorSource*)this_)->areaExited(*monitor, *update);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:97
// [-2] void monitorExpired(const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
void C_ZN21QGeoAreaMonitorSource14monitorExpiredERK19QGeoAreaMonitorInfo(void *this_, QGeoAreaMonitorInfo* monitor) {
  ((QGeoAreaMonitorSource*)this_)->monitorExpired(*monitor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorsource.h:98
// [-2] void error(QGeoAreaMonitorSource::Error)
extern "C" Q_DECL_EXPORT
void C_ZN21QGeoAreaMonitorSource5errorENS_5ErrorE(void *this_, QGeoAreaMonitorSource::Error error) {
  ((QGeoAreaMonitorSource*)this_)->error(error);
}

//  main block end
