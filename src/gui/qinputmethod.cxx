// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qinputmethod.h
// dst-file: /src/gui/qinputmethod.cxx
//

// header block begin =>
#include <qinputmethod.h>

extern "C" {

int QInputMethod_Class_Size()
{
  return sizeof(QInputMethod);
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
// QInputMethod_SlotProxy here
class QInputMethod_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QInputMethod_SlotProxy():QObject(){}

public slots:
  // cursorRectangleChanged()
  void slot_proxy_func__ZN12QInputMethod22cursorRectangleChangedEv();
public:
  void (*slot_func__ZN12QInputMethod22cursorRectangleChangedEv)(void* rsfptr) = NULL;
public slots:
  // localeChanged()
  void slot_proxy_func__ZN12QInputMethod13localeChangedEv();
public:
  void (*slot_func__ZN12QInputMethod13localeChangedEv)(void* rsfptr) = NULL;
public slots:
  // visibleChanged()
  void slot_proxy_func__ZN12QInputMethod14visibleChangedEv();
public:
  void (*slot_func__ZN12QInputMethod14visibleChangedEv)(void* rsfptr) = NULL;
public slots:
  // keyboardRectangleChanged()
  void slot_proxy_func__ZN12QInputMethod24keyboardRectangleChangedEv();
public:
  void (*slot_func__ZN12QInputMethod24keyboardRectangleChangedEv)(void* rsfptr) = NULL;
public slots:
  // inputDirectionChanged(Qt::LayoutDirection)
  void slot_proxy_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0);
public:
  void (*slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE)(void* rsfptr, Qt::LayoutDirection arg0) = NULL;
public slots:
  // animatingChanged()
  void slot_proxy_func__ZN12QInputMethod16animatingChangedEv();
public:
  void (*slot_func__ZN12QInputMethod16animatingChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qinputmethod.moc"

extern "C" {
  QInputMethod_SlotProxy* QInputMethod_SlotProxy_new()
  {
    return new QInputMethod_SlotProxy();
  }
};

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod22cursorRectangleChangedEv() {
  if (this->slot_func__ZN12QInputMethod22cursorRectangleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod22cursorRectangleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod22cursorRectangleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod22cursorRectangleChangedEv = (decltype(that->slot_func__ZN12QInputMethod22cursorRectangleChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(cursorRectangleChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod22cursorRectangleChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod22cursorRectangleChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod13localeChangedEv() {
  if (this->slot_func__ZN12QInputMethod13localeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod13localeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod13localeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod13localeChangedEv = (decltype(that->slot_func__ZN12QInputMethod13localeChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(localeChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod13localeChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod13localeChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod14visibleChangedEv() {
  if (this->slot_func__ZN12QInputMethod14visibleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod14visibleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod14visibleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod14visibleChangedEv = (decltype(that->slot_func__ZN12QInputMethod14visibleChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(visibleChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod14visibleChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod14visibleChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod24keyboardRectangleChangedEv() {
  if (this->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod24keyboardRectangleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv = (decltype(that->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(keyboardRectangleChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod24keyboardRectangleChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod24keyboardRectangleChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0) {
  if (this->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE = (decltype(that->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(inputDirectionChanged(Qt::LayoutDirection)), that, SLOT(slot_proxy_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0)));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod16animatingChangedEv() {
  if (this->slot_func__ZN12QInputMethod16animatingChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod16animatingChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod16animatingChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod16animatingChangedEv = (decltype(that->slot_func__ZN12QInputMethod16animatingChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(animatingChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod16animatingChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod16animatingChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

