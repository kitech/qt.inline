// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qtoolbox.h
// dst-file: /src/widgets/qtoolbox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtoolbox.h>


#include <qstring.h>
#include <qicon.h>
// <= header block end

// main block begin =>
void __keep_qtoolbox_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 59, column 9>
//   // proto:  int QToolBox::insertItem(int index, QWidget * widget, const QString & text);
if (true) {
  auto f = [](QToolBox flythis, int arg1, QWidget * arg2, const QString & arg3) {
    ((QToolBox*)0)->insertItem(arg1, arg2, arg3);
    flythis.insertItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QToolBox10insertItemEiP7QWidgetRK7QString insertItem(int, class QWidget *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 57, column 9>
//   // proto:  int QToolBox::addItem(QWidget * widget, const QString & text);
if (true) {
  auto f = [](QToolBox flythis, QWidget * arg1, const QString & arg2) {
    ((QToolBox*)0)->addItem(arg1, arg2);
    flythis.addItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN8QToolBox7addItemEP7QWidgetRK7QString addItem(class QWidget *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 58, column 9>
//   // proto:  int QToolBox::addItem(QWidget * widget, const QIcon & icon, const QString & text);
if (true) {
  auto f = [](QToolBox flythis, QWidget * arg1, const QIcon & arg2, const QString & arg3) {
    ((QToolBox*)0)->addItem(arg1, arg2, arg3);
    flythis.addItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString addItem(class QWidget *, const class QIcon &, const class QString &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QToolBox_Class_Size()
{
  return sizeof(QToolBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 62, column 10>
//   // proto:  void QToolBox::removeItem(int index);
// _ZN8QToolBox10removeItemEi removeItem(int)
extern "C"
void
C_ZN8QToolBox10removeItemEi(void *qthis,
int arg1) {
  ((QToolBox*)qthis)->removeItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 59, column 9>
//   // proto:  int QToolBox::insertItem(int index, QWidget * widget, const QString & text);
// _ZN8QToolBox10insertItemEiP7QWidgetRK7QString insertItem(int, class QWidget *, const class QString &)
extern "C"
int
C_ZN8QToolBox10insertItemEiP7QWidgetRK7QString(void *qthis,
int arg1,
QWidget * arg2,
const QString* arg3) {
  auto ret =
  ((QToolBox*)qthis)->insertItem(arg1,
arg2,
*((const QString*)arg3));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 68, column 13>
//   // proto:  QString QToolBox::itemText(int index);
// _ZNK8QToolBox8itemTextEi itemText(int)
extern "C"
QString*
C_ZNK8QToolBox8itemTextEi(void *qthis,
int arg1) {
  auto ret =
  ((QToolBox*)qthis)->itemText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 81, column 9>
//   // proto:  int QToolBox::indexOf(QWidget * widget);
// _ZNK8QToolBox7indexOfEP7QWidget indexOf(class QWidget *)
extern "C"
int
C_ZNK8QToolBox7indexOfEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QToolBox*)qthis)->indexOf(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 75, column 13>
//   // proto:  QString QToolBox::itemToolTip(int index);
// _ZNK8QToolBox11itemToolTipEi itemToolTip(int)
extern "C"
QString*
C_ZNK8QToolBox11itemToolTipEi(void *qthis,
int arg1) {
  auto ret =
  ((QToolBox*)qthis)->itemToolTip(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 86, column 10>
//   // proto:  void QToolBox::setCurrentWidget(QWidget * widget);
// _ZN8QToolBox16setCurrentWidgetEP7QWidget setCurrentWidget(class QWidget *)
extern "C"
void
C_ZN8QToolBox16setCurrentWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QToolBox*)qthis)->setCurrentWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 85, column 10>
//   // proto:  void QToolBox::setCurrentIndex(int index);
// _ZN8QToolBox15setCurrentIndexEi setCurrentIndex(int)
extern "C"
void
C_ZN8QToolBox15setCurrentIndexEi(void *qthis,
int arg1) {
  ((QToolBox*)qthis)->setCurrentIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 70, column 10>
//   // proto:  void QToolBox::setItemIcon(int index, const QIcon & icon);
// _ZN8QToolBox11setItemIconEiRK5QIcon setItemIcon(int, const class QIcon &)
extern "C"
void
C_ZN8QToolBox11setItemIconEiRK5QIcon(void *qthis,
int arg1,
const QIcon* arg2) {
  ((QToolBox*)qthis)->setItemIcon(arg1,
*((const QIcon*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 67, column 10>
//   // proto:  void QToolBox::setItemText(int index, const QString & text);
// _ZN8QToolBox11setItemTextEiRK7QString setItemText(int, const class QString &)
extern "C"
void
C_ZN8QToolBox11setItemTextEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QToolBox*)qthis)->setItemText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 82, column 9>
//   // proto:  int QToolBox::count();
// _ZNK8QToolBox5countEv count()
extern "C"
int
C_ZNK8QToolBox5countEv(void *qthis) {
  auto ret =
  ((QToolBox*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 49, column 5>
//   // proto:  const QMetaObject * QToolBox::metaObject();
// _ZNK8QToolBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QToolBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QToolBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 80, column 14>
//   // proto:  QWidget * QToolBox::widget(int index);
// _ZNK8QToolBox6widgetEi widget(int)
extern "C"
void*
C_ZNK8QToolBox6widgetEi(void *qthis,
int arg1) {
  auto ret =
  ((QToolBox*)qthis)->widget(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 74, column 10>
//   // proto:  void QToolBox::setItemToolTip(int index, const QString & toolTip);
// _ZN8QToolBox14setItemToolTipEiRK7QString setItemToolTip(int, const class QString &)
extern "C"
void
C_ZN8QToolBox14setItemToolTipEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QToolBox*)qthis)->setItemToolTip(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 78, column 9>
//   // proto:  int QToolBox::currentIndex();
// _ZNK8QToolBox12currentIndexEv currentIndex()
extern "C"
int
C_ZNK8QToolBox12currentIndexEv(void *qthis) {
  auto ret =
  ((QToolBox*)qthis)->currentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 79, column 14>
//   // proto:  QWidget * QToolBox::currentWidget();
// _ZNK8QToolBox13currentWidgetEv currentWidget()
extern "C"
void*
C_ZNK8QToolBox13currentWidgetEv(void *qthis) {
  auto ret =
  ((QToolBox*)qthis)->currentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 57, column 9>
//   // proto:  int QToolBox::addItem(QWidget * widget, const QString & text);
// _ZN8QToolBox7addItemEP7QWidgetRK7QString addItem(class QWidget *, const class QString &)
extern "C"
int
C_ZN8QToolBox7addItemEP7QWidgetRK7QString(void *qthis,
QWidget * arg1,
const QString* arg2) {
  auto ret =
  ((QToolBox*)qthis)->addItem(arg1,
*((const QString*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 65, column 10>
//   // proto:  bool QToolBox::isItemEnabled(int index);
// _ZNK8QToolBox13isItemEnabledEi isItemEnabled(int)
extern "C"
bool
C_ZNK8QToolBox13isItemEnabledEi(void *qthis,
int arg1) {
  auto ret =
  ((QToolBox*)qthis)->isItemEnabled(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 64, column 10>
//   // proto:  void QToolBox::setItemEnabled(int index, bool enabled);
// _ZN8QToolBox14setItemEnabledEib setItemEnabled(int, _Bool)
extern "C"
void
C_ZN8QToolBox14setItemEnabledEib(void *qthis,
int arg1,
bool arg2) {
  ((QToolBox*)qthis)->setItemEnabled(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 89, column 10>
//   // proto:  void QToolBox::currentChanged(int index);
// _ZN8QToolBox14currentChangedEi currentChanged(int)
extern "C"
void
C_ZN8QToolBox14currentChangedEi(void *qthis,
int arg1) {
  ((QToolBox*)qthis)->currentChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 71, column 11>
//   // proto:  QIcon QToolBox::itemIcon(int index);
// _ZNK8QToolBox8itemIconEi itemIcon(int)
extern "C"
QIcon*
C_ZNK8QToolBox8itemIconEi(void *qthis,
int arg1) {
  auto ret =
  ((QToolBox*)qthis)->itemIcon(arg1);
  return new QIcon(ret); // 5
}
//   // proto:  void QToolBox::~QToolBox();
extern "C"
void C_ZN8QToolBoxD2Ev(void *qthis) {
  delete (QToolBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 58, column 9>
//   // proto:  int QToolBox::addItem(QWidget * widget, const QIcon & icon, const QString & text);
// _ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString addItem(class QWidget *, const class QIcon &, const class QString &)
extern "C"
int
C_ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString(void *qthis,
QWidget * arg1,
const QIcon* arg2,
const QString* arg3) {
  auto ret =
  ((QToolBox*)qthis)->addItem(arg1,
*((const QIcon*)arg2),
*((const QString*)arg3));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 60, column 9>
//   // proto:  int QToolBox::insertItem(int index, QWidget * widget, const QIcon & icon, const QString & text);
// _ZN8QToolBox10insertItemEiP7QWidgetRK5QIconRK7QString insertItem(int, class QWidget *, const class QIcon &, const class QString &)
extern "C"
int
C_ZN8QToolBox10insertItemEiP7QWidgetRK5QIconRK7QString(void *qthis,
int arg1,
QWidget * arg2,
const QIcon* arg3,
const QString* arg4) {
  auto ret =
  ((QToolBox*)qthis)->insertItem(arg1,
arg2,
*((const QIcon*)arg3),
*((const QString*)arg4));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbox.h', line 54, column 14>
//   // proto:  void QToolBox::QToolBox(QWidget * parent, Qt::WindowFlags f);
extern "C"
QToolBox*
C_ZN8QToolBoxC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QToolBox(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
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

