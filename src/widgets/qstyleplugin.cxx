//  header block begin
// /usr/include/qt/QtWidgets/qstyleplugin.h
#ifndef protected
#define protected public
#endif
#include <qstyleplugin.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStylePlugin is pure virtual: true
// QStylePlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStylePlugin : public QStylePlugin {
public:
  virtual ~MyQStylePlugin() {}
// void QStylePlugin(QObject *)
MyQStylePlugin(QObject * parent) : QStylePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QStylePlugin10metaObjectEv(void *this_) {
  return (void*)((QStylePlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStylePlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStylePlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QStylePlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStylePlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStylePlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStylePlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStylePlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStylePlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:58
// [-2] void QStylePlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStylePluginC2EP7QObject(QObject * parent) {
  return 0; // new QStylePlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:59
// [-2] void ~QStylePlugin()
extern "C" Q_DECL_EXPORT
void C_ZN12QStylePluginD2Ev(void *this_) {
  delete (QStylePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:61
// [8] QStyle * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QStylePlugin6createERK7QString(void *this_, QString* key) {
  return (void*)((QStylePlugin*)this_)->create(*key);
}

//  main block end
