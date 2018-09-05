//  header block begin
// /usr/include/qt/QtMultimedia/qcamera.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcamera.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCamera is pure virtual: false
// QCamera has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQCamera_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCamera_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCamera_t qt_meta_stringdata_MyQCamera = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQCamera"
  },
  "MyQCamera"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCamera[] = {
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
class Q_DECL_EXPORT MyQCamera : public QCamera {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCamera::staticMetaObject,
  qt_meta_stringdata_MyQCamera.data,
  qt_meta_data_MyQCamera,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQCamera.stringdata0))
      return static_cast<void*>(this);
  return QCamera::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCamera::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQCamera() {}
// void QCamera(QObject *)
MyQCamera(QObject * parent) : QCamera(parent) {}
// void QCamera(const QByteArray &, QObject *)
MyQCamera(const QByteArray & deviceName, QObject * parent) : QCamera(deviceName, parent) {}
// void QCamera(const QCameraInfo &, QObject *)
MyQCamera(const QCameraInfo & cameraInfo, QObject * parent) : QCamera(cameraInfo, parent) {}
// void QCamera(QCamera::Position, QObject *)
MyQCamera(QCamera::Position position, QObject * parent) : QCamera(position, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QCamera_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCamera* qo = (MyQCamera*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:71
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QCamera10metaObjectEv(void *this_) {
  return (void*)((QCamera*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:71
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QCamera11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCamera*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:71
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QCamera11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCamera*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:71
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QCamera2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCamera::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:71
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QCamera6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCamera::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:168
// [-2] void QCamera(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QCameraC2EP7QObject(QObject * parent) {
  return  new MyQCamera(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:169
// [-2] void QCamera(const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QCameraC2ERK10QByteArrayP7QObject(QByteArray* deviceName, QObject * parent) {
  return  new MyQCamera(*deviceName, parent);
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtMultimedia/qcamera.h:170
// [-2] void QCamera(const QCameraInfo &, QObject *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN7QCameraC2ERK11QCameraInfoP7QObject(QCameraInfo* cameraInfo, QObject * parent) {
  return  new MyQCamera(*cameraInfo, parent);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtMultimedia/qcamera.h:171
// [-2] void QCamera(QCamera::Position, QObject *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN7QCameraC2ENS_8PositionEP7QObject(QCamera::Position position, QObject * parent) {
  return  new MyQCamera(position, parent);
}
#endif // QT_VERSION >= 0x050300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:172
// [-2] void ~QCamera()
extern "C" Q_DECL_EXPORT
void C_ZN7QCameraD2Ev(void *this_) {
  delete (QCamera*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:175
// [8] QList<QByteArray> availableDevices()
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN7QCamera16availableDevicesEv() {
  auto rv = QCamera::availableDevices();
return new QList<QByteArray>(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:176
// [8] QString deviceDescription(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QCamera17deviceDescriptionERK10QByteArray(QByteArray* device) {
  auto rv = QCamera::deviceDescription(*device);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:179
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK7QCamera12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QCamera*)this_)->availability();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:181
// [4] QCamera::State state()
extern "C" Q_DECL_EXPORT
QCamera::State C_ZNK7QCamera5stateEv(void *this_) {
  return (QCamera::State)((QCamera*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:182
// [4] QCamera::Status status()
extern "C" Q_DECL_EXPORT
QCamera::Status C_ZNK7QCamera6statusEv(void *this_) {
  return (QCamera::Status)((QCamera*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:184
// [4] QCamera::CaptureModes captureMode()
extern "C" Q_DECL_EXPORT
QCamera::CaptureModes* C_ZNK7QCamera11captureModeEv(void *this_) {
  auto rv = ((QCamera*)this_)->captureMode();
return new QCamera::CaptureModes(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:185
// [1] bool isCaptureModeSupported(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QCamera22isCaptureModeSupportedE6QFlagsINS_11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> mode) {
  return (bool)((QCamera*)this_)->isCaptureModeSupported(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:187
// [8] QCameraExposure * exposure()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QCamera8exposureEv(void *this_) {
  return (void*)((QCamera*)this_)->exposure();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:188
// [8] QCameraFocus * focus()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QCamera5focusEv(void *this_) {
  return (void*)((QCamera*)this_)->focus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:189
// [8] QCameraImageProcessing * imageProcessing()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QCamera15imageProcessingEv(void *this_) {
  return (void*)((QCamera*)this_)->imageProcessing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:191
// [-2] void setViewfinder(QVideoWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera13setViewfinderEP12QVideoWidget(void *this_, QVideoWidget * viewfinder) {
  ((QCamera*)this_)->setViewfinder(viewfinder);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:192
// [-2] void setViewfinder(QGraphicsVideoItem *)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera13setViewfinderEP18QGraphicsVideoItem(void *this_, QGraphicsVideoItem * viewfinder) {
  ((QCamera*)this_)->setViewfinder(viewfinder);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:193
// [-2] void setViewfinder(QAbstractVideoSurface *)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera13setViewfinderEP21QAbstractVideoSurface(void *this_, QAbstractVideoSurface * surface) {
  ((QCamera*)this_)->setViewfinder(surface);
}

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtMultimedia/qcamera.h:195
// [8] QCameraViewfinderSettings viewfinderSettings()
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void* C_ZNK7QCamera18viewfinderSettingsEv(void *this_) {
  auto rv = ((QCamera*)this_)->viewfinderSettings();
return new QCameraViewfinderSettings(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtMultimedia/qcamera.h:196
// [-2] void setViewfinderSettings(const QCameraViewfinderSettings &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera21setViewfinderSettingsERK25QCameraViewfinderSettings(void *this_, QCameraViewfinderSettings* settings) {
  ((QCamera*)this_)->setViewfinderSettings(*settings);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtMultimedia/qcamera.h:198
// [-2] QList<QCameraViewfinderSettings> supportedViewfinderSettings(const QCameraViewfinderSettings &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QList<QCameraViewfinderSettings>* C_ZNK7QCamera27supportedViewfinderSettingsERK25QCameraViewfinderSettings(void *this_, QCameraViewfinderSettings* settings) {
  auto rv = ((QCamera*)this_)->supportedViewfinderSettings(*settings);
return new QList<QCameraViewfinderSettings>(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtMultimedia/qcamera.h:201
// [8] QList<QSize> supportedViewfinderResolutions(const QCameraViewfinderSettings &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK7QCamera30supportedViewfinderResolutionsERK25QCameraViewfinderSettings(void *this_, QCameraViewfinderSettings* settings) {
  auto rv = ((QCamera*)this_)->supportedViewfinderResolutions(*settings);
return new QList<QSize>(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtMultimedia/qcamera.h:204
// [-2] QList<QCamera::FrameRateRange> supportedViewfinderFrameRateRanges(const QCameraViewfinderSettings &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QList<QCamera::FrameRateRange>* C_ZNK7QCamera34supportedViewfinderFrameRateRangesERK25QCameraViewfinderSettings(void *this_, QCameraViewfinderSettings* settings) {
  auto rv = ((QCamera*)this_)->supportedViewfinderFrameRateRanges(*settings);
return new QList<QCamera::FrameRateRange>(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// since 5.5
// /usr/include/qt/QtMultimedia/qcamera.h:207
// [-2] QList<QVideoFrame::PixelFormat> supportedViewfinderPixelFormats(const QCameraViewfinderSettings &)
#if QT_VERSION >= 0x050500
extern "C" Q_DECL_EXPORT
QList<QVideoFrame::PixelFormat>* C_ZNK7QCamera31supportedViewfinderPixelFormatsERK25QCameraViewfinderSettings(void *this_, QCameraViewfinderSettings* settings) {
  auto rv = ((QCamera*)this_)->supportedViewfinderPixelFormats(*settings);
return new QList<QVideoFrame::PixelFormat>(rv);
}
#endif // QT_VERSION >= 0x050500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:210
// [4] QCamera::Error error()
extern "C" Q_DECL_EXPORT
QCamera::Error C_ZNK7QCamera5errorEv(void *this_) {
  return (QCamera::Error)((QCamera*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:211
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QCamera11errorStringEv(void *this_) {
  auto rv = ((QCamera*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:213
// [4] QCamera::LockTypes supportedLocks()
extern "C" Q_DECL_EXPORT
QCamera::LockTypes C_ZNK7QCamera14supportedLocksEv(void *this_) {
  return (QCamera::LockTypes)((QCamera*)this_)->supportedLocks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:214
// [4] QCamera::LockTypes requestedLocks()
extern "C" Q_DECL_EXPORT
QCamera::LockTypes C_ZNK7QCamera14requestedLocksEv(void *this_) {
  return (QCamera::LockTypes)((QCamera*)this_)->requestedLocks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:216
// [4] QCamera::LockStatus lockStatus()
extern "C" Q_DECL_EXPORT
QCamera::LockStatus C_ZNK7QCamera10lockStatusEv(void *this_) {
  return (QCamera::LockStatus)((QCamera*)this_)->lockStatus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:217
// [4] QCamera::LockStatus lockStatus(QCamera::LockType)
extern "C" Q_DECL_EXPORT
QCamera::LockStatus C_ZNK7QCamera10lockStatusENS_8LockTypeE(void *this_, QCamera::LockType lock) {
  return (QCamera::LockStatus)((QCamera*)this_)->lockStatus(lock);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:220
// [-2] void setCaptureMode(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera14setCaptureModeE6QFlagsINS_11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> mode) {
  ((QCamera*)this_)->setCaptureMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:222
// [-2] void load()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera4loadEv(void *this_) {
  ((QCamera*)this_)->load();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:223
// [-2] void unload()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera6unloadEv(void *this_) {
  ((QCamera*)this_)->unload();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:225
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera5startEv(void *this_) {
  ((QCamera*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:226
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera4stopEv(void *this_) {
  ((QCamera*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:228
// [-2] void searchAndLock()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera13searchAndLockEv(void *this_) {
  ((QCamera*)this_)->searchAndLock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:229
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera6unlockEv(void *this_) {
  ((QCamera*)this_)->unlock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:231
// [-2] void searchAndLock(QCamera::LockTypes)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera13searchAndLockE6QFlagsINS_8LockTypeEE(void *this_, QFlags<QCamera::LockType> locks) {
  ((QCamera*)this_)->searchAndLock(locks);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:232
// [-2] void unlock(QCamera::LockTypes)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera6unlockE6QFlagsINS_8LockTypeEE(void *this_, QFlags<QCamera::LockType> locks) {
  ((QCamera*)this_)->unlock(locks);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:235
// [-2] void stateChanged(QCamera::State)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera12stateChangedENS_5StateE(void *this_, QCamera::State arg0) {
  ((QCamera*)this_)->stateChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:236
// [-2] void captureModeChanged(QCamera::CaptureModes)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera18captureModeChangedE6QFlagsINS_11CaptureModeEE(void *this_, QFlags<QCamera::CaptureMode> arg0) {
  ((QCamera*)this_)->captureModeChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:237
// [-2] void statusChanged(QCamera::Status)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera13statusChangedENS_6StatusE(void *this_, QCamera::Status arg0) {
  ((QCamera*)this_)->statusChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:239
// [-2] void locked()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera6lockedEv(void *this_) {
  ((QCamera*)this_)->locked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:240
// [-2] void lockFailed()
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera10lockFailedEv(void *this_) {
  ((QCamera*)this_)->lockFailed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:242
// [-2] void lockStatusChanged(QCamera::LockStatus, QCamera::LockChangeReason)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera17lockStatusChangedENS_10LockStatusENS_16LockChangeReasonE(void *this_, QCamera::LockStatus arg0, QCamera::LockChangeReason arg1) {
  ((QCamera*)this_)->lockStatusChanged(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:243
// [-2] void lockStatusChanged(QCamera::LockType, QCamera::LockStatus, QCamera::LockChangeReason)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera17lockStatusChangedENS_8LockTypeENS_10LockStatusENS_16LockChangeReasonE(void *this_, QCamera::LockType arg0, QCamera::LockStatus arg1, QCamera::LockChangeReason arg2) {
  ((QCamera*)this_)->lockStatusChanged(arg0, arg1, arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:245
// [-2] void error(QCamera::Error)
extern "C" Q_DECL_EXPORT
void C_ZN7QCamera5errorENS_5ErrorE(void *this_, QCamera::Error arg0) {
  ((QCamera*)this_)->error(arg0);
}

//  main block end
