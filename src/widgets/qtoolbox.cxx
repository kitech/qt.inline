// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qtoolbox.h
// dst-file: /src/widgets/qtoolbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtoolbox.h>

extern "C" {

int QToolBox_Class_Size()
{
  return sizeof(QToolBox);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtoolbox_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 59, column 9>
//   // proto:  int QToolBox::insertItem(int index, QWidget * widget, const QString & text);
if (false) {
  auto f = [](int arg1, QWidget * arg2, const QString & arg3) {
    ((QToolBox*)0)->insertItem(arg1, arg2, arg3);
  };
}
// _ZN8QToolBox10insertItemEiP7QWidgetRK7QString insertItem(int, class QWidget *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 57, column 9>
//   // proto:  int QToolBox::addItem(QWidget * widget, const QString & text);
if (false) {
  auto f = [](QWidget * arg1, const QString & arg2) {
    ((QToolBox*)0)->addItem(arg1, arg2);
  };
}
// _ZN8QToolBox7addItemEP7QWidgetRK7QString addItem(class QWidget *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 58, column 9>
//   // proto:  int QToolBox::addItem(QWidget * widget, const QIcon & icon, const QString & text);
if (false) {
  auto f = [](QWidget * arg1, const QIcon & arg2, const QString & arg3) {
    ((QToolBox*)0)->addItem(arg1, arg2, arg3);
  };
}
// _ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString addItem(class QWidget *, const class QIcon &, const class QString &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QToolBox_SlotProxy here
class QToolBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QToolBox_SlotProxy():QObject(){}

public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN8QToolBox14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN8QToolBox14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtoolbox.moc"

extern "C" {
  QToolBox_SlotProxy* QToolBox_SlotProxy_new()
  {
    return new QToolBox_SlotProxy();
  }
};

void QToolBox_SlotProxy::slot_proxy_func__ZN8QToolBox14currentChangedEi(int arg0) {
  if (this->slot_func__ZN8QToolBox14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBox14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBox_SlotProxy_connect__ZN8QToolBox14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBox14currentChangedEi = (decltype(that->slot_func__ZN8QToolBox14currentChangedEi))ffifptr;
  QObject::connect((QToolBox*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN8QToolBox14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QToolBox_SlotProxy_disconnect__ZN8QToolBox14currentChangedEi(QToolBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

