// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qdatawidgetmapper.h
// dst-file: /src/widgets/qdatawidgetmapper.cxx
//

// header block begin =>
#include <qdatawidgetmapper.h>

extern "C" {

int QDataWidgetMapper_Class_Size()
{
  return sizeof(QDataWidgetMapper);
}

// ~QDataWidgetMapper()
void dedtor_ZN17QDataWidgetMapperD0Ev(QDataWidgetMapper* that)
{
  QDataWidgetMapper* rthis = (QDataWidgetMapper*)that;
  delete rthis;
}

// QDataWidgetMapper(class QObject *)
QDataWidgetMapper* dector_ZN17QDataWidgetMapperC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QDataWidgetMapper) == 32, "tyszerr");
  QDataWidgetMapper* rthis = new QDataWidgetMapper(parent);
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
// QDataWidgetMapper_SlotProxy here
class QDataWidgetMapper_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QDataWidgetMapper_SlotProxy():QObject(){}

public slots:
  // currentIndexChanged(int)
  void slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0);
public:
  void (*slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi)(int arg0) = NULL;
};
#include "src/widgets/qdatawidgetmapper.moc"

extern "C" {
  QDataWidgetMapper_SlotProxy* QDataWidgetMapper_SlotProxy_new()
  {
    return new QDataWidgetMapper_SlotProxy();
  }
};

void QDataWidgetMapper_SlotProxy::slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0) {
  if (this->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi(arg0);
  }
}
extern "C"
void* QDataWidgetMapper_SlotProxy_connect__ZN17QDataWidgetMapper19currentIndexChangedEi(QObject* sender, void* fptr){
  auto that = new QDataWidgetMapper_SlotProxy();
  that->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi = (decltype(that->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi))fptr;
  QObject::connect((QDataWidgetMapper*)sender, SIGNAL(currentIndexChanged(int)), that, SLOT(slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0)));
  return that;
}
extern "C"
void QDataWidgetMapper_SlotProxy_disconnect__ZN17QDataWidgetMapper19currentIndexChangedEi(QDataWidgetMapper_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

