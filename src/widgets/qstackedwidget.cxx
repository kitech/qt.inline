// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qstackedwidget.h
// dst-file: /src/widgets/qstackedwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstackedwidget.h>


// <= header block end

// main block begin =>
void __keep_qstackedwidget_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStackedWidget_Class_Size()
{
  return sizeof(QStackedWidget);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 68, column 10>
//   // proto:  void QStackedWidget::setCurrentIndex(int index);
// _ZN14QStackedWidget15setCurrentIndexEi setCurrentIndex(int)
extern "C"
void
C_ZN14QStackedWidget15setCurrentIndexEi(void *qthis,
int arg1) {
  ((QStackedWidget*)qthis)->setCurrentIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 53, column 14>
//   // proto:  void QStackedWidget::QStackedWidget(QWidget * parent);
extern "C"
QStackedWidget*
C_ZN14QStackedWidgetC2EP7QWidget(QWidget * arg1) {
  auto ret = new QStackedWidget(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 60, column 14>
//   // proto:  QWidget * QStackedWidget::currentWidget();
// _ZNK14QStackedWidget13currentWidgetEv currentWidget()
extern "C"
void*
C_ZNK14QStackedWidget13currentWidgetEv(void *qthis) {
  auto ret =
  ((QStackedWidget*)qthis)->currentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 73, column 10>
//   // proto:  void QStackedWidget::widgetRemoved(int index);
// _ZN14QStackedWidget13widgetRemovedEi widgetRemoved(int)
extern "C"
void
C_ZN14QStackedWidget13widgetRemovedEi(void *qthis,
int arg1) {
  ((QStackedWidget*)qthis)->widgetRemoved(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 57, column 9>
//   // proto:  int QStackedWidget::insertWidget(int index, QWidget * w);
// _ZN14QStackedWidget12insertWidgetEiP7QWidget insertWidget(int, class QWidget *)
extern "C"
int
C_ZN14QStackedWidget12insertWidgetEiP7QWidget(void *qthis,
int arg1,
QWidget * arg2) {
  auto ret =
  ((QStackedWidget*)qthis)->insertWidget(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 63, column 9>
//   // proto:  int QStackedWidget::indexOf(QWidget * );
// _ZNK14QStackedWidget7indexOfEP7QWidget indexOf(class QWidget *)
extern "C"
int
C_ZNK14QStackedWidget7indexOfEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QStackedWidget*)qthis)->indexOf(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 58, column 10>
//   // proto:  void QStackedWidget::removeWidget(QWidget * w);
// _ZN14QStackedWidget12removeWidgetEP7QWidget removeWidget(class QWidget *)
extern "C"
void
C_ZN14QStackedWidget12removeWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QStackedWidget*)qthis)->removeWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 64, column 14>
//   // proto:  QWidget * QStackedWidget::widget(int );
// _ZNK14QStackedWidget6widgetEi widget(int)
extern "C"
void*
C_ZNK14QStackedWidget6widgetEi(void *qthis,
int arg1) {
  auto ret =
  ((QStackedWidget*)qthis)->widget(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 72, column 10>
//   // proto:  void QStackedWidget::currentChanged(int );
// _ZN14QStackedWidget14currentChangedEi currentChanged(int)
extern "C"
void
C_ZN14QStackedWidget14currentChangedEi(void *qthis,
int arg1) {
  ((QStackedWidget*)qthis)->currentChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 56, column 9>
//   // proto:  int QStackedWidget::addWidget(QWidget * w);
// _ZN14QStackedWidget9addWidgetEP7QWidget addWidget(class QWidget *)
extern "C"
int
C_ZN14QStackedWidget9addWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QStackedWidget*)qthis)->addWidget(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 61, column 9>
//   // proto:  int QStackedWidget::currentIndex();
// _ZNK14QStackedWidget12currentIndexEv currentIndex()
extern "C"
int
C_ZNK14QStackedWidget12currentIndexEv(void *qthis) {
  auto ret =
  ((QStackedWidget*)qthis)->currentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 65, column 9>
//   // proto:  int QStackedWidget::count();
// _ZNK14QStackedWidget5countEv count()
extern "C"
int
C_ZNK14QStackedWidget5countEv(void *qthis) {
  auto ret =
  ((QStackedWidget*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 69, column 10>
//   // proto:  void QStackedWidget::setCurrentWidget(QWidget * w);
// _ZN14QStackedWidget16setCurrentWidgetEP7QWidget setCurrentWidget(class QWidget *)
extern "C"
void
C_ZN14QStackedWidget16setCurrentWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QStackedWidget*)qthis)->setCurrentWidget(arg1);
}
//   // proto:  void QStackedWidget::~QStackedWidget();
extern "C"
void C_ZN14QStackedWidgetD2Ev(void *qthis) {
  delete (QStackedWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedwidget.h', line 48, column 5>
//   // proto:  const QMetaObject * QStackedWidget::metaObject();
// _ZNK14QStackedWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QStackedWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QStackedWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QStackedWidget_SlotProxy here
class QStackedWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStackedWidget_SlotProxy():QObject(){}

public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN14QStackedWidget14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedWidget14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // widgetRemoved(int)
  void slot_proxy_func__ZN14QStackedWidget13widgetRemovedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedWidget13widgetRemovedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qstackedwidget.moc"

extern "C" {
  QStackedWidget_SlotProxy* QStackedWidget_SlotProxy_new()
  {
    return new QStackedWidget_SlotProxy();
  }
};

void QStackedWidget_SlotProxy::slot_proxy_func__ZN14QStackedWidget14currentChangedEi(int arg0) {
  if (this->slot_func__ZN14QStackedWidget14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedWidget14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedWidget_SlotProxy_connect__ZN14QStackedWidget14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedWidget14currentChangedEi = (decltype(that->slot_func__ZN14QStackedWidget14currentChangedEi))ffifptr;
  QObject::connect((QStackedWidget*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN14QStackedWidget14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QStackedWidget_SlotProxy_disconnect__ZN14QStackedWidget14currentChangedEi(QStackedWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStackedWidget_SlotProxy::slot_proxy_func__ZN14QStackedWidget13widgetRemovedEi(int arg0) {
  if (this->slot_func__ZN14QStackedWidget13widgetRemovedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedWidget13widgetRemovedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedWidget_SlotProxy_connect__ZN14QStackedWidget13widgetRemovedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedWidget13widgetRemovedEi = (decltype(that->slot_func__ZN14QStackedWidget13widgetRemovedEi))ffifptr;
  QObject::connect((QStackedWidget*)sender, SIGNAL(widgetRemoved(int)), that, SLOT(slot_proxy_func__ZN14QStackedWidget13widgetRemovedEi(int arg0)));
  return that;
}
extern "C"
void QStackedWidget_SlotProxy_disconnect__ZN14QStackedWidget13widgetRemovedEi(QStackedWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

