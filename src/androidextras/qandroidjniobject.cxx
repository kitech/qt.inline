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

//  main block end
