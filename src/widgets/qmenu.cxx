// /usr/include/qt/QtWidgets/qmenu.h
#include <qmenu.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qmenu.h:67
// const QMetaObject * metaObject()
extern "C"
void C_ZNK5QMenu10metaObjectEv(void *this_) {
  /*return*/ ((QMenu*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qmenu.h:77
// void QMenu(class QWidget *)
extern "C"
void* C_ZN5QMenuC1EP7QWidget(QWidget * parent) {
  return new QMenu(parent);
}
// /usr/include/qt/QtWidgets/qmenu.h:78
// void QMenu(const class QString &, class QWidget *)
extern "C"
void* C_ZN5QMenuC1ERK7QStringP7QWidget(const QString & title, QWidget * parent) {
  return new QMenu(title, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qmenu.h:79
// void ~QMenu()
extern "C"
void C_ZN5QMenuD1Ev(void *this_) {
  delete (QMenu*)(this_);
}
// /usr/include/qt/QtWidgets/qmenu.h:82
// QAction * addAction(const class QString &)
extern "C"
void C_ZN5QMenu9addActionERK7QString(void *this_, const QString & text) {
  /*return*/ ((QMenu*)this_)->addAction(text);
}
// /usr/include/qt/QtWidgets/qmenu.h:83
// QAction * addAction(const class QIcon &, const class QString &)
extern "C"
void C_ZN5QMenu9addActionERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & text) {
  /*return*/ ((QMenu*)this_)->addAction(icon, text);
}
// /usr/include/qt/QtWidgets/qmenu.h:84
// QAction * addAction(const class QString &, const class QObject *, const char *, const class QKeySequence &)
extern "C"
void C_ZN5QMenu9addActionERK7QStringPK7QObjectPKcRK12QKeySequence(void *this_, const QString & text, const QObject * receiver, const char * member, const QKeySequence & shortcut) {
  /*return*/ ((QMenu*)this_)->addAction(text, receiver, member, shortcut);
}
// /usr/include/qt/QtWidgets/qmenu.h:85
// QAction * addAction(const class QIcon &, const class QString &, const class QObject *, const char *, const class QKeySequence &)
extern "C"
void C_ZN5QMenu9addActionERK5QIconRK7QStringPK7QObjectPKcRK12QKeySequence(void *this_, const QIcon & icon, const QString & text, const QObject * receiver, const char * member, const QKeySequence & shortcut) {
  /*return*/ ((QMenu*)this_)->addAction(icon, text, receiver, member, shortcut);
}
// /usr/include/qt/QtWidgets/qmenu.h:153
// QAction * addMenu(class QMenu *)
extern "C"
void C_ZN5QMenu7addMenuEPS_(void *this_, QMenu * menu) {
  /*return*/ ((QMenu*)this_)->addMenu(menu);
}
// /usr/include/qt/QtWidgets/qmenu.h:154
// QMenu * addMenu(const class QString &)
extern "C"
void C_ZN5QMenu7addMenuERK7QString(void *this_, const QString & title) {
  /*return*/ ((QMenu*)this_)->addMenu(title);
}
// /usr/include/qt/QtWidgets/qmenu.h:155
// QMenu * addMenu(const class QIcon &, const class QString &)
extern "C"
void C_ZN5QMenu7addMenuERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & title) {
  /*return*/ ((QMenu*)this_)->addMenu(icon, title);
}
// /usr/include/qt/QtWidgets/qmenu.h:157
// QAction * addSeparator()
extern "C"
void C_ZN5QMenu12addSeparatorEv(void *this_) {
  /*return*/ ((QMenu*)this_)->addSeparator();
}
// /usr/include/qt/QtWidgets/qmenu.h:159
// QAction * addSection(const class QString &)
extern "C"
void C_ZN5QMenu10addSectionERK7QString(void *this_, const QString & text) {
  /*return*/ ((QMenu*)this_)->addSection(text);
}
// /usr/include/qt/QtWidgets/qmenu.h:160
// QAction * addSection(const class QIcon &, const class QString &)
extern "C"
void C_ZN5QMenu10addSectionERK5QIconRK7QString(void *this_, const QIcon & icon, const QString & text) {
  /*return*/ ((QMenu*)this_)->addSection(icon, text);
}
// /usr/include/qt/QtWidgets/qmenu.h:162
// QAction * insertMenu(class QAction *, class QMenu *)
extern "C"
void C_ZN5QMenu10insertMenuEP7QActionPS_(void *this_, QAction * before, QMenu * menu) {
  /*return*/ ((QMenu*)this_)->insertMenu(before, menu);
}
// /usr/include/qt/QtWidgets/qmenu.h:163
// QAction * insertSeparator(class QAction *)
extern "C"
void C_ZN5QMenu15insertSeparatorEP7QAction(void *this_, QAction * before) {
  /*return*/ ((QMenu*)this_)->insertSeparator(before);
}
// /usr/include/qt/QtWidgets/qmenu.h:164
// QAction * insertSection(class QAction *, const class QString &)
extern "C"
void C_ZN5QMenu13insertSectionEP7QActionRK7QString(void *this_, QAction * before, const QString & text) {
  /*return*/ ((QMenu*)this_)->insertSection(before, text);
}
// /usr/include/qt/QtWidgets/qmenu.h:165
// QAction * insertSection(class QAction *, const class QIcon &, const class QString &)
extern "C"
void C_ZN5QMenu13insertSectionEP7QActionRK5QIconRK7QString(void *this_, QAction * before, const QIcon & icon, const QString & text) {
  /*return*/ ((QMenu*)this_)->insertSection(before, icon, text);
}
// /usr/include/qt/QtWidgets/qmenu.h:167
// bool isEmpty()
extern "C"
void C_ZNK5QMenu7isEmptyEv(void *this_) {
  /*return*/ ((QMenu*)this_)->isEmpty();
}
// /usr/include/qt/QtWidgets/qmenu.h:168
// void clear()
extern "C"
void C_ZN5QMenu5clearEv(void *this_) {
  ((QMenu*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qmenu.h:170
// void setTearOffEnabled(_Bool)
extern "C"
void C_ZN5QMenu17setTearOffEnabledEb(void *this_, bool a0) {
  ((QMenu*)this_)->setTearOffEnabled(a0);
}
// /usr/include/qt/QtWidgets/qmenu.h:171
// bool isTearOffEnabled()
extern "C"
void C_ZNK5QMenu16isTearOffEnabledEv(void *this_) {
  /*return*/ ((QMenu*)this_)->isTearOffEnabled();
}
// /usr/include/qt/QtWidgets/qmenu.h:173
// bool isTearOffMenuVisible()
extern "C"
void C_ZNK5QMenu20isTearOffMenuVisibleEv(void *this_) {
  /*return*/ ((QMenu*)this_)->isTearOffMenuVisible();
}
// /usr/include/qt/QtWidgets/qmenu.h:174
// void showTearOffMenu()
extern "C"
void C_ZN5QMenu15showTearOffMenuEv(void *this_) {
  ((QMenu*)this_)->showTearOffMenu();
}
// /usr/include/qt/QtWidgets/qmenu.h:175
// void showTearOffMenu(const class QPoint &)
extern "C"
void C_ZN5QMenu15showTearOffMenuERK6QPoint(void *this_, const QPoint & pos) {
  ((QMenu*)this_)->showTearOffMenu(pos);
}
// /usr/include/qt/QtWidgets/qmenu.h:176
// void hideTearOffMenu()
extern "C"
void C_ZN5QMenu15hideTearOffMenuEv(void *this_) {
  ((QMenu*)this_)->hideTearOffMenu();
}
// /usr/include/qt/QtWidgets/qmenu.h:178
// void setDefaultAction(class QAction *)
extern "C"
void C_ZN5QMenu16setDefaultActionEP7QAction(void *this_, QAction * a0) {
  ((QMenu*)this_)->setDefaultAction(a0);
}
// /usr/include/qt/QtWidgets/qmenu.h:179
// QAction * defaultAction()
extern "C"
void C_ZNK5QMenu13defaultActionEv(void *this_) {
  /*return*/ ((QMenu*)this_)->defaultAction();
}
// /usr/include/qt/QtWidgets/qmenu.h:181
// void setActiveAction(class QAction *)
extern "C"
void C_ZN5QMenu15setActiveActionEP7QAction(void *this_, QAction * act) {
  ((QMenu*)this_)->setActiveAction(act);
}
// /usr/include/qt/QtWidgets/qmenu.h:182
// QAction * activeAction()
extern "C"
void C_ZNK5QMenu12activeActionEv(void *this_) {
  /*return*/ ((QMenu*)this_)->activeAction();
}
// /usr/include/qt/QtWidgets/qmenu.h:184
// void popup(const class QPoint &, class QAction *)
extern "C"
void C_ZN5QMenu5popupERK6QPointP7QAction(void *this_, const QPoint & pos, QAction * at) {
  ((QMenu*)this_)->popup(pos, at);
}
// /usr/include/qt/QtWidgets/qmenu.h:185
// QAction * exec()
extern "C"
void C_ZN5QMenu4execEv(void *this_) {
  /*return*/ ((QMenu*)this_)->exec();
}
// /usr/include/qt/QtWidgets/qmenu.h:186
// QAction * exec(const class QPoint &, class QAction *)
extern "C"
void C_ZN5QMenu4execERK6QPointP7QAction(void *this_, const QPoint & pos, QAction * at) {
  /*return*/ ((QMenu*)this_)->exec(pos, at);
}
// static
// /usr/include/qt/QtWidgets/qmenu.h:191
// QAction * exec(QList<class QAction *>, const class QPoint &, class QAction *, class QWidget *)
extern "C"
void C_ZN5QMenu4execE5QListIP7QActionERK6QPointS2_P7QWidget(QList<QAction *> actions, const QPoint & pos, QAction * at, QWidget * parent) {
  /*return*/ QMenu::exec(actions, pos, at, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qmenu.h:194
// QSize sizeHint()
extern "C"
void C_ZNK5QMenu8sizeHintEv(void *this_) {
  /*return*/ ((QMenu*)this_)->sizeHint();
}
// /usr/include/qt/QtWidgets/qmenu.h:196
// QRect actionGeometry(class QAction *)
extern "C"
void C_ZNK5QMenu14actionGeometryEP7QAction(void *this_, QAction * a0) {
  /*return*/ ((QMenu*)this_)->actionGeometry(a0);
}
// /usr/include/qt/QtWidgets/qmenu.h:197
// QAction * actionAt(const class QPoint &)
extern "C"
void C_ZNK5QMenu8actionAtERK6QPoint(void *this_, const QPoint & a0) {
  /*return*/ ((QMenu*)this_)->actionAt(a0);
}
// /usr/include/qt/QtWidgets/qmenu.h:199
// QAction * menuAction()
extern "C"
void C_ZNK5QMenu10menuActionEv(void *this_) {
  /*return*/ ((QMenu*)this_)->menuAction();
}
// /usr/include/qt/QtWidgets/qmenu.h:201
// QString title()
extern "C"
void C_ZNK5QMenu5titleEv(void *this_) {
  /*return*/ ((QMenu*)this_)->title();
}
// /usr/include/qt/QtWidgets/qmenu.h:202
// void setTitle(const class QString &)
extern "C"
void C_ZN5QMenu8setTitleERK7QString(void *this_, const QString & title) {
  ((QMenu*)this_)->setTitle(title);
}
// /usr/include/qt/QtWidgets/qmenu.h:204
// QIcon icon()
extern "C"
void C_ZNK5QMenu4iconEv(void *this_) {
  /*return*/ ((QMenu*)this_)->icon();
}
// /usr/include/qt/QtWidgets/qmenu.h:205
// void setIcon(const class QIcon &)
extern "C"
void C_ZN5QMenu7setIconERK5QIcon(void *this_, const QIcon & icon) {
  ((QMenu*)this_)->setIcon(icon);
}
// /usr/include/qt/QtWidgets/qmenu.h:207
// void setNoReplayFor(class QWidget *)
extern "C"
void C_ZN5QMenu14setNoReplayForEP7QWidget(void *this_, QWidget * widget) {
  ((QMenu*)this_)->setNoReplayFor(widget);
}
// /usr/include/qt/QtWidgets/qmenu.h:208
// QPlatformMenu * platformMenu()
extern "C"
void C_ZN5QMenu12platformMenuEv(void *this_) {
  /*return*/ ((QMenu*)this_)->platformMenu();
}
// /usr/include/qt/QtWidgets/qmenu.h:209
// void setPlatformMenu(class QPlatformMenu *)
extern "C"
void C_ZN5QMenu15setPlatformMenuEP13QPlatformMenu(void *this_, QPlatformMenu * platformMenu) {
  ((QMenu*)this_)->setPlatformMenu(platformMenu);
}
// /usr/include/qt/QtWidgets/qmenu.h:219
// bool separatorsCollapsible()
extern "C"
void C_ZNK5QMenu21separatorsCollapsibleEv(void *this_) {
  /*return*/ ((QMenu*)this_)->separatorsCollapsible();
}
// /usr/include/qt/QtWidgets/qmenu.h:220
// void setSeparatorsCollapsible(_Bool)
extern "C"
void C_ZN5QMenu24setSeparatorsCollapsibleEb(void *this_, bool collapse) {
  ((QMenu*)this_)->setSeparatorsCollapsible(collapse);
}
// /usr/include/qt/QtWidgets/qmenu.h:222
// bool toolTipsVisible()
extern "C"
void C_ZNK5QMenu15toolTipsVisibleEv(void *this_) {
  /*return*/ ((QMenu*)this_)->toolTipsVisible();
}
// /usr/include/qt/QtWidgets/qmenu.h:223
// void setToolTipsVisible(_Bool)
extern "C"
void C_ZN5QMenu18setToolTipsVisibleEb(void *this_, bool visible) {
  ((QMenu*)this_)->setToolTipsVisible(visible);
}
// /usr/include/qt/QtWidgets/qmenu.h:226
// void aboutToShow()
extern "C"
void C_ZN5QMenu11aboutToShowEv(void *this_) {
  ((QMenu*)this_)->aboutToShow();
}
// /usr/include/qt/QtWidgets/qmenu.h:227
// void aboutToHide()
extern "C"
void C_ZN5QMenu11aboutToHideEv(void *this_) {
  ((QMenu*)this_)->aboutToHide();
}
// /usr/include/qt/QtWidgets/qmenu.h:228
// void triggered(class QAction *)
extern "C"
void C_ZN5QMenu9triggeredEP7QAction(void *this_, QAction * action) {
  ((QMenu*)this_)->triggered(action);
}
// /usr/include/qt/QtWidgets/qmenu.h:229
// void hovered(class QAction *)
extern "C"
void C_ZN5QMenu7hoveredEP7QAction(void *this_, QAction * action) {
  ((QMenu*)this_)->hovered(action);
}