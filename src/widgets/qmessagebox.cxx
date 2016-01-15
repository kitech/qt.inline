// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qmessagebox.h
// dst-file: /src/widgets/qmessagebox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qmessagebox.h>

extern "C" {

int QMessageBox_Class_Size()
{
  return sizeof(QMessageBox);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qmessagebox_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 229, column 23>
//   // proto: static int QMessageBox::question(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (false) {
  auto f = [](QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->question(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ question(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 244, column 23>
//   // proto: static int QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (false) {
  auto f = [](QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->warning(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ warning(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 259, column 23>
//   // proto: static int QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (false) {
  auto f = [](QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->critical(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ critical(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 214, column 34>
//   // proto: static QMessageBox::StandardButton QMessageBox::information(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (false) {
  auto f = [](QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->information(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ information(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QMessageBox_SlotProxy here
class QMessageBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMessageBox_SlotProxy():QObject(){}

public slots:
  // buttonClicked(class QAbstractButton *)
  void slot_proxy_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QAbstractButton * arg0);
public:
  void (*slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton)(void* rsfptr, QAbstractButton * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmessagebox.moc"

extern "C" {
  QMessageBox_SlotProxy* QMessageBox_SlotProxy_new()
  {
    return new QMessageBox_SlotProxy();
  }
};

void QMessageBox_SlotProxy::slot_proxy_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QAbstractButton * arg0) {
  if (this->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton != NULL) {
    // do smth...
    this->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(this->rsfptr, arg0);
  }
}
extern "C"
void* QMessageBox_SlotProxy_connect__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMessageBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton = (decltype(that->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton))ffifptr;
  QObject::connect((QMessageBox*)sender, SIGNAL(buttonClicked(class QAbstractButton *)), that, SLOT(slot_proxy_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QAbstractButton * arg0)));
  return that;
}
extern "C"
void QMessageBox_SlotProxy_disconnect__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QMessageBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

