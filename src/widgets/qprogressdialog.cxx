// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qprogressdialog.h
// dst-file: /src/widgets/qprogressdialog.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qprogressdialog.h>


#include <qsize.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qprogressdialog_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QProgressDialog_Class_Size()
{
  return sizeof(QProgressDialog);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 87, column 10>
//   // proto:  void QProgressDialog::setAutoClose(bool close);
// _ZN15QProgressDialog12setAutoCloseEb setAutoClose(_Bool)
extern "C"
void
C_ZN15QProgressDialog12setAutoCloseEb(void *qthis,
bool arg1) {
  ((QProgressDialog*)qthis)->setAutoClose(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 91, column 10>
//   // proto:  void QProgressDialog::open(QObject * receiver, const char * member);
// _ZN15QProgressDialog4openEP7QObjectPKc open(class QObject *, const char *)
extern "C"
void
C_ZN15QProgressDialog4openEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  ((QProgressDialog*)qthis)->open(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 96, column 10>
//   // proto:  void QProgressDialog::setMaximum(int maximum);
// _ZN15QProgressDialog10setMaximumEi setMaximum(int)
extern "C"
void
C_ZN15QProgressDialog10setMaximumEi(void *qthis,
int arg1) {
  ((QProgressDialog*)qthis)->setMaximum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 97, column 10>
//   // proto:  void QProgressDialog::setMinimum(int minimum);
// _ZN15QProgressDialog10setMinimumEi setMinimum(int)
extern "C"
void
C_ZN15QProgressDialog10setMinimumEi(void *qthis,
int arg1) {
  ((QProgressDialog*)qthis)->setMinimum(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 100, column 10>
//   // proto:  void QProgressDialog::setLabelText(const QString & text);
// _ZN15QProgressDialog12setLabelTextERK7QString setLabelText(const class QString &)
extern "C"
void
C_ZN15QProgressDialog12setLabelTextERK7QString(void *qthis,
const QString* arg1) {
  ((QProgressDialog*)qthis)->setLabelText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 65, column 5>
//   // proto:  void QProgressDialog::QProgressDialog(const QString & labelText, const QString & cancelButtonText, int minimum, int maximum, QWidget * parent, Qt::WindowFlags flags);
extern "C"
QProgressDialog*
C_ZN15QProgressDialogC2ERK7QStringS2_iiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString* arg1,
const QString* arg2,
int arg3,
int arg4,
QWidget * arg5,
Qt::WindowFlags* arg6) {
  auto ret = new QProgressDialog(*((const QString*)arg1), *((const QString*)arg2), arg3, arg4, arg5, *((Qt::WindowFlags*)arg6));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 73, column 10>
//   // proto:  bool QProgressDialog::wasCanceled();
// _ZNK15QProgressDialog11wasCanceledEv wasCanceled()
extern "C"
bool
C_ZNK15QProgressDialog11wasCanceledEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->wasCanceled();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QProgressDialog::~QProgressDialog();
extern "C"
void C_ZN15QProgressDialogD2Ev(void *qthis) {
  delete (QProgressDialog*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 83, column 9>
//   // proto:  int QProgressDialog::minimumDuration();
// _ZNK15QProgressDialog15minimumDurationEv minimumDuration()
extern "C"
int
C_ZNK15QProgressDialog15minimumDurationEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->minimumDuration();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 102, column 10>
//   // proto:  void QProgressDialog::setMinimumDuration(int ms);
// _ZN15QProgressDialog18setMinimumDurationEi setMinimumDuration(int)
extern "C"
void
C_ZN15QProgressDialog18setMinimumDurationEi(void *qthis,
int arg1) {
  ((QProgressDialog*)qthis)->setMinimumDuration(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 76, column 9>
//   // proto:  int QProgressDialog::maximum();
// _ZNK15QProgressDialog7maximumEv maximum()
extern "C"
int
C_ZNK15QProgressDialog7maximumEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->maximum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 71, column 10>
//   // proto:  void QProgressDialog::setBar(QProgressBar * bar);
// _ZN15QProgressDialog6setBarEP12QProgressBar setBar(class QProgressBar *)
extern "C"
void
C_ZN15QProgressDialog6setBarEP12QProgressBar(void *qthis,
QProgressBar * arg1) {
  ((QProgressDialog*)qthis)->setBar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 94, column 10>
//   // proto:  void QProgressDialog::cancel();
// _ZN15QProgressDialog6cancelEv cancel()
extern "C"
void
C_ZN15QProgressDialog6cancelEv(void *qthis) {
  ((QProgressDialog*)qthis)->cancel();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 88, column 10>
//   // proto:  bool QProgressDialog::autoClose();
// _ZNK15QProgressDialog9autoCloseEv autoClose()
extern "C"
bool
C_ZNK15QProgressDialog9autoCloseEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->autoClose();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 75, column 9>
//   // proto:  int QProgressDialog::minimum();
// _ZNK15QProgressDialog7minimumEv minimum()
extern "C"
int
C_ZNK15QProgressDialog7minimumEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->minimum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 86, column 10>
//   // proto:  bool QProgressDialog::autoReset();
// _ZNK15QProgressDialog9autoResetEv autoReset()
extern "C"
bool
C_ZNK15QProgressDialog9autoResetEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->autoReset();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 95, column 10>
//   // proto:  void QProgressDialog::reset();
// _ZN15QProgressDialog5resetEv reset()
extern "C"
void
C_ZN15QProgressDialog5resetEv(void *qthis) {
  ((QProgressDialog*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 64, column 14>
//   // proto:  void QProgressDialog::QProgressDialog(QWidget * parent, Qt::WindowFlags flags);
extern "C"
QProgressDialog*
C_ZN15QProgressDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QProgressDialog(arg1, *((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 98, column 10>
//   // proto:  void QProgressDialog::setRange(int minimum, int maximum);
// _ZN15QProgressDialog8setRangeEii setRange(int, int)
extern "C"
void
C_ZN15QProgressDialog8setRangeEii(void *qthis,
int arg1,
int arg2) {
  ((QProgressDialog*)qthis)->setRange(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 105, column 10>
//   // proto:  void QProgressDialog::canceled();
// _ZN15QProgressDialog8canceledEv canceled()
extern "C"
void
C_ZN15QProgressDialog8canceledEv(void *qthis) {
  ((QProgressDialog*)qthis)->canceled();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 101, column 10>
//   // proto:  void QProgressDialog::setCancelButtonText(const QString & text);
// _ZN15QProgressDialog19setCancelButtonTextERK7QString setCancelButtonText(const class QString &)
extern "C"
void
C_ZN15QProgressDialog19setCancelButtonTextERK7QString(void *qthis,
const QString* arg1) {
  ((QProgressDialog*)qthis)->setCancelButtonText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 80, column 11>
//   // proto:  QSize QProgressDialog::sizeHint();
// _ZNK15QProgressDialog8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK15QProgressDialog8sizeHintEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 82, column 13>
//   // proto:  QString QProgressDialog::labelText();
// _ZNK15QProgressDialog9labelTextEv labelText()
extern "C"
QString*
C_ZNK15QProgressDialog9labelTextEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->labelText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 69, column 10>
//   // proto:  void QProgressDialog::setLabel(QLabel * label);
// _ZN15QProgressDialog8setLabelEP6QLabel setLabel(class QLabel *)
extern "C"
void
C_ZN15QProgressDialog8setLabelEP6QLabel(void *qthis,
QLabel * arg1) {
  ((QProgressDialog*)qthis)->setLabel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 52, column 5>
//   // proto:  const QMetaObject * QProgressDialog::metaObject();
// _ZNK15QProgressDialog10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QProgressDialog10metaObjectEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 85, column 10>
//   // proto:  void QProgressDialog::setAutoReset(bool reset);
// _ZN15QProgressDialog12setAutoResetEb setAutoReset(_Bool)
extern "C"
void
C_ZN15QProgressDialog12setAutoResetEb(void *qthis,
bool arg1) {
  ((QProgressDialog*)qthis)->setAutoReset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 78, column 9>
//   // proto:  int QProgressDialog::value();
// _ZNK15QProgressDialog5valueEv value()
extern "C"
int
C_ZNK15QProgressDialog5valueEv(void *qthis) {
  auto ret =
  ((QProgressDialog*)qthis)->value();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 70, column 10>
//   // proto:  void QProgressDialog::setCancelButton(QPushButton * button);
// _ZN15QProgressDialog15setCancelButtonEP11QPushButton setCancelButton(class QPushButton *)
extern "C"
void
C_ZN15QProgressDialog15setCancelButtonEP11QPushButton(void *qthis,
QPushButton * arg1) {
  ((QProgressDialog*)qthis)->setCancelButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qprogressdialog.h', line 99, column 10>
//   // proto:  void QProgressDialog::setValue(int progress);
// _ZN15QProgressDialog8setValueEi setValue(int)
extern "C"
void
C_ZN15QProgressDialog8setValueEi(void *qthis,
int arg1) {
  ((QProgressDialog*)qthis)->setValue(arg1);
}
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

