//  header block begin
// /usr/include/qt/QtCore/qlockfile.h
#ifndef protected
#define protected public
#endif
#include <qlockfile.h>
#include <QtCore>
#include "callback_inherit.h"

// QLockFile is pure virtual: false
// QLockFile has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQLockFile : public QLockFile {
public:
  virtual ~MyQLockFile() {}
// void QLockFile(const class QString &)
MyQLockFile(const QString & fileName) : QLockFile(fileName) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:53
// [-2] void QLockFile(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QLockFileC2ERK7QString(QString* fileName) {
  return  new QLockFile(*fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:54
// [-2] void ~QLockFile()
extern "C" Q_DECL_EXPORT
void C_ZN9QLockFileD2Ev(void *this_) {
  delete (QLockFile*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:56
// [1] bool lock()
extern "C" Q_DECL_EXPORT
bool C_ZN9QLockFile4lockEv(void *this_) {
  return (bool)((QLockFile*)this_)->lock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:57
// [1] bool tryLock(int)
extern "C" Q_DECL_EXPORT
bool C_ZN9QLockFile7tryLockEi(void *this_, int timeout) {
  return (bool)((QLockFile*)this_)->tryLock(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:58
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN9QLockFile6unlockEv(void *this_) {
  ((QLockFile*)this_)->unlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:60
// [-2] void setStaleLockTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QLockFile16setStaleLockTimeEi(void *this_, int arg0) {
  ((QLockFile*)this_)->setStaleLockTime(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:61
// [4] int staleLockTime()
extern "C" Q_DECL_EXPORT
int C_ZNK9QLockFile13staleLockTimeEv(void *this_) {
  return (int)((QLockFile*)this_)->staleLockTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:63
// [1] bool isLocked()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLockFile8isLockedEv(void *this_) {
  return (bool)((QLockFile*)this_)->isLocked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:64
// [1] bool getLockInfo(qint64 *, class QString *, class QString *)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QLockFile11getLockInfoEPxP7QStringS2_(void *this_, qint64 * pid, QString * hostname, QString * appname) {
  return (bool)((QLockFile*)this_)->getLockInfo(pid, hostname, appname);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:65
// [1] bool removeStaleLockFile()
extern "C" Q_DECL_EXPORT
bool C_ZN9QLockFile19removeStaleLockFileEv(void *this_) {
  return (bool)((QLockFile*)this_)->removeStaleLockFile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlockfile.h:73
// [4] QLockFile::LockError error()
extern "C" Q_DECL_EXPORT
QLockFile::LockError C_ZNK9QLockFile5errorEv(void *this_) {
  return (QLockFile::LockError)((QLockFile*)this_)->error();
}

//  main block end
