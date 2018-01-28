//  header block begin
// /usr/include/qt/QtCore/qfilesystemwatcher.h
#include <qfilesystemwatcher.h>
#include <QtCore>

// QFileSystemWatcher is pure virtual: false
//  header block end

//  main block begin

class MyQFileSystemWatcher : public QFileSystemWatcher {
public:
MyQFileSystemWatcher(QObject * parent) : QFileSystemWatcher(parent) {}
MyQFileSystemWatcher(const QStringList & paths, QObject * parent) : QFileSystemWatcher(paths, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QFileSystemWatcher10metaObjectEv(void *this_) {
  return (void*)((QFileSystemWatcher*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// [-2] void QFileSystemWatcher(class QObject *)
extern "C"
void* C_ZN18QFileSystemWatcherC1EP7QObject(QObject * parent) {
  (MyQFileSystemWatcher*)(0);
  return  new MyQFileSystemWatcher(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// [-2] void QFileSystemWatcher(const class QStringList &, class QObject *)
extern "C"
void* C_ZN18QFileSystemWatcherC1ERK11QStringListP7QObject(const QStringList & paths, QObject * parent) {
  (MyQFileSystemWatcher*)(0);
  return  new MyQFileSystemWatcher(paths, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:60
// [-2] void ~QFileSystemWatcher()
extern "C"
void C_ZN18QFileSystemWatcherD1Ev(void *this_) {
  delete (QFileSystemWatcher*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:62
// [1] bool addPath(const class QString &)
extern "C"
bool C_ZN18QFileSystemWatcher7addPathERK7QString(void *this_, const QString & file) {
  return (bool)((QFileSystemWatcher*)this_)->addPath(file);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:64
// [1] bool removePath(const class QString &)
extern "C"
bool C_ZN18QFileSystemWatcher10removePathERK7QString(void *this_, const QString & file) {
  return (bool)((QFileSystemWatcher*)this_)->removePath(file);
}
//  main block end
