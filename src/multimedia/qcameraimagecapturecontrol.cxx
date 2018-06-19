//  header block begin
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h
#ifndef protected
#define protected public
#endif
#include <qcameraimagecapturecontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageCaptureControl is pure virtual: true
// QCameraImageCaptureControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraImageCaptureControl : public QCameraImageCaptureControl {
public:
  virtual ~MyQCameraImageCaptureControl() {}
// void QCameraImageCaptureControl(QObject *)
MyQCameraImageCaptureControl(QObject * parent) : QCameraImageCaptureControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK26QCameraImageCaptureControl10metaObjectEv(void *this_) {
  return (void*)((QCameraImageCaptureControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:61
// [-2] void ~QCameraImageCaptureControl()
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControlD2Ev(void *this_) {
  delete (QCameraImageCaptureControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:63
// [1] bool isReadyForCapture()
extern "C" Q_DECL_EXPORT
bool C_ZNK26QCameraImageCaptureControl17isReadyForCaptureEv(void *this_) {
  return (bool)((QCameraImageCaptureControl*)this_)->isReadyForCapture();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:65
// [4] QCameraImageCapture::DriveMode driveMode()
extern "C" Q_DECL_EXPORT
QCameraImageCapture::DriveMode C_ZNK26QCameraImageCaptureControl9driveModeEv(void *this_) {
  return (QCameraImageCapture::DriveMode)((QCameraImageCaptureControl*)this_)->driveMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:66
// [-2] void setDriveMode(QCameraImageCapture::DriveMode)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl12setDriveModeEN19QCameraImageCapture9DriveModeE(void *this_, QCameraImageCapture::DriveMode mode) {
  ((QCameraImageCaptureControl*)this_)->setDriveMode(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:68
// [4] int capture(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN26QCameraImageCaptureControl7captureERK7QString(void *this_, QString* fileName) {
  return (int)((QCameraImageCaptureControl*)this_)->capture(*fileName);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:69
// [-2] void cancelCapture()
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl13cancelCaptureEv(void *this_) {
  ((QCameraImageCaptureControl*)this_)->cancelCapture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:72
// [-2] void readyForCaptureChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl22readyForCaptureChangedEb(void *this_, bool arg0) {
  ((QCameraImageCaptureControl*)this_)->readyForCaptureChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:74
// [-2] void imageExposed(int)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl12imageExposedEi(void *this_, int id) {
  ((QCameraImageCaptureControl*)this_)->imageExposed(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:75
// [-2] void imageCaptured(int, const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl13imageCapturedEiRK6QImage(void *this_, int id, QImage* preview) {
  ((QCameraImageCaptureControl*)this_)->imageCaptured(id, *preview);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:76
// [-2] void imageMetadataAvailable(int, const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl22imageMetadataAvailableEiRK7QStringRK8QVariant(void *this_, int id, QString* key, QVariant* value) {
  ((QCameraImageCaptureControl*)this_)->imageMetadataAvailable(id, *key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:77
// [-2] void imageAvailable(int, const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl14imageAvailableEiRK11QVideoFrame(void *this_, int id, QVideoFrame* buffer) {
  ((QCameraImageCaptureControl*)this_)->imageAvailable(id, *buffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:78
// [-2] void imageSaved(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl10imageSavedEiRK7QString(void *this_, int id, QString* fileName) {
  ((QCameraImageCaptureControl*)this_)->imageSaved(id, *fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapturecontrol.h:80
// [-2] void error(int, int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN26QCameraImageCaptureControl5errorEiiRK7QString(void *this_, int id, int error, QString* errorString) {
  ((QCameraImageCaptureControl*)this_)->error(id, error, *errorString);
}

//  main block end
