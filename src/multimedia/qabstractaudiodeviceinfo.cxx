//  header block begin
// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioDeviceInfo is pure virtual: true
// QAbstractAudioDeviceInfo has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractAudioDeviceInfo : public QAbstractAudioDeviceInfo {
public:
  virtual ~MyQAbstractAudioDeviceInfo() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractAudioDeviceInfo10metaObjectEv(void *this_) {
  return (void*)((QAbstractAudioDeviceInfo*)this_)->metaObject();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:62
// [8] QAudioFormat preferredFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractAudioDeviceInfo15preferredFormatEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->preferredFormat();
return new QAudioFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:63
// [1] bool isFormatSupported(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
bool C_ZNK24QAbstractAudioDeviceInfo17isFormatSupportedERK12QAudioFormat(void *this_, QAudioFormat* format) {
  return (bool)((QAbstractAudioDeviceInfo*)this_)->isFormatSupported(*format);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:64
// [8] QString deviceName()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractAudioDeviceInfo10deviceNameEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->deviceName();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:65
// [8] QStringList supportedCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractAudioDeviceInfo15supportedCodecsEv(void *this_) {
  auto rv = ((QAbstractAudioDeviceInfo*)this_)->supportedCodecs();
return new QStringList(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractAudioDeviceInfoD2Ev(void *this_) {
  delete (QAbstractAudioDeviceInfo*)(this_);
}
//  main block end
