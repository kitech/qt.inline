// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlfile.h
// dst-file: /src/qml/qqmlfile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlfile.h>


#include <qglobal.h>
#include <qurl.h>
#include <qstring.h>
#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qqmlfile_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlFile_Class_Size()
{
  return sizeof(QQmlFile);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 79, column 10>
//   // proto:  bool QQmlFile::connectDownloadProgress(QObject * , const char * );
// _ZN8QQmlFile23connectDownloadProgressEP7QObjectPKc connectDownloadProgress(class QObject *, const char *)
extern "C"
bool
C_ZN8QQmlFile23connectDownloadProgressEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  auto ret =
  ((QQmlFile*)qthis)->connectDownloadProgress(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 75, column 10>
//   // proto:  void QQmlFile::clear(QObject * );
// _ZN8QQmlFile5clearEP7QObject clear(class QObject *)
extern "C"
void
C_ZN8QQmlFile5clearEP7QObject(void *qthis,
QObject * arg1) {
  ((QQmlFile*)qthis)->clear(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 51, column 5>
//   // proto:  void QQmlFile::QQmlFile(QQmlEngine * , const QUrl & );
extern "C"
QQmlFile*
C_ZN8QQmlFileC2EP10QQmlEngineRK4QUrl(QQmlEngine * arg1,
const QUrl* arg2) {
  auto ret = new QQmlFile(arg1, *((const QUrl*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 67, column 12>
//   // proto:  qint64 QQmlFile::size();
// _ZNK8QQmlFile4sizeEv size()
extern "C"
long long
C_ZNK8QQmlFile4sizeEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->size();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 80, column 10>
//   // proto:  bool QQmlFile::connectDownloadProgress(QObject * , int );
// _ZN8QQmlFile23connectDownloadProgressEP7QObjecti connectDownloadProgress(class QObject *, int)
extern "C"
bool
C_ZN8QQmlFile23connectDownloadProgressEP7QObjecti(void *qthis,
QObject * arg1,
int arg2) {
  auto ret =
  ((QQmlFile*)qthis)->connectDownloadProgress(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 57, column 10>
//   // proto:  bool QQmlFile::isNull();
// _ZNK8QQmlFile6isNullEv isNull()
extern "C"
bool
C_ZNK8QQmlFile6isNullEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 64, column 12>
//   // proto:  QQmlFile::Status QQmlFile::status();
// _ZNK8QQmlFile6statusEv status()
extern "C"
QQmlFile::Status
C_ZNK8QQmlFile6statusEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->status();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 86, column 17>
//   // proto: static bool QQmlFile::isLocalFile(const QUrl & url);
// _ZN8QQmlFile11isLocalFileERK4QUrl isLocalFile(const class QUrl &)
extern "C"
bool
C_ZN8QQmlFile11isLocalFileERK4QUrl(const QUrl* arg1) {
  auto ret =
  QQmlFile::isLocalFile(*((const QUrl*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 72, column 10>
//   // proto:  void QQmlFile::load(QQmlEngine * , const QString & );
// _ZN8QQmlFile4loadEP10QQmlEngineRK7QString load(class QQmlEngine *, const class QString &)
extern "C"
void
C_ZN8QQmlFile4loadEP10QQmlEngineRK7QString(void *qthis,
QQmlEngine * arg1,
const QString* arg2) {
  ((QQmlFile*)qthis)->load(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 62, column 10>
//   // proto:  QUrl QQmlFile::url();
// _ZNK8QQmlFile3urlEv url()
extern "C"
QUrl*
C_ZNK8QQmlFile3urlEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->url();
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 65, column 13>
//   // proto:  QString QQmlFile::error();
// _ZNK8QQmlFile5errorEv error()
extern "C"
QString*
C_ZNK8QQmlFile5errorEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->error();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 74, column 10>
//   // proto:  void QQmlFile::clear();
// _ZN8QQmlFile5clearEv clear()
extern "C"
void
C_ZN8QQmlFile5clearEv(void *qthis) {
  ((QQmlFile*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 59, column 10>
//   // proto:  bool QQmlFile::isError();
// _ZNK8QQmlFile7isErrorEv isError()
extern "C"
bool
C_ZNK8QQmlFile7isErrorEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->isError();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 88, column 20>
//   // proto: static QString QQmlFile::urlToLocalFileOrQrc(const QString & );
// _ZN8QQmlFile19urlToLocalFileOrQrcERK7QString urlToLocalFileOrQrc(const class QString &)
extern "C"
QString*
C_ZN8QQmlFile19urlToLocalFileOrQrcERK7QString(const QString* arg1) {
  auto ret =
  QQmlFile::urlToLocalFileOrQrc(*((const QString*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 69, column 16>
//   // proto:  QByteArray QQmlFile::dataByteArray();
// _ZNK8QQmlFile13dataByteArrayEv dataByteArray()
extern "C"
QByteArray*
C_ZNK8QQmlFile13dataByteArrayEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->dataByteArray();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 85, column 17>
//   // proto: static bool QQmlFile::isLocalFile(const QString & url);
// _ZN8QQmlFile11isLocalFileERK7QString isLocalFile(const class QString &)
extern "C"
bool
C_ZN8QQmlFile11isLocalFileERK7QString(const QString* arg1) {
  auto ret =
  QQmlFile::isLocalFile(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 58, column 10>
//   // proto:  bool QQmlFile::isReady();
// _ZNK8QQmlFile7isReadyEv isReady()
extern "C"
bool
C_ZNK8QQmlFile7isReadyEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->isReady();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 60, column 10>
//   // proto:  bool QQmlFile::isLoading();
// _ZNK8QQmlFile9isLoadingEv isLoading()
extern "C"
bool
C_ZNK8QQmlFile9isLoadingEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->isLoading();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 50, column 5>
//   // proto:  void QQmlFile::QQmlFile();
extern "C"
QQmlFile*
C_ZN8QQmlFileC2Ev() {
  auto ret = new QQmlFile();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 77, column 10>
//   // proto:  bool QQmlFile::connectFinished(QObject * , const char * );
// _ZN8QQmlFile15connectFinishedEP7QObjectPKc connectFinished(class QObject *, const char *)
extern "C"
bool
C_ZN8QQmlFile15connectFinishedEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  auto ret =
  ((QQmlFile*)qthis)->connectFinished(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 82, column 17>
//   // proto: static bool QQmlFile::isSynchronous(const QString & url);
// _ZN8QQmlFile13isSynchronousERK7QString isSynchronous(const class QString &)
extern "C"
bool
C_ZN8QQmlFile13isSynchronousERK7QString(const QString* arg1) {
  auto ret =
  QQmlFile::isSynchronous(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 71, column 10>
//   // proto:  void QQmlFile::load(QQmlEngine * , const QUrl & );
// _ZN8QQmlFile4loadEP10QQmlEngineRK4QUrl load(class QQmlEngine *, const class QUrl &)
extern "C"
void
C_ZN8QQmlFile4loadEP10QQmlEngineRK4QUrl(void *qthis,
QQmlEngine * arg1,
const QUrl* arg2) {
  ((QQmlFile*)qthis)->load(arg1,
*((const QUrl*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 83, column 17>
//   // proto: static bool QQmlFile::isSynchronous(const QUrl & url);
// _ZN8QQmlFile13isSynchronousERK4QUrl isSynchronous(const class QUrl &)
extern "C"
bool
C_ZN8QQmlFile13isSynchronousERK4QUrl(const QUrl* arg1) {
  auto ret =
  QQmlFile::isSynchronous(*((const QUrl*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 78, column 10>
//   // proto:  bool QQmlFile::connectFinished(QObject * , int );
// _ZN8QQmlFile15connectFinishedEP7QObjecti connectFinished(class QObject *, int)
extern "C"
bool
C_ZN8QQmlFile15connectFinishedEP7QObjecti(void *qthis,
QObject * arg1,
int arg2) {
  auto ret =
  ((QQmlFile*)qthis)->connectFinished(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 89, column 20>
//   // proto: static QString QQmlFile::urlToLocalFileOrQrc(const QUrl & );
// _ZN8QQmlFile19urlToLocalFileOrQrcERK4QUrl urlToLocalFileOrQrc(const class QUrl &)
extern "C"
QString*
C_ZN8QQmlFile19urlToLocalFileOrQrcERK4QUrl(const QUrl* arg1) {
  auto ret =
  QQmlFile::urlToLocalFileOrQrc(*((const QUrl*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 52, column 5>
//   // proto:  void QQmlFile::QQmlFile(QQmlEngine * , const QString & );
extern "C"
QQmlFile*
C_ZN8QQmlFileC2EP10QQmlEngineRK7QString(QQmlEngine * arg1,
const QString* arg2) {
  auto ret = new QQmlFile(arg1, *((const QString*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlfile.h', line 68, column 17>
//   // proto:  const char * QQmlFile::data();
// _ZNK8QQmlFile4dataEv data()
extern "C"
void*
C_ZNK8QQmlFile4dataEv(void *qthis) {
  auto ret =
  ((QQmlFile*)qthis)->data();
  return (void*)ret;
}
//   // proto:  void QQmlFile::~QQmlFile();
extern "C"
void C_ZN8QQmlFileD2Ev(void *qthis) {
  delete (QQmlFile*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

