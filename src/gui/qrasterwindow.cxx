//  header block begin
// since 0x050400
// /usr/include/qt/QtGui/qrasterwindow.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrasterwindow.h>
#include <QtGui>
#include "callback_inherit.h"

// QRasterWindow is pure virtual: false
// QRasterWindow has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRasterWindow : public QRasterWindow {
public:
  virtual ~MyQRasterWindow() {}
// void QRasterWindow(QWindow *)
MyQRasterWindow(QWindow * parent) : QRasterWindow(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QRasterWindow::metric(metric);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QPaintDevice * redirected(QPoint *)
  virtual QPaintDevice * redirected(QPoint * arg0) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"redirected", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintDevice *)(irv);
      // Pointer Pointer QPaintDevice *
    } else {
    return QRasterWindow::redirected(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:60
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK13QRasterWindow6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric metric) {
  return (int)((QRasterWindow*)this_)->QRasterWindow::metric(metric);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:61
// [8] QPaintDevice * redirected(QPoint *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QRasterWindow10redirectedEP6QPoint(void *this_, QPoint * arg0) {
  return (void*)((QRasterWindow*)this_)->QRasterWindow::redirected(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QRasterWindow10metaObjectEv(void *this_) {
  return (void*)((QRasterWindow*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QRasterWindow11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QRasterWindow*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QRasterWindow11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QRasterWindow*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QRasterWindow2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRasterWindow::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QRasterWindow6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QRasterWindow::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:56
// [-2] void QRasterWindow(QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QRasterWindowC2EP7QWindow(QWindow * parent) {
  auto _nilp = (MyQRasterWindow*)(0);
  return  new MyQRasterWindow(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrasterwindow.h:57
// [-2] void ~QRasterWindow()
extern "C" Q_DECL_EXPORT
void C_ZN13QRasterWindowD2Ev(void *this_) {
  delete (QRasterWindow*)(this_);
}
//  main block end
