// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qmenubar.h
// dst-file: /src/widgets/qmenubar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmenubar.h>


#include <qsize.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qmenubar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMenuBar_Class_Size()
{
  return sizeof(QMenuBar);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 61, column 14>
//   // proto:  QAction * QMenuBar::addAction(const QString & text);
// _ZN8QMenuBar9addActionERK7QString addAction(const class QString &)
extern "C"
void*
C_ZN8QMenuBar9addActionERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMenuBar*)qthis)->addAction(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 105, column 23>
//   // proto:  QPlatformMenuBar * QMenuBar::platformMenuBar();
// _ZN8QMenuBar15platformMenuBarEv platformMenuBar()
extern "C"
void*
C_ZN8QMenuBar15platformMenuBarEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->platformMenuBar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 104, column 10>
//   // proto:  void QMenuBar::setNativeMenuBar(bool nativeMenuBar);
// _ZN8QMenuBar16setNativeMenuBarEb setNativeMenuBar(_Bool)
extern "C"
void
C_ZN8QMenuBar16setNativeMenuBarEb(void *qthis,
bool arg1) {
  ((QMenuBar*)qthis)->setNativeMenuBar(arg1);
}
//   // proto:  void QMenuBar::~QMenuBar();
extern "C"
void C_ZN8QMenuBarD2Ev(void *qthis) {
  delete (QMenuBar*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 64, column 14>
//   // proto:  QAction * QMenuBar::addMenu(QMenu * menu);
// _ZN8QMenuBar7addMenuEP5QMenu addMenu(class QMenu *)
extern "C"
void*
C_ZN8QMenuBar7addMenuEP5QMenu(void *qthis,
QMenu * arg1) {
  auto ret =
  ((QMenuBar*)qthis)->addMenu(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 110, column 10>
//   // proto:  void QMenuBar::triggered(QAction * action);
// _ZN8QMenuBar9triggeredEP7QAction triggered(class QAction *)
extern "C"
void
C_ZN8QMenuBar9triggeredEP7QAction(void *qthis,
QAction * arg1) {
  ((QMenuBar*)qthis)->triggered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 82, column 11>
//   // proto:  QSize QMenuBar::sizeHint();
// _ZNK8QMenuBar8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK8QMenuBar8sizeHintEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 87, column 14>
//   // proto:  QAction * QMenuBar::actionAt(const QPoint & );
// _ZNK8QMenuBar8actionAtERK6QPoint actionAt(const class QPoint &)
extern "C"
void*
C_ZNK8QMenuBar8actionAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QMenuBar*)qthis)->actionAt(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 111, column 10>
//   // proto:  void QMenuBar::hovered(QAction * action);
// _ZN8QMenuBar7hoveredEP7QAction hovered(class QAction *)
extern "C"
void
C_ZN8QMenuBar7hoveredEP7QAction(void *qthis,
QAction * arg1) {
  ((QMenuBar*)qthis)->hovered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 51, column 5>
//   // proto:  const QMetaObject * QMenuBar::metaObject();
// _ZNK8QMenuBar10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QMenuBar10metaObjectEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 103, column 10>
//   // proto:  bool QMenuBar::isNativeMenuBar();
// _ZNK8QMenuBar15isNativeMenuBarEv isNativeMenuBar()
extern "C"
bool
C_ZNK8QMenuBar15isNativeMenuBarEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->isNativeMenuBar();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 70, column 14>
//   // proto:  QAction * QMenuBar::insertSeparator(QAction * before);
// _ZN8QMenuBar15insertSeparatorEP7QAction insertSeparator(class QAction *)
extern "C"
void*
C_ZN8QMenuBar15insertSeparatorEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QMenuBar*)qthis)->insertSeparator(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 69, column 14>
//   // proto:  QAction * QMenuBar::addSeparator();
// _ZN8QMenuBar12addSeparatorEv addSeparator()
extern "C"
void*
C_ZN8QMenuBar12addSeparatorEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->addSeparator();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 83, column 11>
//   // proto:  QSize QMenuBar::minimumSizeHint();
// _ZNK8QMenuBar15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK8QMenuBar15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 80, column 10>
//   // proto:  bool QMenuBar::isDefaultUp();
// _ZNK8QMenuBar11isDefaultUpEv isDefaultUp()
extern "C"
bool
C_ZNK8QMenuBar11isDefaultUpEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->isDefaultUp();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 57, column 14>
//   // proto:  void QMenuBar::QMenuBar(QWidget * parent);
extern "C"
QMenuBar*
C_ZN8QMenuBarC2EP7QWidget(QWidget * arg1) {
  auto ret = new QMenuBar(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 77, column 10>
//   // proto:  void QMenuBar::setActiveAction(QAction * action);
// _ZN8QMenuBar15setActiveActionEP7QAction setActiveAction(class QAction *)
extern "C"
void
C_ZN8QMenuBar15setActiveActionEP7QAction(void *qthis,
QAction * arg1) {
  ((QMenuBar*)qthis)->setActiveAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 74, column 10>
//   // proto:  void QMenuBar::clear();
// _ZN8QMenuBar5clearEv clear()
extern "C"
void
C_ZN8QMenuBar5clearEv(void *qthis) {
  ((QMenuBar*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 76, column 14>
//   // proto:  QAction * QMenuBar::activeAction();
// _ZNK8QMenuBar12activeActionEv activeAction()
extern "C"
void*
C_ZNK8QMenuBar12activeActionEv(void *qthis) {
  auto ret =
  ((QMenuBar*)qthis)->activeAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 90, column 14>
//   // proto:  QWidget * QMenuBar::cornerWidget(Qt::Corner corner);
// _ZNK8QMenuBar12cornerWidgetEN2Qt6CornerE cornerWidget(Qt::Corner)
extern "C"
void*
C_ZNK8QMenuBar12cornerWidgetEN2Qt6CornerE(void *qthis,
Qt::Corner* arg1) {
  auto ret =
  ((QMenuBar*)qthis)->cornerWidget(*((Qt::Corner*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 66, column 12>
//   // proto:  QMenu * QMenuBar::addMenu(const QIcon & icon, const QString & title);
// _ZN8QMenuBar7addMenuERK5QIconRK7QString addMenu(const class QIcon &, const class QString &)
extern "C"
void*
C_ZN8QMenuBar7addMenuERK5QIconRK7QString(void *qthis,
const QIcon* arg1,
const QString* arg2) {
  auto ret =
  ((QMenuBar*)qthis)->addMenu(*((const QIcon*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 89, column 10>
//   // proto:  void QMenuBar::setCornerWidget(QWidget * w, Qt::Corner corner);
// _ZN8QMenuBar15setCornerWidgetEP7QWidgetN2Qt6CornerE setCornerWidget(class QWidget *, Qt::Corner)
extern "C"
void
C_ZN8QMenuBar15setCornerWidgetEP7QWidgetN2Qt6CornerE(void *qthis,
QWidget * arg1,
Qt::Corner* arg2) {
  ((QMenuBar*)qthis)->setCornerWidget(arg1,
*((Qt::Corner*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 65, column 12>
//   // proto:  QMenu * QMenuBar::addMenu(const QString & title);
// _ZN8QMenuBar7addMenuERK7QString addMenu(const class QString &)
extern "C"
void*
C_ZN8QMenuBar7addMenuERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMenuBar*)qthis)->addMenu(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 86, column 11>
//   // proto:  QRect QMenuBar::actionGeometry(QAction * );
// _ZNK8QMenuBar14actionGeometryEP7QAction actionGeometry(class QAction *)
extern "C"
QRect*
C_ZNK8QMenuBar14actionGeometryEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QMenuBar*)qthis)->actionGeometry(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 72, column 14>
//   // proto:  QAction * QMenuBar::insertMenu(QAction * before, QMenu * menu);
// _ZN8QMenuBar10insertMenuEP7QActionP5QMenu insertMenu(class QAction *, class QMenu *)
extern "C"
void*
C_ZN8QMenuBar10insertMenuEP7QActionP5QMenu(void *qthis,
QAction * arg1,
QMenu * arg2) {
  auto ret =
  ((QMenuBar*)qthis)->insertMenu(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 79, column 10>
//   // proto:  void QMenuBar::setDefaultUp(bool );
// _ZN8QMenuBar12setDefaultUpEb setDefaultUp(_Bool)
extern "C"
void
C_ZN8QMenuBar12setDefaultUpEb(void *qthis,
bool arg1) {
  ((QMenuBar*)qthis)->setDefaultUp(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 107, column 18>
//   // proto:  void QMenuBar::setVisible(bool visible);
// _ZN8QMenuBar10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN8QMenuBar10setVisibleEb(void *qthis,
bool arg1) {
  ((QMenuBar*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 62, column 14>
//   // proto:  QAction * QMenuBar::addAction(const QString & text, const QObject * receiver, const char * member);
// _ZN8QMenuBar9addActionERK7QStringPK7QObjectPKc addAction(const class QString &, const class QObject *, const char *)
extern "C"
void*
C_ZN8QMenuBar9addActionERK7QStringPK7QObjectPKc(void *qthis,
const QString* arg1,
const QObject * arg2,
const char * arg3) {
  auto ret =
  ((QMenuBar*)qthis)->addAction(*((const QString*)arg1),
arg2,
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenubar.h', line 84, column 9>
//   // proto:  int QMenuBar::heightForWidth(int );
// _ZNK8QMenuBar14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK8QMenuBar14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QMenuBar*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QMenuBar_SlotProxy here
class QMenuBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMenuBar_SlotProxy():QObject(){}

public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN8QMenuBar9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN8QMenuBar9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // hovered(class QAction *)
  void slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN8QMenuBar7hoveredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmenubar.moc"

extern "C" {
  QMenuBar_SlotProxy* QMenuBar_SlotProxy_new()
  {
    return new QMenuBar_SlotProxy();
  }
};

void QMenuBar_SlotProxy::slot_proxy_func__ZN8QMenuBar9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN8QMenuBar9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN8QMenuBar9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenuBar_SlotProxy_connect__ZN8QMenuBar9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenuBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QMenuBar9triggeredEP7QAction = (decltype(that->slot_func__ZN8QMenuBar9triggeredEP7QAction))ffifptr;
  QObject::connect((QMenuBar*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN8QMenuBar9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenuBar_SlotProxy_disconnect__ZN8QMenuBar9triggeredEP7QAction(QMenuBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenuBar_SlotProxy::slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN8QMenuBar7hoveredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN8QMenuBar7hoveredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenuBar_SlotProxy_connect__ZN8QMenuBar7hoveredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenuBar_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN8QMenuBar7hoveredEP7QAction = (decltype(that->slot_func__ZN8QMenuBar7hoveredEP7QAction))ffifptr;
  QObject::connect((QMenuBar*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN8QMenuBar7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenuBar_SlotProxy_disconnect__ZN8QMenuBar7hoveredEP7QAction(QMenuBar_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

