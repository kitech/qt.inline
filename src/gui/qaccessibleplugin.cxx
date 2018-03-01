//  header block begin
// /usr/include/qt/QtGui/qaccessibleplugin.h
#ifndef protected
#define protected public
#endif
#include <qaccessibleplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessiblePlugin is pure virtual: true
// QAccessiblePlugin has virtual projected: false
//  header block end

//  main block begin

class MyQAccessiblePlugin : public QAccessiblePlugin {
public:
  virtual ~MyQAccessiblePlugin() {}
// void QAccessiblePlugin(class QObject *)
MyQAccessiblePlugin(QObject * parent) : QAccessiblePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessiblePlugin10metaObjectEv(void *this_) {
  return (void*)((QAccessiblePlugin*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:63
// [-2] void QAccessiblePlugin(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessiblePluginC2EP7QObject(QObject * parent) {
  return 0; // new QAccessiblePlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:64
// [-2] void ~QAccessiblePlugin()
extern "C" Q_DECL_EXPORT
void C_ZN17QAccessiblePluginD2Ev(void *this_) {
  delete (QAccessiblePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:66
// [8] QAccessibleInterface * create(const class QString &, class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessiblePlugin6createERK7QStringP7QObject(void *this_, QString* key, QObject * object) {
  return (void*)((QAccessiblePlugin*)this_)->create(*key, object);
}

//  main block end
