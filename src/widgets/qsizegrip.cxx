// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qsizegrip.h
// dst-file: /src/widgets/qsizegrip.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsizegrip.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qsizegrip_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSizeGrip_Class_Size()
{
  return sizeof(QSizeGrip);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qsizegrip.h', line 48, column 14>
//   // proto:  void QSizeGrip::QSizeGrip(QWidget * parent);
extern "C"
QSizeGrip*
C_ZN9QSizeGripC2EP7QWidget(QWidget * arg1) {
  auto ret = new QSizeGrip(arg1);
  return ret;
}
//   // proto:  void QSizeGrip::~QSizeGrip();
extern "C"
void C_ZN9QSizeGripD2Ev(void *qthis) {
  delete (QSizeGrip*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsizegrip.h', line 52, column 10>
//   // proto:  void QSizeGrip::setVisible(bool );
// _ZN9QSizeGrip10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN9QSizeGrip10setVisibleEb(void *qthis,
bool arg1) {
  ((QSizeGrip*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsizegrip.h', line 46, column 5>
//   // proto:  const QMetaObject * QSizeGrip::metaObject();
// _ZNK9QSizeGrip10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QSizeGrip10metaObjectEv(void *qthis) {
  auto ret =
  ((QSizeGrip*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsizegrip.h', line 51, column 11>
//   // proto:  QSize QSizeGrip::sizeHint();
// _ZNK9QSizeGrip8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK9QSizeGrip8sizeHintEv(void *qthis) {
  auto ret =
  ((QSizeGrip*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <= ext block end

// body block begin =>
// QSizeGrip_SlotProxy here
class QSizeGrip_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSizeGrip_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qsizegrip.moc"

extern "C" {
  QSizeGrip_SlotProxy* QSizeGrip_SlotProxy_new()
  {
    return new QSizeGrip_SlotProxy();
  }
};

// <= body block end

