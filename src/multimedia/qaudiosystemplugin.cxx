//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h
#ifndef protected
#define protected public
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
// void QAudioSystemPlugin(QObject *)
MyQAudioSystemPlugin(QObject * parent) : QAudioSystemPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:77
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QAudioSystemPlugin10metaObjectEv(void *this_) {
  return (void*)((QAudioSystemPlugin*)this_)->metaObject();
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
