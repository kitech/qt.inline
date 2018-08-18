//  header block begin
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h
#ifndef protected
#define protected public
#endif
#include <qcameraimagecapture.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageCapture is pure virtual: false
// QCameraImageCapture has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraImageCapture : public QCameraImageCapture {
public:
  virtual ~MyQCameraImageCapture() {}
// void QCameraImageCapture(QMediaObject *, QObject *)
MyQCameraImageCapture(QMediaObject * mediaObject, QObject * parent) : QCameraImageCapture(mediaObject, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool setMediaObject(QMediaObject *)
  virtual bool setMediaObject(QMediaObject * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMediaObject", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCameraImageCapture::setMediaObject(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:138
// [1] bool setMediaObject(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QCameraImageCapture14setMediaObjectEP12QMediaObject(void *this_, QMediaObject * arg0) {
  return (bool)((QCameraImageCapture*)this_)->QCameraImageCapture::setMediaObject(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture10metaObjectEv(void *this_) {
  return (void*)((QCameraImageCapture*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:90
// [-2] void QCameraImageCapture(QMediaObject *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraImageCaptureC2EP12QMediaObjectP7QObject(QMediaObject * mediaObject, QObject * parent) {
  auto _nilp = (MyQCameraImageCapture*)(0);
  return  new MyQCameraImageCapture(mediaObject, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:91
// [-2] void ~QCameraImageCapture()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCaptureD2Ev(void *this_) {
  delete (QCameraImageCapture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:93
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraImageCapture11isAvailableEv(void *this_) {
  return (bool)((QCameraImageCapture*)this_)->isAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:94
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK19QCameraImageCapture12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QCameraImageCapture*)this_)->availability();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:96
// [8] QMediaObject * mediaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture11mediaObjectEv(void *this_) {
  return (void*)((QCameraImageCapture*)this_)->mediaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:98
// [4] QCameraImageCapture::Error error()
extern "C" Q_DECL_EXPORT
QCameraImageCapture::Error C_ZNK19QCameraImageCapture5errorEv(void *this_) {
  return (QCameraImageCapture::Error)((QCameraImageCapture*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:99
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture11errorStringEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:101
// [1] bool isReadyForCapture()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraImageCapture17isReadyForCaptureEv(void *this_) {
  return (bool)((QCameraImageCapture*)this_)->isReadyForCapture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:103
// [8] QStringList supportedImageCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture20supportedImageCodecsEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->supportedImageCodecs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:104
// [8] QString imageCodecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture21imageCodecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QCameraImageCapture*)this_)->imageCodecDescription(*codecName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:106
// [8] QList<QSize> supportedResolutions(const QImageEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK19QCameraImageCapture20supportedResolutionsERK21QImageEncoderSettingsPb(void *this_, QImageEncoderSettings* settings, bool * continuous) {
  auto rv = ((QCameraImageCapture*)this_)->supportedResolutions(*settings, continuous);
return new QList<QSize>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:109
// [8] QImageEncoderSettings encodingSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture16encodingSettingsEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->encodingSettings();
return new QImageEncoderSettings(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:110
// [-2] void setEncodingSettings(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture19setEncodingSettingsERK21QImageEncoderSettings(void *this_, QImageEncoderSettings* settings) {
  ((QCameraImageCapture*)this_)->setEncodingSettings(*settings);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:113
// [4] QVideoFrame::PixelFormat bufferFormat()
extern "C" Q_DECL_EXPORT
QVideoFrame::PixelFormat C_ZNK19QCameraImageCapture12bufferFormatEv(void *this_) {
  return (QVideoFrame::PixelFormat)((QCameraImageCapture*)this_)->bufferFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:114
// [-2] void setBufferFormat(const QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture15setBufferFormatEN11QVideoFrame11PixelFormatE(void *this_, const QVideoFrame::PixelFormat format) {
  ((QCameraImageCapture*)this_)->setBufferFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:116
// [1] bool isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraImageCapture29isCaptureDestinationSupportedE6QFlagsINS_18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  return (bool)((QCameraImageCapture*)this_)->isCaptureDestinationSupported(destination);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:117
// [4] QCameraImageCapture::CaptureDestinations captureDestination()
extern "C" Q_DECL_EXPORT
QCameraImageCapture::CaptureDestinations* C_ZNK19QCameraImageCapture18captureDestinationEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->captureDestination();
return new QCameraImageCapture::CaptureDestinations(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:118
// [-2] void setCaptureDestination(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture21setCaptureDestinationE6QFlagsINS_18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  ((QCameraImageCapture*)this_)->setCaptureDestination(destination);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:121
// [4] int capture(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN19QCameraImageCapture7captureERK7QString(void *this_, QString* location) {
  return (int)((QCameraImageCapture*)this_)->capture(*location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:122
// [-2] void cancelCapture()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture13cancelCaptureEv(void *this_) {
  ((QCameraImageCapture*)this_)->cancelCapture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:125
// [-2] void error(int, QCameraImageCapture::Error, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture5errorEiNS_5ErrorERK7QString(void *this_, int id, QCameraImageCapture::Error error, QString* errorString) {
  ((QCameraImageCapture*)this_)->error(id, error, *errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:127
// [-2] void readyForCaptureChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture22readyForCaptureChangedEb(void *this_, bool arg0) {
  ((QCameraImageCapture*)this_)->readyForCaptureChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:128
// [-2] void bufferFormatChanged(QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture19bufferFormatChangedEN11QVideoFrame11PixelFormatE(void *this_, QVideoFrame::PixelFormat arg0) {
  ((QCameraImageCapture*)this_)->bufferFormatChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:129
// [-2] void captureDestinationChanged(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture25captureDestinationChangedE6QFlagsINS_18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> arg0) {
  ((QCameraImageCapture*)this_)->captureDestinationChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:131
// [-2] void imageExposed(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture12imageExposedEi(void *this_, int id) {
  ((QCameraImageCapture*)this_)->imageExposed(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:132
// [-2] void imageCaptured(int, const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture13imageCapturedEiRK6QImage(void *this_, int id, QImage* preview) {
  ((QCameraImageCapture*)this_)->imageCaptured(id, *preview);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:133
// [-2] void imageMetadataAvailable(int, const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture22imageMetadataAvailableEiRK7QStringRK8QVariant(void *this_, int id, QString* key, QVariant* value) {
  ((QCameraImageCapture*)this_)->imageMetadataAvailable(id, *key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:134
// [-2] void imageAvailable(int, const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture14imageAvailableEiRK11QVideoFrame(void *this_, int id, QVideoFrame* image) {
  ((QCameraImageCapture*)this_)->imageAvailable(id, *image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:135
// [-2] void imageSaved(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture10imageSavedEiRK7QString(void *this_, int id, QString* fileName) {
  ((QCameraImageCapture*)this_)->imageSaved(id, *fileName);
}

//  main block end
