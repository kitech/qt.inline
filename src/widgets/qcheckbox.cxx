// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qcheckbox.h
// dst-file: /src/widgets/qcheckbox.cxx
//

// header block begin =>
#include <qcheckbox.h>

extern "C" {

int QCheckBox_Class_Size()
{
  return sizeof(QCheckBox);
}

// ~QCheckBox()
void dedtor_ZN9QCheckBoxD0Ev(QCheckBox* that)
{
  QCheckBox* rthis = (QCheckBox*)that;
  delete rthis;
}

// QCheckBox(class QWidget *)
QCheckBox* dector_ZN9QCheckBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QCheckBox) == 32, "tyszerr");
  QCheckBox* rthis = new QCheckBox(parent);
  return rthis;
}

// QCheckBox(const class QString &, class QWidget *)
QCheckBox* dector_ZN9QCheckBoxC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QCheckBox) == 32, "tyszerr");
  QCheckBox* rthis = new QCheckBox(text, parent);
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
// QCheckBox_SlotProxy here
class QCheckBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCheckBox_SlotProxy():QObject(){}

public slots:
  // stateChanged(int)
  void slot_proxy_func__ZN9QCheckBox12stateChangedEi(int arg0);
public:
  void (*slot_func__ZN9QCheckBox12stateChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcheckbox.moc"

extern "C" {
  QCheckBox_SlotProxy* QCheckBox_SlotProxy_new()
  {
    return new QCheckBox_SlotProxy();
  }
};

void QCheckBox_SlotProxy::slot_proxy_func__ZN9QCheckBox12stateChangedEi(int arg0) {
  if (this->slot_func__ZN9QCheckBox12stateChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QCheckBox12stateChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QCheckBox_SlotProxy_connect__ZN9QCheckBox12stateChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCheckBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QCheckBox12stateChangedEi = (decltype(that->slot_func__ZN9QCheckBox12stateChangedEi))ffifptr;
  QObject::connect((QCheckBox*)sender, SIGNAL(stateChanged(int)), that, SLOT(slot_proxy_func__ZN9QCheckBox12stateChangedEi(int arg0)));
  return that;
}
extern "C"
void QCheckBox_SlotProxy_disconnect__ZN9QCheckBox12stateChangedEi(QCheckBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

