//  header block begin
// /usr/include/qt/QtGui/qimageiohandler.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QImageIOPlugin::Capabilities capabilities(QIODevice *, const QByteArray &)
  virtual QImageIOPlugin::Capabilities capabilities(QIODevice * device, const QByteArray & format) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"capabilities", &handled, 2, (uint64_t)device, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QImageIOPlugin::Capabilities)(int)(irv);
      // Typedef Record QFlags<QImageIOPlugin::Capability>
    } else {
    return (QImageIOPlugin::Capabilities){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QImageIOHandler * create(QIODevice *, const QByteArray &)
  virtual QImageIOHandler * create(QIODevice * device, const QByteArray & format) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"create", &handled, 2, (uint64_t)device, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QImageIOHandler *)(irv);
      // Pointer Pointer QImageIOHandler *
    } else {
    return (QImageIOHandler *){};
  }
  }

// void QImageIOPlugin(QObject *)
MyQImageIOPlugin(QObject * parent) : QImageIOPlugin(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:153
// [4] QImageIOPlugin::Capabilities capabilities(QIODevice *, const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:154
// [8] QImageIOHandler * create(QIODevice *, const QByteArray &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QImageIOPlugin10metaObjectEv(void *this_) {
  return (void*)((QImageIOPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QImageIOPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QImageIOPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QImageIOPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageIOPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:141
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QImageIOPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageIOPlugin::trUtf8(s, c, n);
return new QString(rv);
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
