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
