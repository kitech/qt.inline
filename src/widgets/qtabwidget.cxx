//  header block begin
// /usr/include/qt/QtWidgets/qtabwidget.h
#include <qtabwidget.h>
#include <QtWidgets>

// QTabWidget is pure virtual: false
// QTabWidget has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:161
// [-2] void tabInserted(int)
extern "C"
void* callback_ZN10QTabWidget11tabInsertedEi_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget11tabInsertedEi(void*cbfn)
{ callback_ZN10QTabWidget11tabInsertedEi_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:162
// [-2] void tabRemoved(int)
extern "C"
void* callback_ZN10QTabWidget10tabRemovedEi_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget10tabRemovedEi(void*cbfn)
{ callback_ZN10QTabWidget10tabRemovedEi_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:164
// [-2] void showEvent(class QShowEvent *)
extern "C"
void* callback_ZN10QTabWidget9showEventEP10QShowEvent_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget9showEventEP10QShowEvent(void*cbfn)
{ callback_ZN10QTabWidget9showEventEP10QShowEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:165
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN10QTabWidget11resizeEventEP12QResizeEvent_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN10QTabWidget11resizeEventEP12QResizeEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:166
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C"
void* callback_ZN10QTabWidget13keyPressEventEP9QKeyEvent_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget13keyPressEventEP9QKeyEvent(void*cbfn)
{ callback_ZN10QTabWidget13keyPressEventEP9QKeyEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:167
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN10QTabWidget10paintEventEP11QPaintEvent_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN10QTabWidget10paintEventEP11QPaintEvent_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:168
// [-2] void setTabBar(class QTabBar *)
extern "C"
void* callback_ZN10QTabWidget9setTabBarEP7QTabBar_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget9setTabBarEP7QTabBar(void*cbfn)
{ callback_ZN10QTabWidget9setTabBarEP7QTabBar_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:169
// [-2] void changeEvent(class QEvent *)
extern "C"
void* callback_ZN10QTabWidget11changeEventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget11changeEventEP6QEvent(void*cbfn)
{ callback_ZN10QTabWidget11changeEventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:170
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN10QTabWidget5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN10QTabWidget5eventEP6QEvent(void*cbfn)
{ callback_ZN10QTabWidget5eventEP6QEvent_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:171
// [-2] void initStyleOption(class QStyleOptionTabWidgetFrame *)
extern "C"
void* callback_ZNK10QTabWidget15initStyleOptionEP26QStyleOptionTabWidgetFrame_fnptr = 0;
extern "C" void set_callback_ZNK10QTabWidget15initStyleOptionEP26QStyleOptionTabWidgetFrame(void*cbfn)
{ callback_ZNK10QTabWidget15initStyleOptionEP26QStyleOptionTabWidgetFrame_fnptr = cbfn; }

class MyQTabWidget : public QTabWidget {
public:
  virtual ~MyQTabWidget() {}
// void QTabWidget(class QWidget *)
MyQTabWidget(QWidget * parent) : QTabWidget(parent) {}
// void tabInserted(int)
  virtual void tabInserted(int index) {
    auto fnptr = ((void (*)(void* , int))(callback_ZN10QTabWidget11tabInsertedEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , index);
    }
    QTabWidget::tabInserted(index);
  }
// void tabRemoved(int)
  virtual void tabRemoved(int index) {
    auto fnptr = ((void (*)(void* , int))(callback_ZN10QTabWidget10tabRemovedEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , index);
    }
    QTabWidget::tabRemoved(index);
  }
// void showEvent(class QShowEvent *)
  virtual void showEvent(QShowEvent * arg0) {
    auto fnptr = ((void (*)(void* , QShowEvent *))(callback_ZN10QTabWidget9showEventEP10QShowEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QTabWidget::showEvent(arg0);
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0) {
    auto fnptr = ((void (*)(void* , QResizeEvent *))(callback_ZN10QTabWidget11resizeEventEP12QResizeEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QTabWidget::resizeEvent(arg0);
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0) {
    auto fnptr = ((void (*)(void* , QKeyEvent *))(callback_ZN10QTabWidget13keyPressEventEP9QKeyEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QTabWidget::keyPressEvent(arg0);
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN10QTabWidget10paintEventEP11QPaintEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QTabWidget::paintEvent(arg0);
  }
// void setTabBar(class QTabBar *)
  virtual void setTabBar(QTabBar * arg0) {
    auto fnptr = ((void (*)(void* , QTabBar *))(callback_ZN10QTabWidget9setTabBarEP7QTabBar_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QTabWidget::setTabBar(arg0);
  }
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    auto fnptr = ((void (*)(void* , QEvent *))(callback_ZN10QTabWidget11changeEventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QTabWidget::changeEvent(arg0);
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN10QTabWidget5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    return QTabWidget::event(arg0);
  }
// void initStyleOption(class QStyleOptionTabWidgetFrame *)
  virtual void initStyleOption(QStyleOptionTabWidgetFrame * option) {
    auto fnptr = ((void (*)(void* , QStyleOptionTabWidgetFrame *))(callback_ZNK10QTabWidget15initStyleOptionEP26QStyleOptionTabWidgetFrame_fnptr));
    if (fnptr != 0) {
      fnptr(this , option);
    }
    QTabWidget::initStyleOption(option);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QTabWidget10metaObjectEv(void *this_) {
  return (void*)((QTabWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:71
// [-2] void QTabWidget(class QWidget *)
extern "C"
void* C_ZN10QTabWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTabWidget*)(0);
  return  new MyQTabWidget(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:72
// [-2] void ~QTabWidget()
extern "C"
void C_ZN10QTabWidgetD2Ev(void *this_) {
  delete (QTabWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:74
// [4] int addTab(class QWidget *, const class QString &)
extern "C"
int C_ZN10QTabWidget6addTabEP7QWidgetRK7QString(void *this_, QWidget * widget, QString* arg1) {
  return (int)((QTabWidget*)this_)->addTab(widget, *arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:75
// [4] int addTab(class QWidget *, const class QIcon &, const class QString &)
extern "C"
int C_ZN10QTabWidget6addTabEP7QWidgetRK5QIconRK7QString(void *this_, QWidget * widget, QIcon* icon, QString* label) {
  return (int)((QTabWidget*)this_)->addTab(widget, *icon, *label);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:77
// [4] int insertTab(int, class QWidget *, const class QString &)
extern "C"
int C_ZN10QTabWidget9insertTabEiP7QWidgetRK7QString(void *this_, int index, QWidget * widget, QString* arg2) {
  return (int)((QTabWidget*)this_)->insertTab(index, widget, *arg2);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:78
// [4] int insertTab(int, class QWidget *, const class QIcon &, const class QString &)
extern "C"
int C_ZN10QTabWidget9insertTabEiP7QWidgetRK5QIconRK7QString(void *this_, int index, QWidget * widget, QIcon* icon, QString* label) {
  return (int)((QTabWidget*)this_)->insertTab(index, widget, *icon, *label);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:80
// [-2] void removeTab(int)
extern "C"
void C_ZN10QTabWidget9removeTabEi(void *this_, int index) {
  ((QTabWidget*)this_)->removeTab(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:82
// [1] bool isTabEnabled(int)
extern "C"
bool C_ZNK10QTabWidget12isTabEnabledEi(void *this_, int index) {
  return (bool)((QTabWidget*)this_)->isTabEnabled(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:83
// [-2] void setTabEnabled(int, _Bool)
extern "C"
void C_ZN10QTabWidget13setTabEnabledEib(void *this_, int index, bool arg1) {
  ((QTabWidget*)this_)->setTabEnabled(index, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:85
// [8] QString tabText(int)
extern "C"
void* C_ZNK10QTabWidget7tabTextEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabText(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:86
// [-2] void setTabText(int, const class QString &)
extern "C"
void C_ZN10QTabWidget10setTabTextEiRK7QString(void *this_, int index, QString* arg1) {
  ((QTabWidget*)this_)->setTabText(index, *arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:88
// [8] QIcon tabIcon(int)
extern "C"
void* C_ZNK10QTabWidget7tabIconEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabIcon(index);
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:89
// [-2] void setTabIcon(int, const class QIcon &)
extern "C"
void C_ZN10QTabWidget10setTabIconEiRK5QIcon(void *this_, int index, QIcon* icon) {
  ((QTabWidget*)this_)->setTabIcon(index, *icon);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:92
// [-2] void setTabToolTip(int, const class QString &)
extern "C"
void C_ZN10QTabWidget13setTabToolTipEiRK7QString(void *this_, int index, QString* tip) {
  ((QTabWidget*)this_)->setTabToolTip(index, *tip);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:93
// [8] QString tabToolTip(int)
extern "C"
void* C_ZNK10QTabWidget10tabToolTipEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabToolTip(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:97
// [-2] void setTabWhatsThis(int, const class QString &)
extern "C"
void C_ZN10QTabWidget15setTabWhatsThisEiRK7QString(void *this_, int index, QString* text) {
  ((QTabWidget*)this_)->setTabWhatsThis(index, *text);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:98
// [8] QString tabWhatsThis(int)
extern "C"
void* C_ZNK10QTabWidget12tabWhatsThisEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabWhatsThis(index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:101
// [4] int currentIndex()
extern "C"
int C_ZNK10QTabWidget12currentIndexEv(void *this_) {
  return (int)((QTabWidget*)this_)->currentIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:102
// [8] QWidget * currentWidget()
extern "C"
void* C_ZNK10QTabWidget13currentWidgetEv(void *this_) {
  return (void*)((QTabWidget*)this_)->currentWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:103
// [8] QWidget * widget(int)
extern "C"
void* C_ZNK10QTabWidget6widgetEi(void *this_, int index) {
  return (void*)((QTabWidget*)this_)->widget(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:104
// [4] int indexOf(class QWidget *)
extern "C"
int C_ZNK10QTabWidget7indexOfEP7QWidget(void *this_, QWidget * widget) {
  return (int)((QTabWidget*)this_)->indexOf(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:105
// [4] int count()
extern "C"
int C_ZNK10QTabWidget5countEv(void *this_) {
  return (int)((QTabWidget*)this_)->count();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:109
// [4] QTabWidget::TabPosition tabPosition()
extern "C"
QTabWidget::TabPosition C_ZNK10QTabWidget11tabPositionEv(void *this_) {
  return (QTabWidget::TabPosition)((QTabWidget*)this_)->tabPosition();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:110
// [-2] void setTabPosition(enum QTabWidget::TabPosition)
extern "C"
void C_ZN10QTabWidget14setTabPositionENS_11TabPositionE(void *this_, QTabWidget::TabPosition arg0) {
  ((QTabWidget*)this_)->setTabPosition(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:112
// [1] bool tabsClosable()
extern "C"
bool C_ZNK10QTabWidget12tabsClosableEv(void *this_) {
  return (bool)((QTabWidget*)this_)->tabsClosable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:113
// [-2] void setTabsClosable(_Bool)
extern "C"
void C_ZN10QTabWidget15setTabsClosableEb(void *this_, bool closeable) {
  ((QTabWidget*)this_)->setTabsClosable(closeable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:115
// [1] bool isMovable()
extern "C"
bool C_ZNK10QTabWidget9isMovableEv(void *this_) {
  return (bool)((QTabWidget*)this_)->isMovable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:116
// [-2] void setMovable(_Bool)
extern "C"
void C_ZN10QTabWidget10setMovableEb(void *this_, bool movable) {
  ((QTabWidget*)this_)->setMovable(movable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:120
// [4] QTabWidget::TabShape tabShape()
extern "C"
QTabWidget::TabShape C_ZNK10QTabWidget8tabShapeEv(void *this_) {
  return (QTabWidget::TabShape)((QTabWidget*)this_)->tabShape();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:121
// [-2] void setTabShape(enum QTabWidget::TabShape)
extern "C"
void C_ZN10QTabWidget11setTabShapeENS_8TabShapeE(void *this_, QTabWidget::TabShape s) {
  ((QTabWidget*)this_)->setTabShape(s);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:123
// [8] QSize sizeHint()
extern "C"
void* C_ZNK10QTabWidget8sizeHintEv(void *this_) {
  auto rv = ((QTabWidget*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:124
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK10QTabWidget15minimumSizeHintEv(void *this_) {
  auto rv = ((QTabWidget*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:125
// [4] int heightForWidth(int)
extern "C"
int C_ZNK10QTabWidget14heightForWidthEi(void *this_, int width) {
  return (int)((QTabWidget*)this_)->heightForWidth(width);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:126
// [1] bool hasHeightForWidth()
extern "C"
bool C_ZNK10QTabWidget17hasHeightForWidthEv(void *this_) {
  return (bool)((QTabWidget*)this_)->hasHeightForWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:128
// [-2] void setCornerWidget(class QWidget *, Qt::Corner)
extern "C"
void C_ZN10QTabWidget15setCornerWidgetEP7QWidgetN2Qt6CornerE(void *this_, QWidget * w, Qt::Corner corner) {
  ((QTabWidget*)this_)->setCornerWidget(w, corner);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:129
// [8] QWidget * cornerWidget(Qt::Corner)
extern "C"
void* C_ZNK10QTabWidget12cornerWidgetEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  return (void*)((QTabWidget*)this_)->cornerWidget(corner);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:131
// [4] Qt::TextElideMode elideMode()
extern "C"
Qt::TextElideMode C_ZNK10QTabWidget9elideModeEv(void *this_) {
  return (Qt::TextElideMode)((QTabWidget*)this_)->elideMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:132
// [-2] void setElideMode(Qt::TextElideMode)
extern "C"
void C_ZN10QTabWidget12setElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode arg0) {
  ((QTabWidget*)this_)->setElideMode(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:134
// [8] QSize iconSize()
extern "C"
void* C_ZNK10QTabWidget8iconSizeEv(void *this_) {
  auto rv = ((QTabWidget*)this_)->iconSize();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:135
// [-2] void setIconSize(const class QSize &)
extern "C"
void C_ZN10QTabWidget11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QTabWidget*)this_)->setIconSize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:137
// [1] bool usesScrollButtons()
extern "C"
bool C_ZNK10QTabWidget17usesScrollButtonsEv(void *this_) {
  return (bool)((QTabWidget*)this_)->usesScrollButtons();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:138
// [-2] void setUsesScrollButtons(_Bool)
extern "C"
void C_ZN10QTabWidget20setUsesScrollButtonsEb(void *this_, bool useButtons) {
  ((QTabWidget*)this_)->setUsesScrollButtons(useButtons);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:140
// [1] bool documentMode()
extern "C"
bool C_ZNK10QTabWidget12documentModeEv(void *this_) {
  return (bool)((QTabWidget*)this_)->documentMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:141
// [-2] void setDocumentMode(_Bool)
extern "C"
void C_ZN10QTabWidget15setDocumentModeEb(void *this_, bool set) {
  ((QTabWidget*)this_)->setDocumentMode(set);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:143
// [1] bool tabBarAutoHide()
extern "C"
bool C_ZNK10QTabWidget14tabBarAutoHideEv(void *this_) {
  return (bool)((QTabWidget*)this_)->tabBarAutoHide();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:144
// [-2] void setTabBarAutoHide(_Bool)
extern "C"
void C_ZN10QTabWidget17setTabBarAutoHideEb(void *this_, bool enabled) {
  ((QTabWidget*)this_)->setTabBarAutoHide(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:146
// [-2] void clear()
extern "C"
void C_ZN10QTabWidget5clearEv(void *this_) {
  ((QTabWidget*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:148
// [8] QTabBar * tabBar()
extern "C"
void* C_ZNK10QTabWidget6tabBarEv(void *this_) {
  return (void*)((QTabWidget*)this_)->tabBar();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:151
// [-2] void setCurrentIndex(int)
extern "C"
void C_ZN10QTabWidget15setCurrentIndexEi(void *this_, int index) {
  ((QTabWidget*)this_)->setCurrentIndex(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:152
// [-2] void setCurrentWidget(class QWidget *)
extern "C"
void C_ZN10QTabWidget16setCurrentWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QTabWidget*)this_)->setCurrentWidget(widget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:155
// [-2] void currentChanged(int)
extern "C"
void C_ZN10QTabWidget14currentChangedEi(void *this_, int index) {
  ((QTabWidget*)this_)->currentChanged(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:156
// [-2] void tabCloseRequested(int)
extern "C"
void C_ZN10QTabWidget17tabCloseRequestedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabCloseRequested(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:157
// [-2] void tabBarClicked(int)
extern "C"
void C_ZN10QTabWidget13tabBarClickedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabBarClicked(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:158
// [-2] void tabBarDoubleClicked(int)
extern "C"
void C_ZN10QTabWidget19tabBarDoubleClickedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabBarDoubleClicked(index);
}
//  main block end
