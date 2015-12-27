// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qapplication.h
// dst-file: /src/widgets/qapplication.cxx
//

// header block begin =>
#include <qapplication.h>

extern "C" {

int QApplication_Class_Size()
{
  return sizeof(QApplication);
}

// QApplication(int &, char **, int)
QApplication* dector_ZN12QApplicationC1ERiPPci(int & argc, char ** argv, int arg3)
{
  // static_assert(sizeof(QApplication) == 32, "tyszerr");
  QApplication* rthis = new QApplication(argc, argv, arg3);
  return rthis;
}

// ~QApplication()
void dedtor_ZN12QApplicationD0Ev(QApplication* that)
{
  QApplication* rthis = (QApplication*)that;
  delete rthis;
}

  // proto: static QWidget * QApplication::widgetAt(int x, int y);
QWidget * demth_ZN12QApplication8widgetAtEii(void *that, int x, int y)
{
  QApplication *cthat = (QApplication *)that;
  return cthat->widgetAt(x, y);
}

  // proto: static QWidget * QApplication::topLevelAt(int x, int y);
QWidget * demth_ZN12QApplication10topLevelAtEii(void *that, int x, int y)
{
  QApplication *cthat = (QApplication *)that;
  return cthat->topLevelAt(x, y);
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
// QApplication_SlotProxy here
class QApplication_SlotProxy : public QObject
{
Q_OBJECT;
public:
   QApplication_SlotProxy():QObject(){}

public slots:
  // focusChanged(class QWidget *, class QWidget *)
  void slot_proxy_func__ZN12QApplication12focusChangedEP7QWidgetS1_(QWidget * arg0, QWidget * arg1);
public:
  void (*slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_)(QWidget * arg0, QWidget * arg1) = NULL;
};
#include "src/widgets/qapplication.moc"

extern "C" {
  QApplication_SlotProxy* QApplication_SlotProxy_new()
  {
    return new QApplication_SlotProxy();
  }
};

void QApplication_SlotProxy::slot_proxy_func__ZN12QApplication12focusChangedEP7QWidgetS1_(QWidget * arg0, QWidget * arg1) {
  if (this->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_ != NULL) {
    // do smth...
    this->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_(arg0, arg1);
  }
}
extern "C"
void* QApplication_SlotProxy_connect__ZN12QApplication12focusChangedEP7QWidgetS1_(QObject* sender, void* fptr){
  auto that = new QApplication_SlotProxy();
  that->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_ = (decltype(that->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_))fptr;
  QObject::connect((QApplication*)sender, SIGNAL(focusChanged(class QWidget *, class QWidget *)), that, SLOT(slot_proxy_func__ZN12QApplication12focusChangedEP7QWidgetS1_(QWidget * arg0, QWidget * arg1)));
  return that;
}
extern "C"
void QApplication_SlotProxy_disconnect__ZN12QApplication12focusChangedEP7QWidgetS1_(QApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

