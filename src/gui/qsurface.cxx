//  header block begin
// /usr/include/qt/QtGui/qsurface.h
#include <qsurface.h>
#include <QtGui>

// QSurface is pure virtual: true
// QSurface has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:85
// [-2] void QSurface(enum QSurface::SurfaceClass)
extern "C"
void* callback_ZN8QSurfaceC1ENS_12SurfaceClassE_fnptr = 0;
extern "C" void set_callback_ZN8QSurfaceC1ENS_12SurfaceClassE(void*cbfn)
{ callback_ZN8QSurfaceC1ENS_12SurfaceClassE_fnptr = cbfn; }

class MyQSurface : public QSurface {
public:
  virtual ~MyQSurface() {}
// void QSurface(enum QSurface::SurfaceClass)
MyQSurface(QSurface::SurfaceClass type) : QSurface(type) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:72
// [-2] void ~QSurface()
extern "C"
void C_ZN8QSurfaceD2Ev(void *this_) {
  delete (QSurface*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:74
// [4] QSurface::SurfaceClass surfaceClass()
extern "C"
QSurface::SurfaceClass C_ZNK8QSurface12surfaceClassEv(void *this_) {
  return (QSurface::SurfaceClass)((QSurface*)this_)->surfaceClass();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:76
// [8] QSurfaceFormat format()
extern "C"
void* C_ZNK8QSurface6formatEv(void *this_) {
  auto rv = ((QSurface*)this_)->format();
return new QSurfaceFormat(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:79
// [4] QSurface::SurfaceType surfaceType()
extern "C"
QSurface::SurfaceType C_ZNK8QSurface11surfaceTypeEv(void *this_) {
  return (QSurface::SurfaceType)((QSurface*)this_)->surfaceType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:80
// [1] bool supportsOpenGL()
extern "C"
bool C_ZNK8QSurface14supportsOpenGLEv(void *this_) {
  return (bool)((QSurface*)this_)->supportsOpenGL();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurface.h:82
// [8] QSize size()
extern "C"
void* C_ZNK8QSurface4sizeEv(void *this_) {
  auto rv = ((QSurface*)this_)->size();
return new QSize(rv);
}
//  main block end
