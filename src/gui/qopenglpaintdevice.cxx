//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qopenglpaintdevice.h
#ifndef protected
#define protected public
#endif
#include <qopenglpaintdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLPaintDevice is pure virtual: false
// QOpenGLPaintDevice has virtual projected: false
//  header block end

//  main block begin

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:59
// [-2] void QOpenGLPaintDevice()
extern "C" Q_DECL_EXPORT
void* C_ZN18QOpenGLPaintDeviceC2Ev() {
  return  new QOpenGLPaintDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:60
// [-2] void QOpenGLPaintDevice(const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QOpenGLPaintDeviceC2ERK5QSize(QSize* size) {
  return  new QOpenGLPaintDevice(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:61
// [-2] void QOpenGLPaintDevice(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QOpenGLPaintDeviceC2Eii(int width, int height) {
  return  new QOpenGLPaintDevice(width, height);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:62
// [-2] void ~QOpenGLPaintDevice()
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLPaintDeviceD2Ev(void *this_) {
  delete (QOpenGLPaintDevice*)(this_);
}
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:64
// [4] int devType()
extern "C" Q_DECL_EXPORT
int C_ZNK18QOpenGLPaintDevice7devTypeEv(void *this_) {
  return (int)((QOpenGLPaintDevice*)this_)->devType();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:65
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QOpenGLPaintDevice11paintEngineEv(void *this_) {
  return (void*)((QOpenGLPaintDevice*)this_)->paintEngine();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:67
// [8] QOpenGLContext * context()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QOpenGLPaintDevice7contextEv(void *this_) {
  return (void*)((QOpenGLPaintDevice*)this_)->context();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:68
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QOpenGLPaintDevice4sizeEv(void *this_) {
  auto rv = ((QOpenGLPaintDevice*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:69
// [-2] void setSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLPaintDevice7setSizeERK5QSize(void *this_, QSize* size) {
  ((QOpenGLPaintDevice*)this_)->setSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:70
// [-2] void setDevicePixelRatio(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLPaintDevice19setDevicePixelRatioEd(void *this_, qreal devicePixelRatio) {
  ((QOpenGLPaintDevice*)this_)->setDevicePixelRatio(devicePixelRatio);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:72
// [8] qreal dotsPerMeterX()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QOpenGLPaintDevice13dotsPerMeterXEv(void *this_) {
  return (qreal)((QOpenGLPaintDevice*)this_)->dotsPerMeterX();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:73
// [8] qreal dotsPerMeterY()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QOpenGLPaintDevice13dotsPerMeterYEv(void *this_) {
  return (qreal)((QOpenGLPaintDevice*)this_)->dotsPerMeterY();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:75
// [-2] void setDotsPerMeterX(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLPaintDevice16setDotsPerMeterXEd(void *this_, qreal arg0) {
  ((QOpenGLPaintDevice*)this_)->setDotsPerMeterX(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:76
// [-2] void setDotsPerMeterY(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLPaintDevice16setDotsPerMeterYEd(void *this_, qreal arg0) {
  ((QOpenGLPaintDevice*)this_)->setDotsPerMeterY(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:78
// [-2] void setPaintFlipped(bool)
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLPaintDevice15setPaintFlippedEb(void *this_, bool flipped) {
  ((QOpenGLPaintDevice*)this_)->setPaintFlipped(flipped);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:79
// [1] bool paintFlipped()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QOpenGLPaintDevice12paintFlippedEv(void *this_) {
  return (bool)((QOpenGLPaintDevice*)this_)->paintFlipped();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpaintdevice.h:81
// [-2] void ensureActiveTarget()
extern "C" Q_DECL_EXPORT
void C_ZN18QOpenGLPaintDevice18ensureActiveTargetEv(void *this_) {
  ((QOpenGLPaintDevice*)this_)->ensureActiveTarget();
}

//  main block end
