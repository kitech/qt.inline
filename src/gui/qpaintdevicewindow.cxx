//  header block begin
// /usr/include/qt/QtGui/qpaintdevicewindow.h
#include <qpaintdevicewindow.h>
#include <QtGui>

// QPaintDeviceWindow is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:69
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN18QPaintDeviceWindow10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN18QPaintDeviceWindow10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN18QPaintDeviceWindow10paintEventEP11QPaintEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:71
// [4] int metric(enum QPaintDevice::PaintDeviceMetric)
extern "C"
void* callback_ZNK18QPaintDeviceWindow6metricEN12QPaintDevice17PaintDeviceMetricE = 0;
extern "C" void set_callback_ZNK18QPaintDeviceWindow6metricEN12QPaintDevice17PaintDeviceMetricE(void*cbfn)
{ callback_ZNK18QPaintDeviceWindow6metricEN12QPaintDevice17PaintDeviceMetricE = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:72
// [-2] void exposeEvent(class QExposeEvent *)
extern "C"
void* callback_ZN18QPaintDeviceWindow11exposeEventEP12QExposeEvent = 0;
extern "C" void set_callback_ZN18QPaintDeviceWindow11exposeEventEP12QExposeEvent(void*cbfn)
{ callback_ZN18QPaintDeviceWindow11exposeEventEP12QExposeEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:73
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN18QPaintDeviceWindow5eventEP6QEvent = 0;
extern "C" void set_callback_ZN18QPaintDeviceWindow5eventEP6QEvent(void*cbfn)
{ callback_ZN18QPaintDeviceWindow5eventEP6QEvent = cbfn; }

class MyQPaintDeviceWindow : public QPaintDeviceWindow {
public:
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * event) {
  if (callback_ZN18QPaintDeviceWindow10paintEventEP11QPaintEvent != 0) {
  // callback_ZN18QPaintDeviceWindow10paintEventEP11QPaintEvent(event);
}}
// int metric(enum QPaintDevice::PaintDeviceMetric)
// int metric(enum QPaintDevice::PaintDeviceMetric)
virtual int metric(QPaintDevice::PaintDeviceMetric metric) {
  if (callback_ZNK18QPaintDeviceWindow6metricEN12QPaintDevice17PaintDeviceMetricE != 0) {
  // callback_ZNK18QPaintDeviceWindow6metricEN12QPaintDevice17PaintDeviceMetricE(metric);
}}
// void exposeEvent(class QExposeEvent *)
// void exposeEvent(class QExposeEvent *)
virtual void exposeEvent(QExposeEvent * arg0) {
  if (callback_ZN18QPaintDeviceWindow11exposeEventEP12QExposeEvent != 0) {
  // callback_ZN18QPaintDeviceWindow11exposeEventEP12QExposeEvent(arg0);
}}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * event) {
  if (callback_ZN18QPaintDeviceWindow5eventEP6QEvent != 0) {
  // callback_ZN18QPaintDeviceWindow5eventEP6QEvent(event);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QPaintDeviceWindow10metaObjectEv(void *this_) {
  return (void*)((QPaintDeviceWindow*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:58
// [-2] void update(const class QRect &)
extern "C"
void C_ZN18QPaintDeviceWindow6updateERK5QRect(void *this_, const QRect & rect) {
  ((QPaintDeviceWindow*)this_)->update(rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:59
// [-2] void update(const class QRegion &)
extern "C"
void C_ZN18QPaintDeviceWindow6updateERK7QRegion(void *this_, const QRegion & region) {
  ((QPaintDeviceWindow*)this_)->update(region);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:66
// [-2] void update()
extern "C"
void C_ZN18QPaintDeviceWindow6updateEv(void *this_) {
  ((QPaintDeviceWindow*)this_)->update();
}
//  main block end
