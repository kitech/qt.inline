//  header block begin
// /usr/include/qt/QtMultimedia/qmediaobject.h
#ifndef protected
#define protected public
#endif
#include <qmediaobject.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaObject is pure virtual: false
// QMediaObject has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaObject : public QMediaObject {
public:
  virtual ~MyQMediaObject() {}
// void QMediaObject(QObject *, QMediaService *)
MyQMediaObject(QObject * parent, QMediaService * service) : QMediaObject(parent, service) {}
// Protected Visibility=Default Availability=Available
// void addPropertyWatch(const QByteArray &)
  virtual void addPropertyWatch(const QByteArray & name) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"addPropertyWatch", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMediaObject::addPropertyWatch(name);
  }
  }

// Protected Visibility=Default Availability=Available
// void removePropertyWatch(const QByteArray &)
  virtual void removePropertyWatch(const QByteArray & name) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"removePropertyWatch", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMediaObject::removePropertyWatch(name);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:93
// [-2] void addPropertyWatch(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject16addPropertyWatchERK10QByteArray(void *this_, QByteArray* name) {
  ((QMediaObject*)this_)->QMediaObject::addPropertyWatch(*name);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:94
// [-2] void removePropertyWatch(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject19removePropertyWatchERK10QByteArray(void *this_, QByteArray* name) {
  ((QMediaObject*)this_)->QMediaObject::removePropertyWatch(*name);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject10metaObjectEv(void *this_) {
  return (void*)((QMediaObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:61
// [-2] void ~QMediaObject()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObjectD2Ev(void *this_) {
  delete (QMediaObject*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:63
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaObject11isAvailableEv(void *this_) {
  return (bool)((QMediaObject*)this_)->isAvailable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:64
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK12QMediaObject12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QMediaObject*)this_)->availability();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:66
// [8] QMediaService * service()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject7serviceEv(void *this_) {
  return (void*)((QMediaObject*)this_)->service();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:68
// [4] int notifyInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK12QMediaObject14notifyIntervalEv(void *this_) {
  return (int)((QMediaObject*)this_)->notifyInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:69
// [-2] void setNotifyInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject17setNotifyIntervalEi(void *this_, int milliSeconds) {
  ((QMediaObject*)this_)->setNotifyInterval(milliSeconds);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:71
// [1] bool bind(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QMediaObject4bindEP7QObject(void *this_, QObject * arg0) {
  return (bool)((QMediaObject*)this_)->bind(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:72
// [-2] void unbind(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject6unbindEP7QObject(void *this_, QObject * arg0) {
  ((QMediaObject*)this_)->unbind(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:74
// [1] bool isMetaDataAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QMediaObject19isMetaDataAvailableEv(void *this_) {
  return (bool)((QMediaObject*)this_)->isMetaDataAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:76
// [16] QVariant metaData(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject8metaDataERK7QString(void *this_, QString* key) {
  auto rv = ((QMediaObject*)this_)->metaData(*key);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:77
// [8] QStringList availableMetaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMediaObject17availableMetaDataEv(void *this_) {
  auto rv = ((QMediaObject*)this_)->availableMetaData();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:80
// [-2] void notifyIntervalChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject21notifyIntervalChangedEi(void *this_, int milliSeconds) {
  ((QMediaObject*)this_)->notifyIntervalChanged(milliSeconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:82
// [-2] void metaDataAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject24metaDataAvailableChangedEb(void *this_, bool available) {
  ((QMediaObject*)this_)->metaDataAvailableChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:83
// [-2] void metaDataChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject15metaDataChangedEv(void *this_) {
  ((QMediaObject*)this_)->metaDataChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:84
// [-2] void metaDataChanged(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject15metaDataChangedERK7QStringRK8QVariant(void *this_, QString* key, QVariant* value) {
  ((QMediaObject*)this_)->metaDataChanged(*key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:86
// [-2] void availabilityChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject19availabilityChangedEb(void *this_, bool available) {
  ((QMediaObject*)this_)->availabilityChanged(available);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaobject.h:87
// [-2] void availabilityChanged(QMultimedia::AvailabilityStatus)
extern "C" Q_DECL_EXPORT
void C_ZN12QMediaObject19availabilityChangedEN11QMultimedia18AvailabilityStatusE(void *this_, QMultimedia::AvailabilityStatus availability) {
  ((QMediaObject*)this_)->availabilityChanged(availability);
}

//  main block end
