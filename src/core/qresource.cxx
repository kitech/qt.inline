// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qresource.h
// dst-file: /src/core/qresource.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qresource.h>


#include <qlocale.h>
#include <qstringlist.h>
#include <qstring.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qresource_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QResource_Class_Size()
{
  return sizeof(QResource);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 50, column 5>
//   // proto:  void QResource::QResource(const QString & file, const QLocale & locale);
extern "C"
QResource*
C_ZN9QResourceC2ERK7QStringRK7QLocale(const QString* arg1,
const QLocale* arg2) {
  auto ret = new QResource(*((const QString*)arg1), *((const QLocale*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 58, column 13>
//   // proto:  QLocale QResource::locale();
// _ZNK9QResource6localeEv locale()
extern "C"
QLocale*
C_ZNK9QResource6localeEv(void *qthis) {
  auto ret =
  ((QResource*)qthis)->locale();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 57, column 10>
//   // proto:  void QResource::setLocale(const QLocale & locale);
// _ZN9QResource9setLocaleERK7QLocale setLocale(const class QLocale &)
extern "C"
void
C_ZN9QResource9setLocaleERK7QLocale(void *qthis,
const QLocale* arg1) {
  ((QResource*)qthis)->setLocale(*((const QLocale*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 72, column 17>
//   // proto: static bool QResource::registerResource(const uchar * rccData, const QString & resourceRoot);
// _ZN9QResource16registerResourceEPKhRK7QString registerResource(const uchar *, const class QString &)
extern "C"
bool
C_ZN9QResource16registerResourceEPKhRK7QString(const uchar * arg1,
const QString* arg2) {
  auto ret =
  QResource::registerResource(arg1,
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 64, column 18>
//   // proto:  const uchar * QResource::data();
// _ZNK9QResource4dataEv data()
extern "C"
void*
C_ZNK9QResource4dataEv(void *qthis) {
  auto ret =
  ((QResource*)qthis)->data();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 67, column 24>
//   // proto: static QStringList QResource::searchPaths();
// _ZN9QResource11searchPathsEv searchPaths()
extern "C"
QStringList*
C_ZN9QResource11searchPathsEv() {
  auto ret =
  QResource::searchPaths();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 54, column 13>
//   // proto:  QString QResource::fileName();
// _ZNK9QResource8fileNameEv fileName()
extern "C"
QString*
C_ZNK9QResource8fileNameEv(void *qthis) {
  auto ret =
  ((QResource*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 55, column 13>
//   // proto:  QString QResource::absoluteFilePath();
// _ZNK9QResource16absoluteFilePathEv absoluteFilePath()
extern "C"
QString*
C_ZNK9QResource16absoluteFilePathEv(void *qthis) {
  auto ret =
  ((QResource*)qthis)->absoluteFilePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 73, column 17>
//   // proto: static bool QResource::unregisterResource(const uchar * rccData, const QString & resourceRoot);
// _ZN9QResource18unregisterResourceEPKhRK7QString unregisterResource(const uchar *, const class QString &)
extern "C"
bool
C_ZN9QResource18unregisterResourceEPKhRK7QString(const uchar * arg1,
const QString* arg2) {
  auto ret =
  QResource::unregisterResource(arg1,
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 69, column 17>
//   // proto: static bool QResource::registerResource(const QString & rccFilename, const QString & resourceRoot);
// _ZN9QResource16registerResourceERK7QStringS2_ registerResource(const class QString &, const class QString &)
extern "C"
bool
C_ZN9QResource16registerResourceERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QResource::registerResource(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 66, column 17>
//   // proto: static void QResource::addSearchPath(const QString & path);
// _ZN9QResource13addSearchPathERK7QString addSearchPath(const class QString &)
extern "C"
void
C_ZN9QResource13addSearchPathERK7QString(const QString* arg1) {
  QResource::addSearchPath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 63, column 12>
//   // proto:  qint64 QResource::size();
// _ZNK9QResource4sizeEv size()
extern "C"
long long
C_ZNK9QResource4sizeEv(void *qthis) {
  auto ret =
  ((QResource*)qthis)->size();
  return ret; // 0 TypeKind.LONGLONG
}
//   // proto:  void QResource::~QResource();
extern "C"
void C_ZN9QResourceD2Ev(void *qthis) {
  delete (QResource*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 60, column 10>
//   // proto:  bool QResource::isValid();
// _ZNK9QResource7isValidEv isValid()
extern "C"
bool
C_ZNK9QResource7isValidEv(void *qthis) {
  auto ret =
  ((QResource*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 53, column 10>
//   // proto:  void QResource::setFileName(const QString & file);
// _ZN9QResource11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN9QResource11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QResource*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 70, column 17>
//   // proto: static bool QResource::unregisterResource(const QString & rccFilename, const QString & resourceRoot);
// _ZN9QResource18unregisterResourceERK7QStringS2_ unregisterResource(const class QString &, const class QString &)
extern "C"
bool
C_ZN9QResource18unregisterResourceERK7QStringS2_(const QString* arg1,
const QString* arg2) {
  auto ret =
  QResource::unregisterResource(*((const QString*)arg1),
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qresource.h', line 62, column 10>
//   // proto:  bool QResource::isCompressed();
// _ZNK9QResource12isCompressedEv isCompressed()
extern "C"
bool
C_ZNK9QResource12isCompressedEv(void *qthis) {
  auto ret =
  ((QResource*)qthis)->isCompressed();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

