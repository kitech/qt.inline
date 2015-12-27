// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qtoolbox.h
// dst-file: /src/widgets/qtoolbox.cxx
//

// header block begin =>
#include <qtoolbox.h>

extern "C" {

int QToolBox_Class_Size()
{
  return sizeof(QToolBox);
}

// ~QToolBox()
void dedtor_ZN8QToolBoxD0Ev(QToolBox* that)
{
  QToolBox* rthis = (QToolBox*)that;
  delete rthis;
}

// QToolBox(class QWidget *, Qt::WindowFlags)
QToolBox* dector_ZN8QToolBoxC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QToolBox) == 32, "tyszerr");
  QToolBox* rthis = new QToolBox(parent, f);
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
// QToolBox_SlotProxy here
class QToolBox_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QToolBox_SlotProxy():QObject(){}

public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN8QToolBox14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN8QToolBox14currentChangedEi)(int arg0) = NULL;
};
#include "src/widgets/qtoolbox.moc"

extern "C" {
  QToolBox_SlotProxy* QToolBox_SlotProxy_new()
  {
    return new QToolBox_SlotProxy();
  }
};

void QToolBox_SlotProxy::slot_proxy_func__ZN8QToolBox14currentChangedEi(int arg0) {
  if (this->slot_func__ZN8QToolBox14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBox14currentChangedEi(arg0);
  }
}
extern "C"
void* QToolBox_SlotProxy_connect__ZN8QToolBox14currentChangedEi(QObject* sender, void* fptr){
  auto that = new QToolBox_SlotProxy();
  that->slot_func__ZN8QToolBox14currentChangedEi = (decltype(that->slot_func__ZN8QToolBox14currentChangedEi))fptr;
  QObject::connect((QToolBox*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN8QToolBox14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QToolBox_SlotProxy_disconnect__ZN8QToolBox14currentChangedEi(QToolBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

