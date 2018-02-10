//  header block begin
// /usr/include/qt/QtQml/qqmlincubator.h
#include <qqmlincubator.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlIncubator is pure virtual: false
// QQmlIncubator has virtual projected: true
//  header block end

//  main block begin

class MyQQmlIncubator : public QQmlIncubator {
public:
  virtual ~MyQQmlIncubator() {}
// void QQmlIncubator(enum QQmlIncubator::IncubationMode)
MyQQmlIncubator(QQmlIncubator::IncubationMode arg0) : QQmlIncubator(arg0) {}
// void statusChanged(enum QQmlIncubator::Status)
  virtual void statusChanged(QQmlIncubator::Status arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"statusChanged", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQmlIncubator::statusChanged(arg0);
  }
  }

// void setInitialState(class QObject *)
  virtual void setInitialState(QObject * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setInitialState", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QQmlIncubator::setInitialState(arg0);
  }
  }

};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:68
// [-2] void QQmlIncubator(enum QQmlIncubator::IncubationMode)
extern "C"
void* C_ZN13QQmlIncubatorC2ENS_14IncubationModeE(QQmlIncubator::IncubationMode arg0) {
  auto _nilp = (MyQQmlIncubator*)(0);
  return  new MyQQmlIncubator(arg0);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:69
// [-2] void ~QQmlIncubator()
extern "C"
void C_ZN13QQmlIncubatorD2Ev(void *this_) {
  delete (QQmlIncubator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:71
// [-2] void clear()
extern "C"
void C_ZN13QQmlIncubator5clearEv(void *this_) {
  ((QQmlIncubator*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:72
// [-2] void forceCompletion()
extern "C"
void C_ZN13QQmlIncubator15forceCompletionEv(void *this_) {
  ((QQmlIncubator*)this_)->forceCompletion();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:74
// [1] bool isNull()
extern "C"
bool C_ZNK13QQmlIncubator6isNullEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isNull();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:75
// [1] bool isReady()
extern "C"
bool C_ZNK13QQmlIncubator7isReadyEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isReady();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:76
// [1] bool isError()
extern "C"
bool C_ZNK13QQmlIncubator7isErrorEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isError();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:77
// [1] bool isLoading()
extern "C"
bool C_ZNK13QQmlIncubator9isLoadingEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isLoading();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:81
// [4] QQmlIncubator::IncubationMode incubationMode()
extern "C"
QQmlIncubator::IncubationMode C_ZNK13QQmlIncubator14incubationModeEv(void *this_) {
  return (QQmlIncubator::IncubationMode)((QQmlIncubator*)this_)->incubationMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:83
// [4] QQmlIncubator::Status status()
extern "C"
QQmlIncubator::Status C_ZNK13QQmlIncubator6statusEv(void *this_) {
  return (QQmlIncubator::Status)((QQmlIncubator*)this_)->status();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:85
// [8] QObject * object()
extern "C"
void* C_ZNK13QQmlIncubator6objectEv(void *this_) {
  return (void*)((QQmlIncubator*)this_)->object();
}
//  main block end
