//  header block begin
// /usr/include/qt/QtWidgets/qtabwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtabwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTabWidget is pure virtual: false
// QTabWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTabWidget : public QTabWidget {
public:
  virtual ~MyQTabWidget() {}
// void QTabWidget(QWidget *)
MyQTabWidget(QWidget * parent) : QTabWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void tabInserted(int)
  virtual void tabInserted(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabInserted", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::tabInserted(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void tabRemoved(int)
  virtual void tabRemoved(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"tabRemoved", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::tabRemoved(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::showEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::paintEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void setTabBar(QTabBar *)
  virtual void setTabBar(QTabBar * arg0)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setTabBar", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::setTabBar(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::changeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTabWidget::event(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOptionTabWidgetFrame *)
  virtual void initStyleOption(QStyleOptionTabWidgetFrame * option) const  {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTabWidget::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:161
// [-2] void tabInserted(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget11tabInsertedEi(void *this_, int index) {
  ((QTabWidget*)this_)->QTabWidget::tabInserted(index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:162
// [-2] void tabRemoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget10tabRemovedEi(void *this_, int index) {
  ((QTabWidget*)this_)->QTabWidget::tabRemoved(index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:164
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget9showEventEP10QShowEvent(void *this_, QShowEvent * arg0) {
  ((QTabWidget*)this_)->QTabWidget::showEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:165
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QTabWidget*)this_)->QTabWidget::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:166
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QTabWidget*)this_)->QTabWidget::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:167
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QTabWidget*)this_)->QTabWidget::paintEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:168
// [-2] void setTabBar(QTabBar *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget9setTabBarEP7QTabBar(void *this_, QTabBar * arg0) {
  ((QTabWidget*)this_)->QTabWidget::setTabBar(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:169
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QTabWidget*)this_)->QTabWidget::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:170
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QTabWidget5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QTabWidget*)this_)->QTabWidget::event(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:171
// [-2] void initStyleOption(QStyleOptionTabWidgetFrame *)
extern "C" Q_DECL_EXPORT
void C_ZNK10QTabWidget15initStyleOptionEP26QStyleOptionTabWidgetFrame(void *this_, QStyleOptionTabWidgetFrame * option) {
  ((QTabWidget*)this_)->QTabWidget::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget10metaObjectEv(void *this_) {
  return (void*)((QTabWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTabWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTabWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QTabWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTabWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTabWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTabWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTabWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTabWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:71
// [-2] void QTabWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTabWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTabWidget*)(0);
  return  new MyQTabWidget(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:72
// [-2] void ~QTabWidget()
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidgetD2Ev(void *this_) {
  delete (QTabWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:74
// [4] int addTab(QWidget *, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN10QTabWidget6addTabEP7QWidgetRK7QString(void *this_, QWidget * widget, QString* arg1) {
  return (int)((QTabWidget*)this_)->addTab(widget, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:75
// [4] int addTab(QWidget *, const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN10QTabWidget6addTabEP7QWidgetRK5QIconRK7QString(void *this_, QWidget * widget, QIcon* icon, QString* label) {
  return (int)((QTabWidget*)this_)->addTab(widget, *icon, *label);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:77
// [4] int insertTab(int, QWidget *, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN10QTabWidget9insertTabEiP7QWidgetRK7QString(void *this_, int index, QWidget * widget, QString* arg2) {
  return (int)((QTabWidget*)this_)->insertTab(index, widget, *arg2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:78
// [4] int insertTab(int, QWidget *, const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN10QTabWidget9insertTabEiP7QWidgetRK5QIconRK7QString(void *this_, int index, QWidget * widget, QIcon* icon, QString* label) {
  return (int)((QTabWidget*)this_)->insertTab(index, widget, *icon, *label);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:80
// [-2] void removeTab(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget9removeTabEi(void *this_, int index) {
  ((QTabWidget*)this_)->removeTab(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:82
// [1] bool isTabEnabled(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTabWidget12isTabEnabledEi(void *this_, int index) {
  return (bool)((QTabWidget*)this_)->isTabEnabled(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:83
// [-2] void setTabEnabled(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget13setTabEnabledEib(void *this_, int index, bool arg1) {
  ((QTabWidget*)this_)->setTabEnabled(index, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:85
// [8] QString tabText(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget7tabTextEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabText(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:86
// [-2] void setTabText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget10setTabTextEiRK7QString(void *this_, int index, QString* arg1) {
  ((QTabWidget*)this_)->setTabText(index, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:88
// [8] QIcon tabIcon(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget7tabIconEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabIcon(index);
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:89
// [-2] void setTabIcon(int, const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget10setTabIconEiRK5QIcon(void *this_, int index, QIcon* icon) {
  ((QTabWidget*)this_)->setTabIcon(index, *icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:92
// [-2] void setTabToolTip(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget13setTabToolTipEiRK7QString(void *this_, int index, QString* tip) {
  ((QTabWidget*)this_)->setTabToolTip(index, *tip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:93
// [8] QString tabToolTip(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget10tabToolTipEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabToolTip(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtabwidget.h:97
// [-2] void setTabWhatsThis(int, const QString &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget15setTabWhatsThisEiRK7QString(void *this_, int index, QString* text) {
  ((QTabWidget*)this_)->setTabWhatsThis(index, *text);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtabwidget.h:98
// [8] QString tabWhatsThis(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget12tabWhatsThisEi(void *this_, int index) {
  auto rv = ((QTabWidget*)this_)->tabWhatsThis(index);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:101
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTabWidget12currentIndexEv(void *this_) {
  return (int)((QTabWidget*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:102
// [8] QWidget * currentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget13currentWidgetEv(void *this_) {
  return (void*)((QTabWidget*)this_)->currentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:103
// [8] QWidget * widget(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget6widgetEi(void *this_, int index) {
  return (void*)((QTabWidget*)this_)->widget(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:104
// [4] int indexOf(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTabWidget7indexOfEP7QWidget(void *this_, QWidget * widget) {
  return (int)((QTabWidget*)this_)->indexOf(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:105
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTabWidget5countEv(void *this_) {
  return (int)((QTabWidget*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:109
// [4] QTabWidget::TabPosition tabPosition()
extern "C" Q_DECL_EXPORT
QTabWidget::TabPosition C_ZNK10QTabWidget11tabPositionEv(void *this_) {
  return (QTabWidget::TabPosition)((QTabWidget*)this_)->tabPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:110
// [-2] void setTabPosition(QTabWidget::TabPosition)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget14setTabPositionENS_11TabPositionE(void *this_, QTabWidget::TabPosition arg0) {
  ((QTabWidget*)this_)->setTabPosition(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:112
// [1] bool tabsClosable()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTabWidget12tabsClosableEv(void *this_) {
  return (bool)((QTabWidget*)this_)->tabsClosable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:113
// [-2] void setTabsClosable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget15setTabsClosableEb(void *this_, bool closeable) {
  ((QTabWidget*)this_)->setTabsClosable(closeable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:115
// [1] bool isMovable()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTabWidget9isMovableEv(void *this_) {
  return (bool)((QTabWidget*)this_)->isMovable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:116
// [-2] void setMovable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget10setMovableEb(void *this_, bool movable) {
  ((QTabWidget*)this_)->setMovable(movable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:120
// [4] QTabWidget::TabShape tabShape()
extern "C" Q_DECL_EXPORT
QTabWidget::TabShape C_ZNK10QTabWidget8tabShapeEv(void *this_) {
  return (QTabWidget::TabShape)((QTabWidget*)this_)->tabShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:121
// [-2] void setTabShape(QTabWidget::TabShape)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget11setTabShapeENS_8TabShapeE(void *this_, QTabWidget::TabShape s) {
  ((QTabWidget*)this_)->setTabShape(s);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:123
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget8sizeHintEv(void *this_) {
  auto rv = ((QTabWidget*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:124
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget15minimumSizeHintEv(void *this_) {
  auto rv = ((QTabWidget*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:125
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTabWidget14heightForWidthEi(void *this_, int width) {
  return (int)((QTabWidget*)this_)->heightForWidth(width);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:126
// [1] bool hasHeightForWidth()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTabWidget17hasHeightForWidthEv(void *this_) {
  return (bool)((QTabWidget*)this_)->hasHeightForWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:128
// [-2] void setCornerWidget(QWidget *, Qt::Corner)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget15setCornerWidgetEP7QWidgetN2Qt6CornerE(void *this_, QWidget * w, Qt::Corner corner) {
  ((QTabWidget*)this_)->setCornerWidget(w, corner);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:129
// [8] QWidget * cornerWidget(Qt::Corner)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget12cornerWidgetEN2Qt6CornerE(void *this_, Qt::Corner corner) {
  return (void*)((QTabWidget*)this_)->cornerWidget(corner);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:131
// [4] Qt::TextElideMode elideMode()
extern "C" Q_DECL_EXPORT
Qt::TextElideMode C_ZNK10QTabWidget9elideModeEv(void *this_) {
  return (Qt::TextElideMode)((QTabWidget*)this_)->elideMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:132
// [-2] void setElideMode(Qt::TextElideMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget12setElideModeEN2Qt13TextElideModeE(void *this_, Qt::TextElideMode arg0) {
  ((QTabWidget*)this_)->setElideMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:134
// [8] QSize iconSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget8iconSizeEv(void *this_) {
  auto rv = ((QTabWidget*)this_)->iconSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:135
// [-2] void setIconSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget11setIconSizeERK5QSize(void *this_, QSize* size) {
  ((QTabWidget*)this_)->setIconSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:137
// [1] bool usesScrollButtons()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTabWidget17usesScrollButtonsEv(void *this_) {
  return (bool)((QTabWidget*)this_)->usesScrollButtons();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:138
// [-2] void setUsesScrollButtons(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget20setUsesScrollButtonsEb(void *this_, bool useButtons) {
  ((QTabWidget*)this_)->setUsesScrollButtons(useButtons);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:140
// [1] bool documentMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTabWidget12documentModeEv(void *this_) {
  return (bool)((QTabWidget*)this_)->documentMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:141
// [-2] void setDocumentMode(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget15setDocumentModeEb(void *this_, bool set) {
  ((QTabWidget*)this_)->setDocumentMode(set);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:143
// [1] bool tabBarAutoHide()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTabWidget14tabBarAutoHideEv(void *this_) {
  return (bool)((QTabWidget*)this_)->tabBarAutoHide();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:144
// [-2] void setTabBarAutoHide(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget17setTabBarAutoHideEb(void *this_, bool enabled) {
  ((QTabWidget*)this_)->setTabBarAutoHide(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:146
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget5clearEv(void *this_) {
  ((QTabWidget*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:148
// [8] QTabBar * tabBar()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTabWidget6tabBarEv(void *this_) {
  return (void*)((QTabWidget*)this_)->tabBar();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:151
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget15setCurrentIndexEi(void *this_, int index) {
  ((QTabWidget*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:152
// [-2] void setCurrentWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget16setCurrentWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QTabWidget*)this_)->setCurrentWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtabwidget.h:155
// [-2] void currentChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget14currentChangedEi(void *this_, int index) {
  ((QTabWidget*)this_)->currentChanged(index);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtWidgets/qtabwidget.h:156
// [-2] void tabCloseRequested(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget17tabCloseRequestedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabCloseRequested(index);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qtabwidget.h:157
// [-2] void tabBarClicked(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget13tabBarClickedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabBarClicked(index);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qtabwidget.h:158
// [-2] void tabBarDoubleClicked(int)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN10QTabWidget19tabBarDoubleClickedEi(void *this_, int index) {
  ((QTabWidget*)this_)->tabBarDoubleClicked(index);
}
#endif // QT_VERSION >= 0x050200

//  main block end
