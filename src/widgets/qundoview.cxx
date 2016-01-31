// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qundoview.h
// dst-file: /src/widgets/qundoview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qundoview.h>


#include <qicon.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qundoview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QUndoView_Class_Size()
{
  return sizeof(QUndoView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 61, column 14>
//   // proto:  void QUndoView::QUndoView(QUndoGroup * group, QWidget * parent);
extern "C"
QUndoView*
C_ZN9QUndoViewC2EP10QUndoGroupP7QWidget(QUndoGroup * arg1,
QWidget * arg2) {
  auto ret = new QUndoView(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 77, column 10>
//   // proto:  void QUndoView::setStack(QUndoStack * stack);
// _ZN9QUndoView8setStackEP10QUndoStack setStack(class QUndoStack *)
extern "C"
void
C_ZN9QUndoView8setStackEP10QUndoStack(void *qthis,
QUndoStack * arg1) {
  ((QUndoView*)qthis)->setStack(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 70, column 10>
//   // proto:  void QUndoView::setEmptyLabel(const QString & label);
// _ZN9QUndoView13setEmptyLabelERK7QString setEmptyLabel(const class QString &)
extern "C"
void
C_ZN9QUndoView13setEmptyLabelERK7QString(void *qthis,
const QString* arg1) {
  ((QUndoView*)qthis)->setEmptyLabel(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 73, column 10>
//   // proto:  void QUndoView::setCleanIcon(const QIcon & icon);
// _ZN9QUndoView12setCleanIconERK5QIcon setCleanIcon(const class QIcon &)
extern "C"
void
C_ZN9QUndoView12setCleanIconERK5QIcon(void *qthis,
const QIcon* arg1) {
  ((QUndoView*)qthis)->setCleanIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 79, column 10>
//   // proto:  void QUndoView::setGroup(QUndoGroup * group);
// _ZN9QUndoView8setGroupEP10QUndoGroup setGroup(class QUndoGroup *)
extern "C"
void
C_ZN9QUndoView8setGroupEP10QUndoGroup(void *qthis,
QUndoGroup * arg1) {
  ((QUndoView*)qthis)->setGroup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 67, column 17>
//   // proto:  QUndoGroup * QUndoView::group();
// _ZNK9QUndoView5groupEv group()
extern "C"
void*
C_ZNK9QUndoView5groupEv(void *qthis) {
  auto ret =
  ((QUndoView*)qthis)->group();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 52, column 5>
//   // proto:  const QMetaObject * QUndoView::metaObject();
// _ZNK9QUndoView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QUndoView10metaObjectEv(void *qthis) {
  auto ret =
  ((QUndoView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 65, column 17>
//   // proto:  QUndoStack * QUndoView::stack();
// _ZNK9QUndoView5stackEv stack()
extern "C"
void*
C_ZNK9QUndoView5stackEv(void *qthis) {
  auto ret =
  ((QUndoView*)qthis)->stack();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 74, column 11>
//   // proto:  QIcon QUndoView::cleanIcon();
// _ZNK9QUndoView9cleanIconEv cleanIcon()
extern "C"
QIcon*
C_ZNK9QUndoView9cleanIconEv(void *qthis) {
  auto ret =
  ((QUndoView*)qthis)->cleanIcon();
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 71, column 13>
//   // proto:  QString QUndoView::emptyLabel();
// _ZNK9QUndoView10emptyLabelEv emptyLabel()
extern "C"
QString*
C_ZNK9QUndoView10emptyLabelEv(void *qthis) {
  auto ret =
  ((QUndoView*)qthis)->emptyLabel();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 58, column 14>
//   // proto:  void QUndoView::QUndoView(QWidget * parent);
extern "C"
QUndoView*
C_ZN9QUndoViewC2EP7QWidget(QWidget * arg1) {
  auto ret = new QUndoView(arg1);
  return ret;
}
//   // proto:  void QUndoView::~QUndoView();
extern "C"
void C_ZN9QUndoViewD2Ev(void *qthis) {
  delete (QUndoView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qundoview.h', line 59, column 14>
//   // proto:  void QUndoView::QUndoView(QUndoStack * stack, QWidget * parent);
extern "C"
QUndoView*
C_ZN9QUndoViewC2EP10QUndoStackP7QWidget(QUndoStack * arg1,
QWidget * arg2) {
  auto ret = new QUndoView(arg1,
arg2);
  return ret;
}
// <= ext block end

// body block begin =>
// QUndoView_SlotProxy here
class QUndoView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QUndoView_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qundoview.moc"

extern "C" {
  QUndoView_SlotProxy* QUndoView_SlotProxy_new()
  {
    return new QUndoView_SlotProxy();
  }
};

// <= body block end

