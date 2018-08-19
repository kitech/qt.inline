//  header block begin
// /usr/include/qt/QtGui/qiconengineplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qiconengineplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QIconEnginePlugin is pure virtual: true
// QIconEnginePlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQIconEnginePlugin : public QIconEnginePlugin {
public:
  virtual ~MyQIconEnginePlugin() {}
// void QIconEnginePlugin(QObject *)
MyQIconEnginePlugin(QObject * parent) : QIconEnginePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QIconEnginePlugin10metaObjectEv(void *this_) {
  return (void*)((QIconEnginePlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QIconEnginePlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QIconEnginePlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QIconEnginePlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIconEnginePlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIconEnginePlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:58
// [-2] void QIconEnginePlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePluginC2EP7QObject(QObject * parent) {
  return 0; // new QIconEnginePlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:59
// [-2] void ~QIconEnginePlugin()
extern "C" Q_DECL_EXPORT
void C_ZN17QIconEnginePluginD2Ev(void *this_) {
  delete (QIconEnginePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:61
// [8] QIconEngine * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin6createERK7QString(void *this_, QString* filename) {
  return (void*)((QIconEnginePlugin*)this_)->create(*filename);
}

//  main block end
