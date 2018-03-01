//  header block begin
// /usr/include/qt/QtQml/qqmlfile.h
#ifndef protected
#define protected public
#endif
#include <qqmlfile.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlFile is pure virtual: false
// QQmlFile has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQmlFile : public QQmlFile {
public:
  virtual ~MyQQmlFile() {}
// void QQmlFile()
MyQQmlFile() : QQmlFile() {}
// void QQmlFile(class QQmlEngine *, const class QUrl &)
MyQQmlFile(QQmlEngine * arg0, const QUrl & arg1) : QQmlFile(arg0, arg1) {}
// void QQmlFile(class QQmlEngine *, const class QString &)
MyQQmlFile(QQmlEngine * arg0, const QString & arg1) : QQmlFile(arg0, arg1) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:56
// [-2] void QQmlFile()
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlFileC2Ev() {
  return  new QQmlFile();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:57
// [-2] void QQmlFile(class QQmlEngine *, const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlFileC2EP10QQmlEngineRK4QUrl(QQmlEngine * arg0, QUrl* arg1) {
  return  new QQmlFile(arg0, *arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:58
// [-2] void QQmlFile(class QQmlEngine *, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlFileC2EP10QQmlEngineRK7QString(QQmlEngine * arg0, QString* arg1) {
  return  new QQmlFile(arg0, *arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:59
// [-2] void ~QQmlFile()
extern "C" Q_DECL_EXPORT
void C_ZN8QQmlFileD2Ev(void *this_) {
  delete (QQmlFile*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:63
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QQmlFile6isNullEv(void *this_) {
  return (bool)((QQmlFile*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:64
// [1] bool isReady()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QQmlFile7isReadyEv(void *this_) {
  return (bool)((QQmlFile*)this_)->isReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:65
// [1] bool isError()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QQmlFile7isErrorEv(void *this_) {
  return (bool)((QQmlFile*)this_)->isError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:66
// [1] bool isLoading()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QQmlFile9isLoadingEv(void *this_) {
  return (bool)((QQmlFile*)this_)->isLoading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:68
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QQmlFile3urlEv(void *this_) {
  auto rv = ((QQmlFile*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:70
// [4] QQmlFile::Status status()
extern "C" Q_DECL_EXPORT
QQmlFile::Status C_ZNK8QQmlFile6statusEv(void *this_) {
  return (QQmlFile::Status)((QQmlFile*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:71
// [8] QString error()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QQmlFile5errorEv(void *this_) {
  auto rv = ((QQmlFile*)this_)->error();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:73
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK8QQmlFile4sizeEv(void *this_) {
  return (qint64)((QQmlFile*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:74
// [8] const char * data()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QQmlFile4dataEv(void *this_) {
  return (void*)((QQmlFile*)this_)->data();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:75
// [8] QByteArray dataByteArray()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QQmlFile13dataByteArrayEv(void *this_) {
  auto rv = ((QQmlFile*)this_)->dataByteArray();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:77
// [-2] void load(class QQmlEngine *, const class QUrl &)
extern "C" Q_DECL_EXPORT
void C_ZN8QQmlFile4loadEP10QQmlEngineRK4QUrl(void *this_, QQmlEngine * arg0, QUrl* arg1) {
  ((QQmlFile*)this_)->load(arg0, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:78
// [-2] void load(class QQmlEngine *, const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QQmlFile4loadEP10QQmlEngineRK7QString(void *this_, QQmlEngine * arg0, QString* arg1) {
  ((QQmlFile*)this_)->load(arg0, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:80
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN8QQmlFile5clearEv(void *this_) {
  ((QQmlFile*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:81
// [-2] void clear(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN8QQmlFile5clearEP7QObject(void *this_, QObject * arg0) {
  ((QQmlFile*)this_)->clear(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:84
// [1] bool connectFinished(class QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile15connectFinishedEP7QObjectPKc(void *this_, QObject * arg0, const char * arg1) {
  return (bool)((QQmlFile*)this_)->connectFinished(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:85
// [1] bool connectFinished(class QObject *, int)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile15connectFinishedEP7QObjecti(void *this_, QObject * arg0, int arg1) {
  return (bool)((QQmlFile*)this_)->connectFinished(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:86
// [1] bool connectDownloadProgress(class QObject *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile23connectDownloadProgressEP7QObjectPKc(void *this_, QObject * arg0, const char * arg1) {
  return (bool)((QQmlFile*)this_)->connectDownloadProgress(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:87
// [1] bool connectDownloadProgress(class QObject *, int)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile23connectDownloadProgressEP7QObjecti(void *this_, QObject * arg0, int arg1) {
  return (bool)((QQmlFile*)this_)->connectDownloadProgress(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:90
// [1] bool isSynchronous(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile13isSynchronousERK7QString(QString* url) {
  return (bool)QQmlFile::isSynchronous(*url);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:91
// [1] bool isSynchronous(const class QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile13isSynchronousERK4QUrl(QUrl* url) {
  return (bool)QQmlFile::isSynchronous(*url);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:93
// [1] bool isLocalFile(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile11isLocalFileERK7QString(QString* url) {
  return (bool)QQmlFile::isLocalFile(*url);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:94
// [1] bool isLocalFile(const class QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN8QQmlFile11isLocalFileERK4QUrl(QUrl* url) {
  return (bool)QQmlFile::isLocalFile(*url);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:96
// [8] QString urlToLocalFileOrQrc(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlFile19urlToLocalFileOrQrcERK7QString(QString* arg0) {
  auto rv = QQmlFile::urlToLocalFileOrQrc(*arg0);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfile.h:97
// [8] QString urlToLocalFileOrQrc(const class QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QQmlFile19urlToLocalFileOrQrcERK4QUrl(QUrl* arg0) {
  auto rv = QQmlFile::urlToLocalFileOrQrc(*arg0);
return new QString(rv);
}
//  main block end
