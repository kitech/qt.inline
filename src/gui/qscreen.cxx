// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qscreen.h
// dst-file: /src/gui/qscreen.cxx
//

// header block begin =>
#include <qscreen.h>

extern "C" {

int QScreen_Class_Size()
{
  return sizeof(QScreen);
}

// ~QScreen()
void dedtor_ZN7QScreenD0Ev(QScreen* that)
{
  QScreen* rthis = (QScreen*)that;
  delete rthis;
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
// QScreen_SlotProxy here
class QScreen_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QScreen_SlotProxy():QObject(){}

public slots:
  // primaryOrientationChanged(Qt::ScreenOrientation)
  void slot_proxy_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0);
public:
  void (*slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE)(void* rsfptr, Qt::ScreenOrientation arg0) = NULL;
public slots:
  // orientationChanged(Qt::ScreenOrientation)
  void slot_proxy_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0);
public:
  void (*slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE)(void* rsfptr, Qt::ScreenOrientation arg0) = NULL;
public slots:
  // logicalDotsPerInchChanged(qreal)
  void slot_proxy_func__ZN7QScreen25logicalDotsPerInchChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QScreen25logicalDotsPerInchChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // availableGeometryChanged(const class QRect &)
  void slot_proxy_func__ZN7QScreen24availableGeometryChangedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN7QScreen24availableGeometryChangedERK5QRect)(void* rsfptr, const QRect & arg0) = NULL;
public slots:
  // geometryChanged(const class QRect &)
  void slot_proxy_func__ZN7QScreen15geometryChangedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN7QScreen15geometryChangedERK5QRect)(void* rsfptr, const QRect & arg0) = NULL;
public slots:
  // physicalDotsPerInchChanged(qreal)
  void slot_proxy_func__ZN7QScreen26physicalDotsPerInchChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QScreen26physicalDotsPerInchChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // virtualGeometryChanged(const class QRect &)
  void slot_proxy_func__ZN7QScreen22virtualGeometryChangedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect)(void* rsfptr, const QRect & arg0) = NULL;
public slots:
  // refreshRateChanged(qreal)
  void slot_proxy_func__ZN7QScreen18refreshRateChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QScreen18refreshRateChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // physicalSizeChanged(const class QSizeF &)
  void slot_proxy_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(const QSizeF & arg0);
public:
  void (*slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF)(void* rsfptr, const QSizeF & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qscreen.moc"

extern "C" {
  QScreen_SlotProxy* QScreen_SlotProxy_new()
  {
    return new QScreen_SlotProxy();
  }
};

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0) {
  if (this->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE = (decltype(that->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(primaryOrientationChanged(Qt::ScreenOrientation)), that, SLOT(slot_proxy_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0) {
  if (this->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE = (decltype(that->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(orientationChanged(Qt::ScreenOrientation)), that, SLOT(slot_proxy_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen25logicalDotsPerInchChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen25logicalDotsPerInchChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd = (decltype(that->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(logicalDotsPerInchChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QScreen25logicalDotsPerInchChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen25logicalDotsPerInchChangedEd(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen24availableGeometryChangedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen24availableGeometryChangedERK5QRect(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect = (decltype(that->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(availableGeometryChanged(const class QRect &)), that, SLOT(slot_proxy_func__ZN7QScreen24availableGeometryChangedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen24availableGeometryChangedERK5QRect(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen15geometryChangedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN7QScreen15geometryChangedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen15geometryChangedERK5QRect(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen15geometryChangedERK5QRect(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen15geometryChangedERK5QRect = (decltype(that->slot_func__ZN7QScreen15geometryChangedERK5QRect))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(geometryChanged(const class QRect &)), that, SLOT(slot_proxy_func__ZN7QScreen15geometryChangedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen15geometryChangedERK5QRect(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen26physicalDotsPerInchChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen26physicalDotsPerInchChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd = (decltype(that->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(physicalDotsPerInchChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QScreen26physicalDotsPerInchChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen26physicalDotsPerInchChangedEd(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen22virtualGeometryChangedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen22virtualGeometryChangedERK5QRect(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect = (decltype(that->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(virtualGeometryChanged(const class QRect &)), that, SLOT(slot_proxy_func__ZN7QScreen22virtualGeometryChangedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen22virtualGeometryChangedERK5QRect(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen18refreshRateChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QScreen18refreshRateChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen18refreshRateChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen18refreshRateChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen18refreshRateChangedEd = (decltype(that->slot_func__ZN7QScreen18refreshRateChangedEd))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(refreshRateChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QScreen18refreshRateChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen18refreshRateChangedEd(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(const QSizeF & arg0) {
  if (this->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen19physicalSizeChangedERK6QSizeF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF = (decltype(that->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(physicalSizeChanged(const class QSizeF &)), that, SLOT(slot_proxy_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(const QSizeF & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen19physicalSizeChangedERK6QSizeF(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

