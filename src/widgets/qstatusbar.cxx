// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qstatusbar.h
// dst-file: /src/widgets/qstatusbar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstatusbar.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qstatusbar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStatusBar_Class_Size()
{
  return sizeof(QStatusBar);
}

// <= use block end

// ext block begin =>
//   // proto:  void QStatusBar::~QStatusBar();
extern "C"
void C_ZN10QStatusBarD2Ev(void *qthis) {
  delete (QStatusBar*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 59, column 9>
//   // proto:  int QStatusBar::insertPermanentWidget(int index, QWidget * widget, int stretch);
// _ZN10QStatusBar21insertPermanentWidgetEiP7QWidgeti insertPermanentWidget(int, class QWidget *, int)
extern "C"
int
C_ZN10QStatusBar21insertPermanentWidgetEiP7QWidgeti(void *qthis,
int arg1,
QWidget * arg2,
int arg3) {
  auto ret =
  ((QStatusBar*)qthis)->insertPermanentWidget(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 60, column 10>
//   // proto:  void QStatusBar::removeWidget(QWidget * widget);
// _ZN10QStatusBar12removeWidgetEP7QWidget removeWidget(class QWidget *)
extern "C"
void
C_ZN10QStatusBar12removeWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QStatusBar*)qthis)->removeWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 62, column 10>
//   // proto:  void QStatusBar::setSizeGripEnabled(bool );
// _ZN10QStatusBar18setSizeGripEnabledEb setSizeGripEnabled(_Bool)
extern "C"
void
C_ZN10QStatusBar18setSizeGripEnabledEb(void *qthis,
bool arg1) {
  ((QStatusBar*)qthis)->setSizeGripEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 58, column 10>
//   // proto:  void QStatusBar::addPermanentWidget(QWidget * widget, int stretch);
// _ZN10QStatusBar18addPermanentWidgetEP7QWidgeti addPermanentWidget(class QWidget *, int)
extern "C"
void
C_ZN10QStatusBar18addPermanentWidgetEP7QWidgeti(void *qthis,
QWidget * arg1,
int arg2) {
  ((QStatusBar*)qthis)->addPermanentWidget(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 63, column 10>
//   // proto:  bool QStatusBar::isSizeGripEnabled();
// _ZNK10QStatusBar17isSizeGripEnabledEv isSizeGripEnabled()
extern "C"
bool
C_ZNK10QStatusBar17isSizeGripEnabledEv(void *qthis) {
  auto ret =
  ((QStatusBar*)qthis)->isSizeGripEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 69, column 10>
//   // proto:  void QStatusBar::clearMessage();
// _ZN10QStatusBar12clearMessageEv clearMessage()
extern "C"
void
C_ZN10QStatusBar12clearMessageEv(void *qthis) {
  ((QStatusBar*)qthis)->clearMessage();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 65, column 13>
//   // proto:  QString QStatusBar::currentMessage();
// _ZNK10QStatusBar14currentMessageEv currentMessage()
extern "C"
QString*
C_ZNK10QStatusBar14currentMessageEv(void *qthis) {
  auto ret =
  ((QStatusBar*)qthis)->currentMessage();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 48, column 5>
//   // proto:  const QMetaObject * QStatusBar::metaObject();
// _ZNK10QStatusBar10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QStatusBar10metaObjectEv(void *qthis) {
  auto ret =
  ((QStatusBar*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 73, column 10>
//   // proto:  void QStatusBar::messageChanged(const QString & text);
// _ZN10QStatusBar14messageChangedERK7QString messageChanged(const class QString &)
extern "C"
void
C_ZN10QStatusBar14messageChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QStatusBar*)qthis)->messageChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 68, column 10>
//   // proto:  void QStatusBar::showMessage(const QString & text, int timeout);
// _ZN10QStatusBar11showMessageERK7QStringi showMessage(const class QString &, int)
extern "C"
void
C_ZN10QStatusBar11showMessageERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  ((QStatusBar*)qthis)->showMessage(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 57, column 9>
//   // proto:  int QStatusBar::insertWidget(int index, QWidget * widget, int stretch);
// _ZN10QStatusBar12insertWidgetEiP7QWidgeti insertWidget(int, class QWidget *, int)
extern "C"
int
C_ZN10QStatusBar12insertWidgetEiP7QWidgeti(void *qthis,
int arg1,
QWidget * arg2,
int arg3) {
  auto ret =
  ((QStatusBar*)qthis)->insertWidget(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 56, column 10>
//   // proto:  void QStatusBar::addWidget(QWidget * widget, int stretch);
// _ZN10QStatusBar9addWidgetEP7QWidgeti addWidget(class QWidget *, int)
extern "C"
void
C_ZN10QStatusBar9addWidgetEP7QWidgeti(void *qthis,
QWidget * arg1,
int arg2) {
  ((QStatusBar*)qthis)->addWidget(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstatusbar.h', line 53, column 14>
//   // proto:  void QStatusBar::QStatusBar(QWidget * parent);
extern "C"
QStatusBar*
C_ZN10QStatusBarC2EP7QWidget(QWidget * arg1) {
  auto ret = new QStatusBar(arg1);
  return ret;
}
// <= ext block end

// body block begin =>
// QStatusBar_SlotProxy here
class QStatusBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStatusBar_SlotProxy():QObject(){}

public slots:
  // messageChanged(const class QString &)
  void slot_proxy_func__ZN10QStatusBar14messageChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QStatusBar14messageChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qstatusbar.moc"

extern "C" {
  QStatusBar_SlotProxy* QStatusBar_SlotProxy_new()
  {
    return new QStatusBar_SlotProxy();
  }
};

void QStatusBar_SlotProxy::slot_proxy_func__ZN10QStatusBar14messageChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QStatusBar14messageChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QStatusBar14messageChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QStatusBar_SlotProxy_connect__ZN10QStatusBar14messageChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStatusBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QStatusBar14messageChangedERK7QString = (decltype(that->slot_func__ZN10QStatusBar14messageChangedERK7QString))ffifptr;
  QObject::connect((QStatusBar*)sender, SIGNAL(messageChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QStatusBar14messageChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QStatusBar_SlotProxy_disconnect__ZN10QStatusBar14messageChangedERK7QString(QStatusBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

