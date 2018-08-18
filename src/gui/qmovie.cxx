//  header block begin
// /usr/include/qt/QtGui/qmovie.h
#ifndef protected
#define protected public
#endif
#include <qmovie.h>
#include <QtGui>
#include "callback_inherit.h"

// QMovie is pure virtual: false
// QMovie has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMovie : public QMovie {
public:
  virtual ~MyQMovie() {}
// void QMovie(QObject *)
MyQMovie(QObject * parent) : QMovie(parent) {}
// void QMovie(QIODevice *, const QByteArray &, QObject *)
MyQMovie(QIODevice * device, const QByteArray & format, QObject * parent) : QMovie(device, format, parent) {}
// void QMovie(const QString &, const QByteArray &, QObject *)
MyQMovie(const QString & fileName, const QByteArray & format, QObject * parent) : QMovie(fileName, format, parent) {}
};

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
  return  new QMovie(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:83
// [-2] void QMovie(QIODevice *, const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovieC2EP9QIODeviceRK10QByteArrayP7QObject(QIODevice * device, QByteArray* format, QObject * parent) {
  return  new QMovie(device, *format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:84
// [-2] void QMovie(const QString &, const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMovieC2ERK7QStringRK10QByteArrayP7QObject(QString* fileName, QByteArray* format, QObject * parent) {
  return  new QMovie(*fileName, *format, parent);
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
