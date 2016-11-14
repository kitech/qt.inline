// /usr/include/qt/QtCore/qpluginloader.h
#include <qpluginloader.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qpluginloader.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QPluginLoader10metaObjectEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qpluginloader.h:59
// void QPluginLoader(class QObject *)
extern "C"
void* C_ZN13QPluginLoaderC1EP7QObject(QObject * parent) {
  return new QPluginLoader(parent);
}
// /usr/include/qt/QtCore/qpluginloader.h:60
// void QPluginLoader(const class QString &, class QObject *)
extern "C"
void* C_ZN13QPluginLoaderC1ERK7QStringP7QObject(const QString & fileName, QObject * parent) {
  return new QPluginLoader(fileName, parent);
}
// virtual
// /usr/include/qt/QtCore/qpluginloader.h:61
// void ~QPluginLoader()
extern "C"
void C_ZN13QPluginLoaderD1Ev(void *this_) {
  delete (QPluginLoader*)(this_);
}
// /usr/include/qt/QtCore/qpluginloader.h:63
// QObject * instance()
extern "C"
void C_ZN13QPluginLoader8instanceEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->instance();
}
// /usr/include/qt/QtCore/qpluginloader.h:64
// QJsonObject metaData()
extern "C"
void C_ZNK13QPluginLoader8metaDataEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->metaData();
}
// static
// /usr/include/qt/QtCore/qpluginloader.h:66
// QObjectList staticInstances()
extern "C"
void C_ZN13QPluginLoader15staticInstancesEv() {
  /*return*/ QPluginLoader::staticInstances();
}
// static
// /usr/include/qt/QtCore/qpluginloader.h:67
// QVector<QStaticPlugin> staticPlugins()
extern "C"
void C_ZN13QPluginLoader13staticPluginsEv() {
  /*return*/ QPluginLoader::staticPlugins();
}
// /usr/include/qt/QtCore/qpluginloader.h:69
// bool load()
extern "C"
void C_ZN13QPluginLoader4loadEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->load();
}
// /usr/include/qt/QtCore/qpluginloader.h:70
// bool unload()
extern "C"
void C_ZN13QPluginLoader6unloadEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->unload();
}
// /usr/include/qt/QtCore/qpluginloader.h:71
// bool isLoaded()
extern "C"
void C_ZNK13QPluginLoader8isLoadedEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->isLoaded();
}
// /usr/include/qt/QtCore/qpluginloader.h:73
// void setFileName(const class QString &)
extern "C"
void C_ZN13QPluginLoader11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QPluginLoader*)this_)->setFileName(fileName);
}
// /usr/include/qt/QtCore/qpluginloader.h:74
// QString fileName()
extern "C"
void C_ZNK13QPluginLoader8fileNameEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->fileName();
}
// /usr/include/qt/QtCore/qpluginloader.h:76
// QString errorString()
extern "C"
void C_ZNK13QPluginLoader11errorStringEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->errorString();
}
// /usr/include/qt/QtCore/qpluginloader.h:78
// void setLoadHints(class QLibrary::LoadHints)
extern "C"
void C_ZN13QPluginLoader12setLoadHintsE6QFlagsIN8QLibrary8LoadHintEE(void *this_, QFlags<QLibrary::LoadHint> loadHints) {
  ((QPluginLoader*)this_)->setLoadHints(loadHints);
}
// /usr/include/qt/QtCore/qpluginloader.h:79
// QLibrary::LoadHints loadHints()
extern "C"
void C_ZNK13QPluginLoader9loadHintsEv(void *this_) {
  /*return*/ ((QPluginLoader*)this_)->loadHints();
}