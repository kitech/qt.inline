//  header block begin

#ifndef QT_MINIMAL
// /usr/include/qt/QtGui/qmovie.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmovie.h>
#include <QtGui>
#include "callback_inherit.h"

// QMovie is pure virtual: false
// QMovie has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMovie_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMovie_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMovie_t qt_meta_stringdata_MyQMovie = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQMovie"
  },
  "MyQMovie"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMovie[] = {
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
class Q_DECL_EXPORT MyQMovie : public QMovie {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMovie::staticMetaObject,
  qt_meta_stringdata_MyQMovie.data,
  qt_meta_data_MyQMovie,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMovie.stringdata0))
      return static_cast<void*>(this);
  return QMovie::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMovie::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMovie() {}
// void QMovie(QObject *)
MyQMovie(QObject * parent) : QMovie(parent) {}
// void QMovie(QIODevice *, const QByteArray &, QObject *)
MyQMovie(QIODevice * device, const QByteArray & format, QObject * parent) : QMovie(device, format, parent) {}
// void QMovie(const QString &, const QByteArray &, QObject *)
MyQMovie(const QString & fileName, const QByteArray & format, QObject * parent) : QMovie(fileName, format, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QMovie_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMovie* qo = (MyQMovie*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie10metaObjectEv(void *this_) {
  return (void*)((QMovie*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovie11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMovie*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN6QMovie11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMovie*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovie2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMovie::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovie6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMovie::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:82
// [-2] void QMovie(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovieC2EP7QObject(QObject * parent) {
  return  new MyQMovie(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:83
// [-2] void QMovie(QIODevice *, const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovieC2EP9QIODeviceRK10QByteArrayP7QObject(QIODevice * device, QByteArray* format, QObject * parent) {
  return  new MyQMovie(device, *format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:84
// [-2] void QMovie(const QString &, const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovieC2ERK7QStringRK10QByteArrayP7QObject(QString* fileName, QByteArray* format, QObject * parent) {
  return  new MyQMovie(*fileName, *format, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:85
// [-2] void ~QMovie()
extern "C" Q_DECL_EXPORT
void C_ZN6QMovieD2Ev(void *this_) {
  delete (QMovie*)(this_);
}
// Public static Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qmovie.h:87
// [8] QList<QByteArray> supportedFormats()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
QList<QByteArray>* C_ZN6QMovie16supportedFormatsEv() {
  auto rv = QMovie::supportedFormats();
return new QList<QByteArray>(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:89
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QMovie*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:90
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie6deviceEv(void *this_) {
  return (void*)((QMovie*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:92
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QMovie*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:93
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie8fileNameEv(void *this_) {
  auto rv = ((QMovie*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:95
// [-2] void setFormat(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QMovie*)this_)->setFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:96
// [8] QByteArray format()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie6formatEv(void *this_) {
  auto rv = ((QMovie*)this_)->format();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:98
// [-2] void setBackgroundColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie18setBackgroundColorERK6QColor(void *this_, QColor* color) {
  ((QMovie*)this_)->setBackgroundColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:99
// [16] QColor backgroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie15backgroundColorEv(void *this_) {
  auto rv = ((QMovie*)this_)->backgroundColor();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:101
// [4] QMovie::MovieState state()
extern "C" Q_DECL_EXPORT
QMovie::MovieState C_ZNK6QMovie5stateEv(void *this_) {
  return (QMovie::MovieState)((QMovie*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:103
// [16] QRect frameRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie9frameRectEv(void *this_) {
  auto rv = ((QMovie*)this_)->frameRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:104
// [32] QImage currentImage()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie12currentImageEv(void *this_) {
  auto rv = ((QMovie*)this_)->currentImage();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:105
// [32] QPixmap currentPixmap()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie13currentPixmapEv(void *this_) {
  auto rv = ((QMovie*)this_)->currentPixmap();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:107
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QMovie7isValidEv(void *this_) {
  return (bool)((QMovie*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:108
// [4] QImageReader::ImageReaderError lastError()
extern "C" Q_DECL_EXPORT
QImageReader::ImageReaderError C_ZNK6QMovie9lastErrorEv(void *this_) {
  return (QImageReader::ImageReaderError)((QMovie*)this_)->lastError();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:109
// [8] QString lastErrorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QMovie15lastErrorStringEv(void *this_) {
  auto rv = ((QMovie*)this_)->lastErrorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:111
// [1] bool jumpToFrame(int)
extern "C" Q_DECL_EXPORT
bool C_ZN6QMovie11jumpToFrameEi(void *this_, int frameNumber) {
  return (bool)((QMovie*)this_)->jumpToFrame(frameNumber);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:112
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK6QMovie9loopCountEv(void *this_) {
  return (int)((QMovie*)this_)->loopCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:113
// [4] int frameCount()
extern "C" Q_DECL_EXPORT
int C_ZNK6QMovie10frameCountEv(void *this_) {
  return (int)((QMovie*)this_)->frameCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:114
// [4] int nextFrameDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK6QMovie14nextFrameDelayEv(void *this_) {
  return (int)((QMovie*)this_)->nextFrameDelay();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:115
// [4] int currentFrameNumber()
extern "C" Q_DECL_EXPORT
int C_ZNK6QMovie18currentFrameNumberEv(void *this_) {
  return (int)((QMovie*)this_)->currentFrameNumber();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:117
// [4] int speed()
extern "C" Q_DECL_EXPORT
int C_ZNK6QMovie5speedEv(void *this_) {
  return (int)((QMovie*)this_)->speed();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qmovie.h:119
// [8] QSize scaledSize()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovie10scaledSizeEv(void *this_) {
  auto rv = ((QMovie*)this_)->scaledSize();
return new QSize(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qmovie.h:120
// [-2] void setScaledSize(const QSize &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie13setScaledSizeERK5QSize(void *this_, QSize* size) {
  ((QMovie*)this_)->setScaledSize(*size);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:122
// [4] QMovie::CacheMode cacheMode()
extern "C" Q_DECL_EXPORT
QMovie::CacheMode C_ZNK6QMovie9cacheModeEv(void *this_) {
  return (QMovie::CacheMode)((QMovie*)this_)->cacheMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:123
// [-2] void setCacheMode(QMovie::CacheMode)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie12setCacheModeENS_9CacheModeE(void *this_, QMovie::CacheMode mode) {
  ((QMovie*)this_)->setCacheMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:126
// [-2] void started()
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie7startedEv(void *this_) {
  ((QMovie*)this_)->started();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:127
// [-2] void resized(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie7resizedERK5QSize(void *this_, QSize* size) {
  ((QMovie*)this_)->resized(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:128
// [-2] void updated(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie7updatedERK5QRect(void *this_, QRect* rect) {
  ((QMovie*)this_)->updated(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:129
// [-2] void stateChanged(QMovie::MovieState)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie12stateChangedENS_10MovieStateE(void *this_, QMovie::MovieState state) {
  ((QMovie*)this_)->stateChanged(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:130
// [-2] void error(QImageReader::ImageReaderError)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(void *this_, QImageReader::ImageReaderError error) {
  ((QMovie*)this_)->error(error);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:131
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie8finishedEv(void *this_) {
  ((QMovie*)this_)->finished();
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qmovie.h:132
// [-2] void frameChanged(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie12frameChangedEi(void *this_, int frameNumber) {
  ((QMovie*)this_)->frameChanged(frameNumber);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:135
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie5startEv(void *this_) {
  ((QMovie*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:136
// [1] bool jumpToNextFrame()
extern "C" Q_DECL_EXPORT
bool C_ZN6QMovie15jumpToNextFrameEv(void *this_) {
  return (bool)((QMovie*)this_)->jumpToNextFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:137
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie9setPausedEb(void *this_, bool paused) {
  ((QMovie*)this_)->setPaused(paused);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:138
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie4stopEv(void *this_) {
  ((QMovie*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:139
// [-2] void setSpeed(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QMovie8setSpeedEi(void *this_, int percentSpeed) {
  ((QMovie*)this_)->setSpeed(percentSpeed);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
