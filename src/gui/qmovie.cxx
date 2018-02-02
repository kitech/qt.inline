//  header block begin
// /usr/include/qt/QtGui/qmovie.h
#include <qmovie.h>
#include <QtGui>

// QMovie is pure virtual: false
// QMovie has virtual projected: false
//  header block end

//  main block begin

class MyQMovie : public QMovie {
public:
  virtual ~MyQMovie() {}
// void QMovie(class QObject *)
MyQMovie(QObject * parent) : QMovie(parent) {}
// void QMovie(class QIODevice *, const class QByteArray &, class QObject *)
MyQMovie(QIODevice * device, const QByteArray & format, QObject * parent) : QMovie(device, format, parent) {}
// void QMovie(const class QString &, const class QByteArray &, class QObject *)
MyQMovie(const QString & fileName, const QByteArray & format, QObject * parent) : QMovie(fileName, format, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK6QMovie10metaObjectEv(void *this_) {
  return (void*)((QMovie*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:82
// [-2] void QMovie(class QObject *)
extern "C"
void* C_ZN6QMovieC2EP7QObject(QObject * parent) {
  return  new QMovie(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:83
// [-2] void QMovie(class QIODevice *, const class QByteArray &, class QObject *)
extern "C"
void* C_ZN6QMovieC2EP9QIODeviceRK10QByteArrayP7QObject(QIODevice * device, QByteArray* format, QObject * parent) {
  return  new QMovie(device, *format, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:84
// [-2] void QMovie(const class QString &, const class QByteArray &, class QObject *)
extern "C"
void* C_ZN6QMovieC2ERK7QStringRK10QByteArrayP7QObject(QString* fileName, QByteArray* format, QObject * parent) {
  return  new QMovie(*fileName, *format, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:85
// [-2] void ~QMovie()
extern "C"
void C_ZN6QMovieD2Ev(void *this_) {
  delete (QMovie*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:89
// [-2] void setDevice(class QIODevice *)
extern "C"
void C_ZN6QMovie9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QMovie*)this_)->setDevice(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:90
// [8] QIODevice * device()
extern "C"
void* C_ZNK6QMovie6deviceEv(void *this_) {
  return (void*)((QMovie*)this_)->device();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:92
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN6QMovie11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QMovie*)this_)->setFileName(*fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:93
// [8] QString fileName()
extern "C"
void* C_ZNK6QMovie8fileNameEv(void *this_) {
  auto rv = ((QMovie*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:95
// [-2] void setFormat(const class QByteArray &)
extern "C"
void C_ZN6QMovie9setFormatERK10QByteArray(void *this_, QByteArray* format) {
  ((QMovie*)this_)->setFormat(*format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:96
// [8] QByteArray format()
extern "C"
void* C_ZNK6QMovie6formatEv(void *this_) {
  auto rv = ((QMovie*)this_)->format();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:98
// [-2] void setBackgroundColor(const class QColor &)
extern "C"
void C_ZN6QMovie18setBackgroundColorERK6QColor(void *this_, QColor* color) {
  ((QMovie*)this_)->setBackgroundColor(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:99
// [16] QColor backgroundColor()
extern "C"
void* C_ZNK6QMovie15backgroundColorEv(void *this_) {
  auto rv = ((QMovie*)this_)->backgroundColor();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:101
// [4] QMovie::MovieState state()
extern "C"
QMovie::MovieState C_ZNK6QMovie5stateEv(void *this_) {
  return (QMovie::MovieState)((QMovie*)this_)->state();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:103
// [16] QRect frameRect()
extern "C"
void* C_ZNK6QMovie9frameRectEv(void *this_) {
  auto rv = ((QMovie*)this_)->frameRect();
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:104
// [32] QImage currentImage()
extern "C"
void* C_ZNK6QMovie12currentImageEv(void *this_) {
  auto rv = ((QMovie*)this_)->currentImage();
return new QImage(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:105
// [32] QPixmap currentPixmap()
extern "C"
void* C_ZNK6QMovie13currentPixmapEv(void *this_) {
  auto rv = ((QMovie*)this_)->currentPixmap();
return new QPixmap(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:107
// [1] bool isValid()
extern "C"
bool C_ZNK6QMovie7isValidEv(void *this_) {
  return (bool)((QMovie*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:108
// [4] QImageReader::ImageReaderError lastError()
extern "C"
QImageReader::ImageReaderError C_ZNK6QMovie9lastErrorEv(void *this_) {
  return (QImageReader::ImageReaderError)((QMovie*)this_)->lastError();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:109
// [8] QString lastErrorString()
extern "C"
void* C_ZNK6QMovie15lastErrorStringEv(void *this_) {
  auto rv = ((QMovie*)this_)->lastErrorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:111
// [1] bool jumpToFrame(int)
extern "C"
bool C_ZN6QMovie11jumpToFrameEi(void *this_, int frameNumber) {
  return (bool)((QMovie*)this_)->jumpToFrame(frameNumber);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:112
// [4] int loopCount()
extern "C"
int C_ZNK6QMovie9loopCountEv(void *this_) {
  return (int)((QMovie*)this_)->loopCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:113
// [4] int frameCount()
extern "C"
int C_ZNK6QMovie10frameCountEv(void *this_) {
  return (int)((QMovie*)this_)->frameCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:114
// [4] int nextFrameDelay()
extern "C"
int C_ZNK6QMovie14nextFrameDelayEv(void *this_) {
  return (int)((QMovie*)this_)->nextFrameDelay();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:115
// [4] int currentFrameNumber()
extern "C"
int C_ZNK6QMovie18currentFrameNumberEv(void *this_) {
  return (int)((QMovie*)this_)->currentFrameNumber();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:117
// [4] int speed()
extern "C"
int C_ZNK6QMovie5speedEv(void *this_) {
  return (int)((QMovie*)this_)->speed();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:119
// [8] QSize scaledSize()
extern "C"
void* C_ZN6QMovie10scaledSizeEv(void *this_) {
  auto rv = ((QMovie*)this_)->scaledSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:120
// [-2] void setScaledSize(const class QSize &)
extern "C"
void C_ZN6QMovie13setScaledSizeERK5QSize(void *this_, QSize* size) {
  ((QMovie*)this_)->setScaledSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:122
// [4] QMovie::CacheMode cacheMode()
extern "C"
QMovie::CacheMode C_ZNK6QMovie9cacheModeEv(void *this_) {
  return (QMovie::CacheMode)((QMovie*)this_)->cacheMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:123
// [-2] void setCacheMode(enum QMovie::CacheMode)
extern "C"
void C_ZN6QMovie12setCacheModeENS_9CacheModeE(void *this_, QMovie::CacheMode mode) {
  ((QMovie*)this_)->setCacheMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:126
// [-2] void started()
extern "C"
void C_ZN6QMovie7startedEv(void *this_) {
  ((QMovie*)this_)->started();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:127
// [-2] void resized(const class QSize &)
extern "C"
void C_ZN6QMovie7resizedERK5QSize(void *this_, QSize* size) {
  ((QMovie*)this_)->resized(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:128
// [-2] void updated(const class QRect &)
extern "C"
void C_ZN6QMovie7updatedERK5QRect(void *this_, QRect* rect) {
  ((QMovie*)this_)->updated(*rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:129
// [-2] void stateChanged(class QMovie::MovieState)
extern "C"
void C_ZN6QMovie12stateChangedENS_10MovieStateE(void *this_, QMovie::MovieState state) {
  ((QMovie*)this_)->stateChanged(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:130
// [-2] void error(class QImageReader::ImageReaderError)
extern "C"
void C_ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(void *this_, QImageReader::ImageReaderError error) {
  ((QMovie*)this_)->error(error);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:131
// [-2] void finished()
extern "C"
void C_ZN6QMovie8finishedEv(void *this_) {
  ((QMovie*)this_)->finished();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:132
// [-2] void frameChanged(int)
extern "C"
void C_ZN6QMovie12frameChangedEi(void *this_, int frameNumber) {
  ((QMovie*)this_)->frameChanged(frameNumber);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:135
// [-2] void start()
extern "C"
void C_ZN6QMovie5startEv(void *this_) {
  ((QMovie*)this_)->start();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:136
// [1] bool jumpToNextFrame()
extern "C"
bool C_ZN6QMovie15jumpToNextFrameEv(void *this_) {
  return (bool)((QMovie*)this_)->jumpToNextFrame();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:137
// [-2] void setPaused(_Bool)
extern "C"
void C_ZN6QMovie9setPausedEb(void *this_, bool paused) {
  ((QMovie*)this_)->setPaused(paused);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:138
// [-2] void stop()
extern "C"
void C_ZN6QMovie4stopEv(void *this_) {
  ((QMovie*)this_)->stop();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:139
// [-2] void setSpeed(int)
extern "C"
void C_ZN6QMovie8setSpeedEi(void *this_, int percentSpeed) {
  ((QMovie*)this_)->setSpeed(percentSpeed);
}
//  main block end
