//  header block begin
// /usr/include/qt/QtGui/qpaintdevice.h
#include <qpaintdevice.h>
#include <QtGui>

// QPaintDevice is pure virtual: true
// QPaintDevice has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:93
// [-2] void QPaintDevice()
extern "C"
void* callback_ZN12QPaintDeviceC1Ev = 0;
extern "C" void set_callback_ZN12QPaintDeviceC1Ev(void*cbfn)
{ callback_ZN12QPaintDeviceC1Ev = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:94
// [4] int metric(enum QPaintDevice::PaintDeviceMetric)
extern "C"
void* callback_ZNK12QPaintDevice6metricENS_17PaintDeviceMetricE = 0;
extern "C" void set_callback_ZNK12QPaintDevice6metricENS_17PaintDeviceMetricE(void*cbfn)
{ callback_ZNK12QPaintDevice6metricENS_17PaintDeviceMetricE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:95
// [-2] void initPainter(class QPainter *)
extern "C"
void* callback_ZNK12QPaintDevice11initPainterEP8QPainter = 0;
extern "C" void set_callback_ZNK12QPaintDevice11initPainterEP8QPainter(void*cbfn)
{ callback_ZNK12QPaintDevice11initPainterEP8QPainter = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:96
// [8] QPaintDevice * redirected(class QPoint *)
extern "C"
void* callback_ZNK12QPaintDevice10redirectedEP6QPoint = 0;
extern "C" void set_callback_ZNK12QPaintDevice10redirectedEP6QPoint(void*cbfn)
{ callback_ZNK12QPaintDevice10redirectedEP6QPoint = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:97
// [8] QPainter * sharedPainter()
extern "C"
void* callback_ZNK12QPaintDevice13sharedPainterEv = 0;
extern "C" void set_callback_ZNK12QPaintDevice13sharedPainterEv(void*cbfn)
{ callback_ZNK12QPaintDevice13sharedPainterEv = cbfn; }

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:72
// [-2] void ~QPaintDevice()
extern "C"
void C_ZN12QPaintDeviceD2Ev(void *this_) {
  delete (QPaintDevice*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:74
// [4] int devType()
extern "C"
int C_ZNK12QPaintDevice7devTypeEv(void *this_) {
  return (int)((QPaintDevice*)this_)->devType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:75
// [1] bool paintingActive()
extern "C"
bool C_ZNK12QPaintDevice14paintingActiveEv(void *this_) {
  return (bool)((QPaintDevice*)this_)->paintingActive();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:76
// [8] QPaintEngine * paintEngine()
extern "C"
void* C_ZNK12QPaintDevice11paintEngineEv(void *this_) {
  return (void*)((QPaintDevice*)this_)->paintEngine();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:78
// [4] int width()
extern "C"
int C_ZNK12QPaintDevice5widthEv(void *this_) {
  return (int)((QPaintDevice*)this_)->width();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:79
// [4] int height()
extern "C"
int C_ZNK12QPaintDevice6heightEv(void *this_) {
  return (int)((QPaintDevice*)this_)->height();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:80
// [4] int widthMM()
extern "C"
int C_ZNK12QPaintDevice7widthMMEv(void *this_) {
  return (int)((QPaintDevice*)this_)->widthMM();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:81
// [4] int heightMM()
extern "C"
int C_ZNK12QPaintDevice8heightMMEv(void *this_) {
  return (int)((QPaintDevice*)this_)->heightMM();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:82
// [4] int logicalDpiX()
extern "C"
int C_ZNK12QPaintDevice11logicalDpiXEv(void *this_) {
  return (int)((QPaintDevice*)this_)->logicalDpiX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:83
// [4] int logicalDpiY()
extern "C"
int C_ZNK12QPaintDevice11logicalDpiYEv(void *this_) {
  return (int)((QPaintDevice*)this_)->logicalDpiY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:84
// [4] int physicalDpiX()
extern "C"
int C_ZNK12QPaintDevice12physicalDpiXEv(void *this_) {
  return (int)((QPaintDevice*)this_)->physicalDpiX();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:85
// [4] int physicalDpiY()
extern "C"
int C_ZNK12QPaintDevice12physicalDpiYEv(void *this_) {
  return (int)((QPaintDevice*)this_)->physicalDpiY();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:86
// [4] int devicePixelRatio()
extern "C"
int C_ZNK12QPaintDevice16devicePixelRatioEv(void *this_) {
  return (int)((QPaintDevice*)this_)->devicePixelRatio();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:87
// [8] qreal devicePixelRatioF()
extern "C"
qreal C_ZNK12QPaintDevice17devicePixelRatioFEv(void *this_) {
  return (qreal)((QPaintDevice*)this_)->devicePixelRatioF();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:88
// [4] int colorCount()
extern "C"
int C_ZNK12QPaintDevice10colorCountEv(void *this_) {
  return (int)((QPaintDevice*)this_)->colorCount();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:89
// [4] int depth()
extern "C"
int C_ZNK12QPaintDevice5depthEv(void *this_) {
  return (int)((QPaintDevice*)this_)->depth();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevice.h:91
// [8] qreal devicePixelRatioFScale()
extern "C"
qreal C_ZN12QPaintDevice22devicePixelRatioFScaleEv() {
  return (qreal)QPaintDevice::devicePixelRatioFScale();
}
// Private inline Visibility=Default Availability=NotAvailable
// /usr/include/qt/QtGui/qpaintdevice.h:101
// [-2] void QPaintDevice(const class QPaintDevice &)
extern "C"
void* C_ZN12QPaintDeviceC1ERKS_(const QPaintDevice & arg0) {
  return 0; // new QPaintDevice(arg0);
}
//  main block end
