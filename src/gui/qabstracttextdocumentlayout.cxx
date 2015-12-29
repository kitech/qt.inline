// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qabstracttextdocumentlayout.h
// dst-file: /src/gui/qabstracttextdocumentlayout.cxx
//

// header block begin =>
#include <qabstracttextdocumentlayout.h>

extern "C" {

int QTextObjectInterface_Class_Size()
{
  return sizeof(QTextObjectInterface);
}

int QAbstractTextDocumentLayout_Class_Size()
{
  return sizeof(QAbstractTextDocumentLayout);
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
// QAbstractTextDocumentLayout_SlotProxy here
class QAbstractTextDocumentLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractTextDocumentLayout_SlotProxy():QObject(){}

public slots:
  // pageCountChanged(int)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(int arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // update(const class QRectF &)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(const QRectF & arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF)(void* rsfptr, const QRectF & arg0) = NULL;
public slots:
  // documentSizeChanged(const class QSizeF &)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(const QSizeF & arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF)(void* rsfptr, const QSizeF & arg0) = NULL;
public slots:
  // updateBlock(const class QTextBlock &)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(const QTextBlock & arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock)(void* rsfptr, const QTextBlock & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qabstracttextdocumentlayout.moc"

extern "C" {
  QAbstractTextDocumentLayout_SlotProxy* QAbstractTextDocumentLayout_SlotProxy_new()
  {
    return new QAbstractTextDocumentLayout_SlotProxy();
  }
};

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(int arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(pageCountChanged(int)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(const QRectF & arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(update(const class QRectF &)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(const QRectF & arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(const QSizeF & arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(documentSizeChanged(const class QSizeF &)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(const QSizeF & arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(const QTextBlock & arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(updateBlock(const class QTextBlock &)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(const QTextBlock & arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

