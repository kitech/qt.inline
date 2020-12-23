//  header block begin

// /usr/include/qt/QtMultimedia/qcamera.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamera.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCamera is pure virtual: false false
// QCamera has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcamera(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:71
// [8] QString tr(const char *, const char *, int) 
// (12)qm1515283460 (22)_ZN7QCamera2trEPKcS1_i
//static
/*void qm1515283460(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCamera::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCamera::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:168
// [-2] void QCamera(QObject *) 
// (12)qm1434939819 (23)_ZN7QCameraC2EP7QObject
/*void* qm1434939819(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:169
// [-2] void QCamera(const QByteArray &, QObject *) 
// (11)qm314386062 (37)_ZN7QCameraC2ERK10QByteArrayP7QObject
/*void* qm314386062(const QByteArray & deviceName, QObject * parent)*/{
  const QByteArray & deviceName = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(deviceName, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:170
// [-2] void QCamera(const QCameraInfo &, QObject *) 
// (12)qm2999338008 (38)_ZN7QCameraC2ERK11QCameraInfoP7QObject
/*void* qm2999338008(const QCameraInfo & cameraInfo, QObject * parent)*/{
  const QCameraInfo & cameraInfo = *(const QCameraInfo *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(cameraInfo, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:171
// [-2] void QCamera(QCamera::Position, QObject *) 
// (12)qm3803242807 (36)_ZN7QCameraC2ENS_8PositionEP7QObject
/*void* qm3803242807(QCamera::Position position, QObject * parent)*/{
  QCamera::Position position = *(QCamera::Position*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCamera(position, parent);
}


/*void C_ZN7QCameraD2Ev(void *this_)*/ {
  delete (QCamera*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcamera
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
