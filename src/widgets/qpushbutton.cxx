//  header block begin
// /usr/include/qt/QtWidgets/qpushbutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpushbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPushButton is pure virtual: false
// QPushButton has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPushButton : public QPushButton {
public:
  virtual ~MyQPushButton() {}
// void QPushButton(QWidget *)
MyQPushButton(QWidget * parent) : QPushButton(parent) {}
// void QPushButton(const QString &, QWidget *)
MyQPushButton(const QString & text, QWidget * parent) : QPushButton(text, parent) {}
// void QPushButton(const QIcon &, const QString &, QWidget *)
MyQPushButton(const QIcon & icon, const QString & text, QWidget * parent) : QPushButton(icon, text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QPushButton::event(e);
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
    QPushButton::paintEvent(arg0);
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
    QPushButton::keyPressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPushButton::focusInEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPushButton::focusOutEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void initStyleOption(QStyleOptionButton *)
  virtual void initStyleOption(QStyleOptionButton * option) const  {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPushButton::initStyleOption(option);
  }
  }

// void QPushButton(QPushButtonPrivate &, QWidget *)
MyQPushButton(QPushButtonPrivate & dd, QWidget * parent) : QPushButton(dd, parent) {}
};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:91
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QPushButton5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QPushButton*)this_)->QPushButton::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:92
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QPushButton*)this_)->QPushButton::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:93
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * arg0) {
  ((QPushButton*)this_)->QPushButton::keyPressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:94
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QPushButton*)this_)->QPushButton::focusInEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:95
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * arg0) {
  ((QPushButton*)this_)->QPushButton::focusOutEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:96
// [-2] void initStyleOption(QStyleOptionButton *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QPushButton15initStyleOptionEP18QStyleOptionButton(void *this_, QStyleOptionButton * option) {
  ((QPushButton*)this_)->QPushButton::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPushButton10metaObjectEv(void *this_) {
  return (void*)((QPushButton*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPushButton11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPushButton*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QPushButton11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPushButton*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPushButton2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPushButton::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPushButton6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPushButton::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:64
// [-2] void QPushButton(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPushButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQPushButton*)(0);
  return  new MyQPushButton(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:65
// [-2] void QPushButton(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPushButtonC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQPushButton*)(0);
  return  new MyQPushButton(*text, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:66
// [-2] void QPushButton(const QIcon &, const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QPushButtonC2ERK5QIconRK7QStringP7QWidget(QIcon* icon, QString* text, QWidget * parent) {
  auto _nilp = (MyQPushButton*)(0);
  return  new MyQPushButton(*icon, *text, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:67
// [-2] void ~QPushButton()
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButtonD2Ev(void *this_) {
  delete (QPushButton*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:69
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPushButton8sizeHintEv(void *this_) {
  auto rv = ((QPushButton*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:70
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPushButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QPushButton*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:72
// [1] bool autoDefault()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QPushButton11autoDefaultEv(void *this_) {
  return (bool)((QPushButton*)this_)->autoDefault();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:73
// [-2] void setAutoDefault(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton14setAutoDefaultEb(void *this_, bool arg0) {
  ((QPushButton*)this_)->setAutoDefault(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:74
// [1] bool isDefault()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QPushButton9isDefaultEv(void *this_) {
  return (bool)((QPushButton*)this_)->isDefault();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:75
// [-2] void setDefault(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton10setDefaultEb(void *this_, bool arg0) {
  ((QPushButton*)this_)->setDefault(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:78
// [-2] void setMenu(QMenu *)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton7setMenuEP5QMenu(void *this_, QMenu * menu) {
  ((QPushButton*)this_)->setMenu(menu);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:79
// [8] QMenu * menu()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QPushButton4menuEv(void *this_) {
  return (void*)((QPushButton*)this_)->menu();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:82
// [-2] void setFlat(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton7setFlatEb(void *this_, bool arg0) {
  ((QPushButton*)this_)->setFlat(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:83
// [1] bool isFlat()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QPushButton6isFlatEv(void *this_) {
  return (bool)((QPushButton*)this_)->isFlat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qpushbutton.h:87
// [-2] void showMenu()
extern "C" Q_DECL_EXPORT
void C_ZN11QPushButton8showMenuEv(void *this_) {
  ((QPushButton*)this_)->showMenu();
}

//  main block end
