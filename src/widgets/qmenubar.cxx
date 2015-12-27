// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qmenubar.h
// dst-file: /src/widgets/qmenubar.cxx
//

// header block begin =>
#include <qmenubar.h>

extern "C" {

int QMenuBar_Class_Size()
{
  return sizeof(QMenuBar);
}

// ~QMenuBar()
void dedtor_ZN8QMenuBarD0Ev(QMenuBar* that)
{
  QMenuBar* rthis = (QMenuBar*)that;
  delete rthis;
}

// QMenuBar(class QWidget *)
QMenuBar* dector_ZN8QMenuBarC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QMenuBar) == 32, "tyszerr");
  QMenuBar* rthis = new QMenuBar(parent);
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
  void (*slot_func__ZN8QMenuBar9triggeredEP7QAction)(QAction * arg0) = NULL;
public slots:
  // hovered(class QAction *)
  void slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN8QMenuBar7hoveredEP7QAction)(QAction * arg0) = NULL;
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
    this->slot_func__ZN8QMenuBar9triggeredEP7QAction(arg0);
  }
}
extern "C"
void* QMenuBar_SlotProxy_connect__ZN8QMenuBar9triggeredEP7QAction(QObject* sender, void* fptr){
  auto that = new QMenuBar_SlotProxy();
  that->slot_func__ZN8QMenuBar9triggeredEP7QAction = (decltype(that->slot_func__ZN8QMenuBar9triggeredEP7QAction))fptr;
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
    this->slot_func__ZN8QMenuBar7hoveredEP7QAction(arg0);
  }
}
extern "C"
void* QMenuBar_SlotProxy_connect__ZN8QMenuBar7hoveredEP7QAction(QObject* sender, void* fptr){
  auto that = new QMenuBar_SlotProxy();
  that->slot_func__ZN8QMenuBar7hoveredEP7QAction = (decltype(that->slot_func__ZN8QMenuBar7hoveredEP7QAction))fptr;
  QObject::connect((QMenuBar*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenuBar_SlotProxy_disconnect__ZN8QMenuBar7hoveredEP7QAction(QMenuBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

