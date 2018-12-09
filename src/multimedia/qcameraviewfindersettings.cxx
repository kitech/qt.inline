//  header block begin

// since 0x050500
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraviewfindersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettings is pure virtual: false
// QCameraViewfinderSettings has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraViewfinderSettings_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraViewfinderSettings_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraViewfinderSettings_t qt_meta_stringdata_MyQCameraViewfinderSettings = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQCameraViewfinderSettings"
  },
  "MyQCameraViewfinderSettings"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraViewfinderSettings[] = {
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
class Q_DECL_EXPORT MyQCameraViewfinderSettings : public QCameraViewfinderSettings {
public:
  virtual ~MyQCameraViewfinderSettings() {}
// void QCameraViewfinderSettings()
MyQCameraViewfinderSettings() : QCameraViewfinderSettings() {}
// void QCameraViewfinderSettings(const QCameraViewfinderSettings &)
MyQCameraViewfinderSettings(const QCameraViewfinderSettings & other) : QCameraViewfinderSettings(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:56
// [-2] void QCameraViewfinderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN25QCameraViewfinderSettingsC2Ev() {
  return  new QCameraViewfinderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:57
// [-2] void QCameraViewfinderSettings(const QCameraViewfinderSettings &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QCameraViewfinderSettingsC2ERKS_(QCameraViewfinderSettings* other) {
  return  new QCameraViewfinderSettings(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:59
// [-2] void ~QCameraViewfinderSettings()
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettingsD2Ev(void *this_) {
  delete (QCameraViewfinderSettings*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:61
// [8] QCameraViewfinderSettings & operator=(const QCameraViewfinderSettings &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QCameraViewfinderSettingsaSERKS_(void *this_, QCameraViewfinderSettings* other) {
  auto& rv = ((QCameraViewfinderSettings*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:63
// [8] QCameraViewfinderSettings & operator=(QCameraViewfinderSettings &&)
extern "C" Q_DECL_EXPORT
void* C_ZN25QCameraViewfinderSettingsaSEOS_(void *this_, QCameraViewfinderSettings && other) {
  auto& rv = ((QCameraViewfinderSettings*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:67
// [-2] void swap(QCameraViewfinderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings4swapERS_(void *this_, QCameraViewfinderSettings* other) {
  ((QCameraViewfinderSettings*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:70
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK25QCameraViewfinderSettings6isNullEv(void *this_) {
  return (bool)((QCameraViewfinderSettings*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:72
// [8] QSize resolution()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QCameraViewfinderSettings10resolutionEv(void *this_) {
  auto rv = ((QCameraViewfinderSettings*)this_)->resolution();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:73
// [-2] void setResolution(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings13setResolutionERK5QSize(void *this_, QSize* arg0) {
  ((QCameraViewfinderSettings*)this_)->setResolution(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:74
// [-2] void setResolution(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings13setResolutionEii(void *this_, int width, int height) {
  ((QCameraViewfinderSettings*)this_)->setResolution(width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:77
// [8] qreal minimumFrameRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QCameraViewfinderSettings16minimumFrameRateEv(void *this_) {
  return (qreal)((QCameraViewfinderSettings*)this_)->minimumFrameRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:78
// [-2] void setMinimumFrameRate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings19setMinimumFrameRateEd(void *this_, qreal rate) {
  ((QCameraViewfinderSettings*)this_)->setMinimumFrameRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:80
// [8] qreal maximumFrameRate()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QCameraViewfinderSettings16maximumFrameRateEv(void *this_) {
  return (qreal)((QCameraViewfinderSettings*)this_)->maximumFrameRate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:81
// [-2] void setMaximumFrameRate(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings19setMaximumFrameRateEd(void *this_, qreal rate) {
  ((QCameraViewfinderSettings*)this_)->setMaximumFrameRate(rate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:83
// [4] QVideoFrame::PixelFormat pixelFormat()
extern "C" Q_DECL_EXPORT
QVideoFrame::PixelFormat C_ZNK25QCameraViewfinderSettings11pixelFormatEv(void *this_) {
  return (QVideoFrame::PixelFormat)((QCameraViewfinderSettings*)this_)->pixelFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:84
// [-2] void setPixelFormat(QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings14setPixelFormatEN11QVideoFrame11PixelFormatE(void *this_, QVideoFrame::PixelFormat format) {
  ((QCameraViewfinderSettings*)this_)->setPixelFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:86
// [8] QSize pixelAspectRatio()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QCameraViewfinderSettings16pixelAspectRatioEv(void *this_) {
  auto rv = ((QCameraViewfinderSettings*)this_)->pixelAspectRatio();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:87
// [-2] void setPixelAspectRatio(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings19setPixelAspectRatioERK5QSize(void *this_, QSize* ratio) {
  ((QCameraViewfinderSettings*)this_)->setPixelAspectRatio(*ratio);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:88
// [-2] void setPixelAspectRatio(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN25QCameraViewfinderSettings19setPixelAspectRatioEii(void *this_, int horizontal, int vertical) {
  ((QCameraViewfinderSettings*)this_)->setPixelAspectRatio(horizontal, vertical);
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
