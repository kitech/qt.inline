// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qundostack.h
// dst-file: /src/widgets/qundostack.cxx
//

// header block begin =>
#include <qundostack.h>

extern "C" {

int QUndoStack_Class_Size()
{
  return sizeof(QUndoStack);
}

// ~QUndoStack()
void dedtor_ZN10QUndoStackD0Ev(QUndoStack* that)
{
  QUndoStack* rthis = (QUndoStack*)that;
  delete rthis;
}

// QUndoStack(class QObject *)
QUndoStack* dector_ZN10QUndoStackC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QUndoStack) == 32, "tyszerr");
  QUndoStack* rthis = new QUndoStack(parent);
  return rthis;
}

int QUndoCommand_Class_Size()
{
  return sizeof(QUndoCommand);
}

// QUndoCommand(class QUndoCommand *)
QUndoCommand* dector_ZN12QUndoCommandC1EPS_(QUndoCommand * parent)
{
  // static_assert(sizeof(QUndoCommand) == 32, "tyszerr");
  QUndoCommand* rthis = new QUndoCommand(parent);
  return rthis;
}

// QUndoCommand(const class QString &, class QUndoCommand *)
QUndoCommand* dector_ZN12QUndoCommandC1ERK7QStringPS_(const QString & text, QUndoCommand * parent)
{
  // static_assert(sizeof(QUndoCommand) == 32, "tyszerr");
  QUndoCommand* rthis = new QUndoCommand(text, parent);
  return rthis;
}

// ~QUndoCommand()
void dedtor_ZN12QUndoCommandD0Ev(QUndoCommand* that)
{
  QUndoCommand* rthis = (QUndoCommand*)that;
  delete rthis;
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
// QUndoStack_SlotProxy here
class QUndoStack_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QUndoStack_SlotProxy():QObject(){}

public slots:
  // indexChanged(int)
  void slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0);
public:
  void (*slot_func__ZN10QUndoStack12indexChangedEi)(int arg0) = NULL;
public slots:
  // cleanChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack12cleanChangedEb)(bool arg0) = NULL;
public slots:
  // canUndoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack14canUndoChangedEb)(bool arg0) = NULL;
public slots:
  // canRedoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoStack14canRedoChangedEb)(bool arg0) = NULL;
public slots:
  // undoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoStack15undoTextChangedERK7QString)(const QString & arg0) = NULL;
public slots:
  // redoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoStack15redoTextChangedERK7QString)(const QString & arg0) = NULL;
};
#include "src/widgets/qundostack.moc"

extern "C" {
  QUndoStack_SlotProxy* QUndoStack_SlotProxy_new()
  {
    return new QUndoStack_SlotProxy();
  }
};

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0) {
  if (this->slot_func__ZN10QUndoStack12indexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack12indexChangedEi(arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack12indexChangedEi(QObject* sender, void* fptr){
  auto that = new QUndoStack_SlotProxy();
  that->slot_func__ZN10QUndoStack12indexChangedEi = (decltype(that->slot_func__ZN10QUndoStack12indexChangedEi))fptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(indexChanged(int)), that, SLOT(slot_proxy_func__ZN10QUndoStack12indexChangedEi(int arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack12indexChangedEi(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack12cleanChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack12cleanChangedEb(arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack12cleanChangedEb(QObject* sender, void* fptr){
  auto that = new QUndoStack_SlotProxy();
  that->slot_func__ZN10QUndoStack12cleanChangedEb = (decltype(that->slot_func__ZN10QUndoStack12cleanChangedEb))fptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(cleanChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack12cleanChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack12cleanChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack14canUndoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack14canUndoChangedEb(arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack14canUndoChangedEb(QObject* sender, void* fptr){
  auto that = new QUndoStack_SlotProxy();
  that->slot_func__ZN10QUndoStack14canUndoChangedEb = (decltype(that->slot_func__ZN10QUndoStack14canUndoChangedEb))fptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(canUndoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack14canUndoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack14canUndoChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoStack14canRedoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack14canRedoChangedEb(arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack14canRedoChangedEb(QObject* sender, void* fptr){
  auto that = new QUndoStack_SlotProxy();
  that->slot_func__ZN10QUndoStack14canRedoChangedEb = (decltype(that->slot_func__ZN10QUndoStack14canRedoChangedEb))fptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(canRedoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoStack14canRedoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack14canRedoChangedEb(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoStack_SlotProxy::slot_proxy_func__ZN10QUndoStack15undoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoStack15undoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoStack15undoTextChangedERK7QString(arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack15undoTextChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QUndoStack_SlotProxy();
  that->slot_func__ZN10QUndoStack15undoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoStack15undoTextChangedERK7QString))fptr;
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
    this->slot_func__ZN10QUndoStack15redoTextChangedERK7QString(arg0);
  }
}
extern "C"
void* QUndoStack_SlotProxy_connect__ZN10QUndoStack15redoTextChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QUndoStack_SlotProxy();
  that->slot_func__ZN10QUndoStack15redoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoStack15redoTextChangedERK7QString))fptr;
  QObject::connect((QUndoStack*)sender, SIGNAL(redoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoStack15redoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoStack_SlotProxy_disconnect__ZN10QUndoStack15redoTextChangedERK7QString(QUndoStack_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

