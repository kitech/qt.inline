// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qsurface.h
// dst-file: /src/gui/qsurface.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsurface.h>


#include <qsurfaceformat.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qsurface_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSurface_Class_Size()
{
  return sizeof(QSurface);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qsurface.h', line 71, column 10>
//   // proto:  bool QSurface::supportsOpenGL();
// _ZNK8QSurface14supportsOpenGLEv supportsOpenGL()
extern "C"
bool
C_ZNK8QSurface14supportsOpenGLEv(void *qthis) {
  auto ret =
  ((QSurface*)qthis)->supportsOpenGL();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurface.h', line 70, column 25>
//   // proto:  QSurface::SurfaceType QSurface::surfaceType();
// _ZNK8QSurface11surfaceTypeEv surfaceType()
extern "C"
QSurface::SurfaceType
C_ZNK8QSurface11surfaceTypeEv(void *qthis) {
  auto ret =
  ((QSurface*)qthis)->surfaceType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurface.h', line 67, column 28>
//   // proto:  QSurfaceFormat QSurface::format();
// _ZNK8QSurface6formatEv format()
extern "C"
QSurfaceFormat*
C_ZNK8QSurface6formatEv(void *qthis) {
  auto ret =
  ((QSurface*)qthis)->format();
  return new QSurfaceFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurface.h', line 68, column 31>
//   // proto:  QPlatformSurface * QSurface::surfaceHandle();
// _ZNK8QSurface13surfaceHandleEv surfaceHandle()
extern "C"
void*
C_ZNK8QSurface13surfaceHandleEv(void *qthis) {
  auto ret =
  ((QSurface*)qthis)->surfaceHandle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurface.h', line 73, column 19>
//   // proto:  QSize QSurface::size();
// _ZNK8QSurface4sizeEv size()
extern "C"
QSize*
C_ZNK8QSurface4sizeEv(void *qthis) {
  auto ret =
  ((QSurface*)qthis)->size();
  return new QSize(ret); // 5
}
//   // proto:  void QSurface::~QSurface();
extern "C"
void C_ZN8QSurfaceD2Ev(void *qthis) {
  delete (QSurface*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsurface.h', line 65, column 18>
//   // proto:  QSurface::SurfaceClass QSurface::surfaceClass();
// _ZNK8QSurface12surfaceClassEv surfaceClass()
extern "C"
QSurface::SurfaceClass
C_ZNK8QSurface12surfaceClassEv(void *qthis) {
  auto ret =
  ((QSurface*)qthis)->surfaceClass();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// <= body block end

