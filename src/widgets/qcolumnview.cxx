// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qcolumnview.h
// dst-file: /src/widgets/qcolumnview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcolumnview.h>


#include <qabstractitemmodel.h>
#include <qsize.h>
#include <qlist.h>
#include <qmetatype.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qcolumnview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QColumnView_Class_Size()
{
  return sizeof(QColumnView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 61, column 14>
//   // proto:  void QColumnView::QColumnView(QWidget * parent);
extern "C"
QColumnView*
C_ZN11QColumnViewC2EP7QWidget(QWidget * arg1) {
  auto ret = new QColumnView(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 72, column 10>
//   // proto:  void QColumnView::selectAll();
// _ZN11QColumnView9selectAllEv selectAll()
extern "C"
void
C_ZN11QColumnView9selectAllEv(void *qthis) {
  ((QColumnView*)qthis)->selectAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 79, column 10>
//   // proto:  void QColumnView::setPreviewWidget(QWidget * widget);
// _ZN11QColumnView16setPreviewWidgetEP7QWidget setPreviewWidget(class QWidget *)
extern "C"
void
C_ZN11QColumnView16setPreviewWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QColumnView*)qthis)->setPreviewWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 65, column 17>
//   // proto:  QModelIndex QColumnView::indexAt(const QPoint & point);
// _ZNK11QColumnView7indexAtERK6QPoint indexAt(const class QPoint &)
extern "C"
QModelIndex*
C_ZNK11QColumnView7indexAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QColumnView*)qthis)->indexAt(*((const QPoint*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 54, column 1>
//   // proto:  const QMetaObject * QColumnView::metaObject();
// _ZNK11QColumnView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QColumnView10metaObjectEv(void *qthis) {
  auto ret =
  ((QColumnView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 67, column 11>
//   // proto:  QSize QColumnView::sizeHint();
// _ZNK11QColumnView8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QColumnView8sizeHintEv(void *qthis) {
  auto ret =
  ((QColumnView*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 82, column 16>
//   // proto:  QList<int> QColumnView::columnWidths();
// _ZNK11QColumnView12columnWidthsEv columnWidths()
extern "C"
QList<int>*
C_ZNK11QColumnView12columnWidthsEv(void *qthis) {
  auto ret =
  ((QColumnView*)qthis)->columnWidths();
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 81, column 10>
//   // proto:  void QColumnView::setColumnWidths(const QList<int> & list);
// _ZN11QColumnView15setColumnWidthsERK5QListIiE setColumnWidths(const QList<int> &)
extern "C"
void
C_ZN11QColumnView15setColumnWidthsERK5QListIiE(void *qthis,
const QList<int>* arg1) {
  ((QColumnView*)qthis)->setColumnWidths(*((const QList<int>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 75, column 10>
//   // proto:  void QColumnView::setResizeGripsVisible(bool visible);
// _ZN11QColumnView21setResizeGripsVisibleEb setResizeGripsVisible(_Bool)
extern "C"
void
C_ZN11QColumnView21setResizeGripsVisibleEb(void *qthis,
bool arg1) {
  ((QColumnView*)qthis)->setResizeGripsVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 76, column 10>
//   // proto:  bool QColumnView::resizeGripsVisible();
// _ZNK11QColumnView18resizeGripsVisibleEv resizeGripsVisible()
extern "C"
bool
C_ZNK11QColumnView18resizeGripsVisibleEv(void *qthis) {
  auto ret =
  ((QColumnView*)qthis)->resizeGripsVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 66, column 10>
//   // proto:  void QColumnView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint);
// _ZN11QColumnView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void
C_ZN11QColumnView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *qthis,
const QModelIndex* arg1,
QAbstractItemView::ScrollHint arg2) {
  ((QColumnView*)qthis)->scrollTo(*((const QModelIndex*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 69, column 10>
//   // proto:  void QColumnView::setModel(QAbstractItemModel * model);
// _ZN11QColumnView8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN11QColumnView8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QColumnView*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 58, column 10>
//   // proto:  void QColumnView::updatePreviewWidget(const QModelIndex & index);
// _ZN11QColumnView19updatePreviewWidgetERK11QModelIndex updatePreviewWidget(const class QModelIndex &)
extern "C"
void
C_ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QColumnView*)qthis)->updatePreviewWidget(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 71, column 10>
//   // proto:  void QColumnView::setRootIndex(const QModelIndex & index);
// _ZN11QColumnView12setRootIndexERK11QModelIndex setRootIndex(const class QModelIndex &)
extern "C"
void
C_ZN11QColumnView12setRootIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QColumnView*)qthis)->setRootIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 78, column 14>
//   // proto:  QWidget * QColumnView::previewWidget();
// _ZNK11QColumnView13previewWidgetEv previewWidget()
extern "C"
void*
C_ZNK11QColumnView13previewWidgetEv(void *qthis) {
  auto ret =
  ((QColumnView*)qthis)->previewWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 70, column 10>
//   // proto:  void QColumnView::setSelectionModel(QItemSelectionModel * selectionModel);
// _ZN11QColumnView17setSelectionModelEP19QItemSelectionModel setSelectionModel(class QItemSelectionModel *)
extern "C"
void
C_ZN11QColumnView17setSelectionModelEP19QItemSelectionModel(void *qthis,
QItemSelectionModel * arg1) {
  ((QColumnView*)qthis)->setSelectionModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolumnview.h', line 68, column 11>
//   // proto:  QRect QColumnView::visualRect(const QModelIndex & index);
// _ZNK11QColumnView10visualRectERK11QModelIndex visualRect(const class QModelIndex &)
extern "C"
QRect*
C_ZNK11QColumnView10visualRectERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QColumnView*)qthis)->visualRect(*((const QModelIndex*)arg1));
  return new QRect(ret); // 5
}
//   // proto:  void QColumnView::~QColumnView();
extern "C"
void C_ZN11QColumnViewD2Ev(void *qthis) {
  delete (QColumnView*)qthis;
}
// <= ext block end

// body block begin =>
// QColumnView_SlotProxy here
class QColumnView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QColumnView_SlotProxy():QObject(){}

public slots:
  // updatePreviewWidget(const class QModelIndex &)
  void slot_proxy_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcolumnview.moc"

extern "C" {
  QColumnView_SlotProxy* QColumnView_SlotProxy_new()
  {
    return new QColumnView_SlotProxy();
  }
};

void QColumnView_SlotProxy::slot_proxy_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QColumnView_SlotProxy_connect__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QColumnView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex = (decltype(that->slot_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex))ffifptr;
  QObject::connect((QColumnView*)sender, SIGNAL(updatePreviewWidget(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QColumnView_SlotProxy_disconnect__ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(QColumnView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

