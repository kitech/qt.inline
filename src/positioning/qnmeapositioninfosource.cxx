//  header block begin
// since 0x050200
// /usr/include/qt/QtPositioning/qnmeapositioninfosource.h
#ifndef protected
#define protected public
#endif
#include <qnmeapositioninfosource.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QNmeaPositionInfoSource is pure virtual: false
// QNmeaPositionInfoSource has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQNmeaPositionInfoSource : public QNmeaPositionInfoSource {
public:
  virtual ~MyQNmeaPositionInfoSource() {}
// void QNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode, QObject *)
MyQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode, QObject * parent) : QNmeaPositionInfoSource(updateMode, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool parsePosInfoFromNmeaData(const char *, int, QGeoPositionInfo *, bool *)
  virtual bool parsePosInfoFromNmeaData(const char * data, int size, QGeoPositionInfo * posInfo, bool * hasFix) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"parsePosInfoFromNmeaData", &handled, 4, (uint64_t)data, (uint64_t)size, (uint64_t)posInfo, (uint64_t)hasFix, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
  }
  }

};

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
