// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qcompleter.h
// dst-file: /src/widgets/qcompleter.cxx
//

// header block begin =>
#include <qcompleter.h>

extern "C" {

int QCompleter_Class_Size()
{
  return sizeof(QCompleter);
}

// QCompleter(class QObject *)
QCompleter* dector_ZN10QCompleterC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QCompleter) == 32, "tyszerr");
  QCompleter* rthis = new QCompleter(parent);
  return rthis;
}

// QCompleter(const class QStringList &, class QObject *)
QCompleter* dector_ZN10QCompleterC1ERK11QStringListP7QObject(const QStringList & completions, QObject * parent)
{
  // static_assert(sizeof(QCompleter) == 32, "tyszerr");
  QCompleter* rthis = new QCompleter(completions, parent);
  return rthis;
}

// ~QCompleter()
void dedtor_ZN10QCompleterD0Ev(QCompleter* that)
{
  QCompleter* rthis = (QCompleter*)that;
  delete rthis;
}

// QCompleter(class QAbstractItemModel *, class QObject *)
QCompleter* dector_ZN10QCompleterC1EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent)
{
  // static_assert(sizeof(QCompleter) == 32, "tyszerr");
  QCompleter* rthis = new QCompleter(model, parent);
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
// QCompleter_SlotProxy here
class QCompleter_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QCompleter_SlotProxy():QObject(){}

public slots:
  // activated(const class QString &)
  void slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QCompleter9activatedERK7QString)(const QString & arg0) = NULL;
public slots:
  // activated(const class QModelIndex &)
  void slot_proxy_func__ZN10QCompleter9activatedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN10QCompleter9activatedERK11QModelIndex)(const QModelIndex & arg0) = NULL;
public slots:
  // highlighted(const class QString &)
  void slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QCompleter11highlightedERK7QString)(const QString & arg0) = NULL;
public slots:
  // highlighted(const class QModelIndex &)
  void slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN10QCompleter11highlightedERK11QModelIndex)(const QModelIndex & arg0) = NULL;
};
#include "src/widgets/qcompleter.moc"

extern "C" {
  QCompleter_SlotProxy* QCompleter_SlotProxy_new()
  {
    return new QCompleter_SlotProxy();
  }
};

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QCompleter9activatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter9activatedERK7QString(arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter9activatedERK7QString(QObject* sender, void* fptr){
  auto that = new QCompleter_SlotProxy();
  that->slot_func__ZN10QCompleter9activatedERK7QString = (decltype(that->slot_func__ZN10QCompleter9activatedERK7QString))fptr;
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
    this->slot_func__ZN10QCompleter9activatedERK11QModelIndex(arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter9activatedERK11QModelIndex(QObject* sender, void* fptr){
  auto that = new QCompleter_SlotProxy();
  that->slot_func__ZN10QCompleter9activatedERK11QModelIndex = (decltype(that->slot_func__ZN10QCompleter9activatedERK11QModelIndex))fptr;
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
    this->slot_func__ZN10QCompleter11highlightedERK7QString(arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter11highlightedERK7QString(QObject* sender, void* fptr){
  auto that = new QCompleter_SlotProxy();
  that->slot_func__ZN10QCompleter11highlightedERK7QString = (decltype(that->slot_func__ZN10QCompleter11highlightedERK7QString))fptr;
  QObject::connect((QCompleter*)sender, SIGNAL(highlighted(const class QString &)), that, SLOT(slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter11highlightedERK7QString(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN10QCompleter11highlightedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter11highlightedERK11QModelIndex(arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter11highlightedERK11QModelIndex(QObject* sender, void* fptr){
  auto that = new QCompleter_SlotProxy();
  that->slot_func__ZN10QCompleter11highlightedERK11QModelIndex = (decltype(that->slot_func__ZN10QCompleter11highlightedERK11QModelIndex))fptr;
  QObject::connect((QCompleter*)sender, SIGNAL(highlighted(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter11highlightedERK11QModelIndex(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

