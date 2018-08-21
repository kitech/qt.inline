//  header block begin
// /usr/include/qt/QtWidgets/qtoolbutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtoolbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolButton is pure virtual: false
// QToolButton has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQToolButton : public QToolButton {
public:
  virtual ~MyQToolButton() {}
// void QToolButton(QWidget *)
MyQToolButton(QWidget * parent) : QToolButton(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QToolButton::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void actionEvent(QActionEvent *)
  virtual void actionEvent(QActionEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::actionEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void enterEvent(QEvent *)
  virtual void enterEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"enterEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::enterEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void leaveEvent(QEvent *)
  virtual void leaveEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::leaveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::timerEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::changeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool hitButton(const QPoint &)
  virtual bool hitButton(const QPoint & pos) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitButton", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QToolButton::hitButton(pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void nextCheckState()
  virtual void nextCheckState() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nextCheckState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::nextCheckState();
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOptionToolButton *)
  virtual void initStyleOption(QStyleOptionToolButton * option) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolButton::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:109
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QToolButton5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QToolButton*)this_)->QToolButton::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:110
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:111
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:112
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:113
// [-2] void actionEvent(QActionEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton11actionEventEP12QActionEvent(void *this_, QActionEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::actionEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:115
// [-2] void enterEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10enterEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::enterEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:116
// [-2] void leaveEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10leaveEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::leaveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:117
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton10timerEventEP11QTimerEvent(void *this_, QTimerEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::timerEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:118
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QToolButton*)this_)->QToolButton::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:120
// [1] bool hitButton(const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QToolButton9hitButtonERK6QPoint(void *this_, QPoint* pos) {
  return (bool)((QToolButton*)this_)->QToolButton::hitButton(*pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:121
// [-2] void nextCheckState()
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton14nextCheckStateEv(void *this_) {
  ((QToolButton*)this_)->QToolButton::nextCheckState();
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:122
// [-2] void initStyleOption(QStyleOptionToolButton *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QToolButton15initStyleOptionEP22QStyleOptionToolButton(void *this_, QStyleOptionToolButton * option) {
  ((QToolButton*)this_)->QToolButton::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton10metaObjectEv(void *this_) {
  return (void*)((QToolButton*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButton11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QToolButton*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QToolButton11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QToolButton*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButton2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolButton::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButton6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolButton::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:74
// [-2] void QToolButton(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QToolButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQToolButton*)(0);
  return  new MyQToolButton(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:75
// [-2] void ~QToolButton()
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButtonD2Ev(void *this_) {
  delete (QToolButton*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:77
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton8sizeHintEv(void *this_) {
  auto rv = ((QToolButton*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:78
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QToolButton*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:80
// [4] Qt::ToolButtonStyle toolButtonStyle()
extern "C" Q_DECL_EXPORT
Qt::ToolButtonStyle C_ZNK11QToolButton15toolButtonStyleEv(void *this_) {
  return (Qt::ToolButtonStyle)((QToolButton*)this_)->toolButtonStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:82
// [4] Qt::ArrowType arrowType()
extern "C" Q_DECL_EXPORT
Qt::ArrowType C_ZNK11QToolButton9arrowTypeEv(void *this_) {
  return (Qt::ArrowType)((QToolButton*)this_)->arrowType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:83
// [-2] void setArrowType(Qt::ArrowType)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton12setArrowTypeEN2Qt9ArrowTypeE(void *this_, Qt::ArrowType type_) {
  ((QToolButton*)this_)->setArrowType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:86
// [-2] void setMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QToolButton*)this_)->setMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:87
// [8] QMenu * menu()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton4menuEv(void *this_) {
  return (void*)((QToolButton*)this_)->menu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:89
// [-2] void setPopupMode(QToolButton::ToolButtonPopupMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton12setPopupModeENS_19ToolButtonPopupModeE(void *this_, QToolButton::ToolButtonPopupMode mode) {
  ((QToolButton*)this_)->setPopupMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:90
// [4] QToolButton::ToolButtonPopupMode popupMode()
extern "C" Q_DECL_EXPORT
QToolButton::ToolButtonPopupMode C_ZNK11QToolButton9popupModeEv(void *this_) {
  return (QToolButton::ToolButtonPopupMode)((QToolButton*)this_)->popupMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:93
// [8] QAction * defaultAction()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QToolButton13defaultActionEv(void *this_) {
  return (void*)((QToolButton*)this_)->defaultAction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:95
// [-2] void setAutoRaise(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton12setAutoRaiseEb(void *this_, bool enable) {
  ((QToolButton*)this_)->setAutoRaise(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:96
// [1] bool autoRaise()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QToolButton9autoRaiseEv(void *this_) {
  return (bool)((QToolButton*)this_)->autoRaise();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:100
// [-2] void showMenu()
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton8showMenuEv(void *this_) {
  ((QToolButton*)this_)->showMenu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:102
// [-2] void setToolButtonStyle(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *this_, Qt::ToolButtonStyle style) {
  ((QToolButton*)this_)->setToolButtonStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:103
// [-2] void setDefaultAction(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton16setDefaultActionEP7QAction(void *this_, QAction * arg0) {
  ((QToolButton*)this_)->setDefaultAction(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbutton.h:106
// [-2] void triggered(QAction *)
extern "C" Q_DECL_EXPORT
void C_ZN11QToolButton9triggeredEP7QAction(void *this_, QAction * arg0) {
  ((QToolButton*)this_)->triggered(arg0);
}

//  main block end
