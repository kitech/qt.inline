// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qmovie.h
// dst-file: /src/gui/qmovie.cxx
//

// header block begin =>
#include <qmovie.h>

extern "C" {

int QMovie_Class_Size()
{
  return sizeof(QMovie);
}

// QMovie(class QObject *)
QMovie* dector_ZN6QMovieC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QMovie) == 32, "tyszerr");
  QMovie* rthis = new QMovie(parent);
  return rthis;
}

// QMovie(const class QString &, const class QByteArray &, class QObject *)
QMovie* dector_ZN6QMovieC1ERK7QStringRK10QByteArrayP7QObject(const QString & fileName, const QByteArray & format, QObject * parent)
{
  // static_assert(sizeof(QMovie) == 32, "tyszerr");
  QMovie* rthis = new QMovie(fileName, format, parent);
  return rthis;
}

// ~QMovie()
void dedtor_ZN6QMovieD0Ev(QMovie* that)
{
  QMovie* rthis = (QMovie*)that;
  delete rthis;
}

// QMovie(class QIODevice *, const class QByteArray &, class QObject *)
QMovie* dector_ZN6QMovieC1EP9QIODeviceRK10QByteArrayP7QObject(QIODevice * device, const QByteArray & format, QObject * parent)
{
  // static_assert(sizeof(QMovie) == 32, "tyszerr");
  QMovie* rthis = new QMovie(device, format, parent);
  return rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QMovie_SlotProxy here
class QMovie_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QMovie_SlotProxy():QObject(){}

public slots:
  // started()
  void slot_proxy_func__ZN6QMovie7startedEv();
public:
  void (*slot_func__ZN6QMovie7startedEv)() = NULL;
public slots:
  // resized(const class QSize &)
  void slot_proxy_func__ZN6QMovie7resizedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN6QMovie7resizedERK5QSize)(const QSize & arg0) = NULL;
public slots:
  // updated(const class QRect &)
  void slot_proxy_func__ZN6QMovie7updatedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN6QMovie7updatedERK5QRect)(const QRect & arg0) = NULL;
public slots:
  // stateChanged(class QMovie::MovieState)
  void slot_proxy_func__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie::MovieState arg0);
public:
  void (*slot_func__ZN6QMovie12stateChangedENS_10MovieStateE)(QMovie::MovieState arg0) = NULL;
public slots:
  // error(class QImageReader::ImageReaderError)
  void slot_proxy_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QImageReader::ImageReaderError arg0);
public:
  void (*slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE)(QImageReader::ImageReaderError arg0) = NULL;
public slots:
  // finished()
  void slot_proxy_func__ZN6QMovie8finishedEv();
public:
  void (*slot_func__ZN6QMovie8finishedEv)() = NULL;
public slots:
  // frameChanged(int)
  void slot_proxy_func__ZN6QMovie12frameChangedEi(int arg0);
public:
  void (*slot_func__ZN6QMovie12frameChangedEi)(int arg0) = NULL;
};
#include "src/gui/qmovie.moc"

extern "C" {
  QMovie_SlotProxy* QMovie_SlotProxy_new()
  {
    return new QMovie_SlotProxy();
  }
};

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie7startedEv() {
  if (this->slot_func__ZN6QMovie7startedEv != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie7startedEv();
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie7startedEv(QObject* sender, void* fptr){
  auto that = new QMovie_SlotProxy();
  that->slot_func__ZN6QMovie7startedEv = (decltype(that->slot_func__ZN6QMovie7startedEv))fptr;
  QObject::connect((QMovie*)sender, SIGNAL(started()), that, SLOT(slot_proxy_func__ZN6QMovie7startedEv()));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie7startedEv(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie7resizedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN6QMovie7resizedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie7resizedERK5QSize(arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie7resizedERK5QSize(QObject* sender, void* fptr){
  auto that = new QMovie_SlotProxy();
  that->slot_func__ZN6QMovie7resizedERK5QSize = (decltype(that->slot_func__ZN6QMovie7resizedERK5QSize))fptr;
  QObject::connect((QMovie*)sender, SIGNAL(resized(const class QSize &)), that, SLOT(slot_proxy_func__ZN6QMovie7resizedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie7resizedERK5QSize(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie7updatedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN6QMovie7updatedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie7updatedERK5QRect(arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie7updatedERK5QRect(QObject* sender, void* fptr){
  auto that = new QMovie_SlotProxy();
  that->slot_func__ZN6QMovie7updatedERK5QRect = (decltype(that->slot_func__ZN6QMovie7updatedERK5QRect))fptr;
  QObject::connect((QMovie*)sender, SIGNAL(updated(const class QRect &)), that, SLOT(slot_proxy_func__ZN6QMovie7updatedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie7updatedERK5QRect(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie::MovieState arg0) {
  if (this->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE(arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie12stateChangedENS_10MovieStateE(QObject* sender, void* fptr){
  auto that = new QMovie_SlotProxy();
  that->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE = (decltype(that->slot_func__ZN6QMovie12stateChangedENS_10MovieStateE))fptr;
  QObject::connect((QMovie*)sender, SIGNAL(stateChanged(class QMovie::MovieState)), that, SLOT(slot_proxy_func__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie::MovieState arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie12stateChangedENS_10MovieStateE(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QImageReader::ImageReaderError arg0) {
  if (this->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QObject* sender, void* fptr){
  auto that = new QMovie_SlotProxy();
  that->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE = (decltype(that->slot_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE))fptr;
  QObject::connect((QMovie*)sender, SIGNAL(error(class QImageReader::ImageReaderError)), that, SLOT(slot_proxy_func__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QImageReader::ImageReaderError arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie5errorEN12QImageReader16ImageReaderErrorE(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie8finishedEv() {
  if (this->slot_func__ZN6QMovie8finishedEv != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie8finishedEv();
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie8finishedEv(QObject* sender, void* fptr){
  auto that = new QMovie_SlotProxy();
  that->slot_func__ZN6QMovie8finishedEv = (decltype(that->slot_func__ZN6QMovie8finishedEv))fptr;
  QObject::connect((QMovie*)sender, SIGNAL(finished()), that, SLOT(slot_proxy_func__ZN6QMovie8finishedEv()));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie8finishedEv(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMovie_SlotProxy::slot_proxy_func__ZN6QMovie12frameChangedEi(int arg0) {
  if (this->slot_func__ZN6QMovie12frameChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN6QMovie12frameChangedEi(arg0);
  }
}
extern "C"
void* QMovie_SlotProxy_connect__ZN6QMovie12frameChangedEi(QObject* sender, void* fptr){
  auto that = new QMovie_SlotProxy();
  that->slot_func__ZN6QMovie12frameChangedEi = (decltype(that->slot_func__ZN6QMovie12frameChangedEi))fptr;
  QObject::connect((QMovie*)sender, SIGNAL(frameChanged(int)), that, SLOT(slot_proxy_func__ZN6QMovie12frameChangedEi(int arg0)));
  return that;
}
extern "C"
void QMovie_SlotProxy_disconnect__ZN6QMovie12frameChangedEi(QMovie_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

