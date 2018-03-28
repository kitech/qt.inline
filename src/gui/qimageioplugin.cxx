//  header block begin
// /usr/include/qt/QtGui/qimageiohandler.h
#ifndef protected
#define protected public
#endif
#include <qimageiohandler.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageIOPlugin is pure virtual: true
// QImageIOPlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQImageIOPlugin : public QImageIOPlugin {
public:
  virtual ~MyQImageIOPlugin() {}
// void QImageIOPlugin(QObject *)
MyQImageIOPlugin(QObject * parent) : QImageIOPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QImageIOPlugin10metaObjectEv(void *this_) {
  return (void*)((QImageIOPlugin*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:143
// [-2] void QImageIOPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPluginC2EP7QObject(QObject * parent) {
  return 0; // new QImageIOPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:144
// [-2] void ~QImageIOPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN14QImageIOPluginD2Ev(void *this_) {
  delete (QImageIOPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:153
// [4] QImageIOPlugin::Capabilities capabilities(QIODevice *, const QByteArray &)
extern "C" Q_DECL_EXPORT
QImageIOPlugin::Capabilities* C_ZNK14QImageIOPlugin12capabilitiesEP9QIODeviceRK10QByteArray(void *this_, QIODevice * device, QByteArray* format) {
  auto rv = ((QImageIOPlugin*)this_)->capabilities(device, *format);
return new QImageIOPlugin::Capabilities(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:154
// [8] QImageIOHandler * create(QIODevice *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QImageIOPlugin6createEP9QIODeviceRK10QByteArray(void *this_, QIODevice * device, QByteArray* format) {
  return (void*)((QImageIOPlugin*)this_)->create(device, *format);
}

//  main block end
