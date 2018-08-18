//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h
#ifndef protected
#define protected public
#endif
#include <qcommandlinkbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCommandLinkButton is pure virtual: false
// QCommandLinkButton has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCommandLinkButton : public QCommandLinkButton {
public:
  virtual ~MyQCommandLinkButton() {}
// void QCommandLinkButton(QWidget *)
MyQCommandLinkButton(QWidget * parent) : QCommandLinkButton(parent) {}
// void QCommandLinkButton(const QString &, QWidget *)
MyQCommandLinkButton(const QString & text, QWidget * parent) : QCommandLinkButton(text, parent) {}
// void QCommandLinkButton(const QString &, const QString &, QWidget *)
MyQCommandLinkButton(const QString & text, const QString & description, QWidget * parent) : QCommandLinkButton(text, description, parent) {}
// Protected virtual Visibility=Default Availability=Available
// QSize sizeHint()
  virtual QSize sizeHint() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QCommandLinkButton::sizeHint();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// int heightForWidth(int)
  virtual int heightForWidth(int arg0) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"heightForWidth", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QCommandLinkButton::heightForWidth(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QSize minimumSizeHint()
  virtual QSize minimumSizeHint() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"minimumSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QCommandLinkButton::minimumSizeHint();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCommandLinkButton::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCommandLinkButton::paintEvent(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:70
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLinkButton8sizeHintEv(void *this_) {
  auto rv = ((QCommandLinkButton*)this_)->QCommandLinkButton::sizeHint();
return new QSize(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:71
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK18QCommandLinkButton14heightForWidthEi(void *this_, int arg0) {
  return (int)((QCommandLinkButton*)this_)->QCommandLinkButton::heightForWidth(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:72
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLinkButton15minimumSizeHintEv(void *this_) {
  auto rv = ((QCommandLinkButton*)this_)->QCommandLinkButton::minimumSizeHint();
return new QSize(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:73
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QCommandLinkButton5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QCommandLinkButton*)this_)->QCommandLinkButton::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:74
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLinkButton10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QCommandLinkButton*)this_)->QCommandLinkButton::paintEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLinkButton10metaObjectEv(void *this_) {
  return (void*)((QCommandLinkButton*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:61
// [-2] void QCommandLinkButton(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLinkButtonC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:62
// [-2] void QCommandLinkButton(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLinkButtonC2ERK7QStringP7QWidget(QString* text, QWidget * parent) {
  auto _nilp = (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(*text, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:63
// [-2] void QCommandLinkButton(const QString &, const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QCommandLinkButtonC2ERK7QStringS2_P7QWidget(QString* text, QString* description, QWidget * parent) {
  auto _nilp = (MyQCommandLinkButton*)(0);
  return  new MyQCommandLinkButton(*text, *description, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:64
// [-2] void ~QCommandLinkButton()
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLinkButtonD2Ev(void *this_) {
  delete (QCommandLinkButton*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:66
// [8] QString description()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QCommandLinkButton11descriptionEv(void *this_) {
  auto rv = ((QCommandLinkButton*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:67
// [-2] void setDescription(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN18QCommandLinkButton14setDescriptionERK7QString(void *this_, QString* description) {
  ((QCommandLinkButton*)this_)->setDescription(*description);
}

//  main block end
