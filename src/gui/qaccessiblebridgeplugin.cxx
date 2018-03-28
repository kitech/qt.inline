//  header block begin
// /usr/include/qt/QtGui/qaccessiblebridge.h
#ifndef protected
#define protected public
#endif
#include <qaccessiblebridge.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleBridgePlugin is pure virtual: true
// QAccessibleBridgePlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessibleBridgePlugin : public QAccessibleBridgePlugin {
public:
  virtual ~MyQAccessibleBridgePlugin() {}
// void QAccessibleBridgePlugin(QObject *)
MyQAccessibleBridgePlugin(QObject * parent) : QAccessibleBridgePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:67
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QAccessibleBridgePlugin10metaObjectEv(void *this_) {
  return (void*)((QAccessibleBridgePlugin*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:69
// [-2] void QAccessibleBridgePlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QAccessibleBridgePluginC2EP7QObject(QObject * parent) {
  return 0; // new QAccessibleBridgePlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:70
// [-2] void ~QAccessibleBridgePlugin()
extern "C" Q_DECL_EXPORT
void C_ZN23QAccessibleBridgePluginD2Ev(void *this_) {
  delete (QAccessibleBridgePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:72
// [8] QAccessibleBridge * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN23QAccessibleBridgePlugin6createERK7QString(void *this_, QString* key) {
  return (void*)((QAccessibleBridgePlugin*)this_)->create(*key);
}

//  main block end
