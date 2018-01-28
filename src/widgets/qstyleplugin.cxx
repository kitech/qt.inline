//  header block begin
// /usr/include/qt/QtWidgets/qstyleplugin.h
#include <qstyleplugin.h>
#include <QtWidgets>

// QStylePlugin is pure virtual: true
//  header block end

//  main block begin

class MyQStylePlugin : public QStylePlugin {
public:
MyQStylePlugin(QObject * parent) : QStylePlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QStylePlugin10metaObjectEv(void *this_) {
  return (void*)((QStylePlugin*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:58
// [-2] void QStylePlugin(class QObject *)
extern "C"
void* C_ZN12QStylePluginC1EP7QObject(QObject * parent) {
  (MyQStylePlugin*)(0);
  return 0; // new MyQStylePlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:59
// [-2] void ~QStylePlugin()
extern "C"
void C_ZN12QStylePluginD1Ev(void *this_) {
  delete (QStylePlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleplugin.h:61
// [8] QStyle * create(const class QString &)
extern "C"
void* C_ZN12QStylePlugin6createERK7QString(void *this_, const QString & key) {
  return (void*)((QStylePlugin*)this_)->create(key);
}
//  main block end
