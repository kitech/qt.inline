// /usr/include/qt/QtWidgets/qtreeview.h
#include <qtreeview.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QTreeView10metaObjectEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtreeview.h:69
// void QTreeView(class QWidget *)
extern "C"
void* C_ZN9QTreeViewC1EP7QWidget(QWidget * parent) {
  return new QTreeView(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:70
// void ~QTreeView()
extern "C"
void C_ZN9QTreeViewD1Ev(void *this_) {
  delete (QTreeView*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:72
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN9QTreeView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QTreeView*)this_)->setModel(model);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:73
// void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView12setRootIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QTreeView*)this_)->setRootIndex(index);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:74
// void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN9QTreeView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTreeView*)this_)->setSelectionModel(selectionModel);
}
// /usr/include/qt/QtWidgets/qtreeview.h:76
// QHeaderView * header()
extern "C"
void C_ZNK9QTreeView6headerEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->header();
}
// /usr/include/qt/QtWidgets/qtreeview.h:77
// void setHeader(class QHeaderView *)
extern "C"
void C_ZN9QTreeView9setHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTreeView*)this_)->setHeader(header);
}
// /usr/include/qt/QtWidgets/qtreeview.h:79
// int autoExpandDelay()
extern "C"
void C_ZNK9QTreeView15autoExpandDelayEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->autoExpandDelay();
}
// /usr/include/qt/QtWidgets/qtreeview.h:80
// void setAutoExpandDelay(int)
extern "C"
void C_ZN9QTreeView18setAutoExpandDelayEi(void *this_, int delay) {
  ((QTreeView*)this_)->setAutoExpandDelay(delay);
}
// /usr/include/qt/QtWidgets/qtreeview.h:82
// int indentation()
extern "C"
void C_ZNK9QTreeView11indentationEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->indentation();
}
// /usr/include/qt/QtWidgets/qtreeview.h:83
// void setIndentation(int)
extern "C"
void C_ZN9QTreeView14setIndentationEi(void *this_, int i) {
  ((QTreeView*)this_)->setIndentation(i);
}
// /usr/include/qt/QtWidgets/qtreeview.h:84
// void resetIndentation()
extern "C"
void C_ZN9QTreeView16resetIndentationEv(void *this_) {
  ((QTreeView*)this_)->resetIndentation();
}
// /usr/include/qt/QtWidgets/qtreeview.h:86
// bool rootIsDecorated()
extern "C"
void C_ZNK9QTreeView15rootIsDecoratedEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->rootIsDecorated();
}
// /usr/include/qt/QtWidgets/qtreeview.h:87
// void setRootIsDecorated(_Bool)
extern "C"
void C_ZN9QTreeView18setRootIsDecoratedEb(void *this_, bool show) {
  ((QTreeView*)this_)->setRootIsDecorated(show);
}
// /usr/include/qt/QtWidgets/qtreeview.h:89
// bool uniformRowHeights()
extern "C"
void C_ZNK9QTreeView17uniformRowHeightsEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->uniformRowHeights();
}
// /usr/include/qt/QtWidgets/qtreeview.h:90
// void setUniformRowHeights(_Bool)
extern "C"
void C_ZN9QTreeView20setUniformRowHeightsEb(void *this_, bool uniform) {
  ((QTreeView*)this_)->setUniformRowHeights(uniform);
}
// /usr/include/qt/QtWidgets/qtreeview.h:92
// bool itemsExpandable()
extern "C"
void C_ZNK9QTreeView15itemsExpandableEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->itemsExpandable();
}
// /usr/include/qt/QtWidgets/qtreeview.h:93
// void setItemsExpandable(_Bool)
extern "C"
void C_ZN9QTreeView18setItemsExpandableEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setItemsExpandable(enable);
}
// /usr/include/qt/QtWidgets/qtreeview.h:95
// bool expandsOnDoubleClick()
extern "C"
void C_ZNK9QTreeView20expandsOnDoubleClickEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->expandsOnDoubleClick();
}
// /usr/include/qt/QtWidgets/qtreeview.h:96
// void setExpandsOnDoubleClick(_Bool)
extern "C"
void C_ZN9QTreeView23setExpandsOnDoubleClickEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setExpandsOnDoubleClick(enable);
}
// /usr/include/qt/QtWidgets/qtreeview.h:98
// int columnViewportPosition(int)
extern "C"
void C_ZNK9QTreeView22columnViewportPositionEi(void *this_, int column) {
  /*return*/ ((QTreeView*)this_)->columnViewportPosition(column);
}
// /usr/include/qt/QtWidgets/qtreeview.h:99
// int columnWidth(int)
extern "C"
void C_ZNK9QTreeView11columnWidthEi(void *this_, int column) {
  /*return*/ ((QTreeView*)this_)->columnWidth(column);
}
// /usr/include/qt/QtWidgets/qtreeview.h:100
// void setColumnWidth(int, int)
extern "C"
void C_ZN9QTreeView14setColumnWidthEii(void *this_, int column, int width) {
  ((QTreeView*)this_)->setColumnWidth(column, width);
}
// /usr/include/qt/QtWidgets/qtreeview.h:101
// int columnAt(int)
extern "C"
void C_ZNK9QTreeView8columnAtEi(void *this_, int x) {
  /*return*/ ((QTreeView*)this_)->columnAt(x);
}
// /usr/include/qt/QtWidgets/qtreeview.h:103
// bool isColumnHidden(int)
extern "C"
void C_ZNK9QTreeView14isColumnHiddenEi(void *this_, int column) {
  /*return*/ ((QTreeView*)this_)->isColumnHidden(column);
}
// /usr/include/qt/QtWidgets/qtreeview.h:104
// void setColumnHidden(int, _Bool)
extern "C"
void C_ZN9QTreeView15setColumnHiddenEib(void *this_, int column, bool hide) {
  ((QTreeView*)this_)->setColumnHidden(column, hide);
}
// /usr/include/qt/QtWidgets/qtreeview.h:106
// bool isHeaderHidden()
extern "C"
void C_ZNK9QTreeView14isHeaderHiddenEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->isHeaderHidden();
}
// /usr/include/qt/QtWidgets/qtreeview.h:107
// void setHeaderHidden(_Bool)
extern "C"
void C_ZN9QTreeView15setHeaderHiddenEb(void *this_, bool hide) {
  ((QTreeView*)this_)->setHeaderHidden(hide);
}
// /usr/include/qt/QtWidgets/qtreeview.h:109
// bool isRowHidden(int, const class QModelIndex &)
extern "C"
void C_ZNK9QTreeView11isRowHiddenEiRK11QModelIndex(void *this_, int row, const QModelIndex & parent) {
  /*return*/ ((QTreeView*)this_)->isRowHidden(row, parent);
}
// /usr/include/qt/QtWidgets/qtreeview.h:110
// void setRowHidden(int, const class QModelIndex &, _Bool)
extern "C"
void C_ZN9QTreeView12setRowHiddenEiRK11QModelIndexb(void *this_, int row, const QModelIndex & parent, bool hide) {
  ((QTreeView*)this_)->setRowHidden(row, parent, hide);
}
// /usr/include/qt/QtWidgets/qtreeview.h:112
// bool isFirstColumnSpanned(int, const class QModelIndex &)
extern "C"
void C_ZNK9QTreeView20isFirstColumnSpannedEiRK11QModelIndex(void *this_, int row, const QModelIndex & parent) {
  /*return*/ ((QTreeView*)this_)->isFirstColumnSpanned(row, parent);
}
// /usr/include/qt/QtWidgets/qtreeview.h:113
// void setFirstColumnSpanned(int, const class QModelIndex &, _Bool)
extern "C"
void C_ZN9QTreeView21setFirstColumnSpannedEiRK11QModelIndexb(void *this_, int row, const QModelIndex & parent, bool span) {
  ((QTreeView*)this_)->setFirstColumnSpanned(row, parent, span);
}
// /usr/include/qt/QtWidgets/qtreeview.h:115
// bool isExpanded(const class QModelIndex &)
extern "C"
void C_ZNK9QTreeView10isExpandedERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QTreeView*)this_)->isExpanded(index);
}
// /usr/include/qt/QtWidgets/qtreeview.h:116
// void setExpanded(const class QModelIndex &, _Bool)
extern "C"
void C_ZN9QTreeView11setExpandedERK11QModelIndexb(void *this_, const QModelIndex & index, bool expand) {
  ((QTreeView*)this_)->setExpanded(index, expand);
}
// /usr/include/qt/QtWidgets/qtreeview.h:118
// void setSortingEnabled(_Bool)
extern "C"
void C_ZN9QTreeView17setSortingEnabledEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setSortingEnabled(enable);
}
// /usr/include/qt/QtWidgets/qtreeview.h:119
// bool isSortingEnabled()
extern "C"
void C_ZNK9QTreeView16isSortingEnabledEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->isSortingEnabled();
}
// /usr/include/qt/QtWidgets/qtreeview.h:121
// void setAnimated(_Bool)
extern "C"
void C_ZN9QTreeView11setAnimatedEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setAnimated(enable);
}
// /usr/include/qt/QtWidgets/qtreeview.h:122
// bool isAnimated()
extern "C"
void C_ZNK9QTreeView10isAnimatedEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->isAnimated();
}
// /usr/include/qt/QtWidgets/qtreeview.h:124
// void setAllColumnsShowFocus(_Bool)
extern "C"
void C_ZN9QTreeView22setAllColumnsShowFocusEb(void *this_, bool enable) {
  ((QTreeView*)this_)->setAllColumnsShowFocus(enable);
}
// /usr/include/qt/QtWidgets/qtreeview.h:125
// bool allColumnsShowFocus()
extern "C"
void C_ZNK9QTreeView19allColumnsShowFocusEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->allColumnsShowFocus();
}
// /usr/include/qt/QtWidgets/qtreeview.h:127
// void setWordWrap(_Bool)
extern "C"
void C_ZN9QTreeView11setWordWrapEb(void *this_, bool on) {
  ((QTreeView*)this_)->setWordWrap(on);
}
// /usr/include/qt/QtWidgets/qtreeview.h:128
// bool wordWrap()
extern "C"
void C_ZNK9QTreeView8wordWrapEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->wordWrap();
}
// /usr/include/qt/QtWidgets/qtreeview.h:130
// void setTreePosition(int)
extern "C"
void C_ZN9QTreeView15setTreePositionEi(void *this_, int logicalIndex) {
  ((QTreeView*)this_)->setTreePosition(logicalIndex);
}
// /usr/include/qt/QtWidgets/qtreeview.h:131
// int treePosition()
extern "C"
void C_ZNK9QTreeView12treePositionEv(void *this_) {
  /*return*/ ((QTreeView*)this_)->treePosition();
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:133
// void keyboardSearch(const class QString &)
extern "C"
void C_ZN9QTreeView14keyboardSearchERK7QString(void *this_, const QString & search) {
  ((QTreeView*)this_)->keyboardSearch(search);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:135
// QRect visualRect(const class QModelIndex &)
extern "C"
void C_ZNK9QTreeView10visualRectERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QTreeView*)this_)->visualRect(index);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:136
// void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN9QTreeView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, const QModelIndex & index, QAbstractItemView::ScrollHint hint) {
  ((QTreeView*)this_)->scrollTo(index, hint);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:137
