// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qkeysequenceedit.h
// dst-file: /src/widgets/qkeysequenceedit.cxx
//

// header block begin =>
#include <qkeysequenceedit.h>

extern "C" {

int QKeySequenceEdit_Class_Size()
{
  return sizeof(QKeySequenceEdit);
}

// QKeySequenceEdit(const class QKeySequence &, class QWidget *)
QKeySequenceEdit* dector_ZN16QKeySequenceEditC1ERK12QKeySequenceP7QWidget(const QKeySequence & keySequence, QWidget * parent)
{
  // static_assert(sizeof(QKeySequenceEdit) == 32, "tyszerr");
  QKeySequenceEdit* rthis = new QKeySequenceEdit(keySequence, parent);
  return rthis;
}

// ~QKeySequenceEdit()
void dedtor_ZN16QKeySequenceEditD0Ev(QKeySequenceEdit* that)
{
  QKeySequenceEdit* rthis = (QKeySequenceEdit*)that;
  delete rthis;
}

// QKeySequenceEdit(class QWidget *)
QKeySequenceEdit* dector_ZN16QKeySequenceEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QKeySequenceEdit) == 32, "tyszerr");
  QKeySequenceEdit* rthis = new QKeySequenceEdit(parent);
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
// QKeySequenceEdit_SlotProxy here
class QKeySequenceEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QKeySequenceEdit_SlotProxy():QObject(){}

public slots:
  // keySequenceChanged(const class QKeySequence &)
  void slot_proxy_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(const QKeySequence & arg0);
public:
  void (*slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence)(void* rsfptr, const QKeySequence & arg0) = NULL;
public slots:
  // editingFinished()
  void slot_proxy_func__ZN16QKeySequenceEdit15editingFinishedEv();
public:
  void (*slot_func__ZN16QKeySequenceEdit15editingFinishedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qkeysequenceedit.moc"

extern "C" {
  QKeySequenceEdit_SlotProxy* QKeySequenceEdit_SlotProxy_new()
  {
    return new QKeySequenceEdit_SlotProxy();
  }
};

void QKeySequenceEdit_SlotProxy::slot_proxy_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(const QKeySequence & arg0) {
  if (this->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence != NULL) {
    // do smth...
    this->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(this->rsfptr, arg0);
  }
}
extern "C"
void* QKeySequenceEdit_SlotProxy_connect__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QKeySequenceEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence = (decltype(that->slot_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence))ffifptr;
  QObject::connect((QKeySequenceEdit*)sender, SIGNAL(keySequenceChanged(const class QKeySequence &)), that, SLOT(slot_proxy_func__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(const QKeySequence & arg0)));
  return that;
}
extern "C"
void QKeySequenceEdit_SlotProxy_disconnect__ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(QKeySequenceEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QKeySequenceEdit_SlotProxy::slot_proxy_func__ZN16QKeySequenceEdit15editingFinishedEv() {
  if (this->slot_func__ZN16QKeySequenceEdit15editingFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QKeySequenceEdit15editingFinishedEv(this->rsfptr);
  }
}
extern "C"
void* QKeySequenceEdit_SlotProxy_connect__ZN16QKeySequenceEdit15editingFinishedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QKeySequenceEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QKeySequenceEdit15editingFinishedEv = (decltype(that->slot_func__ZN16QKeySequenceEdit15editingFinishedEv))ffifptr;
  QObject::connect((QKeySequenceEdit*)sender, SIGNAL(editingFinished()), that, SLOT(slot_proxy_func__ZN16QKeySequenceEdit15editingFinishedEv()));
  return that;
}
extern "C"
void QKeySequenceEdit_SlotProxy_disconnect__ZN16QKeySequenceEdit15editingFinishedEv(QKeySequenceEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

