// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qfile.h
// dst-file: /src/core/qfile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfile.h>


#include <qstring.h>
#include <qfiledevice.h>
#include <qglobal.h>
#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qfile_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 111, column 20>
//   // proto:  QString QFile::symLinkTarget();
if (true) {
  auto f = [](QFile flythis) {
    ((QFile*)0)->symLinkTarget();
    flythis.symLinkTarget();
  };
  if (f == nullptr){}
}
// _ZNK5QFile13symLinkTargetEv symLinkTarget()
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 87, column 30>
//   // proto: static QByteArray QFile::encodeName(const QString & fileName);
if (true) {
  auto f = [](QFile flythis, const QString & arg1) {
    ((QFile*)0)->encodeName(arg1);
    flythis.encodeName(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFile10encodeNameERK7QString encodeName(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 91, column 20>
//   // proto: static QString QFile::decodeName(const QByteArray & localFileName);
if (true) {
  auto f = [](QFile flythis, const QByteArray & arg1) {
    ((QFile*)0)->decodeName(arg1);
    flythis.decodeName(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFile10decodeNameERK10QByteArray decodeName(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 96, column 27>
//   // proto: static QString QFile::decodeName(const char * localFileName);
if (true) {
  auto f = [](QFile flythis, const char * arg1) {
    ((QFile*)0)->decodeName(arg1);
    flythis.decodeName(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFile10decodeNameEPKc decodeName(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 112, column 27>
//   // proto: static QString QFile::symLinkTarget(const QString & fileName);
if (true) {
  auto f = [](QFile flythis, const QString & arg1) {
    ((QFile*)0)->symLinkTarget(arg1);
    flythis.symLinkTarget(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QFile13symLinkTargetERK7QString symLinkTarget(const class QString &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFile_Class_Size()
{
  return sizeof(QFile);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 111, column 20>
//   // proto:  QString QFile::symLinkTarget();
// _ZNK5QFile13symLinkTargetEv symLinkTarget()
extern "C"
QString*
C_ZNK5QFile13symLinkTargetEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->symLinkTarget();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 65, column 5>
//   // proto:  void QFile::QFile();
extern "C"
QFile*
C_ZN5QFileC2Ev() {
  auto ret = new QFile();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 68, column 14>
//   // proto:  void QFile::QFile(QObject * parent);
extern "C"
QFile*
C_ZN5QFileC2EP7QObject(QObject * arg1) {
  auto ret = new QFile(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 121, column 17>
//   // proto: static bool QFile::link(const QString & oldname, const QString & newName);
// _ZN5QFile4linkERK7QStringS2_ link(const class QString &, const class QString &)
extern "C"
bool
C_ZN5QFile4linkERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QFile::link(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 118, column 17>
//   // proto: static bool QFile::rename(const QString & oldName, const QString & newName);
// _ZN5QFile6renameERK7QStringS2_ rename(const class QString &, const class QString &)
extern "C"
bool
C_ZN5QFile6renameERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QFile::rename(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 120, column 10>
//   // proto:  bool QFile::link(const QString & newName);
// _ZN5QFile4linkERK7QString link(const class QString &)
extern "C"
bool
C_ZN5QFile4linkERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFile*)qthis)->link(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 133, column 17>
//   // proto: static bool QFile::resize(const QString & filename, qint64 sz);
// _ZN5QFile6resizeERK7QStringx resize(const class QString &, qint64)
extern "C"
bool
C_ZN5QFile6resizeERK7QStringx(const QString* arg1,
qint64 arg2) {
  auto ret =
  QFile::resize(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 107, column 17>
//   // proto: static bool QFile::exists(const QString & fileName);
// _ZN5QFile6existsERK7QString exists(const class QString &)
extern "C"
bool
C_ZN5QFile6existsERK7QString(const QString* arg1) {
  auto ret =
  QFile::exists(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QFile::~QFile();
extern "C"
void C_ZN5QFileD2Ev(void *qthis) {
  delete (QFile*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 135, column 17>
//   // proto:  Permissions QFile::permissions();
// _ZNK5QFile11permissionsEv permissions()
extern "C"
QFlags<QFileDevice::Permission>*
C_ZNK5QFile11permissionsEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->permissions();
  return new QFlags<QFileDevice::Permission>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 124, column 17>
//   // proto: static bool QFile::copy(const QString & fileName, const QString & newName);
// _ZN5QFile4copyERK7QStringS2_ copy(const class QString &, const class QString &)
extern "C"
bool
C_ZN5QFile4copyERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QFile::copy(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 110, column 20>
//   // proto: static QString QFile::readLink(const QString & fileName);
// _ZN5QFile8readLinkERK7QString readLink(const class QString &)
extern "C"
QString*
C_ZN5QFile8readLinkERK7QString(const QString* arg1) {
  auto ret =
  QFile::readLink(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 106, column 10>
//   // proto:  bool QFile::exists();
// _ZNK5QFile6existsEv exists()
extern "C"
bool
C_ZNK5QFile6existsEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->exists();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 130, column 12>
//   // proto:  qint64 QFile::size();
// _ZNK5QFile4sizeEv size()
extern "C"
long long
C_ZNK5QFile4sizeEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->size();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 132, column 10>
//   // proto:  bool QFile::resize(qint64 sz);
// _ZN5QFile6resizeEx resize(qint64)
extern "C"
bool
C_ZN5QFile6resizeEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QFile*)qthis)->resize(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 74, column 10>
//   // proto:  void QFile::setFileName(const QString & name);
// _ZN5QFile11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN5QFile11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QFile*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 137, column 10>
//   // proto:  bool QFile::setPermissions(Permissions permissionSpec);
// _ZN5QFile14setPermissionsE6QFlagsIN11QFileDevice10PermissionEE setPermissions(Permissions)
extern "C"
bool
C_ZN5QFile14setPermissionsE6QFlagsIN11QFileDevice10PermissionEE(void *qthis,
QFileDevice::Permissions arg1) {
  auto ret =
  ((QFile*)qthis)->setPermissions(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 114, column 10>
//   // proto:  bool QFile::remove();
// _ZN5QFile6removeEv remove()
extern "C"
bool
C_ZN5QFile6removeEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->remove();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 126, column 10>
//   // proto:  bool QFile::open(OpenMode flags);
// _ZN5QFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE open(OpenMode)
extern "C"
bool
C_ZN5QFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  auto ret =
  ((QFile*)qthis)->open(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 123, column 10>
//   // proto:  bool QFile::copy(const QString & newName);
// _ZN5QFile4copyERK7QString copy(const class QString &)
extern "C"
bool
C_ZN5QFile4copyERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFile*)qthis)->copy(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 87, column 30>
//   // proto: static QByteArray QFile::encodeName(const QString & fileName);
// _ZN5QFile10encodeNameERK7QString encodeName(const class QString &)
extern "C"
QByteArray*
C_ZN5QFile10encodeNameERK7QString(const QString* arg1) {
  auto ret =
  QFile::encodeName(*((const QString*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 138, column 17>
//   // proto: static bool QFile::setPermissions(const QString & filename, Permissions permissionSpec);
// _ZN5QFile14setPermissionsERK7QString6QFlagsIN11QFileDevice10PermissionEE setPermissions(const class QString &, Permissions)
extern "C"
bool
C_ZN5QFile14setPermissionsERK7QString6QFlagsIN11QFileDevice10PermissionEE(const QString* arg1,
QFileDevice::Permissions arg2) {
  auto ret =
  QFile::setPermissions(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 127, column 10>
//   // proto:  bool QFile::open(FILE * f, OpenMode ioFlags, FileHandleFlags handleFlags);
// _ZN5QFile4openEP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEES2_IN11QFileDevice14FileHandleFlagEE open(FILE *, OpenMode, FileHandleFlags)
extern "C"
bool
C_ZN5QFile4openEP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEES2_IN11QFileDevice14FileHandleFlagEE(void *qthis,
FILE * arg1,
QIODevice::OpenMode arg2,
QFileDevice::FileHandleFlags arg3) {
  auto ret =
  ((QFile*)qthis)->open(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 91, column 20>
//   // proto: static QString QFile::decodeName(const QByteArray & localFileName);
// _ZN5QFile10decodeNameERK10QByteArray decodeName(const class QByteArray &)
extern "C"
QString*
C_ZN5QFile10decodeNameERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QFile::decodeName(*((const QByteArray*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 117, column 10>
//   // proto:  bool QFile::rename(const QString & newName);
// _ZN5QFile6renameERK7QString rename(const class QString &)
extern "C"
bool
C_ZN5QFile6renameERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFile*)qthis)->rename(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 73, column 13>
//   // proto:  QString QFile::fileName();
// _ZNK5QFile8fileNameEv fileName()
extern "C"
QString*
C_ZNK5QFile8fileNameEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 96, column 27>
//   // proto: static QString QFile::decodeName(const char * localFileName);
// _ZN5QFile10decodeNameEPKc decodeName(const char *)
extern "C"
QString*
C_ZN5QFile10decodeNameEPKc(const char * arg1) {
  auto ret =
  QFile::decodeName(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 60, column 5>
//   // proto:  const QMetaObject * QFile::metaObject();
// _ZNK5QFile10metaObjectEv metaObject()
extern "C"
void*
C_ZNK5QFile10metaObjectEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 136, column 24>
//   // proto: static Permissions QFile::permissions(const QString & filename);
// _ZN5QFile11permissionsERK7QString permissions(const class QString &)
extern "C"
QFlags<QFileDevice::Permission>*
C_ZN5QFile11permissionsERK7QString(const QString* arg1) {
  auto ret =
  QFile::permissions(*((const QString*)arg1));
  return new QFlags<QFileDevice::Permission>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 69, column 5>
//   // proto:  void QFile::QFile(const QString & name, QObject * parent);
extern "C"
QFile*
C_ZN5QFileC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QFile(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 112, column 27>
//   // proto: static QString QFile::symLinkTarget(const QString & fileName);
// _ZN5QFile13symLinkTargetERK7QString symLinkTarget(const class QString &)
extern "C"
QString*
C_ZN5QFile13symLinkTargetERK7QString(const QString* arg1) {
  auto ret =
  QFile::symLinkTarget(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 128, column 10>
//   // proto:  bool QFile::open(int fd, OpenMode ioFlags, FileHandleFlags handleFlags);
// _ZN5QFile4openEi6QFlagsIN9QIODevice12OpenModeFlagEES0_IN11QFileDevice14FileHandleFlagEE open(int, OpenMode, FileHandleFlags)
extern "C"
bool
C_ZN5QFile4openEi6QFlagsIN9QIODevice12OpenModeFlagEES0_IN11QFileDevice14FileHandleFlagEE(void *qthis,
int arg1,
QIODevice::OpenMode arg2,
QFileDevice::FileHandleFlags arg3) {
  auto ret =
  ((QFile*)qthis)->open(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 115, column 17>
//   // proto: static bool QFile::remove(const QString & fileName);
// _ZN5QFile6removeERK7QString remove(const class QString &)
extern "C"
bool
C_ZN5QFile6removeERK7QString(const QString* arg1) {
  auto ret =
  QFile::remove(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 66, column 5>
//   // proto:  void QFile::QFile(const QString & name);
extern "C"
QFile*
C_ZN5QFileC2ERK7QString(const QString* arg1) {
  auto ret = new QFile(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfile.h', line 109, column 13>
//   // proto:  QString QFile::readLink();
// _ZNK5QFile8readLinkEv readLink()
extern "C"
QString*
C_ZNK5QFile8readLinkEv(void *qthis) {
  auto ret =
  ((QFile*)qthis)->readLink();
  return new QString(ret); // 5
}
// <= ext block end

// body block begin =>
// QFile_SlotProxy here
class QFile_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFile_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfile.moc"

extern "C" {
  QFile_SlotProxy* QFile_SlotProxy_new()
  {
    return new QFile_SlotProxy();
  }
};

// <= body block end

