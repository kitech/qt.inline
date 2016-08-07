// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qscrollbar.h
// dst-file: /src/widgets/qscrollbar.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qscrollbar.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qscrollbar_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QScrollBar_Class_Size()
{
  return sizeof(QScrollBar);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollbar.h', line 63, column 10>
//   // proto:  bool QScrollBar::event(QEvent * event);
// _ZN10QScrollBar5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN10QScrollBar5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QScrollBar*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollbar.h', line 56, column 5>
//   // proto:  const QMetaObject * QScrollBar::metaObject();
// _ZNK10QScrollBar10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QScrollBar10metaObjectEv(void *qthis) {
  auto ret =
  ((QScrollBar*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollbar.h', line 62, column 11>
//   // proto:  QSize QScrollBar::sizeHint();
// _ZNK10QScrollBar8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK10QScrollBar8sizeHintEv(void *qthis) {
  auto ret =
  ((QScrollBar*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollbar.h', line 58, column 14>
//   // proto:  void QScrollBar::QScrollBar(QWidget * parent);
extern "C"
QScrollBar*
C_ZN10QScrollBarC2EP7QWidget(QWidget * arg1) {
  auto ret = new QScrollBar(arg1);
  return ret;
}
//   // proto:  void QScrollBar::~QScrollBar();
extern "C"
void C_ZN10QScrollBarD2Ev(void *qthis) {
  delete (QScrollBar*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollbar.h', line 59, column 14>
//   // proto:  void QScrollBar::QScrollBar(Qt::Orientation , QWidget * parent);
extern "C"
QScrollBar*
C_ZN10QScrollBarC2EN2Qt11OrientationEP7QWidget(Qt::Orientation* arg1,
QWidget * arg2) {
  auto ret = new QScrollBar(*((Qt::Orientation*)arg1),
arg2);
  return ret;
}
// <= ext block end

// body block begin =>
// QScrollBar_SlotProxy here
class QScrollBar_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QScrollBar_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qscrollbar.moc"

extern "C" {
  QScrollBar_SlotProxy* QScrollBar_SlotProxy_new()
  {
    return new QScrollBar_SlotProxy();
  }
};

// <= body block end

