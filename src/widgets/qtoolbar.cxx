// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qtoolbar.h
// dst-file: /src/widgets/qtoolbar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtoolbar.h>


#include <qnamespace.h>
#include <qsize.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qtoolbar_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 104, column 21>
//   // proto:  QAction * QToolBar::actionAt(int x, int y);
if (true) {
  auto f = [](QToolBar flythis, int arg1, int arg2) {
    ((QToolBar*)0)->actionAt(arg1, arg2);
    flythis.actionAt(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK8QToolBar8actionAtEii actionAt(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 81, column 17>
//   // proto:  bool QToolBar::isAreaAllowed(Qt::ToolBarArea area);
if (true) {
  auto f = [](QToolBar flythis, Qt::ToolBarArea arg1) {
    ((QToolBar*)0)->isAreaAllowed(arg1);
    flythis.isAreaAllowed(arg1);
  };
  if (f == nullptr){}
}
// _ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE isAreaAllowed(Qt::ToolBarArea)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QToolBar_Class_Size()
{
  return sizeof(QToolBar);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 93, column 14>
//   // proto:  QAction * QToolBar::addAction(const QIcon & icon, const QString & text, const QObject * receiver, const char * member);
// _ZN8QToolBar9addActionERK5QIconRK7QStringPK7QObjectPKc addAction(const class QIcon &, const class QString &, const class QObject *, const char *)
extern "C"
void*
C_ZN8QToolBar9addActionERK5QIconRK7QStringPK7QObjectPKc(void *qthis,
const QIcon* arg1,
const QString* arg2,
const QObject * arg3,
const char * arg4) {
  auto ret =
  ((QToolBar*)qthis)->addAction(*((const QIcon*)arg1),
*((const QString*)arg2),
arg3,
arg4);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 113, column 10>
//   // proto:  bool QToolBar::isFloatable();
// _ZNK8QToolBar11isFloatableEv isFloatable()
extern "C"
bool
C_ZNK8QToolBar11isFloatableEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->isFloatable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 79, column 22>
//   // proto:  Qt::ToolBarAreas QToolBar::allowedAreas();
// _ZNK8QToolBar12allowedAreasEv allowedAreas()
extern "C"
QFlags<Qt::ToolBarArea>*
C_ZNK8QToolBar12allowedAreasEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->allowedAreas();
  return new QFlags<Qt::ToolBarArea>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 108, column 11>
//   // proto:  QSize QToolBar::iconSize();
// _ZNK8QToolBar8iconSizeEv iconSize()
extern "C"
QSize*
C_ZNK8QToolBar8iconSizeEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->iconSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 102, column 11>
//   // proto:  QRect QToolBar::actionGeometry(QAction * action);
// _ZNK8QToolBar14actionGeometryEP7QAction actionGeometry(class QAction *)
extern "C"
QRect*
C_ZNK8QToolBar14actionGeometryEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QToolBar*)qthis)->actionGeometry(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 111, column 14>
//   // proto:  QWidget * QToolBar::widgetForAction(QAction * action);
// _ZNK8QToolBar15widgetForActionEP7QAction widgetForAction(class QAction *)
extern "C"
void*
C_ZNK8QToolBar15widgetForActionEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QToolBar*)qthis)->widgetForAction(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 129, column 10>
//   // proto:  void QToolBar::visibilityChanged(bool visible);
// _ZN8QToolBar17visibilityChangedEb visibilityChanged(_Bool)
extern "C"
void
C_ZN8QToolBar17visibilityChangedEb(void *qthis,
bool arg1) {
  ((QToolBar*)qthis)->visibilityChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 87, column 10>
//   // proto:  void QToolBar::clear();
// _ZN8QToolBar5clearEv clear()
extern "C"
void
C_ZN8QToolBar5clearEv(void *qthis) {
  ((QToolBar*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 127, column 10>
//   // proto:  void QToolBar::toolButtonStyleChanged(Qt::ToolButtonStyle toolButtonStyle);
// _ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE toolButtonStyleChanged(Qt::ToolButtonStyle)
extern "C"
void
C_ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void *qthis,
Qt::ToolButtonStyle* arg1) {
  ((QToolBar*)qthis)->toolButtonStyleChanged(*((Qt::ToolButtonStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 71, column 14>
//   // proto:  void QToolBar::QToolBar(const QString & title, QWidget * parent);
extern "C"
QToolBar*
C_ZN8QToolBarC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QToolBar(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 75, column 10>
//   // proto:  void QToolBar::setMovable(bool movable);
// _ZN8QToolBar10setMovableEb setMovable(_Bool)
extern "C"
void
C_ZN8QToolBar10setMovableEb(void *qthis,
bool arg1) {
  ((QToolBar*)qthis)->setMovable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 76, column 10>
//   // proto:  bool QToolBar::isMovable();
// _ZNK8QToolBar9isMovableEv isMovable()
extern "C"
bool
C_ZNK8QToolBar9isMovableEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->isMovable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 118, column 10>
//   // proto:  void QToolBar::setIconSize(const QSize & iconSize);
// _ZN8QToolBar11setIconSizeERK5QSize setIconSize(const class QSize &)
extern "C"
void
C_ZN8QToolBar11setIconSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QToolBar*)qthis)->setIconSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 96, column 14>
//   // proto:  QAction * QToolBar::addSeparator();
// _ZN8QToolBar12addSeparatorEv addSeparator()
extern "C"
void*
C_ZN8QToolBar12addSeparatorEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->addSeparator();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 114, column 10>
//   // proto:  void QToolBar::setFloatable(bool floatable);
// _ZN8QToolBar12setFloatableEb setFloatable(_Bool)
extern "C"
void
C_ZN8QToolBar12setFloatableEb(void *qthis,
bool arg1) {
  ((QToolBar*)qthis)->setFloatable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 90, column 14>
//   // proto:  QAction * QToolBar::addAction(const QString & text);
// _ZN8QToolBar9addActionERK7QString addAction(const class QString &)
extern "C"
void*
C_ZN8QToolBar9addActionERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QToolBar*)qthis)->addAction(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 84, column 10>
//   // proto:  void QToolBar::setOrientation(Qt::Orientation orientation);
// _ZN8QToolBar14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN8QToolBar14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QToolBar*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 125, column 10>
//   // proto:  void QToolBar::orientationChanged(Qt::Orientation orientation);
// _ZN8QToolBar18orientationChangedEN2Qt11OrientationE orientationChanged(Qt::Orientation)
extern "C"
void
C_ZN8QToolBar18orientationChangedEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QToolBar*)qthis)->orientationChanged(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 109, column 25>
//   // proto:  Qt::ToolButtonStyle QToolBar::toolButtonStyle();
// _ZNK8QToolBar15toolButtonStyleEv toolButtonStyle()
extern "C"
Qt::ToolButtonStyle
C_ZNK8QToolBar15toolButtonStyleEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->toolButtonStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 128, column 10>
//   // proto:  void QToolBar::topLevelChanged(bool topLevel);
// _ZN8QToolBar15topLevelChangedEb topLevelChanged(_Bool)
extern "C"
void
C_ZN8QToolBar15topLevelChangedEb(void *qthis,
bool arg1) {
  ((QToolBar*)qthis)->topLevelChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 122, column 10>
//   // proto:  void QToolBar::actionTriggered(QAction * action);
// _ZN8QToolBar15actionTriggeredEP7QAction actionTriggered(class QAction *)
extern "C"
void
C_ZN8QToolBar15actionTriggeredEP7QAction(void *qthis,
QAction * arg1) {
  ((QToolBar*)qthis)->actionTriggered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 85, column 21>
//   // proto:  Qt::Orientation QToolBar::orientation();
// _ZNK8QToolBar11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK8QToolBar11orientationEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 119, column 10>
//   // proto:  void QToolBar::setToolButtonStyle(Qt::ToolButtonStyle toolButtonStyle);
// _ZN8QToolBar18setToolButtonStyleEN2Qt15ToolButtonStyleE setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void
C_ZN8QToolBar18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *qthis,
Qt::ToolButtonStyle* arg1) {
  ((QToolBar*)qthis)->setToolButtonStyle(*((Qt::ToolButtonStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 91, column 14>
//   // proto:  QAction * QToolBar::addAction(const QIcon & icon, const QString & text);
// _ZN8QToolBar9addActionERK5QIconRK7QString addAction(const class QIcon &, const class QString &)
extern "C"
void*
C_ZN8QToolBar9addActionERK5QIconRK7QString(void *qthis,
const QIcon* arg1,
const QString* arg2) {
  auto ret =
  ((QToolBar*)qthis)->addAction(*((const QIcon*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 72, column 14>
//   // proto:  void QToolBar::QToolBar(QWidget * parent);
extern "C"
QToolBar*
C_ZN8QToolBarC2EP7QWidget(QWidget * arg1) {
  auto ret = new QToolBar(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 103, column 14>
//   // proto:  QAction * QToolBar::actionAt(const QPoint & p);
// _ZNK8QToolBar8actionAtERK6QPoint actionAt(const class QPoint &)
extern "C"
void*
C_ZNK8QToolBar8actionAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QToolBar*)qthis)->actionAt(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 123, column 10>
//   // proto:  void QToolBar::movableChanged(bool movable);
// _ZN8QToolBar14movableChangedEb movableChanged(_Bool)
extern "C"
void
C_ZN8QToolBar14movableChangedEb(void *qthis,
bool arg1) {
  ((QToolBar*)qthis)->movableChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 104, column 21>
//   // proto:  QAction * QToolBar::actionAt(int x, int y);
// _ZNK8QToolBar8actionAtEii actionAt(int, int)
extern "C"
void*
C_ZNK8QToolBar8actionAtEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QToolBar*)qthis)->actionAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 126, column 10>
//   // proto:  void QToolBar::iconSizeChanged(const QSize & iconSize);
// _ZN8QToolBar15iconSizeChangedERK5QSize iconSizeChanged(const class QSize &)
extern "C"
void
C_ZN8QToolBar15iconSizeChangedERK5QSize(void *qthis,
const QSize* arg1) {
  ((QToolBar*)qthis)->iconSizeChanged(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 124, column 10>
//   // proto:  void QToolBar::allowedAreasChanged(Qt::ToolBarAreas allowedAreas);
// _ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE allowedAreasChanged(Qt::ToolBarAreas)
extern "C"
void
C_ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(void *qthis,
Qt::ToolBarAreas* arg1) {
  ((QToolBar*)qthis)->allowedAreasChanged(*((Qt::ToolBarAreas*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 115, column 10>
//   // proto:  bool QToolBar::isFloating();
// _ZNK8QToolBar10isFloatingEv isFloating()
extern "C"
bool
C_ZNK8QToolBar10isFloatingEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->isFloating();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 106, column 14>
//   // proto:  QAction * QToolBar::toggleViewAction();
// _ZNK8QToolBar16toggleViewActionEv toggleViewAction()
extern "C"
void*
C_ZNK8QToolBar16toggleViewActionEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->toggleViewAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 78, column 10>
//   // proto:  void QToolBar::setAllowedAreas(Qt::ToolBarAreas areas);
// _ZN8QToolBar15setAllowedAreasE6QFlagsIN2Qt11ToolBarAreaEE setAllowedAreas(Qt::ToolBarAreas)
extern "C"
void
C_ZN8QToolBar15setAllowedAreasE6QFlagsIN2Qt11ToolBarAreaEE(void *qthis,
Qt::ToolBarAreas* arg1) {
  ((QToolBar*)qthis)->setAllowedAreas(*((Qt::ToolBarAreas*)arg1));
}
//   // proto:  void QToolBar::~QToolBar();
extern "C"
void C_ZN8QToolBarD2Ev(void *qthis) {
  delete (QToolBar*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 81, column 17>
//   // proto:  bool QToolBar::isAreaAllowed(Qt::ToolBarArea area);
// _ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE isAreaAllowed(Qt::ToolBarArea)
extern "C"
bool
C_ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE(void *qthis,
Qt::ToolBarArea* arg1) {
  auto ret =
  ((QToolBar*)qthis)->isAreaAllowed(*((Qt::ToolBarArea*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 92, column 14>
//   // proto:  QAction * QToolBar::addAction(const QString & text, const QObject * receiver, const char * member);
// _ZN8QToolBar9addActionERK7QStringPK7QObjectPKc addAction(const class QString &, const class QObject *, const char *)
extern "C"
void*
C_ZN8QToolBar9addActionERK7QStringPK7QObjectPKc(void *qthis,
const QString* arg1,
const QObject * arg2,
const char * arg3) {
  auto ret =
  ((QToolBar*)qthis)->addAction(*((const QString*)arg1),
arg2,
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 100, column 14>
//   // proto:  QAction * QToolBar::insertWidget(QAction * before, QWidget * widget);
// _ZN8QToolBar12insertWidgetEP7QActionP7QWidget insertWidget(class QAction *, class QWidget *)
extern "C"
void*
C_ZN8QToolBar12insertWidgetEP7QActionP7QWidget(void *qthis,
QAction * arg1,
QWidget * arg2) {
  auto ret =
  ((QToolBar*)qthis)->insertWidget(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 99, column 14>
//   // proto:  QAction * QToolBar::addWidget(QWidget * widget);
// _ZN8QToolBar9addWidgetEP7QWidget addWidget(class QWidget *)
extern "C"
void*
C_ZN8QToolBar9addWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QToolBar*)qthis)->addWidget(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 53, column 5>
//   // proto:  const QMetaObject * QToolBar::metaObject();
// _ZNK8QToolBar10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QToolBar10metaObjectEv(void *qthis) {
  auto ret =
  ((QToolBar*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbar.h', line 97, column 14>
//   // proto:  QAction * QToolBar::insertSeparator(QAction * before);
// _ZN8QToolBar15insertSeparatorEP7QAction insertSeparator(class QAction *)
extern "C"
void*
C_ZN8QToolBar15insertSeparatorEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QToolBar*)qthis)->insertSeparator(arg1);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QToolBar_SlotProxy here
class QToolBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QToolBar_SlotProxy():QObject(){}

public slots:
  // actionTriggered(class QAction *)
  void slot_proxy_func__ZN8QToolBar15actionTriggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN8QToolBar15actionTriggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // movableChanged(_Bool)
  void slot_proxy_func__ZN8QToolBar14movableChangedEb(bool arg0);
public:
  void (*slot_func__ZN8QToolBar14movableChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // visibilityChanged(_Bool)
  void slot_proxy_func__ZN8QToolBar17visibilityChangedEb(bool arg0);
public:
  void (*slot_func__ZN8QToolBar17visibilityChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // iconSizeChanged(const class QSize &)
  void slot_proxy_func__ZN8QToolBar15iconSizeChangedERK5QSize(const QSize & arg0);
public:
  void (*slot_func__ZN8QToolBar15iconSizeChangedERK5QSize)(void* rsfptr, const QSize & arg0) = NULL;
public slots:
  // orientationChanged(Qt::Orientation)
  void slot_proxy_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(Qt::Orientation arg0);
public:
  void (*slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE)(void* rsfptr, Qt::Orientation arg0) = NULL;
public slots:
  // toolButtonStyleChanged(Qt::ToolButtonStyle)
  void slot_proxy_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0);
public:
  void (*slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE)(void* rsfptr, Qt::ToolButtonStyle arg0) = NULL;
public slots:
  // topLevelChanged(_Bool)
  void slot_proxy_func__ZN8QToolBar15topLevelChangedEb(bool arg0);
public:
  void (*slot_func__ZN8QToolBar15topLevelChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // allowedAreasChanged(Qt::ToolBarAreas)
  void slot_proxy_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(Qt::ToolBarAreas arg0);
public:
  void (*slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE)(void* rsfptr, Qt::ToolBarAreas arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtoolbar.moc"

extern "C" {
  QToolBar_SlotProxy* QToolBar_SlotProxy_new()
  {
    return new QToolBar_SlotProxy();
  }
};

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar15actionTriggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN8QToolBar15actionTriggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar15actionTriggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar15actionTriggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar15actionTriggeredEP7QAction = (decltype(that->slot_func__ZN8QToolBar15actionTriggeredEP7QAction))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(actionTriggered(class QAction *)), that, SLOT(slot_proxy_func__ZN8QToolBar15actionTriggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar15actionTriggeredEP7QAction(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar14movableChangedEb(bool arg0) {
  if (this->slot_func__ZN8QToolBar14movableChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar14movableChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar14movableChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar14movableChangedEb = (decltype(that->slot_func__ZN8QToolBar14movableChangedEb))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(movableChanged(_Bool)), that, SLOT(slot_proxy_func__ZN8QToolBar14movableChangedEb(bool arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar14movableChangedEb(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar17visibilityChangedEb(bool arg0) {
  if (this->slot_func__ZN8QToolBar17visibilityChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar17visibilityChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar17visibilityChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar17visibilityChangedEb = (decltype(that->slot_func__ZN8QToolBar17visibilityChangedEb))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(visibilityChanged(_Bool)), that, SLOT(slot_proxy_func__ZN8QToolBar17visibilityChangedEb(bool arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar17visibilityChangedEb(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar15iconSizeChangedERK5QSize(const QSize & arg0) {
  if (this->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar15iconSizeChangedERK5QSize(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize = (decltype(that->slot_func__ZN8QToolBar15iconSizeChangedERK5QSize))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(iconSizeChanged(const class QSize &)), that, SLOT(slot_proxy_func__ZN8QToolBar15iconSizeChangedERK5QSize(const QSize & arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar15iconSizeChangedERK5QSize(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(Qt::Orientation arg0) {
  if (this->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE = (decltype(that->slot_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(orientationChanged(Qt::Orientation)), that, SLOT(slot_proxy_func__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(Qt::Orientation arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar18orientationChangedEN2Qt11OrientationE(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0) {
  if (this->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE = (decltype(that->slot_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(toolButtonStyleChanged(Qt::ToolButtonStyle)), that, SLOT(slot_proxy_func__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(Qt::ToolButtonStyle arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar15topLevelChangedEb(bool arg0) {
  if (this->slot_func__ZN8QToolBar15topLevelChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar15topLevelChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar15topLevelChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar15topLevelChangedEb = (decltype(that->slot_func__ZN8QToolBar15topLevelChangedEb))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(topLevelChanged(_Bool)), that, SLOT(slot_proxy_func__ZN8QToolBar15topLevelChangedEb(bool arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar15topLevelChangedEb(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QToolBar_SlotProxy::slot_proxy_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(Qt::ToolBarAreas arg0) {
  if (this->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE != NULL) {
    // do smth...
    this->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolBar_SlotProxy_connect__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE = (decltype(that->slot_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE))ffifptr;
  QObject::connect((QToolBar*)sender, SIGNAL(allowedAreasChanged(Qt::ToolBarAreas)), that, SLOT(slot_proxy_func__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(Qt::ToolBarAreas arg0)));
  return that;
}
extern "C"
void QToolBar_SlotProxy_disconnect__ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE(QToolBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

