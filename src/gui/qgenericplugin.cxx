//  header block begin
// /usr/include/qt/QtGui/qgenericplugin.h
#include <qgenericplugin.h>
#include <QtGui>

// QGenericPlugin is pure virtual: true
//  header block end

//  main block begin

class MyQGenericPlugin : public QGenericPlugin {
public:
MyQGenericPlugin(QObject * parent) : QGenericPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QGenericPlugin10metaObjectEv(void *this_) {
  return (void*)((QGenericPlugin*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:55
// [-2] void QGenericPlugin(class QObject *)
extern "C"
void* C_ZN14QGenericPluginC1EP7QObject(QObject * parent) {
  (MyQGenericPlugin*)(0);
  return 0; // new MyQGenericPlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:56
// [-2] void ~QGenericPlugin()
extern "C"
void C_ZN14QGenericPluginD1Ev(void *this_) {
  delete (QGenericPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericplugin.h:58
// [8] QObject * create(const class QString &, const class QString &)
extern "C"
void* C_ZN14QGenericPlugin6createERK7QStringS2_(void *this_, const QString & name, const QString & spec) {
  return (void*)((QGenericPlugin*)this_)->create(name, spec);
}
//  main block end
