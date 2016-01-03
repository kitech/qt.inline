// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qtoolbutton.h
// dst-file: /src/widgets/qtoolbutton.cxx
//

// header block begin =>
#include <qtoolbutton.h>

extern "C" {

int QToolButton_Class_Size()
{
  return sizeof(QToolButton);
}

// ~QToolButton()
void dedtor_ZN11QToolButtonD0Ev(QToolButton* that)
{
  QToolButton* rthis = (QToolButton*)that;
  delete rthis;
}

// QToolButton(class QWidget *)
QToolButton* dector_ZN11QToolButtonC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QToolButton) == 32, "tyszerr");
  QToolButton* rthis = new QToolButton(parent);
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
// QToolButton_SlotProxy here
class QToolButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QToolButton_SlotProxy():QObject(){}

public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN11QToolButton9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN11QToolButton9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtoolbutton.moc"

extern "C" {
  QToolButton_SlotProxy* QToolButton_SlotProxy_new()
  {
    return new QToolButton_SlotProxy();
  }
};

void QToolButton_SlotProxy::slot_proxy_func__ZN11QToolButton9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN11QToolButton9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN11QToolButton9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolButton_SlotProxy_connect__ZN11QToolButton9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolButton_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QToolButton9triggeredEP7QAction = (decltype(that->slot_func__ZN11QToolButton9triggeredEP7QAction))ffifptr;
  QObject::connect((QToolButton*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN11QToolButton9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QToolButton_SlotProxy_disconnect__ZN11QToolButton9triggeredEP7QAction(QToolButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

