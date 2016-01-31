// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qdialogbuttonbox.h
// dst-file: /src/widgets/qdialogbuttonbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdialogbuttonbox.h>


#include <qlist.h>
#include <qfontdatabase.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qdialogbuttonbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDialogButtonBox_Class_Size()
{
  return sizeof(QDialogButtonBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 129, column 21>
//   // proto:  StandardButtons QDialogButtonBox::standardButtons();
// _ZNK16QDialogButtonBox15standardButtonsEv standardButtons()
extern "C"
QFlags<QDialogButtonBox::StandardButton>*
C_ZNK16QDialogButtonBox15standardButtonsEv(void *qthis) {
  auto ret =
  ((QDialogButtonBox*)qthis)->standardButtons();
  return new QFlags<QDialogButtonBox::StandardButton>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 125, column 30>
//   // proto:  QList<QAbstractButton *> QDialogButtonBox::buttons();
// _ZNK16QDialogButtonBox7buttonsEv buttons()
extern "C"
QList<QAbstractButton *>*
C_ZNK16QDialogButtonBox7buttonsEv(void *qthis) {
  auto ret =
  ((QDialogButtonBox*)qthis)->buttons();
  return new QList<QAbstractButton *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 120, column 18>
//   // proto:  QPushButton * QDialogButtonBox::addButton(const QString & text, QDialogButtonBox::ButtonRole role);
// _ZN16QDialogButtonBox9addButtonERK7QStringNS_10ButtonRoleE addButton(const class QString &, enum QDialogButtonBox::ButtonRole)
extern "C"
void*
C_ZN16QDialogButtonBox9addButtonERK7QStringNS_10ButtonRoleE(void *qthis,
const QString* arg1,
QDialogButtonBox::ButtonRole arg2) {
  auto ret =
  ((QDialogButtonBox*)qthis)->addButton(*((const QString*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 110, column 5>
//   // proto:  void QDialogButtonBox::QDialogButtonBox(Qt::Orientation orientation, QWidget * parent);
extern "C"
QDialogButtonBox*
C_ZN16QDialogButtonBoxC2EN2Qt11OrientationEP7QWidget(Qt::Orientation* arg1,
QWidget * arg2) {
  auto ret = new QDialogButtonBox(*((Qt::Orientation*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 117, column 21>
//   // proto:  Qt::Orientation QDialogButtonBox::orientation();
// _ZNK16QDialogButtonBox11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK16QDialogButtonBox11orientationEv(void *qthis) {
  auto ret =
  ((QDialogButtonBox*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 128, column 10>
//   // proto:  void QDialogButtonBox::setStandardButtons(StandardButtons buttons);
// _ZN16QDialogButtonBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE setStandardButtons(StandardButtons)
extern "C"
void
C_ZN16QDialogButtonBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *qthis,
QDialogButtonBox::StandardButtons arg1) {
  ((QDialogButtonBox*)qthis)->setStandardButtons(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 126, column 16>
//   // proto:  QDialogButtonBox::ButtonRole QDialogButtonBox::buttonRole(QAbstractButton * button);
// _ZNK16QDialogButtonBox10buttonRoleEP15QAbstractButton buttonRole(class QAbstractButton *)
extern "C"
QDialogButtonBox::ButtonRole
C_ZNK16QDialogButtonBox10buttonRoleEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  auto ret =
  ((QDialogButtonBox*)qthis)->buttonRole(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 133, column 10>
//   // proto:  void QDialogButtonBox::setCenterButtons(bool center);
// _ZN16QDialogButtonBox16setCenterButtonsEb setCenterButtons(_Bool)
extern "C"
void
C_ZN16QDialogButtonBox16setCenterButtonsEb(void *qthis,
bool arg1) {
  ((QDialogButtonBox*)qthis)->setCenterButtons(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 134, column 10>
//   // proto:  bool QDialogButtonBox::centerButtons();
// _ZNK16QDialogButtonBox13centerButtonsEv centerButtons()
extern "C"
bool
C_ZNK16QDialogButtonBox13centerButtonsEv(void *qthis) {
  auto ret =
  ((QDialogButtonBox*)qthis)->centerButtons();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 130, column 20>
//   // proto:  QDialogButtonBox::StandardButton QDialogButtonBox::standardButton(QAbstractButton * button);
// _ZNK16QDialogButtonBox14standardButtonEP15QAbstractButton standardButton(class QAbstractButton *)
extern "C"
QDialogButtonBox::StandardButton
C_ZNK16QDialogButtonBox14standardButtonEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  auto ret =
  ((QDialogButtonBox*)qthis)->standardButton(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 48, column 5>
//   // proto:  const QMetaObject * QDialogButtonBox::metaObject();
// _ZNK16QDialogButtonBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QDialogButtonBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QDialogButtonBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 137, column 10>
//   // proto:  void QDialogButtonBox::clicked(QAbstractButton * button);
// _ZN16QDialogButtonBox7clickedEP15QAbstractButton clicked(class QAbstractButton *)
extern "C"
void
C_ZN16QDialogButtonBox7clickedEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QDialogButtonBox*)qthis)->clicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 119, column 10>
//   // proto:  void QDialogButtonBox::addButton(QAbstractButton * button, QDialogButtonBox::ButtonRole role);
// _ZN16QDialogButtonBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE addButton(class QAbstractButton *, enum QDialogButtonBox::ButtonRole)
extern "C"
void
C_ZN16QDialogButtonBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *qthis,
QAbstractButton * arg1,
QDialogButtonBox::ButtonRole arg2) {
  ((QDialogButtonBox*)qthis)->addButton(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 122, column 10>
//   // proto:  void QDialogButtonBox::removeButton(QAbstractButton * button);
// _ZN16QDialogButtonBox12removeButtonEP15QAbstractButton removeButton(class QAbstractButton *)
extern "C"
void
C_ZN16QDialogButtonBox12removeButtonEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QDialogButtonBox*)qthis)->removeButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 112, column 5>
//   // proto:  void QDialogButtonBox::QDialogButtonBox(StandardButtons buttons, Qt::Orientation orientation, QWidget * parent);
extern "C"
QDialogButtonBox*
C_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEN2Qt11OrientationEP7QWidget(QDialogButtonBox::StandardButtons arg1,
Qt::Orientation* arg2,
QWidget * arg3) {
  auto ret = new QDialogButtonBox(arg1,
*((Qt::Orientation*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 121, column 18>
//   // proto:  QPushButton * QDialogButtonBox::addButton(QDialogButtonBox::StandardButton button);
// _ZN16QDialogButtonBox9addButtonENS_14StandardButtonE addButton(enum QDialogButtonBox::StandardButton)
extern "C"
void*
C_ZN16QDialogButtonBox9addButtonENS_14StandardButtonE(void *qthis,
QDialogButtonBox::StandardButton arg1) {
  auto ret =
  ((QDialogButtonBox*)qthis)->addButton(arg1);
  return (void*)ret;
}
//   // proto:  void QDialogButtonBox::~QDialogButtonBox();
extern "C"
void C_ZN16QDialogButtonBoxD2Ev(void *qthis) {
  delete (QDialogButtonBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 131, column 18>
//   // proto:  QPushButton * QDialogButtonBox::button(QDialogButtonBox::StandardButton which);
// _ZNK16QDialogButtonBox6buttonENS_14StandardButtonE button(enum QDialogButtonBox::StandardButton)
extern "C"
void*
C_ZNK16QDialogButtonBox6buttonENS_14StandardButtonE(void *qthis,
QDialogButtonBox::StandardButton arg1) {
  auto ret =
  ((QDialogButtonBox*)qthis)->button(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 109, column 5>
//   // proto:  void QDialogButtonBox::QDialogButtonBox(QWidget * parent);
extern "C"
QDialogButtonBox*
C_ZN16QDialogButtonBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QDialogButtonBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 116, column 10>
//   // proto:  void QDialogButtonBox::setOrientation(Qt::Orientation orientation);
// _ZN16QDialogButtonBox14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN16QDialogButtonBox14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QDialogButtonBox*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 111, column 14>
//   // proto:  void QDialogButtonBox::QDialogButtonBox(StandardButtons buttons, QWidget * parent);
extern "C"
QDialogButtonBox*
C_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEP7QWidget(QDialogButtonBox::StandardButtons arg1,
QWidget * arg2) {
  auto ret = new QDialogButtonBox(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 138, column 10>
//   // proto:  void QDialogButtonBox::accepted();
// _ZN16QDialogButtonBox8acceptedEv accepted()
extern "C"
void
C_ZN16QDialogButtonBox8acceptedEv(void *qthis) {
  ((QDialogButtonBox*)qthis)->accepted();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 123, column 10>
//   // proto:  void QDialogButtonBox::clear();
// _ZN16QDialogButtonBox5clearEv clear()
extern "C"
void
C_ZN16QDialogButtonBox5clearEv(void *qthis) {
  ((QDialogButtonBox*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 140, column 10>
//   // proto:  void QDialogButtonBox::rejected();
// _ZN16QDialogButtonBox8rejectedEv rejected()
extern "C"
void
C_ZN16QDialogButtonBox8rejectedEv(void *qthis) {
  ((QDialogButtonBox*)qthis)->rejected();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdialogbuttonbox.h', line 139, column 10>
//   // proto:  void QDialogButtonBox::helpRequested();
// _ZN16QDialogButtonBox13helpRequestedEv helpRequested()
extern "C"
void
C_ZN16QDialogButtonBox13helpRequestedEv(void *qthis) {
  ((QDialogButtonBox*)qthis)->helpRequested();
}
// <= ext block end

// body block begin =>
// QDialogButtonBox_SlotProxy here
class QDialogButtonBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDialogButtonBox_SlotProxy():QObject(){}

public slots:
  // accepted()
  void slot_proxy_func__ZN16QDialogButtonBox8acceptedEv();
public:
  void (*slot_func__ZN16QDialogButtonBox8acceptedEv)(void* rsfptr) = NULL;
public slots:
  // helpRequested()
  void slot_proxy_func__ZN16QDialogButtonBox13helpRequestedEv();
public:
  void (*slot_func__ZN16QDialogButtonBox13helpRequestedEv)(void* rsfptr) = NULL;
public slots:
  // clicked(class QAbstractButton *)
  void slot_proxy_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QAbstractButton * arg0);
public:
  void (*slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton)(void* rsfptr, QAbstractButton * arg0) = NULL;
public slots:
  // rejected()
  void slot_proxy_func__ZN16QDialogButtonBox8rejectedEv();
public:
  void (*slot_func__ZN16QDialogButtonBox8rejectedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdialogbuttonbox.moc"

extern "C" {
  QDialogButtonBox_SlotProxy* QDialogButtonBox_SlotProxy_new()
  {
    return new QDialogButtonBox_SlotProxy();
  }
};

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox8acceptedEv() {
  if (this->slot_func__ZN16QDialogButtonBox8acceptedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox8acceptedEv(this->rsfptr);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox8acceptedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox8acceptedEv = (decltype(that->slot_func__ZN16QDialogButtonBox8acceptedEv))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(accepted()), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox8acceptedEv()));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox8acceptedEv(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox13helpRequestedEv() {
  if (this->slot_func__ZN16QDialogButtonBox13helpRequestedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox13helpRequestedEv(this->rsfptr);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox13helpRequestedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox13helpRequestedEv = (decltype(that->slot_func__ZN16QDialogButtonBox13helpRequestedEv))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(helpRequested()), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox13helpRequestedEv()));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox13helpRequestedEv(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QAbstractButton * arg0) {
  if (this->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(this->rsfptr, arg0);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton = (decltype(that->slot_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(clicked(class QAbstractButton *)), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QAbstractButton * arg0)));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox7clickedEP15QAbstractButton(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDialogButtonBox_SlotProxy::slot_proxy_func__ZN16QDialogButtonBox8rejectedEv() {
  if (this->slot_func__ZN16QDialogButtonBox8rejectedEv != NULL) {
    // do smth...
    this->slot_func__ZN16QDialogButtonBox8rejectedEv(this->rsfptr);
  }
}
extern "C"
void* QDialogButtonBox_SlotProxy_connect__ZN16QDialogButtonBox8rejectedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDialogButtonBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QDialogButtonBox8rejectedEv = (decltype(that->slot_func__ZN16QDialogButtonBox8rejectedEv))ffifptr;
  QObject::connect((QDialogButtonBox*)sender, SIGNAL(rejected()), that, SLOT(slot_proxy_func__ZN16QDialogButtonBox8rejectedEv()));
  return that;
}
extern "C"
void QDialogButtonBox_SlotProxy_disconnect__ZN16QDialogButtonBox8rejectedEv(QDialogButtonBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

