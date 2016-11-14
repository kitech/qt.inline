// /usr/include/qt/QtCore/qfile.h
#include <qfile.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qfile.h:60
// const QMetaObject * metaObject()
extern "C"
void C_ZNK5QFile10metaObjectEv(void *this_) {
  /*return*/ ((QFile*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qfile.h:65
// void QFile()
extern "C"
void* C_ZN5QFileC1Ev() {
  return new QFile();
}
// /usr/include/qt/QtCore/qfile.h:66
// void QFile(const class QString &)
extern "C"
void* C_ZN5QFileC1ERK7QString(const QString & name) {
  return new QFile(name);
}
// /usr/include/qt/QtCore/qfile.h:68
// void QFile(class QObject *)
extern "C"
void* C_ZN5QFileC1EP7QObject(QObject * parent) {
  return new QFile(parent);
}
// /usr/include/qt/QtCore/qfile.h:69
// void QFile(const class QString &, class QObject *)
extern "C"
void* C_ZN5QFileC1ERK7QStringP7QObject(const QString & name, QObject * parent) {
  return new QFile(name, parent);
}
// virtual
// /usr/include/qt/QtCore/qfile.h:71
// void ~QFile()
extern "C"
void C_ZN5QFileD1Ev(void *this_) {
  delete (QFile*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qfile.h:73
// QString fileName()
extern "C"
void C_ZNK5QFile8fileNameEv(void *this_) {
  /*return*/ ((QFile*)this_)->fileName();
}
// /usr/include/qt/QtCore/qfile.h:74
// void setFileName(const class QString &)
extern "C"
void C_ZN5QFile11setFileNameERK7QString(void *this_, const QString & name) {
  ((QFile*)this_)->setFileName(name);
}
// static inline
// /usr/include/qt/QtCore/qfile.h:87
// QByteArray encodeName(const class QString &)
extern "C"
void C_ZN5QFile10encodeNameERK7QString(const QString & fileName) {
  /*return*/ QFile::encodeName(fileName);
}
// static inline
// /usr/include/qt/QtCore/qfile.h:91
// QString decodeName(const class QByteArray &)
extern "C"
void C_ZN5QFile10decodeNameERK10QByteArray(const QByteArray & localFileName) {
  /*return*/ QFile::decodeName(localFileName);
}
// static inline
// /usr/include/qt/QtCore/qfile.h:96
// QString decodeName(const char *)
extern "C"
void C_ZN5QFile10decodeNameEPKc(const char * localFileName) {
  /*return*/ QFile::decodeName(localFileName);
}
// /usr/include/qt/QtCore/qfile.h:106
// bool exists()
extern "C"
void C_ZNK5QFile6existsEv(void *this_) {
  /*return*/ ((QFile*)this_)->exists();
}
// static
// /usr/include/qt/QtCore/qfile.h:107
// bool exists(const class QString &)
extern "C"
void C_ZN5QFile6existsERK7QString(const QString & fileName) {
  /*return*/ QFile::exists(fileName);
}
// /usr/include/qt/QtCore/qfile.h:109
// QString readLink()
extern "C"
void C_ZNK5QFile8readLinkEv(void *this_) {
  /*return*/ ((QFile*)this_)->readLink();
}
// static
// /usr/include/qt/QtCore/qfile.h:110
// QString readLink(const class QString &)
extern "C"
void C_ZN5QFile8readLinkERK7QString(const QString & fileName) {
  /*return*/ QFile::readLink(fileName);
}
// inline
// /usr/include/qt/QtCore/qfile.h:111
// QString symLinkTarget()
extern "C"
void C_ZNK5QFile13symLinkTargetEv(void *this_) {
  /*return*/ ((QFile*)this_)->symLinkTarget();
}
// static inline
// /usr/include/qt/QtCore/qfile.h:112
// QString symLinkTarget(const class QString &)
extern "C"
void C_ZN5QFile13symLinkTargetERK7QString(const QString & fileName) {
  /*return*/ QFile::symLinkTarget(fileName);
}
// /usr/include/qt/QtCore/qfile.h:114
// bool remove()
extern "C"
void C_ZN5QFile6removeEv(void *this_) {
  /*return*/ ((QFile*)this_)->remove();
}
// static
// /usr/include/qt/QtCore/qfile.h:115
// bool remove(const class QString &)
extern "C"
void C_ZN5QFile6removeERK7QString(const QString & fileName) {
  /*return*/ QFile::remove(fileName);
}
// /usr/include/qt/QtCore/qfile.h:117
// bool rename(const class QString &)
extern "C"
void C_ZN5QFile6renameERK7QString(void *this_, const QString & newName) {
  /*return*/ ((QFile*)this_)->rename(newName);
}
// static
// /usr/include/qt/QtCore/qfile.h:118
// bool rename(const class QString &, const class QString &)
extern "C"
void C_ZN5QFile6renameERK7QStringS2_(const QString & oldName, const QString & newName) {
  /*return*/ QFile::rename(oldName, newName);
}
// /usr/include/qt/QtCore/qfile.h:120
// bool link(const class QString &)
extern "C"
void C_ZN5QFile4linkERK7QString(void *this_, const QString & newName) {
  /*return*/ ((QFile*)this_)->link(newName);
}
// static
// /usr/include/qt/QtCore/qfile.h:121
// bool link(const class QString &, const class QString &)
extern "C"
void C_ZN5QFile4linkERK7QStringS2_(const QString & oldname, const QString & newName) {
  /*return*/ QFile::link(oldname, newName);
}
// /usr/include/qt/QtCore/qfile.h:123
// bool copy(const class QString &)
extern "C"
void C_ZN5QFile4copyERK7QString(void *this_, const QString & newName) {
  /*return*/ ((QFile*)this_)->copy(newName);
}
// static
// /usr/include/qt/QtCore/qfile.h:124
// bool copy(const class QString &, const class QString &)
extern "C"
void C_ZN5QFile4copyERK7QStringS2_(const QString & fileName, const QString & newName) {
  /*return*/ QFile::copy(fileName, newName);
}
// virtual
// /usr/include/qt/QtCore/qfile.h:126
// bool open(OpenMode)
extern "C"
void C_ZN5QFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> flags) {
  /*return*/ ((QFile*)this_)->open(flags);
}
// /usr/include/qt/QtCore/qfile.h:127
// bool open(FILE *, OpenMode, FileHandleFlags)
extern "C"
void C_ZN5QFile4openEP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEES2_IN11QFileDevice14FileHandleFlagEE(void *this_, FILE * f, QFlags<QIODevice::OpenModeFlag> ioFlags, QFlags<QFileDevice::FileHandleFlag> handleFlags) {
  /*return*/ ((QFile*)this_)->open(f, ioFlags, handleFlags);
}
// /usr/include/qt/QtCore/qfile.h:128
// bool open(int, OpenMode, FileHandleFlags)
extern "C"
void C_ZN5QFile4openEi6QFlagsIN9QIODevice12OpenModeFlagEES0_IN11QFileDevice14FileHandleFlagEE(void *this_, int fd, QFlags<QIODevice::OpenModeFlag> ioFlags, QFlags<QFileDevice::FileHandleFlag> handleFlags) {
  /*return*/ ((QFile*)this_)->open(fd, ioFlags, handleFlags);
}
// virtual
// /usr/include/qt/QtCore/qfile.h:130
// qint64 size()
extern "C"
void C_ZNK5QFile4sizeEv(void *this_) {
  /*return*/ ((QFile*)this_)->size();
}
// virtual
// /usr/include/qt/QtCore/qfile.h:132
// bool resize(qint64)
extern "C"
void C_ZN5QFile6resizeEx(void *this_, qint64 sz) {
  /*return*/ ((QFile*)this_)->resize(sz);
}
// static
// /usr/include/qt/QtCore/qfile.h:133
// bool resize(const class QString &, qint64)
extern "C"
void C_ZN5QFile6resizeERK7QStringx(const QString & filename, qint64 sz) {
  /*return*/ QFile::resize(filename, sz);
}
// virtual
// /usr/include/qt/QtCore/qfile.h:135
// Permissions permissions()
extern "C"
void C_ZNK5QFile11permissionsEv(void *this_) {
  /*return*/ ((QFile*)this_)->permissions();
}
// static
// /usr/include/qt/QtCore/qfile.h:136
// Permissions permissions(const class QString &)
extern "C"
void C_ZN5QFile11permissionsERK7QString(const QString & filename) {
  /*return*/ QFile::permissions(filename);
}
// virtual
// /usr/include/qt/QtCore/qfile.h:137
// bool setPermissions(Permissions)
extern "C"
void C_ZN5QFile14setPermissionsE6QFlagsIN11QFileDevice10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissionSpec) {
  /*return*/ ((QFile*)this_)->setPermissions(permissionSpec);
}
// static
// /usr/include/qt/QtCore/qfile.h:138
// bool setPermissions(const class QString &, Permissions)
extern "C"
void C_ZN5QFile14setPermissionsERK7QString6QFlagsIN11QFileDevice10PermissionEE(const QString & filename, QFlags<QFileDevice::Permission> permissionSpec) {
  /*return*/ QFile::setPermissions(filename, permissionSpec);
}