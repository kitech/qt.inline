// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qactiongroup.h
// dst-file: /src/widgets/qactiongroup.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qactiongroup.h>

extern "C" {

int QActionGroup_Class_Size()
{
  return sizeof(QActionGroup);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qactiongroup_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qactiongroup.h', line 73, column 17>
//   // proto:  void QActionGroup::setDisabled(bool b);
if (false) {
  auto f = [](bool arg1) {
    ((QActionGroup*)0)->setDisabled(arg1);
  };
}
// _ZN12QActionGroup11setDisabledEb setDisabled(_Bool)
} // <= main block end

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
  // hovered(class QAction *)
  void slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN12QActionGroup7hoveredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN12QActionGroup9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qactiongroup.moc"

extern "C" {
  QActionGroup_SlotProxy* QActionGroup_SlotProxy_new()
  {
    return new QActionGroup_SlotProxy();
  }
};

void QActionGroup_SlotProxy::slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN12QActionGroup7hoveredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN12QActionGroup7hoveredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QActionGroup_SlotProxy_connect__ZN12QActionGroup7hoveredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QActionGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QActionGroup7hoveredEP7QAction = (decltype(that->slot_func__ZN12QActionGroup7hoveredEP7QAction))ffifptr;
  QObject::connect((QActionGroup*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN12QActionGroup7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QActionGroup_SlotProxy_disconnect__ZN12QActionGroup7hoveredEP7QAction(QActionGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QActionGroup_SlotProxy::slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN12QActionGroup9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN12QActionGroup9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QActionGroup_SlotProxy_connect__ZN12QActionGroup9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QActionGroup_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QActionGroup9triggeredEP7QAction = (decltype(that->slot_func__ZN12QActionGroup9triggeredEP7QAction))ffifptr;
  QObject::connect((QActionGroup*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN12QActionGroup9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QActionGroup_SlotProxy_disconnect__ZN12QActionGroup9triggeredEP7QAction(QActionGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

