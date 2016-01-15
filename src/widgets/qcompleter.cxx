// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qcompleter.h
// dst-file: /src/widgets/qcompleter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qcompleter.h>

extern "C" {

int QCompleter_Class_Size()
{
  return sizeof(QCompleter);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qcompleter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QCompleter_SlotProxy here
class QCompleter_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCompleter_SlotProxy():QObject(){}

public slots:
  // highlighted(const class QModelIndex &)
  void slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN10QCompleter11highlightedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // activated(const class QString &)
  void slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QCompleter9activatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // activated(const class QModelIndex &)
  void slot_proxy_func__ZN10QCompleter9activatedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN10QCompleter9activatedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // highlighted(const class QString &)
  void slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QCompleter11highlightedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcompleter.moc"

extern "C" {
  QCompleter_SlotProxy* QCompleter_SlotProxy_new()
  {
    return new QCompleter_SlotProxy();
  }
};

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN10QCompleter11highlightedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter11highlightedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter11highlightedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter11highlightedERK11QModelIndex = (decltype(that->slot_func__ZN10QCompleter11highlightedERK11QModelIndex))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(highlighted(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter11highlightedERK11QModelIndex(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QCompleter9activatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter9activatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter9activatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter9activatedERK7QString = (decltype(that->slot_func__ZN10QCompleter9activatedERK7QString))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(activated(const class QString &)), that, SLOT(slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter9activatedERK7QString(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter9activatedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN10QCompleter9activatedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter9activatedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter9activatedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter9activatedERK11QModelIndex = (decltype(that->slot_func__ZN10QCompleter9activatedERK11QModelIndex))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(activated(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN10QCompleter9activatedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter9activatedERK11QModelIndex(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QCompleter11highlightedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter11highlightedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter11highlightedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter11highlightedERK7QString = (decltype(that->slot_func__ZN10QCompleter11highlightedERK7QString))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(highlighted(const class QString &)), that, SLOT(slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter11highlightedERK7QString(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

