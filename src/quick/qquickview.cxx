// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qquickview.h
// dst-file: /src/quick/qquickview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickview.h>

extern "C" {

int QQuickView_Class_Size()
{
  return sizeof(QQuickView);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QQuickView_SlotProxy here
class QQuickView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickView_SlotProxy():QObject(){}

public slots:
  // statusChanged(class QQuickView::Status)
  void slot_proxy_func__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView::Status arg0);
public:
  void (*slot_func__ZN10QQuickView13statusChangedENS_6StatusE)(void* rsfptr, QQuickView::Status arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickview.moc"

extern "C" {
  QQuickView_SlotProxy* QQuickView_SlotProxy_new()
  {
    return new QQuickView_SlotProxy();
  }
};

void QQuickView_SlotProxy::slot_proxy_func__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView::Status arg0) {
  if (this->slot_func__ZN10QQuickView13statusChangedENS_6StatusE != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickView13statusChangedENS_6StatusE(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickView_SlotProxy_connect__ZN10QQuickView13statusChangedENS_6StatusE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickView13statusChangedENS_6StatusE = (decltype(that->slot_func__ZN10QQuickView13statusChangedENS_6StatusE))ffifptr;
  QObject::connect((QQuickView*)sender, SIGNAL(statusChanged(class QQuickView::Status)), that, SLOT(slot_proxy_func__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView::Status arg0)));
  return that;
}
extern "C"
void QQuickView_SlotProxy_disconnect__ZN10QQuickView13statusChangedENS_6StatusE(QQuickView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

