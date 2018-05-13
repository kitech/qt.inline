//  header block begin
// since 0x050200
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h
#ifndef protected
#define protected public
#endif
#include <qandroidjnienvironment.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidJniEnvironment is pure virtual: false
// QAndroidJniEnvironment has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAndroidJniEnvironment : public QAndroidJniEnvironment {
public:
  virtual ~MyQAndroidJniEnvironment() {}
// void QAndroidJniEnvironment()
MyQAndroidJniEnvironment() : QAndroidJniEnvironment() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:55
// [-2] void QAndroidJniEnvironment()
extern "C" Q_DECL_EXPORT
void* C_ZN22QAndroidJniEnvironmentC2Ev() {
  return  new QAndroidJniEnvironment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:56
// [-2] void ~QAndroidJniEnvironment()
extern "C" Q_DECL_EXPORT
void C_ZN22QAndroidJniEnvironmentD2Ev(void *this_) {
  delete (QAndroidJniEnvironment*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:57
// [8] JavaVM * javaVM()
extern "C" Q_DECL_EXPORT
void* C_ZN22QAndroidJniEnvironment6javaVMEv() {
  return (void*)QAndroidJniEnvironment::javaVM();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:58
// [8] JNIEnv * operator->()
extern "C" Q_DECL_EXPORT
void* C_ZN22QAndroidJniEnvironmentptEv(void *this_) {
  return (void*)((QAndroidJniEnvironment*)this_)->operator->();
}

//  main block end
