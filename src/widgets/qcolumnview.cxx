// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qcolumnview.h
// dst-file: /src/widgets/qcolumnview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qcolumnview.h>

extern "C" {

int QColumnView_Class_Size()
{
  return sizeof(QColumnView);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qcolumnview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QColumnView_SlotProxy here
class QColumnView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QColumnView_SlotProxy():QObject(){}

public slots:
  // updatePreviewWidget(const class QModelIndex &)
  void slot_proxy_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcolumnview.moc"

extern "C" {
  QColumnView_SlotProxy* QColumnView_SlotProxy_new()
  {
    return new QColumnView_SlotProxy();
  }
};

void QColumnView_SlotProxy::slot_proxy_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QColumnView_SlotProxy_connect__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QColumnView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex = (decltype(that->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex))ffifptr;
  QObject::connect((QColumnView*)sender, SIGNAL(updatePreviewWidget(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QColumnView_SlotProxy_disconnect__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(QColumnView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

