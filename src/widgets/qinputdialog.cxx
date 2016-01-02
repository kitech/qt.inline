// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qinputdialog.h
// dst-file: /src/widgets/qinputdialog.cxx
//

// header block begin =>
#include <qinputdialog.h>

extern "C" {

int QInputDialog_Class_Size()
{
  return sizeof(QInputDialog);
}

// QInputDialog(class QWidget *, Qt::WindowFlags)
QInputDialog* dector_ZN12QInputDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QInputDialog) == 32, "tyszerr");
  QInputDialog* rthis = new QInputDialog(parent, flags);
  return rthis;
}

// ~QInputDialog()
void dedtor_ZN12QInputDialogD0Ev(QInputDialog* that)
{
  QInputDialog* rthis = (QInputDialog*)that;
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
// QInputDialog_SlotProxy here
class QInputDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QInputDialog_SlotProxy():QObject(){}

public slots:
  // intValueChanged(int)
  void slot_proxy_func__ZN12QInputDialog15intValueChangedEi(int arg0);
public:
  void (*slot_func__ZN12QInputDialog15intValueChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // textValueSelected(const class QString &)
  void slot_proxy_func__ZN12QInputDialog17textValueSelectedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN12QInputDialog17textValueSelectedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // intValueSelected(int)
  void slot_proxy_func__ZN12QInputDialog16intValueSelectedEi(int arg0);
public:
  void (*slot_func__ZN12QInputDialog16intValueSelectedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // doubleValueSelected(double)
  void slot_proxy_func__ZN12QInputDialog19doubleValueSelectedEd(double arg0);
public:
  void (*slot_func__ZN12QInputDialog19doubleValueSelectedEd)(void* rsfptr, double arg0) = NULL;
public slots:
  // doubleValueChanged(double)
  void slot_proxy_func__ZN12QInputDialog18doubleValueChangedEd(double arg0);
public:
  void (*slot_func__ZN12QInputDialog18doubleValueChangedEd)(void* rsfptr, double arg0) = NULL;
public slots:
  // textValueChanged(const class QString &)
  void slot_proxy_func__ZN12QInputDialog16textValueChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN12QInputDialog16textValueChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qinputdialog.moc"

extern "C" {
  QInputDialog_SlotProxy* QInputDialog_SlotProxy_new()
  {
    return new QInputDialog_SlotProxy();
  }
};

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog15intValueChangedEi(int arg0) {
  if (this->slot_func__ZN12QInputDialog15intValueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog15intValueChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog15intValueChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog15intValueChangedEi = (decltype(that->slot_func__ZN12QInputDialog15intValueChangedEi))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(intValueChanged(int)), that, SLOT(slot_proxy_func__ZN12QInputDialog15intValueChangedEi(int arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog15intValueChangedEi(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog17textValueSelectedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN12QInputDialog17textValueSelectedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog17textValueSelectedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog17textValueSelectedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog17textValueSelectedERK7QString = (decltype(that->slot_func__ZN12QInputDialog17textValueSelectedERK7QString))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(textValueSelected(const class QString &)), that, SLOT(slot_proxy_func__ZN12QInputDialog17textValueSelectedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog17textValueSelectedERK7QString(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog16intValueSelectedEi(int arg0) {
  if (this->slot_func__ZN12QInputDialog16intValueSelectedEi != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog16intValueSelectedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog16intValueSelectedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog16intValueSelectedEi = (decltype(that->slot_func__ZN12QInputDialog16intValueSelectedEi))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(intValueSelected(int)), that, SLOT(slot_proxy_func__ZN12QInputDialog16intValueSelectedEi(int arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog16intValueSelectedEi(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog19doubleValueSelectedEd(double arg0) {
  if (this->slot_func__ZN12QInputDialog19doubleValueSelectedEd != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog19doubleValueSelectedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog19doubleValueSelectedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog19doubleValueSelectedEd = (decltype(that->slot_func__ZN12QInputDialog19doubleValueSelectedEd))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(doubleValueSelected(double)), that, SLOT(slot_proxy_func__ZN12QInputDialog19doubleValueSelectedEd(double arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog19doubleValueSelectedEd(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog18doubleValueChangedEd(double arg0) {
  if (this->slot_func__ZN12QInputDialog18doubleValueChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog18doubleValueChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog18doubleValueChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog18doubleValueChangedEd = (decltype(that->slot_func__ZN12QInputDialog18doubleValueChangedEd))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(doubleValueChanged(double)), that, SLOT(slot_proxy_func__ZN12QInputDialog18doubleValueChangedEd(double arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog18doubleValueChangedEd(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputDialog_SlotProxy::slot_proxy_func__ZN12QInputDialog16textValueChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN12QInputDialog16textValueChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN12QInputDialog16textValueChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputDialog_SlotProxy_connect__ZN12QInputDialog16textValueChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputDialog16textValueChangedERK7QString = (decltype(that->slot_func__ZN12QInputDialog16textValueChangedERK7QString))ffifptr;
  QObject::connect((QInputDialog*)sender, SIGNAL(textValueChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN12QInputDialog16textValueChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QInputDialog_SlotProxy_disconnect__ZN12QInputDialog16textValueChangedERK7QString(QInputDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

