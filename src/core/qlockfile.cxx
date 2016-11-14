// /usr/include/qt/QtCore/qlockfile.h
#include <qlockfile.h>
#include <QtCore>

// /usr/include/qt/QtCore/qlockfile.h:53
// void QLockFile(const class QString &)
extern "C"
void* C_ZN9QLockFileC1ERK7QString(const QString & fileName) {
  return new QLockFile(fileName);
}
// /usr/include/qt/QtCore/qlockfile.h:54
// void ~QLockFile()
extern "C"
void C_ZN9QLockFileD1Ev(void *this_) {
  delete (QLockFile*)(this_);
}
// /usr/include/qt/QtCore/qlockfile.h:56
// bool lock()
extern "C"
void C_ZN9QLockFile4lockEv(void *this_) {
  /*return*/ ((QLockFile*)this_)->lock();
}
// /usr/include/qt/QtCore/qlockfile.h:57
// bool tryLock(int)
extern "C"
void C_ZN9QLockFile7tryLockEi(void *this_, int timeout) {
  /*return*/ ((QLockFile*)this_)->tryLock(timeout);
}
// /usr/include/qt/QtCore/qlockfile.h:58
// void unlock()
extern "C"
void C_ZN9QLockFile6unlockEv(void *this_) {
  ((QLockFile*)this_)->unlock();
}
// /usr/include/qt/QtCore/qlockfile.h:60
// void setStaleLockTime(int)
extern "C"
void C_ZN9QLockFile16setStaleLockTimeEi(void *this_, int a0) {
  ((QLockFile*)this_)->setStaleLockTime(a0);
}
// /usr/include/qt/QtCore/qlockfile.h:61
// int staleLockTime()
extern "C"
void C_ZNK9QLockFile13staleLockTimeEv(void *this_) {
  /*return*/ ((QLockFile*)this_)->staleLockTime();
}
// /usr/include/qt/QtCore/qlockfile.h:63
// bool isLocked()
extern "C"
void C_ZNK9QLockFile8isLockedEv(void *this_) {
  /*return*/ ((QLockFile*)this_)->isLocked();
}
// /usr/include/qt/QtCore/qlockfile.h:64
// bool getLockInfo(qint64 *, class QString *, class QString *)
extern "C"
void C_ZNK9QLockFile11getLockInfoEPxP7QStringS2_(void *this_, qint64 * pid, QString * hostname, QString * appname) {
  /*return*/ ((QLockFile*)this_)->getLockInfo(pid, hostname, appname);
}
// /usr/include/qt/QtCore/qlockfile.h:65
// bool removeStaleLockFile()
extern "C"
void C_ZN9QLockFile19removeStaleLockFileEv(void *this_) {
  /*return*/ ((QLockFile*)this_)->removeStaleLockFile();
}
// /usr/include/qt/QtCore/qlockfile.h:73
// QLockFile::LockError error()
extern "C"
void C_ZNK9QLockFile5errorEv(void *this_) {
  /*return*/ ((QLockFile*)this_)->error();
}