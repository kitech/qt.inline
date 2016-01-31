// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qradiobutton.h
// dst-file: /src/widgets/qradiobutton.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qradiobutton.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qradiobutton_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QRadioButton_Class_Size()
{
  return sizeof(QRadioButton);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qradiobutton.h', line 47, column 5>
//   // proto:  const QMetaObject * QRadioButton::metaObject();
// _ZNK12QRadioButton10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QRadioButton10metaObjectEv(void *qthis) {
  auto ret =
  ((QRadioButton*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qradiobutton.h', line 50, column 14>
//   // proto:  void QRadioButton::QRadioButton(QWidget * parent);
extern "C"
QRadioButton*
C_ZN12QRadioButtonC2EP7QWidget(QWidget * arg1) {
  auto ret = new QRadioButton(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qradiobutton.h', line 54, column 11>
//   // proto:  QSize QRadioButton::sizeHint();
// _ZNK12QRadioButton8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK12QRadioButton8sizeHintEv(void *qthis) {
  auto ret =
  ((QRadioButton*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qradiobutton.h', line 55, column 11>
//   // proto:  QSize QRadioButton::minimumSizeHint();
// _ZNK12QRadioButton15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK12QRadioButton15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QRadioButton*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
//   // proto:  void QRadioButton::~QRadioButton();
extern "C"
void C_ZN12QRadioButtonD2Ev(void *qthis) {
  delete (QRadioButton*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qradiobutton.h', line 51, column 14>
//   // proto:  void QRadioButton::QRadioButton(const QString & text, QWidget * parent);
extern "C"
QRadioButton*
C_ZN12QRadioButtonC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QRadioButton(*((const QString*)arg1),
arg2);
  return ret;
}
// <= ext block end

// body block begin =>
// QRadioButton_SlotProxy here
class QRadioButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QRadioButton_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qradiobutton.moc"

extern "C" {
  QRadioButton_SlotProxy* QRadioButton_SlotProxy_new()
  {
    return new QRadioButton_SlotProxy();
  }
};

// <= body block end

