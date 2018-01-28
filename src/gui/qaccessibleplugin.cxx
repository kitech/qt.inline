//  header block begin
// /usr/include/qt/QtGui/qaccessibleplugin.h
#include <qaccessibleplugin.h>
#include <QtGui>

// QAccessiblePlugin is pure virtual: true
//  header block end

//  main block begin

class MyQAccessiblePlugin : public QAccessiblePlugin {
public:
MyQAccessiblePlugin(QObject * parent) : QAccessiblePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:61
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK17QAccessiblePlugin10metaObjectEv(void *this_) {
  return (void*)((QAccessiblePlugin*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:63
// [-2] void QAccessiblePlugin(class QObject *)
extern "C"
void* C_ZN17QAccessiblePluginC1EP7QObject(QObject * parent) {
  (MyQAccessiblePlugin*)(0);
  return 0; // new MyQAccessiblePlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:64
// [-2] void ~QAccessiblePlugin()
extern "C"
void C_ZN17QAccessiblePluginD1Ev(void *this_) {
  delete (QAccessiblePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessibleplugin.h:66
// [8] QAccessibleInterface * create(const class QString &, class QObject *)
extern "C"
void* C_ZN17QAccessiblePlugin6createERK7QStringP7QObject(void *this_, const QString & key, QObject * object) {
  return (void*)((QAccessiblePlugin*)this_)->create(key, object);
}
//  main block end
