//  header block begin
// /usr/include/qt/QtMultimedia/qcameraexposure.h
#ifndef protected
#define protected public
#endif
#include <qcameraexposure.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraExposure is pure virtual: false
// QCameraExposure has virtual projected: false
//  header block end

//  main block begin

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCameraExposure10metaObjectEv(void *this_) {
  return (void*)((QCameraExposure*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:113
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCameraExposure11isAvailableEv(void *this_) {
  return (bool)((QCameraExposure*)this_)->isAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:115
// [4] QCameraExposure::FlashModes flashMode()
extern "C" Q_DECL_EXPORT
QCameraExposure::FlashModes* C_ZNK15QCameraExposure9flashModeEv(void *this_) {
  auto rv = ((QCameraExposure*)this_)->flashMode();
return new QCameraExposure::FlashModes(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:116
// [1] bool isFlashModeSupported(QCameraExposure::FlashModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCameraExposure20isFlashModeSupportedE6QFlagsINS_9FlashModeEE(void *this_, QFlags<QCameraExposure::FlashMode> mode) {
  return (bool)((QCameraExposure*)this_)->isFlashModeSupported(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:117
// [1] bool isFlashReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCameraExposure12isFlashReadyEv(void *this_) {
  return (bool)((QCameraExposure*)this_)->isFlashReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:119
// [4] QCameraExposure::ExposureMode exposureMode()
extern "C" Q_DECL_EXPORT
QCameraExposure::ExposureMode C_ZNK15QCameraExposure12exposureModeEv(void *this_) {
  return (QCameraExposure::ExposureMode)((QCameraExposure*)this_)->exposureMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:120
// [1] bool isExposureModeSupported(QCameraExposure::ExposureMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCameraExposure23isExposureModeSupportedENS_12ExposureModeE(void *this_, QCameraExposure::ExposureMode mode) {
  return (bool)((QCameraExposure*)this_)->isExposureModeSupported(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:122
// [8] qreal exposureCompensation()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QCameraExposure20exposureCompensationEv(void *this_) {
  return (qreal)((QCameraExposure*)this_)->exposureCompensation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:124
// [4] QCameraExposure::MeteringMode meteringMode()
extern "C" Q_DECL_EXPORT
QCameraExposure::MeteringMode C_ZNK15QCameraExposure12meteringModeEv(void *this_) {
  return (QCameraExposure::MeteringMode)((QCameraExposure*)this_)->meteringMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:125
// [1] bool isMeteringModeSupported(QCameraExposure::MeteringMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCameraExposure23isMeteringModeSupportedENS_12MeteringModeE(void *this_, QCameraExposure::MeteringMode mode) {
  return (bool)((QCameraExposure*)this_)->isMeteringModeSupported(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:127
// [16] QPointF spotMeteringPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCameraExposure17spotMeteringPointEv(void *this_) {
  auto rv = ((QCameraExposure*)this_)->spotMeteringPoint();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:128
// [-2] void setSpotMeteringPoint(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure20setSpotMeteringPointERK7QPointF(void *this_, QPointF* point) {
  ((QCameraExposure*)this_)->setSpotMeteringPoint(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:130
// [4] int isoSensitivity()
extern "C" Q_DECL_EXPORT
int C_ZNK15QCameraExposure14isoSensitivityEv(void *this_) {
  return (int)((QCameraExposure*)this_)->isoSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:131
// [8] qreal aperture()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QCameraExposure8apertureEv(void *this_) {
  return (qreal)((QCameraExposure*)this_)->aperture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:132
// [8] qreal shutterSpeed()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QCameraExposure12shutterSpeedEv(void *this_) {
  return (qreal)((QCameraExposure*)this_)->shutterSpeed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:134
// [4] int requestedIsoSensitivity()
extern "C" Q_DECL_EXPORT
int C_ZNK15QCameraExposure23requestedIsoSensitivityEv(void *this_) {
  return (int)((QCameraExposure*)this_)->requestedIsoSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:135
// [8] qreal requestedAperture()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QCameraExposure17requestedApertureEv(void *this_) {
  return (qreal)((QCameraExposure*)this_)->requestedAperture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:136
// [8] qreal requestedShutterSpeed()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QCameraExposure21requestedShutterSpeedEv(void *this_) {
  return (qreal)((QCameraExposure*)this_)->requestedShutterSpeed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:143
// [-2] void setFlashMode(QCameraExposure::FlashModes)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure12setFlashModeE6QFlagsINS_9FlashModeEE(void *this_, QFlags<QCameraExposure::FlashMode> mode) {
  ((QCameraExposure*)this_)->setFlashMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:144
// [-2] void setExposureMode(QCameraExposure::ExposureMode)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure15setExposureModeENS_12ExposureModeE(void *this_, QCameraExposure::ExposureMode mode) {
  ((QCameraExposure*)this_)->setExposureMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:145
// [-2] void setMeteringMode(QCameraExposure::MeteringMode)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure15setMeteringModeENS_12MeteringModeE(void *this_, QCameraExposure::MeteringMode mode) {
  ((QCameraExposure*)this_)->setMeteringMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:147
// [-2] void setExposureCompensation(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure23setExposureCompensationEd(void *this_, qreal ev) {
  ((QCameraExposure*)this_)->setExposureCompensation(ev);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:149
// [-2] void setManualIsoSensitivity(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure23setManualIsoSensitivityEi(void *this_, int iso) {
  ((QCameraExposure*)this_)->setManualIsoSensitivity(iso);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:150
// [-2] void setAutoIsoSensitivity()
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure21setAutoIsoSensitivityEv(void *this_) {
  ((QCameraExposure*)this_)->setAutoIsoSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:152
// [-2] void setManualAperture(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure17setManualApertureEd(void *this_, qreal aperture) {
  ((QCameraExposure*)this_)->setManualAperture(aperture);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:153
// [-2] void setAutoAperture()
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure15setAutoApertureEv(void *this_) {
  ((QCameraExposure*)this_)->setAutoAperture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:155
// [-2] void setManualShutterSpeed(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure21setManualShutterSpeedEd(void *this_, qreal seconds) {
  ((QCameraExposure*)this_)->setManualShutterSpeed(seconds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:156
// [-2] void setAutoShutterSpeed()
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure19setAutoShutterSpeedEv(void *this_) {
  ((QCameraExposure*)this_)->setAutoShutterSpeed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:159
// [-2] void flashReady(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure10flashReadyEb(void *this_, bool arg0) {
  ((QCameraExposure*)this_)->flashReady(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:161
// [-2] void apertureChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure15apertureChangedEd(void *this_, qreal arg0) {
  ((QCameraExposure*)this_)->apertureChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:162
// [-2] void apertureRangeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure20apertureRangeChangedEv(void *this_) {
  ((QCameraExposure*)this_)->apertureRangeChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:163
// [-2] void shutterSpeedChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure19shutterSpeedChangedEd(void *this_, qreal arg0) {
  ((QCameraExposure*)this_)->shutterSpeedChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:164
// [-2] void shutterSpeedRangeChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure24shutterSpeedRangeChangedEv(void *this_) {
  ((QCameraExposure*)this_)->shutterSpeedRangeChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:165
// [-2] void isoSensitivityChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure21isoSensitivityChangedEi(void *this_, int arg0) {
  ((QCameraExposure*)this_)->isoSensitivityChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:166
// [-2] void exposureCompensationChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QCameraExposure27exposureCompensationChangedEd(void *this_, qreal arg0) {
  ((QCameraExposure*)this_)->exposureCompensationChanged(arg0);
}

//  main block end
