//  header block begin
// /usr/include/qt/QtCore/qfilesystemwatcher.h
#include <qfilesystemwatcher.h>
#include <QtCore>

// QFileSystemWatcher is pure virtual: false
// QFileSystemWatcher has virtual projected: false
//  header block end

//  main block begin

class MyQFileSystemWatcher : public QFileSystemWatcher {
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
extern "C"
void* C_ZNK18QFileSystemWatcher10metaObjectEv(void *this_) {
  return (void*)((QFileSystemWatcher*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:58
// [-2] void QFileSystemWatcher(class QObject *)
extern "C"
void* C_ZN18QFileSystemWatcherC2EP7QObject(QObject * parent) {
  return  new QFileSystemWatcher(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:59
// [-2] void QFileSystemWatcher(const class QStringList &, class QObject *)
extern "C"
void* C_ZN18QFileSystemWatcherC2ERK11QStringListP7QObject(const QStringList & paths, QObject * parent) {
  return  new QFileSystemWatcher(paths, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfilesystemwatcher.h:60
// [-2] void ~QFileSystemWatcher()
extern "C"
void C_ZN18QFileSystemWatcherD2Ev(void *this_) {
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
