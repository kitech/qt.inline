// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qmenubar.h
// dst-file: /src/widgets/qmenubar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qmenubar.h>

extern "C" {

int QMenuBar_Class_Size()
{
  return sizeof(QMenuBar);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qmenubar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QMenuBar_SlotProxy here
class QMenuBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMenuBar_SlotProxy():QObject(){}

public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN8QMenuBar9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN8QMenuBar9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // hovered(class QAction *)
  void slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN8QMenuBar7hoveredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmenubar.moc"

extern "C" {
  QMenuBar_SlotProxy* QMenuBar_SlotProxy_new()
  {
    return new QMenuBar_SlotProxy();
  }
};

void QMenuBar_SlotProxy::slot_proxy_func__ZN8QMenuBar9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN8QMenuBar9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN8QMenuBar9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenuBar_SlotProxy_connect__ZN8QMenuBar9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenuBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QMenuBar9triggeredEP7QAction = (decltype(that->slot_func__ZN8QMenuBar9triggeredEP7QAction))ffifptr;
  QObject::connect((QMenuBar*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN8QMenuBar9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenuBar_SlotProxy_disconnect__ZN8QMenuBar9triggeredEP7QAction(QMenuBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenuBar_SlotProxy::slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN8QMenuBar7hoveredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN8QMenuBar7hoveredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenuBar_SlotProxy_connect__ZN8QMenuBar7hoveredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenuBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QMenuBar7hoveredEP7QAction = (decltype(that->slot_func__ZN8QMenuBar7hoveredEP7QAction))ffifptr;
  QObject::connect((QMenuBar*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenuBar_SlotProxy_disconnect__ZN8QMenuBar7hoveredEP7QAction(QMenuBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

