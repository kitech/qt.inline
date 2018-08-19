//  header block begin
// since 0x050000
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamerafeedbackcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraFeedbackControl is pure virtual: true
// QCameraFeedbackControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraFeedbackControl : public QCameraFeedbackControl {
public:
  virtual ~MyQCameraFeedbackControl() {}
// void QCameraFeedbackControl(QObject *)
MyQCameraFeedbackControl(QObject * parent) : QCameraFeedbackControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QCameraFeedbackControl10metaObjectEv(void *this_) {
  return (void*)((QCameraFeedbackControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraFeedbackControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraFeedbackControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QCameraFeedbackControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraFeedbackControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraFeedbackControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFeedbackControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QCameraFeedbackControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraFeedbackControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:75
// [-2] void ~QCameraFeedbackControl()
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraFeedbackControlD2Ev(void *this_) {
  delete (QCameraFeedbackControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:77
// [1] bool isEventFeedbackLocked(QCameraFeedbackControl::EventType)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraFeedbackControl21isEventFeedbackLockedENS_9EventTypeE(void *this_, QCameraFeedbackControl::EventType arg0) {
  return (bool)((QCameraFeedbackControl*)this_)->isEventFeedbackLocked(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:79
// [1] bool isEventFeedbackEnabled(QCameraFeedbackControl::EventType)
extern "C" Q_DECL_EXPORT
bool C_ZNK22QCameraFeedbackControl22isEventFeedbackEnabledENS_9EventTypeE(void *this_, QCameraFeedbackControl::EventType arg0) {
  return (bool)((QCameraFeedbackControl*)this_)->isEventFeedbackEnabled(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:81
// [1] bool setEventFeedbackEnabled(QCameraFeedbackControl::EventType, bool)
extern "C" Q_DECL_EXPORT
bool C_ZN22QCameraFeedbackControl23setEventFeedbackEnabledENS_9EventTypeEb(void *this_, QCameraFeedbackControl::EventType arg0, bool arg1) {
  return (bool)((QCameraFeedbackControl*)this_)->setEventFeedbackEnabled(arg0, arg1);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:82
// [-2] void resetEventFeedback(QCameraFeedbackControl::EventType)
extern "C" Q_DECL_EXPORT
void C_ZN22QCameraFeedbackControl18resetEventFeedbackENS_9EventTypeE(void *this_, QCameraFeedbackControl::EventType arg0) {
  ((QCameraFeedbackControl*)this_)->resetEventFeedback(arg0);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafeedbackcontrol.h:84
// [1] bool setEventFeedbackSound(QCameraFeedbackControl::EventType, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN22QCameraFeedbackControl21setEventFeedbackSoundENS_9EventTypeERK7QString(void *this_, QCameraFeedbackControl::EventType arg0, QString* filePath) {
  return (bool)((QCameraFeedbackControl*)this_)->setEventFeedbackSound(arg0, *filePath);
}

//  main block end
