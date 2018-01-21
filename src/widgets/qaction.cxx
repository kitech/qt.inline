//  header block begin
// /usr/include/qt/QtWidgets/qaction.h
#include <qaction.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qaction.h:61
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QAction10metaObjectEv(void *this_) {
  /*return*/ ((QAction*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qaction.h:93
// void QAction(class QObject *)
extern "C"
void* C_ZN7QActionC1EP7QObject(QObject * parent) {
  return new QAction(parent);
}
// /usr/include/qt/QtWidgets/qaction.h:94
// void QAction(const class QString &, class QObject *)
extern "C"
void* C_ZN7QActionC1ERK7QStringP7QObject(const QString & text, QObject * parent) {
  return new QAction(text, parent);
}
// /usr/include/qt/QtWidgets/qaction.h:95
// void QAction(const class QIcon &, const class QString &, class QObject *)
extern "C"
void* C_ZN7QActionC1ERK5QIconRK7QStringP7QObject(const QIcon & icon, const QString & text, QObject * parent) {
  return new QAction(icon, text, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qaction.h:97
// void ~QAction()
extern "C"
void C_ZN7QActionD1Ev(void *this_) {
  delete (QAction*)(this_);
}
// /usr/include/qt/QtWidgets/qaction.h:99
// void setActionGroup(class QActionGroup *)
extern "C"
void C_ZN7QAction14setActionGroupEP12QActionGroup(void *this_, QActionGroup * group) {
  ((QAction*)this_)->setActionGroup(group);
}
// /usr/include/qt/QtWidgets/qaction.h:100
// QActionGroup * actionGroup()
extern "C"
void C_ZNK7QAction11actionGroupEv(void *this_) {
  /*return*/ ((QAction*)this_)->actionGroup();
}
// /usr/include/qt/QtWidgets/qaction.h:101
// void setIcon(const class QIcon &)
extern "C"
void C_ZN7QAction7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QAction*)this_)->setIcon(icon);
}
// /usr/include/qt/QtWidgets/qaction.h:102
// QIcon icon()
extern "C"
void C_ZNK7QAction4iconEv(void *this_) {
  /*return*/ ((QAction*)this_)->icon();
}
// /usr/include/qt/QtWidgets/qaction.h:104
// void setText(const class QString &)
extern "C"
void C_ZN7QAction7setTextERK7QString(void *this_, const QString & text) {
  ((QAction*)this_)->setText(text);
}
// /usr/include/qt/QtWidgets/qaction.h:105
// QString text()
extern "C"
void C_ZNK7QAction4textEv(void *this_) {
  /*return*/ ((QAction*)this_)->text();
}
// /usr/include/qt/QtWidgets/qaction.h:107
// void setIconText(const class QString &)
extern "C"
void C_ZN7QAction11setIconTextERK7QString(void *this_, const QString & text) {
  ((QAction*)this_)->setIconText(text);
}
// /usr/include/qt/QtWidgets/qaction.h:108
// QString iconText()
extern "C"
void C_ZNK7QAction8iconTextEv(void *this_) {
  /*return*/ ((QAction*)this_)->iconText();
}
// /usr/include/qt/QtWidgets/qaction.h:110
// void setToolTip(const class QString &)
extern "C"
void C_ZN7QAction10setToolTipERK7QString(void *this_, const QString & tip) {
  ((QAction*)this_)->setToolTip(tip);
}
// /usr/include/qt/QtWidgets/qaction.h:111
// QString toolTip()
extern "C"
void C_ZNK7QAction7toolTipEv(void *this_) {
  /*return*/ ((QAction*)this_)->toolTip();
}
// /usr/include/qt/QtWidgets/qaction.h:113
// void setStatusTip(const class QString &)
extern "C"
void C_ZN7QAction12setStatusTipERK7QString(void *this_, const QString & statusTip) {
  ((QAction*)this_)->setStatusTip(statusTip);
}
// /usr/include/qt/QtWidgets/qaction.h:114
// QString statusTip()
extern "C"
void C_ZNK7QAction9statusTipEv(void *this_) {
  /*return*/ ((QAction*)this_)->statusTip();
}
// /usr/include/qt/QtWidgets/qaction.h:116
// void setWhatsThis(const class QString &)
extern "C"
void C_ZN7QAction12setWhatsThisERK7QString(void *this_, const QString & what) {
  ((QAction*)this_)->setWhatsThis(what);
}
// /usr/include/qt/QtWidgets/qaction.h:117
// QString whatsThis()
extern "C"
void C_ZNK7QAction9whatsThisEv(void *this_) {
  /*return*/ ((QAction*)this_)->whatsThis();
}
// /usr/include/qt/QtWidgets/qaction.h:119
// void setPriority(enum QAction::Priority)
extern "C"
void C_ZN7QAction11setPriorityENS_8PriorityE(void *this_, QAction::Priority priority) {
  ((QAction*)this_)->setPriority(priority);
}
// /usr/include/qt/QtWidgets/qaction.h:120
// QAction::Priority priority()
extern "C"
void C_ZNK7QAction8priorityEv(void *this_) {
  /*return*/ ((QAction*)this_)->priority();
}
// /usr/include/qt/QtWidgets/qaction.h:123
// QMenu * menu()
extern "C"
void C_ZNK7QAction4menuEv(void *this_) {
  /*return*/ ((QAction*)this_)->menu();
}
// /usr/include/qt/QtWidgets/qaction.h:124
// void setMenu(class QMenu *)
extern "C"
void C_ZN7QAction7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QAction*)this_)->setMenu(menu);
}
// /usr/include/qt/QtWidgets/qaction.h:127
// void setSeparator(_Bool)
extern "C"
void C_ZN7QAction12setSeparatorEb(void *this_, bool b) {
  ((QAction*)this_)->setSeparator(b);
}
// /usr/include/qt/QtWidgets/qaction.h:128
// bool isSeparator()
extern "C"
void C_ZNK7QAction11isSeparatorEv(void *this_) {
  /*return*/ ((QAction*)this_)->isSeparator();
}
// /usr/include/qt/QtWidgets/qaction.h:131
// void setShortcut(const class QKeySequence &)
extern "C"
void C_ZN7QAction11setShortcutERK12QKeySequence(void *this_, const QKeySequence & shortcut) {
  ((QAction*)this_)->setShortcut(shortcut);
}
// /usr/include/qt/QtWidgets/qaction.h:132
// QKeySequence shortcut()
extern "C"
void C_ZNK7QAction8shortcutEv(void *this_) {
  /*return*/ ((QAction*)this_)->shortcut();
}
// /usr/include/qt/QtWidgets/qaction.h:134
// void setShortcuts(const QList<class QKeySequence> &)
extern "C"
void C_ZN7QAction12setShortcutsERK5QListI12QKeySequenceE(void *this_, const QList<QKeySequence> & shortcuts) {
  ((QAction*)this_)->setShortcuts(shortcuts);
}
// /usr/include/qt/QtWidgets/qaction.h:135
// void setShortcuts(class QKeySequence::StandardKey)
extern "C"
void C_ZN7QAction12setShortcutsEN12QKeySequence11StandardKeyE(void *this_, QKeySequence::StandardKey arg0) {
  ((QAction*)this_)->setShortcuts(arg0);
}
// /usr/include/qt/QtWidgets/qaction.h:136
// QList<QKeySequence> shortcuts()
extern "C"
void C_ZNK7QAction9shortcutsEv(void *this_) {
  /*return*/ ((QAction*)this_)->shortcuts();
}
// /usr/include/qt/QtWidgets/qaction.h:138
// void setShortcutContext(Qt::ShortcutContext)
extern "C"
void C_ZN7QAction18setShortcutContextEN2Qt15ShortcutContextE(void *this_, Qt::ShortcutContext context) {
  ((QAction*)this_)->setShortcutContext(context);
}
// /usr/include/qt/QtWidgets/qaction.h:139
// Qt::ShortcutContext shortcutContext()
extern "C"
void C_ZNK7QAction15shortcutContextEv(void *this_) {
  /*return*/ ((QAction*)this_)->shortcutContext();
}
// /usr/include/qt/QtWidgets/qaction.h:141
// void setAutoRepeat(_Bool)
extern "C"
void C_ZN7QAction13setAutoRepeatEb(void *this_, bool arg0) {
  ((QAction*)this_)->setAutoRepeat(arg0);
}
// /usr/include/qt/QtWidgets/qaction.h:142
// bool autoRepeat()
extern "C"
void C_ZNK7QAction10autoRepeatEv(void *this_) {
  /*return*/ ((QAction*)this_)->autoRepeat();
}
// /usr/include/qt/QtWidgets/qaction.h:145
// void setFont(const class QFont &)
extern "C"
void C_ZN7QAction7setFontERK5QFont(void *this_, const QFont & font) {
  ((QAction*)this_)->setFont(font);
}
// /usr/include/qt/QtWidgets/qaction.h:146
// QFont font()
extern "C"
void C_ZNK7QAction4fontEv(void *this_) {
  /*return*/ ((QAction*)this_)->font();
}
// /usr/include/qt/QtWidgets/qaction.h:148
// void setCheckable(_Bool)
extern "C"
void C_ZN7QAction12setCheckableEb(void *this_, bool arg0) {
  ((QAction*)this_)->setCheckable(arg0);
}
// /usr/include/qt/QtWidgets/qaction.h:149
// bool isCheckable()
extern "C"
void C_ZNK7QAction11isCheckableEv(void *this_) {
  /*return*/ ((QAction*)this_)->isCheckable();
}
// /usr/include/qt/QtWidgets/qaction.h:151
// QVariant data()
extern "C"
void C_ZNK7QAction4dataEv(void *this_) {
  /*return*/ ((QAction*)this_)->data();
}
// /usr/include/qt/QtWidgets/qaction.h:152
// void setData(const class QVariant &)
extern "C"
void C_ZN7QAction7setDataERK8QVariant(void *this_, const QVariant & var) {
  ((QAction*)this_)->setData(var);
}
// /usr/include/qt/QtWidgets/qaction.h:154
// bool isChecked()
extern "C"
void C_ZNK7QAction9isCheckedEv(void *this_) {
  /*return*/ ((QAction*)this_)->isChecked();
}
// /usr/include/qt/QtWidgets/qaction.h:156
// bool isEnabled()
extern "C"
void C_ZNK7QAction9isEnabledEv(void *this_) {
  /*return*/ ((QAction*)this_)->isEnabled();
}
// /usr/include/qt/QtWidgets/qaction.h:158
// bool isVisible()
extern "C"
void C_ZNK7QAction9isVisibleEv(void *this_) {
  /*return*/ ((QAction*)this_)->isVisible();
}
// /usr/include/qt/QtWidgets/qaction.h:161
// void activate(enum QAction::ActionEvent)
extern "C"
void C_ZN7QAction8activateENS_11ActionEventE(void *this_, QAction::ActionEvent event) {
  ((QAction*)this_)->activate(event);
}
// /usr/include/qt/QtWidgets/qaction.h:162
// bool showStatusText(class QWidget *)
extern "C"
void C_ZN7QAction14showStatusTextEP7QWidget(void *this_, QWidget * widget) {
  /*return*/ ((QAction*)this_)->showStatusText(widget);
}
// /usr/include/qt/QtWidgets/qaction.h:164
// void setMenuRole(enum QAction::MenuRole)
extern "C"
void C_ZN7QAction11setMenuRoleENS_8MenuRoleE(void *this_, QAction::MenuRole menuRole) {
  ((QAction*)this_)->setMenuRole(menuRole);
}
// /usr/include/qt/QtWidgets/qaction.h:165
// QAction::MenuRole menuRole()
extern "C"
void C_ZNK7QAction8menuRoleEv(void *this_) {
  /*return*/ ((QAction*)this_)->menuRole();
}
// /usr/include/qt/QtWidgets/qaction.h:167
// void setIconVisibleInMenu(_Bool)
extern "C"
void C_ZN7QAction20setIconVisibleInMenuEb(void *this_, bool visible) {
  ((QAction*)this_)->setIconVisibleInMenu(visible);
}
// /usr/include/qt/QtWidgets/qaction.h:168
// bool isIconVisibleInMenu()
extern "C"
void C_ZNK7QAction19isIconVisibleInMenuEv(void *this_) {
  /*return*/ ((QAction*)this_)->isIconVisibleInMenu();
}
// /usr/include/qt/QtWidgets/qaction.h:171
// QWidget * parentWidget()
extern "C"
void C_ZNK7QAction12parentWidgetEv(void *this_) {
  /*return*/ ((QAction*)this_)->parentWidget();
}
// /usr/include/qt/QtWidgets/qaction.h:173
// QList<QWidget *> associatedWidgets()
extern "C"
void C_ZNK7QAction17associatedWidgetsEv(void *this_) {
  /*return*/ ((QAction*)this_)->associatedWidgets();
}
// /usr/include/qt/QtWidgets/qaction.h:175
// QList<QGraphicsWidget *> associatedGraphicsWidgets()
extern "C"
void C_ZNK7QAction25associatedGraphicsWidgetsEv(void *this_) {
  /*return*/ ((QAction*)this_)->associatedGraphicsWidgets();
}
// inline
// /usr/include/qt/QtWidgets/qaction.h:183
// void trigger()
extern "C"
void C_ZN7QAction7triggerEv(void *this_) {
  ((QAction*)this_)->trigger();
}
// inline
// /usr/include/qt/QtWidgets/qaction.h:184
// void hover()
extern "C"
void C_ZN7QAction5hoverEv(void *this_) {
  ((QAction*)this_)->hover();
}
// /usr/include/qt/QtWidgets/qaction.h:185
// void setChecked(_Bool)
extern "C"
void C_ZN7QAction10setCheckedEb(void *this_, bool arg0) {
  ((QAction*)this_)->setChecked(arg0);
}
// /usr/include/qt/QtWidgets/qaction.h:186
// void toggle()
extern "C"
void C_ZN7QAction6toggleEv(void *this_) {
  ((QAction*)this_)->toggle();
}
// /usr/include/qt/QtWidgets/qaction.h:187
// void setEnabled(_Bool)
extern "C"
void C_ZN7QAction10setEnabledEb(void *this_, bool arg0) {
  ((QAction*)this_)->setEnabled(arg0);
}
// inline
// /usr/include/qt/QtWidgets/qaction.h:188
// void setDisabled(_Bool)
extern "C"
void C_ZN7QAction11setDisabledEb(void *this_, bool b) {
  ((QAction*)this_)->setDisabled(b);
}
// /usr/include/qt/QtWidgets/qaction.h:189
// void setVisible(_Bool)
extern "C"
void C_ZN7QAction10setVisibleEb(void *this_, bool arg0) {
  ((QAction*)this_)->setVisible(arg0);
}
// /usr/include/qt/QtWidgets/qaction.h:192
// void changed()
extern "C"
void C_ZN7QAction7changedEv(void *this_) {
  ((QAction*)this_)->changed();
}
// /usr/include/qt/QtWidgets/qaction.h:193
// void triggered(_Bool)
extern "C"
void C_ZN7QAction9triggeredEb(void *this_, bool checked) {
  ((QAction*)this_)->triggered(checked);
}
// /usr/include/qt/QtWidgets/qaction.h:194
// void hovered()
extern "C"
void C_ZN7QAction7hoveredEv(void *this_) {
  ((QAction*)this_)->hovered();
}
// /usr/include/qt/QtWidgets/qaction.h:195
// void toggled(_Bool)
extern "C"
void C_ZN7QAction7toggledEb(void *this_, bool arg0) {
  ((QAction*)this_)->toggled(arg0);
}
//  main block end
