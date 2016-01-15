// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qfilesystemwatcher.h
// dst-file: /src/core/qfilesystemwatcher.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qfilesystemwatcher.h>

extern "C" {

int QFileSystemWatcher_Class_Size()
{
  return sizeof(QFileSystemWatcher);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qfilesystemwatcher_inline_symbols() {
} // <= main block end

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

