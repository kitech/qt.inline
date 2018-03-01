//  header block begin
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
// void QFileSystemWatcher(class QObject *)
MyQFileSystemWatcher(QObject * parent) : QFileSystemWatcher(parent) {}
// void QFileSystemWatcher(const class QStringList &, class QObject *)
MyQFileSystemWatcher(const QStringList & paths, QObject * parent) : QFileSystemWatcher(paths, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QFileSystemWatcher10metaObjectEv(void *this_) {
  return (void*)((QFileSystemWatcher*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// [-2] void QFileSystemWatcher(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcherC2EP7QObject(QObject * parent) {
  return  new QFileSystemWatcher(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// [-2] void QFileSystemWatcher(const class QStringList &, class QObject *)
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
// [1] bool addPath(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFileSystemWatcher7addPathERK7QString(void *this_, QString* file) {
  return (bool)((QFileSystemWatcher*)this_)->addPath(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:63
// [8] QStringList addPaths(const class QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QFileSystemWatcher8addPathsERK11QStringList(void *this_, QStringList* files) {
  auto rv = ((QFileSystemWatcher*)this_)->addPaths(*files);
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:64
// [1] bool removePath(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QFileSystemWatcher10removePathERK7QString(void *this_, QString* file) {
  return (bool)((QFileSystemWatcher*)this_)->removePath(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:65
// [8] QStringList removePaths(const class QStringList &)
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

//  main block end
