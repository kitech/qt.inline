//  header block begin
// /usr/include/qt/QtCore/qstorageinfo.h
#include <qstorageinfo.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qstorageinfo.h:56
// void QStorageInfo()
extern "C"
void* C_ZN12QStorageInfoC1Ev() {
  return new QStorageInfo();
}
// /usr/include/qt/QtCore/qstorageinfo.h:57
// void QStorageInfo(const class QString &)
extern "C"
void* C_ZN12QStorageInfoC1ERK7QString(const QString & path) {
  return new QStorageInfo(path);
}
// /usr/include/qt/QtCore/qstorageinfo.h:58
// void QStorageInfo(const class QDir &)
extern "C"
void* C_ZN12QStorageInfoC1ERK4QDir(const QDir & dir) {
  return new QStorageInfo(dir);
}
// /usr/include/qt/QtCore/qstorageinfo.h:60
// void ~QStorageInfo()
extern "C"
void C_ZN12QStorageInfoD1Ev(void *this_) {
  delete (QStorageInfo*)(this_);
}
// inline
// /usr/include/qt/QtCore/qstorageinfo.h:67
// void swap(class QStorageInfo &)
extern "C"
void C_ZN12QStorageInfo4swapERS_(void *this_, QStorageInfo & other) {
  ((QStorageInfo*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qstorageinfo.h:70
// void setPath(const class QString &)
extern "C"
void C_ZN12QStorageInfo7setPathERK7QString(void *this_, const QString & path) {
  ((QStorageInfo*)this_)->setPath(path);
}
// /usr/include/qt/QtCore/qstorageinfo.h:72
// QString rootPath()
extern "C"
void C_ZNK12QStorageInfo8rootPathEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->rootPath();
}
// /usr/include/qt/QtCore/qstorageinfo.h:73
// QByteArray device()
extern "C"
void C_ZNK12QStorageInfo6deviceEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->device();
}
// /usr/include/qt/QtCore/qstorageinfo.h:74
// QByteArray fileSystemType()
extern "C"
void C_ZNK12QStorageInfo14fileSystemTypeEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->fileSystemType();
}
// /usr/include/qt/QtCore/qstorageinfo.h:75
// QString name()
extern "C"
void C_ZNK12QStorageInfo4nameEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->name();
}
// /usr/include/qt/QtCore/qstorageinfo.h:76
// QString displayName()
extern "C"
void C_ZNK12QStorageInfo11displayNameEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->displayName();
}
// /usr/include/qt/QtCore/qstorageinfo.h:78
// qint64 bytesTotal()
extern "C"
void C_ZNK12QStorageInfo10bytesTotalEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->bytesTotal();
}
// /usr/include/qt/QtCore/qstorageinfo.h:79
// qint64 bytesFree()
extern "C"
void C_ZNK12QStorageInfo9bytesFreeEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->bytesFree();
}
// /usr/include/qt/QtCore/qstorageinfo.h:80
// qint64 bytesAvailable()
extern "C"
void C_ZNK12QStorageInfo14bytesAvailableEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->bytesAvailable();
}
// /usr/include/qt/QtCore/qstorageinfo.h:81
// int blockSize()
extern "C"
void C_ZNK12QStorageInfo9blockSizeEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->blockSize();
}
// inline
// /usr/include/qt/QtCore/qstorageinfo.h:83
// bool isRoot()
extern "C"
void C_ZNK12QStorageInfo6isRootEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->isRoot();
}
// /usr/include/qt/QtCore/qstorageinfo.h:84
// bool isReadOnly()
extern "C"
void C_ZNK12QStorageInfo10isReadOnlyEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->isReadOnly();
}
// /usr/include/qt/QtCore/qstorageinfo.h:85
// bool isReady()
extern "C"
void C_ZNK12QStorageInfo7isReadyEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->isReady();
}
// /usr/include/qt/QtCore/qstorageinfo.h:86
// bool isValid()
extern "C"
void C_ZNK12QStorageInfo7isValidEv(void *this_) {
  /*return*/ ((QStorageInfo*)this_)->isValid();
}
// /usr/include/qt/QtCore/qstorageinfo.h:88
// void refresh()
extern "C"
void C_ZN12QStorageInfo7refreshEv(void *this_) {
  ((QStorageInfo*)this_)->refresh();
}
// static
// /usr/include/qt/QtCore/qstorageinfo.h:90
// QList<QStorageInfo> mountedVolumes()
extern "C"
void C_ZN12QStorageInfo14mountedVolumesEv() {
  /*return*/ QStorageInfo::mountedVolumes();
}
// static
// /usr/include/qt/QtCore/qstorageinfo.h:91
// QStorageInfo root()
extern "C"
void C_ZN12QStorageInfo4rootEv() {
  /*return*/ QStorageInfo::root();
}
//  main block end
