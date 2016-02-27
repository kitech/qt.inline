// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qerrormessage.h
// dst-file: /src/widgets/qerrormessage.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qerrormessage.h>


// <= header block end

// main block begin =>
void __keep_qerrormessage_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QErrorMessage_Class_Size()
{
  return sizeof(QErrorMessage);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qerrormessage.h', line 48, column 5>
//   // proto:  const QMetaObject * QErrorMessage::metaObject();
// _ZNK13QErrorMessage10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QErrorMessage10metaObjectEv(void *qthis) {
  auto ret =
  ((QErrorMessage*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qerrormessage.h', line 51, column 14>
//   // proto:  void QErrorMessage::QErrorMessage(QWidget * parent);
extern "C"
QErrorMessage*
C_ZN13QErrorMessageC2EP7QWidget(QWidget * arg1) {
  auto ret = new QErrorMessage(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qerrormessage.h', line 54, column 28>
//   // proto: static QErrorMessage * QErrorMessage::qtHandler();
// _ZN13QErrorMessage9qtHandlerEv qtHandler()
extern "C"
void*
C_ZN13QErrorMessage9qtHandlerEv() {
  auto ret =
  QErrorMessage::qtHandler();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qerrormessage.h', line 58, column 10>
//   // proto:  void QErrorMessage::showMessage(const QString & message, const QString & type);
// _ZN13QErrorMessage11showMessageERK7QStringS2_ showMessage(const class QString &, const class QString &)
extern "C"
void
C_ZN13QErrorMessage11showMessageERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  ((QErrorMessage*)qthis)->showMessage(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qerrormessage.h', line 57, column 10>
//   // proto:  void QErrorMessage::showMessage(const QString & message);
// _ZN13QErrorMessage11showMessageERK7QString showMessage(const class QString &)
extern "C"
void
C_ZN13QErrorMessage11showMessageERK7QString(void *qthis,
const QString* arg1) {
  ((QErrorMessage*)qthis)->showMessage(*((const QString*)arg1));
}
//   // proto:  void QErrorMessage::~QErrorMessage();
extern "C"
void C_ZN13QErrorMessageD2Ev(void *qthis) {
  delete (QErrorMessage*)qthis;
}
// <= ext block end

// body block begin =>
// QErrorMessage_SlotProxy here
class QErrorMessage_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QErrorMessage_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qerrormessage.moc"

extern "C" {
  QErrorMessage_SlotProxy* QErrorMessage_SlotProxy_new()
  {
    return new QErrorMessage_SlotProxy();
  }
};

// <= body block end

