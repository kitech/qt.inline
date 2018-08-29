//  header block begin
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QImageEncoderSettings is pure virtual: false
// QImageEncoderSettings has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQImageEncoderSettings_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageEncoderSettings_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageEncoderSettings_t qt_meta_stringdata_MyQImageEncoderSettings = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQImageEncoderSettings"
  },
  "MyQImageEncoderSettings"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageEncoderSettings[] = {
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
class Q_DECL_EXPORT MyQImageEncoderSettings : public QImageEncoderSettings {
public:
  virtual ~MyQImageEncoderSettings() {}
// void QImageEncoderSettings()
MyQImageEncoderSettings() : QImageEncoderSettings() {}
// void QImageEncoderSettings(const QImageEncoderSettings &)
MyQImageEncoderSettings(const QImageEncoderSettings & other) : QImageEncoderSettings(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:143
// [-2] void QImageEncoderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN21QImageEncoderSettingsC2Ev() {
  return  new QImageEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:144
// [-2] void QImageEncoderSettings(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QImageEncoderSettingsC2ERKS_(QImageEncoderSettings* other) {
  return  new QImageEncoderSettings(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:146
// [-2] void ~QImageEncoderSettings()
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettingsD2Ev(void *this_) {
  delete (QImageEncoderSettings*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:148
// [8] QImageEncoderSettings & operator=(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QImageEncoderSettingsaSERKS_(void *this_, QImageEncoderSettings* other) {
  auto& rv = ((QImageEncoderSettings*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:149
// [1] bool operator==(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QImageEncoderSettingseqERKS_(void *this_, QImageEncoderSettings* other) {
  return (bool)((QImageEncoderSettings*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:150
// [1] bool operator!=(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QImageEncoderSettingsneERKS_(void *this_, QImageEncoderSettings* other) {
  return (bool)((QImageEncoderSettings*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:152
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QImageEncoderSettings6isNullEv(void *this_) {
  return (bool)((QImageEncoderSettings*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:154
// [8] QString codec()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QImageEncoderSettings5codecEv(void *this_) {
  auto rv = ((QImageEncoderSettings*)this_)->codec();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:155
// [-2] void setCodec(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettings8setCodecERK7QString(void *this_, QString* arg0) {
  ((QImageEncoderSettings*)this_)->setCodec(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:157
// [8] QSize resolution()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QImageEncoderSettings10resolutionEv(void *this_) {
  auto rv = ((QImageEncoderSettings*)this_)->resolution();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:158
// [-2] void setResolution(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettings13setResolutionERK5QSize(void *this_, QSize* arg0) {
  ((QImageEncoderSettings*)this_)->setResolution(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:159
// [-2] void setResolution(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettings13setResolutionEii(void *this_, int width, int height) {
  ((QImageEncoderSettings*)this_)->setResolution(width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:161
// [4] QMultimedia::EncodingQuality quality()
extern "C" Q_DECL_EXPORT
QMultimedia::EncodingQuality C_ZNK21QImageEncoderSettings7qualityEv(void *this_) {
  return (QMultimedia::EncodingQuality)((QImageEncoderSettings*)this_)->quality();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:162
// [-2] void setQuality(QMultimedia::EncodingQuality)
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettings10setQualityEN11QMultimedia15EncodingQualityE(void *this_, QMultimedia::EncodingQuality quality) {
  ((QImageEncoderSettings*)this_)->setQuality(quality);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:164
// [16] QVariant encodingOption(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QImageEncoderSettings14encodingOptionERK7QString(void *this_, QString* option) {
  auto rv = ((QImageEncoderSettings*)this_)->encodingOption(*option);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:165
// [8] QVariantMap encodingOptions()
extern "C" Q_DECL_EXPORT
QVariantMap* C_ZNK21QImageEncoderSettings15encodingOptionsEv(void *this_) {
  auto rv = ((QImageEncoderSettings*)this_)->encodingOptions();
return new QVariantMap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:166
// [-2] void setEncodingOption(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettings17setEncodingOptionERK7QStringRK8QVariant(void *this_, QString* option, QVariant* value) {
  ((QImageEncoderSettings*)this_)->setEncodingOption(*option, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:167
// [-2] void setEncodingOptions(const QVariantMap &)
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettings18setEncodingOptionsERK4QMapI7QString8QVariantE(void *this_, const QVariantMap & options) {
  ((QImageEncoderSettings*)this_)->setEncodingOptions(options);
}

//  main block end
