//  header block begin
// /usr/include/qt/QtGui/qpaintdevicewindow.h
#include <qpaintdevicewindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintDeviceWindow is pure virtual: false
// QPaintDeviceWindow has virtual projected: true
//  header block end

//  main block begin

class MyQPaintDeviceWindow : public QPaintDeviceWindow {
public:
  virtual ~MyQPaintDeviceWindow() {}
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPaintDeviceWindow::paintEvent(event);
  }
  }
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QPaintDeviceWindow::metric(metric);
  }
  }
// void exposeEvent(class QExposeEvent *)
  virtual void exposeEvent(QExposeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"exposeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPaintDeviceWindow::exposeEvent(arg0);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPaintDeviceWindow::event(event);
  }
  }
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
void C_ZN18QPaintDeviceWindow6updateERK5QRect(void *this_, QRect* rect) {
  ((QPaintDeviceWindow*)this_)->update(*rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:59
// [-2] void update(const class QRegion &)
extern "C"
void C_ZN18QPaintDeviceWindow6updateERK7QRegion(void *this_, QRegion* region) {
  ((QPaintDeviceWindow*)this_)->update(*region);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintdevicewindow.h:66
// [-2] void update()
extern "C"
void C_ZN18QPaintDeviceWindow6updateEv(void *this_) {
  ((QPaintDeviceWindow*)this_)->update();
}

extern "C"
void C_ZN18QPaintDeviceWindowD2Ev(void *this_) {
  delete (QPaintDeviceWindow*)(this_);
}
//  main block end
