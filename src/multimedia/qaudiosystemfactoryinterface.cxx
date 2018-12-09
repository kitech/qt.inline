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


struct qt_meta_stringdata_MyQAudioSystemFactoryInterface_t {
  QByteArrayData data[1];
  char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioSystemFactoryInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioSystemFactoryInterface_t qt_meta_stringdata_MyQAudioSystemFactoryInterface = {
   {
  QT_MOC_LITERAL(0, 0, 30), // "MyQAudioSystemFactoryInterface"
  },
  "MyQAudioSystemFactoryInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioSystemFactoryInterface[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
