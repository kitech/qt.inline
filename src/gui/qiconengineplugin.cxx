//  header block begin
// /usr/include/qt/QtGui/qiconengineplugin.h
#ifndef protected
#define protected public
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
// void QIconEnginePlugin(class QObject *)
MyQIconEnginePlugin(QObject * parent) : QIconEnginePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QIconEnginePlugin10metaObjectEv(void *this_) {
  return (void*)((QIconEnginePlugin*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qiconengineplugin.h:58
// [-2] void QIconEnginePlugin(class QObject *)
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
// [8] QIconEngine * create(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIconEnginePlugin6createERK7QString(void *this_, QString* filename) {
  return (void*)((QIconEnginePlugin*)this_)->create(*filename);
}

//  main block end
