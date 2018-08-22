//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystemplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioSystemPlugin is pure virtual: true
// QAudioSystemPlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioSystemPlugin : public QAudioSystemPlugin {
public:
  virtual ~MyQAudioSystemPlugin() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QByteArray> availableDevices(QAudio::Mode)
  virtual QList<QByteArray> availableDevices(QAudio::Mode arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"availableDevices", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QByteArray>){};}
    auto prv = (QList<QByteArray>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QByteArray>
    } else {
    return (QList<QByteArray>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractAudioInput * createInput(const QByteArray &)
  virtual QAbstractAudioInput * createInput(const QByteArray & device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createInput", &handled, 1, (uint64_t)&device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractAudioInput *)(irv);
      // Pointer Pointer QAbstractAudioInput *
    } else {
    return (QAbstractAudioInput *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractAudioOutput * createOutput(const QByteArray &)
  virtual QAbstractAudioOutput * createOutput(const QByteArray & device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createOutput", &handled, 1, (uint64_t)&device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractAudioOutput *)(irv);
      // Pointer Pointer QAbstractAudioOutput *
    } else {
    return (QAbstractAudioOutput *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &, QAudio::Mode)
  virtual QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray & device, QAudio::Mode mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createDeviceInfo", &handled, 2, (uint64_t)&device, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractAudioDeviceInfo *)(irv);
      // Pointer Pointer QAbstractAudioDeviceInfo *
    } else {
    return (QAbstractAudioDeviceInfo *){};
  }
  }

// void QAudioSystemPlugin(QObject *)
MyQAudioSystemPlugin(QObject * parent) : QAudioSystemPlugin(parent) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:61
// [8] QList<QByteArray> availableDevices(QAudio::Mode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:62
// [8] QAbstractAudioInput * createInput(const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:63
// [8] QAbstractAudioOutput * createOutput(const QByteArray &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:64
// [8] QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &, QAudio::Mode)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAudioSystemPlugin10metaObjectEv(void *this_) {
  return (void*)((QAudioSystemPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioSystemPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QAudioSystemPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioSystemPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioSystemPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioSystemPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:81
// [-2] void QAudioSystemPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPluginC2EP7QObject(QObject * parent) {
  return 0; // new QAudioSystemPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:82
// [-2] void ~QAudioSystemPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN18QAudioSystemPluginD2Ev(void *this_) {
  delete (QAudioSystemPlugin*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:84
// [8] QList<QByteArray> availableDevices(QAudio::Mode)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK18QAudioSystemPlugin16availableDevicesEN6QAudio4ModeE(void *this_, QAudio::Mode arg0) {
  auto rv = ((QAudioSystemPlugin*)this_)->availableDevices(arg0);
return new QList<QByteArray>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:85
// [8] QAbstractAudioInput * createInput(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin11createInputERK10QByteArray(void *this_, QByteArray* device) {
  return (void*)((QAudioSystemPlugin*)this_)->createInput(*device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:86
// [8] QAbstractAudioOutput * createOutput(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin12createOutputERK10QByteArray(void *this_, QByteArray* device) {
  return (void*)((QAudioSystemPlugin*)this_)->createOutput(*device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:87
// [8] QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &, QAudio::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZN18QAudioSystemPlugin16createDeviceInfoERK10QByteArrayN6QAudio4ModeE(void *this_, QByteArray* device, QAudio::Mode mode) {
  return (void*)((QAudioSystemPlugin*)this_)->createDeviceInfo(*device, mode);
}

//  main block end
