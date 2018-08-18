//  header block begin
// /usr/include/qt/QtWidgets/qaction.h
#ifndef protected
#define protected public
#endif
#include <qaction.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAction is pure virtual: false
// QAction has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAction : public QAction {
public:
  virtual ~MyQAction() {}
// void QAction(QObject *)
MyQAction(QObject * parent) : QAction(parent) {}
// void QAction(const QString &, QObject *)
MyQAction(const QString & text, QObject * parent) : QAction(text, parent) {}
// void QAction(const QIcon &, const QString &, QObject *)
MyQAction(const QIcon & icon, const QString & text, QObject * parent) : QAction(icon, text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAction::event(arg0);
  }
  }

// void QAction(QActionPrivate &, QObject *)
MyQAction(QActionPrivate & dd, QObject * parent) : QAction(dd, parent) {}
};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:183
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QAction5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QAction*)this_)->QAction::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction10metaObjectEv(void *this_) {
  return (void*)((QAction*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QAction11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAction*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QAction11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAction*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QAction2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAction::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QAction6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAction::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:95
// [-2] void QAction(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QActionC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAction*)(0);
  return  new MyQAction(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:96
// [-2] void QAction(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QActionC2ERK7QStringP7QObject(QString* text, QObject * parent) {
  auto _nilp = (MyQAction*)(0);
  return  new MyQAction(*text, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:97
// [-2] void QAction(const QIcon &, const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QActionC2ERK5QIconRK7QStringP7QObject(QIcon* icon, QString* text, QObject * parent) {
  auto _nilp = (MyQAction*)(0);
  return  new MyQAction(*icon, *text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:99
// [-2] void ~QAction()
extern "C" Q_DECL_EXPORT
void C_ZN7QActionD2Ev(void *this_) {
  delete (QAction*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:101
// [-2] void setActionGroup(QActionGroup *)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction14setActionGroupEP12QActionGroup(void *this_, QActionGroup * group) {
  ((QAction*)this_)->setActionGroup(group);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:102
// [8] QActionGroup * actionGroup()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction11actionGroupEv(void *this_) {
  return (void*)((QAction*)this_)->actionGroup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:103
// [-2] void setIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QAction*)this_)->setIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:104
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4iconEv(void *this_) {
  auto rv = ((QAction*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:106
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setTextERK7QString(void *this_, QString* text) {
  ((QAction*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:107
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4textEv(void *this_) {
  auto rv = ((QAction*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:109
// [-2] void setIconText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setIconTextERK7QString(void *this_, QString* text) {
  ((QAction*)this_)->setIconText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:110
// [8] QString iconText()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction8iconTextEv(void *this_) {
  auto rv = ((QAction*)this_)->iconText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:112
// [-2] void setToolTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setToolTipERK7QString(void *this_, QString* tip) {
  ((QAction*)this_)->setToolTip(*tip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:113
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction7toolTipEv(void *this_) {
  auto rv = ((QAction*)this_)->toolTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:115
// [-2] void setStatusTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setStatusTipERK7QString(void *this_, QString* statusTip) {
  ((QAction*)this_)->setStatusTip(*statusTip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:116
// [8] QString statusTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction9statusTipEv(void *this_) {
  auto rv = ((QAction*)this_)->statusTip();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:118
// [-2] void setWhatsThis(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setWhatsThisERK7QString(void *this_, QString* what) {
  ((QAction*)this_)->setWhatsThis(*what);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:119
// [8] QString whatsThis()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction9whatsThisEv(void *this_) {
  auto rv = ((QAction*)this_)->whatsThis();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:121
// [-2] void setPriority(QAction::Priority)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setPriorityENS_8PriorityE(void *this_, QAction::Priority priority) {
  ((QAction*)this_)->setPriority(priority);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:122
// [4] QAction::Priority priority()
extern "C" Q_DECL_EXPORT
QAction::Priority C_ZNK7QAction8priorityEv(void *this_) {
  return (QAction::Priority)((QAction*)this_)->priority();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:125
// [8] QMenu * menu()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4menuEv(void *this_) {
  return (void*)((QAction*)this_)->menu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:126
// [-2] void setMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QAction*)this_)->setMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:129
// [-2] void setSeparator(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setSeparatorEb(void *this_, bool b) {
  ((QAction*)this_)->setSeparator(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:130
// [1] bool isSeparator()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction11isSeparatorEv(void *this_) {
  return (bool)((QAction*)this_)->isSeparator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:133
// [-2] void setShortcut(const QKeySequence &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setShortcutERK12QKeySequence(void *this_, QKeySequence* shortcut) {
  ((QAction*)this_)->setShortcut(*shortcut);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:134
// [8] QKeySequence shortcut()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction8shortcutEv(void *this_) {
  auto rv = ((QAction*)this_)->shortcut();
return new QKeySequence(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:136
// [-2] void setShortcuts(const QList<QKeySequence> &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setShortcutsERK5QListI12QKeySequenceE(void *this_, const QList<QKeySequence> & shortcuts) {
  ((QAction*)this_)->setShortcuts(shortcuts);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:137
// [-2] void setShortcuts(QKeySequence::StandardKey)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setShortcutsEN12QKeySequence11StandardKeyE(void *this_, QKeySequence::StandardKey arg0) {
  ((QAction*)this_)->setShortcuts(arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:138
// [-2] QList<QKeySequence> shortcuts()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QKeySequence>* C_ZNK7QAction9shortcutsEv(void *this_) {
  auto rv = ((QAction*)this_)->shortcuts();
return new QList<QKeySequence>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:140
// [-2] void setShortcutContext(Qt::ShortcutContext)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction18setShortcutContextEN2Qt15ShortcutContextE(void *this_, Qt::ShortcutContext context) {
  ((QAction*)this_)->setShortcutContext(context);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:141
// [4] Qt::ShortcutContext shortcutContext()
extern "C" Q_DECL_EXPORT
Qt::ShortcutContext C_ZNK7QAction15shortcutContextEv(void *this_) {
  return (Qt::ShortcutContext)((QAction*)this_)->shortcutContext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:143
// [-2] void setAutoRepeat(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction13setAutoRepeatEb(void *this_, bool arg0) {
  ((QAction*)this_)->setAutoRepeat(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:144
// [1] bool autoRepeat()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction10autoRepeatEv(void *this_) {
  return (bool)((QAction*)this_)->autoRepeat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:147
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setFontERK5QFont(void *this_, QFont* font) {
  ((QAction*)this_)->setFont(*font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:148
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4fontEv(void *this_) {
  auto rv = ((QAction*)this_)->font();
return new QFont(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:150
// [-2] void setCheckable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction12setCheckableEb(void *this_, bool arg0) {
  ((QAction*)this_)->setCheckable(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:151
// [1] bool isCheckable()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction11isCheckableEv(void *this_) {
  return (bool)((QAction*)this_)->isCheckable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:153
// [16] QVariant data()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction4dataEv(void *this_) {
  auto rv = ((QAction*)this_)->data();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:154
// [-2] void setData(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7setDataERK8QVariant(void *this_, QVariant* var_) {
  ((QAction*)this_)->setData(*var_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:156
// [1] bool isChecked()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction9isCheckedEv(void *this_) {
  return (bool)((QAction*)this_)->isChecked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:158
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction9isEnabledEv(void *this_) {
  return (bool)((QAction*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:160
// [1] bool isVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction9isVisibleEv(void *this_) {
  return (bool)((QAction*)this_)->isVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:163
// [-2] void activate(QAction::ActionEvent)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction8activateENS_11ActionEventE(void *this_, QAction::ActionEvent event) {
  ((QAction*)this_)->activate(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:164
// [1] bool showStatusText(QWidget *)
extern "C" Q_DECL_EXPORT
bool C_ZN7QAction14showStatusTextEP7QWidget(void *this_, QWidget * widget) {
  return (bool)((QAction*)this_)->showStatusText(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:166
// [-2] void setMenuRole(QAction::MenuRole)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setMenuRoleENS_8MenuRoleE(void *this_, QAction::MenuRole menuRole) {
  ((QAction*)this_)->setMenuRole(menuRole);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:167
// [4] QAction::MenuRole menuRole()
extern "C" Q_DECL_EXPORT
QAction::MenuRole C_ZNK7QAction8menuRoleEv(void *this_) {
  return (QAction::MenuRole)((QAction*)this_)->menuRole();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:169
// [-2] void setIconVisibleInMenu(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction20setIconVisibleInMenuEb(void *this_, bool visible) {
  ((QAction*)this_)->setIconVisibleInMenu(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:170
// [1] bool isIconVisibleInMenu()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction19isIconVisibleInMenuEv(void *this_) {
  return (bool)((QAction*)this_)->isIconVisibleInMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:172
// [-2] void setShortcutVisibleInContextMenu(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction31setShortcutVisibleInContextMenuEb(void *this_, bool show) {
  ((QAction*)this_)->setShortcutVisibleInContextMenu(show);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:173
// [1] bool isShortcutVisibleInContextMenu()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QAction30isShortcutVisibleInContextMenuEv(void *this_) {
  return (bool)((QAction*)this_)->isShortcutVisibleInContextMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:175
// [8] QWidget * parentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QAction12parentWidgetEv(void *this_) {
  return (void*)((QAction*)this_)->parentWidget();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qaction.h:177
// [-2] QList<QWidget *> associatedWidgets()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
QList<QWidget *>* C_ZNK7QAction17associatedWidgetsEv(void *this_) {
  auto rv = ((QAction*)this_)->associatedWidgets();
return new QList<QWidget *>(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qaction.h:179
// [-2] QList<QGraphicsWidget *> associatedGraphicsWidgets()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
QList<QGraphicsWidget *>* C_ZNK7QAction25associatedGraphicsWidgetsEv(void *this_) {
  auto rv = ((QAction*)this_)->associatedGraphicsWidgets();
return new QList<QGraphicsWidget *>(rv);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:187
// [-2] void trigger()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7triggerEv(void *this_) {
  ((QAction*)this_)->trigger();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:188
// [-2] void hover()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction5hoverEv(void *this_) {
  ((QAction*)this_)->hover();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:189
// [-2] void setChecked(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setCheckedEb(void *this_, bool arg0) {
  ((QAction*)this_)->setChecked(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:190
// [-2] void toggle()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction6toggleEv(void *this_) {
  ((QAction*)this_)->toggle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:191
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setEnabledEb(void *this_, bool arg0) {
  ((QAction*)this_)->setEnabled(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:192
// [-2] void setDisabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction11setDisabledEb(void *this_, bool b) {
  ((QAction*)this_)->setDisabled(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:193
// [-2] void setVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction10setVisibleEb(void *this_, bool arg0) {
  ((QAction*)this_)->setVisible(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:196
// [-2] void changed()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7changedEv(void *this_) {
  ((QAction*)this_)->changed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:197
// [-2] void triggered(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction9triggeredEb(void *this_, bool checked) {
  ((QAction*)this_)->triggered(checked);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:198
// [-2] void hovered()
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7hoveredEv(void *this_) {
  ((QAction*)this_)->hovered();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:199
// [-2] void toggled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QAction7toggledEb(void *this_, bool arg0) {
  ((QAction*)this_)->toggled(arg0);
}

//  main block end
