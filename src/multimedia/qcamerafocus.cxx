//  header block begin
// /usr/include/qt/QtMultimedia/qcamerafocus.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafocus.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFocus is pure virtual: false
// QCameraFocus has virtual projected: false
//  header block end

//  main block begin

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:96
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCameraFocus10metaObjectEv(void *this_) {
  return (void*)((QCameraFocus*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:96
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QCameraFocus11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraFocus*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:96
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QCameraFocus11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraFocus*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:96
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QCameraFocus2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFocus::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:96
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QCameraFocus6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFocus::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:125
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QCameraFocus11isAvailableEv(void *this_) {
  return (bool)((QCameraFocus*)this_)->isAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:127
// [4] QCameraFocus::FocusModes focusMode()
extern "C" Q_DECL_EXPORT
QCameraFocus::FocusModes* C_ZNK12QCameraFocus9focusModeEv(void *this_) {
  auto rv = ((QCameraFocus*)this_)->focusMode();
return new QCameraFocus::FocusModes(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:128
// [-2] void setFocusMode(QCameraFocus::FocusModes)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus12setFocusModeE6QFlagsINS_9FocusModeEE(void *this_, QFlags<QCameraFocus::FocusMode> mode) {
  ((QCameraFocus*)this_)->setFocusMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:129
// [1] bool isFocusModeSupported(QCameraFocus::FocusModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QCameraFocus20isFocusModeSupportedE6QFlagsINS_9FocusModeEE(void *this_, QFlags<QCameraFocus::FocusMode> mode) {
  return (bool)((QCameraFocus*)this_)->isFocusModeSupported(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:131
// [4] QCameraFocus::FocusPointMode focusPointMode()
extern "C" Q_DECL_EXPORT
QCameraFocus::FocusPointMode C_ZNK12QCameraFocus14focusPointModeEv(void *this_) {
  return (QCameraFocus::FocusPointMode)((QCameraFocus*)this_)->focusPointMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:132
// [-2] void setFocusPointMode(QCameraFocus::FocusPointMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus17setFocusPointModeENS_14FocusPointModeE(void *this_, QCameraFocus::FocusPointMode mode) {
  ((QCameraFocus*)this_)->setFocusPointMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:133
// [1] bool isFocusPointModeSupported(QCameraFocus::FocusPointMode)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QCameraFocus25isFocusPointModeSupportedENS_14FocusPointModeE(void *this_, QCameraFocus::FocusPointMode arg0) {
  return (bool)((QCameraFocus*)this_)->isFocusPointModeSupported(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:134
// [16] QPointF customFocusPoint()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QCameraFocus16customFocusPointEv(void *this_) {
  auto rv = ((QCameraFocus*)this_)->customFocusPoint();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:135
// [-2] void setCustomFocusPoint(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus19setCustomFocusPointERK7QPointF(void *this_, QPointF* point) {
  ((QCameraFocus*)this_)->setCustomFocusPoint(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:137
// [-2] QCameraFocusZoneList focusZones()
extern "C" Q_DECL_EXPORT
QCameraFocusZoneList* C_ZNK12QCameraFocus10focusZonesEv(void *this_) {
  auto rv = ((QCameraFocus*)this_)->focusZones();
return new QCameraFocusZoneList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:139
// [8] qreal maximumOpticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QCameraFocus18maximumOpticalZoomEv(void *this_) {
  return (qreal)((QCameraFocus*)this_)->maximumOpticalZoom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:140
// [8] qreal maximumDigitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QCameraFocus18maximumDigitalZoomEv(void *this_) {
  return (qreal)((QCameraFocus*)this_)->maximumDigitalZoom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:141
// [8] qreal opticalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QCameraFocus11opticalZoomEv(void *this_) {
  return (qreal)((QCameraFocus*)this_)->opticalZoom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:142
// [8] qreal digitalZoom()
extern "C" Q_DECL_EXPORT
qreal C_ZNK12QCameraFocus11digitalZoomEv(void *this_) {
  return (qreal)((QCameraFocus*)this_)->digitalZoom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:144
// [-2] void zoomTo(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus6zoomToEdd(void *this_, qreal opticalZoom, qreal digitalZoom) {
  ((QCameraFocus*)this_)->zoomTo(opticalZoom, digitalZoom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:147
// [-2] void opticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus18opticalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraFocus*)this_)->opticalZoomChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:148
// [-2] void digitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus18digitalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraFocus*)this_)->digitalZoomChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:150
// [-2] void focusZonesChanged()
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus17focusZonesChangedEv(void *this_) {
  ((QCameraFocus*)this_)->focusZonesChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:152
// [-2] void maximumOpticalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus25maximumOpticalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraFocus*)this_)->maximumOpticalZoomChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:153
// [-2] void maximumDigitalZoomChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QCameraFocus25maximumDigitalZoomChangedEd(void *this_, qreal arg0) {
  ((QCameraFocus*)this_)->maximumDigitalZoomChanged(arg0);
}

//  main block end
