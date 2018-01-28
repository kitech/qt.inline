//  header block begin
// /usr/include/qt/QtGui/qrasterwindow.h
#include <qrasterwindow.h>
#include <QtGui>

// QRasterWindow is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:60
// [4] int metric(enum QPaintDevice::PaintDeviceMetric)
extern "C"
void* callback_ZNK13QRasterWindow6metricEN12QPaintDevice17PaintDeviceMetricE = 0;
extern "C" void set_callback_ZNK13QRasterWindow6metricEN12QPaintDevice17PaintDeviceMetricE(void*cbfn)
{ callback_ZNK13QRasterWindow6metricEN12QPaintDevice17PaintDeviceMetricE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:61
// [8] QPaintDevice * redirected(class QPoint *)
extern "C"
void* callback_ZNK13QRasterWindow10redirectedEP6QPoint = 0;
extern "C" void set_callback_ZNK13QRasterWindow10redirectedEP6QPoint(void*cbfn)
{ callback_ZNK13QRasterWindow10redirectedEP6QPoint = cbfn; }

class MyQRasterWindow : public QRasterWindow {
public:
MyQRasterWindow(QWindow * parent) : QRasterWindow(parent) {}
// int metric(enum QPaintDevice::PaintDeviceMetric)
// int metric(enum QPaintDevice::PaintDeviceMetric)
virtual int metric(QPaintDevice::PaintDeviceMetric metric) {
  if (callback_ZNK13QRasterWindow6metricEN12QPaintDevice17PaintDeviceMetricE != 0) {
  // callback_ZNK13QRasterWindow6metricEN12QPaintDevice17PaintDeviceMetricE(metric);
}}
// QPaintDevice * redirected(class QPoint *)
// QPaintDevice * redirected(class QPoint *)
virtual QPaintDevice * redirected(QPoint * arg0) {
  if (callback_ZNK13QRasterWindow10redirectedEP6QPoint != 0) {
  // callback_ZNK13QRasterWindow10redirectedEP6QPoint(arg0);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QRasterWindow10metaObjectEv(void *this_) {
  return (void*)((QRasterWindow*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:56
// [-2] void QRasterWindow(class QWindow *)
extern "C"
void* C_ZN13QRasterWindowC1EP7QWindow(QWindow * parent) {
  (MyQRasterWindow*)(0);
  return  new MyQRasterWindow(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:57
// [-2] void ~QRasterWindow()
extern "C"
void C_ZN13QRasterWindowD1Ev(void *this_) {
  delete (QRasterWindow*)(this_);
}
//  main block end
