//  header block begin
// /usr/include/qt/QtWidgets/qcheckbox.h
#ifndef protected
#define protected public
#endif
#include <qcheckbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCheckBox is pure virtual: false
// QCheckBox has virtual projected: true
//  header block end

//  main block begin

class MyQCheckBox : public QCheckBox {
public:
  virtual ~MyQCheckBox() {}
// void QCheckBox(class QWidget *)
MyQCheckBox(QWidget * parent) : QCheckBox(parent) {}
// void QCheckBox(const class QString &, class QWidget *)
MyQCheckBox(const QString & text, QWidget * parent) : QCheckBox(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCheckBox::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool hitButton(const class QPoint &)
  virtual bool hitButton(const QPoint & pos) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"hitButton", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCheckBox::hitButton(pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void checkStateSet()
  virtual void checkStateSet() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"checkStateSet", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCheckBox::checkStateSet();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void nextCheckState()
  virtual void nextCheckState() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"nextCheckState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCheckBox::nextCheckState();
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
    QCheckBox::paintEvent(arg0);
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
    QCheckBox::mouseMoveEvent(arg0);
  }
  }

// Protected Visibility=Default Availability=Available
// void initStyleOption(class QStyleOptionButton *)
  virtual void initStyleOption(QStyleOptionButton * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCheckBox::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:78
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QCheckBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QCheckBox*)this_)->QCheckBox::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:79
// [1] bool hitButton(const class QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCheckBox9hitButtonERK6QPoint(void *this_, QPoint* pos) {
  return (bool)((QCheckBox*)this_)->QCheckBox::hitButton(*pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:80
// [-2] void checkStateSet()
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox13checkStateSetEv(void *this_) {
  ((QCheckBox*)this_)->QCheckBox::checkStateSet();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:81
// [-2] void nextCheckState()
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox14nextCheckStateEv(void *this_) {
  ((QCheckBox*)this_)->QCheckBox::nextCheckState();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:82
// [-2] void paintEvent(class QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QCheckBox*)this_)->QCheckBox::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:83
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QCheckBox*)this_)->QCheckBox::mouseMoveEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:84
// [-2] void initStyleOption(class QStyleOptionButton *)
extern "C" Q_DECL_EXPORT
void C_ZNK9QCheckBox15initStyleOptionEP18QStyleOptionButton(void *this_, QStyleOptionButton * option) {
  ((QCheckBox*)this_)->QCheckBox::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCheckBox10metaObjectEv(void *this_) {
  return (void*)((QCheckBox*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:61
// [-2] void QCheckBox(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCheckBox*)(0);
  return  new MyQCheckBox(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:62
// [-2] void QCheckBox(const class QString &, class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBoxC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQCheckBox*)(0);
  return  new MyQCheckBox(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:63
// [-2] void ~QCheckBox()
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBoxD2Ev(void *this_) {
  delete (QCheckBox*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:65
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCheckBox8sizeHintEv(void *this_) {
  auto rv = ((QCheckBox*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:66
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QCheckBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QCheckBox*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:68
// [-2] void setTristate(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox11setTristateEb(void *this_, bool y) {
  ((QCheckBox*)this_)->setTristate(y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:69
// [1] bool isTristate()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QCheckBox10isTristateEv(void *this_) {
  return (bool)((QCheckBox*)this_)->isTristate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:71
// [4] Qt::CheckState checkState()
extern "C" Q_DECL_EXPORT
Qt::CheckState C_ZNK9QCheckBox10checkStateEv(void *this_) {
  return (Qt::CheckState)((QCheckBox*)this_)->checkState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:72
// [-2] void setCheckState(Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QCheckBox*)this_)->setCheckState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:75
// [-2] void stateChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox12stateChangedEi(void *this_, int arg0) {
  ((QCheckBox*)this_)->stateChanged(arg0);
}

//  main block end
