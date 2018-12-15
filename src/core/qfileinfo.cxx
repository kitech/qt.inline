//  header block begin

// /usr/include/qt/QtCore/qfileinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileInfo is pure virtual: false
// QFileInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileInfo_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileInfo_t qt_meta_stringdata_MyQFileInfo = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQFileInfo"
  },
  "MyQFileInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileInfo[] = {
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
class Q_DECL_EXPORT MyQFileInfo : public QFileInfo {
public:
  virtual ~MyQFileInfo() {}
// void QFileInfo(QFileInfoPrivate *)
MyQFileInfo(QFileInfoPrivate * d) : QFileInfo(d) {}
// void QFileInfo()
MyQFileInfo() : QFileInfo() {}
// void QFileInfo(const QString &)
MyQFileInfo(const QString & file) : QFileInfo(file) {}
// void QFileInfo(const QFile &)
MyQFileInfo(const QFile & file) : QFileInfo(file) {}
// void QFileInfo(const QDir &, const QString &)
MyQFileInfo(const QDir & dir, const QString & file) : QFileInfo(dir, file) {}
// void QFileInfo(const QFileInfo &)
MyQFileInfo(const QFileInfo & fileinfo) : QFileInfo(fileinfo) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:60
// [-2] void QFileInfo(QFileInfoPrivate *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoC2EP16QFileInfoPrivate(QFileInfoPrivate * d) {
  return  new QFileInfo(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:62
// [-2] void QFileInfo()
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoC2Ev() {
  return  new QFileInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:63
// [-2] void QFileInfo(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoC2ERK7QString(QString* file) {
  return  new QFileInfo(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:64
// [-2] void QFileInfo(const QFile &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoC2ERK5QFile(QFile* file) {
  return  new QFileInfo(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:65
// [-2] void QFileInfo(const QDir &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoC2ERK4QDirRK7QString(QDir* dir, QString* file) {
  return  new QFileInfo(*dir, *file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:66
// [-2] void QFileInfo(const QFileInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoC2ERKS_(QFileInfo* fileinfo) {
  return  new QFileInfo(*fileinfo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:67
// [-2] void ~QFileInfo()
extern "C" Q_DECL_EXPORT
void C_ZN9QFileInfoD2Ev(void *this_) {
  delete (QFileInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:69
// [8] QFileInfo & operator=(const QFileInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoaSERKS_(void *this_, QFileInfo* fileinfo) {
  auto& rv = ((QFileInfo*)this_)->operator=(*fileinfo);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:71
// [8] QFileInfo & operator=(QFileInfo &&)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFileInfoaSEOS_(void *this_, QFileInfo && other) {
  auto& rv = ((QFileInfo*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qfileinfo.h:74
// [-2] void swap(QFileInfo &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QFileInfo4swapERS_(void *this_, QFileInfo* other) {
  ((QFileInfo*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:77
// [1] bool operator==(const QFileInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfoeqERKS_(void *this_, QFileInfo* fileinfo) {
  return (bool)((QFileInfo*)this_)->operator==(*fileinfo);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:78
// [1] bool operator!=(const QFileInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfoneERKS_(void *this_, QFileInfo* fileinfo) {
  return (bool)((QFileInfo*)this_)->operator!=(*fileinfo);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:80
// [-2] void setFile(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QFileInfo7setFileERK7QString(void *this_, QString* file) {
  ((QFileInfo*)this_)->setFile(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:81
// [-2] void setFile(const QFile &)
extern "C" Q_DECL_EXPORT
void C_ZN9QFileInfo7setFileERK5QFile(void *this_, QFile* file) {
  ((QFileInfo*)this_)->setFile(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:82
// [-2] void setFile(const QDir &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QFileInfo7setFileERK4QDirRK7QString(void *this_, QDir* dir, QString* file) {
  ((QFileInfo*)this_)->setFile(*dir, *file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:83
// [1] bool exists()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo6existsEv(void *this_) {
  return (bool)((QFileInfo*)this_)->exists();
}

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qfileinfo.h:84
// [1] bool exists(const QString &)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
bool C_ZN9QFileInfo6existsERK7QString(QString* file) {
  return (bool)QFileInfo::exists(*file);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:85
// [-2] void refresh()
extern "C" Q_DECL_EXPORT
void C_ZN9QFileInfo7refreshEv(void *this_) {
  ((QFileInfo*)this_)->refresh();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:87
// [8] QString filePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo8filePathEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->filePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:88
// [8] QString absoluteFilePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo16absoluteFilePathEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->absoluteFilePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:89
// [8] QString canonicalFilePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo17canonicalFilePathEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->canonicalFilePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:90
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo8fileNameEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:91
// [8] QString baseName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo8baseNameEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->baseName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:92
// [8] QString completeBaseName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo16completeBaseNameEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->completeBaseName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:93
// [8] QString suffix()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo6suffixEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->suffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qfileinfo.h:94
// [8] QString bundleName()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo10bundleNameEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->bundleName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:95
// [8] QString completeSuffix()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo14completeSuffixEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->completeSuffix();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:97
// [8] QString path()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo4pathEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->path();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:98
// [8] QString absolutePath()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo12absolutePathEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->absolutePath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:99
// [8] QString canonicalPath()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo13canonicalPathEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->canonicalPath();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:100
// [8] QDir dir()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo3dirEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->dir();
return new QDir(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:101
// [8] QDir absoluteDir()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo11absoluteDirEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->absoluteDir();
return new QDir(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:103
// [1] bool isReadable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo10isReadableEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isReadable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:104
// [1] bool isWritable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo10isWritableEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isWritable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:105
// [1] bool isExecutable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo12isExecutableEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isExecutable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:106
// [1] bool isHidden()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo8isHiddenEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isHidden();
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qfileinfo.h:107
// [1] bool isNativePath()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo12isNativePathEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isNativePath();
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:109
// [1] bool isRelative()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo10isRelativeEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isRelative();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:110
// [1] bool isAbsolute()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo10isAbsoluteEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isAbsolute();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:111
// [1] bool makeAbsolute()
extern "C" Q_DECL_EXPORT
bool C_ZN9QFileInfo12makeAbsoluteEv(void *this_) {
  return (bool)((QFileInfo*)this_)->makeAbsolute();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:113
// [1] bool isFile()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo6isFileEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isFile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:114
// [1] bool isDir()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo5isDirEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isDir();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:115
// [1] bool isSymLink()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo9isSymLinkEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isSymLink();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:116
// [1] bool isRoot()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo6isRootEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isRoot();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtCore/qfileinfo.h:117
// [1] bool isBundle()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo8isBundleEv(void *this_) {
  return (bool)((QFileInfo*)this_)->isBundle();
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:119
// [8] QString readLink()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo8readLinkEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->readLink();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qfileinfo.h:120
// [8] QString symLinkTarget()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo13symLinkTargetEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->symLinkTarget();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:122
// [8] QString owner()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo5ownerEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->owner();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:123
// [4] uint ownerId()
extern "C" Q_DECL_EXPORT
uint C_ZNK9QFileInfo7ownerIdEv(void *this_) {
  return (uint)((QFileInfo*)this_)->ownerId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:124
// [8] QString group()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo5groupEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->group();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:125
// [4] uint groupId()
extern "C" Q_DECL_EXPORT
uint C_ZNK9QFileInfo7groupIdEv(void *this_) {
  return (uint)((QFileInfo*)this_)->groupId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:127
// [1] bool permission(QFile::Permissions)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo10permissionE6QFlagsIN11QFileDevice10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissions) {
  return (bool)((QFileInfo*)this_)->permission(permissions);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:128
// [4] QFile::Permissions permissions()
extern "C" Q_DECL_EXPORT
QFile::Permissions C_ZNK9QFileInfo11permissionsEv(void *this_) {
  return (QFile::Permissions)((QFileInfo*)this_)->permissions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:130
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK9QFileInfo4sizeEv(void *this_) {
  return (qint64)((QFileInfo*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:132
// [8] QDateTime created()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo7createdEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->created();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:133
// [8] QDateTime lastModified()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo12lastModifiedEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->lastModified();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:134
// [8] QDateTime lastRead()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFileInfo8lastReadEv(void *this_) {
  auto rv = ((QFileInfo*)this_)->lastRead();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:136
// [1] bool caching()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFileInfo7cachingEv(void *this_) {
  return (bool)((QFileInfo*)this_)->caching();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:137
// [-2] void setCaching(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QFileInfo10setCachingEb(void *this_, bool on) {
  ((QFileInfo*)this_)->setCaching(on);
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
