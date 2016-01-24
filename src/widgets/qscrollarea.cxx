// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qscrollarea.h
// dst-file: /src/widgets/qscrollarea.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qscrollarea.h>


#include <qsize.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qscrollarea_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QScrollArea_Class_Size()
{
  return sizeof(QScrollArea);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 53, column 14>
//   // proto:  void QScrollArea::QScrollArea(QWidget * parent);
extern "C"
QScrollArea*
C_ZN11QScrollAreaC2EP7QWidget(QWidget * arg1) {
  auto ret = new QScrollArea(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 61, column 10>
//   // proto:  void QScrollArea::setWidgetResizable(bool resizable);
// _ZN11QScrollArea18setWidgetResizableEb setWidgetResizable(_Bool)
extern "C"
void
C_ZN11QScrollArea18setWidgetResizableEb(void *qthis,
bool arg1) {
  ((QScrollArea*)qthis)->setWidgetResizable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 57, column 10>
//   // proto:  void QScrollArea::setWidget(QWidget * widget);
// _ZN11QScrollArea9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN11QScrollArea9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QScrollArea*)qthis)->setWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 58, column 14>
//   // proto:  QWidget * QScrollArea::takeWidget();
// _ZN11QScrollArea10takeWidgetEv takeWidget()
extern "C"
void*
C_ZN11QScrollArea10takeWidgetEv(void *qthis) {
  auto ret =
  ((QScrollArea*)qthis)->takeWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 70, column 10>
//   // proto:  void QScrollArea::ensureVisible(int x, int y, int xmargin, int ymargin);
// _ZN11QScrollArea13ensureVisibleEiiii ensureVisible(int, int, int, int)
extern "C"
void
C_ZN11QScrollArea13ensureVisibleEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QScrollArea*)qthis)->ensureVisible(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 71, column 10>
//   // proto:  void QScrollArea::ensureWidgetVisible(QWidget * childWidget, int xmargin, int ymargin);
// _ZN11QScrollArea19ensureWidgetVisibleEP7QWidgetii ensureWidgetVisible(class QWidget *, int, int)
extern "C"
void
C_ZN11QScrollArea19ensureWidgetVisibleEP7QWidgetii(void *qthis,
QWidget * arg1,
int arg2,
int arg3) {
  ((QScrollArea*)qthis)->ensureWidgetVisible(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 56, column 14>
//   // proto:  QWidget * QScrollArea::widget();
// _ZNK11QScrollArea6widgetEv widget()
extern "C"
void*
C_ZNK11QScrollArea6widgetEv(void *qthis) {
  auto ret =
  ((QScrollArea*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 63, column 11>
//   // proto:  QSize QScrollArea::sizeHint();
// _ZNK11QScrollArea8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QScrollArea8sizeHintEv(void *qthis) {
  auto ret =
  ((QScrollArea*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 60, column 10>
//   // proto:  bool QScrollArea::widgetResizable();
// _ZNK11QScrollArea15widgetResizableEv widgetResizable()
extern "C"
bool
C_ZNK11QScrollArea15widgetResizableEv(void *qthis) {
  auto ret =
  ((QScrollArea*)qthis)->widgetResizable();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QScrollArea::~QScrollArea();
extern "C"
void C_ZN11QScrollAreaD2Ev(void *qthis) {
  delete (QScrollArea*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 65, column 10>
//   // proto:  bool QScrollArea::focusNextPrevChild(bool next);
// _ZN11QScrollArea18focusNextPrevChildEb focusNextPrevChild(_Bool)
extern "C"
bool
C_ZN11QScrollArea18focusNextPrevChildEb(void *qthis,
bool arg1) {
  auto ret =
  ((QScrollArea*)qthis)->focusNextPrevChild(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 68, column 10>
//   // proto:  void QScrollArea::setAlignment(Qt::Alignment );
// _ZN11QScrollArea12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setAlignment(Qt::Alignment)
extern "C"
void
C_ZN11QScrollArea12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QScrollArea*)qthis)->setAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 67, column 19>
//   // proto:  Qt::Alignment QScrollArea::alignment();
// _ZNK11QScrollArea9alignmentEv alignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK11QScrollArea9alignmentEv(void *qthis) {
  auto ret =
  ((QScrollArea*)qthis)->alignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qscrollarea.h', line 48, column 5>
//   // proto:  const QMetaObject * QScrollArea::metaObject();
// _ZNK11QScrollArea10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QScrollArea10metaObjectEv(void *qthis) {
  auto ret =
  ((QScrollArea*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QScrollArea_SlotProxy here
class QScrollArea_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QScrollArea_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qscrollarea.moc"

extern "C" {
  QScrollArea_SlotProxy* QScrollArea_SlotProxy_new()
  {
    return new QScrollArea_SlotProxy();
  }
};

// <= body block end

