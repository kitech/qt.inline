// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qpluginloader.h
// dst-file: /src/core/qpluginloader.cxx
//

// header block begin =>
#include <qpluginloader.h>

extern "C" {

int QPluginLoader_Class_Size()
{
  return sizeof(QPluginLoader);
}

// QPluginLoader(const class QString &, class QObject *)
QPluginLoader* dector_ZN13QPluginLoaderC1ERK7QStringP7QObject(const QString & fileName, QObject * parent)
{
  // static_assert(sizeof(QPluginLoader) == 32, "tyszerr");
  QPluginLoader* rthis = new QPluginLoader(fileName, parent);
  return rthis;
}

// QPluginLoader(class QObject *)
QPluginLoader* dector_ZN13QPluginLoaderC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QPluginLoader) == 32, "tyszerr");
  QPluginLoader* rthis = new QPluginLoader(parent);
  return rthis;
}

// ~QPluginLoader()
void dedtor_ZN13QPluginLoaderD0Ev(QPluginLoader* that)
{
  QPluginLoader* rthis = (QPluginLoader*)that;
  delete rthis;
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
// QPluginLoader_SlotProxy here
class QPluginLoader_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QPluginLoader_SlotProxy():QObject(){}

};
#include "src/core/qpluginloader.moc"

extern "C" {
  QPluginLoader_SlotProxy* QPluginLoader_SlotProxy_new()
  {
    return new QPluginLoader_SlotProxy();
  }
};

// <= body block end

