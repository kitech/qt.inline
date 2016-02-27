// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlincubator.h
// dst-file: /src/qml/qqmlincubator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlincubator.h>


#include <qqmlerror.h>
#include <qlist.h>
#include <qnetworkinterface.h>
// <= header block end

// main block begin =>
void __keep_qqmlincubator_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlIncubationController_Class_Size()
{
  return sizeof(QQmlIncubationController);
}

extern "C"
int QQmlIncubator_Class_Size()
{
  return sizeof(QQmlIncubator);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 101, column 9>
//   // proto:  int QQmlIncubationController::incubatingObjectCount();
// _ZNK24QQmlIncubationController21incubatingObjectCountEv incubatingObjectCount()
extern "C"
int
C_ZNK24QQmlIncubationController21incubatingObjectCountEv(void *qthis) {
  auto ret =
  ((QQmlIncubationController*)qthis)->incubatingObjectCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 100, column 17>
//   // proto:  QQmlEngine * QQmlIncubationController::engine();
// _ZNK24QQmlIncubationController6engineEv engine()
extern "C"
void*
C_ZNK24QQmlIncubationController6engineEv(void *qthis) {
  auto ret =
  ((QQmlIncubationController*)qthis)->engine();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 97, column 5>
//   // proto:  void QQmlIncubationController::QQmlIncubationController();
extern "C"
QQmlIncubationController*
C_ZN24QQmlIncubationControllerC2Ev() {
  auto ret = new QQmlIncubationController();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 104, column 10>
//   // proto:  void QQmlIncubationController::incubateWhile(volatile bool * flag, int msecs);
// _ZN24QQmlIncubationController13incubateWhileEPVbi incubateWhile(volatile _Bool *, int)
extern "C"
void
C_ZN24QQmlIncubationController13incubateWhileEPVbi(void *qthis,
volatile bool * arg1,
int arg2) {
  ((QQmlIncubationController*)qthis)->incubateWhile(arg1,
arg2);
}
//   // proto:  void QQmlIncubationController::~QQmlIncubationController();
extern "C"
void C_ZN24QQmlIncubationControllerD2Ev(void *qthis) {
  delete (QQmlIncubationController*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 103, column 10>
//   // proto:  void QQmlIncubationController::incubateFor(int msecs);
// _ZN24QQmlIncubationController11incubateForEi incubateFor(int)
extern "C"
void
C_ZN24QQmlIncubationController11incubateForEi(void *qthis,
int arg1) {
  ((QQmlIncubationController*)qthis)->incubateFor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 66, column 10>
//   // proto:  void QQmlIncubator::forceCompletion();
// _ZN13QQmlIncubator15forceCompletionEv forceCompletion()
extern "C"
void
C_ZN13QQmlIncubator15forceCompletionEv(void *qthis) {
  ((QQmlIncubator*)qthis)->forceCompletion();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 68, column 10>
//   // proto:  bool QQmlIncubator::isNull();
// _ZNK13QQmlIncubator6isNullEv isNull()
extern "C"
bool
C_ZNK13QQmlIncubator6isNullEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 65, column 10>
//   // proto:  void QQmlIncubator::clear();
// _ZN13QQmlIncubator5clearEv clear()
extern "C"
void
C_ZN13QQmlIncubator5clearEv(void *qthis) {
  ((QQmlIncubator*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 71, column 10>
//   // proto:  bool QQmlIncubator::isLoading();
// _ZNK13QQmlIncubator9isLoadingEv isLoading()
extern "C"
bool
C_ZNK13QQmlIncubator9isLoadingEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->isLoading();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 79, column 14>
//   // proto:  QObject * QQmlIncubator::object();
// _ZNK13QQmlIncubator6objectEv object()
extern "C"
void*
C_ZNK13QQmlIncubator6objectEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->object();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 62, column 5>
//   // proto:  void QQmlIncubator::QQmlIncubator(QQmlIncubator::IncubationMode );
extern "C"
QQmlIncubator*
C_ZN13QQmlIncubatorC2ENS_14IncubationModeE(QQmlIncubator::IncubationMode arg1) {
  auto ret = new QQmlIncubator(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 73, column 22>
//   // proto:  QList<QQmlError> QQmlIncubator::errors();
// _ZNK13QQmlIncubator6errorsEv errors()
extern "C"
QList<QQmlError>*
C_ZNK13QQmlIncubator6errorsEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->errors();
  return new QList<QQmlError>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 77, column 12>
//   // proto:  QQmlIncubator::Status QQmlIncubator::status();
// _ZNK13QQmlIncubator6statusEv status()
extern "C"
QQmlIncubator::Status
C_ZNK13QQmlIncubator6statusEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->status();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 70, column 10>
//   // proto:  bool QQmlIncubator::isError();
// _ZNK13QQmlIncubator7isErrorEv isError()
extern "C"
bool
C_ZNK13QQmlIncubator7isErrorEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->isError();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QQmlIncubator::~QQmlIncubator();
extern "C"
void C_ZN13QQmlIncubatorD2Ev(void *qthis) {
  delete (QQmlIncubator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 75, column 20>
//   // proto:  QQmlIncubator::IncubationMode QQmlIncubator::incubationMode();
// _ZNK13QQmlIncubator14incubationModeEv incubationMode()
extern "C"
QQmlIncubator::IncubationMode
C_ZNK13QQmlIncubator14incubationModeEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->incubationMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 69, column 10>
//   // proto:  bool QQmlIncubator::isReady();
// _ZNK13QQmlIncubator7isReadyEv isReady()
extern "C"
bool
C_ZNK13QQmlIncubator7isReadyEv(void *qthis) {
  auto ret =
  ((QQmlIncubator*)qthis)->isReady();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

