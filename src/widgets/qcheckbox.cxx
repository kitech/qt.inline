//  header block begin
// /usr/include/qt/QtWidgets/qcheckbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcheckbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCheckBox is pure virtual: false
// QCheckBox has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCheckBox : public QCheckBox {
public:
  virtual ~MyQCheckBox() {}
// void QCheckBox(QWidget *)
MyQCheckBox(QWidget * parent) : QCheckBox(parent) {}
// void QCheckBox(const QString &, QWidget *)
MyQCheckBox(const QString & text, QWidget * parent) : QCheckBox(text, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCheckBox::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool hitButton(const QPoint &)
  virtual bool hitButton(const QPoint & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitButton", &handled, 1, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCheckBox::hitButton(pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void checkStateSet()
  virtual void checkStateSet()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"checkStateSet", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCheckBox::checkStateSet();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void nextCheckState()
  virtual void nextCheckState()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nextCheckState", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCheckBox::nextCheckState();
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
    QCheckBox::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCheckBox::mouseMoveEvent(arg0);
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
    QCheckBox::initStyleOption(option);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:78
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QCheckBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QCheckBox*)this_)->QCheckBox::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:79
// [1] bool hitButton(const QPoint &)
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
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QCheckBox*)this_)->QCheckBox::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:83
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QCheckBox14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QCheckBox*)this_)->QCheckBox::mouseMoveEvent(arg0);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:84
// [-2] void initStyleOption(QStyleOptionButton *)
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCheckBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QCheckBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCheckBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCheckBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCheckBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:61
// [-2] void QCheckBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QCheckBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCheckBox*)(0);
  return  new MyQCheckBox(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:62
// [-2] void QCheckBox(const QString &, QWidget *)
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
// [-2] void setTristate(bool)
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
