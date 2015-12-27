// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qspinbox.h
// dst-file: /src/widgets/qspinbox.cxx
//

// header block begin =>
#include <qspinbox.h>

extern "C" {

int QSpinBox_Class_Size()
{
  return sizeof(QSpinBox);
}

// ~QSpinBox()
void dedtor_ZN8QSpinBoxD0Ev(QSpinBox* that)
{
  QSpinBox* rthis = (QSpinBox*)that;
  delete rthis;
}

// QSpinBox(class QWidget *)
QSpinBox* dector_ZN8QSpinBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QSpinBox) == 32, "tyszerr");
  QSpinBox* rthis = new QSpinBox(parent);
  return rthis;
}

int QDoubleSpinBox_Class_Size()
{
  return sizeof(QDoubleSpinBox);
}

// ~QDoubleSpinBox()
void dedtor_ZN14QDoubleSpinBoxD0Ev(QDoubleSpinBox* that)
{
  QDoubleSpinBox* rthis = (QDoubleSpinBox*)that;
  delete rthis;
}

// QDoubleSpinBox(class QWidget *)
QDoubleSpinBox* dector_ZN14QDoubleSpinBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QDoubleSpinBox) == 32, "tyszerr");
  QDoubleSpinBox* rthis = new QDoubleSpinBox(parent);
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
// QSpinBox_SlotProxy here
class QSpinBox_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QSpinBox_SlotProxy():QObject(){}

public slots:
  // valueChanged(int)
  void slot_proxy_func__ZN8QSpinBox12valueChangedEi(int arg0);
public:
  void (*slot_func__ZN8QSpinBox12valueChangedEi)(int arg0) = NULL;
public slots:
  // valueChanged(const class QString &)
  void slot_proxy_func__ZN8QSpinBox12valueChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN8QSpinBox12valueChangedERK7QString)(const QString & arg0) = NULL;
};

extern "C" {
  QSpinBox_SlotProxy* QSpinBox_SlotProxy_new()
  {
    return new QSpinBox_SlotProxy();
  }
};

void QSpinBox_SlotProxy::slot_proxy_func__ZN8QSpinBox12valueChangedEi(int arg0) {
  if (this->slot_func__ZN8QSpinBox12valueChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN8QSpinBox12valueChangedEi(arg0);
  }
}
extern "C"
void* QSpinBox_SlotProxy_connect__ZN8QSpinBox12valueChangedEi(QObject* sender, void* fptr){
  auto that = new QSpinBox_SlotProxy();
  that->slot_func__ZN8QSpinBox12valueChangedEi = (decltype(that->slot_func__ZN8QSpinBox12valueChangedEi))fptr;
  QObject::connect((QSpinBox*)sender, SIGNAL(valueChanged(int)), that, SLOT(slot_proxy_func__ZN8QSpinBox12valueChangedEi(int arg0)));
  return that;
}
extern "C"
void QSpinBox_SlotProxy_disconnect__ZN8QSpinBox12valueChangedEi(QSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QSpinBox_SlotProxy::slot_proxy_func__ZN8QSpinBox12valueChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN8QSpinBox12valueChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN8QSpinBox12valueChangedERK7QString(arg0);
  }
}
extern "C"
void* QSpinBox_SlotProxy_connect__ZN8QSpinBox12valueChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QSpinBox_SlotProxy();
  that->slot_func__ZN8QSpinBox12valueChangedERK7QString = (decltype(that->slot_func__ZN8QSpinBox12valueChangedERK7QString))fptr;
  QObject::connect((QSpinBox*)sender, SIGNAL(valueChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN8QSpinBox12valueChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QSpinBox_SlotProxy_disconnect__ZN8QSpinBox12valueChangedERK7QString(QSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDoubleSpinBox_SlotProxy here
class QDoubleSpinBox_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDoubleSpinBox_SlotProxy():QObject(){}

public slots:
  // valueChanged(double)
  void slot_proxy_func__ZN14QDoubleSpinBox12valueChangedEd(double arg0);
public:
  void (*slot_func__ZN14QDoubleSpinBox12valueChangedEd)(double arg0) = NULL;
public slots:
  // valueChanged(const class QString &)
  void slot_proxy_func__ZN14QDoubleSpinBox12valueChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString)(const QString & arg0) = NULL;
};
#include "src/widgets/qspinbox.moc"

extern "C" {
  QDoubleSpinBox_SlotProxy* QDoubleSpinBox_SlotProxy_new()
  {
    return new QDoubleSpinBox_SlotProxy();
  }
};

void QDoubleSpinBox_SlotProxy::slot_proxy_func__ZN14QDoubleSpinBox12valueChangedEd(double arg0) {
  if (this->slot_func__ZN14QDoubleSpinBox12valueChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN14QDoubleSpinBox12valueChangedEd(arg0);
  }
}
extern "C"
void* QDoubleSpinBox_SlotProxy_connect__ZN14QDoubleSpinBox12valueChangedEd(QObject* sender, void* fptr){
  auto that = new QDoubleSpinBox_SlotProxy();
  that->slot_func__ZN14QDoubleSpinBox12valueChangedEd = (decltype(that->slot_func__ZN14QDoubleSpinBox12valueChangedEd))fptr;
  QObject::connect((QDoubleSpinBox*)sender, SIGNAL(valueChanged(double)), that, SLOT(slot_proxy_func__ZN14QDoubleSpinBox12valueChangedEd(double arg0)));
  return that;
}
extern "C"
void QDoubleSpinBox_SlotProxy_disconnect__ZN14QDoubleSpinBox12valueChangedEd(QDoubleSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDoubleSpinBox_SlotProxy::slot_proxy_func__ZN14QDoubleSpinBox12valueChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString(arg0);
  }
}
extern "C"
void* QDoubleSpinBox_SlotProxy_connect__ZN14QDoubleSpinBox12valueChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QDoubleSpinBox_SlotProxy();
  that->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString = (decltype(that->slot_func__ZN14QDoubleSpinBox12valueChangedERK7QString))fptr;
  QObject::connect((QDoubleSpinBox*)sender, SIGNAL(valueChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN14QDoubleSpinBox12valueChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QDoubleSpinBox_SlotProxy_disconnect__ZN14QDoubleSpinBox12valueChangedERK7QString(QDoubleSpinBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

