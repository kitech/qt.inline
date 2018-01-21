//  header block begin
// /usr/include/qt/QtWidgets/qtableview.h
#include <qtableview.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QTableView10metaObjectEv(void *this_) {
  /*return*/ ((QTableView*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qtableview.h:63
// void QTableView(class QWidget *)
extern "C"
void* C_ZN10QTableViewC1EP7QWidget(QWidget * parent) {
  return new QTableView(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:64
// void ~QTableView()
extern "C"
void C_ZN10QTableViewD1Ev(void *this_) {
  delete (QTableView*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:66
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN10QTableView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QTableView*)this_)->setModel(model);
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:67
// void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN10QTableView12setRootIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QTableView*)this_)->setRootIndex(index);
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:68
// void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN10QTableView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTableView*)this_)->setSelectionModel(selectionModel);
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:69
// void doItemsLayout()
extern "C"
void C_ZN10QTableView13doItemsLayoutEv(void *this_) {
  ((QTableView*)this_)->doItemsLayout();
}
// /usr/include/qt/QtWidgets/qtableview.h:71
// QHeaderView * horizontalHeader()
extern "C"
void C_ZNK10QTableView16horizontalHeaderEv(void *this_) {
  /*return*/ ((QTableView*)this_)->horizontalHeader();
}
// /usr/include/qt/QtWidgets/qtableview.h:72
// QHeaderView * verticalHeader()
extern "C"
void C_ZNK10QTableView14verticalHeaderEv(void *this_) {
  /*return*/ ((QTableView*)this_)->verticalHeader();
}
// /usr/include/qt/QtWidgets/qtableview.h:73
// void setHorizontalHeader(class QHeaderView *)
extern "C"
void C_ZN10QTableView19setHorizontalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setHorizontalHeader(header);
}
// /usr/include/qt/QtWidgets/qtableview.h:74
// void setVerticalHeader(class QHeaderView *)
extern "C"
void C_ZN10QTableView17setVerticalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setVerticalHeader(header);
}
// /usr/include/qt/QtWidgets/qtableview.h:76
// int rowViewportPosition(int)
extern "C"
void C_ZNK10QTableView19rowViewportPositionEi(void *this_, int row) {
  /*return*/ ((QTableView*)this_)->rowViewportPosition(row);
}
// /usr/include/qt/QtWidgets/qtableview.h:77
// int rowAt(int)
extern "C"
void C_ZNK10QTableView5rowAtEi(void *this_, int y) {
  /*return*/ ((QTableView*)this_)->rowAt(y);
}
// /usr/include/qt/QtWidgets/qtableview.h:79
// void setRowHeight(int, int)
extern "C"
void C_ZN10QTableView12setRowHeightEii(void *this_, int row, int height) {
  ((QTableView*)this_)->setRowHeight(row, height);
}
// /usr/include/qt/QtWidgets/qtableview.h:80
// int rowHeight(int)
extern "C"
void C_ZNK10QTableView9rowHeightEi(void *this_, int row) {
  /*return*/ ((QTableView*)this_)->rowHeight(row);
}
// /usr/include/qt/QtWidgets/qtableview.h:82
// int columnViewportPosition(int)
extern "C"
void C_ZNK10QTableView22columnViewportPositionEi(void *this_, int column) {
  /*return*/ ((QTableView*)this_)->columnViewportPosition(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:83
// int columnAt(int)
extern "C"
void C_ZNK10QTableView8columnAtEi(void *this_, int x) {
  /*return*/ ((QTableView*)this_)->columnAt(x);
}
// /usr/include/qt/QtWidgets/qtableview.h:85
// void setColumnWidth(int, int)
extern "C"
void C_ZN10QTableView14setColumnWidthEii(void *this_, int column, int width) {
  ((QTableView*)this_)->setColumnWidth(column, width);
}
// /usr/include/qt/QtWidgets/qtableview.h:86
// int columnWidth(int)
extern "C"
void C_ZNK10QTableView11columnWidthEi(void *this_, int column) {
  /*return*/ ((QTableView*)this_)->columnWidth(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:88
// bool isRowHidden(int)
extern "C"
void C_ZNK10QTableView11isRowHiddenEi(void *this_, int row) {
  /*return*/ ((QTableView*)this_)->isRowHidden(row);
}
// /usr/include/qt/QtWidgets/qtableview.h:89
// void setRowHidden(int, _Bool)
extern "C"
void C_ZN10QTableView12setRowHiddenEib(void *this_, int row, bool hide) {
  ((QTableView*)this_)->setRowHidden(row, hide);
}
// /usr/include/qt/QtWidgets/qtableview.h:91
// bool isColumnHidden(int)
extern "C"
void C_ZNK10QTableView14isColumnHiddenEi(void *this_, int column) {
  /*return*/ ((QTableView*)this_)->isColumnHidden(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:92
// void setColumnHidden(int, _Bool)
extern "C"
void C_ZN10QTableView15setColumnHiddenEib(void *this_, int column, bool hide) {
  ((QTableView*)this_)->setColumnHidden(column, hide);
}
// /usr/include/qt/QtWidgets/qtableview.h:94
// void setSortingEnabled(_Bool)
extern "C"
void C_ZN10QTableView17setSortingEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setSortingEnabled(enable);
}
// /usr/include/qt/QtWidgets/qtableview.h:95
// bool isSortingEnabled()
extern "C"
void C_ZNK10QTableView16isSortingEnabledEv(void *this_) {
  /*return*/ ((QTableView*)this_)->isSortingEnabled();
}
// /usr/include/qt/QtWidgets/qtableview.h:97
// bool showGrid()
extern "C"
void C_ZNK10QTableView8showGridEv(void *this_) {
  /*return*/ ((QTableView*)this_)->showGrid();
}
// /usr/include/qt/QtWidgets/qtableview.h:99
// Qt::PenStyle gridStyle()
extern "C"
void C_ZNK10QTableView9gridStyleEv(void *this_) {
  /*return*/ ((QTableView*)this_)->gridStyle();
}
// /usr/include/qt/QtWidgets/qtableview.h:100
// void setGridStyle(Qt::PenStyle)
extern "C"
void C_ZN10QTableView12setGridStyleEN2Qt8PenStyleE(void *this_, Qt::PenStyle style) {
  ((QTableView*)this_)->setGridStyle(style);
}
// /usr/include/qt/QtWidgets/qtableview.h:102
// void setWordWrap(_Bool)
extern "C"
void C_ZN10QTableView11setWordWrapEb(void *this_, bool on) {
  ((QTableView*)this_)->setWordWrap(on);
}
// /usr/include/qt/QtWidgets/qtableview.h:103
// bool wordWrap()
extern "C"
void C_ZNK10QTableView8wordWrapEv(void *this_) {
  /*return*/ ((QTableView*)this_)->wordWrap();
}
// /usr/include/qt/QtWidgets/qtableview.h:105
// void setCornerButtonEnabled(_Bool)
extern "C"
void C_ZN10QTableView22setCornerButtonEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setCornerButtonEnabled(enable);
}
// /usr/include/qt/QtWidgets/qtableview.h:106
// bool isCornerButtonEnabled()
extern "C"
void C_ZNK10QTableView21isCornerButtonEnabledEv(void *this_) {
  /*return*/ ((QTableView*)this_)->isCornerButtonEnabled();
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:108
// QRect visualRect(const class QModelIndex &)
extern "C"
void C_ZNK10QTableView10visualRectERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QTableView*)this_)->visualRect(index);
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:109
// void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN10QTableView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, const QModelIndex & index, QAbstractItemView::ScrollHint hint) {
  ((QTableView*)this_)->scrollTo(index, hint);
}
// virtual
// /usr/include/qt/QtWidgets/qtableview.h:110
// QModelIndex indexAt(const class QPoint &)
extern "C"
void C_ZNK10QTableView7indexAtERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QTableView*)this_)->indexAt(p);
}
// /usr/include/qt/QtWidgets/qtableview.h:112
// void setSpan(int, int, int, int)
extern "C"
void C_ZN10QTableView7setSpanEiiii(void *this_, int row, int column, int rowSpan, int columnSpan) {
  ((QTableView*)this_)->setSpan(row, column, rowSpan, columnSpan);
}
// /usr/include/qt/QtWidgets/qtableview.h:113
// int rowSpan(int, int)
extern "C"
void C_ZNK10QTableView7rowSpanEii(void *this_, int row, int column) {
  /*return*/ ((QTableView*)this_)->rowSpan(row, column);
}
// /usr/include/qt/QtWidgets/qtableview.h:114
// int columnSpan(int, int)
extern "C"
void C_ZNK10QTableView10columnSpanEii(void *this_, int row, int column) {
  /*return*/ ((QTableView*)this_)->columnSpan(row, column);
}
// /usr/include/qt/QtWidgets/qtableview.h:115
// void clearSpans()
extern "C"
void C_ZN10QTableView10clearSpansEv(void *this_) {
  ((QTableView*)this_)->clearSpans();
}
// /usr/include/qt/QtWidgets/qtableview.h:117
// void sortByColumn(int, Qt::SortOrder)
extern "C"
void C_ZN10QTableView12sortByColumnEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTableView*)this_)->sortByColumn(column, order);
}
// /usr/include/qt/QtWidgets/qtableview.h:120
// void selectRow(int)
extern "C"
void C_ZN10QTableView9selectRowEi(void *this_, int row) {
  ((QTableView*)this_)->selectRow(row);
}
// /usr/include/qt/QtWidgets/qtableview.h:121
// void selectColumn(int)
extern "C"
void C_ZN10QTableView12selectColumnEi(void *this_, int column) {
  ((QTableView*)this_)->selectColumn(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:122
// void hideRow(int)
extern "C"
void C_ZN10QTableView7hideRowEi(void *this_, int row) {
  ((QTableView*)this_)->hideRow(row);
}
// /usr/include/qt/QtWidgets/qtableview.h:123
// void hideColumn(int)
extern "C"
void C_ZN10QTableView10hideColumnEi(void *this_, int column) {
  ((QTableView*)this_)->hideColumn(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:124
// void showRow(int)
extern "C"
void C_ZN10QTableView7showRowEi(void *this_, int row) {
  ((QTableView*)this_)->showRow(row);
}
// /usr/include/qt/QtWidgets/qtableview.h:125
// void showColumn(int)
extern "C"
void C_ZN10QTableView10showColumnEi(void *this_, int column) {
  ((QTableView*)this_)->showColumn(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:126
// void resizeRowToContents(int)
extern "C"
void C_ZN10QTableView19resizeRowToContentsEi(void *this_, int row) {
  ((QTableView*)this_)->resizeRowToContents(row);
}
// /usr/include/qt/QtWidgets/qtableview.h:127
// void resizeRowsToContents()
extern "C"
void C_ZN10QTableView20resizeRowsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeRowsToContents();
}
// /usr/include/qt/QtWidgets/qtableview.h:128
// void resizeColumnToContents(int)
extern "C"
void C_ZN10QTableView22resizeColumnToContentsEi(void *this_, int column) {
  ((QTableView*)this_)->resizeColumnToContents(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:129
// void resizeColumnsToContents()
extern "C"
void C_ZN10QTableView23resizeColumnsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeColumnsToContents();
}
// /usr/include/qt/QtWidgets/qtableview.h:130
// void sortByColumn(int)
extern "C"
void C_ZN10QTableView12sortByColumnEi(void *this_, int column) {
  ((QTableView*)this_)->sortByColumn(column);
}
// /usr/include/qt/QtWidgets/qtableview.h:131
// void setShowGrid(_Bool)
extern "C"
void C_ZN10QTableView11setShowGridEb(void *this_, bool show) {
  ((QTableView*)this_)->setShowGrid(show);
}
//  main block end
