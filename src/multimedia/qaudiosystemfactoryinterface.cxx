//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystemplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioSystemFactoryInterface is pure virtual: true
// QAudioSystemFactoryInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAudioSystemFactoryInterface : public QAudioSystemFactoryInterface {
public:
  virtual ~MyQAudioSystemFactoryInterface() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:61
// [8] QList<QByteArray> availableDevices(QAudio::Mode)
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZNK28QAudioSystemFactoryInterface16availableDevicesEN6QAudio4ModeE(void *this_, QAudio::Mode arg0) {
  auto rv = ((QAudioSystemFactoryInterface*)this_)->availableDevices(arg0);
return new QList<QByteArray>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:62
// [8] QAbstractAudioInput * createInput(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN28QAudioSystemFactoryInterface11createInputERK10QByteArray(void *this_, QByteArray* device) {
  return (void*)((QAudioSystemFactoryInterface*)this_)->createInput(*device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:63
// [8] QAbstractAudioOutput * createOutput(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN28QAudioSystemFactoryInterface12createOutputERK10QByteArray(void *this_, QByteArray* device) {
  return (void*)((QAudioSystemFactoryInterface*)this_)->createOutput(*device);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:64
// [8] QAbstractAudioDeviceInfo * createDeviceInfo(const QByteArray &, QAudio::Mode)
extern "C" Q_DECL_EXPORT
void* C_ZN28QAudioSystemFactoryInterface16createDeviceInfoERK10QByteArrayN6QAudio4ModeE(void *this_, QByteArray* device, QAudio::Mode mode) {
  return (void*)((QAudioSystemFactoryInterface*)this_)->createDeviceInfo(*device, mode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystemplugin.h:65
// [-2] void ~QAudioSystemFactoryInterface()
extern "C" Q_DECL_EXPORT
void C_ZN28QAudioSystemFactoryInterfaceD2Ev(void *this_) {
  delete (QAudioSystemFactoryInterface*)(this_);
}
//  main block end
