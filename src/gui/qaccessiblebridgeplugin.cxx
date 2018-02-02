//  header block begin
// /usr/include/qt/QtGui/qaccessiblebridge.h
#include <qaccessiblebridge.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleBridgePlugin is pure virtual: true
// QAccessibleBridgePlugin has virtual projected: false
//  header block end

//  main block begin

class MyQAccessibleBridgePlugin : public QAccessibleBridgePlugin {
public:
  virtual ~MyQAccessibleBridgePlugin() {}
// void QAccessibleBridgePlugin(class QObject *)
MyQAccessibleBridgePlugin(QObject * parent) : QAccessibleBridgePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:67
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK23QAccessibleBridgePlugin10metaObjectEv(void *this_) {
  return (void*)((QAccessibleBridgePlugin*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:69
// [-2] void QAccessibleBridgePlugin(class QObject *)
extern "C"
void* C_ZN23QAccessibleBridgePluginC1EP7QObject(QObject * parent) {
  return 0; // new QAccessibleBridgePlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:70
// [-2] void ~QAccessibleBridgePlugin()
extern "C"
void C_ZN23QAccessibleBridgePluginD2Ev(void *this_) {
  delete (QAccessibleBridgePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:72
// [8] QAccessibleBridge * create(const class QString &)
extern "C"
void* C_ZN23QAccessibleBridgePlugin6createERK7QString(void *this_, QString* key) {
  return (void*)((QAccessibleBridgePlugin*)this_)->create(*key);
}
//  main block end
