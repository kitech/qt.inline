//  header block begin

// since 0x050200
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgeoareamonitorinfo.h>
#include <QtPositioning>
#include "callback_inherit.h"

// QGeoAreaMonitorInfo is pure virtual: false
// QGeoAreaMonitorInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGeoAreaMonitorInfo_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGeoAreaMonitorInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGeoAreaMonitorInfo_t qt_meta_stringdata_MyQGeoAreaMonitorInfo = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGeoAreaMonitorInfo"
  },
  "MyQGeoAreaMonitorInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGeoAreaMonitorInfo[] = {
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
class Q_DECL_EXPORT MyQGeoAreaMonitorInfo : public QGeoAreaMonitorInfo {
public:
  virtual ~MyQGeoAreaMonitorInfo() {}
// void QGeoAreaMonitorInfo(const QString &)
MyQGeoAreaMonitorInfo(const QString & name) : QGeoAreaMonitorInfo(name) {}
// void QGeoAreaMonitorInfo(const QGeoAreaMonitorInfo &)
MyQGeoAreaMonitorInfo(const QGeoAreaMonitorInfo & other) : QGeoAreaMonitorInfo(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:62
// [-2] void QGeoAreaMonitorInfo(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGeoAreaMonitorInfoC2ERK7QString(QString* name) {
  return  new QGeoAreaMonitorInfo(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:63
// [-2] void QGeoAreaMonitorInfo(const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGeoAreaMonitorInfoC2ERKS_(QGeoAreaMonitorInfo* other) {
  return  new QGeoAreaMonitorInfo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:64
// [-2] void ~QGeoAreaMonitorInfo()
extern "C" Q_DECL_EXPORT
void C_ZN19QGeoAreaMonitorInfoD2Ev(void *this_) {
  delete (QGeoAreaMonitorInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:66
// [8] QGeoAreaMonitorInfo & operator=(const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGeoAreaMonitorInfoaSERKS_(void *this_, QGeoAreaMonitorInfo* other) {
  auto& rv = ((QGeoAreaMonitorInfo*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:68
// [1] bool operator==(const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGeoAreaMonitorInfoeqERKS_(void *this_, QGeoAreaMonitorInfo* other) {
  return (bool)((QGeoAreaMonitorInfo*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:69
// [1] bool operator!=(const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGeoAreaMonitorInfoneERKS_(void *this_, QGeoAreaMonitorInfo* other) {
  return (bool)((QGeoAreaMonitorInfo*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:71
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGeoAreaMonitorInfo4nameEv(void *this_) {
  auto rv = ((QGeoAreaMonitorInfo*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:72
// [-2] void setName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGeoAreaMonitorInfo7setNameERK7QString(void *this_, QString* name) {
  ((QGeoAreaMonitorInfo*)this_)->setName(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:74
// [8] QString identifier()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGeoAreaMonitorInfo10identifierEv(void *this_) {
  auto rv = ((QGeoAreaMonitorInfo*)this_)->identifier();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:75
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGeoAreaMonitorInfo7isValidEv(void *this_) {
  return (bool)((QGeoAreaMonitorInfo*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:77
// [8] QGeoShape area()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGeoAreaMonitorInfo4areaEv(void *this_) {
  auto rv = ((QGeoAreaMonitorInfo*)this_)->area();
return new QGeoShape(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:78
// [-2] void setArea(const QGeoShape &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGeoAreaMonitorInfo7setAreaERK9QGeoShape(void *this_, QGeoShape* newShape) {
  ((QGeoAreaMonitorInfo*)this_)->setArea(*newShape);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:80
// [8] QDateTime expiration()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGeoAreaMonitorInfo10expirationEv(void *this_) {
  auto rv = ((QGeoAreaMonitorInfo*)this_)->expiration();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:81
// [-2] void setExpiration(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGeoAreaMonitorInfo13setExpirationERK9QDateTime(void *this_, QDateTime* expiry) {
  ((QGeoAreaMonitorInfo*)this_)->setExpiration(*expiry);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:83
// [1] bool isPersistent()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QGeoAreaMonitorInfo12isPersistentEv(void *this_) {
  return (bool)((QGeoAreaMonitorInfo*)this_)->isPersistent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:84
// [-2] void setPersistent(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QGeoAreaMonitorInfo13setPersistentEb(void *this_, bool isPersistent) {
  ((QGeoAreaMonitorInfo*)this_)->setPersistent(isPersistent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:86
// [8] QVariantMap notificationParameters()
extern "C" Q_DECL_EXPORT
QVariantMap* C_ZNK19QGeoAreaMonitorInfo22notificationParametersEv(void *this_) {
  auto rv = ((QGeoAreaMonitorInfo*)this_)->notificationParameters();
return new QVariantMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:87
// [-2] void setNotificationParameters(const QVariantMap &)
extern "C" Q_DECL_EXPORT
void C_ZN19QGeoAreaMonitorInfo25setNotificationParametersERK4QMapI7QString8QVariantE(void *this_, const QVariantMap & parameters) {
  ((QGeoAreaMonitorInfo*)this_)->setNotificationParameters(parameters);
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
