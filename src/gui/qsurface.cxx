//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qsurface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsurface.h>
#include <QtGui>
#include "callback_inherit.h"

// QSurface is pure virtual: true
// QSurface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSurface : public QSurface {
public:
  virtual ~MyQSurface() {}
// void QSurface(QSurface::SurfaceClass)
MyQSurface(QSurface::SurfaceClass type_) : QSurface(type_) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:72
// [-2] void ~QSurface()
extern "C" Q_DECL_EXPORT
void C_ZN8QSurfaceD2Ev(void *this_) {
  delete (QSurface*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:74
// [4] QSurface::SurfaceClass surfaceClass()
extern "C" Q_DECL_EXPORT
QSurface::SurfaceClass C_ZNK8QSurface12surfaceClassEv(void *this_) {
  return (QSurface::SurfaceClass)((QSurface*)this_)->surfaceClass();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:76
// [8] QSurfaceFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSurface6formatEv(void *this_) {
  auto rv = ((QSurface*)this_)->format();
return new QSurfaceFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:77
// [8] QPlatformSurface * surfaceHandle()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSurface13surfaceHandleEv(void *this_) {
  return (void*)((QSurface*)this_)->surfaceHandle();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:79
// [4] QSurface::SurfaceType surfaceType()
extern "C" Q_DECL_EXPORT
QSurface::SurfaceType C_ZNK8QSurface11surfaceTypeEv(void *this_) {
  return (QSurface::SurfaceType)((QSurface*)this_)->surfaceType();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qsurface.h:80
// [1] bool supportsOpenGL()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZNK8QSurface14supportsOpenGLEv(void *this_) {
  return (bool)((QSurface*)this_)->supportsOpenGL();
}
#endif // QT_VERSION >= 0x050300

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:82
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QSurface4sizeEv(void *this_) {
  auto rv = ((QSurface*)this_)->size();
return new QSize(rv);
}

//  main block end
