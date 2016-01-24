// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qfileinfo.h
// dst-file: /src/core/qfileinfo.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfileinfo.h>


#include <qstring.h>
#include <qfiledevice.h>
#include <qglobal.h>
#include <qdatetime.h>
#include <qdir.h>
// <= header block end

// main block begin =>
void __keep_qfileinfo_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 115, column 20>
//   // proto:  QString QFileInfo::symLinkTarget();
if (true) {
  auto f = [](QFileInfo flythis) {
    ((QFileInfo*)0)->symLinkTarget();
    flythis.symLinkTarget();
  };
  if (f == nullptr){}
}
// _ZNK9QFileInfo13symLinkTargetEv symLinkTarget()
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 105, column 17>
//   // proto:  bool QFileInfo::isAbsolute();
if (true) {
  auto f = [](QFileInfo flythis) {
    ((QFileInfo*)0)->isAbsolute();
    flythis.isAbsolute();
  };
  if (f == nullptr){}
}
// _ZNK9QFileInfo10isAbsoluteEv isAbsolute()
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 69, column 17>
//   // proto:  void QFileInfo::swap(QFileInfo & other);
if (true) {
  auto f = [](QFileInfo flythis, QFileInfo & arg1) {
    ((QFileInfo*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QFileInfo4swapERS_ swap(class QFileInfo &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFileInfo_Class_Size()
{
  return sizeof(QFileInfo);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 101, column 10>
//   // proto:  bool QFileInfo::isHidden();
// _ZNK9QFileInfo8isHiddenEv isHidden()
extern "C"
bool
C_ZNK9QFileInfo8isHiddenEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isHidden();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 56, column 5>
//   // proto:  void QFileInfo::QFileInfo();
extern "C"
QFileInfo*
C_ZN9QFileInfoC2Ev() {
  auto ret = new QFileInfo();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 90, column 13>
//   // proto:  QString QFileInfo::completeSuffix();
// _ZNK9QFileInfo14completeSuffixEv completeSuffix()
extern "C"
QString*
C_ZNK9QFileInfo14completeSuffixEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->completeSuffix();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 94, column 13>
//   // proto:  QString QFileInfo::canonicalPath();
// _ZNK9QFileInfo13canonicalPathEv canonicalPath()
extern "C"
QString*
C_ZNK9QFileInfo13canonicalPathEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->canonicalPath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 79, column 17>
//   // proto: static bool QFileInfo::exists(const QString & file);
// _ZN9QFileInfo6existsERK7QString exists(const class QString &)
extern "C"
bool
C_ZN9QFileInfo6existsERK7QString(const QString* arg1) {
  auto ret =
  QFileInfo::exists(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 106, column 10>
//   // proto:  bool QFileInfo::makeAbsolute();
// _ZN9QFileInfo12makeAbsoluteEv makeAbsolute()
extern "C"
bool
C_ZN9QFileInfo12makeAbsoluteEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->makeAbsolute();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 111, column 10>
//   // proto:  bool QFileInfo::isRoot();
// _ZNK9QFileInfo6isRootEv isRoot()
extern "C"
bool
C_ZNK9QFileInfo6isRootEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isRoot();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 84, column 13>
//   // proto:  QString QFileInfo::canonicalFilePath();
// _ZNK9QFileInfo17canonicalFilePathEv canonicalFilePath()
extern "C"
QString*
C_ZNK9QFileInfo17canonicalFilePathEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->canonicalFilePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 109, column 10>
//   // proto:  bool QFileInfo::isDir();
// _ZNK9QFileInfo5isDirEv isDir()
extern "C"
bool
C_ZNK9QFileInfo5isDirEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isDir();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 57, column 5>
//   // proto:  void QFileInfo::QFileInfo(const QString & file);
extern "C"
QFileInfo*
C_ZN9QFileInfoC2ERK7QString(const QString* arg1) {
  auto ret = new QFileInfo(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 123, column 24>
//   // proto:  QFile::Permissions QFileInfo::permissions();
// _ZNK9QFileInfo11permissionsEv permissions()
extern "C"
QFlags<QFileDevice::Permission>*
C_ZNK9QFileInfo11permissionsEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->permissions();
  return new QFlags<QFileDevice::Permission>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 115, column 20>
//   // proto:  QString QFileInfo::symLinkTarget();
// _ZNK9QFileInfo13symLinkTargetEv symLinkTarget()
extern "C"
QString*
C_ZNK9QFileInfo13symLinkTargetEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->symLinkTarget();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 75, column 10>
//   // proto:  void QFileInfo::setFile(const QString & file);
// _ZN9QFileInfo7setFileERK7QString setFile(const class QString &)
extern "C"
void
C_ZN9QFileInfo7setFileERK7QString(void *qthis,
const QString* arg1) {
  ((QFileInfo*)qthis)->setFile(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 108, column 10>
//   // proto:  bool QFileInfo::isFile();
// _ZNK9QFileInfo6isFileEv isFile()
extern "C"
bool
C_ZNK9QFileInfo6isFileEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isFile();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 58, column 5>
//   // proto:  void QFileInfo::QFileInfo(const QFile & file);
extern "C"
QFileInfo*
C_ZN9QFileInfoC2ERK5QFile(const QFile* arg1) {
  auto ret = new QFileInfo(*((const QFile*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 76, column 10>
//   // proto:  void QFileInfo::setFile(const QFile & file);
// _ZN9QFileInfo7setFileERK5QFile setFile(const class QFile &)
extern "C"
void
C_ZN9QFileInfo7setFileERK5QFile(void *qthis,
const QFile* arg1) {
  ((QFileInfo*)qthis)->setFile(*((const QFile*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 118, column 10>
//   // proto:  uint QFileInfo::ownerId();
// _ZNK9QFileInfo7ownerIdEv ownerId()
extern "C"
unsigned int
C_ZNK9QFileInfo7ownerIdEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->ownerId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 114, column 13>
//   // proto:  QString QFileInfo::readLink();
// _ZNK9QFileInfo8readLinkEv readLink()
extern "C"
QString*
C_ZNK9QFileInfo8readLinkEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->readLink();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 82, column 13>
//   // proto:  QString QFileInfo::filePath();
// _ZNK9QFileInfo8filePathEv filePath()
extern "C"
QString*
C_ZNK9QFileInfo8filePathEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->filePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 60, column 5>
//   // proto:  void QFileInfo::QFileInfo(const QFileInfo & fileinfo);
extern "C"
QFileInfo*
C_ZN9QFileInfoC2ERKS_(const QFileInfo* arg1) {
  auto ret = new QFileInfo(*((const QFileInfo*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 110, column 10>
//   // proto:  bool QFileInfo::isSymLink();
// _ZNK9QFileInfo9isSymLinkEv isSymLink()
extern "C"
bool
C_ZNK9QFileInfo9isSymLinkEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isSymLink();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 129, column 15>
//   // proto:  QDateTime QFileInfo::lastRead();
// _ZNK9QFileInfo8lastReadEv lastRead()
extern "C"
QDateTime*
C_ZNK9QFileInfo8lastReadEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->lastRead();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 80, column 10>
//   // proto:  void QFileInfo::refresh();
// _ZN9QFileInfo7refreshEv refresh()
extern "C"
void
C_ZN9QFileInfo7refreshEv(void *qthis) {
  ((QFileInfo*)qthis)->refresh();
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 59, column 5>
//   // proto:  void QFileInfo::QFileInfo(const QDir & dir, const QString & file);
extern "C"
QFileInfo*
C_ZN9QFileInfoC2ERK4QDirRK7QString(const QDir* arg1,
const QString* arg2) {
  auto ret = new QFileInfo(*((const QDir*)arg1),
*((const QString*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 92, column 13>
//   // proto:  QString QFileInfo::path();
// _ZNK9QFileInfo4pathEv path()
extern "C"
QString*
C_ZNK9QFileInfo4pathEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->path();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 96, column 10>
//   // proto:  QDir QFileInfo::absoluteDir();
// _ZNK9QFileInfo11absoluteDirEv absoluteDir()
extern "C"
QDir*
C_ZNK9QFileInfo11absoluteDirEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->absoluteDir();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 112, column 10>
//   // proto:  bool QFileInfo::isBundle();
// _ZNK9QFileInfo8isBundleEv isBundle()
extern "C"
bool
C_ZNK9QFileInfo8isBundleEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isBundle();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 77, column 10>
//   // proto:  void QFileInfo::setFile(const QDir & dir, const QString & file);
// _ZN9QFileInfo7setFileERK4QDirRK7QString setFile(const class QDir &, const class QString &)
extern "C"
void
C_ZN9QFileInfo7setFileERK4QDirRK7QString(void *qthis,
const QDir* arg1,
const QString* arg2) {
  ((QFileInfo*)qthis)->setFile(*((const QDir*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 104, column 10>
//   // proto:  bool QFileInfo::isRelative();
// _ZNK9QFileInfo10isRelativeEv isRelative()
extern "C"
bool
C_ZNK9QFileInfo10isRelativeEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isRelative();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 132, column 10>
//   // proto:  void QFileInfo::setCaching(bool on);
// _ZN9QFileInfo10setCachingEb setCaching(_Bool)
extern "C"
void
C_ZN9QFileInfo10setCachingEb(void *qthis,
bool arg1) {
  ((QFileInfo*)qthis)->setCaching(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 127, column 15>
//   // proto:  QDateTime QFileInfo::created();
// _ZNK9QFileInfo7createdEv created()
extern "C"
QDateTime*
C_ZNK9QFileInfo7createdEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->created();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 131, column 10>
//   // proto:  bool QFileInfo::caching();
// _ZNK9QFileInfo7cachingEv caching()
extern "C"
bool
C_ZNK9QFileInfo7cachingEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->caching();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QFileInfo::~QFileInfo();
extern "C"
void C_ZN9QFileInfoD2Ev(void *qthis) {
  delete (QFileInfo*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 87, column 13>
//   // proto:  QString QFileInfo::completeBaseName();
// _ZNK9QFileInfo16completeBaseNameEv completeBaseName()
extern "C"
QString*
C_ZNK9QFileInfo16completeBaseNameEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->completeBaseName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 86, column 13>
//   // proto:  QString QFileInfo::baseName();
// _ZNK9QFileInfo8baseNameEv baseName()
extern "C"
QString*
C_ZNK9QFileInfo8baseNameEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->baseName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 100, column 10>
//   // proto:  bool QFileInfo::isExecutable();
// _ZNK9QFileInfo12isExecutableEv isExecutable()
extern "C"
bool
C_ZNK9QFileInfo12isExecutableEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isExecutable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 89, column 13>
//   // proto:  QString QFileInfo::bundleName();
// _ZNK9QFileInfo10bundleNameEv bundleName()
extern "C"
QString*
C_ZNK9QFileInfo10bundleNameEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->bundleName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 122, column 10>
//   // proto:  bool QFileInfo::permission(QFile::Permissions permissions);
// _ZNK9QFileInfo10permissionE6QFlagsIN11QFileDevice10PermissionEE permission(class QFile::Permissions)
extern "C"
bool
C_ZNK9QFileInfo10permissionE6QFlagsIN11QFileDevice10PermissionEE(void *qthis,
QFile::Permissions* arg1) {
  auto ret =
  ((QFileInfo*)qthis)->permission(*((QFile::Permissions*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 120, column 10>
//   // proto:  uint QFileInfo::groupId();
// _ZNK9QFileInfo7groupIdEv groupId()
extern "C"
unsigned int
C_ZNK9QFileInfo7groupIdEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->groupId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 85, column 13>
//   // proto:  QString QFileInfo::fileName();
// _ZNK9QFileInfo8fileNameEv fileName()
extern "C"
QString*
C_ZNK9QFileInfo8fileNameEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 125, column 12>
//   // proto:  qint64 QFileInfo::size();
// _ZNK9QFileInfo4sizeEv size()
extern "C"
long long
C_ZNK9QFileInfo4sizeEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->size();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 83, column 13>
//   // proto:  QString QFileInfo::absoluteFilePath();
// _ZNK9QFileInfo16absoluteFilePathEv absoluteFilePath()
extern "C"
QString*
C_ZNK9QFileInfo16absoluteFilePathEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->absoluteFilePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 88, column 13>
//   // proto:  QString QFileInfo::suffix();
// _ZNK9QFileInfo6suffixEv suffix()
extern "C"
QString*
C_ZNK9QFileInfo6suffixEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->suffix();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 119, column 13>
//   // proto:  QString QFileInfo::group();
// _ZNK9QFileInfo5groupEv group()
extern "C"
QString*
C_ZNK9QFileInfo5groupEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->group();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 105, column 17>
//   // proto:  bool QFileInfo::isAbsolute();
// _ZNK9QFileInfo10isAbsoluteEv isAbsolute()
extern "C"
bool
C_ZNK9QFileInfo10isAbsoluteEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isAbsolute();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 102, column 10>
//   // proto:  bool QFileInfo::isNativePath();
// _ZNK9QFileInfo12isNativePathEv isNativePath()
extern "C"
bool
C_ZNK9QFileInfo12isNativePathEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isNativePath();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 99, column 10>
//   // proto:  bool QFileInfo::isWritable();
// _ZNK9QFileInfo10isWritableEv isWritable()
extern "C"
bool
C_ZNK9QFileInfo10isWritableEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isWritable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 117, column 13>
//   // proto:  QString QFileInfo::owner();
// _ZNK9QFileInfo5ownerEv owner()
extern "C"
QString*
C_ZNK9QFileInfo5ownerEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->owner();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 98, column 10>
//   // proto:  bool QFileInfo::isReadable();
// _ZNK9QFileInfo10isReadableEv isReadable()
extern "C"
bool
C_ZNK9QFileInfo10isReadableEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->isReadable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 54, column 14>
//   // proto:  void QFileInfo::QFileInfo(QFileInfoPrivate * d);
extern "C"
QFileInfo*
C_ZN9QFileInfoC2EP16QFileInfoPrivate(QFileInfoPrivate * arg1) {
  auto ret = new QFileInfo(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 95, column 10>
//   // proto:  QDir QFileInfo::dir();
// _ZNK9QFileInfo3dirEv dir()
extern "C"
QDir*
C_ZNK9QFileInfo3dirEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->dir();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 69, column 17>
//   // proto:  void QFileInfo::swap(QFileInfo & other);
// _ZN9QFileInfo4swapERS_ swap(class QFileInfo &)
extern "C"
void
C_ZN9QFileInfo4swapERS_(void *qthis,
QFileInfo* arg1) {
  ((QFileInfo*)qthis)->swap(*((QFileInfo*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 78, column 10>
//   // proto:  bool QFileInfo::exists();
// _ZNK9QFileInfo6existsEv exists()
extern "C"
bool
C_ZNK9QFileInfo6existsEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->exists();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 128, column 15>
//   // proto:  QDateTime QFileInfo::lastModified();
// _ZNK9QFileInfo12lastModifiedEv lastModified()
extern "C"
QDateTime*
C_ZNK9QFileInfo12lastModifiedEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->lastModified();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileinfo.h', line 93, column 13>
//   // proto:  QString QFileInfo::absolutePath();
// _ZNK9QFileInfo12absolutePathEv absolutePath()
extern "C"
QString*
C_ZNK9QFileInfo12absolutePathEv(void *qthis) {
  auto ret =
  ((QFileInfo*)qthis)->absolutePath();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

