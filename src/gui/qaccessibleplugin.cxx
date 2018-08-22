//  header block begin
// /usr/include/qt/QtGui/qaccessibleplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessibleplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessiblePlugin is pure virtual: true
// QAccessiblePlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAccessiblePlugin : public QAccessiblePlugin {
public:
  virtual ~MyQAccessiblePlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAccessibleInterface * create(const QString &, QObject *)
  virtual QAccessibleInterface * create(const QString & key, QObject * object)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 2, (uint64_t)&key, (uint64_t)object, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAccessibleInterface *)(irv);
      // Pointer Pointer QAccessibleInterface *
    } else {
    return (QAccessibleInterface *){};
  }
  }

// void QAccessiblePlugin(QObject *)
MyQAccessiblePlugin(QObject * parent) : QAccessiblePlugin(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:66
// [8] QAccessibleInterface * create(const QString &, QObject *)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QAccessiblePlugin10metaObjectEv(void *this_) {
  return (void*)((QAccessiblePlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessiblePlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAccessiblePlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QAccessiblePlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAccessiblePlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessiblePlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAccessiblePlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessiblePlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAccessiblePlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:63
// [-2] void QAccessiblePlugin(QObject *)
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
// [8] QAccessibleInterface * create(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QAccessiblePlugin6createERK7QStringP7QObject(void *this_, QString* key, QObject * object) {
  return (void*)((QAccessiblePlugin*)this_)->create(*key, object);
}

//  main block end
