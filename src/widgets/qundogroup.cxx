// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qundogroup.h
// dst-file: /src/widgets/qundogroup.cxx
//

// header block begin =>
#include <qundogroup.h>

extern "C" {

int QUndoGroup_Class_Size()
{
  return sizeof(QUndoGroup);
}

// QUndoGroup(class QObject *)
QUndoGroup* dector_ZN10QUndoGroupC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QUndoGroup) == 32, "tyszerr");
  QUndoGroup* rthis = new QUndoGroup(parent);
  return rthis;
}

// ~QUndoGroup()
void dedtor_ZN10QUndoGroupD0Ev(QUndoGroup* that)
{
  QUndoGroup* rthis = (QUndoGroup*)that;
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
// QUndoGroup_SlotProxy here
class QUndoGroup_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QUndoGroup_SlotProxy():QObject(){}

public slots:
  // activeStackChanged(class QUndoStack *)
  void slot_proxy_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoStack * arg0);
public:
  void (*slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack)(QUndoStack * arg0) = NULL;
public slots:
  // indexChanged(int)
  void slot_proxy_func__ZN10QUndoGroup12indexChangedEi(int arg0);
public:
  void (*slot_func__ZN10QUndoGroup12indexChangedEi)(int arg0) = NULL;
public slots:
  // cleanChanged(_Bool)
  void slot_proxy_func__ZN10QUndoGroup12cleanChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoGroup12cleanChangedEb)(bool arg0) = NULL;
public slots:
  // canUndoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoGroup14canUndoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoGroup14canUndoChangedEb)(bool arg0) = NULL;
public slots:
  // canRedoChanged(_Bool)
  void slot_proxy_func__ZN10QUndoGroup14canRedoChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QUndoGroup14canRedoChangedEb)(bool arg0) = NULL;
public slots:
  // undoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoGroup15undoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoGroup15undoTextChangedERK7QString)(const QString & arg0) = NULL;
public slots:
  // redoTextChanged(const class QString &)
  void slot_proxy_func__ZN10QUndoGroup15redoTextChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QUndoGroup15redoTextChangedERK7QString)(const QString & arg0) = NULL;
};
#include "src/widgets/qundogroup.moc"

extern "C" {
  QUndoGroup_SlotProxy* QUndoGroup_SlotProxy_new()
  {
    return new QUndoGroup_SlotProxy();
  }
};

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoStack * arg0) {
  if (this->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QObject* sender, void* fptr){
  auto that = new QUndoGroup_SlotProxy();
  that->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack = (decltype(that->slot_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack))fptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(activeStackChanged(class QUndoStack *)), that, SLOT(slot_proxy_func__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoStack * arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup18activeStackChangedEP10QUndoStack(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup12indexChangedEi(int arg0) {
  if (this->slot_func__ZN10QUndoGroup12indexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup12indexChangedEi(arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup12indexChangedEi(QObject* sender, void* fptr){
  auto that = new QUndoGroup_SlotProxy();
  that->slot_func__ZN10QUndoGroup12indexChangedEi = (decltype(that->slot_func__ZN10QUndoGroup12indexChangedEi))fptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(indexChanged(int)), that, SLOT(slot_proxy_func__ZN10QUndoGroup12indexChangedEi(int arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup12indexChangedEi(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup12cleanChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoGroup12cleanChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup12cleanChangedEb(arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup12cleanChangedEb(QObject* sender, void* fptr){
  auto that = new QUndoGroup_SlotProxy();
  that->slot_func__ZN10QUndoGroup12cleanChangedEb = (decltype(that->slot_func__ZN10QUndoGroup12cleanChangedEb))fptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(cleanChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoGroup12cleanChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup12cleanChangedEb(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup14canUndoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoGroup14canUndoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup14canUndoChangedEb(arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup14canUndoChangedEb(QObject* sender, void* fptr){
  auto that = new QUndoGroup_SlotProxy();
  that->slot_func__ZN10QUndoGroup14canUndoChangedEb = (decltype(that->slot_func__ZN10QUndoGroup14canUndoChangedEb))fptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(canUndoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoGroup14canUndoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup14canUndoChangedEb(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup14canRedoChangedEb(bool arg0) {
  if (this->slot_func__ZN10QUndoGroup14canRedoChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup14canRedoChangedEb(arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup14canRedoChangedEb(QObject* sender, void* fptr){
  auto that = new QUndoGroup_SlotProxy();
  that->slot_func__ZN10QUndoGroup14canRedoChangedEb = (decltype(that->slot_func__ZN10QUndoGroup14canRedoChangedEb))fptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(canRedoChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QUndoGroup14canRedoChangedEb(bool arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup14canRedoChangedEb(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup15undoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString(arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup15undoTextChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QUndoGroup_SlotProxy();
  that->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoGroup15undoTextChangedERK7QString))fptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(undoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoGroup15undoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup15undoTextChangedERK7QString(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QUndoGroup_SlotProxy::slot_proxy_func__ZN10QUndoGroup15redoTextChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString(arg0);
  }
}
extern "C"
void* QUndoGroup_SlotProxy_connect__ZN10QUndoGroup15redoTextChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QUndoGroup_SlotProxy();
  that->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString = (decltype(that->slot_func__ZN10QUndoGroup15redoTextChangedERK7QString))fptr;
  QObject::connect((QUndoGroup*)sender, SIGNAL(redoTextChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QUndoGroup15redoTextChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QUndoGroup_SlotProxy_disconnect__ZN10QUndoGroup15redoTextChangedERK7QString(QUndoGroup_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

