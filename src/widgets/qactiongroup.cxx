// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qactiongroup.h
// dst-file: /src/widgets/qactiongroup.cxx
//

// header block begin =>
#include <qactiongroup.h>

extern "C" {

int QActionGroup_Class_Size()
{
  return sizeof(QActionGroup);
}

// QActionGroup(class QObject *)
QActionGroup* dector_ZN12QActionGroupC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QActionGroup) == 32, "tyszerr");
  QActionGroup* rthis = new QActionGroup(parent);
  return rthis;
}

// ~QActionGroup()
void dedtor_ZN12QActionGroupD0Ev(QActionGroup* that)
{
  QActionGroup* rthis = (QActionGroup*)that;
  delete rthis;
}

  // proto:  void QActionGroup::setDisabled(bool b);
void demth_ZN12QActionGroup11setDisabledEb(void *that, bool b)
{
  QActionGroup *cthat = (QActionGroup *)that;
   cthat->setDisabled(b);
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
// QActionGroup_SlotProxy here
class QActionGroup_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QActionGroup_SlotProxy():QObject(){}

public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN12QActionGroup9triggeredEP7QAction)(QAction * arg0) = NULL;
public slots:
  // hovered(class QAction *)
  void slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN12QActionGroup7hoveredEP7QAction)(QAction * arg0) = NULL;
};
#include "src/widgets/qactiongroup.moc"

extern "C" {
  QActionGroup_SlotProxy* QActionGroup_SlotProxy_new()
  {
    return new QActionGroup_SlotProxy();
  }
};

void QActionGroup_SlotProxy::slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN12QActionGroup9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN12QActionGroup9triggeredEP7QAction(arg0);
  }
}
extern "C"
void* QActionGroup_SlotProxy_connect__ZN12QActionGroup9triggeredEP7QAction(QObject* sender, void* fptr){
  auto that = new QActionGroup_SlotProxy();
  that->slot_func__ZN12QActionGroup9triggeredEP7QAction = (decltype(that->slot_func__ZN12QActionGroup9triggeredEP7QAction))fptr;
  QObject::connect((QActionGroup*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QActionGroup_SlotProxy_disconnect__ZN12QActionGroup9triggeredEP7QAction(QActionGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QActionGroup_SlotProxy::slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN12QActionGroup7hoveredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN12QActionGroup7hoveredEP7QAction(arg0);
  }
}
extern "C"
void* QActionGroup_SlotProxy_connect__ZN12QActionGroup7hoveredEP7QAction(QObject* sender, void* fptr){
  auto that = new QActionGroup_SlotProxy();
  that->slot_func__ZN12QActionGroup7hoveredEP7QAction = (decltype(that->slot_func__ZN12QActionGroup7hoveredEP7QAction))fptr;
  QObject::connect((QActionGroup*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QActionGroup_SlotProxy_disconnect__ZN12QActionGroup7hoveredEP7QAction(QActionGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

