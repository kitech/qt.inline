// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qsplitter.h
// dst-file: /src/widgets/qsplitter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qsplitter.h>

extern "C" {

int QSplitter_Class_Size()
{
  return sizeof(QSplitter);
}

int QSplitterHandle_Class_Size()
{
  return sizeof(QSplitterHandle);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsplitter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSplitter_SlotProxy here
class QSplitter_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSplitter_SlotProxy():QObject(){}

public slots:
  // splitterMoved(int, int)
  void slot_proxy_func__ZN9QSplitter13splitterMovedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN9QSplitter13splitterMovedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QSplitter_SlotProxy* QSplitter_SlotProxy_new()
  {
    return new QSplitter_SlotProxy();
  }
};

void QSplitter_SlotProxy::slot_proxy_func__ZN9QSplitter13splitterMovedEii(int arg0, int arg1) {
  if (this->slot_func__ZN9QSplitter13splitterMovedEii != NULL) {
    // do smth...
    this->slot_func__ZN9QSplitter13splitterMovedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QSplitter_SlotProxy_connect__ZN9QSplitter13splitterMovedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSplitter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QSplitter13splitterMovedEii = (decltype(that->slot_func__ZN9QSplitter13splitterMovedEii))ffifptr;
  QObject::connect((QSplitter*)sender, SIGNAL(splitterMoved(int, int)), that, SLOT(slot_proxy_func__ZN9QSplitter13splitterMovedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QSplitter_SlotProxy_disconnect__ZN9QSplitter13splitterMovedEii(QSplitter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QSplitterHandle_SlotProxy here
class QSplitterHandle_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSplitterHandle_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qsplitter.moc"

extern "C" {
  QSplitterHandle_SlotProxy* QSplitterHandle_SlotProxy_new()
  {
    return new QSplitterHandle_SlotProxy();
  }
};

// <= body block end

