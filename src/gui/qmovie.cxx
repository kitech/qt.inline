// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qmovie.h
// dst-file: /src/gui/qmovie.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmovie.h>


#include <qimage.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qrect.h>
#include <qsize.h>
#include <qpixmap.h>
#include <qstring.h>
#include <qcolor.h>
// <= header block end

// main block begin =>
void __keep_qmovie_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMovie_Class_Size()
{
  return sizeof(QMovie);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 76, column 14>
//   // proto:  void QMovie::QMovie(QObject * parent);
extern "C"
QMovie*
C_ZN6QMovieC2EP7QObject(QObject * arg1) {
  auto ret = new QMovie(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 109, column 9>
//   // proto:  int QMovie::speed();
// _ZNK6QMovie5speedEv speed()
extern "C"
int
C_ZNK6QMovie5speedEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->speed();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 128, column 10>
//   // proto:  bool QMovie::jumpToNextFrame();
// _ZN6QMovie15jumpToNextFrameEv jumpToNextFrame()
extern "C"
bool
C_ZN6QMovie15jumpToNextFrameEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->jumpToNextFrame();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 124, column 10>
//   // proto:  void QMovie::frameChanged(int frameNumber);
// _ZN6QMovie12frameChangedEi frameChanged(int)
extern "C"
void
C_ZN6QMovie12frameChangedEi(void *qthis,
int arg1) {
  ((QMovie*)qthis)->frameChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 105, column 9>
//   // proto:  int QMovie::frameCount();
// _ZNK6QMovie10frameCountEv frameCount()
extern "C"
int
C_ZNK6QMovie10frameCountEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->frameCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 112, column 10>
//   // proto:  void QMovie::setScaledSize(const QSize & size);
// _ZN6QMovie13setScaledSizeERK5QSize setScaledSize(const class QSize &)
extern "C"
void
C_ZN6QMovie13setScaledSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QMovie*)qthis)->setScaledSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 83, column 10>
//   // proto:  void QMovie::setDevice(QIODevice * device);
// _ZN6QMovie9setDeviceEP9QIODevice setDevice(class QIODevice *)
extern "C"
void
C_ZN6QMovie9setDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QMovie*)qthis)->setDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 98, column 12>
//   // proto:  QImage QMovie::currentImage();
// _ZNK6QMovie12currentImageEv currentImage()
extern "C"
QImage*
C_ZNK6QMovie12currentImageEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->currentImage();
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 103, column 10>
//   // proto:  bool QMovie::jumpToFrame(int frameNumber);
// _ZN6QMovie11jumpToFrameEi jumpToFrame(int)
extern "C"
bool
C_ZN6QMovie11jumpToFrameEi(void *qthis,
int arg1) {
  auto ret =
  ((QMovie*)qthis)->jumpToFrame(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 118, column 10>
//   // proto:  void QMovie::started();
// _ZN6QMovie7startedEv started()
extern "C"
void
C_ZN6QMovie7startedEv(void *qthis) {
  ((QMovie*)qthis)->started();
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 78, column 14>
//   // proto:  void QMovie::QMovie(const QString & fileName, const QByteArray & format, QObject * parent);
extern "C"
QMovie*
C_ZN6QMovieC2ERK7QStringRK10QByteArrayP7QObject(const QString* arg1,
const QByteArray* arg2,
QObject * arg3) {
  auto ret = new QMovie(*((const QString*)arg1), *((const QByteArray*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 95, column 16>
//   // proto:  QMovie::MovieState QMovie::state();
// _ZNK6QMovie5stateEv state()
extern "C"
QMovie::MovieState
C_ZNK6QMovie5stateEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->state();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 123, column 10>
//   // proto:  void QMovie::finished();
// _ZN6QMovie8finishedEv finished()
extern "C"
void
C_ZN6QMovie8finishedEv(void *qthis) {
  ((QMovie*)qthis)->finished();
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 59, column 5>
//   // proto:  const QMetaObject * QMovie::metaObject();
// _ZNK6QMovie10metaObjectEv metaObject()
extern "C"
void*
C_ZNK6QMovie10metaObjectEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QMovie::~QMovie();
extern "C"
void C_ZN6QMovieD2Ev(void *qthis) {
  delete (QMovie*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 127, column 10>
//   // proto:  void QMovie::start();
// _ZN6QMovie5startEv start()
extern "C"
void
C_ZN6QMovie5startEv(void *qthis) {
  ((QMovie*)qthis)->start();
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 104, column 9>
//   // proto:  int QMovie::loopCount();
// _ZNK6QMovie9loopCountEv loopCount()
extern "C"
int
C_ZNK6QMovie9loopCountEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->loopCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 77, column 14>
//   // proto:  void QMovie::QMovie(QIODevice * device, const QByteArray & format, QObject * parent);
extern "C"
QMovie*
C_ZN6QMovieC2EP9QIODeviceRK10QByteArrayP7QObject(QIODevice * arg1,
const QByteArray* arg2,
QObject * arg3) {
  auto ret = new QMovie(arg1, *((const QByteArray*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 114, column 15>
//   // proto:  QMovie::CacheMode QMovie::cacheMode();
// _ZNK6QMovie9cacheModeEv cacheMode()
extern "C"
QMovie::CacheMode
C_ZNK6QMovie9cacheModeEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->cacheMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 89, column 10>
//   // proto:  void QMovie::setFormat(const QByteArray & format);
// _ZN6QMovie9setFormatERK10QByteArray setFormat(const class QByteArray &)
extern "C"
void
C_ZN6QMovie9setFormatERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QMovie*)qthis)->setFormat(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 119, column 10>
//   // proto:  void QMovie::resized(const QSize & size);
// _ZN6QMovie7resizedERK5QSize resized(const class QSize &)
extern "C"
void
C_ZN6QMovie7resizedERK5QSize(void *qthis,
const QSize* arg1) {
  ((QMovie*)qthis)->resized(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 81, column 30>
//   // proto: static QList<QByteArray> QMovie::supportedFormats();
// _ZN6QMovie16supportedFormatsEv supportedFormats()
extern "C"
QList<QByteArray>*
C_ZN6QMovie16supportedFormatsEv() {
  auto ret =
  QMovie::supportedFormats();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 97, column 11>
//   // proto:  QRect QMovie::frameRect();
// _ZNK6QMovie9frameRectEv frameRect()
extern "C"
QRect*
C_ZNK6QMovie9frameRectEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->frameRect();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 115, column 10>
//   // proto:  void QMovie::setCacheMode(QMovie::CacheMode mode);
// _ZN6QMovie12setCacheModeENS_9CacheModeE setCacheMode(enum QMovie::CacheMode)
extern "C"
void
C_ZN6QMovie12setCacheModeENS_9CacheModeE(void *qthis,
QMovie::CacheMode arg1) {
  ((QMovie*)qthis)->setCacheMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 129, column 10>
//   // proto:  void QMovie::setPaused(bool paused);
// _ZN6QMovie9setPausedEb setPaused(_Bool)
extern "C"
void
C_ZN6QMovie9setPausedEb(void *qthis,
bool arg1) {
  ((QMovie*)qthis)->setPaused(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 111, column 11>
//   // proto:  QSize QMovie::scaledSize();
// _ZN6QMovie10scaledSizeEv scaledSize()
extern "C"
QSize*
C_ZN6QMovie10scaledSizeEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->scaledSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 121, column 10>
//   // proto:  void QMovie::stateChanged(QMovie::MovieState state);
// _ZN6QMovie12stateChangedENS_10MovieStateE stateChanged(class QMovie::MovieState)
extern "C"
void
C_ZN6QMovie12stateChangedENS_10MovieStateE(void *qthis,
QMovie::MovieState* arg1) {
  ((QMovie*)qthis)->stateChanged(*((QMovie::MovieState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 84, column 16>
//   // proto:  QIODevice * QMovie::device();
// _ZNK6QMovie6deviceEv device()
extern "C"
void*
C_ZNK6QMovie6deviceEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->device();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 92, column 10>
//   // proto:  void QMovie::setBackgroundColor(const QColor & color);
// _ZN6QMovie18setBackgroundColorERK6QColor setBackgroundColor(const class QColor &)
extern "C"
void
C_ZN6QMovie18setBackgroundColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QMovie*)qthis)->setBackgroundColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 101, column 10>
//   // proto:  bool QMovie::isValid();
// _ZNK6QMovie7isValidEv isValid()
extern "C"
bool
C_ZNK6QMovie7isValidEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 131, column 10>
//   // proto:  void QMovie::setSpeed(int percentSpeed);
// _ZN6QMovie8setSpeedEi setSpeed(int)
extern "C"
void
C_ZN6QMovie8setSpeedEi(void *qthis,
int arg1) {
  ((QMovie*)qthis)->setSpeed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 130, column 10>
//   // proto:  void QMovie::stop();
// _ZN6QMovie4stopEv stop()
extern "C"
void
C_ZN6QMovie4stopEv(void *qthis) {
  ((QMovie*)qthis)->stop();
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 107, column 9>
//   // proto:  int QMovie::currentFrameNumber();
// _ZNK6QMovie18currentFrameNumberEv currentFrameNumber()
extern "C"
int
C_ZNK6QMovie18currentFrameNumberEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->currentFrameNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 106, column 9>
//   // proto:  int QMovie::nextFrameDelay();
// _ZNK6QMovie14nextFrameDelayEv nextFrameDelay()
extern "C"
int
C_ZNK6QMovie14nextFrameDelayEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->nextFrameDelay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 99, column 13>
//   // proto:  QPixmap QMovie::currentPixmap();
// _ZNK6QMovie13currentPixmapEv currentPixmap()
extern "C"
QPixmap*
C_ZNK6QMovie13currentPixmapEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->currentPixmap();
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 122, column 10>
//   // proto:  void QMovie::error(QImageReader::ImageReaderError error);
// _ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE error(class QImageReader::ImageReaderError)
extern "C"
void
C_ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(void *qthis,
QImageReader::ImageReaderError* arg1) {
  ((QMovie*)qthis)->error(*((QImageReader::ImageReaderError*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 90, column 16>
//   // proto:  QByteArray QMovie::format();
// _ZNK6QMovie6formatEv format()
extern "C"
QByteArray*
C_ZNK6QMovie6formatEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->format();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 87, column 13>
//   // proto:  QString QMovie::fileName();
// _ZNK6QMovie8fileNameEv fileName()
extern "C"
QString*
C_ZNK6QMovie8fileNameEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 120, column 10>
//   // proto:  void QMovie::updated(const QRect & rect);
// _ZN6QMovie7updatedERK5QRect updated(const class QRect &)
extern "C"
void
C_ZN6QMovie7updatedERK5QRect(void *qthis,
const QRect* arg1) {
  ((QMovie*)qthis)->updated(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 93, column 12>
//   // proto:  QColor QMovie::backgroundColor();
// _ZNK6QMovie15backgroundColorEv backgroundColor()
extern "C"
QColor*
C_ZNK6QMovie15backgroundColorEv(void *qthis) {
  auto ret =
  ((QMovie*)qthis)->backgroundColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qmovie.h', line 86, column 10>
//   // proto:  void QMovie::setFileName(const QString & fileName);
// _ZN6QMovie11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN6QMovie11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QMovie*)qthis)->setFileName(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// QMovie_SlotProxy here
class QMovie_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMovie_SlotProxy():QObject(){}

public slots:
  // stateChanged(class QMovie::MovieState)
  void slot_proxy_func__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie::MovieState arg0);
public:
  void (*slot_func__ZN6QMovie12stateChangedENS_10MovieStateE)(void* rsfptr, QMovie::MovieState arg0) = NULL;
public slots:
  // resized(const class QSize &)
  void slot_proxy_func__ZN6QMovie7resizedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN6QMovie7resizedERK5QSize)(void* rsfptr, const QSize & arg0) = NULL;
public slots:
  // frameChanged(int)
  void slot_proxy_func__ZN6QMovie12frameChangedEi(int arg0);
public:
  void (*slot_func__ZN6QMovie12frameChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // finished()
  void slot_proxy_func__ZN6QMovie8finishedEv();
public:
  void (*slot_func__ZN6QMovie8finishedEv)(void* rsfptr) = NULL;
public slots:
  // error(class QImageReader::ImageReaderError)
  void slot_proxy_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QImageReader::ImageReaderError arg0);
public:
  void (*slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE)(void* rsfptr, QImageReader::ImageReaderError arg0) = NULL;
public slots:
  // started()
  void slot_proxy_func__ZN6QMovie7startedEv();
public:
  void (*slot_func__ZN6QMovie7startedEv)(void* rsfptr) = NULL;
public slots:
  // updated(const class QRect &)
  void slot_proxy_func__ZN6QMovie7updatedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN6QMovie7updatedERK5QRect)(void* rsfptr, const QRect & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qmovie.moc"

extern "C" {
  QMovie_SlotProxy* QMovie_SlotProxy_new()
  {
    return new QMovie_SlotProxy();
  }
};

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie::MovieState arg0) {
  if (this->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie12stateChangedENS_10MovieStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMovie_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE = (decltype(that->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE))ffifptr;
  QObject::connect((QMovie*)sender, SIGNAL(stateChanged(class QMovie::MovieState)), that, SLOT(slot_proxy_func__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie::MovieState arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie7resizedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN6QMovie7resizedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie7resizedERK5QSize(this->rsfptr, arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie7resizedERK5QSize(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMovie_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QMovie7resizedERK5QSize = (decltype(that->slot_func__ZN6QMovie7resizedERK5QSize))ffifptr;
  QObject::connect((QMovie*)sender, SIGNAL(resized(const class QSize &)), that, SLOT(slot_proxy_func__ZN6QMovie7resizedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie7resizedERK5QSize(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie12frameChangedEi(int arg0) {
  if (this->slot_func__ZN6QMovie12frameChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie12frameChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie12frameChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMovie_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QMovie12frameChangedEi = (decltype(that->slot_func__ZN6QMovie12frameChangedEi))ffifptr;
  QObject::connect((QMovie*)sender, SIGNAL(frameChanged(int)), that, SLOT(slot_proxy_func__ZN6QMovie12frameChangedEi(int arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie12frameChangedEi(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie8finishedEv() {
  if (this->slot_func__ZN6QMovie8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie8finishedEv(this->rsfptr);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie8finishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMovie_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QMovie8finishedEv = (decltype(that->slot_func__ZN6QMovie8finishedEv))ffifptr;
  QObject::connect((QMovie*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN6QMovie8finishedEv()));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie8finishedEv(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QImageReader::ImageReaderError arg0) {
  if (this->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(this->rsfptr, arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMovie_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE = (decltype(that->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE))ffifptr;
  QObject::connect((QMovie*)sender, SIGNAL(error(class QImageReader::ImageReaderError)), that, SLOT(slot_proxy_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QImageReader::ImageReaderError arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie7startedEv() {
  if (this->slot_func__ZN6QMovie7startedEv != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie7startedEv(this->rsfptr);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie7startedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMovie_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QMovie7startedEv = (decltype(that->slot_func__ZN6QMovie7startedEv))ffifptr;
  QObject::connect((QMovie*)sender, SIGNAL(started()), that, SLOT(slot_proxy_func__ZN6QMovie7startedEv()));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie7startedEv(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie7updatedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN6QMovie7updatedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie7updatedERK5QRect(this->rsfptr, arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie7updatedERK5QRect(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMovie_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN6QMovie7updatedERK5QRect = (decltype(that->slot_func__ZN6QMovie7updatedERK5QRect))ffifptr;
  QObject::connect((QMovie*)sender, SIGNAL(updated(const class QRect &)), that, SLOT(slot_proxy_func__ZN6QMovie7updatedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie7updatedERK5QRect(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

