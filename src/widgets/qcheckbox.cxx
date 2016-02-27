// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qcheckbox.h
// dst-file: /src/widgets/qcheckbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcheckbox.h>


#include <qsize.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qcheckbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCheckBox_Class_Size()
{
  return sizeof(QCheckBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 47, column 5>
//   // proto:  const QMetaObject * QCheckBox::metaObject();
// _ZNK9QCheckBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QCheckBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QCheckBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 57, column 11>
//   // proto:  QSize QCheckBox::minimumSizeHint();
// _ZNK9QCheckBox15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK9QCheckBox15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QCheckBox*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
//   // proto:  void QCheckBox::~QCheckBox();
extern "C"
void C_ZN9QCheckBoxD2Ev(void *qthis) {
  delete (QCheckBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 56, column 11>
//   // proto:  QSize QCheckBox::sizeHint();
// _ZNK9QCheckBox8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK9QCheckBox8sizeHintEv(void *qthis) {
  auto ret =
  ((QCheckBox*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 66, column 10>
//   // proto:  void QCheckBox::stateChanged(int );
// _ZN9QCheckBox12stateChangedEi stateChanged(int)
extern "C"
void
C_ZN9QCheckBox12stateChangedEi(void *qthis,
int arg1) {
  ((QCheckBox*)qthis)->stateChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 62, column 20>
//   // proto:  Qt::CheckState QCheckBox::checkState();
// _ZNK9QCheckBox10checkStateEv checkState()
extern "C"
Qt::CheckState
C_ZNK9QCheckBox10checkStateEv(void *qthis) {
  auto ret =
  ((QCheckBox*)qthis)->checkState();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 63, column 10>
//   // proto:  void QCheckBox::setCheckState(Qt::CheckState state);
// _ZN9QCheckBox13setCheckStateEN2Qt10CheckStateE setCheckState(Qt::CheckState)
extern "C"
void
C_ZN9QCheckBox13setCheckStateEN2Qt10CheckStateE(void *qthis,
Qt::CheckState* arg1) {
  ((QCheckBox*)qthis)->setCheckState(*((Qt::CheckState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 59, column 10>
//   // proto:  void QCheckBox::setTristate(bool y);
// _ZN9QCheckBox11setTristateEb setTristate(_Bool)
extern "C"
void
C_ZN9QCheckBox11setTristateEb(void *qthis,
bool arg1) {
  ((QCheckBox*)qthis)->setTristate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 52, column 14>
//   // proto:  void QCheckBox::QCheckBox(QWidget * parent);
extern "C"
QCheckBox*
C_ZN9QCheckBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QCheckBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 60, column 10>
//   // proto:  bool QCheckBox::isTristate();
// _ZNK9QCheckBox10isTristateEv isTristate()
extern "C"
bool
C_ZNK9QCheckBox10isTristateEv(void *qthis) {
  auto ret =
  ((QCheckBox*)qthis)->isTristate();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcheckbox.h', line 53, column 14>
//   // proto:  void QCheckBox::QCheckBox(const QString & text, QWidget * parent);
extern "C"
QCheckBox*
C_ZN9QCheckBoxC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QCheckBox(*((const QString*)arg1), arg2);
  return ret;
}
// <= ext block end

// body block begin =>
// QCheckBox_SlotProxy here
class QCheckBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCheckBox_SlotProxy():QObject(){}

public slots:
  // stateChanged(int)
  void slot_proxy_func__ZN9QCheckBox12stateChangedEi(int arg0);
public:
  void (*slot_func__ZN9QCheckBox12stateChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcheckbox.moc"

extern "C" {
  QCheckBox_SlotProxy* QCheckBox_SlotProxy_new()
  {
    return new QCheckBox_SlotProxy();
  }
};

void QCheckBox_SlotProxy::slot_proxy_func__ZN9QCheckBox12stateChangedEi(int arg0) {
  if (this->slot_func__ZN9QCheckBox12stateChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN9QCheckBox12stateChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QCheckBox_SlotProxy_connect__ZN9QCheckBox12stateChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCheckBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QCheckBox12stateChangedEi = (decltype(that->slot_func__ZN9QCheckBox12stateChangedEi))ffifptr;
  QObject::connect((QCheckBox*)sender, SIGNAL(stateChanged(int)), that, SLOT(slot_proxy_func__ZN9QCheckBox12stateChangedEi(int arg0)));
  return that;
}
extern "C"
void QCheckBox_SlotProxy_disconnect__ZN9QCheckBox12stateChangedEi(QCheckBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

