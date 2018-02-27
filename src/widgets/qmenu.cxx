//  header block begin
// /usr/include/qt/QtWidgets/qmenu.h
#ifndef protected
#define protected public
#endif
#include <qmenu.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMenu is pure virtual: false
// QMenu has virtual projected: true
//  header block end

//  main block begin

class MyQMenu : public QMenu {
public:
  virtual ~MyQMenu() {}
// void QMenu(class QWidget *)
MyQMenu(QWidget * parent) : QMenu(parent) {}
// void QMenu(const class QString &, class QWidget *)
MyQMenu(const QString & title, QWidget * parent) : QMenu(title, parent) {}
// Protected Visibility=Default Availability=Available
// int columnCount()
  virtual int columnCount() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"columnCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QMenu::columnCount();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::changeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::wheelEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void enterEvent(class QEvent *)
  virtual void enterEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"enterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::enterEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void leaveEvent(class QEvent *)
  virtual void leaveEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"leaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::leaveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::hideEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void actionEvent(class QActionEvent *)
  virtual void actionEvent(QActionEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"actionEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::actionEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QMenu::event(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool focusNextPrevChild(_Bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QMenu::focusNextPrevChild(next);
  }
  }

// Protected Visibility=Default Availability=Available
// void initStyleOption(class QStyleOptionMenuItem *, const class QAction *)
  virtual void initStyleOption(QStyleOptionMenuItem * option, const QAction * action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 2, (uint64_t)option, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QMenu::initStyleOption(option, action);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:232
// [4] int columnCount()
extern "C"
int C_ZNK5QMenu11columnCountEv(void *this_) {
  return (int)((QMenu*)this_)->QMenu::columnCount();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:234
// [-2] void changeEvent(class QEvent *)
extern "C"
void C_ZN5QMenu11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QMenu*)this_)->QMenu::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:235
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C"
void C_ZN5QMenu13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QMenu*)this_)->QMenu::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:236
// [-2] void mouseReleaseEvent(class QMouseEvent *)
extern "C"
void C_ZN5QMenu17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QMenu*)this_)->QMenu::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:237
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void C_ZN5QMenu15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QMenu*)this_)->QMenu::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:238
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void C_ZN5QMenu14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QMenu*)this_)->QMenu::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:240
// [-2] void wheelEvent(class QWheelEvent *)
extern "C"
void C_ZN5QMenu10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * arg0) {
  ((QMenu*)this_)->QMenu::wheelEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:242
// [-2] void enterEvent(class QEvent *)
extern "C"
void C_ZN5QMenu10enterEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QMenu*)this_)->QMenu::enterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:243
// [-2] void leaveEvent(class QEvent *)
extern "C"
void C_ZN5QMenu10leaveEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QMenu*)this_)->QMenu::leaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:244
// [-2] void hideEvent(class QHideEvent *)
extern "C"
void C_ZN5QMenu9hideEventEP10QHideEvent(void *this_, QHideEvent * arg0) {
  ((QMenu*)this_)->QMenu::hideEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:245
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void C_ZN5QMenu10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QMenu*)this_)->QMenu::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:246
// [-2] void actionEvent(class QActionEvent *)
extern "C"
void C_ZN5QMenu11actionEventEP12QActionEvent(void *this_, QActionEvent * arg0) {
  ((QMenu*)this_)->QMenu::actionEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:247
// [-2] void timerEvent(class QTimerEvent *)
extern "C"
void C_ZN5QMenu10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QMenu*)this_)->QMenu::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:248
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN5QMenu5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QMenu*)this_)->QMenu::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:249
// [1] bool focusNextPrevChild(_Bool)
extern "C"
bool C_ZN5QMenu18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QMenu*)this_)->QMenu::focusNextPrevChild(next);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:250
// [-2] void initStyleOption(class QStyleOptionMenuItem *, const class QAction *)
extern "C"
void C_ZNK5QMenu15initStyleOptionEP20QStyleOptionMenuItemPK7QAction(void *this_, QStyleOptionMenuItem * option, const QAction * action) {
  ((QMenu*)this_)->QMenu::initStyleOption(option, action);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:64
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK5QMenu10metaObjectEv(void *this_) {
  return (void*)((QMenu*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:74
// [-2] void QMenu(class QWidget *)
extern "C"
void* C_ZN5QMenuC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQMenu*)(0);
  return  new MyQMenu(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:75
// [-2] void QMenu(const class QString &, class QWidget *)
extern "C"
void* C_ZN5QMenuC2ERK7QStringP7QWidget(QString* title, QWidget * parent) {
  auto _nilp = (MyQMenu*)(0);
  return  new MyQMenu(*title, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:76
// [-2] void ~QMenu()
extern "C"
void C_ZN5QMenuD2Ev(void *this_) {
  delete (QMenu*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:79
// [8] QAction * addAction(const class QString &)
extern "C"
void* C_ZN5QMenu9addActionERK7QString(void *this_, QString* text) {
  return (void*)((QMenu*)this_)->addAction(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:80
// [8] QAction * addAction(const class QIcon &, const class QString &)
extern "C"
void* C_ZN5QMenu9addActionERK5QIconRK7QString(void *this_, QIcon* icon, QString* text) {
  return (void*)((QMenu*)this_)->addAction(*icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:81
// [8] QAction * addAction(const class QString &, const class QObject *, const char *, const class QKeySequence &)
extern "C"
void* C_ZN5QMenu9addActionERK7QStringPK7QObjectPKcRK12QKeySequence(void *this_, QString* text, const QObject * receiver, const char * member, QKeySequence* shortcut) {
  return (void*)((QMenu*)this_)->addAction(*text, receiver, member, *shortcut);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:82
// [8] QAction * addAction(const class QIcon &, const class QString &, const class QObject *, const char *, const class QKeySequence &)
extern "C"
void* C_ZN5QMenu9addActionERK5QIconRK7QStringPK7QObjectPKcRK12QKeySequence(void *this_, QIcon* icon, QString* text, const QObject * receiver, const char * member, QKeySequence* shortcut) {
  return (void*)((QMenu*)this_)->addAction(*icon, *text, receiver, member, *shortcut);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:156
// [8] QAction * addMenu(class QMenu *)
extern "C"
void* C_ZN5QMenu7addMenuEPS_(void *this_, QMenu * menu) {
  return (void*)((QMenu*)this_)->addMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:157
// [8] QMenu * addMenu(const class QString &)
extern "C"
void* C_ZN5QMenu7addMenuERK7QString(void *this_, QString* title) {
  return (void*)((QMenu*)this_)->addMenu(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:158
// [8] QMenu * addMenu(const class QIcon &, const class QString &)
extern "C"
void* C_ZN5QMenu7addMenuERK5QIconRK7QString(void *this_, QIcon* icon, QString* title) {
  return (void*)((QMenu*)this_)->addMenu(*icon, *title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:160
// [8] QAction * addSeparator()
extern "C"
void* C_ZN5QMenu12addSeparatorEv(void *this_) {
  return (void*)((QMenu*)this_)->addSeparator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:162
// [8] QAction * addSection(const class QString &)
extern "C"
void* C_ZN5QMenu10addSectionERK7QString(void *this_, QString* text) {
  return (void*)((QMenu*)this_)->addSection(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:163
// [8] QAction * addSection(const class QIcon &, const class QString &)
extern "C"
void* C_ZN5QMenu10addSectionERK5QIconRK7QString(void *this_, QIcon* icon, QString* text) {
  return (void*)((QMenu*)this_)->addSection(*icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:165
// [8] QAction * insertMenu(class QAction *, class QMenu *)
extern "C"
void* C_ZN5QMenu10insertMenuEP7QActionPS_(void *this_, QAction * before, QMenu * menu) {
  return (void*)((QMenu*)this_)->insertMenu(before, menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:166
// [8] QAction * insertSeparator(class QAction *)
extern "C"
void* C_ZN5QMenu15insertSeparatorEP7QAction(void *this_, QAction * before) {
  return (void*)((QMenu*)this_)->insertSeparator(before);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:167
// [8] QAction * insertSection(class QAction *, const class QString &)
extern "C"
void* C_ZN5QMenu13insertSectionEP7QActionRK7QString(void *this_, QAction * before, QString* text) {
  return (void*)((QMenu*)this_)->insertSection(before, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:168
// [8] QAction * insertSection(class QAction *, const class QIcon &, const class QString &)
extern "C"
void* C_ZN5QMenu13insertSectionEP7QActionRK5QIconRK7QString(void *this_, QAction * before, QIcon* icon, QString* text) {
  return (void*)((QMenu*)this_)->insertSection(before, *icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:170
// [1] bool isEmpty()
extern "C"
bool C_ZNK5QMenu7isEmptyEv(void *this_) {
  return (bool)((QMenu*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:171
// [-2] void clear()
extern "C"
void C_ZN5QMenu5clearEv(void *this_) {
  ((QMenu*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:173
// [-2] void setTearOffEnabled(_Bool)
extern "C"
void C_ZN5QMenu17setTearOffEnabledEb(void *this_, bool arg0) {
  ((QMenu*)this_)->setTearOffEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:174
// [1] bool isTearOffEnabled()
extern "C"
bool C_ZNK5QMenu16isTearOffEnabledEv(void *this_) {
  return (bool)((QMenu*)this_)->isTearOffEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:176
// [1] bool isTearOffMenuVisible()
extern "C"
bool C_ZNK5QMenu20isTearOffMenuVisibleEv(void *this_) {
  return (bool)((QMenu*)this_)->isTearOffMenuVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:177
// [-2] void showTearOffMenu()
extern "C"
void C_ZN5QMenu15showTearOffMenuEv(void *this_) {
  ((QMenu*)this_)->showTearOffMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:178
// [-2] void showTearOffMenu(const class QPoint &)
extern "C"
void C_ZN5QMenu15showTearOffMenuERK6QPoint(void *this_, QPoint* pos) {
  ((QMenu*)this_)->showTearOffMenu(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:179
// [-2] void hideTearOffMenu()
extern "C"
void C_ZN5QMenu15hideTearOffMenuEv(void *this_) {
  ((QMenu*)this_)->hideTearOffMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:181
// [-2] void setDefaultAction(class QAction *)
extern "C"
void C_ZN5QMenu16setDefaultActionEP7QAction(void *this_, QAction * arg0) {
  ((QMenu*)this_)->setDefaultAction(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:182
// [8] QAction * defaultAction()
extern "C"
void* C_ZNK5QMenu13defaultActionEv(void *this_) {
  return (void*)((QMenu*)this_)->defaultAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:184
// [-2] void setActiveAction(class QAction *)
extern "C"
void C_ZN5QMenu15setActiveActionEP7QAction(void *this_, QAction * act) {
  ((QMenu*)this_)->setActiveAction(act);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:185
// [8] QAction * activeAction()
extern "C"
void* C_ZNK5QMenu12activeActionEv(void *this_) {
  return (void*)((QMenu*)this_)->activeAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:187
// [-2] void popup(const class QPoint &, class QAction *)
extern "C"
void C_ZN5QMenu5popupERK6QPointP7QAction(void *this_, QPoint* pos, QAction * at) {
  ((QMenu*)this_)->popup(*pos, at);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:188
// [8] QAction * exec()
extern "C"
void* C_ZN5QMenu4execEv(void *this_) {
  return (void*)((QMenu*)this_)->exec();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:189
// [8] QAction * exec(const class QPoint &, class QAction *)
extern "C"
void* C_ZN5QMenu4execERK6QPointP7QAction(void *this_, QPoint* pos, QAction * at) {
  return (void*)((QMenu*)this_)->exec(*pos, at);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:197
// [8] QSize sizeHint()
extern "C"
void* C_ZNK5QMenu8sizeHintEv(void *this_) {
  auto rv = ((QMenu*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:199
// [16] QRect actionGeometry(class QAction *)
extern "C"
void* C_ZNK5QMenu14actionGeometryEP7QAction(void *this_, QAction * arg0) {
  auto rv = ((QMenu*)this_)->actionGeometry(arg0);
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:200
// [8] QAction * actionAt(const class QPoint &)
extern "C"
void* C_ZNK5QMenu8actionAtERK6QPoint(void *this_, QPoint* arg0) {
  return (void*)((QMenu*)this_)->actionAt(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:202
// [8] QAction * menuAction()
extern "C"
void* C_ZNK5QMenu10menuActionEv(void *this_) {
  return (void*)((QMenu*)this_)->menuAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:204
// [8] QString title()
extern "C"
void* C_ZNK5QMenu5titleEv(void *this_) {
  auto rv = ((QMenu*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:205
// [-2] void setTitle(const class QString &)
extern "C"
void C_ZN5QMenu8setTitleERK7QString(void *this_, QString* title) {
  ((QMenu*)this_)->setTitle(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:207
// [8] QIcon icon()
extern "C"
void* C_ZNK5QMenu4iconEv(void *this_) {
  auto rv = ((QMenu*)this_)->icon();
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:208
// [-2] void setIcon(const class QIcon &)
extern "C"
void C_ZN5QMenu7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QMenu*)this_)->setIcon(*icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:210
// [-2] void setNoReplayFor(class QWidget *)
extern "C"
void C_ZN5QMenu14setNoReplayForEP7QWidget(void *this_, QWidget * widget) {
  ((QMenu*)this_)->setNoReplayFor(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:219
// [1] bool separatorsCollapsible()
extern "C"
bool C_ZNK5QMenu21separatorsCollapsibleEv(void *this_) {
  return (bool)((QMenu*)this_)->separatorsCollapsible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:220
// [-2] void setSeparatorsCollapsible(_Bool)
extern "C"
void C_ZN5QMenu24setSeparatorsCollapsibleEb(void *this_, bool collapse) {
  ((QMenu*)this_)->setSeparatorsCollapsible(collapse);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:222
// [1] bool toolTipsVisible()
extern "C"
bool C_ZNK5QMenu15toolTipsVisibleEv(void *this_) {
  return (bool)((QMenu*)this_)->toolTipsVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:223
// [-2] void setToolTipsVisible(_Bool)
extern "C"
void C_ZN5QMenu18setToolTipsVisibleEb(void *this_, bool visible) {
  ((QMenu*)this_)->setToolTipsVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:226
// [-2] void aboutToShow()
extern "C"
void C_ZN5QMenu11aboutToShowEv(void *this_) {
  ((QMenu*)this_)->aboutToShow();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:227
// [-2] void aboutToHide()
extern "C"
void C_ZN5QMenu11aboutToHideEv(void *this_) {
  ((QMenu*)this_)->aboutToHide();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:228
// [-2] void triggered(class QAction *)
extern "C"
void C_ZN5QMenu9triggeredEP7QAction(void *this_, QAction * action) {
  ((QMenu*)this_)->triggered(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmenu.h:229
// [-2] void hovered(class QAction *)
extern "C"
void C_ZN5QMenu7hoveredEP7QAction(void *this_, QAction * action) {
  ((QMenu*)this_)->hovered(action);
}

//  main block end
