// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qstorageinfo.h
// dst-file: /src/core/qstorageinfo.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstorageinfo.h>


#include <qglobal.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qdatastream.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qstorageinfo_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 77, column 17>
//   // proto:  bool QStorageInfo::isRoot();
if (true) {
  auto f = [](QStorageInfo flythis) {
    ((QStorageInfo*)0)->isRoot();
    flythis.isRoot();
  };
  if (f == nullptr){}
}
// _ZNK12QStorageInfo6isRootEv isRoot()
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 62, column 17>
//   // proto:  void QStorageInfo::swap(QStorageInfo & other);
if (true) {
  auto f = [](QStorageInfo flythis, QStorageInfo & arg1) {
    ((QStorageInfo*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN12QStorageInfo4swapERS_ swap(class QStorageInfo &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStorageInfo_Class_Size()
{
  return sizeof(QStorageInfo);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 74, column 12>
//   // proto:  qint64 QStorageInfo::bytesFree();
// _ZNK12QStorageInfo9bytesFreeEv bytesFree()
extern "C"
long long
C_ZNK12QStorageInfo9bytesFreeEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->bytesFree();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 53, column 5>
//   // proto:  void QStorageInfo::QStorageInfo(const QStorageInfo & other);
extern "C"
QStorageInfo*
C_ZN12QStorageInfoC2ERKS_(const QStorageInfo* arg1) {
  auto ret = new QStorageInfo(*((const QStorageInfo*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 77, column 17>
//   // proto:  bool QStorageInfo::isRoot();
// _ZNK12QStorageInfo6isRootEv isRoot()
extern "C"
bool
C_ZNK12QStorageInfo6isRootEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->isRoot();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 78, column 10>
//   // proto:  bool QStorageInfo::isReadOnly();
// _ZNK12QStorageInfo10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK12QStorageInfo10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 69, column 16>
//   // proto:  QByteArray QStorageInfo::fileSystemType();
// _ZNK12QStorageInfo14fileSystemTypeEv fileSystemType()
extern "C"
QByteArray*
C_ZNK12QStorageInfo14fileSystemTypeEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->fileSystemType();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 65, column 10>
//   // proto:  void QStorageInfo::setPath(const QString & path);
// _ZN12QStorageInfo7setPathERK7QString setPath(const class QString &)
extern "C"
void
C_ZN12QStorageInfo7setPathERK7QString(void *qthis,
const QString* arg1) {
  ((QStorageInfo*)qthis)->setPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 84, column 32>
//   // proto: static QList<QStorageInfo> QStorageInfo::mountedVolumes();
// _ZN12QStorageInfo14mountedVolumesEv mountedVolumes()
extern "C"
QList<QStorageInfo>*
C_ZN12QStorageInfo14mountedVolumesEv() {
  auto ret =
  QStorageInfo::mountedVolumes();
  return new QList<QStorageInfo>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 70, column 13>
//   // proto:  QString QStorageInfo::name();
// _ZNK12QStorageInfo4nameEv name()
extern "C"
QString*
C_ZNK12QStorageInfo4nameEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 82, column 10>
//   // proto:  void QStorageInfo::refresh();
// _ZN12QStorageInfo7refreshEv refresh()
extern "C"
void
C_ZN12QStorageInfo7refreshEv(void *qthis) {
  ((QStorageInfo*)qthis)->refresh();
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 80, column 10>
//   // proto:  bool QStorageInfo::isValid();
// _ZNK12QStorageInfo7isValidEv isValid()
extern "C"
bool
C_ZNK12QStorageInfo7isValidEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 79, column 10>
//   // proto:  bool QStorageInfo::isReady();
// _ZNK12QStorageInfo7isReadyEv isReady()
extern "C"
bool
C_ZNK12QStorageInfo7isReadyEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->isReady();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 73, column 12>
//   // proto:  qint64 QStorageInfo::bytesTotal();
// _ZNK12QStorageInfo10bytesTotalEv bytesTotal()
extern "C"
long long
C_ZNK12QStorageInfo10bytesTotalEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->bytesTotal();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 67, column 13>
//   // proto:  QString QStorageInfo::rootPath();
// _ZNK12QStorageInfo8rootPathEv rootPath()
extern "C"
QString*
C_ZNK12QStorageInfo8rootPathEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->rootPath();
  return new QString(ret); // 5
}
//   // proto:  void QStorageInfo::~QStorageInfo();
extern "C"
void C_ZN12QStorageInfoD2Ev(void *qthis) {
  delete (QStorageInfo*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 75, column 12>
//   // proto:  qint64 QStorageInfo::bytesAvailable();
// _ZNK12QStorageInfo14bytesAvailableEv bytesAvailable()
extern "C"
long long
C_ZNK12QStorageInfo14bytesAvailableEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->bytesAvailable();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 50, column 5>
//   // proto:  void QStorageInfo::QStorageInfo();
extern "C"
QStorageInfo*
C_ZN12QStorageInfoC2Ev() {
  auto ret = new QStorageInfo();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 52, column 14>
//   // proto:  void QStorageInfo::QStorageInfo(const QDir & dir);
extern "C"
QStorageInfo*
C_ZN12QStorageInfoC2ERK4QDir(const QDir* arg1) {
  auto ret = new QStorageInfo(*((const QDir*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 85, column 25>
//   // proto: static QStorageInfo QStorageInfo::root();
// _ZN12QStorageInfo4rootEv root()
extern "C"
QStorageInfo*
C_ZN12QStorageInfo4rootEv() {
  auto ret =
  QStorageInfo::root();
  return new QStorageInfo(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 51, column 14>
//   // proto:  void QStorageInfo::QStorageInfo(const QString & path);
extern "C"
QStorageInfo*
C_ZN12QStorageInfoC2ERK7QString(const QString* arg1) {
  auto ret = new QStorageInfo(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 68, column 16>
//   // proto:  QByteArray QStorageInfo::device();
// _ZNK12QStorageInfo6deviceEv device()
extern "C"
QByteArray*
C_ZNK12QStorageInfo6deviceEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->device();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 71, column 13>
//   // proto:  QString QStorageInfo::displayName();
// _ZNK12QStorageInfo11displayNameEv displayName()
extern "C"
QString*
C_ZNK12QStorageInfo11displayNameEv(void *qthis) {
  auto ret =
  ((QStorageInfo*)qthis)->displayName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstorageinfo.h', line 62, column 17>
//   // proto:  void QStorageInfo::swap(QStorageInfo & other);
// _ZN12QStorageInfo4swapERS_ swap(class QStorageInfo &)
extern "C"
void
C_ZN12QStorageInfo4swapERS_(void *qthis,
QStorageInfo* arg1) {
  ((QStorageInfo*)qthis)->swap(*((QStorageInfo*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

