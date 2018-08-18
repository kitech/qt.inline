//  header block begin
// since 0x040200
// /usr/include/qt/QtCore/qfilesystemwatcher.h
#ifndef protected
#define protected public
#endif
#include <qfilesystemwatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileSystemWatcher is pure virtual: false
// QFileSystemWatcher has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFileSystemWatcher : public QFileSystemWatcher {
public:
  virtual ~MyQFileSystemWatcher() {}
// void QFileSystemWatcher(QObject *)
MyQFileSystemWatcher(QObject * parent) : QFileSystemWatcher(parent) {}
// void QFileSystemWatcher(const QStringList &, QObject *)
MyQFileSystemWatcher(const QStringList & paths, QObject * parent) : QFileSystemWatcher(paths, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFileSystemWatcher10metaObjectEv(void *this_) {
  return (void*)((QFileSystemWatcher*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFileSystemWatcher*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QFileSystemWatcher11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFileSystemWatcher*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSystemWatcher::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSystemWatcher::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// [-2] void QFileSystemWatcher(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcherC2EP7QObject(QObject * parent) {
  return  new QFileSystemWatcher(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// [-2] void QFileSystemWatcher(const QStringList &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcherC2ERK11QStringListP7QObject(QStringList* paths, QObject * parent) {
  return  new QFileSystemWatcher(*paths, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:60
// [-2] void ~QFileSystemWatcher()
extern "C" Q_DECL_EXPORT
void C_ZN18QFileSystemWatcherD2Ev(void *this_) {
  delete (QFileSystemWatcher*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:62
// [1] bool addPath(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFileSystemWatcher7addPathERK7QString(void *this_, QString* file) {
  return (bool)((QFileSystemWatcher*)this_)->addPath(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:63
// [8] QStringList addPaths(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher8addPathsERK11QStringList(void *this_, QStringList* files) {
  auto rv = ((QFileSystemWatcher*)this_)->addPaths(*files);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:64
// [1] bool removePath(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFileSystemWatcher10removePathERK7QString(void *this_, QString* file) {
  return (bool)((QFileSystemWatcher*)this_)->removePath(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:65
// [8] QStringList removePaths(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher11removePathsERK11QStringList(void *this_, QStringList* files) {
  auto rv = ((QFileSystemWatcher*)this_)->removePaths(*files);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:67
// [8] QStringList files()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFileSystemWatcher5filesEv(void *this_) {
  auto rv = ((QFileSystemWatcher*)this_)->files();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:68
// [8] QStringList directories()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFileSystemWatcher11directoriesEv(void *this_) {
  auto rv = ((QFileSystemWatcher*)this_)->directories();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:71
// [-2] void fileChanged(const QString &, QFileSystemWatcher::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QFileSystemWatcher11fileChangedERK7QStringNS_14QPrivateSignalE(void *this_, QString* path, QFileSystemWatcher::QPrivateSignal* arg1) {
  ((QFileSystemWatcher*)this_)->fileChanged(*path, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:72
// [-2] void directoryChanged(const QString &, QFileSystemWatcher::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN18QFileSystemWatcher16directoryChangedERK7QStringNS_14QPrivateSignalE(void *this_, QString* path, QFileSystemWatcher::QPrivateSignal* arg1) {
  ((QFileSystemWatcher*)this_)->directoryChanged(*path, *arg1);
}

//  main block end
