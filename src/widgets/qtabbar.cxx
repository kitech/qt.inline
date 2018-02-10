//  header block begin
// /usr/include/qt/QtWidgets/qtabbar.h
#include <qtabbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTabBar is pure virtual: false
// QTabBar has virtual projected: true
//  header block end

//  main block begin

class MyQTabBar : public QTabBar {
public:
  virtual ~MyQTabBar() {}
// void QTabBar(class QWidget *)
MyQTabBar(QWidget * parent) : QTabBar(parent) {}
// QSize tabSizeHint(int)
  virtual QSize tabSizeHint(int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"tabSizeHint", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QTabBar::tabSizeHint(index);
  }
  }

// QSize minimumTabSizeHint(int)
  virtual QSize minimumTabSizeHint(int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"minimumTabSizeHint", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QTabBar::minimumTabSizeHint(index);
  }
  }

// void tabInserted(int)
  virtual void tabInserted(int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"tabInserted", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::tabInserted(index);
  }
  }

// void tabRemoved(int)
  virtual void tabRemoved(int index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"tabRemoved", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::tabRemoved(index);
  }
  }

// void tabLayoutChange()
  virtual void tabLayoutChange() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"tabLayoutChange", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::tabLayoutChange();
  }
  }

// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTabBar::event(arg0);
  }
  }

// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::resizeEvent(arg0);
  }
  }

// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::showEvent(arg0);
  }
  }

// void hideEvent(class QHideEvent *)
  virtual void hideEvent(QHideEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hideEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::hideEvent(arg0);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::paintEvent(arg0);
  }
  }

// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::mousePressEvent(arg0);
  }
  }

// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::mouseMoveEvent(arg0);
  }
  }

// void mouseReleaseEvent(class QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::mouseReleaseEvent(arg0);
  }
  }

// void wheelEvent(class QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::wheelEvent(event);
  }
  }

// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::keyPressEvent(arg0);
  }
  }

// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::changeEvent(arg0);
  }
  }

// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::timerEvent(event);
  }
  }

