// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qpluginloader.h
// dst-file: /src/core/qpluginloader.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpluginloader.h>


#include <qvector.h>
#include <qdatastream.h>
#include <qobject.h>
#include <qjsonobject.h>
#include <qstring.h>
#include <qlibrary.h>
// <= header block end

// main block begin =>
void __keep_qpluginloader_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPluginLoader_Class_Size()
{
  return sizeof(QPluginLoader);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 65, column 10>
//   // proto:  bool QPluginLoader::isLoaded();
// _ZNK13QPluginLoader8isLoadedEv isLoaded()
extern "C"
bool
C_ZNK13QPluginLoader8isLoadedEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->isLoaded();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 64, column 10>
//   // proto:  bool QPluginLoader::unload();
// _ZN13QPluginLoader6unloadEv unload()
extern "C"
bool
C_ZN13QPluginLoader6unloadEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->unload();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 54, column 14>
//   // proto:  void QPluginLoader::QPluginLoader(const QString & fileName, QObject * parent);
extern "C"
QPluginLoader*
C_ZN13QPluginLoaderC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QPluginLoader(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 63, column 10>
//   // proto:  bool QPluginLoader::load();
// _ZN13QPluginLoader4loadEv load()
extern "C"
bool
C_ZN13QPluginLoader4loadEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->load();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 49, column 5>
//   // proto:  const QMetaObject * QPluginLoader::metaObject();
// _ZNK13QPluginLoader10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QPluginLoader10metaObjectEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 57, column 14>
//   // proto:  QObject * QPluginLoader::instance();
// _ZN13QPluginLoader8instanceEv instance()
extern "C"
void*
C_ZN13QPluginLoader8instanceEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->instance();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 61, column 35>
//   // proto: static QVector<QStaticPlugin> QPluginLoader::staticPlugins();
// _ZN13QPluginLoader13staticPluginsEv staticPlugins()
extern "C"
QVector<QStaticPlugin>*
C_ZN13QPluginLoader13staticPluginsEv() {
  auto ret =
  QPluginLoader::staticPlugins();
  return new QVector<QStaticPlugin>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 60, column 24>
//   // proto: static QObjectList QPluginLoader::staticInstances();
// _ZN13QPluginLoader15staticInstancesEv staticInstances()
extern "C"
QList<QObject *>*
C_ZN13QPluginLoader15staticInstancesEv() {
  auto ret =
  QPluginLoader::staticInstances();
  return new QList<QObject *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 58, column 17>
//   // proto:  QJsonObject QPluginLoader::metaData();
// _ZNK13QPluginLoader8metaDataEv metaData()
extern "C"
QJsonObject*
C_ZNK13QPluginLoader8metaDataEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->metaData();
  return new QJsonObject(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 72, column 10>
//   // proto:  void QPluginLoader::setLoadHints(QLibrary::LoadHints loadHints);
// _ZN13QPluginLoader12setLoadHintsE6QFlagsIN8QLibrary8LoadHintEE setLoadHints(class QLibrary::LoadHints)
extern "C"
void
C_ZN13QPluginLoader12setLoadHintsE6QFlagsIN8QLibrary8LoadHintEE(void *qthis,
QLibrary::LoadHints* arg1) {
  ((QPluginLoader*)qthis)->setLoadHints(*((QLibrary::LoadHints*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 70, column 13>
//   // proto:  QString QPluginLoader::errorString();
// _ZNK13QPluginLoader11errorStringEv errorString()
extern "C"
QString*
C_ZNK13QPluginLoader11errorStringEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 73, column 25>
//   // proto:  QLibrary::LoadHints QPluginLoader::loadHints();
// _ZNK13QPluginLoader9loadHintsEv loadHints()
extern "C"
QFlags<QLibrary::LoadHint>*
C_ZNK13QPluginLoader9loadHintsEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->loadHints();
  return new QFlags<QLibrary::LoadHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 68, column 13>
//   // proto:  QString QPluginLoader::fileName();
// _ZNK13QPluginLoader8fileNameEv fileName()
extern "C"
QString*
C_ZNK13QPluginLoader8fileNameEv(void *qthis) {
  auto ret =
  ((QPluginLoader*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 67, column 10>
//   // proto:  void QPluginLoader::setFileName(const QString & fileName);
// _ZN13QPluginLoader11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN13QPluginLoader11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QPluginLoader*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qpluginloader.h', line 53, column 14>
//   // proto:  void QPluginLoader::QPluginLoader(QObject * parent);
extern "C"
QPluginLoader*
C_ZN13QPluginLoaderC2EP7QObject(QObject * arg1) {
  auto ret = new QPluginLoader(arg1);
  return ret;
}
//   // proto:  void QPluginLoader::~QPluginLoader();
extern "C"
void C_ZN13QPluginLoaderD2Ev(void *qthis) {
  delete (QPluginLoader*)qthis;
}
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