// QModelIndex indexAt(const class QPoint &)
extern "C"
void C_ZNK9QTreeView7indexAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QTreeView*)this_)->indexAt(p);
}
// /usr/include/qt/QtWidgets/qtreeview.h:138
// QModelIndex indexAbove(const class QModelIndex &)
extern "C"
void C_ZNK9QTreeView10indexAboveERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QTreeView*)this_)->indexAbove(index);
}
// /usr/include/qt/QtWidgets/qtreeview.h:139
// QModelIndex indexBelow(const class QModelIndex &)
extern "C"
void C_ZNK9QTreeView10indexBelowERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QTreeView*)this_)->indexBelow(index);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:141
// void doItemsLayout()
extern "C"
void C_ZN9QTreeView13doItemsLayoutEv(void *this_) {
  ((QTreeView*)this_)->doItemsLayout();
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:142
// void reset()
extern "C"
void C_ZN9QTreeView5resetEv(void *this_) {
  ((QTreeView*)this_)->reset();
}
// /usr/include/qt/QtWidgets/qtreeview.h:144
// void sortByColumn(int, Qt::SortOrder)
extern "C"
void C_ZN9QTreeView12sortByColumnEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeView*)this_)->sortByColumn(column, order);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:146
// void dataChanged(const class QModelIndex &, const class QModelIndex &, const QVector<int> &)
extern "C"
void C_ZN9QTreeView11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *this_, const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles) {
  ((QTreeView*)this_)->dataChanged(topLeft, bottomRight, roles);
}
// virtual
// /usr/include/qt/QtWidgets/qtreeview.h:147
// void selectAll()
extern "C"
void C_ZN9QTreeView9selectAllEv(void *this_) {
  ((QTreeView*)this_)->selectAll();
}
// /usr/include/qt/QtWidgets/qtreeview.h:150
// void expanded(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView8expandedERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QTreeView*)this_)->expanded(index);
}
// /usr/include/qt/QtWidgets/qtreeview.h:151
// void collapsed(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView9collapsedERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QTreeView*)this_)->collapsed(index);
}
// /usr/include/qt/QtWidgets/qtreeview.h:154
// void hideColumn(int)
extern "C"
void C_ZN9QTreeView10hideColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->hideColumn(column);
}
// /usr/include/qt/QtWidgets/qtreeview.h:155
// void showColumn(int)
extern "C"
void C_ZN9QTreeView10showColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->showColumn(column);
}
// /usr/include/qt/QtWidgets/qtreeview.h:156
// void expand(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView6expandERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QTreeView*)this_)->expand(index);
}
// /usr/include/qt/QtWidgets/qtreeview.h:157
// void collapse(const class QModelIndex &)
extern "C"
void C_ZN9QTreeView8collapseERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QTreeView*)this_)->collapse(index);
}
// /usr/include/qt/QtWidgets/qtreeview.h:158
// void resizeColumnToContents(int)
extern "C"
void C_ZN9QTreeView22resizeColumnToContentsEi(void *this_, int column) {
  ((QTreeView*)this_)->resizeColumnToContents(column);
}
// /usr/include/qt/QtWidgets/qtreeview.h:159
// void sortByColumn(int)
extern "C"
void C_ZN9QTreeView12sortByColumnEi(void *this_, int column) {
  ((QTreeView*)this_)->sortByColumn(column);
}
// /usr/include/qt/QtWidgets/qtreeview.h:160
// void expandAll()
extern "C"
void C_ZN9QTreeView9expandAllEv(void *this_) {
  ((QTreeView*)this_)->expandAll();
}
// /usr/include/qt/QtWidgets/qtreeview.h:161
// void collapseAll()
extern "C"
void C_ZN9QTreeView11collapseAllEv(void *this_) {
  ((QTreeView*)this_)->collapseAll();
}
// /usr/include/qt/QtWidgets/qtreeview.h:162
// void expandToDepth(int)
extern "C"
void C_ZN9QTreeView13expandToDepthEi(void *this_, int depth) {
  ((QTreeView*)this_)->expandToDepth(depth);
}