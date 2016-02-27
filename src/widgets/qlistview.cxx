// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qlistview.h
// dst-file: /src/widgets/qlistview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlistview.h>


#include <qabstractitemmodel.h>
#include <qsize.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qlistview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QListView_Class_Size()
{
  return sizeof(QListView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 123, column 10>
//   // proto:  void QListView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint);
// _ZN9QListView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void
C_ZN9QListView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *qthis,
const QModelIndex* arg1,
QAbstractItemView::ScrollHint arg2) {
  ((QListView*)qthis)->scrollTo(*((const QModelIndex*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 75, column 14>
//   // proto:  void QListView::QListView(QWidget * parent);
extern "C"
QListView*
C_ZN9QListViewC2EP7QWidget(QWidget * arg1) {
  auto ret = new QListView(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 116, column 10>
//   // proto:  void QListView::setWordWrap(bool on);
// _ZN9QListView11setWordWrapEb setWordWrap(_Bool)
extern "C"
void
C_ZN9QListView11setWordWrapEb(void *qthis,
bool arg1) {
  ((QListView*)qthis)->setWordWrap(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 126, column 10>
//   // proto:  void QListView::doItemsLayout();
// _ZN9QListView13doItemsLayoutEv doItemsLayout()
extern "C"
void
C_ZN9QListView13doItemsLayoutEv(void *qthis) {
  ((QListView*)qthis)->doItemsLayout();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 94, column 9>
//   // proto:  int QListView::spacing();
// _ZNK9QListView7spacingEv spacing()
extern "C"
int
C_ZNK9QListView7spacingEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->spacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 81, column 10>
//   // proto:  void QListView::setFlow(QListView::Flow flow);
// _ZN9QListView7setFlowENS_4FlowE setFlow(enum QListView::Flow)
extern "C"
void
C_ZN9QListView7setFlowENS_4FlowE(void *qthis,
QListView::Flow arg1) {
  ((QListView*)qthis)->setFlow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 99, column 10>
//   // proto:  void QListView::setGridSize(const QSize & size);
// _ZN9QListView11setGridSizeERK5QSize setGridSize(const class QSize &)
extern "C"
void
C_ZN9QListView11setGridSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QListView*)qthis)->setGridSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 124, column 17>
//   // proto:  QModelIndex QListView::indexAt(const QPoint & p);
// _ZNK9QListView7indexAtERK6QPoint indexAt(const class QPoint &)
extern "C"
QModelIndex*
C_ZNK9QListView7indexAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QListView*)qthis)->indexAt(*((const QPoint*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 88, column 16>
//   // proto:  QListView::ResizeMode QListView::resizeMode();
// _ZNK9QListView10resizeModeEv resizeMode()
extern "C"
QListView::ResizeMode
C_ZNK9QListView10resizeModeEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->resizeMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 87, column 10>
//   // proto:  void QListView::setResizeMode(QListView::ResizeMode mode);
// _ZN9QListView13setResizeModeENS_10ResizeModeE setResizeMode(enum QListView::ResizeMode)
extern "C"
void
C_ZN9QListView13setResizeModeENS_10ResizeModeE(void *qthis,
QListView::ResizeMode arg1) {
  ((QListView*)qthis)->setResizeMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 102, column 10>
//   // proto:  void QListView::setViewMode(QListView::ViewMode mode);
// _ZN9QListView11setViewModeENS_8ViewModeE setViewMode(enum QListView::ViewMode)
extern "C"
void
C_ZN9QListView11setViewModeENS_8ViewModeE(void *qthis,
QListView::ViewMode arg1) {
  ((QListView*)qthis)->setViewMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 84, column 10>
//   // proto:  void QListView::setWrapping(bool enable);
// _ZN9QListView11setWrappingEb setWrapping(_Bool)
extern "C"
void
C_ZN9QListView11setWrappingEb(void *qthis,
bool arg1) {
  ((QListView*)qthis)->setWrapping(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 119, column 10>
//   // proto:  void QListView::setSelectionRectVisible(bool show);
// _ZN9QListView23setSelectionRectVisibleEb setSelectionRectVisible(_Bool)
extern "C"
void
C_ZN9QListView23setSelectionRectVisibleEb(void *qthis,
bool arg1) {
  ((QListView*)qthis)->setSelectionRectVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 91, column 16>
//   // proto:  QListView::LayoutMode QListView::layoutMode();
// _ZNK9QListView10layoutModeEv layoutMode()
extern "C"
QListView::LayoutMode
C_ZNK9QListView10layoutModeEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->layoutMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 96, column 10>
//   // proto:  void QListView::setBatchSize(int batchSize);
// _ZN9QListView12setBatchSizeEi setBatchSize(int)
extern "C"
void
C_ZN9QListView12setBatchSizeEi(void *qthis,
int arg1) {
  ((QListView*)qthis)->setBatchSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 114, column 10>
//   // proto:  bool QListView::uniformItemSizes();
// _ZNK9QListView16uniformItemSizesEv uniformItemSizes()
extern "C"
bool
C_ZNK9QListView16uniformItemSizesEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->uniformItemSizes();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 128, column 10>
//   // proto:  void QListView::setRootIndex(const QModelIndex & index);
// _ZN9QListView12setRootIndexERK11QModelIndex setRootIndex(const class QModelIndex &)
extern "C"
void
C_ZN9QListView12setRootIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QListView*)qthis)->setRootIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 85, column 10>
//   // proto:  bool QListView::isWrapping();
// _ZNK9QListView10isWrappingEv isWrapping()
extern "C"
bool
C_ZNK9QListView10isWrappingEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->isWrapping();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 127, column 10>
//   // proto:  void QListView::reset();
// _ZN9QListView5resetEv reset()
extern "C"
void
C_ZN9QListView5resetEv(void *qthis) {
  ((QListView*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 79, column 14>
//   // proto:  QListView::Movement QListView::movement();
// _ZNK9QListView8movementEv movement()
extern "C"
QListView::Movement
C_ZNK9QListView8movementEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->movement();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 78, column 10>
//   // proto:  void QListView::setMovement(QListView::Movement movement);
// _ZN9QListView11setMovementENS_8MovementE setMovement(enum QListView::Movement)
extern "C"
void
C_ZN9QListView11setMovementENS_8MovementE(void *qthis,
QListView::Movement arg1) {
  ((QListView*)qthis)->setMovement(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 100, column 11>
//   // proto:  QSize QListView::gridSize();
// _ZNK9QListView8gridSizeEv gridSize()
extern "C"
QSize*
C_ZNK9QListView8gridSizeEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->gridSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 110, column 10>
//   // proto:  void QListView::setModelColumn(int column);
// _ZN9QListView14setModelColumnEi setModelColumn(int)
extern "C"
void
C_ZN9QListView14setModelColumnEi(void *qthis,
int arg1) {
  ((QListView*)qthis)->setModelColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 93, column 10>
//   // proto:  void QListView::setSpacing(int space);
// _ZN9QListView10setSpacingEi setSpacing(int)
extern "C"
void
C_ZN9QListView10setSpacingEi(void *qthis,
int arg1) {
  ((QListView*)qthis)->setSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 131, column 10>
//   // proto:  void QListView::indexesMoved(const QModelIndexList & indexes);
// _ZN9QListView12indexesMovedERK5QListI11QModelIndexE indexesMoved(const QModelIndexList &)
extern "C"
void
C_ZN9QListView12indexesMovedERK5QListI11QModelIndexE(void *qthis,
const QModelIndexList* arg1) {
  ((QListView*)qthis)->indexesMoved(*((const QModelIndexList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 122, column 11>
//   // proto:  QRect QListView::visualRect(const QModelIndex & index);
// _ZNK9QListView10visualRectERK11QModelIndex visualRect(const class QModelIndex &)
extern "C"
QRect*
C_ZNK9QListView10visualRectERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QListView*)qthis)->visualRect(*((const QModelIndex*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 107, column 10>
//   // proto:  bool QListView::isRowHidden(int row);
// _ZNK9QListView11isRowHiddenEi isRowHidden(int)
extern "C"
bool
C_ZNK9QListView11isRowHiddenEi(void *qthis,
int arg1) {
  auto ret =
  ((QListView*)qthis)->isRowHidden(arg1);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QListView::~QListView();
extern "C"
void C_ZN9QListViewD2Ev(void *qthis) {
  delete (QListView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 48, column 5>
//   // proto:  const QMetaObject * QListView::metaObject();
// _ZNK9QListView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QListView10metaObjectEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 97, column 9>
//   // proto:  int QListView::batchSize();
// _ZNK9QListView9batchSizeEv batchSize()
extern "C"
int
C_ZNK9QListView9batchSizeEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->batchSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 90, column 10>
//   // proto:  void QListView::setLayoutMode(QListView::LayoutMode mode);
// _ZN9QListView13setLayoutModeENS_10LayoutModeE setLayoutMode(enum QListView::LayoutMode)
extern "C"
void
C_ZN9QListView13setLayoutModeENS_10LayoutModeE(void *qthis,
QListView::LayoutMode arg1) {
  ((QListView*)qthis)->setLayoutMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 120, column 10>
//   // proto:  bool QListView::isSelectionRectVisible();
// _ZNK9QListView22isSelectionRectVisibleEv isSelectionRectVisible()
extern "C"
bool
C_ZNK9QListView22isSelectionRectVisibleEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->isSelectionRectVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 117, column 10>
//   // proto:  bool QListView::wordWrap();
// _ZNK9QListView8wordWrapEv wordWrap()
extern "C"
bool
C_ZNK9QListView8wordWrapEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->wordWrap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 108, column 10>
//   // proto:  void QListView::setRowHidden(int row, bool hide);
// _ZN9QListView12setRowHiddenEib setRowHidden(int, _Bool)
extern "C"
void
C_ZN9QListView12setRowHiddenEib(void *qthis,
int arg1,
bool arg2) {
  ((QListView*)qthis)->setRowHidden(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 105, column 10>
//   // proto:  void QListView::clearPropertyFlags();
// _ZN9QListView18clearPropertyFlagsEv clearPropertyFlags()
extern "C"
void
C_ZN9QListView18clearPropertyFlagsEv(void *qthis) {
  ((QListView*)qthis)->clearPropertyFlags();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 103, column 14>
//   // proto:  QListView::ViewMode QListView::viewMode();
// _ZNK9QListView8viewModeEv viewMode()
extern "C"
QListView::ViewMode
C_ZNK9QListView8viewModeEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->viewMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 82, column 10>
//   // proto:  QListView::Flow QListView::flow();
// _ZNK9QListView4flowEv flow()
extern "C"
QListView::Flow
C_ZNK9QListView4flowEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->flow();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 111, column 9>
//   // proto:  int QListView::modelColumn();
// _ZNK9QListView11modelColumnEv modelColumn()
extern "C"
int
C_ZNK9QListView11modelColumnEv(void *qthis) {
  auto ret =
  ((QListView*)qthis)->modelColumn();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlistview.h', line 113, column 10>
//   // proto:  void QListView::setUniformItemSizes(bool enable);
// _ZN9QListView19setUniformItemSizesEb setUniformItemSizes(_Bool)
extern "C"
void
C_ZN9QListView19setUniformItemSizesEb(void *qthis,
bool arg1) {
  ((QListView*)qthis)->setUniformItemSizes(arg1);
}
// <= ext block end

// body block begin =>
// QListView_SlotProxy here
class QListView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QListView_SlotProxy():QObject(){}

public slots:
  // indexesMoved(const QModelIndexList &)
  void slot_proxy_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(const QModelIndexList & arg0);
public:
  void (*slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE)(void* rsfptr, const QModelIndexList & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qlistview.moc"

extern "C" {
  QListView_SlotProxy* QListView_SlotProxy_new()
  {
    return new QListView_SlotProxy();
  }
};

void QListView_SlotProxy::slot_proxy_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(const QModelIndexList & arg0) {
  if (this->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE != NULL) {
    // do smth...
    this->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(this->rsfptr, arg0);
  }
}
extern "C"
void* QListView_SlotProxy_connect__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QListView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE = (decltype(that->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE))ffifptr;
  QObject::connect((QListView*)sender, SIGNAL(indexesMoved(const QModelIndexList &)), that, SLOT(slot_proxy_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(const QModelIndexList & arg0)));
  return that;
}
extern "C"
void QListView_SlotProxy_disconnect__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(QListView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

