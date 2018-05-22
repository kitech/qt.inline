//  header block begin
// since 0x050200
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h
#ifndef protected
#define protected public
#endif
#include <qandroidjniobject.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

extern "C" Q_DECL_EXPORT
void* C_ZNK17QAndroidJniObject16callObjectMethodEPKcS1_z(void* this_, const char *methodName, const char *signature, ...) {
    // C variadic parameters forward
    va_list args;
    va_start(args, signature);
    auto rv = ((QAndroidJniObject*)this_)->callObjectMethod(methodName, signature, args);
    va_end(args);
    return new QAndroidJniObject(rv);
}

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


