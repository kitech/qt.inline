//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeopositioninfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoPositionInfoSource is pure virtual: true
// QGeoPositionInfoSource has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGeoPositionInfoSource : public QGeoPositionInfoSource {
public:
  virtual ~MyQGeoPositionInfoSource() {}
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:82
// [8] QGeoPositionInfo lastKnownPosition(bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:84
// [4] QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:85
// [4] int minimumUpdateInterval()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:92
// [4] QGeoPositionInfoSource::Error error()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:95
// [-2] void startUpdates()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:96
// [-2] void stopUpdates()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:98
// [-2] void requestUpdate(int)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGeoPositionInfoSource10metaObjectEv(void *this_) {
  return (void*)((QGeoPositionInfoSource*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:51
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGeoPositionInfoSource11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGeoPositionInfoSource*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:51
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QGeoPositionInfoSource11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGeoPositionInfoSource*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:51
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGeoPositionInfoSource2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGeoPositionInfoSource::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:51
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGeoPositionInfoSource6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGeoPositionInfoSource::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:73
// [-2] void QGeoPositionInfoSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGeoPositionInfoSourceC2EP7QObject(QObject * parent) {
  return 0; // new QGeoPositionInfoSource(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:74
// [-2] void ~QGeoPositionInfoSource()
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSourceD2Ev(void *this_) {
  delete (QGeoPositionInfoSource*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:76
// [-2] void setUpdateInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource17setUpdateIntervalEi(void *this_, int msec) {
  ((QGeoPositionInfoSource*)this_)->setUpdateInterval(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:77
// [4] int updateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK22QGeoPositionInfoSource14updateIntervalEv(void *this_) {
  return (int)((QGeoPositionInfoSource*)this_)->updateInterval();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:79
// [-2] void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods)
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource30setPreferredPositioningMethodsE6QFlagsINS_17PositioningMethodEE(void *this_, QFlags<QGeoPositionInfoSource::PositioningMethod> methods) {
  ((QGeoPositionInfoSource*)this_)->setPreferredPositioningMethods(methods);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:80
// [4] QGeoPositionInfoSource::PositioningMethods preferredPositioningMethods()
extern "C" Q_DECL_EXPORT
QGeoPositionInfoSource::PositioningMethods* C_ZNK22QGeoPositionInfoSource27preferredPositioningMethodsEv(void *this_) {
  auto rv = ((QGeoPositionInfoSource*)this_)->preferredPositioningMethods();
return new QGeoPositionInfoSource::PositioningMethods(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:82
// [8] QGeoPositionInfo lastKnownPosition(bool)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGeoPositionInfoSource17lastKnownPositionEb(void *this_, bool fromSatellitePositioningMethodsOnly) {
  auto rv = ((QGeoPositionInfoSource*)this_)->lastKnownPosition(fromSatellitePositioningMethodsOnly);
return new QGeoPositionInfo(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:84
// [4] QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods()
extern "C" Q_DECL_EXPORT
QGeoPositionInfoSource::PositioningMethods* C_ZNK22QGeoPositionInfoSource27supportedPositioningMethodsEv(void *this_) {
  auto rv = ((QGeoPositionInfoSource*)this_)->supportedPositioningMethods();
return new QGeoPositionInfoSource::PositioningMethods(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:85
// [4] int minimumUpdateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK22QGeoPositionInfoSource21minimumUpdateIntervalEv(void *this_) {
  return (int)((QGeoPositionInfoSource*)this_)->minimumUpdateInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:87
// [8] QString sourceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGeoPositionInfoSource10sourceNameEv(void *this_) {
  auto rv = ((QGeoPositionInfoSource*)this_)->sourceName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:89
// [8] QGeoPositionInfoSource * createDefaultSource(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGeoPositionInfoSource19createDefaultSourceEP7QObject(QObject * parent) {
  return (void*)QGeoPositionInfoSource::createDefaultSource(parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:90
// [8] QGeoPositionInfoSource * createSource(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGeoPositionInfoSource12createSourceERK7QStringP7QObject(QString* sourceName, QObject * parent) {
  return (void*)QGeoPositionInfoSource::createSource(*sourceName, parent);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:91
// [8] QStringList availableSources()
extern "C" Q_DECL_EXPORT
void* C_ZN22QGeoPositionInfoSource16availableSourcesEv() {
  auto rv = QGeoPositionInfoSource::availableSources();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:92
// [4] QGeoPositionInfoSource::Error error()
extern "C" Q_DECL_EXPORT
QGeoPositionInfoSource::Error C_ZNK22QGeoPositionInfoSource5errorEv(void *this_) {
  return (QGeoPositionInfoSource::Error)((QGeoPositionInfoSource*)this_)->error();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:95
// [-2] void startUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource12startUpdatesEv(void *this_) {
  ((QGeoPositionInfoSource*)this_)->startUpdates();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:96
// [-2] void stopUpdates()
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource11stopUpdatesEv(void *this_) {
  ((QGeoPositionInfoSource*)this_)->stopUpdates();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:98
// [-2] void requestUpdate(int)
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource13requestUpdateEi(void *this_, int timeout) {
  ((QGeoPositionInfoSource*)this_)->requestUpdate(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:101
// [-2] void positionUpdated(const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource15positionUpdatedERK16QGeoPositionInfo(void *this_, QGeoPositionInfo* update) {
  ((QGeoPositionInfoSource*)this_)->positionUpdated(*update);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:102
// [-2] void updateTimeout()
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource13updateTimeoutEv(void *this_) {
  ((QGeoPositionInfoSource*)this_)->updateTimeout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:103
// [-2] void error(QGeoPositionInfoSource::Error)
extern "C" Q_DECL_EXPORT
void C_ZN22QGeoPositionInfoSource5errorENS_5ErrorE(void *this_, QGeoPositionInfoSource::Error arg0) {
  ((QGeoPositionInfoSource*)this_)->error(arg0);
}

//  main block end
