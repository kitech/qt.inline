//  header block begin
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h
#include <qcommandlinkbutton.h>
#include <QtWidgets>

// QCommandLinkButton is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:70
// [8] QSize sizeHint()
extern "C"
void* callback_ZNK18QCommandLinkButton8sizeHintEv = 0;
extern "C" void set_callback_ZNK18QCommandLinkButton8sizeHintEv(void*cbfn)
{ callback_ZNK18QCommandLinkButton8sizeHintEv = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:71
// [4] int heightForWidth(int)
extern "C"
void* callback_ZNK18QCommandLinkButton14heightForWidthEi = 0;
extern "C" void set_callback_ZNK18QCommandLinkButton14heightForWidthEi(void*cbfn)
{ callback_ZNK18QCommandLinkButton14heightForWidthEi = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:72
// [8] QSize minimumSizeHint()
extern "C"
void* callback_ZNK18QCommandLinkButton15minimumSizeHintEv = 0;
extern "C" void set_callback_ZNK18QCommandLinkButton15minimumSizeHintEv(void*cbfn)
{ callback_ZNK18QCommandLinkButton15minimumSizeHintEv = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:73
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN18QCommandLinkButton5eventEP6QEvent = 0;
extern "C" void set_callback_ZN18QCommandLinkButton5eventEP6QEvent(void*cbfn)
{ callback_ZN18QCommandLinkButton5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:74
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent = cbfn; }

class MyQCommandLinkButton : public QCommandLinkButton {
public:
MyQCommandLinkButton(QWidget * parent) : QCommandLinkButton(parent) {}
MyQCommandLinkButton(const QString & text, QWidget * parent) : QCommandLinkButton(text, parent) {}
MyQCommandLinkButton(const QString & text, const QString & description, QWidget * parent) : QCommandLinkButton(text, description, parent) {}
// QSize sizeHint()
// QSize sizeHint()
virtual QSize sizeHint() {
  if (callback_ZNK18QCommandLinkButton8sizeHintEv != 0) {
  // callback_ZNK18QCommandLinkButton8sizeHintEv();
}}
// int heightForWidth(int)
// int heightForWidth(int)
virtual int heightForWidth(int arg0) {
  if (callback_ZNK18QCommandLinkButton14heightForWidthEi != 0) {
  // callback_ZNK18QCommandLinkButton14heightForWidthEi(arg0);
}}
// QSize minimumSizeHint()
// QSize minimumSizeHint()
virtual QSize minimumSizeHint() {
  if (callback_ZNK18QCommandLinkButton15minimumSizeHintEv != 0) {
  // callback_ZNK18QCommandLinkButton15minimumSizeHintEv();
}}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN18QCommandLinkButton5eventEP6QEvent != 0) {
  // callback_ZN18QCommandLinkButton5eventEP6QEvent(e);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * arg0) {
  if (callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent != 0) {
  // callback_ZN18QCommandLinkButton10paintEventEP11QPaintEvent(arg0);
}}
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
void* C_ZN18QCommandLinkButtonC1EP7QWidget(QWidget * parent) {
  (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:62
// [-2] void QCommandLinkButton(const class QString &, class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC1ERK7QStringP7QWidget(const QString & text, QWidget * parent) {
  (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(text, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:63
// [-2] void QCommandLinkButton(const class QString &, const class QString &, class QWidget *)
extern "C"
void* C_ZN18QCommandLinkButtonC1ERK7QStringS2_P7QWidget(const QString & text, const QString & description, QWidget * parent) {
  (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(text, description, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:64
// [-2] void ~QCommandLinkButton()
extern "C"
void C_ZN18QCommandLinkButtonD1Ev(void *this_) {
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
void C_ZN18QCommandLinkButton14setDescriptionERK7QString(void *this_, const QString & description) {
  ((QCommandLinkButton*)this_)->setDescription(description);
}
//  main block end
