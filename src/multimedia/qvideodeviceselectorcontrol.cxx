//  header block begin
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideodeviceselectorcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoDeviceSelectorControl is pure virtual: true
// QVideoDeviceSelectorControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQVideoDeviceSelectorControl : public QVideoDeviceSelectorControl {
public:
  virtual ~MyQVideoDeviceSelectorControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int deviceCount()
  virtual int deviceCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString deviceName(int)
  virtual QString deviceName(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceName", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString deviceDescription(int)
  virtual QString deviceDescription(int index) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deviceDescription", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int defaultDevice()
  virtual int defaultDevice() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"defaultDevice", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int selectedDevice()
  virtual int selectedDevice() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedDevice", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setSelectedDevice(int)
  virtual void setSelectedDevice(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelectedDevice", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QVideoDeviceSelectorControl::setSelectedDevice(index);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:57
// [4] int deviceCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:59
// [8] QString deviceName(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:60
// [8] QString deviceDescription(int)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:62
// [4] int defaultDevice()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:63
// [4] int selectedDevice()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:66
// [-2] void setSelectedDevice(int)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl10metaObjectEv(void *this_) {
  return (void*)((QVideoDeviceSelectorControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QVideoDeviceSelectorControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QVideoDeviceSelectorControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QVideoDeviceSelectorControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QVideoDeviceSelectorControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QVideoDeviceSelectorControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoDeviceSelectorControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QVideoDeviceSelectorControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QVideoDeviceSelectorControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:55
// [-2] void ~QVideoDeviceSelectorControl()
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControlD2Ev(void *this_) {
  delete (QVideoDeviceSelectorControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:57
// [4] int deviceCount()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl11deviceCountEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->deviceCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:59
// [8] QString deviceName(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl10deviceNameEi(void *this_, int index) {
  auto rv = ((QVideoDeviceSelectorControl*)this_)->deviceName(index);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:60
// [8] QString deviceDescription(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QVideoDeviceSelectorControl17deviceDescriptionEi(void *this_, int index) {
  auto rv = ((QVideoDeviceSelectorControl*)this_)->deviceDescription(index);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:62
// [4] int defaultDevice()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl13defaultDeviceEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->defaultDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:63
// [4] int selectedDevice()
extern "C" Q_DECL_EXPORT
int C_ZNK27QVideoDeviceSelectorControl14selectedDeviceEv(void *this_) {
  return (int)((QVideoDeviceSelectorControl*)this_)->selectedDevice();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:66
// [-2] void setSelectedDevice(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl17setSelectedDeviceEi(void *this_, int index) {
  ((QVideoDeviceSelectorControl*)this_)->setSelectedDevice(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:69
// [-2] void selectedDeviceChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl21selectedDeviceChangedEi(void *this_, int index) {
  ((QVideoDeviceSelectorControl*)this_)->selectedDeviceChanged(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:70
// [-2] void selectedDeviceChanged(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl21selectedDeviceChangedERK7QString(void *this_, QString* deviceName) {
  ((QVideoDeviceSelectorControl*)this_)->selectedDeviceChanged(*deviceName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qvideodeviceselectorcontrol.h:71
// [-2] void devicesChanged()
extern "C" Q_DECL_EXPORT
void C_ZN27QVideoDeviceSelectorControl14devicesChangedEv(void *this_) {
  ((QVideoDeviceSelectorControl*)this_)->devicesChanged();
}

//  main block end
