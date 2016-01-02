// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtWidgets/qmessagebox.h
// dst-file: /src/widgets/qmessagebox.cxx
//

// header block begin =>
#include <qmessagebox.h>

extern "C" {

int QMessageBox_Class_Size()
{
  return sizeof(QMessageBox);
}

// ~QMessageBox()
void dedtor_ZN11QMessageBoxD0Ev(QMessageBox* that)
{
  QMessageBox* rthis = (QMessageBox*)that;
  delete rthis;
}

// QMessageBox(class QWidget *)
QMessageBox* dector_ZN11QMessageBoxC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QMessageBox) == 32, "tyszerr");
  QMessageBox* rthis = new QMessageBox(parent);
  return rthis;
}

// QMessageBox(const class QString &, const class QString &, enum QMessageBox::Icon, int, int, int, class QWidget *, Qt::WindowFlags)
QMessageBox* dector_ZN11QMessageBoxC1ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, Qt::WindowFlags f)
{
  // static_assert(sizeof(QMessageBox) == 32, "tyszerr");
  QMessageBox* rthis = new QMessageBox(title, text, icon, button0, button1, button2, parent, f);
  return rthis;
}

// QMessageBox(enum QMessageBox::Icon, const class QString &, const class QString &, StandardButtons, class QWidget *, Qt::WindowFlags)
QMessageBox* dector_ZN11QMessageBoxC1ENS_4IconERK7QStringS3_6QFlagsINS_14StandardButtonEEP7QWidgetS4_IN2Qt10WindowTypeEE(QMessageBox::Icon icon, const QString & title, const QString & text, QMessageBox::StandardButton buttons, QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QMessageBox) == 32, "tyszerr");
  QMessageBox* rthis = new QMessageBox(icon, title, text, buttons, parent, flags);
  return rthis;
}

  // proto: static int QMessageBox::question(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
int demth_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(void *that, QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)
{
  QMessageBox *cthat = (QMessageBox *)that;
  return cthat->question(parent, title, text, button0, button1);
}

  // proto: static int QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
int demth_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(void *that, QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)
{
  QMessageBox *cthat = (QMessageBox *)that;
  return cthat->warning(parent, title, text, button0, button1);
}

  // proto: static int QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
int demth_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(void *that, QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)
{
  QMessageBox *cthat = (QMessageBox *)that;
  return cthat->critical(parent, title, text, button0, button1);
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