// void initStyleOption(class QStyleOptionTab *, int)
  virtual void initStyleOption(QStyleOptionTab * option, int tabIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 2, (uint64_t)option, (uint64_t)tabIndex, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTabBar::initStyleOption(option, tabIndex);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QTabBar10metaObjectEv(void *this_) {
  return (void*)((QTabBar*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:74
// [-2] void QTabBar(class QWidget *)
extern "C"
void* C_ZN7QTabBarC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTabBar*)(0);
  return  new MyQTabBar(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:75
// [-2] void ~QTabBar()
extern "C"
void C_ZN7QTabBarD2Ev(void *this_) {
  delete (QTabBar*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:93
// [4] QTabBar::Shape shape()
extern "C"
QTabBar::Shape C_ZNK7QTabBar5shapeEv(void *this_) {
  return (QTabBar::Shape)((QTabBar*)this_)->shape();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:94
// [-2] void setShape(enum QTabBar::Shape)
extern "C"
void C_ZN7QTabBar8setShapeENS_5ShapeE(void *this_, QTabBar::Shape shape) {
  ((QTabBar*)this_)->setShape(shape);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:96
// [4] int addTab(const class QString &)
extern "C"
int C_ZN7QTabBar6addTabERK7QString(void *this_, QString* text) {
  return (int)((QTabBar*)this_)->addTab(*text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:97
// [4] int addTab(const class QIcon &, const class QString &)
extern "C"
int C_ZN7QTabBar6addTabERK5QIconRK7QString(void *this_, QIcon* icon, QString* text) {
  return (int)((QTabBar*)this_)->addTab(*icon, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:99
// [4] int insertTab(int, const class QString &)
extern "C"
int C_ZN7QTabBar9insertTabEiRK7QString(void *this_, int index, QString* text) {
  return (int)((QTabBar*)this_)->insertTab(index, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:100
// [4] int insertTab(int, const class QIcon &, const class QString &)
extern "C"
int C_ZN7QTabBar9insertTabEiRK5QIconRK7QString(void *this_, int index, QIcon* icon, QString* text) {
  return (int)((QTabBar*)this_)->insertTab(index, *icon, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:102
// [-2] void removeTab(int)
extern "C"
void C_ZN7QTabBar9removeTabEi(void *this_, int index) {
  ((QTabBar*)this_)->removeTab(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:103
// [-2] void moveTab(int, int)
extern "C"
void C_ZN7QTabBar7moveTabEii(void *this_, int from, int to) {
  ((QTabBar*)this_)->moveTab(from, to);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:105
// [1] bool isTabEnabled(int)
extern "C"
bool C_ZNK7QTabBar12isTabEnabledEi(void *this_, int index) {
  return (bool)((QTabBar*)this_)->isTabEnabled(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:106
// [-2] void setTabEnabled(int, _Bool)
extern "C"
void C_ZN7QTabBar13setTabEnabledEib(void *this_, int index, bool arg1) {
  ((QTabBar*)this_)->setTabEnabled(index, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:108
// [8] QString tabText(int)
extern "C"
void* C_ZNK7QTabBar7tabTextEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabText(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:109
// [-2] void setTabText(int, const class QString &)
extern "C"
void C_ZN7QTabBar10setTabTextEiRK7QString(void *this_, int index, QString* text) {
  ((QTabBar*)this_)->setTabText(index, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:111
// [16] QColor tabTextColor(int)
extern "C"
void* C_ZNK7QTabBar12tabTextColorEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabTextColor(index);
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:112
// [-2] void setTabTextColor(int, const class QColor &)
extern "C"
void C_ZN7QTabBar15setTabTextColorEiRK6QColor(void *this_, int index, QColor* color) {
  ((QTabBar*)this_)->setTabTextColor(index, *color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:114
// [8] QIcon tabIcon(int)
extern "C"
void* C_ZNK7QTabBar7tabIconEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabIcon(index);
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:115
// [-2] void setTabIcon(int, const class QIcon &)
extern "C"
void C_ZN7QTabBar10setTabIconEiRK5QIcon(void *this_, int index, QIcon* icon) {
  ((QTabBar*)this_)->setTabIcon(index, *icon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:117
// [4] Qt::TextElideMode elideMode()
extern "C"
Qt::TextElideMode C_ZNK7QTabBar9elideModeEv(void *this_) {
  return (Qt::TextElideMode)((QTabBar*)this_)->elideMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:118
// [-2] void setElideMode(Qt::TextElideMode)
extern "C"
void C_ZN7QTabBar12setElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode arg0) {
  ((QTabBar*)this_)->setElideMode(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:121
// [-2] void setTabToolTip(int, const class QString &)
extern "C"
void C_ZN7QTabBar13setTabToolTipEiRK7QString(void *this_, int index, QString* tip) {
  ((QTabBar*)this_)->setTabToolTip(index, *tip);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:122
// [8] QString tabToolTip(int)
extern "C"
void* C_ZNK7QTabBar10tabToolTipEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabToolTip(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:126
// [-2] void setTabWhatsThis(int, const class QString &)
extern "C"
void C_ZN7QTabBar15setTabWhatsThisEiRK7QString(void *this_, int index, QString* text) {
  ((QTabBar*)this_)->setTabWhatsThis(index, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:127
// [8] QString tabWhatsThis(int)
extern "C"
void* C_ZNK7QTabBar12tabWhatsThisEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabWhatsThis(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:130
// [-2] void setTabData(int, const class QVariant &)
extern "C"
void C_ZN7QTabBar10setTabDataEiRK8QVariant(void *this_, int index, QVariant* data) {
  ((QTabBar*)this_)->setTabData(index, *data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:131
// [16] QVariant tabData(int)
extern "C"
void* C_ZNK7QTabBar7tabDataEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabData(index);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:133
// [16] QRect tabRect(int)
extern "C"
void* C_ZNK7QTabBar7tabRectEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->tabRect(index);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:134
// [4] int tabAt(const class QPoint &)
extern "C"
int C_ZNK7QTabBar5tabAtERK6QPoint(void *this_, QPoint* pos) {
  return (int)((QTabBar*)this_)->tabAt(*pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:136
// [4] int currentIndex()
extern "C"
int C_ZNK7QTabBar12currentIndexEv(void *this_) {
  return (int)((QTabBar*)this_)->currentIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:137
// [4] int count()
extern "C"
int C_ZNK7QTabBar5countEv(void *this_) {
  return (int)((QTabBar*)this_)->count();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:139
// [8] QSize sizeHint()
extern "C"
void* C_ZNK7QTabBar8sizeHintEv(void *this_) {
  auto rv = ((QTabBar*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:140
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK7QTabBar15minimumSizeHintEv(void *this_) {
  auto rv = ((QTabBar*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:142
// [-2] void setDrawBase(_Bool)
extern "C"
void C_ZN7QTabBar11setDrawBaseEb(void *this_, bool drawTheBase) {
  ((QTabBar*)this_)->setDrawBase(drawTheBase);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:143
// [1] bool drawBase()
extern "C"
bool C_ZNK7QTabBar8drawBaseEv(void *this_) {
  return (bool)((QTabBar*)this_)->drawBase();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:145
// [8] QSize iconSize()
extern "C"
void* C_ZNK7QTabBar8iconSizeEv(void *this_) {
  auto rv = ((QTabBar*)this_)->iconSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:146
// [-2] void setIconSize(const class QSize &)
extern "C"
void C_ZN7QTabBar11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QTabBar*)this_)->setIconSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:148
// [1] bool usesScrollButtons()
extern "C"
bool C_ZNK7QTabBar17usesScrollButtonsEv(void *this_) {
  return (bool)((QTabBar*)this_)->usesScrollButtons();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:149
// [-2] void setUsesScrollButtons(_Bool)
extern "C"
void C_ZN7QTabBar20setUsesScrollButtonsEb(void *this_, bool useButtons) {
  ((QTabBar*)this_)->setUsesScrollButtons(useButtons);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:151
// [1] bool tabsClosable()
extern "C"
bool C_ZNK7QTabBar12tabsClosableEv(void *this_) {
  return (bool)((QTabBar*)this_)->tabsClosable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:152
// [-2] void setTabsClosable(_Bool)
extern "C"
void C_ZN7QTabBar15setTabsClosableEb(void *this_, bool closable) {
  ((QTabBar*)this_)->setTabsClosable(closable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:154
// [-2] void setTabButton(int, enum QTabBar::ButtonPosition, class QWidget *)
extern "C"
void C_ZN7QTabBar12setTabButtonEiNS_14ButtonPositionEP7QWidget(void *this_, int index, QTabBar::ButtonPosition position, QWidget * widget) {
  ((QTabBar*)this_)->setTabButton(index, position, widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:155
// [8] QWidget * tabButton(int, enum QTabBar::ButtonPosition)
extern "C"
void* C_ZNK7QTabBar9tabButtonEiNS_14ButtonPositionE(void *this_, int index, QTabBar::ButtonPosition position) {
  return (void*)((QTabBar*)this_)->tabButton(index, position);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:157
// [4] QTabBar::SelectionBehavior selectionBehaviorOnRemove()
extern "C"
QTabBar::SelectionBehavior C_ZNK7QTabBar25selectionBehaviorOnRemoveEv(void *this_) {
  return (QTabBar::SelectionBehavior)((QTabBar*)this_)->selectionBehaviorOnRemove();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:158
// [-2] void setSelectionBehaviorOnRemove(enum QTabBar::SelectionBehavior)
extern "C"
void C_ZN7QTabBar28setSelectionBehaviorOnRemoveENS_17SelectionBehaviorE(void *this_, QTabBar::SelectionBehavior behavior) {
  ((QTabBar*)this_)->setSelectionBehaviorOnRemove(behavior);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:160
// [1] bool expanding()
extern "C"
bool C_ZNK7QTabBar9expandingEv(void *this_) {
  return (bool)((QTabBar*)this_)->expanding();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:161
// [-2] void setExpanding(_Bool)
extern "C"
void C_ZN7QTabBar12setExpandingEb(void *this_, bool enabled) {
  ((QTabBar*)this_)->setExpanding(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:163
// [1] bool isMovable()
extern "C"
bool C_ZNK7QTabBar9isMovableEv(void *this_) {
  return (bool)((QTabBar*)this_)->isMovable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:164
// [-2] void setMovable(_Bool)
extern "C"
void C_ZN7QTabBar10setMovableEb(void *this_, bool movable) {
  ((QTabBar*)this_)->setMovable(movable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:166
// [1] bool documentMode()
extern "C"
bool C_ZNK7QTabBar12documentModeEv(void *this_) {
  return (bool)((QTabBar*)this_)->documentMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:167
// [-2] void setDocumentMode(_Bool)
extern "C"
void C_ZN7QTabBar15setDocumentModeEb(void *this_, bool set) {
  ((QTabBar*)this_)->setDocumentMode(set);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:169
// [1] bool autoHide()
extern "C"
bool C_ZNK7QTabBar8autoHideEv(void *this_) {
  return (bool)((QTabBar*)this_)->autoHide();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:170
// [-2] void setAutoHide(_Bool)
extern "C"
void C_ZN7QTabBar11setAutoHideEb(void *this_, bool hide) {
  ((QTabBar*)this_)->setAutoHide(hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:172
// [1] bool changeCurrentOnDrag()
extern "C"
bool C_ZNK7QTabBar19changeCurrentOnDragEv(void *this_) {
  return (bool)((QTabBar*)this_)->changeCurrentOnDrag();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:173
// [-2] void setChangeCurrentOnDrag(_Bool)
extern "C"
void C_ZN7QTabBar22setChangeCurrentOnDragEb(void *this_, bool change) {
  ((QTabBar*)this_)->setChangeCurrentOnDrag(change);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:176
// [8] QString accessibleTabName(int)
extern "C"
void* C_ZNK7QTabBar17accessibleTabNameEi(void *this_, int index) {
  auto rv = ((QTabBar*)this_)->accessibleTabName(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:177
// [-2] void setAccessibleTabName(int, const class QString &)
extern "C"
void C_ZN7QTabBar20setAccessibleTabNameEiRK7QString(void *this_, int index, QString* name) {
  ((QTabBar*)this_)->setAccessibleTabName(index, *name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:181
// [-2] void setCurrentIndex(int)
extern "C"
void C_ZN7QTabBar15setCurrentIndexEi(void *this_, int index) {
  ((QTabBar*)this_)->setCurrentIndex(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:184
// [-2] void currentChanged(int)
extern "C"
void C_ZN7QTabBar14currentChangedEi(void *this_, int index) {
  ((QTabBar*)this_)->currentChanged(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:185
// [-2] void tabCloseRequested(int)
extern "C"
void C_ZN7QTabBar17tabCloseRequestedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabCloseRequested(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:186
// [-2] void tabMoved(int, int)
extern "C"
void C_ZN7QTabBar8tabMovedEii(void *this_, int from, int to) {
  ((QTabBar*)this_)->tabMoved(from, to);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:187
// [-2] void tabBarClicked(int)
extern "C"
void C_ZN7QTabBar13tabBarClickedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabBarClicked(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabbar.h:188
// [-2] void tabBarDoubleClicked(int)
extern "C"
void C_ZN7QTabBar19tabBarDoubleClickedEi(void *this_, int index) {
  ((QTabBar*)this_)->tabBarDoubleClicked(index);
}
//  main block end
