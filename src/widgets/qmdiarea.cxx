// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qmdiarea.h
// dst-file: /src/widgets/qmdiarea.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmdiarea.h>


#include <qtabwidget.h>
#include <qlist.h>
#include <qapplication.h>
#include <qsize.h>
#include <qbrush.h>
// <= header block end

// main block begin =>
void __keep_qmdiarea_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMdiArea_Class_Size()
{
  return sizeof(QMdiArea);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 134, column 10>
//   // proto:  void QMdiArea::activateNextSubWindow();
// _ZN8QMdiArea21activateNextSubWindowEv activateNextSubWindow()
extern "C"
void
C_ZN8QMdiArea21activateNextSubWindowEv(void *qthis) {
  ((QMdiArea*)qthis)->activateNextSubWindow();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 96, column 10>
//   // proto:  void QMdiArea::setBackground(const QBrush & background);
// _ZN8QMdiArea13setBackgroundERK6QBrush setBackground(const class QBrush &)
extern "C"
void
C_ZN8QMdiArea13setBackgroundERK6QBrush(void *qthis,
const QBrush* arg1) {
  ((QMdiArea*)qthis)->setBackground(*((const QBrush*)arg1));
}
//   // proto:  void QMdiArea::~QMdiArea();
extern "C"
void C_ZN8QMdiAreaD2Ev(void *qthis) {
  delete (QMdiArea*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 102, column 10>
//   // proto:  bool QMdiArea::testOption(QMdiArea::AreaOption opton);
// _ZNK8QMdiArea10testOptionENS_10AreaOptionE testOption(enum QMdiArea::AreaOption)
extern "C"
bool
C_ZNK8QMdiArea10testOptionENS_10AreaOptionE(void *qthis,
QMdiArea::AreaOption arg1) {
  auto ret =
  ((QMdiArea*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 105, column 14>
//   // proto:  QMdiArea::ViewMode QMdiArea::viewMode();
// _ZNK8QMdiArea8viewModeEv viewMode()
extern "C"
QMdiArea::ViewMode
C_ZNK8QMdiArea8viewModeEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->viewMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 93, column 10>
//   // proto:  void QMdiArea::removeSubWindow(QWidget * widget);
// _ZN8QMdiArea15removeSubWindowEP7QWidget removeSubWindow(class QWidget *)
extern "C"
void
C_ZN8QMdiArea15removeSubWindowEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QMdiArea*)qthis)->removeSubWindow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 111, column 10>
//   // proto:  void QMdiArea::setTabsClosable(bool closable);
// _ZN8QMdiArea15setTabsClosableEb setTabsClosable(_Bool)
extern "C"
void
C_ZN8QMdiArea15setTabsClosableEb(void *qthis,
bool arg1) {
  ((QMdiArea*)qthis)->setTabsClosable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 88, column 20>
//   // proto:  QMdiSubWindow * QMdiArea::currentSubWindow();
// _ZNK8QMdiArea16currentSubWindowEv currentSubWindow()
extern "C"
void*
C_ZNK8QMdiArea16currentSubWindowEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->currentSubWindow();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 92, column 20>
//   // proto:  QMdiSubWindow * QMdiArea::addSubWindow(QWidget * widget, Qt::WindowFlags flags);
// _ZN8QMdiArea12addSubWindowEP7QWidget6QFlagsIN2Qt10WindowTypeEE addSubWindow(class QWidget *, Qt::WindowFlags)
extern "C"
void*
C_ZN8QMdiArea12addSubWindowEP7QWidget6QFlagsIN2Qt10WindowTypeEE(void *qthis,
QWidget * arg1,
Qt::WindowFlags* arg2) {
  auto ret =
  ((QMdiArea*)qthis)->addSubWindow(arg1,
*((Qt::WindowFlags*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 101, column 10>
//   // proto:  void QMdiArea::setOption(QMdiArea::AreaOption option, bool on);
// _ZN8QMdiArea9setOptionENS_10AreaOptionEb setOption(enum QMdiArea::AreaOption, _Bool)
extern "C"
void
C_ZN8QMdiArea9setOptionENS_10AreaOptionEb(void *qthis,
QMdiArea::AreaOption arg1,
bool arg2) {
  ((QMdiArea*)qthis)->setOption(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 119, column 26>
//   // proto:  QTabWidget::TabShape QMdiArea::tabShape();
// _ZNK8QMdiArea8tabShapeEv tabShape()
extern "C"
QTabWidget::TabShape
C_ZNK8QMdiArea8tabShapeEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->tabShape();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 99, column 10>
//   // proto:  void QMdiArea::setActivationOrder(QMdiArea::WindowOrder order);
// _ZN8QMdiArea18setActivationOrderENS_11WindowOrderE setActivationOrder(enum QMdiArea::WindowOrder)
extern "C"
void
C_ZN8QMdiArea18setActivationOrderENS_11WindowOrderE(void *qthis,
QMdiArea::WindowOrder arg1) {
  ((QMdiArea*)qthis)->setActivationOrder(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 122, column 29>
//   // proto:  QTabWidget::TabPosition QMdiArea::tabPosition();
// _ZNK8QMdiArea11tabPositionEv tabPosition()
extern "C"
QTabWidget::TabPosition
C_ZNK8QMdiArea11tabPositionEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->tabPosition();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 98, column 17>
//   // proto:  QMdiArea::WindowOrder QMdiArea::activationOrder();
// _ZNK8QMdiArea15activationOrderEv activationOrder()
extern "C"
QMdiArea::WindowOrder
C_ZNK8QMdiArea15activationOrderEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->activationOrder();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 115, column 10>
//   // proto:  bool QMdiArea::tabsMovable();
// _ZNK8QMdiArea11tabsMovableEv tabsMovable()
extern "C"
bool
C_ZNK8QMdiArea11tabsMovableEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->tabsMovable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 135, column 10>
//   // proto:  void QMdiArea::activatePreviousSubWindow();
// _ZN8QMdiArea25activatePreviousSubWindowEv activatePreviousSubWindow()
extern "C"
void
C_ZN8QMdiArea25activatePreviousSubWindowEv(void *qthis) {
  ((QMdiArea*)qthis)->activatePreviousSubWindow();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 109, column 10>
//   // proto:  void QMdiArea::setDocumentMode(bool enabled);
// _ZN8QMdiArea15setDocumentModeEb setDocumentMode(_Bool)
extern "C"
void
C_ZN8QMdiArea15setDocumentModeEb(void *qthis,
bool arg1) {
  ((QMdiArea*)qthis)->setDocumentMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 108, column 10>
//   // proto:  bool QMdiArea::documentMode();
// _ZNK8QMdiArea12documentModeEv documentMode()
extern "C"
bool
C_ZNK8QMdiArea12documentModeEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->documentMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 90, column 28>
//   // proto:  QList<QMdiSubWindow *> QMdiArea::subWindowList(QMdiArea::WindowOrder order);
// _ZNK8QMdiArea13subWindowListENS_11WindowOrderE subWindowList(enum QMdiArea::WindowOrder)
extern "C"
QList<QMdiSubWindow *>*
C_ZNK8QMdiArea13subWindowListENS_11WindowOrderE(void *qthis,
QMdiArea::WindowOrder arg1) {
  auto ret =
  ((QMdiArea*)qthis)->subWindowList(arg1);
  return new QList<QMdiSubWindow *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 129, column 10>
//   // proto:  void QMdiArea::setActiveSubWindow(QMdiSubWindow * window);
// _ZN8QMdiArea18setActiveSubWindowEP13QMdiSubWindow setActiveSubWindow(class QMdiSubWindow *)
extern "C"
void
C_ZN8QMdiArea18setActiveSubWindowEP13QMdiSubWindow(void *qthis,
QMdiSubWindow * arg1) {
  ((QMdiArea*)qthis)->setActiveSubWindow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 104, column 10>
//   // proto:  void QMdiArea::setViewMode(QMdiArea::ViewMode mode);
// _ZN8QMdiArea11setViewModeENS_8ViewModeE setViewMode(enum QMdiArea::ViewMode)
extern "C"
void
C_ZN8QMdiArea11setViewModeENS_8ViewModeE(void *qthis,
QMdiArea::ViewMode arg1) {
  ((QMdiArea*)qthis)->setViewMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 89, column 20>
//   // proto:  QMdiSubWindow * QMdiArea::activeSubWindow();
// _ZNK8QMdiArea15activeSubWindowEv activeSubWindow()
extern "C"
void*
C_ZNK8QMdiArea15activeSubWindowEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->activeSubWindow();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 114, column 10>
//   // proto:  void QMdiArea::setTabsMovable(bool movable);
// _ZN8QMdiArea14setTabsMovableEb setTabsMovable(_Bool)
extern "C"
void
C_ZN8QMdiArea14setTabsMovableEb(void *qthis,
bool arg1) {
  ((QMdiArea*)qthis)->setTabsMovable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 50, column 5>
//   // proto:  const QMetaObject * QMdiArea::metaObject();
// _ZNK8QMdiArea10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QMdiArea10metaObjectEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 82, column 5>
//   // proto:  void QMdiArea::QMdiArea(QWidget * parent);
extern "C"
QMdiArea*
C_ZN8QMdiAreaC2EP7QWidget(QWidget * arg1) {
  auto ret = new QMdiArea(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 85, column 11>
//   // proto:  QSize QMdiArea::sizeHint();
// _ZNK8QMdiArea8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK8QMdiArea8sizeHintEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 133, column 10>
//   // proto:  void QMdiArea::closeAllSubWindows();
// _ZN8QMdiArea18closeAllSubWindowsEv closeAllSubWindows()
extern "C"
void
C_ZN8QMdiArea18closeAllSubWindowsEv(void *qthis) {
  ((QMdiArea*)qthis)->closeAllSubWindows();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 126, column 10>
//   // proto:  void QMdiArea::subWindowActivated(QMdiSubWindow * );
// _ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow subWindowActivated(class QMdiSubWindow *)
extern "C"
void
C_ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(void *qthis,
QMdiSubWindow * arg1) {
  ((QMdiArea*)qthis)->subWindowActivated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 118, column 10>
//   // proto:  void QMdiArea::setTabShape(QTabWidget::TabShape shape);
// _ZN8QMdiArea11setTabShapeEN10QTabWidget8TabShapeE setTabShape(class QTabWidget::TabShape)
extern "C"
void
C_ZN8QMdiArea11setTabShapeEN10QTabWidget8TabShapeE(void *qthis,
QTabWidget::TabShape* arg1) {
  ((QMdiArea*)qthis)->setTabShape(*((QTabWidget::TabShape*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 131, column 10>
//   // proto:  void QMdiArea::cascadeSubWindows();
// _ZN8QMdiArea17cascadeSubWindowsEv cascadeSubWindows()
extern "C"
void
C_ZN8QMdiArea17cascadeSubWindowsEv(void *qthis) {
  ((QMdiArea*)qthis)->cascadeSubWindows();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 132, column 10>
//   // proto:  void QMdiArea::closeActiveSubWindow();
// _ZN8QMdiArea20closeActiveSubWindowEv closeActiveSubWindow()
extern "C"
void
C_ZN8QMdiArea20closeActiveSubWindowEv(void *qthis) {
  ((QMdiArea*)qthis)->closeActiveSubWindow();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 95, column 12>
//   // proto:  QBrush QMdiArea::background();
// _ZNK8QMdiArea10backgroundEv background()
extern "C"
QBrush*
C_ZNK8QMdiArea10backgroundEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->background();
  return new QBrush(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 130, column 10>
//   // proto:  void QMdiArea::tileSubWindows();
// _ZN8QMdiArea14tileSubWindowsEv tileSubWindows()
extern "C"
void
C_ZN8QMdiArea14tileSubWindowsEv(void *qthis) {
  ((QMdiArea*)qthis)->tileSubWindows();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 112, column 10>
//   // proto:  bool QMdiArea::tabsClosable();
// _ZNK8QMdiArea12tabsClosableEv tabsClosable()
extern "C"
bool
C_ZNK8QMdiArea12tabsClosableEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->tabsClosable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 121, column 10>
//   // proto:  void QMdiArea::setTabPosition(QTabWidget::TabPosition position);
// _ZN8QMdiArea14setTabPositionEN10QTabWidget11TabPositionE setTabPosition(class QTabWidget::TabPosition)
extern "C"
void
C_ZN8QMdiArea14setTabPositionEN10QTabWidget11TabPositionE(void *qthis,
QTabWidget::TabPosition* arg1) {
  ((QMdiArea*)qthis)->setTabPosition(*((QTabWidget::TabPosition*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmdiarea.h', line 86, column 11>
//   // proto:  QSize QMdiArea::minimumSizeHint();
// _ZNK8QMdiArea15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK8QMdiArea15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QMdiArea*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <= ext block end

// body block begin =>
// QMdiArea_SlotProxy here
class QMdiArea_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMdiArea_SlotProxy():QObject(){}

public slots:
  // subWindowActivated(class QMdiSubWindow *)
  void slot_proxy_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiSubWindow * arg0);
public:
  void (*slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow)(void* rsfptr, QMdiSubWindow * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmdiarea.moc"

extern "C" {
  QMdiArea_SlotProxy* QMdiArea_SlotProxy_new()
  {
    return new QMdiArea_SlotProxy();
  }
};

void QMdiArea_SlotProxy::slot_proxy_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiSubWindow * arg0) {
  if (this->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow != NULL) {
    // do smth...
    this->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(this->rsfptr, arg0);
  }
}
extern "C"
void* QMdiArea_SlotProxy_connect__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMdiArea_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow = (decltype(that->slot_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow))ffifptr;
  QObject::connect((QMdiArea*)sender, SIGNAL(subWindowActivated(class QMdiSubWindow *)), that, SLOT(slot_proxy_func__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiSubWindow * arg0)));
  return that;
}
extern "C"
void QMdiArea_SlotProxy_disconnect__ZN8QMdiArea18subWindowActivatedEP13QMdiSubWindow(QMdiArea_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

