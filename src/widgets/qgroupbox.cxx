// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qgroupbox.h
// dst-file: /src/widgets/qgroupbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgroupbox.h>


#include <qsize.h>
#include <qnamespace.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qgroupbox_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGroupBox_Class_Size()
{
  return sizeof(QGroupBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 76, column 10>
//   // proto:  bool QGroupBox::isCheckable();
// _ZNK9QGroupBox11isCheckableEv isCheckable()
extern "C"
bool
C_ZNK9QGroupBox11isCheckableEv(void *qthis) {
  auto ret =
  ((QGroupBox*)qthis)->isCheckable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 77, column 10>
//   // proto:  void QGroupBox::setCheckable(bool checkable);
// _ZN9QGroupBox12setCheckableEb setCheckable(_Bool)
extern "C"
void
C_ZN9QGroupBox12setCheckableEb(void *qthis,
bool arg1) {
  ((QGroupBox*)qthis)->setCheckable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 54, column 5>
//   // proto:  const QMetaObject * QGroupBox::metaObject();
// _ZNK9QGroupBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QGroupBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QGroupBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 74, column 10>
//   // proto:  bool QGroupBox::isFlat();
// _ZNK9QGroupBox6isFlatEv isFlat()
extern "C"
bool
C_ZNK9QGroupBox6isFlatEv(void *qthis) {
  auto ret =
  ((QGroupBox*)qthis)->isFlat();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 72, column 11>
//   // proto:  QSize QGroupBox::minimumSizeHint();
// _ZNK9QGroupBox15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK9QGroupBox15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QGroupBox*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 69, column 19>
//   // proto:  Qt::Alignment QGroupBox::alignment();
// _ZNK9QGroupBox9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK9QGroupBox9alignmentEv(void *qthis) {
  auto ret =
  ((QGroupBox*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 75, column 10>
//   // proto:  void QGroupBox::setFlat(bool flat);
// _ZN9QGroupBox7setFlatEb setFlat(_Bool)
extern "C"
void
C_ZN9QGroupBox7setFlatEb(void *qthis,
bool arg1) {
  ((QGroupBox*)qthis)->setFlat(arg1);
}
//   // proto:  void QGroupBox::~QGroupBox();
extern "C"
void C_ZN9QGroupBoxD2Ev(void *qthis) {
  delete (QGroupBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 62, column 14>
//   // proto:  void QGroupBox::QGroupBox(QWidget * parent);
extern "C"
QGroupBox*
C_ZN9QGroupBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QGroupBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 85, column 10>
//   // proto:  void QGroupBox::toggled(bool );
// _ZN9QGroupBox7toggledEb toggled(_Bool)
extern "C"
void
C_ZN9QGroupBox7toggledEb(void *qthis,
bool arg1) {
  ((QGroupBox*)qthis)->toggled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 78, column 10>
//   // proto:  bool QGroupBox::isChecked();
// _ZNK9QGroupBox9isCheckedEv isChecked()
extern "C"
bool
C_ZNK9QGroupBox9isCheckedEv(void *qthis) {
  auto ret =
  ((QGroupBox*)qthis)->isChecked();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 81, column 10>
//   // proto:  void QGroupBox::setChecked(bool checked);
// _ZN9QGroupBox10setCheckedEb setChecked(_Bool)
extern "C"
void
C_ZN9QGroupBox10setCheckedEb(void *qthis,
bool arg1) {
  ((QGroupBox*)qthis)->setChecked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 66, column 13>
//   // proto:  QString QGroupBox::title();
// _ZNK9QGroupBox5titleEv title()
extern "C"
QString*
C_ZNK9QGroupBox5titleEv(void *qthis) {
  auto ret =
  ((QGroupBox*)qthis)->title();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 70, column 10>
//   // proto:  void QGroupBox::setAlignment(int alignment);
// _ZN9QGroupBox12setAlignmentEi setAlignment(int)
extern "C"
void
C_ZN9QGroupBox12setAlignmentEi(void *qthis,
int arg1) {
  ((QGroupBox*)qthis)->setAlignment(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 67, column 10>
//   // proto:  void QGroupBox::setTitle(const QString & title);
// _ZN9QGroupBox8setTitleERK7QString setTitle(const class QString &)
extern "C"
void
C_ZN9QGroupBox8setTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QGroupBox*)qthis)->setTitle(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 63, column 14>
//   // proto:  void QGroupBox::QGroupBox(const QString & title, QWidget * parent);
extern "C"
QGroupBox*
C_ZN9QGroupBoxC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QGroupBox(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgroupbox.h', line 84, column 10>
//   // proto:  void QGroupBox::clicked(bool checked);
// _ZN9QGroupBox7clickedEb clicked(_Bool)
extern "C"
void
C_ZN9QGroupBox7clickedEb(void *qthis,
bool arg1) {
  ((QGroupBox*)qthis)->clicked(arg1);
}
// <= ext block end

// body block begin =>
// QGroupBox_SlotProxy here
class QGroupBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGroupBox_SlotProxy():QObject(){}

public slots:
  // clicked(_Bool)
  void slot_proxy_func__ZN9QGroupBox7clickedEb(bool arg0);
public:
  void (*slot_func__ZN9QGroupBox7clickedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // toggled(_Bool)
  void slot_proxy_func__ZN9QGroupBox7toggledEb(bool arg0);
public:
  void (*slot_func__ZN9QGroupBox7toggledEb)(void* rsfptr, bool arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qgroupbox.moc"

extern "C" {
  QGroupBox_SlotProxy* QGroupBox_SlotProxy_new()
  {
    return new QGroupBox_SlotProxy();
  }
};

void QGroupBox_SlotProxy::slot_proxy_func__ZN9QGroupBox7clickedEb(bool arg0) {
  if (this->slot_func__ZN9QGroupBox7clickedEb != NULL) {
    // do smth...
    this->slot_func__ZN9QGroupBox7clickedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QGroupBox_SlotProxy_connect__ZN9QGroupBox7clickedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGroupBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QGroupBox7clickedEb = (decltype(that->slot_func__ZN9QGroupBox7clickedEb))ffifptr;
  QObject::connect((QGroupBox*)sender, SIGNAL(clicked(_Bool)), that, SLOT(slot_proxy_func__ZN9QGroupBox7clickedEb(bool arg0)));
  return that;
}
extern "C"
void QGroupBox_SlotProxy_disconnect__ZN9QGroupBox7clickedEb(QGroupBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGroupBox_SlotProxy::slot_proxy_func__ZN9QGroupBox7toggledEb(bool arg0) {
  if (this->slot_func__ZN9QGroupBox7toggledEb != NULL) {
    // do smth...
    this->slot_func__ZN9QGroupBox7toggledEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QGroupBox_SlotProxy_connect__ZN9QGroupBox7toggledEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGroupBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QGroupBox7toggledEb = (decltype(that->slot_func__ZN9QGroupBox7toggledEb))ffifptr;
  QObject::connect((QGroupBox*)sender, SIGNAL(toggled(_Bool)), that, SLOT(slot_proxy_func__ZN9QGroupBox7toggledEb(bool arg0)));
  return that;
}
extern "C"
void QGroupBox_SlotProxy_disconnect__ZN9QGroupBox7toggledEb(QGroupBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

