//  header block begin
// /usr/include/qt/QtCore/qfile.h
#include <qfile.h>
#include <QtCore>

// QFile is pure virtual: false
// QFile has virtual projected: false
//  header block end

//  main block begin

class MyQFile : public QFile {
public:
  virtual ~MyQFile() {}
// void QFile()
MyQFile() : QFile() {}
// void QFile(const class QString &)
MyQFile(const QString & name) : QFile(name) {}
// void QFile(class QObject *)
MyQFile(QObject * parent) : QFile(parent) {}
// void QFile(const class QString &, class QObject *)
MyQFile(const QString & name, QObject * parent) : QFile(name, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:60
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK5QFile10metaObjectEv(void *this_) {
  return (void*)((QFile*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:65
// [-2] void QFile()
extern "C"
void* C_ZN5QFileC2Ev() {
  return  new QFile();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:66
// [-2] void QFile(const class QString &)
extern "C"
void* C_ZN5QFileC2ERK7QString(const QString & name) {
  return  new QFile(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:68
// [-2] void QFile(class QObject *)
extern "C"
void* C_ZN5QFileC2EP7QObject(QObject * parent) {
  return  new QFile(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:69
// [-2] void QFile(const class QString &, class QObject *)
extern "C"
void* C_ZN5QFileC2ERK7QStringP7QObject(const QString & name, QObject * parent) {
  return  new QFile(name, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:71
// [-2] void ~QFile()
extern "C"
void C_ZN5QFileD2Ev(void *this_) {
  delete (QFile*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:73
// [8] QString fileName()
extern "C"
void* C_ZNK5QFile8fileNameEv(void *this_) {
  auto rv = ((QFile*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:74
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN5QFile11setFileNameERK7QString(void *this_, const QString & name) {
  ((QFile*)this_)->setFileName(name);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:88
// [8] QByteArray encodeName(const class QString &)
extern "C"
void* C_ZN5QFile10encodeNameERK7QString(const QString & fileName) {
  auto rv = QFile::encodeName(fileName);
return new QByteArray(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:92
// [8] QString decodeName(const class QByteArray &)
extern "C"
void* C_ZN5QFile10decodeNameERK10QByteArray(const QByteArray & localFileName) {
  auto rv = QFile::decodeName(localFileName);
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:97
// [8] QString decodeName(const char *)
extern "C"
void* C_ZN5QFile10decodeNameEPKc(const char * localFileName) {
  auto rv = QFile::decodeName(localFileName);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:107
// [1] bool exists()
extern "C"
bool C_ZNK5QFile6existsEv(void *this_) {
  return (bool)((QFile*)this_)->exists();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:108
// [1] bool exists(const class QString &)
extern "C"
bool C_ZN5QFile6existsERK7QString(const QString & fileName) {
  return (bool)QFile::exists(fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:110
// [8] QString readLink()
extern "C"
void* C_ZNK5QFile8readLinkEv(void *this_) {
  auto rv = ((QFile*)this_)->readLink();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:111
// [8] QString readLink(const class QString &)
extern "C"
void* C_ZN5QFile8readLinkERK7QString(const QString & fileName) {
  auto rv = QFile::readLink(fileName);
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:112
// [8] QString symLinkTarget()
extern "C"
void* C_ZNK5QFile13symLinkTargetEv(void *this_) {
  auto rv = ((QFile*)this_)->symLinkTarget();
return new QString(rv);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:113
// [8] QString symLinkTarget(const class QString &)
extern "C"
void* C_ZN5QFile13symLinkTargetERK7QString(const QString & fileName) {
  auto rv = QFile::symLinkTarget(fileName);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:115
// [1] bool remove()
extern "C"
bool C_ZN5QFile6removeEv(void *this_) {
  return (bool)((QFile*)this_)->remove();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:116
// [1] bool remove(const class QString &)
extern "C"
bool C_ZN5QFile6removeERK7QString(const QString & fileName) {
  return (bool)QFile::remove(fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:118
// [1] bool rename(const class QString &)
extern "C"
bool C_ZN5QFile6renameERK7QString(void *this_, const QString & newName) {
  return (bool)((QFile*)this_)->rename(newName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:119
// [1] bool rename(const class QString &, const class QString &)
extern "C"
bool C_ZN5QFile6renameERK7QStringS2_(const QString & oldName, const QString & newName) {
  return (bool)QFile::rename(oldName, newName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:121
// [1] bool link(const class QString &)
extern "C"
bool C_ZN5QFile4linkERK7QString(void *this_, const QString & newName) {
  return (bool)((QFile*)this_)->link(newName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:122
// [1] bool link(const class QString &, const class QString &)
extern "C"
bool C_ZN5QFile4linkERK7QStringS2_(const QString & oldname, const QString & newName) {
  return (bool)QFile::link(oldname, newName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:124
// [1] bool copy(const class QString &)
extern "C"
bool C_ZN5QFile4copyERK7QString(void *this_, const QString & newName) {
  return (bool)((QFile*)this_)->copy(newName);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:125
// [1] bool copy(const class QString &, const class QString &)
extern "C"
bool C_ZN5QFile4copyERK7QStringS2_(const QString & fileName, const QString & newName) {
  return (bool)QFile::copy(fileName, newName);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:131
// [8] qint64 size()
extern "C"
qint64 C_ZNK5QFile4sizeEv(void *this_) {
  return (qint64)((QFile*)this_)->size();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:133
// [1] bool resize(qint64)
extern "C"
bool C_ZN5QFile6resizeEx(void *this_, qint64 sz) {
  return (bool)((QFile*)this_)->resize(sz);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:134
// [1] bool resize(const class QString &, qint64)
extern "C"
bool C_ZN5QFile6resizeERK7QStringx(const QString & filename, qint64 sz) {
  return (bool)QFile::resize(filename, sz);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:136
// [4] QFileDevice::Permissions permissions()
extern "C"
void C_ZNK5QFile11permissionsEv(void *this_) {
  auto rv = ((QFile*)this_)->permissions();
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:137
// [4] QFileDevice::Permissions permissions(const class QString &)
extern "C"
void C_ZN5QFile11permissionsERK7QString(const QString & filename) {
  auto rv = QFile::permissions(filename);
/*return rv;*/
}
//  main block end
