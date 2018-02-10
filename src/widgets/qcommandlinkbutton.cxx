//  header block begin
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h
#include <qcommandlinkbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCommandLinkButton is pure virtual: false
// QCommandLinkButton has virtual projected: true
//  header block end

//  main block begin

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
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QCommandLinkButton::sizeHint();
  }
  }

// int heightForWidth(int)
  virtual int heightForWidth(int arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"heightForWidth", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QCommandLinkButton::heightForWidth(arg0);
  }
  }

// QSize minimumSizeHint()
  virtual QSize minimumSizeHint() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"minimumSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QCommandLinkButton::minimumSizeHint();
  }
  }

// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCommandLinkButton::event(e);
  }
  }

// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCommandLinkButton::paintEvent(arg0);
  }
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
