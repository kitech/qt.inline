//  header block begin
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h
#include <qcommandlinkbutton.h>
#include <QtWidgets>

// QCommandLinkButton is pure virtual: false
// QCommandLinkButton has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:70
// [8] QSize sizeHint()
extern "C"
void* callback_ZNK18QCommandLinkButton8sizeHintEv_fnptr = 0;
extern "C" void set_callback_ZNK18QCommandLinkButton8sizeHintEv(void*cbfn)
{ callback_ZNK18QCommandLinkButton8sizeHintEv_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:71
// [4] int heightForWidth(int)
extern "C"
void* callback_ZNK18QCommandLinkButton14heightForWidthEi_fnptr = 0;
extern "C" void set_callback_ZNK18QCommandLinkButton14heightForWidthEi(void*cbfn)
{ callback_ZNK18QCommandLinkButton14heightForWidthEi_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:72
// [8] QSize minimumSizeHint()
extern "C"
void* callback_ZNK18QCommandLinkButton15minimumSizeHintEv_fnptr = 0;
extern "C" void set_callback_ZNK18QCommandLinkButton15minimumSizeHintEv(void*cbfn)
{ callback_ZNK18QCommandLinkButton15minimumSizeHintEv_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:73
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN18QCommandLinkButton5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN18QCommandLinkButton5eventEP6QEvent(void*cbfn)
{ callback_ZN18QCommandLinkButton5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:74
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent_fnptr = 0;
extern "C" void set_callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent_fnptr = cbfn; }

class MyQCommandLinkButton : public QCommandLinkButton {
public:
  virtual ~MyQCommandLinkButton() {}
// void QCommandLinkButton(class QWidget *)
MyQCommandLinkButton(QWidget * parent) : QCommandLinkButton(parent) {}
// void QCommandLinkButton(const class QString &, class QWidget *)
MyQCommandLinkButton(const QString & text, QWidget * parent) : QCommandLinkButton(text, parent) {}
// void QCommandLinkButton(const class QString &, const class QString &, class QWidget *)
MyQCommandLinkButton(const QString & text, const QString & description, QWidget * parent) : QCommandLinkButton(text, description, parent) {}
// QSize sizeHint()
  virtual QSize sizeHint() {
    auto fnptr = ((QSize (*)(void* ))(callback_ZNK18QCommandLinkButton8sizeHintEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    return QCommandLinkButton::sizeHint();
  }
// int heightForWidth(int)
  virtual int heightForWidth(int arg0) {
    auto fnptr = ((int (*)(void* , int))(callback_ZNK18QCommandLinkButton14heightForWidthEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    return QCommandLinkButton::heightForWidth(arg0);
  }
// QSize minimumSizeHint()
  virtual QSize minimumSizeHint() {
    auto fnptr = ((QSize (*)(void* ))(callback_ZNK18QCommandLinkButton15minimumSizeHintEv_fnptr));
    if (fnptr != 0) {
      fnptr(this );
    }
    return QCommandLinkButton::minimumSizeHint();
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN18QCommandLinkButton5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , e);
    }
    return QCommandLinkButton::event(e);
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    auto fnptr = ((void (*)(void* , QPaintEvent *))(callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , arg0);
    }
    QCommandLinkButton::paintEvent(arg0);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QCommandLinkButton10metaObjectEv(void *this_) {
  return (void*)((QCommandLinkButton*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:61
// [-2] void QCommandLinkButton(class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:62
// [-2] void QCommandLinkButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(*text, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:63
// [-2] void QCommandLinkButton(const class QString &, const class QString &, class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC2ERK7QStringS2_P7QWidget(QString* text, QString* description, QWidget * parent) {
  auto _nilp = (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(*text, *description, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:64
// [-2] void ~QCommandLinkButton()
extern "C"
void C_ZN18QCommandLinkButtonD2Ev(void *this_) {
  delete (QCommandLinkButton*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:66
// [8] QString description()
extern "C"
void* C_ZNK18QCommandLinkButton11descriptionEv(void *this_) {
  auto rv = ((QCommandLinkButton*)this_)->description();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:67
// [-2] void setDescription(const class QString &)
extern "C"
void C_ZN18QCommandLinkButton14setDescriptionERK7QString(void *this_, QString* description) {
  ((QCommandLinkButton*)this_)->setDescription(*description);
}
//  main block end
