//  header block begin

// since 0x050400
// /usr/include/qt/QtCore/qstorageinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstorageinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QStorageInfo is pure virtual: false
// QStorageInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStorageInfo_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStorageInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStorageInfo_t qt_meta_stringdata_MyQStorageInfo = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQStorageInfo"
  },
  "MyQStorageInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStorageInfo[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQStorageInfo : public QStorageInfo {
public:
  virtual ~MyQStorageInfo() {}
// void QStorageInfo()
MyQStorageInfo() : QStorageInfo() {}
// void QStorageInfo(const QString &)
MyQStorageInfo(const QString & path) : QStorageInfo(path) {}
// void QStorageInfo(const QDir &)
MyQStorageInfo(const QDir & dir) : QStorageInfo(dir) {}
// void QStorageInfo(const QStorageInfo &)
MyQStorageInfo(const QStorageInfo & other) : QStorageInfo(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:56
// [-2] void QStorageInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN12QStorageInfoC2Ev() {
  return  new QStorageInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:57
// [-2] void QStorageInfo(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStorageInfoC2ERK7QString(QString* path) {
  return  new QStorageInfo(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:58
// [-2] void QStorageInfo(const QDir &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStorageInfoC2ERK4QDir(QDir* dir) {
  return  new QStorageInfo(*dir);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:59
// [-2] void QStorageInfo(const QStorageInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStorageInfoC2ERKS_(QStorageInfo* other) {
  return  new QStorageInfo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:60
// [-2] void ~QStorageInfo()
extern "C" Q_DECL_EXPORT
void C_ZN12QStorageInfoD2Ev(void *this_) {
  delete (QStorageInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:62
// [8] QStorageInfo & operator=(const QStorageInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStorageInfoaSERKS_(void *this_, QStorageInfo* other) {
  auto& rv = ((QStorageInfo*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:64
// [8] QStorageInfo & operator=(QStorageInfo &&)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStorageInfoaSEOS_(void *this_, QStorageInfo && other) {
  auto& rv = ((QStorageInfo*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:67
// [-2] void swap(QStorageInfo &)
extern "C" Q_DECL_EXPORT
void C_ZN12QStorageInfo4swapERS_(void *this_, QStorageInfo* other) {
  ((QStorageInfo*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:70
// [-2] void setPath(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN12QStorageInfo7setPathERK7QString(void *this_, QString* path) {
  ((QStorageInfo*)this_)->setPath(*path);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:72
// [8] QString rootPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStorageInfo8rootPathEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->rootPath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:73
// [8] QByteArray device()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStorageInfo6deviceEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->device();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qstorageinfo.h:74
// [8] QByteArray subvolume()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStorageInfo9subvolumeEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->subvolume();
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:75
// [8] QByteArray fileSystemType()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStorageInfo14fileSystemTypeEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->fileSystemType();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:76
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStorageInfo4nameEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:77
// [8] QString displayName()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStorageInfo11displayNameEv(void *this_) {
  auto rv = ((QStorageInfo*)this_)->displayName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:79
// [8] qint64 bytesTotal()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QStorageInfo10bytesTotalEv(void *this_) {
  return (qint64)((QStorageInfo*)this_)->bytesTotal();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:80
// [8] qint64 bytesFree()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QStorageInfo9bytesFreeEv(void *this_) {
  return (qint64)((QStorageInfo*)this_)->bytesFree();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:81
// [8] qint64 bytesAvailable()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK12QStorageInfo14bytesAvailableEv(void *this_) {
  return (qint64)((QStorageInfo*)this_)->bytesAvailable();
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qstorageinfo.h:82
// [4] int blockSize()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
int C_ZNK12QStorageInfo9blockSizeEv(void *this_) {
  return (int)((QStorageInfo*)this_)->blockSize();
}
#endif // QT_VERSION >= 0x050600

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:84
// [1] bool isRoot()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QStorageInfo6isRootEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isRoot();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:85
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QStorageInfo10isReadOnlyEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:86
// [1] bool isReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QStorageInfo7isReadyEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:87
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QStorageInfo7isValidEv(void *this_) {
  return (bool)((QStorageInfo*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:89
// [-2] void refresh()
extern "C" Q_DECL_EXPORT
void C_ZN12QStorageInfo7refreshEv(void *this_) {
  ((QStorageInfo*)this_)->refresh();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:91
// [-2] QList<QStorageInfo> mountedVolumes()
extern "C" Q_DECL_EXPORT
QList<QStorageInfo>* C_ZN12QStorageInfo14mountedVolumesEv() {
  auto rv = QStorageInfo::mountedVolumes();
return new QList<QStorageInfo>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:92
// [8] QStorageInfo root()
extern "C" Q_DECL_EXPORT
void* C_ZN12QStorageInfo4rootEv() {
  auto rv = QStorageInfo::root();
return new QStorageInfo(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
