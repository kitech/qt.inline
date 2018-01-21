//  header block begin
// /usr/include/qt/QtCore/qfilesystemwatcher.h
#include <qfilesystemwatcher.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK18QFileSystemWatcher10metaObjectEv(void *this_) {
  /*return*/ ((QFileSystemWatcher*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// void QFileSystemWatcher(class QObject *)
extern "C"
void* C_ZN18QFileSystemWatcherC1EP7QObject(QObject * parent) {
  return new QFileSystemWatcher(parent);
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// void QFileSystemWatcher(const class QStringList &, class QObject *)
extern "C"
void* C_ZN18QFileSystemWatcherC1ERK11QStringListP7QObject(const QStringList & paths, QObject * parent) {
  return new QFileSystemWatcher(paths, parent);
}
// virtual
// /usr/include/qt/QtCore/qfilesystemwatcher.h:60
// void ~QFileSystemWatcher()
extern "C"
void C_ZN18QFileSystemWatcherD1Ev(void *this_) {
  delete (QFileSystemWatcher*)(this_);
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:62
// bool addPath(const class QString &)
extern "C"
void C_ZN18QFileSystemWatcher7addPathERK7QString(void *this_, const QString & file) {
  /*return*/ ((QFileSystemWatcher*)this_)->addPath(file);
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:63
// QStringList addPaths(const class QStringList &)
extern "C"
void C_ZN18QFileSystemWatcher8addPathsERK11QStringList(void *this_, const QStringList & files) {
  /*return*/ ((QFileSystemWatcher*)this_)->addPaths(files);
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:64
// bool removePath(const class QString &)
extern "C"
void C_ZN18QFileSystemWatcher10removePathERK7QString(void *this_, const QString & file) {
  /*return*/ ((QFileSystemWatcher*)this_)->removePath(file);
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:65
// QStringList removePaths(const class QStringList &)
extern "C"
void C_ZN18QFileSystemWatcher11removePathsERK11QStringList(void *this_, const QStringList & files) {
  /*return*/ ((QFileSystemWatcher*)this_)->removePaths(files);
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:67
// QStringList files()
extern "C"
void C_ZNK18QFileSystemWatcher5filesEv(void *this_) {
  /*return*/ ((QFileSystemWatcher*)this_)->files();
}
// /usr/include/qt/QtCore/qfilesystemwatcher.h:68
// QStringList directories()
extern "C"
void C_ZNK18QFileSystemWatcher11directoriesEv(void *this_) {
  /*return*/ ((QFileSystemWatcher*)this_)->directories();
}
//  main block end
