// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qstackedlayout.h
// dst-file: /src/widgets/qstackedlayout.cxx
//

// header block begin =>
#include <qstackedlayout.h>

extern "C" {

int QStackedLayout_Class_Size()
{
  return sizeof(QStackedLayout);
}

// QStackedLayout(class QLayout *)
QStackedLayout* dector_ZN14QStackedLayoutC1EP7QLayout(QLayout * parentLayout)
{
  // static_assert(sizeof(QStackedLayout) == 32, "tyszerr");
  QStackedLayout* rthis = new QStackedLayout(parentLayout);
  return rthis;
}

// QStackedLayout(class QWidget *)
QStackedLayout* dector_ZN14QStackedLayoutC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QStackedLayout) == 32, "tyszerr");
  QStackedLayout* rthis = new QStackedLayout(parent);
  return rthis;
}

// ~QStackedLayout()
void dedtor_ZN14QStackedLayoutD0Ev(QStackedLayout* that)
{
  QStackedLayout* rthis = (QStackedLayout*)that;
  delete rthis;
}

// QStackedLayout()
QStackedLayout* dector_ZN14QStackedLayoutC1Ev()
{
  // static_assert(sizeof(QStackedLayout) == 32, "tyszerr");
  QStackedLayout* rthis = new QStackedLayout();
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
// QStackedLayout_SlotProxy here
class QStackedLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStackedLayout_SlotProxy():QObject(){}

public slots:
  // widgetRemoved(int)
  void slot_proxy_func__ZN14QStackedLayout13widgetRemovedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedLayout13widgetRemovedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN14QStackedLayout14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedLayout14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qstackedlayout.moc"

extern "C" {
  QStackedLayout_SlotProxy* QStackedLayout_SlotProxy_new()
  {
    return new QStackedLayout_SlotProxy();
  }
};

void QStackedLayout_SlotProxy::slot_proxy_func__ZN14QStackedLayout13widgetRemovedEi(int arg0) {
  if (this->slot_func__ZN14QStackedLayout13widgetRemovedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedLayout13widgetRemovedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedLayout_SlotProxy_connect__ZN14QStackedLayout13widgetRemovedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedLayout13widgetRemovedEi = (decltype(that->slot_func__ZN14QStackedLayout13widgetRemovedEi))ffifptr;
  QObject::connect((QStackedLayout*)sender, SIGNAL(widgetRemoved(int)), that, SLOT(slot_proxy_func__ZN14QStackedLayout13widgetRemovedEi(int arg0)));
  return that;
}
extern "C"
void QStackedLayout_SlotProxy_disconnect__ZN14QStackedLayout13widgetRemovedEi(QStackedLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStackedLayout_SlotProxy::slot_proxy_func__ZN14QStackedLayout14currentChangedEi(int arg0) {
  if (this->slot_func__ZN14QStackedLayout14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedLayout14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedLayout_SlotProxy_connect__ZN14QStackedLayout14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedLayout14currentChangedEi = (decltype(that->slot_func__ZN14QStackedLayout14currentChangedEi))ffifptr;
  QObject::connect((QStackedLayout*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN14QStackedLayout14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QStackedLayout_SlotProxy_disconnect__ZN14QStackedLayout14currentChangedEi(QStackedLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

