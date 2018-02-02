//  header block begin
// /usr/include/qt/QtWidgets/qcheckbox.h
#include <qcheckbox.h>
#include <QtWidgets>

// QCheckBox is pure virtual: false
// QCheckBox has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:78
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN9QCheckBox5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN9QCheckBox5eventEP6QEvent(void*cbfn)
{ callback_ZN9QCheckBox5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:79
// [1] bool hitButton(const class QPoint &)
extern "C"
void* callback_ZNK9QCheckBox9hitButtonERK6QPoint_fnptr = 0;
extern "C" void set_callback_ZNK9QCheckBox9hitButtonERK6QPoint(void*cbfn)
{ callback_ZNK9QCheckBox9hitButtonERK6QPoint_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:80
// [-2] void checkStateSet()
extern "C"
void* callback_ZN9QCheckBox13checkStateSetEv_fnptr = 0;
extern "C" void set_callback_ZN9QCheckBox13checkStateSetEv(void*cbfn)
{ callback_ZN9QCheckBox13checkStateSetEv_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:81
// [-2] void nextCheckState()
extern "C"
void* callback_ZN9QCheckBox14nextCheckStateEv_fnptr = 0;
extern "C" void set_callback_ZN9QCheckBox14nextCheckStateEv(void*cbfn)
{ callback_ZN9QCheckBox14nextCheckStateEv_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:82
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN9QCheckBox10paintEventEP11QPaintEvent_fnptr = 0;
extern "C" void set_callback_ZN9QCheckBox10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN9QCheckBox10paintEventEP11QPaintEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:83
// [-2] void mouseMoveEvent(class QMouseEvent *)
extern "C"
void* callback_ZN9QCheckBox14mouseMoveEventEP11QMouseEvent_fnptr = 0;
extern "C" void set_callback_ZN9QCheckBox14mouseMoveEventEP11QMouseEvent(void*cbfn)
{ callback_ZN9QCheckBox14mouseMoveEventEP11QMouseEvent_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:84
// [-2] void initStyleOption(class QStyleOptionButton *)
extern "C"
void* callback_ZNK9QCheckBox15initStyleOptionEP18QStyleOptionButton_fnptr = 0;
extern "C" void set_callback_ZNK9QCheckBox15initStyleOptionEP18QStyleOptionButton(void*cbfn)
{ callback_ZNK9QCheckBox15initStyleOptionEP18QStyleOptionButton_fnptr = cbfn; }

class MyQCheckBox : public QCheckBox {
public:
  virtual ~MyQCheckBox() {}
// void QCheckBox(class QWidget *)
MyQCheckBox(QWidget * parent) : QCheckBox(parent) {}
// void QCheckBox(const class QString &, class QWidget *)
MyQCheckBox(const QString & text, QWidget * parent) : QCheckBox(text, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN9QCheckBox5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QCheckBox::event(e);
  }
// bool hitButton(const class QPoint &)
  virtual bool hitButton(const QPoint & pos) {
    auto fnptr = ((bool (*)(void* , QPoint*))(callback_ZNK9QCheckBox9hitButtonERK6QPoint_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QPoint*)&pos);
    }
    return QCheckBox::hitButton(pos);
  }
// void checkStateSet()
  virtual void checkStateSet() {
    auto fnptr = ((void (*)(void* ))(callback_ZN9QCheckBox13checkStateSetEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    QCheckBox::checkStateSet();
  }
// void nextCheckState()
  virtual void nextCheckState() {
    auto fnptr = ((void (*)(void* ))(callback_ZN9QCheckBox14nextCheckStateEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    QCheckBox::nextCheckState();
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN9QCheckBox10paintEventEP11QPaintEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QCheckBox::paintEvent(arg0);
  }
// void mouseMoveEvent(class QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0) {
    auto fnptr = ((void (*)(void* , QMouseEvent *))(callback_ZN9QCheckBox14mouseMoveEventEP11QMouseEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QCheckBox::mouseMoveEvent(arg0);
  }
// void initStyleOption(class QStyleOptionButton *)
  virtual void initStyleOption(QStyleOptionButton * option) {
    auto fnptr = ((void (*)(void* , QStyleOptionButton *))(callback_ZNK9QCheckBox15initStyleOptionEP18QStyleOptionButton_fnptr));
    if (fnptr != 0) {
      fnptr(this , option);
    }
    QCheckBox::initStyleOption(option);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QCheckBox10metaObjectEv(void *this_) {
  return (void*)((QCheckBox*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:61
// [-2] void QCheckBox(class QWidget *)
extern "C"
void* C_ZN9QCheckBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCheckBox*)(0);
  return  new MyQCheckBox(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:62
// [-2] void QCheckBox(const class QString &, class QWidget *)
extern "C"
void* C_ZN9QCheckBoxC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQCheckBox*)(0);
  return  new MyQCheckBox(*text, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:63
// [-2] void ~QCheckBox()
extern "C"
void C_ZN9QCheckBoxD2Ev(void *this_) {
  delete (QCheckBox*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:65
// [8] QSize sizeHint()
extern "C"
void* C_ZNK9QCheckBox8sizeHintEv(void *this_) {
  auto rv = ((QCheckBox*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:66
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK9QCheckBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QCheckBox*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:68
// [-2] void setTristate(_Bool)
extern "C"
void C_ZN9QCheckBox11setTristateEb(void *this_, bool y) {
  ((QCheckBox*)this_)->setTristate(y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:69
// [1] bool isTristate()
extern "C"
bool C_ZNK9QCheckBox10isTristateEv(void *this_) {
  return (bool)((QCheckBox*)this_)->isTristate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:71
// [4] Qt::CheckState checkState()
extern "C"
Qt::CheckState C_ZNK9QCheckBox10checkStateEv(void *this_) {
  return (Qt::CheckState)((QCheckBox*)this_)->checkState();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:72
// [-2] void setCheckState(Qt::CheckState)
extern "C"
void C_ZN9QCheckBox13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QCheckBox*)this_)->setCheckState(state);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcheckbox.h:75
// [-2] void stateChanged(int)
extern "C"
void C_ZN9QCheckBox12stateChangedEi(void *this_, int arg0) {
  ((QCheckBox*)this_)->stateChanged(arg0);
}
//  main block end
