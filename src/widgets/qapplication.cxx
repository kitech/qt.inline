// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qapplication.h
// dst-file: /src/widgets/qapplication.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qapplication.h>

extern "C" {

int QApplication_Class_Size()
{
  return sizeof(QApplication);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qapplication_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 132, column 28>
//   // proto: static QWidget * QApplication::widgetAt(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QApplication*)0)->widgetAt(arg1, arg2);
  };
}
// _ZN12QApplication8widgetAtEii widgetAt(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 134, column 28>
//   // proto: static QWidget * QApplication::topLevelAt(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QApplication*)0)->topLevelAt(arg1, arg2);
  };
}
// _ZN12QApplication10topLevelAtEii topLevelAt(int, int)
} // <= main block end

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
  void (*slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_)(void* rsfptr, QWidget * arg0, QWidget * arg1) = NULL;
public: void* rsfptr = NULL;
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
    this->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QApplication_SlotProxy_connect__ZN12QApplication12focusChangedEP7QWidgetS1_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_ = (decltype(that->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_))ffifptr;
  QObject::connect((QApplication*)sender, SIGNAL(focusChanged(class QWidget *, class QWidget *)), that, SLOT(slot_proxy_func__ZN12QApplication12focusChangedEP7QWidgetS1_(QWidget * arg0, QWidget * arg1)));
  return that;
}
extern "C"
void QApplication_SlotProxy_disconnect__ZN12QApplication12focusChangedEP7QWidgetS1_(QApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

