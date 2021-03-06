//  header block begin

// /usr/include/qt/QtMultimedia/qcameraimagecapture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcameraimagecapture.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraImageCapture is pure virtual: false
// QCameraImageCapture has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCameraImageCapture_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCameraImageCapture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCameraImageCapture_t qt_meta_stringdata_MyQCameraImageCapture = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQCameraImageCapture"
  },
  "MyQCameraImageCapture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCameraImageCapture[] = {
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
class Q_DECL_EXPORT MyQCameraImageCapture : public QCameraImageCapture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCameraImageCapture::staticMetaObject,
  qt_meta_stringdata_MyQCameraImageCapture.data,
  qt_meta_data_MyQCameraImageCapture,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCameraImageCapture.stringdata0))
      return static_cast<void*>(this);
  return QCameraImageCapture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCameraImageCapture::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCameraImageCapture() {}
// void QCameraImageCapture(QMediaObject *, QObject *)
MyQCameraImageCapture(QMediaObject * mediaObject, QObject * parent) : QCameraImageCapture(mediaObject, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool setMediaObject(QMediaObject *)
  virtual bool setMediaObject(QMediaObject * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMediaObject", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCameraImageCapture::setMediaObject(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCameraImageCapture_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCameraImageCapture* qo = (MyQCameraImageCapture*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:138
// [1] bool setMediaObject(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN19QCameraImageCapture14setMediaObjectEP12QMediaObject(void *this_, QMediaObject * arg0) {
  return (bool)((QCameraImageCapture*)this_)->QCameraImageCapture::setMediaObject(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture10metaObjectEv(void *this_) {
  return (void*)((QCameraImageCapture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraImageCapture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraImageCapture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QCameraImageCapture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraImageCapture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraImageCapture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraImageCapture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraImageCapture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraImageCapture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:90
// [-2] void QCameraImageCapture(QMediaObject *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QCameraImageCaptureC2EP12QMediaObjectP7QObject(QMediaObject * mediaObject, QObject * parent) {
  auto _nilp = (MyQCameraImageCapture*)(0);
  return  new MyQCameraImageCapture(mediaObject, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:91
// [-2] void ~QCameraImageCapture()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCaptureD2Ev(void *this_) {
  delete (QCameraImageCapture*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:93
// [1] bool isAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraImageCapture11isAvailableEv(void *this_) {
  return (bool)((QCameraImageCapture*)this_)->isAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:94
// [4] QMultimedia::AvailabilityStatus availability()
extern "C" Q_DECL_EXPORT
QMultimedia::AvailabilityStatus C_ZNK19QCameraImageCapture12availabilityEv(void *this_) {
  return (QMultimedia::AvailabilityStatus)((QCameraImageCapture*)this_)->availability();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:96
// [8] QMediaObject * mediaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture11mediaObjectEv(void *this_) {
  return (void*)((QCameraImageCapture*)this_)->mediaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:98
// [4] QCameraImageCapture::Error error()
extern "C" Q_DECL_EXPORT
QCameraImageCapture::Error C_ZNK19QCameraImageCapture5errorEv(void *this_) {
  return (QCameraImageCapture::Error)((QCameraImageCapture*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:99
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture11errorStringEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:101
// [1] bool isReadyForCapture()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraImageCapture17isReadyForCaptureEv(void *this_) {
  return (bool)((QCameraImageCapture*)this_)->isReadyForCapture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:103
// [8] QStringList supportedImageCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture20supportedImageCodecsEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->supportedImageCodecs();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:104
// [8] QString imageCodecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture21imageCodecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QCameraImageCapture*)this_)->imageCodecDescription(*codecName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:106
// [8] QList<QSize> supportedResolutions(const QImageEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK19QCameraImageCapture20supportedResolutionsERK21QImageEncoderSettingsPb(void *this_, QImageEncoderSettings* settings, bool * continuous) {
  auto rv = ((QCameraImageCapture*)this_)->supportedResolutions(*settings, continuous);
return new QList<QSize>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:109
// [8] QImageEncoderSettings encodingSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QCameraImageCapture16encodingSettingsEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->encodingSettings();
return new QImageEncoderSettings(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:110
// [-2] void setEncodingSettings(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture19setEncodingSettingsERK21QImageEncoderSettings(void *this_, QImageEncoderSettings* settings) {
  ((QCameraImageCapture*)this_)->setEncodingSettings(*settings);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:112
// [-2] QList<QVideoFrame::PixelFormat> supportedBufferFormats()
extern "C" Q_DECL_EXPORT
QList<QVideoFrame::PixelFormat>* C_ZNK19QCameraImageCapture22supportedBufferFormatsEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->supportedBufferFormats();
return new QList<QVideoFrame::PixelFormat>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:113
// [4] QVideoFrame::PixelFormat bufferFormat()
extern "C" Q_DECL_EXPORT
QVideoFrame::PixelFormat C_ZNK19QCameraImageCapture12bufferFormatEv(void *this_) {
  return (QVideoFrame::PixelFormat)((QCameraImageCapture*)this_)->bufferFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:114
// [-2] void setBufferFormat(const QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture15setBufferFormatEN11QVideoFrame11PixelFormatE(void *this_, const QVideoFrame::PixelFormat format) {
  ((QCameraImageCapture*)this_)->setBufferFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:116
// [1] bool isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QCameraImageCapture29isCaptureDestinationSupportedE6QFlagsINS_18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  return (bool)((QCameraImageCapture*)this_)->isCaptureDestinationSupported(destination);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:117
// [4] QCameraImageCapture::CaptureDestinations captureDestination()
extern "C" Q_DECL_EXPORT
QCameraImageCapture::CaptureDestinations* C_ZNK19QCameraImageCapture18captureDestinationEv(void *this_) {
  auto rv = ((QCameraImageCapture*)this_)->captureDestination();
return new QCameraImageCapture::CaptureDestinations(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:118
// [-2] void setCaptureDestination(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture21setCaptureDestinationE6QFlagsINS_18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  ((QCameraImageCapture*)this_)->setCaptureDestination(destination);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:121
// [4] int capture(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN19QCameraImageCapture7captureERK7QString(void *this_, QString* location) {
  return (int)((QCameraImageCapture*)this_)->capture(*location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:122
// [-2] void cancelCapture()
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture13cancelCaptureEv(void *this_) {
  ((QCameraImageCapture*)this_)->cancelCapture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:125
// [-2] void error(int, QCameraImageCapture::Error, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture5errorEiNS_5ErrorERK7QString(void *this_, int id, QCameraImageCapture::Error error, QString* errorString) {
  ((QCameraImageCapture*)this_)->error(id, error, *errorString);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:127
// [-2] void readyForCaptureChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture22readyForCaptureChangedEb(void *this_, bool ready) {
  ((QCameraImageCapture*)this_)->readyForCaptureChanged(ready);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:128
// [-2] void bufferFormatChanged(QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture19bufferFormatChangedEN11QVideoFrame11PixelFormatE(void *this_, QVideoFrame::PixelFormat format) {
  ((QCameraImageCapture*)this_)->bufferFormatChanged(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:129
// [-2] void captureDestinationChanged(QCameraImageCapture::CaptureDestinations)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture25captureDestinationChangedE6QFlagsINS_18CaptureDestinationEE(void *this_, QFlags<QCameraImageCapture::CaptureDestination> destination) {
  ((QCameraImageCapture*)this_)->captureDestinationChanged(destination);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:131
// [-2] void imageExposed(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture12imageExposedEi(void *this_, int id) {
  ((QCameraImageCapture*)this_)->imageExposed(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:132
// [-2] void imageCaptured(int, const QImage &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture13imageCapturedEiRK6QImage(void *this_, int id, QImage* preview) {
  ((QCameraImageCapture*)this_)->imageCaptured(id, *preview);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:133
// [-2] void imageMetadataAvailable(int, const QString &, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture22imageMetadataAvailableEiRK7QStringRK8QVariant(void *this_, int id, QString* key, QVariant* value) {
  ((QCameraImageCapture*)this_)->imageMetadataAvailable(id, *key, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:134
// [-2] void imageAvailable(int, const QVideoFrame &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture14imageAvailableEiRK11QVideoFrame(void *this_, int id, QVideoFrame* frame) {
  ((QCameraImageCapture*)this_)->imageAvailable(id, *frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:135
// [-2] void imageSaved(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QCameraImageCapture10imageSavedEiRK7QString(void *this_, int id, QString* fileName) {
  ((QCameraImageCapture*)this_)->imageSaved(id, *fileName);
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
