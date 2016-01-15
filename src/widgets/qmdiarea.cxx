// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qmdiarea.h
// dst-file: /src/widgets/qmdiarea.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qmdiarea.h>

extern "C" {

int QMdiArea_Class_Size()
{
  return sizeof(QMdiArea);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qmdiarea_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QMdiArea_SlotProxy here
class QMdiArea_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMdiArea_SlotProxy():QObject(){}

public slots:
  // subWindowActivated(class QMdiSubWindow *)
  void slot_proxy_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiSubWindow * arg0);
public:
  void (*slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow)(void* rsfptr, QMdiSubWindow * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmdiarea.moc"

extern "C" {
  QMdiArea_SlotProxy* QMdiArea_SlotProxy_new()
  {
    return new QMdiArea_SlotProxy();
  }
};

void QMdiArea_SlotProxy::slot_proxy_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiSubWindow * arg0) {
  if (this->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow != NULL) {
    // do smth...
    this->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(this->rsfptr, arg0);
  }
}
extern "C"
void* QMdiArea_SlotProxy_connect__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMdiArea_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow = (decltype(that->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow))ffifptr;
  QObject::connect((QMdiArea*)sender, SIGNAL(subWindowActivated(class QMdiSubWindow *)), that, SLOT(slot_proxy_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiSubWindow * arg0)));
  return that;
}
extern "C"
void QMdiArea_SlotProxy_disconnect__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiArea_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

