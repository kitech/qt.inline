// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qlineedit.h
// dst-file: /src/widgets/qlineedit.cxx
//

// header block begin =>
#include <qlineedit.h>

extern "C" {

int QLineEdit_Class_Size()
{
  return sizeof(QLineEdit);
}

// QLineEdit(const class QString &, class QWidget *)
QLineEdit* dector_ZN9QLineEditC1ERK7QStringP7QWidget(const QString & arg1, QWidget * parent)
{
  // static_assert(sizeof(QLineEdit) == 32, "tyszerr");
  QLineEdit* rthis = new QLineEdit(arg1, parent);
  return rthis;
}

// ~QLineEdit()
void dedtor_ZN9QLineEditD0Ev(QLineEdit* that)
{
  QLineEdit* rthis = (QLineEdit*)that;
  delete rthis;
}

// QLineEdit(class QWidget *)
QLineEdit* dector_ZN9QLineEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QLineEdit) == 32, "tyszerr");
  QLineEdit* rthis = new QLineEdit(parent);
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
// QLineEdit_SlotProxy here
class QLineEdit_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QLineEdit_SlotProxy():QObject(){}

public slots:
  // textChanged(const class QString &)
  void slot_proxy_func__ZN9QLineEdit11textChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QLineEdit11textChangedERK7QString)(const QString & arg0) = NULL;
public slots:
  // textEdited(const class QString &)
  void slot_proxy_func__ZN9QLineEdit10textEditedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN9QLineEdit10textEditedERK7QString)(const QString & arg0) = NULL;
public slots:
  // cursorPositionChanged(int, int)
  void slot_proxy_func__ZN9QLineEdit21cursorPositionChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN9QLineEdit21cursorPositionChangedEii)(int arg0, int arg1) = NULL;
public slots:
  // returnPressed()
  void slot_proxy_func__ZN9QLineEdit13returnPressedEv();
public:
  void (*slot_func__ZN9QLineEdit13returnPressedEv)() = NULL;
public slots:
  // editingFinished()
  void slot_proxy_func__ZN9QLineEdit15editingFinishedEv();
public:
  void (*slot_func__ZN9QLineEdit15editingFinishedEv)() = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN9QLineEdit16selectionChangedEv();
public:
  void (*slot_func__ZN9QLineEdit16selectionChangedEv)() = NULL;
};
#include "src/widgets/qlineedit.moc"

extern "C" {
  QLineEdit_SlotProxy* QLineEdit_SlotProxy_new()
  {
    return new QLineEdit_SlotProxy();
  }
};

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit11textChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QLineEdit11textChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit11textChangedERK7QString(arg0);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit11textChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QLineEdit_SlotProxy();
  that->slot_func__ZN9QLineEdit11textChangedERK7QString = (decltype(that->slot_func__ZN9QLineEdit11textChangedERK7QString))fptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(textChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN9QLineEdit11textChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit11textChangedERK7QString(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit10textEditedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN9QLineEdit10textEditedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit10textEditedERK7QString(arg0);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit10textEditedERK7QString(QObject* sender, void* fptr){
  auto that = new QLineEdit_SlotProxy();
  that->slot_func__ZN9QLineEdit10textEditedERK7QString = (decltype(that->slot_func__ZN9QLineEdit10textEditedERK7QString))fptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(textEdited(const class QString &)), that, SLOT(slot_proxy_func__ZN9QLineEdit10textEditedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit10textEditedERK7QString(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit21cursorPositionChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN9QLineEdit21cursorPositionChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit21cursorPositionChangedEii(arg0, arg1);
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit21cursorPositionChangedEii(QObject* sender, void* fptr){
  auto that = new QLineEdit_SlotProxy();
  that->slot_func__ZN9QLineEdit21cursorPositionChangedEii = (decltype(that->slot_func__ZN9QLineEdit21cursorPositionChangedEii))fptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(cursorPositionChanged(int, int)), that, SLOT(slot_proxy_func__ZN9QLineEdit21cursorPositionChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit21cursorPositionChangedEii(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit13returnPressedEv() {
  if (this->slot_func__ZN9QLineEdit13returnPressedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit13returnPressedEv();
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit13returnPressedEv(QObject* sender, void* fptr){
  auto that = new QLineEdit_SlotProxy();
  that->slot_func__ZN9QLineEdit13returnPressedEv = (decltype(that->slot_func__ZN9QLineEdit13returnPressedEv))fptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(returnPressed()), that, SLOT(slot_proxy_func__ZN9QLineEdit13returnPressedEv()));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit13returnPressedEv(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit15editingFinishedEv() {
  if (this->slot_func__ZN9QLineEdit15editingFinishedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit15editingFinishedEv();
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit15editingFinishedEv(QObject* sender, void* fptr){
  auto that = new QLineEdit_SlotProxy();
  that->slot_func__ZN9QLineEdit15editingFinishedEv = (decltype(that->slot_func__ZN9QLineEdit15editingFinishedEv))fptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(editingFinished()), that, SLOT(slot_proxy_func__ZN9QLineEdit15editingFinishedEv()));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit15editingFinishedEv(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QLineEdit_SlotProxy::slot_proxy_func__ZN9QLineEdit16selectionChangedEv() {
  if (this->slot_func__ZN9QLineEdit16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN9QLineEdit16selectionChangedEv();
  }
}
extern "C"
void* QLineEdit_SlotProxy_connect__ZN9QLineEdit16selectionChangedEv(QObject* sender, void* fptr){
  auto that = new QLineEdit_SlotProxy();
  that->slot_func__ZN9QLineEdit16selectionChangedEv = (decltype(that->slot_func__ZN9QLineEdit16selectionChangedEv))fptr;
  QObject::connect((QLineEdit*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN9QLineEdit16selectionChangedEv()));
  return that;
}
extern "C"
void QLineEdit_SlotProxy_disconnect__ZN9QLineEdit16selectionChangedEv(QLineEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

