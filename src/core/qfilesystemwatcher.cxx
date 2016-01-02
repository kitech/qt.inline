// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qfilesystemwatcher.h
// dst-file: /src/core/qfilesystemwatcher.cxx
//

// header block begin =>
#include <qfilesystemwatcher.h>

extern "C" {

int QFileSystemWatcher_Class_Size()
{
  return sizeof(QFileSystemWatcher);
}

// ~QFileSystemWatcher()
void dedtor_ZN18QFileSystemWatcherD0Ev(QFileSystemWatcher* that)
{
  QFileSystemWatcher* rthis = (QFileSystemWatcher*)that;
  delete rthis;
}

// QFileSystemWatcher(class QObject *)
QFileSystemWatcher* dector_ZN18QFileSystemWatcherC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QFileSystemWatcher) == 32, "tyszerr");
  QFileSystemWatcher* rthis = new QFileSystemWatcher(parent);
  return rthis;
}

// QFileSystemWatcher(const class QStringList &, class QObject *)
QFileSystemWatcher* dector_ZN18QFileSystemWatcherC1ERK11QStringListP7QObject(const QStringList & paths, QObject * parent)
{
  // static_assert(sizeof(QFileSystemWatcher) == 32, "tyszerr");
  QFileSystemWatcher* rthis = new QFileSystemWatcher(paths, parent);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

