//  header block begin
// since 0x050200
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h
#ifndef protected
#define protected public
#endif
#include <qandroidjniobject.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidJniObject is pure virtual: false
// QAndroidJniObject has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAndroidJniObject : public QAndroidJniObject {
public:
  virtual ~MyQAndroidJniObject() {}
// void QAndroidJniObject()
MyQAndroidJniObject() : QAndroidJniObject() {}
// void QAndroidJniObject(const char *)
MyQAndroidJniObject(const char * className) : QAndroidJniObject(className) {}
// void QAndroidJniObject(const char *, const char *, ...)
MyQAndroidJniObject(const char * className, const char * sig) : QAndroidJniObject(className, sig) {}
// void QAndroidJniObject(jclass)
MyQAndroidJniObject(jclass clazz) : QAndroidJniObject(clazz) {}
// void QAndroidJniObject(jclass, const char *, ...)
MyQAndroidJniObject(jclass clazz, const char * sig) : QAndroidJniObject(clazz, sig) {}
// void QAndroidJniObject(jobject)
MyQAndroidJniObject(jobject obj) : QAndroidJniObject(obj) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:55
// [-2] void QAndroidJniObject()
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObjectC2Ev() {
  return  new QAndroidJniObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:56
// [-2] void QAndroidJniObject(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObjectC2EPKc(const char * className) {
  return  new QAndroidJniObject(className);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:57
// [-2] void QAndroidJniObject(const char *, const char *, ...)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObjectC2EPKcS1_z(const char * className, const char * sig) {
  return  new QAndroidJniObject(className, sig);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:58
// [-2] void QAndroidJniObject(jclass)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObjectC2EP7_jclass(jclass clazz) {
  return  new QAndroidJniObject(clazz);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:59
// [-2] void QAndroidJniObject(jclass, const char *, ...)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObjectC2EP7_jclassPKcz(jclass clazz, const char * sig) {
  return  new QAndroidJniObject(clazz, sig);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:60
// [-2] void QAndroidJniObject(jobject)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObjectC2EP8_jobject(jobject obj) {
  return  new QAndroidJniObject(obj);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:61
// [-2] void ~QAndroidJniObject()
extern "C" Q_DECL_EXPORT
void C_ZN17QAndroidJniObjectD2Ev(void *this_) {
  delete (QAndroidJniObject*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:66
// [8] jobject object()
extern "C" Q_DECL_EXPORT
jobject C_ZNK17QAndroidJniObject6objectEv(void *this_) {
  auto rv = ((QAndroidJniObject*)this_)->object();
return rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:75
// [16] QAndroidJniObject callObjectMethod(const char *, const char *, ...)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAndroidJniObject16callObjectMethodEPKcS1_z(void *this_, const char * methodName, const char * sig) {
  auto rv = ((QAndroidJniObject*)this_)->callObjectMethod(methodName, sig);
return new QAndroidJniObject(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:85
// [16] QAndroidJniObject callStaticObjectMethod(const char *, const char *, const char *, ...)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObject22callStaticObjectMethodEPKcS1_S1_z(const char * className, const char * methodName, const char * sig) {
  auto rv = QAndroidJniObject::callStaticObjectMethod(className, methodName, sig);
return new QAndroidJniObject(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:94
// [16] QAndroidJniObject callStaticObjectMethod(jclass, const char *, const char *, ...)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObject22callStaticObjectMethodEP7_jclassPKcS3_z(jclass clazz, const char * methodName, const char * sig) {
  auto rv = QAndroidJniObject::callStaticObjectMethod(clazz, methodName, sig);
return new QAndroidJniObject(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:108
// [16] QAndroidJniObject getObjectField(const char *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAndroidJniObject14getObjectFieldEPKcS1_(void *this_, const char * fieldName, const char * sig) {
  auto rv = ((QAndroidJniObject*)this_)->getObjectField(fieldName, sig);
return new QAndroidJniObject(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:124
// [16] QAndroidJniObject getStaticObjectField(const char *, const char *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObject20getStaticObjectFieldEPKcS1_S1_(const char * className, const char * fieldName, const char * sig) {
  auto rv = QAndroidJniObject::getStaticObjectField(className, fieldName, sig);
return new QAndroidJniObject(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:140
// [16] QAndroidJniObject getStaticObjectField(jclass, const char *, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObject20getStaticObjectFieldEP7_jclassPKcS3_(jclass clazz, const char * fieldName, const char * sig) {
  auto rv = QAndroidJniObject::getStaticObjectField(clazz, fieldName, sig);
return new QAndroidJniObject(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:158
// [16] QAndroidJniObject fromString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObject10fromStringERK7QString(QString* string) {
  auto rv = QAndroidJniObject::fromString(*string);
return new QAndroidJniObject(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:159
// [8] QString toString()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAndroidJniObject8toStringEv(void *this_) {
  auto rv = ((QAndroidJniObject*)this_)->toString();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:161
// [1] bool isClassAvailable(const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QAndroidJniObject16isClassAvailableEPKc(const char * className) {
  return (bool)QAndroidJniObject::isClassAvailable(className);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:162
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK17QAndroidJniObject7isValidEv(void *this_) {
  return (bool)((QAndroidJniObject*)this_)->isValid();
}

// Public static Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:164
// [16] QAndroidJniObject fromLocalRef(jobject)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZN17QAndroidJniObject12fromLocalRefEP8_jobject(jobject obj) {
  auto rv = QAndroidJniObject::fromLocalRef(obj);
return new QAndroidJniObject(rv);
}
#endif // QT_VERSION >= 0x050700

//  main block end
