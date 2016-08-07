// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qmdisubwindow.h
// dst-file: /src/widgets/qmdisubwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmdisubwindow.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qmdisubwindow_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMdiSubWindow_Class_Size()
{
  return sizeof(QMdiSubWindow);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 87, column 9>
//   // proto:  int QMdiSubWindow::keyboardSingleStep();
// _ZNK13QMdiSubWindow18keyboardSingleStepEv keyboardSingleStep()
extern "C"
int
C_ZNK13QMdiSubWindow18keyboardSingleStepEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->keyboardSingleStep();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 90, column 9>
//   // proto:  int QMdiSubWindow::keyboardPageStep();
// _ZNK13QMdiSubWindow16keyboardPageStepEv keyboardPageStep()
extern "C"
int
C_ZNK13QMdiSubWindow16keyboardPageStepEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->keyboardPageStep();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 100, column 10>
//   // proto:  void QMdiSubWindow::windowStateChanged(Qt::WindowStates oldState, Qt::WindowStates newState);
// _ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_ windowStateChanged(Qt::WindowStates, Qt::WindowStates)
extern "C"
void
C_ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(void *qthis,
Qt::WindowStates* arg1,
Qt::WindowStates* arg2) {
  ((QMdiSubWindow*)qthis)->windowStateChanged(*((Qt::WindowStates*)arg1),
*((Qt::WindowStates*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 57, column 5>
//   // proto:  const QMetaObject * QMdiSubWindow::metaObject();
// _ZNK13QMdiSubWindow10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QMdiSubWindow10metaObjectEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 72, column 11>
//   // proto:  QSize QMdiSubWindow::sizeHint();
// _ZNK13QMdiSubWindow8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK13QMdiSubWindow8sizeHintEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 79, column 14>
//   // proto:  QWidget * QMdiSubWindow::maximizedSystemMenuIconWidget();
// _ZNK13QMdiSubWindow29maximizedSystemMenuIconWidgetEv maximizedSystemMenuIconWidget()
extern "C"
void*
C_ZNK13QMdiSubWindow29maximizedSystemMenuIconWidgetEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->maximizedSystemMenuIconWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 93, column 10>
//   // proto:  void QMdiSubWindow::setSystemMenu(QMenu * systemMenu);
// _ZN13QMdiSubWindow13setSystemMenuEP5QMenu setSystemMenu(class QMenu *)
extern "C"
void
C_ZN13QMdiSubWindow13setSystemMenuEP5QMenu(void *qthis,
QMenu * arg1) {
  ((QMdiSubWindow*)qthis)->setSystemMenu(arg1);
}
//   // proto:  void QMdiSubWindow::~QMdiSubWindow();
extern "C"
void C_ZN13QMdiSubWindowD2Ev(void *qthis) {
  delete (QMdiSubWindow*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 83, column 10>
//   // proto:  void QMdiSubWindow::setOption(QMdiSubWindow::SubWindowOption option, bool on);
// _ZN13QMdiSubWindow9setOptionENS_15SubWindowOptionEb setOption(enum QMdiSubWindow::SubWindowOption, _Bool)
extern "C"
void
C_ZN13QMdiSubWindow9setOptionENS_15SubWindowOptionEb(void *qthis,
QMdiSubWindow::SubWindowOption arg1,
bool arg2) {
  ((QMdiSubWindow*)qthis)->setOption(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 86, column 10>
//   // proto:  void QMdiSubWindow::setKeyboardSingleStep(int step);
// _ZN13QMdiSubWindow21setKeyboardSingleStepEi setKeyboardSingleStep(int)
extern "C"
void
C_ZN13QMdiSubWindow21setKeyboardSingleStepEi(void *qthis,
int arg1) {
  ((QMdiSubWindow*)qthis)->setKeyboardSingleStep(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 76, column 14>
//   // proto:  QWidget * QMdiSubWindow::widget();
// _ZNK13QMdiSubWindow6widgetEv widget()
extern "C"
void*
C_ZNK13QMdiSubWindow6widgetEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 84, column 10>
//   // proto:  bool QMdiSubWindow::testOption(QMdiSubWindow::SubWindowOption );
// _ZNK13QMdiSubWindow10testOptionENS_15SubWindowOptionE testOption(enum QMdiSubWindow::SubWindowOption)
extern "C"
bool
C_ZNK13QMdiSubWindow10testOptionENS_15SubWindowOptionE(void *qthis,
QMdiSubWindow::SubWindowOption arg1) {
  auto ret =
  ((QMdiSubWindow*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 107, column 10>
//   // proto:  void QMdiSubWindow::showShaded();
// _ZN13QMdiSubWindow10showShadedEv showShaded()
extern "C"
void
C_ZN13QMdiSubWindow10showShadedEv(void *qthis) {
  ((QMdiSubWindow*)qthis)->showShaded();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 78, column 14>
//   // proto:  QWidget * QMdiSubWindow::maximizedButtonsWidget();
// _ZNK13QMdiSubWindow22maximizedButtonsWidgetEv maximizedButtonsWidget()
extern "C"
void*
C_ZNK13QMdiSubWindow22maximizedButtonsWidgetEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->maximizedButtonsWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 73, column 11>
//   // proto:  QSize QMdiSubWindow::minimumSizeHint();
// _ZNK13QMdiSubWindow15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK13QMdiSubWindow15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 101, column 10>
//   // proto:  void QMdiSubWindow::aboutToActivate();
// _ZN13QMdiSubWindow15aboutToActivateEv aboutToActivate()
extern "C"
void
C_ZN13QMdiSubWindow15aboutToActivateEv(void *qthis) {
  ((QMdiSubWindow*)qthis)->aboutToActivate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 105, column 10>
//   // proto:  void QMdiSubWindow::showSystemMenu();
// _ZN13QMdiSubWindow14showSystemMenuEv showSystemMenu()
extern "C"
void
C_ZN13QMdiSubWindow14showSystemMenuEv(void *qthis) {
  ((QMdiSubWindow*)qthis)->showSystemMenu();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 94, column 12>
//   // proto:  QMenu * QMdiSubWindow::systemMenu();
// _ZNK13QMdiSubWindow10systemMenuEv systemMenu()
extern "C"
void*
C_ZNK13QMdiSubWindow10systemMenuEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->systemMenu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 69, column 5>
//   // proto:  void QMdiSubWindow::QMdiSubWindow(QWidget * parent, Qt::WindowFlags flags);
extern "C"
QMdiSubWindow*
C_ZN13QMdiSubWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QMdiSubWindow(arg1,
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 75, column 10>
//   // proto:  void QMdiSubWindow::setWidget(QWidget * widget);
// _ZN13QMdiSubWindow9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN13QMdiSubWindow9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QMdiSubWindow*)qthis)->setWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 81, column 10>
//   // proto:  bool QMdiSubWindow::isShaded();
// _ZNK13QMdiSubWindow8isShadedEv isShaded()
extern "C"
bool
C_ZNK13QMdiSubWindow8isShadedEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->isShaded();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 97, column 15>
//   // proto:  QMdiArea * QMdiSubWindow::mdiArea();
// _ZNK13QMdiSubWindow7mdiAreaEv mdiArea()
extern "C"
void*
C_ZNK13QMdiSubWindow7mdiAreaEv(void *qthis) {
  auto ret =
  ((QMdiSubWindow*)qthis)->mdiArea();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdisubwindow.h', line 89, column 10>
//   // proto:  void QMdiSubWindow::setKeyboardPageStep(int step);
// _ZN13QMdiSubWindow19setKeyboardPageStepEi setKeyboardPageStep(int)
extern "C"
void
C_ZN13QMdiSubWindow19setKeyboardPageStepEi(void *qthis,
int arg1) {
  ((QMdiSubWindow*)qthis)->setKeyboardPageStep(arg1);
}
// <= ext block end

// body block begin =>
// QMdiSubWindow_SlotProxy here
class QMdiSubWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMdiSubWindow_SlotProxy():QObject(){}

public slots:
  // windowStateChanged(Qt::WindowStates, Qt::WindowStates)
  void slot_proxy_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(Qt::WindowStates arg0, Qt::WindowStates arg1);
public:
  void (*slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_)(void* rsfptr, Qt::WindowStates arg0, Qt::WindowStates arg1) = NULL;
public slots:
  // aboutToActivate()
  void slot_proxy_func__ZN13QMdiSubWindow15aboutToActivateEv();
public:
  void (*slot_func__ZN13QMdiSubWindow15aboutToActivateEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmdisubwindow.moc"

extern "C" {
  QMdiSubWindow_SlotProxy* QMdiSubWindow_SlotProxy_new()
  {
    return new QMdiSubWindow_SlotProxy();
  }
};

void QMdiSubWindow_SlotProxy::slot_proxy_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(Qt::WindowStates arg0, Qt::WindowStates arg1) {
  if (this->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_ != NULL) {
    // do smth...
    this->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QMdiSubWindow_SlotProxy_connect__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMdiSubWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_ = (decltype(that->slot_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_))ffifptr;
  QObject::connect((QMdiSubWindow*)sender, SIGNAL(windowStateChanged(Qt::WindowStates, Qt::WindowStates)), that, SLOT(slot_proxy_func__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(Qt::WindowStates arg0, Qt::WindowStates arg1)));
  return that;
}
extern "C"
void QMdiSubWindow_SlotProxy_disconnect__ZN13QMdiSubWindow18windowStateChangedE6QFlagsIN2Qt11WindowStateEES3_(QMdiSubWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMdiSubWindow_SlotProxy::slot_proxy_func__ZN13QMdiSubWindow15aboutToActivateEv() {
  if (this->slot_func__ZN13QMdiSubWindow15aboutToActivateEv != NULL) {
    // do smth...
    this->slot_func__ZN13QMdiSubWindow15aboutToActivateEv(this->rsfptr);
  }
}
extern "C"
void* QMdiSubWindow_SlotProxy_connect__ZN13QMdiSubWindow15aboutToActivateEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMdiSubWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QMdiSubWindow15aboutToActivateEv = (decltype(that->slot_func__ZN13QMdiSubWindow15aboutToActivateEv))ffifptr;
  QObject::connect((QMdiSubWindow*)sender, SIGNAL(aboutToActivate()), that, SLOT(slot_proxy_func__ZN13QMdiSubWindow15aboutToActivateEv()));
  return that;
}
extern "C"
void QMdiSubWindow_SlotProxy_disconnect__ZN13QMdiSubWindow15aboutToActivateEv(QMdiSubWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

