// /usr/include/qt/QtWidgets/qlistview.h
#include <qlistview.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qlistview.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QListView10metaObjectEv(void *this_) {
  /*return*/ ((QListView*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qlistview.h:81
// void QListView(class QWidget *)
extern "C"
void* C_ZN9QListViewC1EP7QWidget(QWidget * parent) {
  return new QListView(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qlistview.h:82
// void ~QListView()
extern "C"
void C_ZN9QListViewD1Ev(void *this_) {
  delete (QListView*)(this_);
}
// /usr/include/qt/QtWidgets/qlistview.h:84
// void setMovement(enum QListView::Movement)
extern "C"
void C_ZN9QListView11setMovementENS_8MovementE(void *this_, QListView::Movement movement) {
  ((QListView*)this_)->setMovement(movement);
}
// /usr/include/qt/QtWidgets/qlistview.h:85
// QListView::Movement movement()
extern "C"
void C_ZNK9QListView8movementEv(void *this_) {
  /*return*/ ((QListView*)this_)->movement();
}
// /usr/include/qt/QtWidgets/qlistview.h:87
// void setFlow(enum QListView::Flow)
extern "C"
void C_ZN9QListView7setFlowENS_4FlowE(void *this_, QListView::Flow flow) {
  ((QListView*)this_)->setFlow(flow);
}
// /usr/include/qt/QtWidgets/qlistview.h:88
// QListView::Flow flow()
extern "C"
void C_ZNK9QListView4flowEv(void *this_) {
  /*return*/ ((QListView*)this_)->flow();
}
// /usr/include/qt/QtWidgets/qlistview.h:90
// void setWrapping(_Bool)
extern "C"
void C_ZN9QListView11setWrappingEb(void *this_, bool enable) {
  ((QListView*)this_)->setWrapping(enable);
}
// /usr/include/qt/QtWidgets/qlistview.h:91
// bool isWrapping()
extern "C"
void C_ZNK9QListView10isWrappingEv(void *this_) {
  /*return*/ ((QListView*)this_)->isWrapping();
}
// /usr/include/qt/QtWidgets/qlistview.h:93
// void setResizeMode(enum QListView::ResizeMode)
extern "C"
void C_ZN9QListView13setResizeModeENS_10ResizeModeE(void *this_, QListView::ResizeMode mode) {
  ((QListView*)this_)->setResizeMode(mode);
}
// /usr/include/qt/QtWidgets/qlistview.h:94
// QListView::ResizeMode resizeMode()
extern "C"
void C_ZNK9QListView10resizeModeEv(void *this_) {
  /*return*/ ((QListView*)this_)->resizeMode();
}
// /usr/include/qt/QtWidgets/qlistview.h:96
// void setLayoutMode(enum QListView::LayoutMode)
extern "C"
void C_ZN9QListView13setLayoutModeENS_10LayoutModeE(void *this_, QListView::LayoutMode mode) {
  ((QListView*)this_)->setLayoutMode(mode);
}
// /usr/include/qt/QtWidgets/qlistview.h:97
// QListView::LayoutMode layoutMode()
extern "C"
void C_ZNK9QListView10layoutModeEv(void *this_) {
  /*return*/ ((QListView*)this_)->layoutMode();
}
// /usr/include/qt/QtWidgets/qlistview.h:99
// void setSpacing(int)
extern "C"
void C_ZN9QListView10setSpacingEi(void *this_, int space) {
  ((QListView*)this_)->setSpacing(space);
}
// /usr/include/qt/QtWidgets/qlistview.h:100
// int spacing()
extern "C"
void C_ZNK9QListView7spacingEv(void *this_) {
  /*return*/ ((QListView*)this_)->spacing();
}
// /usr/include/qt/QtWidgets/qlistview.h:102
// void setBatchSize(int)
extern "C"
void C_ZN9QListView12setBatchSizeEi(void *this_, int batchSize) {
  ((QListView*)this_)->setBatchSize(batchSize);
}
// /usr/include/qt/QtWidgets/qlistview.h:103
// int batchSize()
extern "C"
void C_ZNK9QListView9batchSizeEv(void *this_) {
  /*return*/ ((QListView*)this_)->batchSize();
}
// /usr/include/qt/QtWidgets/qlistview.h:105
// void setGridSize(const class QSize &)
extern "C"
void C_ZN9QListView11setGridSizeERK5QSize(void *this_, const QSize & size) {
  ((QListView*)this_)->setGridSize(size);
}
// /usr/include/qt/QtWidgets/qlistview.h:106
// QSize gridSize()
extern "C"
void C_ZNK9QListView8gridSizeEv(void *this_) {
  /*return*/ ((QListView*)this_)->gridSize();
}
// /usr/include/qt/QtWidgets/qlistview.h:108
// void setViewMode(enum QListView::ViewMode)
extern "C"
void C_ZN9QListView11setViewModeENS_8ViewModeE(void *this_, QListView::ViewMode mode) {
  ((QListView*)this_)->setViewMode(mode);
}
// /usr/include/qt/QtWidgets/qlistview.h:109
// QListView::ViewMode viewMode()
extern "C"
void C_ZNK9QListView8viewModeEv(void *this_) {
  /*return*/ ((QListView*)this_)->viewMode();
}
// /usr/include/qt/QtWidgets/qlistview.h:111
// void clearPropertyFlags()
extern "C"
void C_ZN9QListView18clearPropertyFlagsEv(void *this_) {
  ((QListView*)this_)->clearPropertyFlags();
}
// /usr/include/qt/QtWidgets/qlistview.h:113
// bool isRowHidden(int)
extern "C"
void C_ZNK9QListView11isRowHiddenEi(void *this_, int row) {
  /*return*/ ((QListView*)this_)->isRowHidden(row);
}
// /usr/include/qt/QtWidgets/qlistview.h:114
// void setRowHidden(int, _Bool)
extern "C"
void C_ZN9QListView12setRowHiddenEib(void *this_, int row, bool hide) {
  ((QListView*)this_)->setRowHidden(row, hide);
}
// /usr/include/qt/QtWidgets/qlistview.h:116
// void setModelColumn(int)
extern "C"
void C_ZN9QListView14setModelColumnEi(void *this_, int column) {
  ((QListView*)this_)->setModelColumn(column);
}
// /usr/include/qt/QtWidgets/qlistview.h:117
// int modelColumn()
extern "C"
void C_ZNK9QListView11modelColumnEv(void *this_) {
  /*return*/ ((QListView*)this_)->modelColumn();
}
// /usr/include/qt/QtWidgets/qlistview.h:119
// void setUniformItemSizes(_Bool)
extern "C"
void C_ZN9QListView19setUniformItemSizesEb(void *this_, bool enable) {
  ((QListView*)this_)->setUniformItemSizes(enable);
}
// /usr/include/qt/QtWidgets/qlistview.h:120
// bool uniformItemSizes()
extern "C"
void C_ZNK9QListView16uniformItemSizesEv(void *this_) {
  /*return*/ ((QListView*)this_)->uniformItemSizes();
}
// /usr/include/qt/QtWidgets/qlistview.h:122
// void setWordWrap(_Bool)
extern "C"
void C_ZN9QListView11setWordWrapEb(void *this_, bool on) {
  ((QListView*)this_)->setWordWrap(on);
}
// /usr/include/qt/QtWidgets/qlistview.h:123
// bool wordWrap()
extern "C"
void C_ZNK9QListView8wordWrapEv(void *this_) {
  /*return*/ ((QListView*)this_)->wordWrap();
}
// /usr/include/qt/QtWidgets/qlistview.h:125
// void setSelectionRectVisible(_Bool)
extern "C"
void C_ZN9QListView23setSelectionRectVisibleEb(void *this_, bool show) {
  ((QListView*)this_)->setSelectionRectVisible(show);
}
// /usr/include/qt/QtWidgets/qlistview.h:126
// bool isSelectionRectVisible()
extern "C"
void C_ZNK9QListView22isSelectionRectVisibleEv(void *this_) {
  /*return*/ ((QListView*)this_)->isSelectionRectVisible();
}
// virtual
// /usr/include/qt/QtWidgets/qlistview.h:128
// QRect visualRect(const class QModelIndex &)
extern "C"
void C_ZNK9QListView10visualRectERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QListView*)this_)->visualRect(index);
}
// virtual
// /usr/include/qt/QtWidgets/qlistview.h:129
// void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN9QListView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, const QModelIndex & index, QAbstractItemView::ScrollHint hint) {
  ((QListView*)this_)->scrollTo(index, hint);
}
// virtual
// /usr/include/qt/QtWidgets/qlistview.h:130
// QModelIndex indexAt(const class QPoint &)
extern "C"
void C_ZNK9QListView7indexAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QListView*)this_)->indexAt(p);
}
// virtual
// /usr/include/qt/QtWidgets/qlistview.h:132
// void doItemsLayout()
extern "C"
void C_ZN9QListView13doItemsLayoutEv(void *this_) {
  ((QListView*)this_)->doItemsLayout();
}
// virtual
// /usr/include/qt/QtWidgets/qlistview.h:133
// void reset()
extern "C"
void C_ZN9QListView5resetEv(void *this_) {
  ((QListView*)this_)->reset();
}
// virtual
// /usr/include/qt/QtWidgets/qlistview.h:134
// void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN9QListView12setRootIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QListView*)this_)->setRootIndex(index);
}
// /usr/include/qt/QtWidgets/qlistview.h:137
// void indexesMoved(const QModelIndexList &)
extern "C"
void C_ZN9QListView12indexesMovedERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  ((QListView*)this_)->indexesMoved(indexes);
}