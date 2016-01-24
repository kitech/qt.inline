// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qabstractscrollarea.h
// dst-file: /src/widgets/qabstractscrollarea.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractscrollarea.h>


#include <qsize.h>
#include <qnamespace.h>
#include <qwindowdefs.h>
// <= header block end

// main block begin =>
void __keep_qabstractscrollarea_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractScrollArea_Class_Size()
{
  return sizeof(QAbstractScrollArea);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 74, column 17>
//   // proto:  QScrollBar * QAbstractScrollArea::horizontalScrollBar();
// _ZNK19QAbstractScrollArea19horizontalScrollBarEv horizontalScrollBar()
extern "C"
void*
C_ZNK19QAbstractScrollArea19horizontalScrollBarEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->horizontalScrollBar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 80, column 10>
//   // proto:  void QAbstractScrollArea::addScrollBarWidget(QWidget * widget, Qt::Alignment alignment);
// _ZN19QAbstractScrollArea18addScrollBarWidgetEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE addScrollBarWidget(class QWidget *, Qt::Alignment)
extern "C"
void
C_ZN19QAbstractScrollArea18addScrollBarWidgetEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
QWidget * arg1,
Qt::Alignment* arg2) {
  ((QAbstractScrollArea*)qthis)->addScrollBarWidget(arg1,
*((Qt::Alignment*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 85, column 11>
//   // proto:  QSize QAbstractScrollArea::maximumViewportSize();
// _ZNK19QAbstractScrollArea19maximumViewportSizeEv maximumViewportSize()
extern "C"
QSize*
C_ZNK19QAbstractScrollArea19maximumViewportSizeEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->maximumViewportSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 57, column 14>
//   // proto:  void QAbstractScrollArea::QAbstractScrollArea(QWidget * parent);
extern "C"
QAbstractScrollArea*
C_ZN19QAbstractScrollAreaC2EP7QWidget(QWidget * arg1) {
  // auto ret = new QAbstractScrollArea(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 84, column 10>
//   // proto:  void QAbstractScrollArea::setViewport(QWidget * widget);
// _ZN19QAbstractScrollArea11setViewportEP7QWidget setViewport(class QWidget *)
extern "C"
void
C_ZN19QAbstractScrollArea11setViewportEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QAbstractScrollArea*)qthis)->setViewport(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 87, column 11>
//   // proto:  QSize QAbstractScrollArea::minimumSizeHint();
// _ZNK19QAbstractScrollArea15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK19QAbstractScrollArea15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 67, column 25>
//   // proto:  Qt::ScrollBarPolicy QAbstractScrollArea::verticalScrollBarPolicy();
// _ZNK19QAbstractScrollArea23verticalScrollBarPolicyEv verticalScrollBarPolicy()
extern "C"
Qt::ScrollBarPolicy
C_ZNK19QAbstractScrollArea23verticalScrollBarPolicyEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->verticalScrollBarPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 78, column 10>
//   // proto:  void QAbstractScrollArea::setCornerWidget(QWidget * widget);
// _ZN19QAbstractScrollArea15setCornerWidgetEP7QWidget setCornerWidget(class QWidget *)
extern "C"
void
C_ZN19QAbstractScrollArea15setCornerWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QAbstractScrollArea*)qthis)->setCornerWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 81, column 17>
//   // proto:  QWidgetList QAbstractScrollArea::scrollBarWidgets(Qt::Alignment alignment);
// _ZN19QAbstractScrollArea16scrollBarWidgetsE6QFlagsIN2Qt13AlignmentFlagEE scrollBarWidgets(Qt::Alignment)
extern "C"
QList<QWidget *>*
C_ZN19QAbstractScrollArea16scrollBarWidgetsE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->scrollBarWidgets(*((Qt::Alignment*)arg1));
  return new QList<QWidget *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 50, column 5>
//   // proto:  const QMetaObject * QAbstractScrollArea::metaObject();
// _ZNK19QAbstractScrollArea10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QAbstractScrollArea10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 91, column 18>
//   // proto:  void QAbstractScrollArea::setupViewport(QWidget * viewport);
// _ZN19QAbstractScrollArea13setupViewportEP7QWidget setupViewport(class QWidget *)
extern "C"
void
C_ZN19QAbstractScrollArea13setupViewportEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QAbstractScrollArea*)qthis)->setupViewport(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 93, column 22>
//   // proto:  QAbstractScrollArea::SizeAdjustPolicy QAbstractScrollArea::sizeAdjustPolicy();
// _ZNK19QAbstractScrollArea16sizeAdjustPolicyEv sizeAdjustPolicy()
extern "C"
QAbstractScrollArea::SizeAdjustPolicy
C_ZNK19QAbstractScrollArea16sizeAdjustPolicyEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->sizeAdjustPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 72, column 25>
//   // proto:  Qt::ScrollBarPolicy QAbstractScrollArea::horizontalScrollBarPolicy();
// _ZNK19QAbstractScrollArea25horizontalScrollBarPolicyEv horizontalScrollBarPolicy()
extern "C"
Qt::ScrollBarPolicy
C_ZNK19QAbstractScrollArea25horizontalScrollBarPolicyEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->horizontalScrollBarPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 77, column 14>
//   // proto:  QWidget * QAbstractScrollArea::cornerWidget();
// _ZNK19QAbstractScrollArea12cornerWidgetEv cornerWidget()
extern "C"
void*
C_ZNK19QAbstractScrollArea12cornerWidgetEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->cornerWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 68, column 10>
//   // proto:  void QAbstractScrollArea::setVerticalScrollBarPolicy(Qt::ScrollBarPolicy );
// _ZN19QAbstractScrollArea26setVerticalScrollBarPolicyEN2Qt15ScrollBarPolicyE setVerticalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C"
void
C_ZN19QAbstractScrollArea26setVerticalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *qthis,
Qt::ScrollBarPolicy* arg1) {
  ((QAbstractScrollArea*)qthis)->setVerticalScrollBarPolicy(*((Qt::ScrollBarPolicy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 69, column 17>
//   // proto:  QScrollBar * QAbstractScrollArea::verticalScrollBar();
// _ZNK19QAbstractScrollArea17verticalScrollBarEv verticalScrollBar()
extern "C"
void*
C_ZNK19QAbstractScrollArea17verticalScrollBarEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->verticalScrollBar();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 83, column 14>
//   // proto:  QWidget * QAbstractScrollArea::viewport();
// _ZNK19QAbstractScrollArea8viewportEv viewport()
extern "C"
void*
C_ZNK19QAbstractScrollArea8viewportEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->viewport();
  return (void*)ret;
}
//   // proto:  void QAbstractScrollArea::~QAbstractScrollArea();
extern "C"
void C_ZN19QAbstractScrollAreaD2Ev(void *qthis) {
  delete (QAbstractScrollArea*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 73, column 10>
//   // proto:  void QAbstractScrollArea::setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy );
// _ZN19QAbstractScrollArea28setHorizontalScrollBarPolicyEN2Qt15ScrollBarPolicyE setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy)
extern "C"
void
C_ZN19QAbstractScrollArea28setHorizontalScrollBarPolicyEN2Qt15ScrollBarPolicyE(void *qthis,
Qt::ScrollBarPolicy* arg1) {
  ((QAbstractScrollArea*)qthis)->setHorizontalScrollBarPolicy(*((Qt::ScrollBarPolicy*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 94, column 10>
//   // proto:  void QAbstractScrollArea::setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy policy);
// _ZN19QAbstractScrollArea19setSizeAdjustPolicyENS_16SizeAdjustPolicyE setSizeAdjustPolicy(enum QAbstractScrollArea::SizeAdjustPolicy)
extern "C"
void
C_ZN19QAbstractScrollArea19setSizeAdjustPolicyENS_16SizeAdjustPolicyE(void *qthis,
QAbstractScrollArea::SizeAdjustPolicy arg1) {
  ((QAbstractScrollArea*)qthis)->setSizeAdjustPolicy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 89, column 11>
//   // proto:  QSize QAbstractScrollArea::sizeHint();
// _ZNK19QAbstractScrollArea8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK19QAbstractScrollArea8sizeHintEv(void *qthis) {
  auto ret =
  ((QAbstractScrollArea*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 75, column 10>
//   // proto:  void QAbstractScrollArea::setHorizontalScrollBar(QScrollBar * scrollbar);
// _ZN19QAbstractScrollArea22setHorizontalScrollBarEP10QScrollBar setHorizontalScrollBar(class QScrollBar *)
extern "C"
void
C_ZN19QAbstractScrollArea22setHorizontalScrollBarEP10QScrollBar(void *qthis,
QScrollBar * arg1) {
  ((QAbstractScrollArea*)qthis)->setHorizontalScrollBar(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractscrollarea.h', line 70, column 10>
//   // proto:  void QAbstractScrollArea::setVerticalScrollBar(QScrollBar * scrollbar);
// _ZN19QAbstractScrollArea20setVerticalScrollBarEP10QScrollBar setVerticalScrollBar(class QScrollBar *)
extern "C"
void
C_ZN19QAbstractScrollArea20setVerticalScrollBarEP10QScrollBar(void *qthis,
QScrollBar * arg1) {
  ((QAbstractScrollArea*)qthis)->setVerticalScrollBar(arg1);
}
// <= ext block end

// body block begin =>
// QAbstractScrollArea_SlotProxy here
class QAbstractScrollArea_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractScrollArea_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractscrollarea.moc"

extern "C" {
  QAbstractScrollArea_SlotProxy* QAbstractScrollArea_SlotProxy_new()
  {
    return new QAbstractScrollArea_SlotProxy();
  }
};

// <= body block end

