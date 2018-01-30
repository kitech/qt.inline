//  header block begin
// /usr/include/qt/QtGui/qimageiohandler.h
#include <qimageiohandler.h>
#include <QtGui>

// QImageIOPlugin is pure virtual: true
// QImageIOPlugin has virtual projected: false
//  header block end

//  main block begin

class MyQImageIOPlugin : public QImageIOPlugin {
public:
  virtual ~MyQImageIOPlugin() {}
// void QImageIOPlugin(class QObject *)
MyQImageIOPlugin(QObject * parent) : QImageIOPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK14QImageIOPlugin10metaObjectEv(void *this_) {
  return (void*)((QImageIOPlugin*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:143
// [-2] void QImageIOPlugin(class QObject *)
extern "C"
void* C_ZN14QImageIOPluginC1EP7QObject(QObject * parent) {
  return 0; // new QImageIOPlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:144
// [-2] void ~QImageIOPlugin()
extern "C"
void C_ZN14QImageIOPluginD2Ev(void *this_) {
  delete (QImageIOPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:153
// [4] QImageIOPlugin::Capabilities capabilities(class QIODevice *, const class QByteArray &)
extern "C"
void C_ZNK14QImageIOPlugin12capabilitiesEP9QIODeviceRK10QByteArray(void *this_, QIODevice * device, const QByteArray & format) {
  auto rv = ((QImageIOPlugin*)this_)->capabilities(device, format);
/*return rv;*/
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:154
// [8] QImageIOHandler * create(class QIODevice *, const class QByteArray &)
extern "C"
void* C_ZNK14QImageIOPlugin6createEP9QIODeviceRK10QByteArray(void *this_, QIODevice * device, const QByteArray & format) {
  return (void*)((QImageIOPlugin*)this_)->create(device, format);
}
//  main block end
