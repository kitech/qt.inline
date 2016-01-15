// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qpluginloader.h
// dst-file: /src/core/qpluginloader.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qpluginloader.h>

extern "C" {

int QPluginLoader_Class_Size()
{
  return sizeof(QPluginLoader);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qpluginloader_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QPluginLoader_SlotProxy here
class QPluginLoader_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPluginLoader_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qpluginloader.moc"

extern "C" {
  QPluginLoader_SlotProxy* QPluginLoader_SlotProxy_new()
  {
    return new QPluginLoader_SlotProxy();
  }
};

// <= body block end

