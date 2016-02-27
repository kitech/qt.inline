// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qaction.h
// dst-file: /src/widgets/qaction.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qaction.h>


#include <qwidget.h>
#include <qlist.h>
#include <qwindowdefs.h>
#include <qstring.h>
#include <qfont.h>
#include <qkeysequence.h>
#include <qicon.h>
#include <qgraphicswidget.h>
#include <qgraphicsscene.h>
#include <qvariant.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qaction_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 177, column 10>
//   // proto:  void QAction::trigger();
if (true) {
  auto f = [](QAction flythis) {
    ((QAction*)0)->trigger();
    flythis.trigger();
  };
  if (f == nullptr){}
}
// _ZN7QAction7triggerEv trigger()
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 182, column 17>
//   // proto:  void QAction::setDisabled(bool b);
if (true) {
  auto f = [](QAction flythis, bool arg1) {
    ((QAction*)0)->setDisabled(arg1);
    flythis.setDisabled(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QAction11setDisabledEb setDisabled(_Bool)
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 178, column 10>
//   // proto:  void QAction::hover();
if (true) {
  auto f = [](QAction flythis) {
    ((QAction*)0)->hover();
    flythis.hover();
  };
  if (f == nullptr){}
}
// _ZN7QAction5hoverEv hover()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAction_Class_Size()
{
  return sizeof(QAction);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 167, column 22>
//   // proto:  QList<QWidget *> QAction::associatedWidgets();
// _ZNK7QAction17associatedWidgetsEv associatedWidgets()
extern "C"
QList<QWidget *>*
C_ZNK7QAction17associatedWidgetsEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->associatedWidgets();
  return new QList<QWidget *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 135, column 10>
//   // proto:  void QAction::setAutoRepeat(bool );
// _ZN7QAction13setAutoRepeatEb setAutoRepeat(_Bool)
extern "C"
void
C_ZN7QAction13setAutoRepeatEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setAutoRepeat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 111, column 13>
//   // proto:  QString QAction::whatsThis();
// _ZNK7QAction9whatsThisEv whatsThis()
extern "C"
QString*
C_ZNK7QAction9whatsThisEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->whatsThis();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 88, column 5>
//   // proto:  void QAction::QAction(const QString & text, QObject * parent);
extern "C"
QAction*
C_ZN7QActionC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QAction(*((const QString*)arg1), arg2);
  return ret;
}
//   // proto:  void QAction::~QAction();
extern "C"
void C_ZN7QActionD2Ev(void *qthis) {
  delete (QAction*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 152, column 10>
//   // proto:  bool QAction::isVisible();
// _ZNK7QAction9isVisibleEv isVisible()
extern "C"
bool
C_ZNK7QAction9isVisibleEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 139, column 10>
//   // proto:  void QAction::setFont(const QFont & font);
// _ZN7QAction7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN7QAction7setFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QAction*)qthis)->setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 146, column 10>
//   // proto:  void QAction::setData(const QVariant & var);
// _ZN7QAction7setDataERK8QVariant setData(const class QVariant &)
extern "C"
void
C_ZN7QAction7setDataERK8QVariant(void *qthis,
const QVariant* arg1) {
  ((QAction*)qthis)->setData(*((const QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 95, column 10>
//   // proto:  void QAction::setIcon(const QIcon & icon);
// _ZN7QAction7setIconERK5QIcon setIcon(const class QIcon &)
extern "C"
void
C_ZN7QAction7setIconERK5QIcon(void *qthis,
const QIcon* arg1) {
  ((QAction*)qthis)->setIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 87, column 14>
//   // proto:  void QAction::QAction(QObject * parent);
extern "C"
QAction*
C_ZN7QActionC2EP7QObject(QObject * arg1) {
  auto ret = new QAction(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 129, column 10>
//   // proto:  void QAction::setShortcuts(QKeySequence::StandardKey );
// _ZN7QAction12setShortcutsEN12QKeySequence11StandardKeyE setShortcuts(class QKeySequence::StandardKey)
extern "C"
void
C_ZN7QAction12setShortcutsEN12QKeySequence11StandardKeyE(void *qthis,
QKeySequence::StandardKey* arg1) {
  ((QAction*)qthis)->setShortcuts(*((QKeySequence::StandardKey*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 55, column 5>
//   // proto:  const QMetaObject * QAction::metaObject();
// _ZNK7QAction10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QAction10metaObjectEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 187, column 10>
//   // proto:  void QAction::triggered(bool checked);
// _ZN7QAction9triggeredEb triggered(_Bool)
extern "C"
void
C_ZN7QAction9triggeredEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->triggered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 189, column 10>
//   // proto:  void QAction::toggled(bool );
// _ZN7QAction7toggledEb toggled(_Bool)
extern "C"
void
C_ZN7QAction7toggledEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->toggled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 98, column 10>
//   // proto:  void QAction::setText(const QString & text);
// _ZN7QAction7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN7QAction7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QAction*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 156, column 10>
//   // proto:  bool QAction::showStatusText(QWidget * widget);
// _ZN7QAction14showStatusTextEP7QWidget showStatusText(class QWidget *)
extern "C"
bool
C_ZN7QAction14showStatusTextEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QAction*)qthis)->showStatusText(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 102, column 13>
//   // proto:  QString QAction::iconText();
// _ZNK7QAction8iconTextEv iconText()
extern "C"
QString*
C_ZNK7QAction8iconTextEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->iconText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 161, column 10>
//   // proto:  void QAction::setIconVisibleInMenu(bool visible);
// _ZN7QAction20setIconVisibleInMenuEb setIconVisibleInMenu(_Bool)
extern "C"
void
C_ZN7QAction20setIconVisibleInMenuEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setIconVisibleInMenu(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 108, column 13>
//   // proto:  QString QAction::statusTip();
// _ZNK7QAction9statusTipEv statusTip()
extern "C"
QString*
C_ZNK7QAction9statusTipEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->statusTip();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 143, column 10>
//   // proto:  bool QAction::isCheckable();
// _ZNK7QAction11isCheckableEv isCheckable()
extern "C"
bool
C_ZNK7QAction11isCheckableEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->isCheckable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 110, column 10>
//   // proto:  void QAction::setWhatsThis(const QString & what);
// _ZN7QAction12setWhatsThisERK7QString setWhatsThis(const class QString &)
extern "C"
void
C_ZN7QAction12setWhatsThisERK7QString(void *qthis,
const QString* arg1) {
  ((QAction*)qthis)->setWhatsThis(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 132, column 10>
//   // proto:  void QAction::setShortcutContext(Qt::ShortcutContext context);
// _ZN7QAction18setShortcutContextEN2Qt15ShortcutContextE setShortcutContext(Qt::ShortcutContext)
extern "C"
void
C_ZN7QAction18setShortcutContextEN2Qt15ShortcutContextE(void *qthis,
Qt::ShortcutContext* arg1) {
  ((QAction*)qthis)->setShortcutContext(*((Qt::ShortcutContext*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 155, column 10>
//   // proto:  void QAction::activate(QAction::ActionEvent event);
// _ZN7QAction8activateENS_11ActionEventE activate(enum QAction::ActionEvent)
extern "C"
void
C_ZN7QAction8activateENS_11ActionEventE(void *qthis,
QAction::ActionEvent arg1) {
  ((QAction*)qthis)->activate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 117, column 12>
//   // proto:  QMenu * QAction::menu();
// _ZNK7QAction4menuEv menu()
extern "C"
void*
C_ZNK7QAction4menuEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->menu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 158, column 10>
//   // proto:  void QAction::setMenuRole(QAction::MenuRole menuRole);
// _ZN7QAction11setMenuRoleENS_8MenuRoleE setMenuRole(enum QAction::MenuRole)
extern "C"
void
C_ZN7QAction11setMenuRoleENS_8MenuRoleE(void *qthis,
QAction::MenuRole arg1) {
  ((QAction*)qthis)->setMenuRole(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 177, column 10>
//   // proto:  void QAction::trigger();
// _ZN7QAction7triggerEv trigger()
extern "C"
void
C_ZN7QAction7triggerEv(void *qthis) {
  ((QAction*)qthis)->trigger();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 159, column 14>
//   // proto:  QAction::MenuRole QAction::menuRole();
// _ZNK7QAction8menuRoleEv menuRole()
extern "C"
QAction::MenuRole
C_ZNK7QAction8menuRoleEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->menuRole();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 186, column 10>
//   // proto:  void QAction::changed();
// _ZN7QAction7changedEv changed()
extern "C"
void
C_ZN7QAction7changedEv(void *qthis) {
  ((QAction*)qthis)->changed();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 140, column 11>
//   // proto:  QFont QAction::font();
// _ZNK7QAction4fontEv font()
extern "C"
QFont*
C_ZNK7QAction4fontEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 89, column 5>
//   // proto:  void QAction::QAction(const QIcon & icon, const QString & text, QObject * parent);
extern "C"
QAction*
C_ZN7QActionC2ERK5QIconRK7QStringP7QObject(const QIcon* arg1,
const QString* arg2,
QObject * arg3) {
  auto ret = new QAction(*((const QIcon*)arg1), *((const QString*)arg2), arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 179, column 10>
//   // proto:  void QAction::setChecked(bool );
// _ZN7QAction10setCheckedEb setChecked(_Bool)
extern "C"
void
C_ZN7QAction10setCheckedEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setChecked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 182, column 17>
//   // proto:  void QAction::setDisabled(bool b);
// _ZN7QAction11setDisabledEb setDisabled(_Bool)
extern "C"
void
C_ZN7QAction11setDisabledEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setDisabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 125, column 10>
//   // proto:  void QAction::setShortcut(const QKeySequence & shortcut);
// _ZN7QAction11setShortcutERK12QKeySequence setShortcut(const class QKeySequence &)
extern "C"
void
C_ZN7QAction11setShortcutERK12QKeySequence(void *qthis,
const QKeySequence* arg1) {
  ((QAction*)qthis)->setShortcut(*((const QKeySequence*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 180, column 10>
//   // proto:  void QAction::toggle();
// _ZN7QAction6toggleEv toggle()
extern "C"
void
C_ZN7QAction6toggleEv(void *qthis) {
  ((QAction*)qthis)->toggle();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 126, column 18>
//   // proto:  QKeySequence QAction::shortcut();
// _ZNK7QAction8shortcutEv shortcut()
extern "C"
QKeySequence*
C_ZNK7QAction8shortcutEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->shortcut();
  return new QKeySequence(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 96, column 11>
//   // proto:  QIcon QAction::icon();
// _ZNK7QAction4iconEv icon()
extern "C"
QIcon*
C_ZNK7QAction4iconEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->icon();
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 93, column 10>
//   // proto:  void QAction::setActionGroup(QActionGroup * group);
// _ZN7QAction14setActionGroupEP12QActionGroup setActionGroup(class QActionGroup *)
extern "C"
void
C_ZN7QAction14setActionGroupEP12QActionGroup(void *qthis,
QActionGroup * arg1) {
  ((QAction*)qthis)->setActionGroup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 118, column 10>
//   // proto:  void QAction::setMenu(QMenu * menu);
// _ZN7QAction7setMenuEP5QMenu setMenu(class QMenu *)
extern "C"
void
C_ZN7QAction7setMenuEP5QMenu(void *qthis,
QMenu * arg1) {
  ((QAction*)qthis)->setMenu(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 130, column 25>
//   // proto:  QList<QKeySequence> QAction::shortcuts();
// _ZNK7QAction9shortcutsEv shortcuts()
extern "C"
QList<QKeySequence>*
C_ZNK7QAction9shortcutsEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->shortcuts();
  return new QList<QKeySequence>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 142, column 10>
//   // proto:  void QAction::setCheckable(bool );
// _ZN7QAction12setCheckableEb setCheckable(_Bool)
extern "C"
void
C_ZN7QAction12setCheckableEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setCheckable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 105, column 13>
//   // proto:  QString QAction::toolTip();
// _ZNK7QAction7toolTipEv toolTip()
extern "C"
QString*
C_ZNK7QAction7toolTipEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->toolTip();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 165, column 14>
//   // proto:  QWidget * QAction::parentWidget();
// _ZNK7QAction12parentWidgetEv parentWidget()
extern "C"
void*
C_ZNK7QAction12parentWidgetEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->parentWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 113, column 10>
//   // proto:  void QAction::setPriority(QAction::Priority priority);
// _ZN7QAction11setPriorityENS_8PriorityE setPriority(enum QAction::Priority)
extern "C"
void
C_ZN7QAction11setPriorityENS_8PriorityE(void *qthis,
QAction::Priority arg1) {
  ((QAction*)qthis)->setPriority(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 114, column 14>
//   // proto:  QAction::Priority QAction::priority();
// _ZNK7QAction8priorityEv priority()
extern "C"
QAction::Priority
C_ZNK7QAction8priorityEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->priority();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 121, column 10>
//   // proto:  void QAction::setSeparator(bool b);
// _ZN7QAction12setSeparatorEb setSeparator(_Bool)
extern "C"
void
C_ZN7QAction12setSeparatorEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setSeparator(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 128, column 10>
//   // proto:  void QAction::setShortcuts(const QList<QKeySequence> & shortcuts);
// _ZN7QAction12setShortcutsERK5QListI12QKeySequenceE setShortcuts(const QList<class QKeySequence> &)
extern "C"
void
C_ZN7QAction12setShortcutsERK5QListI12QKeySequenceE(void *qthis,
const QList<QKeySequence>* arg1) {
  ((QAction*)qthis)->setShortcuts(*((const QList<QKeySequence>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 169, column 30>
//   // proto:  QList<QGraphicsWidget *> QAction::associatedGraphicsWidgets();
// _ZNK7QAction25associatedGraphicsWidgetsEv associatedGraphicsWidgets()
extern "C"
QList<QGraphicsWidget *>*
C_ZNK7QAction25associatedGraphicsWidgetsEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->associatedGraphicsWidgets();
  return new QList<QGraphicsWidget *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 183, column 10>
//   // proto:  void QAction::setVisible(bool );
// _ZN7QAction10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN7QAction10setVisibleEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 122, column 10>
//   // proto:  bool QAction::isSeparator();
// _ZNK7QAction11isSeparatorEv isSeparator()
extern "C"
bool
C_ZNK7QAction11isSeparatorEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->isSeparator();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 101, column 10>
//   // proto:  void QAction::setIconText(const QString & text);
// _ZN7QAction11setIconTextERK7QString setIconText(const class QString &)
extern "C"
void
C_ZN7QAction11setIconTextERK7QString(void *qthis,
const QString* arg1) {
  ((QAction*)qthis)->setIconText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 94, column 19>
//   // proto:  QActionGroup * QAction::actionGroup();
// _ZNK7QAction11actionGroupEv actionGroup()
extern "C"
void*
C_ZNK7QAction11actionGroupEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->actionGroup();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 107, column 10>
//   // proto:  void QAction::setStatusTip(const QString & statusTip);
// _ZN7QAction12setStatusTipERK7QString setStatusTip(const class QString &)
extern "C"
void
C_ZN7QAction12setStatusTipERK7QString(void *qthis,
const QString* arg1) {
  ((QAction*)qthis)->setStatusTip(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 188, column 10>
//   // proto:  void QAction::hovered();
// _ZN7QAction7hoveredEv hovered()
extern "C"
void
C_ZN7QAction7hoveredEv(void *qthis) {
  ((QAction*)qthis)->hovered();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 145, column 14>
//   // proto:  QVariant QAction::data();
// _ZNK7QAction4dataEv data()
extern "C"
QVariant*
C_ZNK7QAction4dataEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->data();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 148, column 10>
//   // proto:  bool QAction::isChecked();
// _ZNK7QAction9isCheckedEv isChecked()
extern "C"
bool
C_ZNK7QAction9isCheckedEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->isChecked();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 136, column 10>
//   // proto:  bool QAction::autoRepeat();
// _ZNK7QAction10autoRepeatEv autoRepeat()
extern "C"
bool
C_ZNK7QAction10autoRepeatEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->autoRepeat();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 150, column 10>
//   // proto:  bool QAction::isEnabled();
// _ZNK7QAction9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK7QAction9isEnabledEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 99, column 13>
//   // proto:  QString QAction::text();
// _ZNK7QAction4textEv text()
extern "C"
QString*
C_ZNK7QAction4textEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 178, column 10>
//   // proto:  void QAction::hover();
// _ZN7QAction5hoverEv hover()
extern "C"
void
C_ZN7QAction5hoverEv(void *qthis) {
  ((QAction*)qthis)->hover();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 162, column 10>
//   // proto:  bool QAction::isIconVisibleInMenu();
// _ZNK7QAction19isIconVisibleInMenuEv isIconVisibleInMenu()
extern "C"
bool
C_ZNK7QAction19isIconVisibleInMenuEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->isIconVisibleInMenu();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 104, column 10>
//   // proto:  void QAction::setToolTip(const QString & tip);
// _ZN7QAction10setToolTipERK7QString setToolTip(const class QString &)
extern "C"
void
C_ZN7QAction10setToolTipERK7QString(void *qthis,
const QString* arg1) {
  ((QAction*)qthis)->setToolTip(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 181, column 10>
//   // proto:  void QAction::setEnabled(bool );
// _ZN7QAction10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN7QAction10setEnabledEb(void *qthis,
bool arg1) {
  ((QAction*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qaction.h', line 133, column 25>
//   // proto:  Qt::ShortcutContext QAction::shortcutContext();
// _ZNK7QAction15shortcutContextEv shortcutContext()
extern "C"
Qt::ShortcutContext
C_ZNK7QAction15shortcutContextEv(void *qthis) {
  auto ret =
  ((QAction*)qthis)->shortcutContext();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// QAction_SlotProxy here
class QAction_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAction_SlotProxy():QObject(){}

public slots:
  // toggled(_Bool)
  void slot_proxy_func__ZN7QAction7toggledEb(bool arg0);
public:
  void (*slot_func__ZN7QAction7toggledEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // triggered(_Bool)
  void slot_proxy_func__ZN7QAction9triggeredEb(bool arg0);
public:
  void (*slot_func__ZN7QAction9triggeredEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // changed()
  void slot_proxy_func__ZN7QAction7changedEv();
public:
  void (*slot_func__ZN7QAction7changedEv)(void* rsfptr) = NULL;
public slots:
  // hovered()
  void slot_proxy_func__ZN7QAction7hoveredEv();
public:
  void (*slot_func__ZN7QAction7hoveredEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qaction.moc"

extern "C" {
  QAction_SlotProxy* QAction_SlotProxy_new()
  {
    return new QAction_SlotProxy();
  }
};

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7toggledEb(bool arg0) {
  if (this->slot_func__ZN7QAction7toggledEb != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7toggledEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7toggledEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction7toggledEb = (decltype(that->slot_func__ZN7QAction7toggledEb))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(toggled(_Bool)), that, SLOT(slot_proxy_func__ZN7QAction7toggledEb(bool arg0)));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7toggledEb(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction9triggeredEb(bool arg0) {
  if (this->slot_func__ZN7QAction9triggeredEb != NULL) {
    // do smth...
    this->slot_func__ZN7QAction9triggeredEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction9triggeredEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction9triggeredEb = (decltype(that->slot_func__ZN7QAction9triggeredEb))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(triggered(_Bool)), that, SLOT(slot_proxy_func__ZN7QAction9triggeredEb(bool arg0)));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction9triggeredEb(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7changedEv() {
  if (this->slot_func__ZN7QAction7changedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7changedEv(this->rsfptr);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7changedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction7changedEv = (decltype(that->slot_func__ZN7QAction7changedEv))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(changed()), that, SLOT(slot_proxy_func__ZN7QAction7changedEv()));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7changedEv(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAction_SlotProxy::slot_proxy_func__ZN7QAction7hoveredEv() {
  if (this->slot_func__ZN7QAction7hoveredEv != NULL) {
    // do smth...
    this->slot_func__ZN7QAction7hoveredEv(this->rsfptr);
  }
}
extern "C"
void* QAction_SlotProxy_connect__ZN7QAction7hoveredEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAction_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QAction7hoveredEv = (decltype(that->slot_func__ZN7QAction7hoveredEv))ffifptr;
  QObject::connect((QAction*)sender, SIGNAL(hovered()), that, SLOT(slot_proxy_func__ZN7QAction7hoveredEv()));
  return that;
}
extern "C"
void QAction_SlotProxy_disconnect__ZN7QAction7hoveredEv(QAction_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

