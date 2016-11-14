// /usr/include/qt/QtCore/qsystemsemaphore.h
#include <qsystemsemaphore.h>
#include <QtCore>

// /usr/include/qt/QtCore/qsystemsemaphore.h:74
// void QSystemSemaphore(const class QString &, int, enum QSystemSemaphore::AccessMode)
extern "C"
void* C_ZN16QSystemSemaphoreC1ERK7QStringiNS_10AccessModeE(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode) {
  return new QSystemSemaphore(key, initialValue, mode);
}
// /usr/include/qt/QtCore/qsystemsemaphore.h:75
// void ~QSystemSemaphore()
extern "C"
void C_ZN16QSystemSemaphoreD1Ev(void *this_) {
  delete (QSystemSemaphore*)(this_);
}
// /usr/include/qt/QtCore/qsystemsemaphore.h:77
// void setKey(const class QString &, int, enum QSystemSemaphore::AccessMode)
extern "C"
void C_ZN16QSystemSemaphore6setKeyERK7QStringiNS_10AccessModeE(void *this_, const QString & key, int initialValue, QSystemSemaphore::AccessMode mode) {
  ((QSystemSemaphore*)this_)->setKey(key, initialValue, mode);
}
// /usr/include/qt/QtCore/qsystemsemaphore.h:78
// QString key()
extern "C"
void C_ZNK16QSystemSemaphore3keyEv(void *this_) {
  /*return*/ ((QSystemSemaphore*)this_)->key();
}
// /usr/include/qt/QtCore/qsystemsemaphore.h:80
// bool acquire()
extern "C"
void C_ZN16QSystemSemaphore7acquireEv(void *this_) {
  /*return*/ ((QSystemSemaphore*)this_)->acquire();
}
// /usr/include/qt/QtCore/qsystemsemaphore.h:81
// bool release(int)
extern "C"
void C_ZN16QSystemSemaphore7releaseEi(void *this_, int n) {
  /*return*/ ((QSystemSemaphore*)this_)->release(n);
}
// /usr/include/qt/QtCore/qsystemsemaphore.h:83
// QSystemSemaphore::SystemSemaphoreError error()
extern "C"
void C_ZNK16QSystemSemaphore5errorEv(void *this_) {
  /*return*/ ((QSystemSemaphore*)this_)->error();
}
// /usr/include/qt/QtCore/qsystemsemaphore.h:84
// QString errorString()
extern "C"
void C_ZNK16QSystemSemaphore11errorStringEv(void *this_) {
  /*return*/ ((QSystemSemaphore*)this_)->errorString();
}