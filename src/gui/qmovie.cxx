// /usr/include/qt/QtGui/qmovie.h
#include <qmovie.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qmovie.h:65
// const QMetaObject * metaObject()
extern "C"
void C_ZNK6QMovie10metaObjectEv(void *this_) {
  /*return*/ ((QMovie*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qmovie.h:82
// void QMovie(class QObject *)
extern "C"
void* C_ZN6QMovieC1EP7QObject(QObject * parent) {
  return new QMovie(parent);
}
// /usr/include/qt/QtGui/qmovie.h:83
// void QMovie(class QIODevice *, const class QByteArray &, class QObject *)
extern "C"
void* C_ZN6QMovieC1EP9QIODeviceRK10QByteArrayP7QObject(QIODevice * device, const QByteArray & format, QObject * parent) {
  return new QMovie(device, format, parent);
}
// /usr/include/qt/QtGui/qmovie.h:84
// void QMovie(const class QString &, const class QByteArray &, class QObject *)
extern "C"
void* C_ZN6QMovieC1ERK7QStringRK10QByteArrayP7QObject(const QString & fileName, const QByteArray & format, QObject * parent) {
  return new QMovie(fileName, format, parent);
}
// virtual
// /usr/include/qt/QtGui/qmovie.h:85
// void ~QMovie()
extern "C"
void C_ZN6QMovieD1Ev(void *this_) {
  delete (QMovie*)(this_);
}
// static
// /usr/include/qt/QtGui/qmovie.h:87
// QList<QByteArray> supportedFormats()
extern "C"
void C_ZN6QMovie16supportedFormatsEv() {
  /*return*/ QMovie::supportedFormats();
}
// /usr/include/qt/QtGui/qmovie.h:89
// void setDevice(class QIODevice *)
extern "C"
void C_ZN6QMovie9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QMovie*)this_)->setDevice(device);
}
// /usr/include/qt/QtGui/qmovie.h:90
// QIODevice * device()
extern "C"
void C_ZNK6QMovie6deviceEv(void *this_) {
  /*return*/ ((QMovie*)this_)->device();
}
// /usr/include/qt/QtGui/qmovie.h:92
// void setFileName(const class QString &)
extern "C"
void C_ZN6QMovie11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QMovie*)this_)->setFileName(fileName);
}
// /usr/include/qt/QtGui/qmovie.h:93
// QString fileName()
extern "C"
void C_ZNK6QMovie8fileNameEv(void *this_) {
  /*return*/ ((QMovie*)this_)->fileName();
}
// /usr/include/qt/QtGui/qmovie.h:95
// void setFormat(const class QByteArray &)
extern "C"
void C_ZN6QMovie9setFormatERK10QByteArray(void *this_, const QByteArray & format) {
  ((QMovie*)this_)->setFormat(format);
}
// /usr/include/qt/QtGui/qmovie.h:96
// QByteArray format()
extern "C"
void C_ZNK6QMovie6formatEv(void *this_) {
  /*return*/ ((QMovie*)this_)->format();
}
// /usr/include/qt/QtGui/qmovie.h:98
// void setBackgroundColor(const class QColor &)
extern "C"
void C_ZN6QMovie18setBackgroundColorERK6QColor(void *this_, const QColor & color) {
  ((QMovie*)this_)->setBackgroundColor(color);
}
// /usr/include/qt/QtGui/qmovie.h:99
// QColor backgroundColor()
extern "C"
void C_ZNK6QMovie15backgroundColorEv(void *this_) {
  /*return*/ ((QMovie*)this_)->backgroundColor();
}
// /usr/include/qt/QtGui/qmovie.h:101
// QMovie::MovieState state()
extern "C"
void C_ZNK6QMovie5stateEv(void *this_) {
  /*return*/ ((QMovie*)this_)->state();
}
// /usr/include/qt/QtGui/qmovie.h:103
// QRect frameRect()
extern "C"
void C_ZNK6QMovie9frameRectEv(void *this_) {
  /*return*/ ((QMovie*)this_)->frameRect();
}
// /usr/include/qt/QtGui/qmovie.h:104
// QImage currentImage()
extern "C"
void C_ZNK6QMovie12currentImageEv(void *this_) {
  /*return*/ ((QMovie*)this_)->currentImage();
}
// /usr/include/qt/QtGui/qmovie.h:105
// QPixmap currentPixmap()
extern "C"
void C_ZNK6QMovie13currentPixmapEv(void *this_) {
  /*return*/ ((QMovie*)this_)->currentPixmap();
}
// /usr/include/qt/QtGui/qmovie.h:107
// bool isValid()
extern "C"
void C_ZNK6QMovie7isValidEv(void *this_) {
  /*return*/ ((QMovie*)this_)->isValid();
}
// /usr/include/qt/QtGui/qmovie.h:109
// bool jumpToFrame(int)
extern "C"
void C_ZN6QMovie11jumpToFrameEi(void *this_, int frameNumber) {
  /*return*/ ((QMovie*)this_)->jumpToFrame(frameNumber);
}
// /usr/include/qt/QtGui/qmovie.h:110
// int loopCount()
extern "C"
void C_ZNK6QMovie9loopCountEv(void *this_) {
  /*return*/ ((QMovie*)this_)->loopCount();
}
// /usr/include/qt/QtGui/qmovie.h:111
// int frameCount()
extern "C"
void C_ZNK6QMovie10frameCountEv(void *this_) {
  /*return*/ ((QMovie*)this_)->frameCount();
}
// /usr/include/qt/QtGui/qmovie.h:112
// int nextFrameDelay()
extern "C"
void C_ZNK6QMovie14nextFrameDelayEv(void *this_) {
  /*return*/ ((QMovie*)this_)->nextFrameDelay();
}
// /usr/include/qt/QtGui/qmovie.h:113
// int currentFrameNumber()
extern "C"
void C_ZNK6QMovie18currentFrameNumberEv(void *this_) {
  /*return*/ ((QMovie*)this_)->currentFrameNumber();
}
// /usr/include/qt/QtGui/qmovie.h:115
// int speed()
extern "C"
void C_ZNK6QMovie5speedEv(void *this_) {
  /*return*/ ((QMovie*)this_)->speed();
}
// /usr/include/qt/QtGui/qmovie.h:117
// QSize scaledSize()
extern "C"
void C_ZN6QMovie10scaledSizeEv(void *this_) {
  /*return*/ ((QMovie*)this_)->scaledSize();
}
// /usr/include/qt/QtGui/qmovie.h:118
// void setScaledSize(const class QSize &)
extern "C"
void C_ZN6QMovie13setScaledSizeERK5QSize(void *this_, const QSize & size) {
  ((QMovie*)this_)->setScaledSize(size);
}
// /usr/include/qt/QtGui/qmovie.h:120
// QMovie::CacheMode cacheMode()
extern "C"
void C_ZNK6QMovie9cacheModeEv(void *this_) {
  /*return*/ ((QMovie*)this_)->cacheMode();
}
// /usr/include/qt/QtGui/qmovie.h:121
// void setCacheMode(enum QMovie::CacheMode)
extern "C"
void C_ZN6QMovie12setCacheModeENS_9CacheModeE(void *this_, QMovie::CacheMode mode) {
  ((QMovie*)this_)->setCacheMode(mode);
}
// /usr/include/qt/QtGui/qmovie.h:124
// void started()
extern "C"
void C_ZN6QMovie7startedEv(void *this_) {
  ((QMovie*)this_)->started();
}
// /usr/include/qt/QtGui/qmovie.h:125
// void resized(const class QSize &)
extern "C"
void C_ZN6QMovie7resizedERK5QSize(void *this_, const QSize & size) {
  ((QMovie*)this_)->resized(size);
}
// /usr/include/qt/QtGui/qmovie.h:126
// void updated(const class QRect &)
extern "C"
void C_ZN6QMovie7updatedERK5QRect(void *this_, const QRect & rect) {
  ((QMovie*)this_)->updated(rect);
}
// /usr/include/qt/QtGui/qmovie.h:127
// void stateChanged(class QMovie::MovieState)
extern "C"
void C_ZN6QMovie12stateChangedENS_10MovieStateE(void *this_, QMovie::MovieState state) {
  ((QMovie*)this_)->stateChanged(state);
}
// /usr/include/qt/QtGui/qmovie.h:128
// void error(class QImageReader::ImageReaderError)
extern "C"
void C_ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(void *this_, QImageReader::ImageReaderError error) {
  ((QMovie*)this_)->error(error);
}
// /usr/include/qt/QtGui/qmovie.h:129
// void finished()
extern "C"
void C_ZN6QMovie8finishedEv(void *this_) {
  ((QMovie*)this_)->finished();
}
// /usr/include/qt/QtGui/qmovie.h:130
// void frameChanged(int)
extern "C"
void C_ZN6QMovie12frameChangedEi(void *this_, int frameNumber) {
  ((QMovie*)this_)->frameChanged(frameNumber);
}
// /usr/include/qt/QtGui/qmovie.h:133
// void start()
extern "C"
void C_ZN6QMovie5startEv(void *this_) {
  ((QMovie*)this_)->start();
}
// /usr/include/qt/QtGui/qmovie.h:134
// bool jumpToNextFrame()
extern "C"
void C_ZN6QMovie15jumpToNextFrameEv(void *this_) {
  /*return*/ ((QMovie*)this_)->jumpToNextFrame();
}
// /usr/include/qt/QtGui/qmovie.h:135
// void setPaused(_Bool)
extern "C"
void C_ZN6QMovie9setPausedEb(void *this_, bool paused) {
  ((QMovie*)this_)->setPaused(paused);
}
// /usr/include/qt/QtGui/qmovie.h:136
// void stop()
extern "C"
void C_ZN6QMovie4stopEv(void *this_) {
  ((QMovie*)this_)->stop();
}
// /usr/include/qt/QtGui/qmovie.h:137
// void setSpeed(int)
extern "C"
void C_ZN6QMovie8setSpeedEi(void *this_, int percentSpeed) {
  ((QMovie*)this_)->setSpeed(percentSpeed);
}