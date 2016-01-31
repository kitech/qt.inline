#include <qnetworkinterface.h>
#include <qlist.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQml/qqmlincubator.h
// dst-file: /src/qml/qqmlincubator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qqmlincubator.h>

extern "C" {

int QQmlIncubationController_Class_Size()
{
  return sizeof(QQmlIncubationController);
}

int QQmlIncubator_Class_Size()
{
  return sizeof(QQmlIncubator);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qqmlincubator_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 101, column 9>
//   // proto:  int QQmlIncubationController::incubatingObjectCount();
if (true) {
  auto f = [](QQmlIncubationController flythis) {
    ((QQmlIncubationController*)0)->incubatingObjectCount();
    flythis.incubatingObjectCount();
  };
  if (f == nullptr){}
}
// _ZNK24QQmlIncubationController21incubatingObjectCountEv incubatingObjectCount()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 100, column 17>
//   // proto:  QQmlEngine * QQmlIncubationController::engine();
if (true) {
  auto f = [](QQmlIncubationController flythis) {
    ((QQmlIncubationController*)0)->engine();
    flythis.engine();
  };
  if (f == nullptr){}
}
// _ZNK24QQmlIncubationController6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 97, column 5>
//   // proto:  void QQmlIncubationController::QQmlIncubationController();
if (true) {
  auto f = []() {
    new QQmlIncubationController();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 104, column 10>
//   // proto:  void QQmlIncubationController::incubateWhile(volatile bool * flag, int msecs);
if (true) {
  auto f = [](QQmlIncubationController flythis, volatile bool * arg1, int arg2) {
    ((QQmlIncubationController*)0)->incubateWhile(arg1, arg2);
    flythis.incubateWhile(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN24QQmlIncubationController13incubateWhileEPVbi incubateWhile(volatile _Bool *, int)
//   // proto:  void QQmlIncubationController::~QQmlIncubationController();
if (true) {
  delete ((QQmlIncubationController*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 103, column 10>
//   // proto:  void QQmlIncubationController::incubateFor(int msecs);
if (true) {
  auto f = [](QQmlIncubationController flythis, int arg1) {
    ((QQmlIncubationController*)0)->incubateFor(arg1);
    flythis.incubateFor(arg1);
  };
  if (f == nullptr){}
}
// _ZN24QQmlIncubationController11incubateForEi incubateFor(int)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 66, column 10>
//   // proto:  void QQmlIncubator::forceCompletion();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->forceCompletion();
    flythis.forceCompletion();
  };
  if (f == nullptr){}
}
// _ZN13QQmlIncubator15forceCompletionEv forceCompletion()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 68, column 10>
//   // proto:  bool QQmlIncubator::isNull();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->isNull();
    flythis.isNull();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 65, column 10>
//   // proto:  void QQmlIncubator::clear();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->clear();
    flythis.clear();
  };
  if (f == nullptr){}
}
// _ZN13QQmlIncubator5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 71, column 10>
//   // proto:  bool QQmlIncubator::isLoading();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->isLoading();
    flythis.isLoading();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator9isLoadingEv isLoading()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 79, column 14>
//   // proto:  QObject * QQmlIncubator::object();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->object();
    flythis.object();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator6objectEv object()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 62, column 5>
//   // proto:  void QQmlIncubator::QQmlIncubator(QQmlIncubator::IncubationMode );
if (true) {
  auto f = [](QQmlIncubator::IncubationMode arg1) {
    new QQmlIncubator(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 73, column 22>
//   // proto:  QList<QQmlError> QQmlIncubator::errors();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->errors();
    flythis.errors();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator6errorsEv errors()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 77, column 12>
//   // proto:  QQmlIncubator::Status QQmlIncubator::status();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->status();
    flythis.status();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator6statusEv status()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 70, column 10>
//   // proto:  bool QQmlIncubator::isError();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->isError();
    flythis.isError();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator7isErrorEv isError()
//   // proto:  void QQmlIncubator::~QQmlIncubator();
if (true) {
  delete ((QQmlIncubator*)0);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 75, column 20>
//   // proto:  QQmlIncubator::IncubationMode QQmlIncubator::incubationMode();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->incubationMode();
    flythis.incubationMode();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator14incubationModeEv incubationMode()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 69, column 10>
//   // proto:  bool QQmlIncubator::isReady();
if (true) {
  auto f = [](QQmlIncubator flythis) {
    ((QQmlIncubator*)0)->isReady();
    flythis.isReady();
  };
  if (f == nullptr){}
}
// _ZNK13QQmlIncubator7isReadyEv isReady()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 101, column 9>
//   // proto:  int QQmlIncubationController::incubatingObjectCount();
extern "C"
void C_ZNK24QQmlIncubationController21incubatingObjectCountEv(void *qthis) {
  ((QQmlIncubationController*)qthis)->incubatingObjectCount();
}
// _ZNK24QQmlIncubationController21incubatingObjectCountEv incubatingObjectCount()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 100, column 17>
//   // proto:  QQmlEngine * QQmlIncubationController::engine();
extern "C"
void C_ZNK24QQmlIncubationController6engineEv(void *qthis) {
  ((QQmlIncubationController*)qthis)->engine();
}
// _ZNK24QQmlIncubationController6engineEv engine()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 97, column 5>
//   // proto:  void QQmlIncubationController::QQmlIncubationController();
extern "C"
void C_ZN24QQmlIncubationControllerC2Ev() {
  new QQmlIncubationController();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 104, column 10>
//   // proto:  void QQmlIncubationController::incubateWhile(volatile bool * flag, int msecs);
extern "C"
void C_ZN24QQmlIncubationController13incubateWhileEPVbi(void *qthis, volatile bool * arg1, int arg2) {
  ((QQmlIncubationController*)qthis)->incubateWhile(arg1, arg2);
}
// _ZN24QQmlIncubationController13incubateWhileEPVbi incubateWhile(volatile _Bool *, int)
//   // proto:  void QQmlIncubationController::~QQmlIncubationController();
extern "C"
void C_ZN24QQmlIncubationControllerD2Ev(void *qthis) {
  delete (QQmlIncubationController*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 103, column 10>
//   // proto:  void QQmlIncubationController::incubateFor(int msecs);
extern "C"
void C_ZN24QQmlIncubationController11incubateForEi(void *qthis, int arg1) {
  ((QQmlIncubationController*)qthis)->incubateFor(arg1);
}
// _ZN24QQmlIncubationController11incubateForEi incubateFor(int)
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 66, column 10>
//   // proto:  void QQmlIncubator::forceCompletion();
extern "C"
void C_ZN13QQmlIncubator15forceCompletionEv(void *qthis) {
  ((QQmlIncubator*)qthis)->forceCompletion();
}
// _ZN13QQmlIncubator15forceCompletionEv forceCompletion()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 68, column 10>
//   // proto:  bool QQmlIncubator::isNull();
extern "C"
void C_ZNK13QQmlIncubator6isNullEv(void *qthis) {
  ((QQmlIncubator*)qthis)->isNull();
}
// _ZNK13QQmlIncubator6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 65, column 10>
//   // proto:  void QQmlIncubator::clear();
extern "C"
void C_ZN13QQmlIncubator5clearEv(void *qthis) {
  ((QQmlIncubator*)qthis)->clear();
}
// _ZN13QQmlIncubator5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 71, column 10>
//   // proto:  bool QQmlIncubator::isLoading();
extern "C"
void C_ZNK13QQmlIncubator9isLoadingEv(void *qthis) {
  ((QQmlIncubator*)qthis)->isLoading();
}
// _ZNK13QQmlIncubator9isLoadingEv isLoading()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 79, column 14>
//   // proto:  QObject * QQmlIncubator::object();
extern "C"
void C_ZNK13QQmlIncubator6objectEv(void *qthis) {
  ((QQmlIncubator*)qthis)->object();
}
// _ZNK13QQmlIncubator6objectEv object()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 62, column 5>
//   // proto:  void QQmlIncubator::QQmlIncubator(QQmlIncubator::IncubationMode );
extern "C"
void C_ZN13QQmlIncubatorC2ENS_14IncubationModeE(QQmlIncubator::IncubationMode arg1) {
  new QQmlIncubator(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 73, column 22>
//   // proto:  QList<QQmlError> QQmlIncubator::errors();
extern "C"
void C_ZNK13QQmlIncubator6errorsEv(void *qthis) {
  ((QQmlIncubator*)qthis)->errors();
}
// _ZNK13QQmlIncubator6errorsEv errors()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 77, column 12>
//   // proto:  QQmlIncubator::Status QQmlIncubator::status();
extern "C"
void C_ZNK13QQmlIncubator6statusEv(void *qthis) {
  ((QQmlIncubator*)qthis)->status();
}
// _ZNK13QQmlIncubator6statusEv status()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 70, column 10>
//   // proto:  bool QQmlIncubator::isError();
extern "C"
void C_ZNK13QQmlIncubator7isErrorEv(void *qthis) {
  ((QQmlIncubator*)qthis)->isError();
}
// _ZNK13QQmlIncubator7isErrorEv isError()
//   // proto:  void QQmlIncubator::~QQmlIncubator();
extern "C"
void C_ZN13QQmlIncubatorD2Ev(void *qthis) {
  delete (QQmlIncubator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 75, column 20>
//   // proto:  QQmlIncubator::IncubationMode QQmlIncubator::incubationMode();
extern "C"
void C_ZNK13QQmlIncubator14incubationModeEv(void *qthis) {
  ((QQmlIncubator*)qthis)->incubationMode();
}
// _ZNK13QQmlIncubator14incubationModeEv incubationMode()
// <SourceLocation file '/usr/include/qt/QtQml/qqmlincubator.h', line 69, column 10>
//   // proto:  bool QQmlIncubator::isReady();
extern "C"
void C_ZNK13QQmlIncubator7isReadyEv(void *qthis) {
  ((QQmlIncubator*)qthis)->isReady();
}
// _ZNK13QQmlIncubator7isReadyEv isReady()
// <= ext block end

// body block begin =>
// <= body block end

