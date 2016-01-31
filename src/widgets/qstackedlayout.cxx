// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qstackedlayout.h
// dst-file: /src/widgets/qstackedlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstackedlayout.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qstackedlayout_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStackedLayout_Class_Size()
{
  return sizeof(QStackedLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 88, column 10>
//   // proto:  void QStackedLayout::currentChanged(int index);
// _ZN14QStackedLayout14currentChangedEi currentChanged(int)
extern "C"
void
C_ZN14QStackedLayout14currentChangedEi(void *qthis,
int arg1) {
  ((QStackedLayout*)qthis)->currentChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 65, column 9>
//   // proto:  int QStackedLayout::insertWidget(int index, QWidget * w);
// _ZN14QStackedLayout12insertWidgetEiP7QWidget insertWidget(int, class QWidget *)
extern "C"
int
C_ZN14QStackedLayout12insertWidgetEiP7QWidget(void *qthis,
int arg1,
QWidget * arg2) {
  auto ret =
  ((QStackedLayout*)qthis)->insertWidget(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 61, column 14>
//   // proto:  void QStackedLayout::QStackedLayout(QLayout * parentLayout);
extern "C"
QStackedLayout*
C_ZN14QStackedLayoutC2EP7QLayout(QLayout * arg1) {
  auto ret = new QStackedLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 74, column 10>
//   // proto:  void QStackedLayout::setStackingMode(QStackedLayout::StackingMode stackingMode);
// _ZN14QStackedLayout15setStackingModeENS_12StackingModeE setStackingMode(enum QStackedLayout::StackingMode)
extern "C"
void
C_ZN14QStackedLayout15setStackingModeENS_12StackingModeE(void *qthis,
QStackedLayout::StackingMode arg1) {
  ((QStackedLayout*)qthis)->setStackingMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 60, column 14>
//   // proto:  void QStackedLayout::QStackedLayout(QWidget * parent);
extern "C"
QStackedLayout*
C_ZN14QStackedLayoutC2EP7QWidget(QWidget * arg1) {
  auto ret = new QStackedLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 82, column 10>
//   // proto:  void QStackedLayout::setGeometry(const QRect & rect);
// _ZN14QStackedLayout11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN14QStackedLayout11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QStackedLayout*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 73, column 18>
//   // proto:  QStackedLayout::StackingMode QStackedLayout::stackingMode();
// _ZNK14QStackedLayout12stackingModeEv stackingMode()
extern "C"
QStackedLayout::StackingMode
C_ZNK14QStackedLayout12stackingModeEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->stackingMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 67, column 14>
//   // proto:  QWidget * QStackedLayout::currentWidget();
// _ZNK14QStackedLayout13currentWidgetEv currentWidget()
extern "C"
void*
C_ZNK14QStackedLayout13currentWidgetEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->currentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 81, column 18>
//   // proto:  QLayoutItem * QStackedLayout::takeAt(int );
// _ZN14QStackedLayout6takeAtEi takeAt(int)
extern "C"
void*
C_ZN14QStackedLayout6takeAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QStackedLayout*)qthis)->takeAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 79, column 11>
//   // proto:  QSize QStackedLayout::minimumSize();
// _ZNK14QStackedLayout11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK14QStackedLayout11minimumSizeEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 78, column 11>
//   // proto:  QSize QStackedLayout::sizeHint();
// _ZNK14QStackedLayout8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK14QStackedLayout8sizeHintEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 68, column 9>
//   // proto:  int QStackedLayout::currentIndex();
// _ZNK14QStackedLayout12currentIndexEv currentIndex()
extern "C"
int
C_ZNK14QStackedLayout12currentIndexEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->currentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 71, column 9>
//   // proto:  int QStackedLayout::count();
// _ZNK14QStackedLayout5countEv count()
extern "C"
int
C_ZNK14QStackedLayout5countEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 77, column 10>
//   // proto:  void QStackedLayout::addItem(QLayoutItem * item);
// _ZN14QStackedLayout7addItemEP11QLayoutItem addItem(class QLayoutItem *)
extern "C"
void
C_ZN14QStackedLayout7addItemEP11QLayoutItem(void *qthis,
QLayoutItem * arg1) {
  ((QStackedLayout*)qthis)->addItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 92, column 10>
//   // proto:  void QStackedLayout::setCurrentWidget(QWidget * w);
// _ZN14QStackedLayout16setCurrentWidgetEP7QWidget setCurrentWidget(class QWidget *)
extern "C"
void
C_ZN14QStackedLayout16setCurrentWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QStackedLayout*)qthis)->setCurrentWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 46, column 5>
//   // proto:  const QMetaObject * QStackedLayout::metaObject();
// _ZNK14QStackedLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QStackedLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 91, column 10>
//   // proto:  void QStackedLayout::setCurrentIndex(int index);
// _ZN14QStackedLayout15setCurrentIndexEi setCurrentIndex(int)
extern "C"
void
C_ZN14QStackedLayout15setCurrentIndexEi(void *qthis,
int arg1) {
  ((QStackedLayout*)qthis)->setCurrentIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 87, column 10>
//   // proto:  void QStackedLayout::widgetRemoved(int index);
// _ZN14QStackedLayout13widgetRemovedEi widgetRemoved(int)
extern "C"
void
C_ZN14QStackedLayout13widgetRemovedEi(void *qthis,
int arg1) {
  ((QStackedLayout*)qthis)->widgetRemoved(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 80, column 18>
//   // proto:  QLayoutItem * QStackedLayout::itemAt(int );
// _ZNK14QStackedLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK14QStackedLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QStackedLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
//   // proto:  void QStackedLayout::~QStackedLayout();
extern "C"
void C_ZN14QStackedLayoutD2Ev(void *qthis) {
  delete (QStackedLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 64, column 9>
//   // proto:  int QStackedLayout::addWidget(QWidget * w);
// _ZN14QStackedLayout9addWidgetEP7QWidget addWidget(class QWidget *)
extern "C"
int
C_ZN14QStackedLayout9addWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QStackedLayout*)qthis)->addWidget(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 84, column 9>
//   // proto:  int QStackedLayout::heightForWidth(int width);
// _ZNK14QStackedLayout14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK14QStackedLayout14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QStackedLayout*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 83, column 10>
//   // proto:  bool QStackedLayout::hasHeightForWidth();
// _ZNK14QStackedLayout17hasHeightForWidthEv hasHeightForWidth()
extern "C"
bool
C_ZNK14QStackedLayout17hasHeightForWidthEv(void *qthis) {
  auto ret =
  ((QStackedLayout*)qthis)->hasHeightForWidth();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 59, column 5>
//   // proto:  void QStackedLayout::QStackedLayout();
extern "C"
QStackedLayout*
C_ZN14QStackedLayoutC2Ev() {
  auto ret = new QStackedLayout();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstackedlayout.h', line 70, column 14>
//   // proto:  QWidget * QStackedLayout::widget(int );
// _ZNK14QStackedLayout6widgetEi widget(int)
extern "C"
void*
C_ZNK14QStackedLayout6widgetEi(void *qthis,
int arg1) {
  auto ret =
  ((QStackedLayout*)qthis)->widget(arg1);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QStackedLayout_SlotProxy here
class QStackedLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStackedLayout_SlotProxy():QObject(){}

public slots:
  // widgetRemoved(int)
  void slot_proxy_func__ZN14QStackedLayout13widgetRemovedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedLayout13widgetRemovedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // currentChanged(int)
  void slot_proxy_func__ZN14QStackedLayout14currentChangedEi(int arg0);
public:
  void (*slot_func__ZN14QStackedLayout14currentChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qstackedlayout.moc"

extern "C" {
  QStackedLayout_SlotProxy* QStackedLayout_SlotProxy_new()
  {
    return new QStackedLayout_SlotProxy();
  }
};

void QStackedLayout_SlotProxy::slot_proxy_func__ZN14QStackedLayout13widgetRemovedEi(int arg0) {
  if (this->slot_func__ZN14QStackedLayout13widgetRemovedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedLayout13widgetRemovedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedLayout_SlotProxy_connect__ZN14QStackedLayout13widgetRemovedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedLayout13widgetRemovedEi = (decltype(that->slot_func__ZN14QStackedLayout13widgetRemovedEi))ffifptr;
  QObject::connect((QStackedLayout*)sender, SIGNAL(widgetRemoved(int)), that, SLOT(slot_proxy_func__ZN14QStackedLayout13widgetRemovedEi(int arg0)));
  return that;
}
extern "C"
void QStackedLayout_SlotProxy_disconnect__ZN14QStackedLayout13widgetRemovedEi(QStackedLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStackedLayout_SlotProxy::slot_proxy_func__ZN14QStackedLayout14currentChangedEi(int arg0) {
  if (this->slot_func__ZN14QStackedLayout14currentChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN14QStackedLayout14currentChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStackedLayout_SlotProxy_connect__ZN14QStackedLayout14currentChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStackedLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QStackedLayout14currentChangedEi = (decltype(that->slot_func__ZN14QStackedLayout14currentChangedEi))ffifptr;
  QObject::connect((QStackedLayout*)sender, SIGNAL(currentChanged(int)), that, SLOT(slot_proxy_func__ZN14QStackedLayout14currentChangedEi(int arg0)));
  return that;
}
extern "C"
void QStackedLayout_SlotProxy_disconnect__ZN14QStackedLayout14currentChangedEi(QStackedLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

