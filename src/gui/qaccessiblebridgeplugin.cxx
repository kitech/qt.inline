//  header block begin
// /usr/include/qt/QtGui/qaccessiblebridge.h
#ifndef protected
#define protected public
#define private public
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:67
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QAccessibleBridgePlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAccessibleBridgePlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:67
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QAccessibleBridgePlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAccessibleBridgePlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:67
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QAccessibleBridgePlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAccessibleBridgePlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessiblebridge.h:67
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QAccessibleBridgePlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAccessibleBridgePlugin::trUtf8(s, c, n);
return new QString(rv);
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
