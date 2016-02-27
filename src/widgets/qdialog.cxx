// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qdialog.h
// dst-file: /src/widgets/qdialog.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdialog.h>


#include <qsize.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qdialog_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDialog_Class_Size()
{
  return sizeof(QDialog);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 66, column 10>
//   // proto:  void QDialog::setExtension(QWidget * extension);
// _ZN7QDialog12setExtensionEP7QWidget setExtension(class QWidget *)
extern "C"
void
C_ZN7QDialog12setExtensionEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QDialog*)qthis)->setExtension(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 59, column 9>
//   // proto:  int QDialog::result();
// _ZNK7QDialog6resultEv result()
extern "C"
int
C_ZNK7QDialog6resultEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->result();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 79, column 10>
//   // proto:  void QDialog::finished(int result);
// _ZN7QDialog8finishedEi finished(int)
extern "C"
void
C_ZN7QDialog8finishedEi(void *qthis,
int arg1) {
  ((QDialog*)qthis)->finished(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 86, column 18>
//   // proto:  void QDialog::done(int );
// _ZN7QDialog4doneEi done(int)
extern "C"
void
C_ZN7QDialog4doneEi(void *qthis,
int arg1) {
  ((QDialog*)qthis)->done(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 84, column 18>
//   // proto:  void QDialog::open();
// _ZN7QDialog4openEv open()
extern "C"
void
C_ZN7QDialog4openEv(void *qthis) {
  ((QDialog*)qthis)->open();
}
//   // proto:  void QDialog::~QDialog();
extern "C"
void C_ZN7QDialogD2Ev(void *qthis) {
  delete (QDialog*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 76, column 10>
//   // proto:  void QDialog::setResult(int r);
// _ZN7QDialog9setResultEi setResult(int)
extern "C"
void
C_ZN7QDialog9setResultEi(void *qthis,
int arg1) {
  ((QDialog*)qthis)->setResult(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 72, column 10>
//   // proto:  void QDialog::setSizeGripEnabled(bool );
// _ZN7QDialog18setSizeGripEnabledEb setSizeGripEnabled(_Bool)
extern "C"
void
C_ZN7QDialog18setSizeGripEnabledEb(void *qthis,
bool arg1) {
  ((QDialog*)qthis)->setSizeGripEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 90, column 10>
//   // proto:  void QDialog::showExtension(bool );
// _ZN7QDialog13showExtensionEb showExtension(_Bool)
extern "C"
void
C_ZN7QDialog13showExtensionEb(void *qthis,
bool arg1) {
  ((QDialog*)qthis)->showExtension(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 47, column 5>
//   // proto:  const QMetaObject * QDialog::metaObject();
// _ZNK7QDialog10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QDialog10metaObjectEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 54, column 14>
//   // proto:  void QDialog::QDialog(QWidget * parent, Qt::WindowFlags f);
extern "C"
QDialog*
C_ZN7QDialogC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QDialog(arg1, *((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 70, column 11>
//   // proto:  QSize QDialog::minimumSizeHint();
// _ZNK7QDialog15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK7QDialog15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 69, column 11>
//   // proto:  QSize QDialog::sizeHint();
// _ZNK7QDialog8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK7QDialog8sizeHintEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 87, column 18>
//   // proto:  void QDialog::accept();
// _ZN7QDialog6acceptEv accept()
extern "C"
void
C_ZN7QDialog6acceptEv(void *qthis) {
  ((QDialog*)qthis)->accept();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 61, column 10>
//   // proto:  void QDialog::setVisible(bool visible);
// _ZN7QDialog10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN7QDialog10setVisibleEb(void *qthis,
bool arg1) {
  ((QDialog*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 67, column 14>
//   // proto:  QWidget * QDialog::extension();
// _ZNK7QDialog9extensionEv extension()
extern "C"
void*
C_ZNK7QDialog9extensionEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->extension();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 85, column 17>
//   // proto:  int QDialog::exec();
// _ZN7QDialog4execEv exec()
extern "C"
int
C_ZN7QDialog4execEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->exec();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 88, column 18>
//   // proto:  void QDialog::reject();
// _ZN7QDialog6rejectEv reject()
extern "C"
void
C_ZN7QDialog6rejectEv(void *qthis) {
  ((QDialog*)qthis)->reject();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 63, column 10>
//   // proto:  void QDialog::setOrientation(Qt::Orientation orientation);
// _ZN7QDialog14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN7QDialog14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QDialog*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 80, column 10>
//   // proto:  void QDialog::accepted();
// _ZN7QDialog8acceptedEv accepted()
extern "C"
void
C_ZN7QDialog8acceptedEv(void *qthis) {
  ((QDialog*)qthis)->accepted();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 73, column 10>
//   // proto:  bool QDialog::isSizeGripEnabled();
// _ZNK7QDialog17isSizeGripEnabledEv isSizeGripEnabled()
extern "C"
bool
C_ZNK7QDialog17isSizeGripEnabledEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->isSizeGripEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 81, column 10>
//   // proto:  void QDialog::rejected();
// _ZN7QDialog8rejectedEv rejected()
extern "C"
void
C_ZN7QDialog8rejectedEv(void *qthis) {
  ((QDialog*)qthis)->rejected();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 75, column 10>
//   // proto:  void QDialog::setModal(bool modal);
// _ZN7QDialog8setModalEb setModal(_Bool)
extern "C"
void
C_ZN7QDialog8setModalEb(void *qthis,
bool arg1) {
  ((QDialog*)qthis)->setModal(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialog.h', line 64, column 21>
//   // proto:  Qt::Orientation QDialog::orientation();
// _ZNK7QDialog11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK7QDialog11orientationEv(void *qthis) {
  auto ret =
  ((QDialog*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// QDialog_SlotProxy here
class QDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDialog_SlotProxy():QObject(){}

public slots:
  // rejected()
  void slot_proxy_func__ZN7QDialog8rejectedEv();
public:
  void (*slot_func__ZN7QDialog8rejectedEv)(void* rsfptr) = NULL;
public slots:
  // finished(int)
  void slot_proxy_func__ZN7QDialog8finishedEi(int arg0);
public:
  void (*slot_func__ZN7QDialog8finishedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // accepted()
  void slot_proxy_func__ZN7QDialog8acceptedEv();
public:
  void (*slot_func__ZN7QDialog8acceptedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdialog.moc"

extern "C" {
  QDialog_SlotProxy* QDialog_SlotProxy_new()
  {
    return new QDialog_SlotProxy();
  }
};

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8rejectedEv() {
  if (this->slot_func__ZN7QDialog8rejectedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8rejectedEv(this->rsfptr);
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8rejectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QDialog8rejectedEv = (decltype(that->slot_func__ZN7QDialog8rejectedEv))ffifptr;
  QObject::connect((QDialog*)sender, SIGNAL(rejected()), that, SLOT(slot_proxy_func__ZN7QDialog8rejectedEv()));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8rejectedEv(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8finishedEi(int arg0) {
  if (this->slot_func__ZN7QDialog8finishedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8finishedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8finishedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QDialog8finishedEi = (decltype(that->slot_func__ZN7QDialog8finishedEi))ffifptr;
  QObject::connect((QDialog*)sender, SIGNAL(finished(int)), that, SLOT(slot_proxy_func__ZN7QDialog8finishedEi(int arg0)));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8finishedEi(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialog_SlotProxy::slot_proxy_func__ZN7QDialog8acceptedEv() {
  if (this->slot_func__ZN7QDialog8acceptedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QDialog8acceptedEv(this->rsfptr);
  }
}
extern "C"
void* QDialog_SlotProxy_connect__ZN7QDialog8acceptedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QDialog8acceptedEv = (decltype(that->slot_func__ZN7QDialog8acceptedEv))ffifptr;
  QObject::connect((QDialog*)sender, SIGNAL(accepted()), that, SLOT(slot_proxy_func__ZN7QDialog8acceptedEv()));
  return that;
}
extern "C"
void QDialog_SlotProxy_disconnect__ZN7QDialog8acceptedEv(QDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

