//  header block begin
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h
#ifndef protected
#define protected public
#endif
#include <qcamerazoomcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraZoomControl is pure virtual: true
// QCameraZoomControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraZoomControl : public QCameraZoomControl {
public:
  virtual ~MyQCameraZoomControl() {}
// void QCameraZoomControl(QObject *)
MyQCameraZoomControl(QObject * parent) : QCameraZoomControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCameraZoomControl10metaObjectEv(void *this_) {
  return (void*)((QCameraZoomControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraZoomControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraZoomControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QCameraZoomControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraZoomControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraZoomControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraZoomControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCameraZoomControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraZoomControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:56
// [-2] void ~QCameraZoomControl()
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControlD2Ev(void *this_) {
  delete (QCameraZoomControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:58
// [8] qreal maximumOpticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18maximumOpticalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->maximumOpticalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:59
// [8] qreal maximumDigitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18maximumDigitalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->maximumDigitalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:61
// [8] qreal requestedOpticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl20requestedOpticalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->requestedOpticalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:62
// [8] qreal requestedDigitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl20requestedDigitalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->requestedDigitalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:63
// [8] qreal currentOpticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18currentOpticalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->currentOpticalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:64
// [8] qreal currentDigitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK18QCameraZoomControl18currentDigitalZoomEv(void *this_) {
  return (qreal)((QCameraZoomControl*)this_)->currentDigitalZoom();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:66
// [-2] void zoomTo(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl6zoomToEdd(void *this_, qreal optical, qreal digital) {
  ((QCameraZoomControl*)this_)->zoomTo(optical, digital);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:69
// [-2] void maximumOpticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25maximumOpticalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraZoomControl*)this_)->maximumOpticalZoomChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:70
// [-2] void maximumDigitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25maximumDigitalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraZoomControl*)this_)->maximumDigitalZoomChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:72
// [-2] void requestedOpticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl27requestedOpticalZoomChangedEd(void *this_, qreal opticalZoom) {
  ((QCameraZoomControl*)this_)->requestedOpticalZoomChanged(opticalZoom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:73
// [-2] void requestedDigitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl27requestedDigitalZoomChangedEd(void *this_, qreal digitalZoom) {
  ((QCameraZoomControl*)this_)->requestedDigitalZoomChanged(digitalZoom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:74
// [-2] void currentOpticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25currentOpticalZoomChangedEd(void *this_, qreal opticalZoom) {
  ((QCameraZoomControl*)this_)->currentOpticalZoomChanged(opticalZoom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerazoomcontrol.h:75
// [-2] void currentDigitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN18QCameraZoomControl25currentDigitalZoomChangedEd(void *this_, qreal digitalZoom) {
  ((QCameraZoomControl*)this_)->currentDigitalZoomChanged(digitalZoom);
}

//  main block end
