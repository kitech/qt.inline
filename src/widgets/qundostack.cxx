// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qundostack.h
// dst-file: /src/widgets/qundostack.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qundostack.h>

extern "C" {

int QUndoStack_Class_Size()
{
  return sizeof(QUndoStack);
}

int QUndoCommand_Class_Size()
{
  return sizeof(QUndoCommand);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qundostack_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QUndoStack_SlotProxy here
class QUndoStack_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QUndoStack_SlotProxy():QObject(){}

public slots:
  // undoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoStack15undoTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // redoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoStack15redoTextChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // cleanChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack12cleanChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // canRedoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack14canRedoChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // indexChanged(int)
  void slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0);
public:
  void (*slot_func__ZN10QUndoStack12indexChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // canUndoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack14canUndoChangedEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qundostack.moc"

extern "C" {
  QUndoStack_SlotProxy* QUndoStack_SlotProxy_new()
  {
    return new QUndoStack_SlotProxy();
  }
};

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoStack15undoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack15undoTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack15undoTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack15undoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoStack15undoTextChangedERK7QString))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(undoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack15undoTextChangedERK7QString(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoStack15redoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack15redoTextChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack15redoTextChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack15redoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoStack15redoTextChangedERK7QString))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(redoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack15redoTextChangedERK7QString(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack12cleanChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack12cleanChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack12cleanChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack12cleanChangedEb = (decltype(that->slot_func__ZN10QUndoStack12cleanChangedEb))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(cleanChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack12cleanChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack14canRedoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack14canRedoChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack14canRedoChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack14canRedoChangedEb = (decltype(that->slot_func__ZN10QUndoStack14canRedoChangedEb))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(canRedoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack14canRedoChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0) {
  if (this->slot_func__ZN10QUndoStack12indexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack12indexChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack12indexChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack12indexChangedEi = (decltype(that->slot_func__ZN10QUndoStack12indexChangedEi))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(indexChanged(int)), that, SLOT(slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack12indexChangedEi(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack14canUndoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack14canUndoChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack14canUndoChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QUndoStack_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QUndoStack14canUndoChangedEb = (decltype(that->slot_func__ZN10QUndoStack14canUndoChangedEb))ffifptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(canUndoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack14canUndoChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

