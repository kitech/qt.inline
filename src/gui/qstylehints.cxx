// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtGui/qstylehints.h
// dst-file: /src/gui/qstylehints.cxx
//

// header block begin =>
#include <qstylehints.h>

extern "C" {

int QStyleHints_Class_Size()
{
  return sizeof(QStyleHints);
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
// QStyleHints_SlotProxy here
class QStyleHints_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStyleHints_SlotProxy():QObject(){}

public slots:
  // mouseDoubleClickIntervalChanged(int)
  void slot_proxy_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // startDragTimeChanged(int)
  void slot_proxy_func__ZN11QStyleHints20startDragTimeChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints20startDragTimeChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // keyboardInputIntervalChanged(int)
  void slot_proxy_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // cursorFlashTimeChanged(int)
  void slot_proxy_func__ZN11QStyleHints22cursorFlashTimeChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // startDragDistanceChanged(int)
  void slot_proxy_func__ZN11QStyleHints24startDragDistanceChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints24startDragDistanceChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qstylehints.moc"

extern "C" {
  QStyleHints_SlotProxy* QStyleHints_SlotProxy_new()
  {
    return new QStyleHints_SlotProxy();
  }
};

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi = (decltype(that->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(mouseDoubleClickIntervalChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints20startDragTimeChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints20startDragTimeChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints20startDragTimeChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints20startDragTimeChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints20startDragTimeChangedEi = (decltype(that->slot_func__ZN11QStyleHints20startDragTimeChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(startDragTimeChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints20startDragTimeChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints20startDragTimeChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints28keyboardInputIntervalChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi = (decltype(that->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(keyboardInputIntervalChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints28keyboardInputIntervalChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints22cursorFlashTimeChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints22cursorFlashTimeChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi = (decltype(that->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(cursorFlashTimeChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints22cursorFlashTimeChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints22cursorFlashTimeChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints24startDragDistanceChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints24startDragDistanceChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints24startDragDistanceChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints24startDragDistanceChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints24startDragDistanceChangedEi = (decltype(that->slot_func__ZN11QStyleHints24startDragDistanceChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(startDragDistanceChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints24startDragDistanceChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints24startDragDistanceChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

