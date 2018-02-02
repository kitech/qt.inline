//  header block begin
// /usr/include/qt/QtCore/qstorageinfo.h
#include <qstorageinfo.h>
#include <QtCore>

// QStorageInfo is pure virtual: false
// QStorageInfo has virtual projected: false
//  header block end

//  main block begin

class MyQStorageInfo : public QStorageInfo {
public:
  virtual ~MyQStorageInfo() {}
// void QStorageInfo()
MyQStorageInfo() : QStorageInfo() {}
// void QStorageInfo(const class QString &)
MyQStorageInfo(const QString & path) : QStorageInfo(path) {}
// void QStorageInfo(const class QDir &)
MyQStorageInfo(const QDir & dir) : QStorageInfo(dir) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:58
// [-2] void QStorageInfo()
extern "C"
void* C_ZN12QStorageInfoC2Ev() {
  return  new QStorageInfo();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:59
// [-2] void QStorageInfo(const class QString &)
extern "C"
void* C_ZN12QStorageInfoC2ERK7QString(QString* path) {
  return  new QStorageInfo(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:60
// [-2] void QStorageInfo(const class QDir &)
extern "C"
void* C_ZN12QStorageInfoC2ERK4QDir(QDir* dir) {
  return  new QStorageInfo(*dir);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:62
// [-2] void ~QStorageInfo()
extern "C"
void C_ZN12QStorageInfoD2Ev(void *this_) {
  delete (QStorageInfo*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:69
// [-2] void swap(class QStorageInfo &)
extern "C"
void C_ZN12QStorageInfo4swapERS_(void *this_, QStorageInfo* other) {
  ((QStorageInfo*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:72
// [-2] void setPath(const class QString &)
extern "C"
void C_ZN12QStorageInfo7setPathERK7QString(void *this_, QString* path) {
  ((QStorageInfo*)this_)->setPath(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:74
// [8] QString rootPath()
extern "C"
void* C_ZNK12QStorageInfo8rootPathEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->rootPath();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:75
// [8] QByteArray device()
extern "C"
void* C_ZNK12QStorageInfo6deviceEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->device();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:76
// [8] QByteArray subvolume()
extern "C"
void* C_ZNK12QStorageInfo9subvolumeEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->subvolume();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:77
// [8] QByteArray fileSystemType()
extern "C"
void* C_ZNK12QStorageInfo14fileSystemTypeEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->fileSystemType();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:78
// [8] QString name()
extern "C"
void* C_ZNK12QStorageInfo4nameEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->name();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:79
// [8] QString displayName()
extern "C"
void* C_ZNK12QStorageInfo11displayNameEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->displayName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:81
// [8] qint64 bytesTotal()
extern "C"
qint64 C_ZNK12QStorageInfo10bytesTotalEv(void *this_) {
  return (qint64)((QStorageInfo*)this_)->bytesTotal();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:82
// [8] qint64 bytesFree()
extern "C"
qint64 C_ZNK12QStorageInfo9bytesFreeEv(void *this_) {
  return (qint64)((QStorageInfo*)this_)->bytesFree();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:83
// [8] qint64 bytesAvailable()
extern "C"
qint64 C_ZNK12QStorageInfo14bytesAvailableEv(void *this_) {
  return (qint64)((QStorageInfo*)this_)->bytesAvailable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:84
// [4] int blockSize()
extern "C"
int C_ZNK12QStorageInfo9blockSizeEv(void *this_) {
  return (int)((QStorageInfo*)this_)->blockSize();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:86
// [1] bool isRoot()
extern "C"
bool C_ZNK12QStorageInfo6isRootEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isRoot();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:87
// [1] bool isReadOnly()
extern "C"
bool C_ZNK12QStorageInfo10isReadOnlyEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isReadOnly();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:88
// [1] bool isReady()
extern "C"
bool C_ZNK12QStorageInfo7isReadyEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isReady();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:89
// [1] bool isValid()
extern "C"
bool C_ZNK12QStorageInfo7isValidEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:91
// [-2] void refresh()
extern "C"
void C_ZN12QStorageInfo7refreshEv(void *this_) {
  ((QStorageInfo*)this_)->refresh();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:94
// [8] QStorageInfo root()
extern "C"
void* C_ZN12QStorageInfo4rootEv() {
  auto rv = QStorageInfo::root();
return new QStorageInfo(rv);
}
//  main block end
