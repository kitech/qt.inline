// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qopenglversionfunctions.h
// dst-file: /src/gui/qopenglversionfunctions.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglversionfunctions.h>


// <= header block end

// main block begin =>
void __keep_qopenglversionfunctions_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 109, column 5>
//   // proto:  void QOpenGLVersionFunctionsBackend::QOpenGLVersionFunctionsBackend(QOpenGLContext * ctx);
if (true) {
  auto f = [](QOpenGLContext * arg1) {
    new QOpenGLVersionFunctionsBackend(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 76, column 22>
//   // proto:  void QOpenGLVersionStatus::QOpenGLVersionStatus();
if (true) {
  auto f = []() {
    new QOpenGLVersionStatus();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 81, column 22>
//   // proto:  void QOpenGLVersionStatus::QOpenGLVersionStatus(int majorVersion, int minorVersion, QOpenGLVersionStatus::OpenGLStatus functionStatus);
if (true) {
  auto f = [](int arg1, int arg2, QOpenGLVersionStatus::OpenGLStatus arg3) {
    new QOpenGLVersionStatus(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLVersionFunctionsBackend_Class_Size()
{
  return sizeof(QOpenGLVersionFunctionsBackend);
}

extern "C"
int QAbstractOpenGLFunctions_Class_Size()
{
  return sizeof(QAbstractOpenGLFunctions);
}

extern "C"
int QOpenGLVersionStatus_Class_Size()
{
  return sizeof(QOpenGLVersionStatus);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 109, column 5>
//   // proto:  void QOpenGLVersionFunctionsBackend::QOpenGLVersionFunctionsBackend(QOpenGLContext * ctx);
extern "C"
QOpenGLVersionFunctionsBackend*
C_ZN30QOpenGLVersionFunctionsBackendC2EP14QOpenGLContext(QOpenGLContext * arg1) {
  auto ret = new QOpenGLVersionFunctionsBackend(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 147, column 18>
//   // proto:  bool QAbstractOpenGLFunctions::initializeOpenGLFunctions();
// _ZN24QAbstractOpenGLFunctions25initializeOpenGLFunctionsEv initializeOpenGLFunctions()
extern "C"
bool
C_ZN24QAbstractOpenGLFunctions25initializeOpenGLFunctionsEv(void *qthis) {
  auto ret =
  ((QAbstractOpenGLFunctions*)qthis)->initializeOpenGLFunctions();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 149, column 5>
//   // proto:  QAbstractOpenGLFunctionsPrivate * QAbstractOpenGLFunctions::d_func();
// _ZN24QAbstractOpenGLFunctions6d_funcEv d_func()
extern "C"
void*
C_ZN24QAbstractOpenGLFunctions6d_funcEv(void *qthis) {
  auto ret =
  ((QAbstractOpenGLFunctions*)qthis)->d_func();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 149, column 5>
//   // proto:  const QAbstractOpenGLFunctionsPrivate * QAbstractOpenGLFunctions::d_func();
// _ZNK24QAbstractOpenGLFunctions6d_funcEv d_func()
extern "C"
void*
C_ZNK24QAbstractOpenGLFunctions6d_funcEv(void *qthis) {
  auto ret =
  ((QAbstractOpenGLFunctions*)qthis)->d_func();
  return (void*)ret;
}
//   // proto:  void QAbstractOpenGLFunctions::~QAbstractOpenGLFunctions();
extern "C"
void C_ZN24QAbstractOpenGLFunctionsD2Ev(void *qthis) {
  delete (QAbstractOpenGLFunctions*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 76, column 22>
//   // proto:  void QOpenGLVersionStatus::QOpenGLVersionStatus();
extern "C"
QOpenGLVersionStatus*
C_ZN20QOpenGLVersionStatusC2Ev() {
  auto ret = new QOpenGLVersionStatus();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglversionfunctions.h', line 81, column 22>
//   // proto:  void QOpenGLVersionStatus::QOpenGLVersionStatus(int majorVersion, int minorVersion, QOpenGLVersionStatus::OpenGLStatus functionStatus);
extern "C"
QOpenGLVersionStatus*
C_ZN20QOpenGLVersionStatusC2EiiNS_12OpenGLStatusE(int arg1,
int arg2,
QOpenGLVersionStatus::OpenGLStatus* arg3) {
  auto ret = new QOpenGLVersionStatus(arg1, arg2, *((QOpenGLVersionStatus::OpenGLStatus*)arg3));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

