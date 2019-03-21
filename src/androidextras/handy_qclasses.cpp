//  header block begin
// since 0x050200
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h
#ifndef protected
#define protected public
#endif
#include <qandroidjniobject.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

/*
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAndroidJniObject16callObjectMethodEPKcS1_z(void* this_, const char *methodName, const char *signature, ...) {
    // C variadic parameters forward
    va_list args;
    va_start(args, signature);
    auto rv = ((QAndroidJniObject*)this_)->callObjectMethod(methodName, signature, args);
    va_end(args);
    return new QAndroidJniObject(rv);
}
*/

extern "C" Q_DECL_EXPORT
void C_ZNK17QAndroidJniObject10callMethodIvEET_PKcS3_z(void* this_, const char *methodName, const char *signature, ...) {
    // C variadic parameters forward
    va_list args;
    va_start(args, signature);
    ((QAndroidJniObject*)this_)->callMethod<void>(methodName, signature, args);
    va_end(args);
}


extern "C" Q_DECL_EXPORT
unsigned char C_ZNK17QAndroidJniObject10callMethodIhEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    unsigned char rv = ((QAndroidJniObject*)this_)->callMethod<unsigned char>(methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
signed char C_ZNK17QAndroidJniObject10callMethodIaEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    signed char rv = ((QAndroidJniObject*)this_)->callMethod<signed char>(methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
unsigned char C_ZNK17QAndroidJniObject10callMethodItEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    unsigned short rv = ((QAndroidJniObject*)this_)->callMethod<unsigned short>(methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
short C_ZNK17QAndroidJniObject10callMethodIsEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    jshort rv = ((QAndroidJniObject*)this_)->callMethod<short>(methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
int C_ZNK17QAndroidJniObject10callMethodIiEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    jint rv = ((QAndroidJniObject*)this_)->callMethod<int>(methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
long long C_ZNK17QAndroidJniObject10callMethodIxEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    long long rv = ((QAndroidJniObject*)this_)->callMethod<long long>(methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
float C_ZNK17QAndroidJniObject10callMethodIfEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    jfloat rv = ((QAndroidJniObject*)this_)->callMethod<float>(methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
double C_ZNK17QAndroidJniObject10callMethodIdEET_PKcS3_z(void* this_, const char *methodName, const char *signature,
...) {
    va_list args;
    va_start(args, signature);
    jdouble rv = ((QAndroidJniObject*)this_)->callMethod<double>(methodName, signature, args);
    va_end(args);
    return rv;
}

// static
extern "C" Q_DECL_EXPORT
void C_ZN17QAndroidJniObject16callStaticMethodIvEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
                                                         ...) {
    va_list args;
    va_start(args, signature);
    QAndroidJniObject::callStaticMethod<void>(className, methodName, signature, args);
    va_end(args);
}

extern "C" Q_DECL_EXPORT
unsigned char C_ZN17QAndroidJniObject16callStaticMethodIhEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
                                                         ...) {
    va_list args;
    va_start(args, signature);
    unsigned char rv = QAndroidJniObject::callStaticMethod<unsigned char>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
signed char C_ZN17QAndroidJniObject16callStaticMethodIaEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
      ...) {
    va_list args;
    va_start(args, signature);
    signed char rv = QAndroidJniObject::callStaticMethod<signed char>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
unsigned short C_ZN17QAndroidJniObject16callStaticMethodItEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
      ...) {
    va_list args;
    va_start(args, signature);
    unsigned short rv = QAndroidJniObject::callStaticMethod<unsigned short>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
short C_ZN17QAndroidJniObject16callStaticMethodIsEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
      ...) {
    va_list args;
    va_start(args, signature);
    short rv = QAndroidJniObject::callStaticMethod<short>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
int C_ZN17QAndroidJniObject16callStaticMethodIiEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
      ...) {
    va_list args;
    va_start(args, signature);
    jint rv = QAndroidJniObject::callStaticMethod<int>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
long long C_ZN17QAndroidJniObject16callStaticMethodIxEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
      ...) {
    va_list args;
    va_start(args, signature);
    long long rv = QAndroidJniObject::callStaticMethod<long long>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
float C_ZN17QAndroidJniObject16callStaticMethodIfEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
      ...) {
    va_list args;
    va_start(args, signature);
    jfloat rv = QAndroidJniObject::callStaticMethod<float>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

extern "C" Q_DECL_EXPORT
double C_ZN17QAndroidJniObject16callStaticMethodIdEET_PKcS3_S3_z(const char *className, const char *methodName, const char *signature,
      ...) {
    va_list args;
    va_start(args, signature);
    jdouble rv = QAndroidJniObject::callStaticMethod<double>(className, methodName, signature, args);
    va_end(args);
    return rv;
}

/*
extern "C" Q_DECL_EXPORT
QAndroidJniObject* C_ZN17QAndroidJniObject22callStaticObjectMethodEPKcS1_S1_z(const char *className, const char *methodName, const char *signature,
                                                                 ...) {
    va_list args;
    va_start(args, signature);
    QAndroidJniObject rv = QAndroidJniObject::callStaticObjectMethod(className, methodName, signature, args);
    va_end(args);
    return new QAndroidJniObject(rv);
}
*/


/////
extern "C" Q_DECL_EXPORT
void* C_ZNK22QAndroidJniEnvironmentcvP7_JNIEnvEv(void* this_) {
    return ((QAndroidJniEnvironment*)this_)->operator _JNIEnv*();
    // return ((QAndroidJniEnvironment*)this_)->operator JNIEnv*(); // both ok?
}

extern "C" Q_DECL_EXPORT
int C_JNIEnv_ExceptionCheck(void* this_) {
    return ((JNIEnv*)this_)->ExceptionCheck() ? 1 : 0;
}

extern "C" Q_DECL_EXPORT
void C_JNIEnv_ExceptionClear(void* this_) {
    return ((JNIEnv*)this_)->ExceptionClear();
}

extern "C" Q_DECL_EXPORT
jint JNICALL JNI_OnLoad(JavaVM *vm, void *)
{
    JNIEnv *env;
    if (vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_4) != JNI_OK) {
        qFatal("Couldn't initialize environment!");
        return -1;
    }

    jclass clazz = env->FindClass("java/lang/String");
    if (clazz == 0) {
        //
    }
    return JNI_VERSION_1_4;
}

