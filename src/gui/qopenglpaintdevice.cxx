// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qopenglpaintdevice.h
// dst-file: /src/gui/qopenglpaintdevice.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglpaintdevice.h>


#include <qsize.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qopenglpaintdevice_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 58, column 9>
//   // proto:  int QOpenGLPaintDevice::devType();
if (true) {
  auto f = [](QOpenGLPaintDevice flythis) {
    ((QOpenGLPaintDevice*)0)->devType();
    flythis.devType();
  };
  if (f == nullptr){}
}
// _ZNK18QOpenGLPaintDevice7devTypeEv devType()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLPaintDevice_Class_Size()
{
  return sizeof(QOpenGLPaintDevice);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 59, column 19>
//   // proto:  QPaintEngine * QOpenGLPaintDevice::paintEngine();
// _ZNK18QOpenGLPaintDevice11paintEngineEv paintEngine()
extern "C"
void*
C_ZNK18QOpenGLPaintDevice11paintEngineEv(void *qthis) {
  auto ret =
  ((QOpenGLPaintDevice*)qthis)->paintEngine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 62, column 11>
//   // proto:  QSize QOpenGLPaintDevice::size();
// _ZNK18QOpenGLPaintDevice4sizeEv size()
extern "C"
QSize*
C_ZNK18QOpenGLPaintDevice4sizeEv(void *qthis) {
  auto ret =
  ((QOpenGLPaintDevice*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 72, column 10>
//   // proto:  void QOpenGLPaintDevice::setPaintFlipped(bool flipped);
// _ZN18QOpenGLPaintDevice15setPaintFlippedEb setPaintFlipped(_Bool)
extern "C"
void
C_ZN18QOpenGLPaintDevice15setPaintFlippedEb(void *qthis,
bool arg1) {
  ((QOpenGLPaintDevice*)qthis)->setPaintFlipped(arg1);
}
//   // proto:  void QOpenGLPaintDevice::~QOpenGLPaintDevice();
extern "C"
void C_ZN18QOpenGLPaintDeviceD2Ev(void *qthis) {
  delete (QOpenGLPaintDevice*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 55, column 5>
//   // proto:  void QOpenGLPaintDevice::QOpenGLPaintDevice(int width, int height);
extern "C"
QOpenGLPaintDevice*
C_ZN18QOpenGLPaintDeviceC2Eii(int arg1,
int arg2) {
  auto ret = new QOpenGLPaintDevice(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 61, column 21>
//   // proto:  QOpenGLContext * QOpenGLPaintDevice::context();
// _ZNK18QOpenGLPaintDevice7contextEv context()
extern "C"
void*
C_ZNK18QOpenGLPaintDevice7contextEv(void *qthis) {
  auto ret =
  ((QOpenGLPaintDevice*)qthis)->context();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 64, column 10>
//   // proto:  void QOpenGLPaintDevice::setDevicePixelRatio(qreal devicePixelRatio);
// _ZN18QOpenGLPaintDevice19setDevicePixelRatioEd setDevicePixelRatio(qreal)
extern "C"
void
C_ZN18QOpenGLPaintDevice19setDevicePixelRatioEd(void *qthis,
qreal arg1) {
  ((QOpenGLPaintDevice*)qthis)->setDevicePixelRatio(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 53, column 5>
//   // proto:  void QOpenGLPaintDevice::QOpenGLPaintDevice();
extern "C"
QOpenGLPaintDevice*
C_ZN18QOpenGLPaintDeviceC2Ev() {
  auto ret = new QOpenGLPaintDevice();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 58, column 9>
//   // proto:  int QOpenGLPaintDevice::devType();
// _ZNK18QOpenGLPaintDevice7devTypeEv devType()
extern "C"
int
C_ZNK18QOpenGLPaintDevice7devTypeEv(void *qthis) {
  auto ret =
  ((QOpenGLPaintDevice*)qthis)->devType();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 66, column 11>
//   // proto:  qreal QOpenGLPaintDevice::dotsPerMeterX();
// _ZNK18QOpenGLPaintDevice13dotsPerMeterXEv dotsPerMeterX()
extern "C"
double
C_ZNK18QOpenGLPaintDevice13dotsPerMeterXEv(void *qthis) {
  auto ret =
  ((QOpenGLPaintDevice*)qthis)->dotsPerMeterX();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 69, column 10>
//   // proto:  void QOpenGLPaintDevice::setDotsPerMeterX(qreal );
// _ZN18QOpenGLPaintDevice16setDotsPerMeterXEd setDotsPerMeterX(qreal)
extern "C"
void
C_ZN18QOpenGLPaintDevice16setDotsPerMeterXEd(void *qthis,
qreal arg1) {
  ((QOpenGLPaintDevice*)qthis)->setDotsPerMeterX(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 67, column 11>
//   // proto:  qreal QOpenGLPaintDevice::dotsPerMeterY();
// _ZNK18QOpenGLPaintDevice13dotsPerMeterYEv dotsPerMeterY()
extern "C"
double
C_ZNK18QOpenGLPaintDevice13dotsPerMeterYEv(void *qthis) {
  auto ret =
  ((QOpenGLPaintDevice*)qthis)->dotsPerMeterY();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 70, column 10>
//   // proto:  void QOpenGLPaintDevice::setDotsPerMeterY(qreal );
// _ZN18QOpenGLPaintDevice16setDotsPerMeterYEd setDotsPerMeterY(qreal)
extern "C"
void
C_ZN18QOpenGLPaintDevice16setDotsPerMeterYEd(void *qthis,
qreal arg1) {
  ((QOpenGLPaintDevice*)qthis)->setDotsPerMeterY(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 73, column 10>
//   // proto:  bool QOpenGLPaintDevice::paintFlipped();
// _ZNK18QOpenGLPaintDevice12paintFlippedEv paintFlipped()
extern "C"
bool
C_ZNK18QOpenGLPaintDevice12paintFlippedEv(void *qthis) {
  auto ret =
  ((QOpenGLPaintDevice*)qthis)->paintFlipped();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 63, column 10>
//   // proto:  void QOpenGLPaintDevice::setSize(const QSize & size);
// _ZN18QOpenGLPaintDevice7setSizeERK5QSize setSize(const class QSize &)
extern "C"
void
C_ZN18QOpenGLPaintDevice7setSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QOpenGLPaintDevice*)qthis)->setSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 75, column 18>
//   // proto:  void QOpenGLPaintDevice::ensureActiveTarget();
// _ZN18QOpenGLPaintDevice18ensureActiveTargetEv ensureActiveTarget()
extern "C"
void
C_ZN18QOpenGLPaintDevice18ensureActiveTargetEv(void *qthis) {
  ((QOpenGLPaintDevice*)qthis)->ensureActiveTarget();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpaintdevice.h', line 54, column 14>
//   // proto:  void QOpenGLPaintDevice::QOpenGLPaintDevice(const QSize & size);
extern "C"
QOpenGLPaintDevice*
C_ZN18QOpenGLPaintDeviceC2ERK5QSize(const QSize* arg1) {
  auto ret = new QOpenGLPaintDevice(*((const QSize*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

