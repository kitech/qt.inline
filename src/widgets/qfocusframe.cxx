// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qfocusframe.h
// dst-file: /src/widgets/qfocusframe.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfocusframe.h>


// <= header block end

// main block begin =>
void __keep_qfocusframe_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFocusFrame_Class_Size()
{
  return sizeof(QFocusFrame);
}

// <= use block end

// ext block begin =>
//   // proto:  void QFocusFrame::~QFocusFrame();
extern "C"
void C_ZN11QFocusFrameD2Ev(void *qthis) {
  delete (QFocusFrame*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfocusframe.h', line 47, column 5>
//   // proto:  const QMetaObject * QFocusFrame::metaObject();
// _ZNK11QFocusFrame10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QFocusFrame10metaObjectEv(void *qthis) {
  auto ret =
  ((QFocusFrame*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfocusframe.h', line 53, column 14>
//   // proto:  QWidget * QFocusFrame::widget();
// _ZNK11QFocusFrame6widgetEv widget()
extern "C"
void*
C_ZNK11QFocusFrame6widgetEv(void *qthis) {
  auto ret =
  ((QFocusFrame*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfocusframe.h', line 49, column 5>
//   // proto:  void QFocusFrame::QFocusFrame(QWidget * parent);
extern "C"
QFocusFrame*
C_ZN11QFocusFrameC2EP7QWidget(QWidget * arg1) {
  auto ret = new QFocusFrame(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfocusframe.h', line 52, column 10>
//   // proto:  void QFocusFrame::setWidget(QWidget * widget);
// _ZN11QFocusFrame9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN11QFocusFrame9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QFocusFrame*)qthis)->setWidget(arg1);
}
// <= ext block end

// body block begin =>
// QFocusFrame_SlotProxy here
class QFocusFrame_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFocusFrame_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qfocusframe.moc"

extern "C" {
  QFocusFrame_SlotProxy* QFocusFrame_SlotProxy_new()
  {
    return new QFocusFrame_SlotProxy();
  }
};

// <= body block end

