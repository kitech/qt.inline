//  header block begin
// /usr/include/qt/QtCore/qpluginloader.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpluginloader.h>
#include <QtCore>
#include "callback_inherit.h"

// QPluginLoader is pure virtual: false
// QPluginLoader has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPluginLoader : public QPluginLoader {
public:
  virtual ~MyQPluginLoader() {}
// void QPluginLoader(QObject *)
MyQPluginLoader(QObject * parent) : QPluginLoader(parent) {}
// void QPluginLoader(const QString &, QObject *)
MyQPluginLoader(const QString & fileName, QObject * parent) : QPluginLoader(fileName, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QPluginLoader10metaObjectEv(void *this_) {
  return (void*)((QPluginLoader*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QPluginLoader11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPluginLoader*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QPluginLoader11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPluginLoader*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QPluginLoader2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPluginLoader::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QPluginLoader6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPluginLoader::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:62
// [-2] void QPluginLoader(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QPluginLoaderC2EP7QObject(QObject * parent) {
  return  new QPluginLoader(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:63
// [-2] void QPluginLoader(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QPluginLoaderC2ERK7QStringP7QObject(QString* fileName, QObject * parent) {
  return  new QPluginLoader(*fileName, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:64
// [-2] void ~QPluginLoader()
extern "C" Q_DECL_EXPORT
void C_ZN13QPluginLoaderD2Ev(void *this_) {
  delete (QPluginLoader*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:66
// [8] QObject * instance()
extern "C" Q_DECL_EXPORT
void* C_ZN13QPluginLoader8instanceEv(void *this_) {
  return (void*)((QPluginLoader*)this_)->instance();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:67
// [16] QJsonObject metaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QPluginLoader8metaDataEv(void *this_) {
  auto rv = ((QPluginLoader*)this_)->metaData();
return new QJsonObject(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:69
// [8] QObjectList staticInstances()
extern "C" Q_DECL_EXPORT
void C_ZN13QPluginLoader15staticInstancesEv() {
  auto rv = QPluginLoader::staticInstances();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:70
// [-2] QVector<QStaticPlugin> staticPlugins()
extern "C" Q_DECL_EXPORT
void C_ZN13QPluginLoader13staticPluginsEv() {
  auto rv = QPluginLoader::staticPlugins();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:72
// [1] bool load()
extern "C" Q_DECL_EXPORT
bool C_ZN13QPluginLoader4loadEv(void *this_) {
  return (bool)((QPluginLoader*)this_)->load();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:73
// [1] bool unload()
extern "C" Q_DECL_EXPORT
bool C_ZN13QPluginLoader6unloadEv(void *this_) {
  return (bool)((QPluginLoader*)this_)->unload();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:74
// [1] bool isLoaded()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QPluginLoader8isLoadedEv(void *this_) {
  return (bool)((QPluginLoader*)this_)->isLoaded();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:76
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QPluginLoader11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QPluginLoader*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:77
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QPluginLoader8fileNameEv(void *this_) {
  auto rv = ((QPluginLoader*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qpluginloader.h:79
// [8] QString errorString()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK13QPluginLoader11errorStringEv(void *this_) {
  auto rv = ((QPluginLoader*)this_)->errorString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:81
// [-2] void setLoadHints(QLibrary::LoadHints)
extern "C" Q_DECL_EXPORT
void C_ZN13QPluginLoader12setLoadHintsE6QFlagsIN8QLibrary8LoadHintEE(void *this_, QFlags<QLibrary::LoadHint> loadHints) {
  ((QPluginLoader*)this_)->setLoadHints(loadHints);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpluginloader.h:82
// [4] QLibrary::LoadHints loadHints()
extern "C" Q_DECL_EXPORT
QLibrary::LoadHints C_ZNK13QPluginLoader9loadHintsEv(void *this_) {
  return (QLibrary::LoadHints)((QPluginLoader*)this_)->loadHints();
}

//  main block end
