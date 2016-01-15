// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qstackedwidget.h
// dst-file: /src/widgets/qstackedwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstackedwidget.h>

extern "C" {

int QStackedWidget_Class_Size()
{
  return sizeof(QStackedWidget);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qstackedwidget_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QStackedWidget_SlotProxy here
class QStackedWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStackedWidget_SlotProxy():QObject(){}

public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN14QStackedWidget14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedWidget14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // widgetRemoved(int)
  void slot_proxy_func__ZN14QStackedWidget13widgetRemovedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedWidget13widgetRemovedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qstackedwidget.moc"

extern "C" {
  QStackedWidget_SlotProxy* QStackedWidget_SlotProxy_new()
  {
    return new QStackedWidget_SlotProxy();
  }
};

void QStackedWidget_SlotProxy::slot_proxy_func__ZN14QStackedWidget14currentChangedEi(int arg0) {
  if (this->slot_func__ZN14QStackedWidget14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedWidget14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedWidget_SlotProxy_connect__ZN14QStackedWidget14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedWidget14currentChangedEi = (decltype(that->slot_func__ZN14QStackedWidget14currentChangedEi))ffifptr;
  QObject::connect((QStackedWidget*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN14QStackedWidget14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QStackedWidget_SlotProxy_disconnect__ZN14QStackedWidget14currentChangedEi(QStackedWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStackedWidget_SlotProxy::slot_proxy_func__ZN14QStackedWidget13widgetRemovedEi(int arg0) {
  if (this->slot_func__ZN14QStackedWidget13widgetRemovedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedWidget13widgetRemovedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedWidget_SlotProxy_connect__ZN14QStackedWidget13widgetRemovedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedWidget13widgetRemovedEi = (decltype(that->slot_func__ZN14QStackedWidget13widgetRemovedEi))ffifptr;
  QObject::connect((QStackedWidget*)sender, SIGNAL(widgetRemoved(int)), that, SLOT(slot_proxy_func__ZN14QStackedWidget13widgetRemovedEi(int arg0)));
  return that;
}
extern "C"
void QStackedWidget_SlotProxy_disconnect__ZN14QStackedWidget13widgetRemovedEi(QStackedWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

