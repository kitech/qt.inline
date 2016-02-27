// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qmenu.h
// dst-file: /src/widgets/qmenu.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmenu.h>


#include <qicon.h>
#include <qrect.h>
#include <qstring.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qmenu_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMenu_Class_Size()
{
  return sizeof(QMenu);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 99, column 10>
//   // proto:  bool QMenu::isTearOffEnabled();
// _ZNK5QMenu16isTearOffEnabledEv isTearOffEnabled()
extern "C"
bool
C_ZNK5QMenu16isTearOffEnabledEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->isTearOffEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 148, column 10>
//   // proto:  bool QMenu::toolTipsVisible();
// _ZNK5QMenu15toolTipsVisibleEv toolTipsVisible()
extern "C"
bool
C_ZNK5QMenu15toolTipsVisibleEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->toolTipsVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 125, column 14>
//   // proto:  QAction * QMenu::menuAction();
// _ZNK5QMenu10menuActionEv menuAction()
extern "C"
void*
C_ZNK5QMenu10menuActionEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->menuAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 77, column 14>
//   // proto:  QAction * QMenu::addAction(const QIcon & icon, const QString & text);
// _ZN5QMenu9addActionERK5QIconRK7QString addAction(const class QIcon &, const class QString &)
extern "C"
void*
C_ZN5QMenu9addActionERK5QIconRK7QString(void *qthis,
const QIcon* arg1,
const QString* arg2) {
  auto ret =
  ((QMenu*)qthis)->addAction(*((const QIcon*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 135, column 10>
//   // proto:  void QMenu::setPlatformMenu(QPlatformMenu * platformMenu);
// _ZN5QMenu15setPlatformMenuEP13QPlatformMenu setPlatformMenu(class QPlatformMenu *)
extern "C"
void
C_ZN5QMenu15setPlatformMenuEP13QPlatformMenu(void *qthis,
QPlatformMenu * arg1) {
  ((QMenu*)qthis)->setPlatformMenu(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 154, column 10>
//   // proto:  void QMenu::triggered(QAction * action);
// _ZN5QMenu9triggeredEP7QAction triggered(class QAction *)
extern "C"
void
C_ZN5QMenu9triggeredEP7QAction(void *qthis,
QAction * arg1) {
  ((QMenu*)qthis)->triggered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 98, column 10>
//   // proto:  void QMenu::setTearOffEnabled(bool );
// _ZN5QMenu17setTearOffEnabledEb setTearOffEnabled(_Bool)
extern "C"
void
C_ZN5QMenu17setTearOffEnabledEb(void *qthis,
bool arg1) {
  ((QMenu*)qthis)->setTearOffEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 87, column 14>
//   // proto:  QAction * QMenu::addSection(const QString & text);
// _ZN5QMenu10addSectionERK7QString addSection(const class QString &)
extern "C"
void*
C_ZN5QMenu10addSectionERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMenu*)qthis)->addSection(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 61, column 5>
//   // proto:  const QMetaObject * QMenu::metaObject();
// _ZNK5QMenu10metaObjectEv metaObject()
extern "C"
void*
C_ZNK5QMenu10metaObjectEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 96, column 10>
//   // proto:  void QMenu::clear();
// _ZN5QMenu5clearEv clear()
extern "C"
void
C_ZN5QMenu5clearEv(void *qthis) {
  ((QMenu*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 90, column 14>
//   // proto:  QAction * QMenu::insertMenu(QAction * before, QMenu * menu);
// _ZN5QMenu10insertMenuEP7QActionPS_ insertMenu(class QAction *, class QMenu *)
extern "C"
void*
C_ZN5QMenu10insertMenuEP7QActionPS_(void *qthis,
QAction * arg1,
QMenu * arg2) {
  auto ret =
  ((QMenu*)qthis)->insertMenu(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 130, column 11>
//   // proto:  QIcon QMenu::icon();
// _ZNK5QMenu4iconEv icon()
extern "C"
QIcon*
C_ZNK5QMenu4iconEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->icon();
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 92, column 14>
//   // proto:  QAction * QMenu::insertSection(QAction * before, const QString & text);
// _ZN5QMenu13insertSectionEP7QActionRK7QString insertSection(class QAction *, const class QString &)
extern "C"
void*
C_ZN5QMenu13insertSectionEP7QActionRK7QString(void *qthis,
QAction * arg1,
const QString* arg2) {
  auto ret =
  ((QMenu*)qthis)->insertSection(arg1,
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 134, column 20>
//   // proto:  QPlatformMenu * QMenu::platformMenu();
// _ZN5QMenu12platformMenuEv platformMenu()
extern "C"
void*
C_ZN5QMenu12platformMenuEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->platformMenu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 133, column 10>
//   // proto:  void QMenu::setNoReplayFor(QWidget * widget);
// _ZN5QMenu14setNoReplayForEP7QWidget setNoReplayFor(class QWidget *)
extern "C"
void
C_ZN5QMenu14setNoReplayForEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QMenu*)qthis)->setNoReplayFor(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 131, column 10>
//   // proto:  void QMenu::setIcon(const QIcon & icon);
// _ZN5QMenu7setIconERK5QIcon setIcon(const class QIcon &)
extern "C"
void
C_ZN5QMenu7setIconERK5QIcon(void *qthis,
const QIcon* arg1) {
  ((QMenu*)qthis)->setIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 112, column 14>
//   // proto:  QAction * QMenu::exec(const QPoint & pos, QAction * at);
// _ZN5QMenu4execERK6QPointP7QAction exec(const class QPoint &, class QAction *)
extern "C"
void*
C_ZN5QMenu4execERK6QPointP7QAction(void *qthis,
const QPoint* arg1,
QAction * arg2) {
  auto ret =
  ((QMenu*)qthis)->exec(*((const QPoint*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 145, column 10>
//   // proto:  bool QMenu::separatorsCollapsible();
// _ZNK5QMenu21separatorsCollapsibleEv separatorsCollapsible()
extern "C"
bool
C_ZNK5QMenu21separatorsCollapsibleEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->separatorsCollapsible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 82, column 12>
//   // proto:  QMenu * QMenu::addMenu(const QString & title);
// _ZN5QMenu7addMenuERK7QString addMenu(const class QString &)
extern "C"
void*
C_ZN5QMenu7addMenuERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMenu*)qthis)->addMenu(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 155, column 10>
//   // proto:  void QMenu::hovered(QAction * action);
// _ZN5QMenu7hoveredEP7QAction hovered(class QAction *)
extern "C"
void
C_ZN5QMenu7hoveredEP7QAction(void *qthis,
QAction * arg1) {
  ((QMenu*)qthis)->hovered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 85, column 14>
//   // proto:  QAction * QMenu::addSeparator();
// _ZN5QMenu12addSeparatorEv addSeparator()
extern "C"
void*
C_ZN5QMenu12addSeparatorEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->addSeparator();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 102, column 10>
//   // proto:  void QMenu::hideTearOffMenu();
// _ZN5QMenu15hideTearOffMenuEv hideTearOffMenu()
extern "C"
void
C_ZN5QMenu15hideTearOffMenuEv(void *qthis) {
  ((QMenu*)qthis)->hideTearOffMenu();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 78, column 14>
//   // proto:  QAction * QMenu::addAction(const QString & text, const QObject * receiver, const char * member, const QKeySequence & shortcut);
// _ZN5QMenu9addActionERK7QStringPK7QObjectPKcRK12QKeySequence addAction(const class QString &, const class QObject *, const char *, const class QKeySequence &)
extern "C"
void*
C_ZN5QMenu9addActionERK7QStringPK7QObjectPKcRK12QKeySequence(void *qthis,
const QString* arg1,
const QObject * arg2,
const char * arg3,
const QKeySequence* arg4) {
  auto ret =
  ((QMenu*)qthis)->addAction(*((const QString*)arg1),
arg2,
arg3,
*((const QKeySequence*)arg4));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 71, column 14>
//   // proto:  void QMenu::QMenu(QWidget * parent);
extern "C"
QMenu*
C_ZN5QMenuC2EP7QWidget(QWidget * arg1) {
  auto ret = new QMenu(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 107, column 10>
//   // proto:  void QMenu::setActiveAction(QAction * act);
// _ZN5QMenu15setActiveActionEP7QAction setActiveAction(class QAction *)
extern "C"
void
C_ZN5QMenu15setActiveActionEP7QAction(void *qthis,
QAction * arg1) {
  ((QMenu*)qthis)->setActiveAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 146, column 10>
//   // proto:  void QMenu::setSeparatorsCollapsible(bool collapse);
// _ZN5QMenu24setSeparatorsCollapsibleEb setSeparatorsCollapsible(_Bool)
extern "C"
void
C_ZN5QMenu24setSeparatorsCollapsibleEb(void *qthis,
bool arg1) {
  ((QMenu*)qthis)->setSeparatorsCollapsible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 76, column 14>
//   // proto:  QAction * QMenu::addAction(const QString & text);
// _ZN5QMenu9addActionERK7QString addAction(const class QString &)
extern "C"
void*
C_ZN5QMenu9addActionERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMenu*)qthis)->addAction(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 108, column 14>
//   // proto:  QAction * QMenu::activeAction();
// _ZNK5QMenu12activeActionEv activeAction()
extern "C"
void*
C_ZNK5QMenu12activeActionEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->activeAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 95, column 10>
//   // proto:  bool QMenu::isEmpty();
// _ZNK5QMenu7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK5QMenu7isEmptyEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 79, column 14>
//   // proto:  QAction * QMenu::addAction(const QIcon & icon, const QString & text, const QObject * receiver, const char * member, const QKeySequence & shortcut);
// _ZN5QMenu9addActionERK5QIconRK7QStringPK7QObjectPKcRK12QKeySequence addAction(const class QIcon &, const class QString &, const class QObject *, const char *, const class QKeySequence &)
extern "C"
void*
C_ZN5QMenu9addActionERK5QIconRK7QStringPK7QObjectPKcRK12QKeySequence(void *qthis,
const QIcon* arg1,
const QString* arg2,
const QObject * arg3,
const char * arg4,
const QKeySequence* arg5) {
  auto ret =
  ((QMenu*)qthis)->addAction(*((const QIcon*)arg1),
*((const QString*)arg2),
arg3,
arg4,
*((const QKeySequence*)arg5));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 122, column 11>
//   // proto:  QRect QMenu::actionGeometry(QAction * );
// _ZNK5QMenu14actionGeometryEP7QAction actionGeometry(class QAction *)
extern "C"
QRect*
C_ZNK5QMenu14actionGeometryEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QMenu*)qthis)->actionGeometry(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 72, column 14>
//   // proto:  void QMenu::QMenu(const QString & title, QWidget * parent);
extern "C"
QMenu*
C_ZN5QMenuC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QMenu(*((const QString*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 91, column 14>
//   // proto:  QAction * QMenu::insertSeparator(QAction * before);
// _ZN5QMenu15insertSeparatorEP7QAction insertSeparator(class QAction *)
extern "C"
void*
C_ZN5QMenu15insertSeparatorEP7QAction(void *qthis,
QAction * arg1) {
  auto ret =
  ((QMenu*)qthis)->insertSeparator(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 153, column 10>
//   // proto:  void QMenu::aboutToHide();
// _ZN5QMenu11aboutToHideEv aboutToHide()
extern "C"
void
C_ZN5QMenu11aboutToHideEv(void *qthis) {
  ((QMenu*)qthis)->aboutToHide();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 88, column 14>
//   // proto:  QAction * QMenu::addSection(const QIcon & icon, const QString & text);
// _ZN5QMenu10addSectionERK5QIconRK7QString addSection(const class QIcon &, const class QString &)
extern "C"
void*
C_ZN5QMenu10addSectionERK5QIconRK7QString(void *qthis,
const QIcon* arg1,
const QString* arg2) {
  auto ret =
  ((QMenu*)qthis)->addSection(*((const QIcon*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 101, column 10>
//   // proto:  bool QMenu::isTearOffMenuVisible();
// _ZNK5QMenu20isTearOffMenuVisibleEv isTearOffMenuVisible()
extern "C"
bool
C_ZNK5QMenu20isTearOffMenuVisibleEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->isTearOffMenuVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 117, column 21>
//   // proto: static QAction * QMenu::exec(QList<QAction *> actions, const QPoint & pos, QAction * at, QWidget * parent);
// _ZN5QMenu4execE5QListIP7QActionERK6QPointS2_P7QWidget exec(QList<class QAction *>, const class QPoint &, class QAction *, class QWidget *)
extern "C"
void*
C_ZN5QMenu4execE5QListIP7QActionERK6QPointS2_P7QWidget(QList<QAction *>* arg1,
const QPoint* arg2,
QAction * arg3,
QWidget * arg4) {
  auto ret =
  QMenu::exec(*((QList<QAction *>*)arg1),
*((const QPoint*)arg2),
arg3,
arg4);
  return (void*)ret;
}
//   // proto:  void QMenu::~QMenu();
extern "C"
void C_ZN5QMenuD2Ev(void *qthis) {
  delete (QMenu*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 127, column 13>
//   // proto:  QString QMenu::title();
// _ZNK5QMenu5titleEv title()
extern "C"
QString*
C_ZNK5QMenu5titleEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->title();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 105, column 14>
//   // proto:  QAction * QMenu::defaultAction();
// _ZNK5QMenu13defaultActionEv defaultAction()
extern "C"
void*
C_ZNK5QMenu13defaultActionEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->defaultAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 81, column 14>
//   // proto:  QAction * QMenu::addMenu(QMenu * menu);
// _ZN5QMenu7addMenuEPS_ addMenu(class QMenu *)
extern "C"
void*
C_ZN5QMenu7addMenuEPS_(void *qthis,
QMenu * arg1) {
  auto ret =
  ((QMenu*)qthis)->addMenu(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 152, column 10>
//   // proto:  void QMenu::aboutToShow();
// _ZN5QMenu11aboutToShowEv aboutToShow()
extern "C"
void
C_ZN5QMenu11aboutToShowEv(void *qthis) {
  ((QMenu*)qthis)->aboutToShow();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 120, column 11>
//   // proto:  QSize QMenu::sizeHint();
// _ZNK5QMenu8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK5QMenu8sizeHintEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 104, column 10>
//   // proto:  void QMenu::setDefaultAction(QAction * );
// _ZN5QMenu16setDefaultActionEP7QAction setDefaultAction(class QAction *)
extern "C"
void
C_ZN5QMenu16setDefaultActionEP7QAction(void *qthis,
QAction * arg1) {
  ((QMenu*)qthis)->setDefaultAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 123, column 14>
//   // proto:  QAction * QMenu::actionAt(const QPoint & );
// _ZNK5QMenu8actionAtERK6QPoint actionAt(const class QPoint &)
extern "C"
void*
C_ZNK5QMenu8actionAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QMenu*)qthis)->actionAt(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 93, column 14>
//   // proto:  QAction * QMenu::insertSection(QAction * before, const QIcon & icon, const QString & text);
// _ZN5QMenu13insertSectionEP7QActionRK5QIconRK7QString insertSection(class QAction *, const class QIcon &, const class QString &)
extern "C"
void*
C_ZN5QMenu13insertSectionEP7QActionRK5QIconRK7QString(void *qthis,
QAction * arg1,
const QIcon* arg2,
const QString* arg3) {
  auto ret =
  ((QMenu*)qthis)->insertSection(arg1,
*((const QIcon*)arg2),
*((const QString*)arg3));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 110, column 10>
//   // proto:  void QMenu::popup(const QPoint & pos, QAction * at);
// _ZN5QMenu5popupERK6QPointP7QAction popup(const class QPoint &, class QAction *)
extern "C"
void
C_ZN5QMenu5popupERK6QPointP7QAction(void *qthis,
const QPoint* arg1,
QAction * arg2) {
  ((QMenu*)qthis)->popup(*((const QPoint*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 149, column 10>
//   // proto:  void QMenu::setToolTipsVisible(bool visible);
// _ZN5QMenu18setToolTipsVisibleEb setToolTipsVisible(_Bool)
extern "C"
void
C_ZN5QMenu18setToolTipsVisibleEb(void *qthis,
bool arg1) {
  ((QMenu*)qthis)->setToolTipsVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 128, column 10>
//   // proto:  void QMenu::setTitle(const QString & title);
// _ZN5QMenu8setTitleERK7QString setTitle(const class QString &)
extern "C"
void
C_ZN5QMenu8setTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QMenu*)qthis)->setTitle(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 83, column 12>
//   // proto:  QMenu * QMenu::addMenu(const QIcon & icon, const QString & title);
// _ZN5QMenu7addMenuERK5QIconRK7QString addMenu(const class QIcon &, const class QString &)
extern "C"
void*
C_ZN5QMenu7addMenuERK5QIconRK7QString(void *qthis,
const QIcon* arg1,
const QString* arg2) {
  auto ret =
  ((QMenu*)qthis)->addMenu(*((const QIcon*)arg1),
*((const QString*)arg2));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmenu.h', line 111, column 14>
//   // proto:  QAction * QMenu::exec();
// _ZN5QMenu4execEv exec()
extern "C"
void*
C_ZN5QMenu4execEv(void *qthis) {
  auto ret =
  ((QMenu*)qthis)->exec();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QMenu_SlotProxy here
class QMenu_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMenu_SlotProxy():QObject(){}

public slots:
  // aboutToShow()
  void slot_proxy_func__ZN5QMenu11aboutToShowEv();
public:
  void (*slot_func__ZN5QMenu11aboutToShowEv)(void* rsfptr) = NULL;
public slots:
  // hovered(class QAction *)
  void slot_proxy_func__ZN5QMenu7hoveredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN5QMenu7hoveredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public slots:
  // aboutToHide()
  void slot_proxy_func__ZN5QMenu11aboutToHideEv();
public:
  void (*slot_func__ZN5QMenu11aboutToHideEv)(void* rsfptr) = NULL;
public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN5QMenu9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN5QMenu9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmenu.moc"

extern "C" {
  QMenu_SlotProxy* QMenu_SlotProxy_new()
  {
    return new QMenu_SlotProxy();
  }
};

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu11aboutToShowEv() {
  if (this->slot_func__ZN5QMenu11aboutToShowEv != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu11aboutToShowEv(this->rsfptr);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu11aboutToShowEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu11aboutToShowEv = (decltype(that->slot_func__ZN5QMenu11aboutToShowEv))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(aboutToShow()), that, SLOT(slot_proxy_func__ZN5QMenu11aboutToShowEv()));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu11aboutToShowEv(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu7hoveredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN5QMenu7hoveredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu7hoveredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu7hoveredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu7hoveredEP7QAction = (decltype(that->slot_func__ZN5QMenu7hoveredEP7QAction))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(hovered(class QAction *)), that, SLOT(slot_proxy_func__ZN5QMenu7hoveredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu7hoveredEP7QAction(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu11aboutToHideEv() {
  if (this->slot_func__ZN5QMenu11aboutToHideEv != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu11aboutToHideEv(this->rsfptr);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu11aboutToHideEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu11aboutToHideEv = (decltype(that->slot_func__ZN5QMenu11aboutToHideEv))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(aboutToHide()), that, SLOT(slot_proxy_func__ZN5QMenu11aboutToHideEv()));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu11aboutToHideEv(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QMenu_SlotProxy::slot_proxy_func__ZN5QMenu9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN5QMenu9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN5QMenu9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QMenu_SlotProxy_connect__ZN5QMenu9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMenu_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QMenu9triggeredEP7QAction = (decltype(that->slot_func__ZN5QMenu9triggeredEP7QAction))ffifptr;
  QObject::connect((QMenu*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN5QMenu9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QMenu_SlotProxy_disconnect__ZN5QMenu9triggeredEP7QAction(QMenu_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

