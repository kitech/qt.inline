//  header block begin
// since 0x050500
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h
#ifndef protected
#define protected public
#endif
#include <qcameraviewfindersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraViewfinderSettings is pure virtual: false
// QCameraViewfinderSettings has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraViewfinderSettings : public QCameraViewfinderSettings {
public:
  virtual ~MyQCameraViewfinderSettings() {}
// void QCameraViewfinderSettings()
MyQCameraViewfinderSettings() : QCameraViewfinderSettings() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:56
// [-2] void QCameraViewfinderSettings()
extern "C" Q_DECL_EXPORT
void* C_ZN25QCameraViewfinderSettingsC2Ev() {
  return  new QCameraViewfinderSettings();
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
