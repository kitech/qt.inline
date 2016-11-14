// /usr/include/qt/QtCore/qfileinfo.h
#include <qfileinfo.h>
#include <QtCore>

// /usr/include/qt/QtCore/qfileinfo.h:60
// void QFileInfo(class QFileInfoPrivate *)
extern "C"
void* C_ZN9QFileInfoC1EP16QFileInfoPrivate(QFileInfoPrivate * d) {
  return new QFileInfo(d);
}
// /usr/include/qt/QtCore/qfileinfo.h:62
// void QFileInfo()
extern "C"
void* C_ZN9QFileInfoC1Ev() {
  return new QFileInfo();
}
// /usr/include/qt/QtCore/qfileinfo.h:63
// void QFileInfo(const class QString &)
extern "C"
void* C_ZN9QFileInfoC1ERK7QString(const QString & file) {
  return new QFileInfo(file);
}
// /usr/include/qt/QtCore/qfileinfo.h:64
// void QFileInfo(const class QFile &)
extern "C"
void* C_ZN9QFileInfoC1ERK5QFile(const QFile & file) {
  return new QFileInfo(file);
}
// /usr/include/qt/QtCore/qfileinfo.h:65
// void QFileInfo(const class QDir &, const class QString &)
extern "C"
void* C_ZN9QFileInfoC1ERK4QDirRK7QString(const QDir & dir, const QString & file) {
  return new QFileInfo(dir, file);
}
// /usr/include/qt/QtCore/qfileinfo.h:67
// void ~QFileInfo()
extern "C"
void C_ZN9QFileInfoD1Ev(void *this_) {
  delete (QFileInfo*)(this_);
}
// inline
// /usr/include/qt/QtCore/qfileinfo.h:74
// void swap(class QFileInfo &)
extern "C"
void C_ZN9QFileInfo4swapERS_(void *this_, QFileInfo & other) {
  ((QFileInfo*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qfileinfo.h:80
// void setFile(const class QString &)
extern "C"
void C_ZN9QFileInfo7setFileERK7QString(void *this_, const QString & file) {
  ((QFileInfo*)this_)->setFile(file);
}
// /usr/include/qt/QtCore/qfileinfo.h:81
// void setFile(const class QFile &)
extern "C"
void C_ZN9QFileInfo7setFileERK5QFile(void *this_, const QFile & file) {
  ((QFileInfo*)this_)->setFile(file);
}
// /usr/include/qt/QtCore/qfileinfo.h:82
// void setFile(const class QDir &, const class QString &)
extern "C"
void C_ZN9QFileInfo7setFileERK4QDirRK7QString(void *this_, const QDir & dir, const QString & file) {
  ((QFileInfo*)this_)->setFile(dir, file);
}
// /usr/include/qt/QtCore/qfileinfo.h:83
// bool exists()
extern "C"
void C_ZNK9QFileInfo6existsEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->exists();
}
// static
// /usr/include/qt/QtCore/qfileinfo.h:84
// bool exists(const class QString &)
extern "C"
void C_ZN9QFileInfo6existsERK7QString(const QString & file) {
  /*return*/ QFileInfo::exists(file);
}
// /usr/include/qt/QtCore/qfileinfo.h:85
// void refresh()
extern "C"
void C_ZN9QFileInfo7refreshEv(void *this_) {
  ((QFileInfo*)this_)->refresh();
}
// /usr/include/qt/QtCore/qfileinfo.h:87
// QString filePath()
extern "C"
void C_ZNK9QFileInfo8filePathEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->filePath();
}
// /usr/include/qt/QtCore/qfileinfo.h:88
// QString absoluteFilePath()
extern "C"
void C_ZNK9QFileInfo16absoluteFilePathEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->absoluteFilePath();
}
// /usr/include/qt/QtCore/qfileinfo.h:89
// QString canonicalFilePath()
extern "C"
void C_ZNK9QFileInfo17canonicalFilePathEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->canonicalFilePath();
}
// /usr/include/qt/QtCore/qfileinfo.h:90
// QString fileName()
extern "C"
void C_ZNK9QFileInfo8fileNameEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->fileName();
}
// /usr/include/qt/QtCore/qfileinfo.h:91
// QString baseName()
extern "C"
void C_ZNK9QFileInfo8baseNameEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->baseName();
}
// /usr/include/qt/QtCore/qfileinfo.h:92
// QString completeBaseName()
extern "C"
void C_ZNK9QFileInfo16completeBaseNameEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->completeBaseName();
}
// /usr/include/qt/QtCore/qfileinfo.h:93
// QString suffix()
extern "C"
void C_ZNK9QFileInfo6suffixEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->suffix();
}
// /usr/include/qt/QtCore/qfileinfo.h:94
// QString bundleName()
extern "C"
void C_ZNK9QFileInfo10bundleNameEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->bundleName();
}
// /usr/include/qt/QtCore/qfileinfo.h:95
// QString completeSuffix()
extern "C"
void C_ZNK9QFileInfo14completeSuffixEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->completeSuffix();
}
// /usr/include/qt/QtCore/qfileinfo.h:97
// QString path()
extern "C"
void C_ZNK9QFileInfo4pathEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->path();
}
// /usr/include/qt/QtCore/qfileinfo.h:98
// QString absolutePath()
extern "C"
void C_ZNK9QFileInfo12absolutePathEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->absolutePath();
}
// /usr/include/qt/QtCore/qfileinfo.h:99
// QString canonicalPath()
extern "C"
void C_ZNK9QFileInfo13canonicalPathEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->canonicalPath();
}
// /usr/include/qt/QtCore/qfileinfo.h:100
// QDir dir()
extern "C"
void C_ZNK9QFileInfo3dirEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->dir();
}
// /usr/include/qt/QtCore/qfileinfo.h:101
// QDir absoluteDir()
extern "C"
void C_ZNK9QFileInfo11absoluteDirEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->absoluteDir();
}
// /usr/include/qt/QtCore/qfileinfo.h:103
// bool isReadable()
extern "C"
void C_ZNK9QFileInfo10isReadableEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isReadable();
}
// /usr/include/qt/QtCore/qfileinfo.h:104
// bool isWritable()
extern "C"
void C_ZNK9QFileInfo10isWritableEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isWritable();
}
// /usr/include/qt/QtCore/qfileinfo.h:105
// bool isExecutable()
extern "C"
void C_ZNK9QFileInfo12isExecutableEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isExecutable();
}
// /usr/include/qt/QtCore/qfileinfo.h:106
// bool isHidden()
extern "C"
void C_ZNK9QFileInfo8isHiddenEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isHidden();
}
// /usr/include/qt/QtCore/qfileinfo.h:107
// bool isNativePath()
extern "C"
void C_ZNK9QFileInfo12isNativePathEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isNativePath();
}
// /usr/include/qt/QtCore/qfileinfo.h:109
// bool isRelative()
extern "C"
void C_ZNK9QFileInfo10isRelativeEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isRelative();
}
// inline
// /usr/include/qt/QtCore/qfileinfo.h:110
// bool isAbsolute()
extern "C"
void C_ZNK9QFileInfo10isAbsoluteEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isAbsolute();
}
// /usr/include/qt/QtCore/qfileinfo.h:111
// bool makeAbsolute()
extern "C"
void C_ZN9QFileInfo12makeAbsoluteEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->makeAbsolute();
}
// /usr/include/qt/QtCore/qfileinfo.h:113
// bool isFile()
extern "C"
void C_ZNK9QFileInfo6isFileEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isFile();
}
// /usr/include/qt/QtCore/qfileinfo.h:114
// bool isDir()
extern "C"
void C_ZNK9QFileInfo5isDirEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isDir();
}
// /usr/include/qt/QtCore/qfileinfo.h:115
// bool isSymLink()
extern "C"
void C_ZNK9QFileInfo9isSymLinkEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isSymLink();
}
// /usr/include/qt/QtCore/qfileinfo.h:116
// bool isRoot()
extern "C"
void C_ZNK9QFileInfo6isRootEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isRoot();
}
// /usr/include/qt/QtCore/qfileinfo.h:117
// bool isBundle()
extern "C"
void C_ZNK9QFileInfo8isBundleEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->isBundle();
}
// /usr/include/qt/QtCore/qfileinfo.h:119
// QString readLink()
extern "C"
void C_ZNK9QFileInfo8readLinkEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->readLink();
}
// inline
// /usr/include/qt/QtCore/qfileinfo.h:120
// QString symLinkTarget()
extern "C"
void C_ZNK9QFileInfo13symLinkTargetEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->symLinkTarget();
}
// /usr/include/qt/QtCore/qfileinfo.h:122
// QString owner()
extern "C"
void C_ZNK9QFileInfo5ownerEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->owner();
}
// /usr/include/qt/QtCore/qfileinfo.h:123
// uint ownerId()
extern "C"
void C_ZNK9QFileInfo7ownerIdEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->ownerId();
}
// /usr/include/qt/QtCore/qfileinfo.h:124
// QString group()
extern "C"
void C_ZNK9QFileInfo5groupEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->group();
}
// /usr/include/qt/QtCore/qfileinfo.h:125
// uint groupId()
extern "C"
void C_ZNK9QFileInfo7groupIdEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->groupId();
}
// /usr/include/qt/QtCore/qfileinfo.h:127
// bool permission(class QFile::Permissions)
extern "C"
void C_ZNK9QFileInfo10permissionE6QFlagsIN11QFileDevice10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissions) {
  /*return*/ ((QFileInfo*)this_)->permission(permissions);
}
// /usr/include/qt/QtCore/qfileinfo.h:128
// QFile::Permissions permissions()
extern "C"
void C_ZNK9QFileInfo11permissionsEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->permissions();
}
// /usr/include/qt/QtCore/qfileinfo.h:130
// qint64 size()
extern "C"
void C_ZNK9QFileInfo4sizeEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->size();
}
// /usr/include/qt/QtCore/qfileinfo.h:132
// QDateTime created()
extern "C"
void C_ZNK9QFileInfo7createdEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->created();
}
// /usr/include/qt/QtCore/qfileinfo.h:133
// QDateTime lastModified()
extern "C"
void C_ZNK9QFileInfo12lastModifiedEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->lastModified();
}
// /usr/include/qt/QtCore/qfileinfo.h:134
// QDateTime lastRead()
extern "C"
void C_ZNK9QFileInfo8lastReadEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->lastRead();
}
// /usr/include/qt/QtCore/qfileinfo.h:136
// bool caching()
extern "C"
void C_ZNK9QFileInfo7cachingEv(void *this_) {
  /*return*/ ((QFileInfo*)this_)->caching();
}
// /usr/include/qt/QtCore/qfileinfo.h:137
// void setCaching(_Bool)
extern "C"
void C_ZN9QFileInfo10setCachingEb(void *this_, bool on) {
  ((QFileInfo*)this_)->setCaching(on);
}