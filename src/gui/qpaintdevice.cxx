//  header block begin

// /usr/include/qt/QtGui/qpaintdevice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintDevice is pure virtual: true
// QPaintDevice has virtual projected: false
//  header block end

//  main block begin


// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:72
// [-2] void ~QPaintDevice()
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintDeviceD2Ev(void *this_) {
  delete (QPaintDevice*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:74
// [4] int devType()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice7devTypeEv(void *this_) {
  return (int)((QPaintDevice*)this_)->devType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:75
// [1] bool paintingActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPaintDevice14paintingActiveEv(void *this_) {
  return (bool)((QPaintDevice*)this_)->paintingActive();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:76
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPaintDevice11paintEngineEv(void *this_) {
  return (void*)((QPaintDevice*)this_)->paintEngine();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:78
// [4] int width()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice5widthEv(void *this_) {
  return (int)((QPaintDevice*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:79
// [4] int height()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice6heightEv(void *this_) {
  return (int)((QPaintDevice*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:80
// [4] int widthMM()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice7widthMMEv(void *this_) {
  return (int)((QPaintDevice*)this_)->widthMM();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:81
// [4] int heightMM()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice8heightMMEv(void *this_) {
  return (int)((QPaintDevice*)this_)->heightMM();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:82
// [4] int logicalDpiX()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice11logicalDpiXEv(void *this_) {
  return (int)((QPaintDevice*)this_)->logicalDpiX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:83
// [4] int logicalDpiY()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice11logicalDpiYEv(void *this_) {
  return (int)((QPaintDevice*)this_)->logicalDpiY();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:84
// [4] int physicalDpiX()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice12physicalDpiXEv(void *this_) {
  return (int)((QPaintDevice*)this_)->physicalDpiX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:85
// [4] int physicalDpiY()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice12physicalDpiYEv(void *this_) {
  return (int)((QPaintDevice*)this_)->physicalDpiY();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:86
// [4] int devicePixelRatio()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice16devicePixelRatioEv(void *this_) {
  return (int)((QPaintDevice*)this_)->devicePixelRatio();
}

// Public inline Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qpaintdevice.h:87
// [8] qreal devicePixelRatioF()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QPaintDevice17devicePixelRatioFEv(void *this_) {
  return (qreal)((QPaintDevice*)this_)->devicePixelRatioF();
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:88
// [4] int colorCount()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice10colorCountEv(void *this_) {
  return (int)((QPaintDevice*)this_)->colorCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:89
// [4] int depth()
extern "C" Q_DECL_EXPORT
int C_ZNK12QPaintDevice5depthEv(void *this_) {
  return (int)((QPaintDevice*)this_)->depth();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:91
// [8] qreal devicePixelRatioFScale()
extern "C" Q_DECL_EXPORT
qreal C_ZN12QPaintDevice22devicePixelRatioFScaleEv() {
  return (qreal)QPaintDevice::devicePixelRatioFScale();
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
