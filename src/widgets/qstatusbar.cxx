// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qstatusbar.h
// dst-file: /src/widgets/qstatusbar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstatusbar.h>

extern "C" {

int QStatusBar_Class_Size()
{
  return sizeof(QStatusBar);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qstatusbar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QStatusBar_SlotProxy here
class QStatusBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStatusBar_SlotProxy():QObject(){}

public slots:
  // messageChanged(const class QString &)
  void slot_proxy_func__ZN10QStatusBar14messageChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QStatusBar14messageChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qstatusbar.moc"

extern "C" {
  QStatusBar_SlotProxy* QStatusBar_SlotProxy_new()
  {
    return new QStatusBar_SlotProxy();
  }
};

void QStatusBar_SlotProxy::slot_proxy_func__ZN10QStatusBar14messageChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QStatusBar14messageChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QStatusBar14messageChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QStatusBar_SlotProxy_connect__ZN10QStatusBar14messageChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStatusBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QStatusBar14messageChangedERK7QString = (decltype(that->slot_func__ZN10QStatusBar14messageChangedERK7QString))ffifptr;
  QObject::connect((QStatusBar*)sender, SIGNAL(messageChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QStatusBar14messageChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QStatusBar_SlotProxy_disconnect__ZN10QStatusBar14messageChangedERK7QString(QStatusBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

