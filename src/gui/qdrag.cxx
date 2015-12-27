// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtGui/qdrag.h
// dst-file: /src/gui/qdrag.cxx
//

// header block begin =>
#include <qdrag.h>

extern "C" {

int QDrag_Class_Size()
{
  return sizeof(QDrag);
}

// QDrag(class QObject *)
QDrag* dector_ZN5QDragC1EP7QObject(QObject * dragSource)
{
  // static_assert(sizeof(QDrag) == 32, "tyszerr");
  QDrag* rthis = new QDrag(dragSource);
  return rthis;
}

// ~QDrag()
void dedtor_ZN5QDragD0Ev(QDrag* that)
{
  QDrag* rthis = (QDrag*)that;
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
// QDrag_SlotProxy here
class QDrag_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDrag_SlotProxy():QObject(){}

public slots:
  // actionChanged(Qt::DropAction)
  void slot_proxy_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(Qt::DropAction arg0);
public:
  void (*slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE)(Qt::DropAction arg0) = NULL;
public slots:
  // targetChanged(class QObject *)
  void slot_proxy_func__ZN5QDrag13targetChangedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN5QDrag13targetChangedEP7QObject)(QObject * arg0) = NULL;
};
#include "src/gui/qdrag.moc"

extern "C" {
  QDrag_SlotProxy* QDrag_SlotProxy_new()
  {
    return new QDrag_SlotProxy();
  }
};

void QDrag_SlotProxy::slot_proxy_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(Qt::DropAction arg0) {
  if (this->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE != NULL) {
    // do smth...
    this->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(arg0);
  }
}
extern "C"
void* QDrag_SlotProxy_connect__ZN5QDrag13actionChangedEN2Qt10DropActionE(QObject* sender, void* fptr){
  auto that = new QDrag_SlotProxy();
  that->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE = (decltype(that->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE))fptr;
  QObject::connect((QDrag*)sender, SIGNAL(actionChanged(Qt::DropAction)), that, SLOT(slot_proxy_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(Qt::DropAction arg0)));
  return that;
}
extern "C"
void QDrag_SlotProxy_disconnect__ZN5QDrag13actionChangedEN2Qt10DropActionE(QDrag_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDrag_SlotProxy::slot_proxy_func__ZN5QDrag13targetChangedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN5QDrag13targetChangedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN5QDrag13targetChangedEP7QObject(arg0);
  }
}
extern "C"
void* QDrag_SlotProxy_connect__ZN5QDrag13targetChangedEP7QObject(QObject* sender, void* fptr){
  auto that = new QDrag_SlotProxy();
  that->slot_func__ZN5QDrag13targetChangedEP7QObject = (decltype(that->slot_func__ZN5QDrag13targetChangedEP7QObject))fptr;
  QObject::connect((QDrag*)sender, SIGNAL(targetChanged(class QObject *)), that, SLOT(slot_proxy_func__ZN5QDrag13targetChangedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QDrag_SlotProxy_disconnect__ZN5QDrag13targetChangedEP7QObject(QDrag_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

