//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderHint is pure virtual: false
// QMediaServiceProviderHint has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaServiceProviderHint_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceProviderHint_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceProviderHint_t qt_meta_stringdata_MyQMediaServiceProviderHint = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQMediaServiceProviderHint"
  },
  "MyQMediaServiceProviderHint"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceProviderHint[] = {
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
class Q_DECL_EXPORT MyQMediaServiceProviderHint : public QMediaServiceProviderHint {
public:
  virtual ~MyQMediaServiceProviderHint() {}
// void QMediaServiceProviderHint()
MyQMediaServiceProviderHint() : QMediaServiceProviderHint() {}
// void QMediaServiceProviderHint(const QString &, const QStringList &)
MyQMediaServiceProviderHint(const QString & mimeType, const QStringList & codecs) : QMediaServiceProviderHint(mimeType, codecs) {}
// void QMediaServiceProviderHint(const QByteArray &)
MyQMediaServiceProviderHint(const QByteArray & device) : QMediaServiceProviderHint(device) {}
// void QMediaServiceProviderHint(QCamera::Position)
MyQMediaServiceProviderHint(QCamera::Position position) : QMediaServiceProviderHint(position) {}
// void QMediaServiceProviderHint(QMediaServiceProviderHint::Features)
MyQMediaServiceProviderHint(QFlags<QMediaServiceProviderHint::Feature> features) : QMediaServiceProviderHint(features) {}
// void QMediaServiceProviderHint(const QMediaServiceProviderHint &)
MyQMediaServiceProviderHint(const QMediaServiceProviderHint & other) : QMediaServiceProviderHint(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:74
// [-2] void QMediaServiceProviderHint()
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaServiceProviderHintC2Ev() {
  return  new QMediaServiceProviderHint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:75
// [-2] void QMediaServiceProviderHint(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaServiceProviderHintC2ERK7QStringRK11QStringList(QString* mimeType, QStringList* codecs) {
  return  new QMediaServiceProviderHint(*mimeType, *codecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:76
// [-2] void QMediaServiceProviderHint(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaServiceProviderHintC2ERK10QByteArray(QByteArray* device) {
  return  new QMediaServiceProviderHint(*device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:77
// [-2] void QMediaServiceProviderHint(QCamera::Position)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaServiceProviderHintC2EN7QCamera8PositionE(QCamera::Position position) {
  return  new QMediaServiceProviderHint(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:78
// [-2] void QMediaServiceProviderHint(QMediaServiceProviderHint::Features)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaServiceProviderHintC2E6QFlagsINS_7FeatureEE(QFlags<QMediaServiceProviderHint::Feature> features) {
  return  new QMediaServiceProviderHint(features);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:79
// [-2] void QMediaServiceProviderHint(const QMediaServiceProviderHint &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaServiceProviderHintC2ERKS_(QMediaServiceProviderHint* other) {
  return  new QMediaServiceProviderHint(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:80
// [-2] void ~QMediaServiceProviderHint()
extern "C" Q_DECL_EXPORT
void C_ZN25QMediaServiceProviderHintD2Ev(void *this_) {
  delete (QMediaServiceProviderHint*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:82
// [8] QMediaServiceProviderHint & operator=(const QMediaServiceProviderHint &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QMediaServiceProviderHintaSERKS_(void *this_, QMediaServiceProviderHint* other) {
  auto& rv = ((QMediaServiceProviderHint*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:84
// [1] bool operator==(const QMediaServiceProviderHint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK25QMediaServiceProviderHinteqERKS_(void *this_, QMediaServiceProviderHint* other) {
  return (bool)((QMediaServiceProviderHint*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:85
// [1] bool operator!=(const QMediaServiceProviderHint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK25QMediaServiceProviderHintneERKS_(void *this_, QMediaServiceProviderHint* other) {
  return (bool)((QMediaServiceProviderHint*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:87
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK25QMediaServiceProviderHint6isNullEv(void *this_) {
  return (bool)((QMediaServiceProviderHint*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:89
// [4] QMediaServiceProviderHint::Type type()
extern "C" Q_DECL_EXPORT
QMediaServiceProviderHint::Type C_ZNK25QMediaServiceProviderHint4typeEv(void *this_) {
  return (QMediaServiceProviderHint::Type)((QMediaServiceProviderHint*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:91
// [8] QString mimeType()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QMediaServiceProviderHint8mimeTypeEv(void *this_) {
  auto rv = ((QMediaServiceProviderHint*)this_)->mimeType();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:92
// [8] QStringList codecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QMediaServiceProviderHint6codecsEv(void *this_) {
  auto rv = ((QMediaServiceProviderHint*)this_)->codecs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:94
// [8] QByteArray device()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QMediaServiceProviderHint6deviceEv(void *this_) {
  auto rv = ((QMediaServiceProviderHint*)this_)->device();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:95
// [4] QCamera::Position cameraPosition()
extern "C" Q_DECL_EXPORT
QCamera::Position C_ZNK25QMediaServiceProviderHint14cameraPositionEv(void *this_) {
  return (QCamera::Position)((QMediaServiceProviderHint*)this_)->cameraPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:97
// [4] QMediaServiceProviderHint::Features features()
extern "C" Q_DECL_EXPORT
QMediaServiceProviderHint::Features* C_ZNK25QMediaServiceProviderHint8featuresEv(void *this_) {
  auto rv = ((QMediaServiceProviderHint*)this_)->features();
return new QMediaServiceProviderHint::Features(rv);
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
