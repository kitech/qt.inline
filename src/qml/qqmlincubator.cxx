//  header block begin
// /usr/include/qt/QtQml/qqmlincubator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlincubator.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlIncubator is pure virtual: false
// QQmlIncubator has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlIncubator : public QQmlIncubator {
public:
  virtual ~MyQQmlIncubator() {}
// void QQmlIncubator(QQmlIncubator::IncubationMode)
MyQQmlIncubator(QQmlIncubator::IncubationMode arg0) : QQmlIncubator(arg0) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void statusChanged(QQmlIncubator::Status)
  virtual void statusChanged(QQmlIncubator::Status arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"statusChanged", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQmlIncubator::statusChanged(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setInitialState(QObject *)
  virtual void setInitialState(QObject * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setInitialState", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QQmlIncubator::setInitialState(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:88
// [-2] void statusChanged(QQmlIncubator::Status)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlIncubator13statusChangedENS_6StatusE(void *this_, QQmlIncubator::Status arg0) {
  ((QQmlIncubator*)this_)->QQmlIncubator::statusChanged(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:89
// [-2] void setInitialState(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlIncubator15setInitialStateEP7QObject(void *this_, QObject * arg0) {
  ((QQmlIncubator*)this_)->QQmlIncubator::setInitialState(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:68
// [-2] void QQmlIncubator(QQmlIncubator::IncubationMode)
extern "C" Q_DECL_EXPORT
void* C_ZN13QQmlIncubatorC2ENS_14IncubationModeE(QQmlIncubator::IncubationMode arg0) {
  auto _nilp = (MyQQmlIncubator*)(0);
  return  new MyQQmlIncubator(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:69
// [-2] void ~QQmlIncubator()
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlIncubatorD2Ev(void *this_) {
  delete (QQmlIncubator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:71
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlIncubator5clearEv(void *this_) {
  ((QQmlIncubator*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:72
// [-2] void forceCompletion()
extern "C" Q_DECL_EXPORT
void C_ZN13QQmlIncubator15forceCompletionEv(void *this_) {
  ((QQmlIncubator*)this_)->forceCompletion();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:74
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlIncubator6isNullEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:75
// [1] bool isReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlIncubator7isReadyEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:76
// [1] bool isError()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlIncubator7isErrorEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:77
// [1] bool isLoading()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QQmlIncubator9isLoadingEv(void *this_) {
  return (bool)((QQmlIncubator*)this_)->isLoading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:79
// [-2] QList<QQmlError> errors()
extern "C" Q_DECL_EXPORT
QList<QQmlError>* C_ZNK13QQmlIncubator6errorsEv(void *this_) {
  auto rv = ((QQmlIncubator*)this_)->errors();
return new QList<QQmlError>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:81
// [4] QQmlIncubator::IncubationMode incubationMode()
extern "C" Q_DECL_EXPORT
QQmlIncubator::IncubationMode C_ZNK13QQmlIncubator14incubationModeEv(void *this_) {
  return (QQmlIncubator::IncubationMode)((QQmlIncubator*)this_)->incubationMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:83
// [4] QQmlIncubator::Status status()
extern "C" Q_DECL_EXPORT
QQmlIncubator::Status C_ZNK13QQmlIncubator6statusEv(void *this_) {
  return (QQmlIncubator::Status)((QQmlIncubator*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlincubator.h:85
// [8] QObject * object()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QQmlIncubator6objectEv(void *this_) {
  return (void*)((QQmlIncubator*)this_)->object();
}

//  main block end
