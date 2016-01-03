// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qprogressdialog.h
// dst-file: /src/widgets/qprogressdialog.cxx
//

// header block begin =>
#include <qprogressdialog.h>

extern "C" {

int QProgressDialog_Class_Size()
{
  return sizeof(QProgressDialog);
}

// QProgressDialog(const class QString &, const class QString &, int, int, class QWidget *, Qt::WindowFlags)
QProgressDialog* dector_ZN15QProgressDialogC1ERK7QStringS2_iiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString & labelText, const QString & cancelButtonText, int minimum, int maximum, QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QProgressDialog) == 32, "tyszerr");
  QProgressDialog* rthis = new QProgressDialog(labelText, cancelButtonText, minimum, maximum, parent, flags);
  return rthis;
}

// ~QProgressDialog()
void dedtor_ZN15QProgressDialogD0Ev(QProgressDialog* that)
{
  QProgressDialog* rthis = (QProgressDialog*)that;
  delete rthis;
}

// QProgressDialog(class QWidget *, Qt::WindowFlags)
QProgressDialog* dector_ZN15QProgressDialogC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, Qt::WindowFlags flags)
{
  // static_assert(sizeof(QProgressDialog) == 32, "tyszerr");
  QProgressDialog* rthis = new QProgressDialog(parent, flags);
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
// QProgressDialog_SlotProxy here
class QProgressDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QProgressDialog_SlotProxy():QObject(){}

public slots:
  // canceled()
  void slot_proxy_func__ZN15QProgressDialog8canceledEv();
public:
  void (*slot_func__ZN15QProgressDialog8canceledEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qprogressdialog.moc"

extern "C" {
  QProgressDialog_SlotProxy* QProgressDialog_SlotProxy_new()
  {
    return new QProgressDialog_SlotProxy();
  }
};

void QProgressDialog_SlotProxy::slot_proxy_func__ZN15QProgressDialog8canceledEv() {
  if (this->slot_func__ZN15QProgressDialog8canceledEv != NULL) {
    // do smth...
    this->slot_func__ZN15QProgressDialog8canceledEv(this->rsfptr);
  }
}
extern "C"
void* QProgressDialog_SlotProxy_connect__ZN15QProgressDialog8canceledEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QProgressDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QProgressDialog8canceledEv = (decltype(that->slot_func__ZN15QProgressDialog8canceledEv))ffifptr;
  QObject::connect((QProgressDialog*)sender, SIGNAL(canceled()), that, SLOT(slot_proxy_func__ZN15QProgressDialog8canceledEv()));
  return that;
}
extern "C"
void QProgressDialog_SlotProxy_disconnect__ZN15QProgressDialog8canceledEv(QProgressDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

