//  header block begin
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QImageEncoderSettings is pure virtual: false
// QImageEncoderSettings has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQImageEncoderSettings : public QImageEncoderSettings {
public:
  virtual ~MyQImageEncoderSettings() {}
// void QImageEncoderSettings()
MyQImageEncoderSettings() : QImageEncoderSettings() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:143
// [-2] void QImageEncoderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN21QImageEncoderSettingsC2Ev() {
  return  new QImageEncoderSettings();
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
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:166
// [-2] void setEncodingOption(const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN21QImageEncoderSettings17setEncodingOptionERK7QStringRK8QVariant(void *this_, QString* option, QVariant* value) {
  ((QImageEncoderSettings*)this_)->setEncodingOption(*option, *value);
}

//  main block end
