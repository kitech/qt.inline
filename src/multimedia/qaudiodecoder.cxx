//  header block begin
// /usr/include/qt/QtMultimedia/qaudiodecoder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiodecoder.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDecoder is pure virtual: false
// QAudioDecoder has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAudioDecoder_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioDecoder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioDecoder_t qt_meta_stringdata_MyQAudioDecoder = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQAudioDecoder"
  },
  "MyQAudioDecoder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioDecoder[] = {
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
class Q_DECL_EXPORT MyQAudioDecoder : public QAudioDecoder {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioDecoder::staticMetaObject,
  qt_meta_stringdata_MyQAudioDecoder.data,
  qt_meta_data_MyQAudioDecoder,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioDecoder.stringdata0))
      return static_cast<void*>(this);
  return QAudioDecoder::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioDecoder::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioDecoder() {}
// void QAudioDecoder(QObject *)
MyQAudioDecoder(QObject * parent) : QAudioDecoder(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QAudioDecoder_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioDecoder* qo = (MyQAudioDecoder*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder10metaObjectEv(void *this_) {
  return (void*)((QAudioDecoder*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QAudioDecoder11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAudioDecoder*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QAudioDecoder11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAudioDecoder*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QAudioDecoder2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioDecoder::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QAudioDecoder6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAudioDecoder::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:78
// [-2] void QAudioDecoder(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QAudioDecoderC2EP7QObject(QObject * parent) {
  return  new MyQAudioDecoder(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:79
// [-2] void ~QAudioDecoder()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoderD2Ev(void *this_) {
  delete (QAudioDecoder*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:81
// [4] QMultimedia::SupportEstimate hasSupport(const QString &, const QStringList &)
extern "C" Q_DECL_EXPORT
QMultimedia::SupportEstimate C_ZN13QAudioDecoder10hasSupportERK7QStringRK11QStringList(QString* mimeType, QStringList* codecs) {
  return (QMultimedia::SupportEstimate)QAudioDecoder::hasSupport(*mimeType, *codecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:83
// [4] QAudioDecoder::State state()
extern "C" Q_DECL_EXPORT
QAudioDecoder::State C_ZNK13QAudioDecoder5stateEv(void *this_) {
  return (QAudioDecoder::State)((QAudioDecoder*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:85
// [8] QString sourceFilename()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder14sourceFilenameEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->sourceFilename();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:86
// [-2] void setSourceFilename(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder17setSourceFilenameERK7QString(void *this_, QString* fileName) {
  ((QAudioDecoder*)this_)->setSourceFilename(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:88
// [8] QIODevice * sourceDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder12sourceDeviceEv(void *this_) {
  return (void*)((QAudioDecoder*)this_)->sourceDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:89
// [-2] void setSourceDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder15setSourceDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QAudioDecoder*)this_)->setSourceDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:91
// [8] QAudioFormat audioFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder11audioFormatEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->audioFormat();
return new QAudioFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:92
// [-2] void setAudioFormat(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder14setAudioFormatERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoder*)this_)->setAudioFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:94
// [4] QAudioDecoder::Error error()
extern "C" Q_DECL_EXPORT
QAudioDecoder::Error C_ZNK13QAudioDecoder5errorEv(void *this_) {
  return (QAudioDecoder::Error)((QAudioDecoder*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:95
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder11errorStringEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:97
// [8] QAudioBuffer read()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QAudioDecoder4readEv(void *this_) {
  auto rv = ((QAudioDecoder*)this_)->read();
return new QAudioBuffer(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:98
// [1] bool bufferAvailable()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QAudioDecoder15bufferAvailableEv(void *this_) {
  return (bool)((QAudioDecoder*)this_)->bufferAvailable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:100
// [8] qint64 position()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QAudioDecoder8positionEv(void *this_) {
  return (qint64)((QAudioDecoder*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:101
// [8] qint64 duration()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QAudioDecoder8durationEv(void *this_) {
  return (qint64)((QAudioDecoder*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:104
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder5startEv(void *this_) {
  ((QAudioDecoder*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:105
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder4stopEv(void *this_) {
  ((QAudioDecoder*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:108
// [-2] void bufferAvailableChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder22bufferAvailableChangedEb(void *this_, bool arg0) {
  ((QAudioDecoder*)this_)->bufferAvailableChanged(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:109
// [-2] void bufferReady()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder11bufferReadyEv(void *this_) {
  ((QAudioDecoder*)this_)->bufferReady();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:110
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder8finishedEv(void *this_) {
  ((QAudioDecoder*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:112
// [-2] void stateChanged(QAudioDecoder::State)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder12stateChangedENS_5StateE(void *this_, QAudioDecoder::State newState) {
  ((QAudioDecoder*)this_)->stateChanged(newState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:113
// [-2] void formatChanged(const QAudioFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder13formatChangedERK12QAudioFormat(void *this_, QAudioFormat* format) {
  ((QAudioDecoder*)this_)->formatChanged(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:115
// [-2] void error(QAudioDecoder::Error)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder5errorENS_5ErrorE(void *this_, QAudioDecoder::Error error) {
  ((QAudioDecoder*)this_)->error(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:117
// [-2] void sourceChanged()
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder13sourceChangedEv(void *this_) {
  ((QAudioDecoder*)this_)->sourceChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:119
// [-2] void positionChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder15positionChangedEx(void *this_, qint64 position) {
  ((QAudioDecoder*)this_)->positionChanged(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:120
// [-2] void durationChanged(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder15durationChangedEx(void *this_, qint64 duration) {
  ((QAudioDecoder*)this_)->durationChanged(duration);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:123
// [1] bool bind(QObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QAudioDecoder4bindEP7QObject(void *this_, QObject * arg0) {
  return (bool)((QAudioDecoder*)this_)->bind(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:124
// [-2] void unbind(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN13QAudioDecoder6unbindEP7QObject(void *this_, QObject * arg0) {
  ((QAudioDecoder*)this_)->unbind(arg0);
}

//  main block end
