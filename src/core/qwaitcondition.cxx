//  header block begin
// /usr/include/qt/QtCore/qwaitcondition.h
#include <qwaitcondition.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qwaitcondition.h:59
// void QWaitCondition()
extern "C"
void* C_ZN14QWaitConditionC1Ev() {
  return new QWaitCondition();
}
// /usr/include/qt/QtCore/qwaitcondition.h:60
// void ~QWaitCondition()
extern "C"
void C_ZN14QWaitConditionD1Ev(void *this_) {
  delete (QWaitCondition*)(this_);
}
// /usr/include/qt/QtCore/qwaitcondition.h:62
// bool wait(class QMutex *, unsigned long)
extern "C"
void C_ZN14QWaitCondition4waitEP6QMutexm(void *this_, QMutex * lockedMutex, unsigned long time) {
  /*return*/ ((QWaitCondition*)this_)->wait(lockedMutex, time);
}
// /usr/include/qt/QtCore/qwaitcondition.h:63
// bool wait(class QReadWriteLock *, unsigned long)
extern "C"
void C_ZN14QWaitCondition4waitEP14QReadWriteLockm(void *this_, QReadWriteLock * lockedReadWriteLock, unsigned long time) {
  /*return*/ ((QWaitCondition*)this_)->wait(lockedReadWriteLock, time);
}
// /usr/include/qt/QtCore/qwaitcondition.h:65
// void wakeOne()
extern "C"
void C_ZN14QWaitCondition7wakeOneEv(void *this_) {
  ((QWaitCondition*)this_)->wakeOne();
}
// /usr/include/qt/QtCore/qwaitcondition.h:66
// void wakeAll()
extern "C"
void C_ZN14QWaitCondition7wakeAllEv(void *this_) {
  ((QWaitCondition*)this_)->wakeAll();
}
//  main block end
