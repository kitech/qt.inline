// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qfilesystemwatcher.h
// dst-file: /src/core/qfilesystemwatcher.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfilesystemwatcher.h>


#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qfilesystemwatcher_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFileSystemWatcher_Class_Size()
{
  return sizeof(QFileSystemWatcher);
}

// <= use block end

// ext block begin =>
//   // proto:  void QFileSystemWatcher::~QFileSystemWatcher();
extern "C"
void C_ZN18QFileSystemWatcherD2Ev(void *qthis) {
  delete (QFileSystemWatcher*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 58, column 10>
//   // proto:  bool QFileSystemWatcher::removePath(const QString & file);
// _ZN18QFileSystemWatcher10removePathERK7QString removePath(const class QString &)
extern "C"
bool
C_ZN18QFileSystemWatcher10removePathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFileSystemWatcher*)qthis)->removePath(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 62, column 17>
//   // proto:  QStringList QFileSystemWatcher::directories();
// _ZNK18QFileSystemWatcher11directoriesEv directories()
extern "C"
QStringList*
C_ZNK18QFileSystemWatcher11directoriesEv(void *qthis) {
  auto ret =
  ((QFileSystemWatcher*)qthis)->directories();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 61, column 17>
//   // proto:  QStringList QFileSystemWatcher::files();
// _ZNK18QFileSystemWatcher5filesEv files()
extern "C"
QStringList*
C_ZNK18QFileSystemWatcher5filesEv(void *qthis) {
  auto ret =
  ((QFileSystemWatcher*)qthis)->files();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 57, column 17>
//   // proto:  QStringList QFileSystemWatcher::addPaths(const QStringList & files);
// _ZN18QFileSystemWatcher8addPathsERK11QStringList addPaths(const class QStringList &)
extern "C"
QStringList*
C_ZN18QFileSystemWatcher8addPathsERK11QStringList(void *qthis,
const QStringList* arg1) {
  auto ret =
  ((QFileSystemWatcher*)qthis)->addPaths(*((const QStringList*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 59, column 17>
//   // proto:  QStringList QFileSystemWatcher::removePaths(const QStringList & files);
// _ZN18QFileSystemWatcher11removePathsERK11QStringList removePaths(const class QStringList &)
extern "C"
QStringList*
C_ZN18QFileSystemWatcher11removePathsERK11QStringList(void *qthis,
const QStringList* arg1) {
  auto ret =
  ((QFileSystemWatcher*)qthis)->removePaths(*((const QStringList*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 52, column 5>
//   // proto:  void QFileSystemWatcher::QFileSystemWatcher(QObject * parent);
extern "C"
QFileSystemWatcher*
C_ZN18QFileSystemWatcherC2EP7QObject(QObject * arg1) {
  auto ret = new QFileSystemWatcher(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 56, column 10>
//   // proto:  bool QFileSystemWatcher::addPath(const QString & file);
// _ZN18QFileSystemWatcher7addPathERK7QString addPath(const class QString &)
extern "C"
bool
C_ZN18QFileSystemWatcher7addPathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFileSystemWatcher*)qthis)->addPath(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 48, column 5>
//   // proto:  const QMetaObject * QFileSystemWatcher::metaObject();
// _ZNK18QFileSystemWatcher10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QFileSystemWatcher10metaObjectEv(void *qthis) {
  auto ret =
  ((QFileSystemWatcher*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfilesystemwatcher.h', line 53, column 5>
//   // proto:  void QFileSystemWatcher::QFileSystemWatcher(const QStringList & paths, QObject * parent);
extern "C"
QFileSystemWatcher*
C_ZN18QFileSystemWatcherC2ERK11QStringListP7QObject(const QStringList* arg1,
QObject * arg2) {
  auto ret = new QFileSystemWatcher(*((const QStringList*)arg1),
arg2);
  return ret;
}
// <= ext block end

// body block begin =>
// QFileSystemWatcher_SlotProxy here
class QFileSystemWatcher_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileSystemWatcher_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfilesystemwatcher.moc"

extern "C" {
  QFileSystemWatcher_SlotProxy* QFileSystemWatcher_SlotProxy_new()
  {
    return new QFileSystemWatcher_SlotProxy();
  }
};

// <= body block end

