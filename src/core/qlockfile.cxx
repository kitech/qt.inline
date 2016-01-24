// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qlockfile.h
// dst-file: /src/core/qlockfile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlockfile.h>


// <= header block end

// main block begin =>
void __keep_qlockfile_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLockFile_Class_Size()
{
  return sizeof(QLockFile);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 59, column 10>
//   // proto:  bool QLockFile::removeStaleLockFile();
// _ZN9QLockFile19removeStaleLockFileEv removeStaleLockFile()
extern "C"
bool
C_ZN9QLockFile19removeStaleLockFileEv(void *qthis) {
  auto ret =
  ((QLockFile*)qthis)->removeStaleLockFile();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 55, column 9>
//   // proto:  int QLockFile::staleLockTime();
// _ZNK9QLockFile13staleLockTimeEv staleLockTime()
extern "C"
int
C_ZNK9QLockFile13staleLockTimeEv(void *qthis) {
  auto ret =
  ((QLockFile*)qthis)->staleLockTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 57, column 10>
//   // proto:  bool QLockFile::isLocked();
// _ZNK9QLockFile8isLockedEv isLocked()
extern "C"
bool
C_ZNK9QLockFile8isLockedEv(void *qthis) {
  auto ret =
  ((QLockFile*)qthis)->isLocked();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QLockFile::~QLockFile();
extern "C"
void C_ZN9QLockFileD2Ev(void *qthis) {
  delete (QLockFile*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 67, column 15>
//   // proto:  QLockFile::LockError QLockFile::error();
// _ZNK9QLockFile5errorEv error()
extern "C"
QLockFile::LockError
C_ZNK9QLockFile5errorEv(void *qthis) {
  auto ret =
  ((QLockFile*)qthis)->error();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 52, column 10>
//   // proto:  void QLockFile::unlock();
// _ZN9QLockFile6unlockEv unlock()
extern "C"
void
C_ZN9QLockFile6unlockEv(void *qthis) {
  ((QLockFile*)qthis)->unlock();
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 51, column 10>
//   // proto:  bool QLockFile::tryLock(int timeout);
// _ZN9QLockFile7tryLockEi tryLock(int)
extern "C"
bool
C_ZN9QLockFile7tryLockEi(void *qthis,
int arg1) {
  auto ret =
  ((QLockFile*)qthis)->tryLock(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 50, column 10>
//   // proto:  bool QLockFile::lock();
// _ZN9QLockFile4lockEv lock()
extern "C"
bool
C_ZN9QLockFile4lockEv(void *qthis) {
  auto ret =
  ((QLockFile*)qthis)->lock();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 54, column 10>
//   // proto:  void QLockFile::setStaleLockTime(int );
// _ZN9QLockFile16setStaleLockTimeEi setStaleLockTime(int)
extern "C"
void
C_ZN9QLockFile16setStaleLockTimeEi(void *qthis,
int arg1) {
  ((QLockFile*)qthis)->setStaleLockTime(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 58, column 10>
//   // proto:  bool QLockFile::getLockInfo(qint64 * pid, QString * hostname, QString * appname);
// _ZNK9QLockFile11getLockInfoEPxP7QStringS2_ getLockInfo(qint64 *, class QString *, class QString *)
extern "C"
bool
C_ZNK9QLockFile11getLockInfoEPxP7QStringS2_(void *qthis,
qint64 * arg1,
QString * arg2,
QString * arg3) {
  auto ret =
  ((QLockFile*)qthis)->getLockInfo(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlockfile.h', line 47, column 5>
//   // proto:  void QLockFile::QLockFile(const QString & fileName);
extern "C"
QLockFile*
C_ZN9QLockFileC2ERK7QString(const QString* arg1) {
  auto ret = new QLockFile(*((const QString*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

