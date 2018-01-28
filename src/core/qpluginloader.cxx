//  header block begin
// /usr/include/qt/QtCore/qpluginloader.h
#include <qpluginloader.h>
#include <QtCore>

// QPluginLoader is pure virtual: false
//  header block end

//  main block begin

class MyQPluginLoader : public QPluginLoader {
public:
MyQPluginLoader(QObject * parent) : QPluginLoader(parent) {}
MyQPluginLoader(const QString & fileName, QObject * parent) : QPluginLoader(fileName, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QPluginLoader10metaObjectEv(void *this_) {
  return (void*)((QPluginLoader*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:62
// [-2] void QPluginLoader(class QObject *)
extern "C"
void* C_ZN13QPluginLoaderC1EP7QObject(QObject * parent) {
  (MyQPluginLoader*)(0);
  return  new MyQPluginLoader(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:63
// [-2] void QPluginLoader(const class QString &, class QObject *)
extern "C"
void* C_ZN13QPluginLoaderC1ERK7QStringP7QObject(const QString & fileName, QObject * parent) {
  (MyQPluginLoader*)(0);
  return  new MyQPluginLoader(fileName, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:64
// [-2] void ~QPluginLoader()
extern "C"
void C_ZN13QPluginLoaderD1Ev(void *this_) {
  delete (QPluginLoader*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:66
// [8] QObject * instance()
extern "C"
void* C_ZN13QPluginLoader8instanceEv(void *this_) {
  return (void*)((QPluginLoader*)this_)->instance();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:67
// [16] QJsonObject metaData()
extern "C"
void* C_ZNK13QPluginLoader8metaDataEv(void *this_) {
  auto rv = ((QPluginLoader*)this_)->metaData();
return new QJsonObject(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:72
// [1] bool load()
extern "C"
bool C_ZN13QPluginLoader4loadEv(void *this_) {
  return (bool)((QPluginLoader*)this_)->load();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:73
// [1] bool unload()
extern "C"
bool C_ZN13QPluginLoader6unloadEv(void *this_) {
  return (bool)((QPluginLoader*)this_)->unload();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:74
// [1] bool isLoaded()
extern "C"
bool C_ZNK13QPluginLoader8isLoadedEv(void *this_) {
  return (bool)((QPluginLoader*)this_)->isLoaded();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:76
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN13QPluginLoader11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QPluginLoader*)this_)->setFileName(fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:77
// [8] QString fileName()
extern "C"
void* C_ZNK13QPluginLoader8fileNameEv(void *this_) {
  auto rv = ((QPluginLoader*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:79
// [8] QString errorString()
extern "C"
void* C_ZNK13QPluginLoader11errorStringEv(void *this_) {
  auto rv = ((QPluginLoader*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:82
// [4] QLibrary::LoadHints loadHints()
extern "C"
QLibrary::LoadHints C_ZNK13QPluginLoader9loadHintsEv(void *this_) {
  return (QLibrary::LoadHints)((QPluginLoader*)this_)->loadHints();
}
//  main block end
