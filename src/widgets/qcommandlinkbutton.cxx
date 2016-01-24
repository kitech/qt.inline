// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qcommandlinkbutton.h
// dst-file: /src/widgets/qcommandlinkbutton.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcommandlinkbutton.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qcommandlinkbutton_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCommandLinkButton_Class_Size()
{
  return sizeof(QCommandLinkButton);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommandlinkbutton.h', line 54, column 14>
//   // proto:  void QCommandLinkButton::QCommandLinkButton(const QString & text, const QString & description, QWidget * parent);
extern "C"
QCommandLinkButton*
C_ZN18QCommandLinkButtonC2ERK7QStringS2_P7QWidget(const QString* arg1,
const QString* arg2,
QWidget * arg3) {
  auto ret = new QCommandLinkButton(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommandlinkbutton.h', line 46, column 5>
//   // proto:  const QMetaObject * QCommandLinkButton::metaObject();
// _ZNK18QCommandLinkButton10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QCommandLinkButton10metaObjectEv(void *qthis) {
  auto ret =
  ((QCommandLinkButton*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QCommandLinkButton::~QCommandLinkButton();
extern "C"
void C_ZN18QCommandLinkButtonD2Ev(void *qthis) {
  delete (QCommandLinkButton*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommandlinkbutton.h', line 52, column 14>
//   // proto:  void QCommandLinkButton::QCommandLinkButton(QWidget * parent);
extern "C"
QCommandLinkButton*
C_ZN18QCommandLinkButtonC2EP7QWidget(QWidget * arg1) {
  auto ret = new QCommandLinkButton(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommandlinkbutton.h', line 57, column 13>
//   // proto:  QString QCommandLinkButton::description();
// _ZNK18QCommandLinkButton11descriptionEv description()
extern "C"
QString*
C_ZNK18QCommandLinkButton11descriptionEv(void *qthis) {
  auto ret =
  ((QCommandLinkButton*)qthis)->description();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommandlinkbutton.h', line 53, column 14>
//   // proto:  void QCommandLinkButton::QCommandLinkButton(const QString & text, QWidget * parent);
extern "C"
QCommandLinkButton*
C_ZN18QCommandLinkButtonC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QCommandLinkButton(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcommandlinkbutton.h', line 58, column 10>
//   // proto:  void QCommandLinkButton::setDescription(const QString & description);
// _ZN18QCommandLinkButton14setDescriptionERK7QString setDescription(const class QString &)
extern "C"
void
C_ZN18QCommandLinkButton14setDescriptionERK7QString(void *qthis,
const QString* arg1) {
  ((QCommandLinkButton*)qthis)->setDescription(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// QCommandLinkButton_SlotProxy here
class QCommandLinkButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCommandLinkButton_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qcommandlinkbutton.moc"

extern "C" {
  QCommandLinkButton_SlotProxy* QCommandLinkButton_SlotProxy_new()
  {
    return new QCommandLinkButton_SlotProxy();
  }
};

// <= body block end

