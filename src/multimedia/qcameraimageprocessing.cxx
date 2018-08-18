//  header block begin
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h
#ifndef protected
#define protected public
#endif
#include <qcameraimageprocessing.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageProcessing is pure virtual: false
// QCameraImageProcessing has virtual projected: false
//  header block end

//  main block begin

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QCameraImageProcessing10metaObjectEv(void *this_) {
  return (void*)((QCameraImageProcessing*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraImageProcessing11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraImageProcessing*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QCameraImageProcessing11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraImageProcessing*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraImageProcessing2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraImageProcessing::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraImageProcessing6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraImageProcessing::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:91
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraImageProcessing11isAvailableEv(void *this_) {
  return (bool)((QCameraImageProcessing*)this_)->isAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:93
// [4] QCameraImageProcessing::WhiteBalanceMode whiteBalanceMode()
extern "C" Q_DECL_EXPORT
QCameraImageProcessing::WhiteBalanceMode C_ZNK22QCameraImageProcessing16whiteBalanceModeEv(void *this_) {
  return (QCameraImageProcessing::WhiteBalanceMode)((QCameraImageProcessing*)this_)->whiteBalanceMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:94
// [-2] void setWhiteBalanceMode(QCameraImageProcessing::WhiteBalanceMode)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing19setWhiteBalanceModeENS_16WhiteBalanceModeE(void *this_, QCameraImageProcessing::WhiteBalanceMode mode) {
  ((QCameraImageProcessing*)this_)->setWhiteBalanceMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:95
// [1] bool isWhiteBalanceModeSupported(QCameraImageProcessing::WhiteBalanceMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraImageProcessing27isWhiteBalanceModeSupportedENS_16WhiteBalanceModeE(void *this_, QCameraImageProcessing::WhiteBalanceMode mode) {
  return (bool)((QCameraImageProcessing*)this_)->isWhiteBalanceModeSupported(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:97
// [8] qreal manualWhiteBalance()
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QCameraImageProcessing18manualWhiteBalanceEv(void *this_) {
  return (qreal)((QCameraImageProcessing*)this_)->manualWhiteBalance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:98
// [-2] void setManualWhiteBalance(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing21setManualWhiteBalanceEd(void *this_, qreal colorTemperature) {
  ((QCameraImageProcessing*)this_)->setManualWhiteBalance(colorTemperature);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:100
// [8] qreal brightness()
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QCameraImageProcessing10brightnessEv(void *this_) {
  return (qreal)((QCameraImageProcessing*)this_)->brightness();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:101
// [-2] void setBrightness(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing13setBrightnessEd(void *this_, qreal value) {
  ((QCameraImageProcessing*)this_)->setBrightness(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:103
// [8] qreal contrast()
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QCameraImageProcessing8contrastEv(void *this_) {
  return (qreal)((QCameraImageProcessing*)this_)->contrast();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:104
// [-2] void setContrast(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing11setContrastEd(void *this_, qreal value) {
  ((QCameraImageProcessing*)this_)->setContrast(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:106
// [8] qreal saturation()
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QCameraImageProcessing10saturationEv(void *this_) {
  return (qreal)((QCameraImageProcessing*)this_)->saturation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:107
// [-2] void setSaturation(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing13setSaturationEd(void *this_, qreal value) {
  ((QCameraImageProcessing*)this_)->setSaturation(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:109
// [8] qreal sharpeningLevel()
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QCameraImageProcessing15sharpeningLevelEv(void *this_) {
  return (qreal)((QCameraImageProcessing*)this_)->sharpeningLevel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:110
// [-2] void setSharpeningLevel(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing18setSharpeningLevelEd(void *this_, qreal value) {
  ((QCameraImageProcessing*)this_)->setSharpeningLevel(value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:112
// [8] qreal denoisingLevel()
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QCameraImageProcessing14denoisingLevelEv(void *this_) {
  return (qreal)((QCameraImageProcessing*)this_)->denoisingLevel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:113
// [-2] void setDenoisingLevel(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing17setDenoisingLevelEd(void *this_, qreal value) {
  ((QCameraImageProcessing*)this_)->setDenoisingLevel(value);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:115
// [4] QCameraImageProcessing::ColorFilter colorFilter()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QCameraImageProcessing::ColorFilter C_ZNK22QCameraImageProcessing11colorFilterEv(void *this_) {
  return (QCameraImageProcessing::ColorFilter)((QCameraImageProcessing*)this_)->colorFilter();
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:116
// [-2] void setColorFilter(QCameraImageProcessing::ColorFilter)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraImageProcessing14setColorFilterENS_11ColorFilterE(void *this_, QCameraImageProcessing::ColorFilter filter) {
  ((QCameraImageProcessing*)this_)->setColorFilter(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:117
// [1] bool isColorFilterSupported(QCameraImageProcessing::ColorFilter)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraImageProcessing22isColorFilterSupportedENS_11ColorFilterE(void *this_, QCameraImageProcessing::ColorFilter filter) {
  return (bool)((QCameraImageProcessing*)this_)->isColorFilterSupported(filter);
}

//  main block end
