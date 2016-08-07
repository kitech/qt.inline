// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qtableview.h
// dst-file: /src/widgets/qtableview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtableview.h>


#include <qnamespace.h>
#include <qrect.h>
#include <qabstractitemmodel.h>
// <= header block end

// main block begin =>
void __keep_qtableview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTableView_Class_Size()
{
  return sizeof(QTableView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 127, column 10>
//   // proto:  void QTableView::resizeRowsToContents();
// _ZN10QTableView20resizeRowsToContentsEv resizeRowsToContents()
extern "C"
void
C_ZN10QTableView20resizeRowsToContentsEv(void *qthis) {
  ((QTableView*)qthis)->resizeRowsToContents();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 79, column 10>
//   // proto:  void QTableView::setRowHeight(int row, int height);
// _ZN10QTableView12setRowHeightEii setRowHeight(int, int)
extern "C"
void
C_ZN10QTableView12setRowHeightEii(void *qthis,
int arg1,
int arg2) {
  ((QTableView*)qthis)->setRowHeight(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 72, column 18>
//   // proto:  QHeaderView * QTableView::verticalHeader();
// _ZNK10QTableView14verticalHeaderEv verticalHeader()
extern "C"
void*
C_ZNK10QTableView14verticalHeaderEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->verticalHeader();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 100, column 10>
//   // proto:  void QTableView::setGridStyle(Qt::PenStyle style);
// _ZN10QTableView12setGridStyleEN2Qt8PenStyleE setGridStyle(Qt::PenStyle)
extern "C"
void
C_ZN10QTableView12setGridStyleEN2Qt8PenStyleE(void *qthis,
Qt::PenStyle* arg1) {
  ((QTableView*)qthis)->setGridStyle(*((Qt::PenStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 109, column 10>
//   // proto:  void QTableView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint);
// _ZN10QTableView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void
C_ZN10QTableView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *qthis,
const QModelIndex* arg1,
QAbstractItemView::ScrollHint arg2) {
  ((QTableView*)qthis)->scrollTo(*((const QModelIndex*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 112, column 10>
//   // proto:  void QTableView::setSpan(int row, int column, int rowSpan, int columnSpan);
// _ZN10QTableView7setSpanEiiii setSpan(int, int, int, int)
extern "C"
void
C_ZN10QTableView7setSpanEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QTableView*)qthis)->setSpan(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 94, column 10>
//   // proto:  void QTableView::setSortingEnabled(bool enable);
// _ZN10QTableView17setSortingEnabledEb setSortingEnabled(_Bool)
extern "C"
void
C_ZN10QTableView17setSortingEnabledEb(void *qthis,
bool arg1) {
  ((QTableView*)qthis)->setSortingEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 85, column 10>
//   // proto:  void QTableView::setColumnWidth(int column, int width);
// _ZN10QTableView14setColumnWidthEii setColumnWidth(int, int)
extern "C"
void
C_ZN10QTableView14setColumnWidthEii(void *qthis,
int arg1,
int arg2) {
  ((QTableView*)qthis)->setColumnWidth(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 102, column 10>
//   // proto:  void QTableView::setWordWrap(bool on);
// _ZN10QTableView11setWordWrapEb setWordWrap(_Bool)
extern "C"
void
C_ZN10QTableView11setWordWrapEb(void *qthis,
bool arg1) {
  ((QTableView*)qthis)->setWordWrap(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 69, column 10>
//   // proto:  void QTableView::doItemsLayout();
// _ZN10QTableView13doItemsLayoutEv doItemsLayout()
extern "C"
void
C_ZN10QTableView13doItemsLayoutEv(void *qthis) {
  ((QTableView*)qthis)->doItemsLayout();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 68, column 10>
//   // proto:  void QTableView::setSelectionModel(QItemSelectionModel * selectionModel);
// _ZN10QTableView17setSelectionModelEP19QItemSelectionModel setSelectionModel(class QItemSelectionModel *)
extern "C"
void
C_ZN10QTableView17setSelectionModelEP19QItemSelectionModel(void *qthis,
QItemSelectionModel * arg1) {
  ((QTableView*)qthis)->setSelectionModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 73, column 10>
//   // proto:  void QTableView::setHorizontalHeader(QHeaderView * header);
// _ZN10QTableView19setHorizontalHeaderEP11QHeaderView setHorizontalHeader(class QHeaderView *)
extern "C"
void
C_ZN10QTableView19setHorizontalHeaderEP11QHeaderView(void *qthis,
QHeaderView * arg1) {
  ((QTableView*)qthis)->setHorizontalHeader(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 89, column 10>
//   // proto:  void QTableView::setRowHidden(int row, bool hide);
// _ZN10QTableView12setRowHiddenEib setRowHidden(int, _Bool)
extern "C"
void
C_ZN10QTableView12setRowHiddenEib(void *qthis,
int arg1,
bool arg2) {
  ((QTableView*)qthis)->setRowHidden(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 76, column 9>
//   // proto:  int QTableView::rowViewportPosition(int row);
// _ZNK10QTableView19rowViewportPositionEi rowViewportPosition(int)
extern "C"
int
C_ZNK10QTableView19rowViewportPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->rowViewportPosition(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 83, column 9>
//   // proto:  int QTableView::columnAt(int x);
// _ZNK10QTableView8columnAtEi columnAt(int)
extern "C"
int
C_ZNK10QTableView8columnAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->columnAt(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 88, column 10>
//   // proto:  bool QTableView::isRowHidden(int row);
// _ZNK10QTableView11isRowHiddenEi isRowHidden(int)
extern "C"
bool
C_ZNK10QTableView11isRowHiddenEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->isRowHidden(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 125, column 10>
//   // proto:  void QTableView::showColumn(int column);
// _ZN10QTableView10showColumnEi showColumn(int)
extern "C"
void
C_ZN10QTableView10showColumnEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->showColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 126, column 10>
//   // proto:  void QTableView::resizeRowToContents(int row);
// _ZN10QTableView19resizeRowToContentsEi resizeRowToContents(int)
extern "C"
void
C_ZN10QTableView19resizeRowToContentsEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->resizeRowToContents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 67, column 10>
//   // proto:  void QTableView::setRootIndex(const QModelIndex & index);
// _ZN10QTableView12setRootIndexERK11QModelIndex setRootIndex(const class QModelIndex &)
extern "C"
void
C_ZN10QTableView12setRootIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QTableView*)qthis)->setRootIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 99, column 18>
//   // proto:  Qt::PenStyle QTableView::gridStyle();
// _ZNK10QTableView9gridStyleEv gridStyle()
extern "C"
Qt::PenStyle
C_ZNK10QTableView9gridStyleEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->gridStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 92, column 10>
//   // proto:  void QTableView::setColumnHidden(int column, bool hide);
// _ZN10QTableView15setColumnHiddenEib setColumnHidden(int, _Bool)
extern "C"
void
C_ZN10QTableView15setColumnHiddenEib(void *qthis,
int arg1,
bool arg2) {
  ((QTableView*)qthis)->setColumnHidden(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 122, column 10>
//   // proto:  void QTableView::hideRow(int row);
// _ZN10QTableView7hideRowEi hideRow(int)
extern "C"
void
C_ZN10QTableView7hideRowEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->hideRow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 129, column 10>
//   // proto:  void QTableView::resizeColumnsToContents();
// _ZN10QTableView23resizeColumnsToContentsEv resizeColumnsToContents()
extern "C"
void
C_ZN10QTableView23resizeColumnsToContentsEv(void *qthis) {
  ((QTableView*)qthis)->resizeColumnsToContents();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 103, column 10>
//   // proto:  bool QTableView::wordWrap();
// _ZNK10QTableView8wordWrapEv wordWrap()
extern "C"
bool
C_ZNK10QTableView8wordWrapEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->wordWrap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 131, column 10>
//   // proto:  void QTableView::setShowGrid(bool show);
// _ZN10QTableView11setShowGridEb setShowGrid(_Bool)
extern "C"
void
C_ZN10QTableView11setShowGridEb(void *qthis,
bool arg1) {
  ((QTableView*)qthis)->setShowGrid(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 91, column 10>
//   // proto:  bool QTableView::isColumnHidden(int column);
// _ZNK10QTableView14isColumnHiddenEi isColumnHidden(int)
extern "C"
bool
C_ZNK10QTableView14isColumnHiddenEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->isColumnHidden(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 120, column 10>
//   // proto:  void QTableView::selectRow(int row);
// _ZN10QTableView9selectRowEi selectRow(int)
extern "C"
void
C_ZN10QTableView9selectRowEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->selectRow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 55, column 5>
//   // proto:  const QMetaObject * QTableView::metaObject();
// _ZNK10QTableView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QTableView10metaObjectEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 106, column 10>
//   // proto:  bool QTableView::isCornerButtonEnabled();
// _ZNK10QTableView21isCornerButtonEnabledEv isCornerButtonEnabled()
extern "C"
bool
C_ZNK10QTableView21isCornerButtonEnabledEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->isCornerButtonEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 121, column 10>
//   // proto:  void QTableView::selectColumn(int column);
// _ZN10QTableView12selectColumnEi selectColumn(int)
extern "C"
void
C_ZN10QTableView12selectColumnEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->selectColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 117, column 10>
//   // proto:  void QTableView::sortByColumn(int column, Qt::SortOrder order);
// _ZN10QTableView12sortByColumnEiN2Qt9SortOrderE sortByColumn(int, Qt::SortOrder)
extern "C"
void
C_ZN10QTableView12sortByColumnEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QTableView*)qthis)->sortByColumn(arg1,
*((Qt::SortOrder*)arg2));
}
//   // proto:  void QTableView::~QTableView();
extern "C"
void C_ZN10QTableViewD2Ev(void *qthis) {
  delete (QTableView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 128, column 10>
//   // proto:  void QTableView::resizeColumnToContents(int column);
// _ZN10QTableView22resizeColumnToContentsEi resizeColumnToContents(int)
extern "C"
void
C_ZN10QTableView22resizeColumnToContentsEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->resizeColumnToContents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 63, column 14>
//   // proto:  void QTableView::QTableView(QWidget * parent);
extern "C"
QTableView*
C_ZN10QTableViewC2EP7QWidget(QWidget * arg1) {
  auto ret = new QTableView(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 130, column 10>
//   // proto:  void QTableView::sortByColumn(int column);
// _ZN10QTableView12sortByColumnEi sortByColumn(int)
extern "C"
void
C_ZN10QTableView12sortByColumnEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->sortByColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 114, column 9>
//   // proto:  int QTableView::columnSpan(int row, int column);
// _ZNK10QTableView10columnSpanEii columnSpan(int, int)
extern "C"
int
C_ZNK10QTableView10columnSpanEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QTableView*)qthis)->columnSpan(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 86, column 9>
//   // proto:  int QTableView::columnWidth(int column);
// _ZNK10QTableView11columnWidthEi columnWidth(int)
extern "C"
int
C_ZNK10QTableView11columnWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->columnWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 82, column 9>
//   // proto:  int QTableView::columnViewportPosition(int column);
// _ZNK10QTableView22columnViewportPositionEi columnViewportPosition(int)
extern "C"
int
C_ZNK10QTableView22columnViewportPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->columnViewportPosition(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 80, column 9>
//   // proto:  int QTableView::rowHeight(int row);
// _ZNK10QTableView9rowHeightEi rowHeight(int)
extern "C"
int
C_ZNK10QTableView9rowHeightEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->rowHeight(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 77, column 9>
//   // proto:  int QTableView::rowAt(int y);
// _ZNK10QTableView5rowAtEi rowAt(int)
extern "C"
int
C_ZNK10QTableView5rowAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QTableView*)qthis)->rowAt(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 113, column 9>
//   // proto:  int QTableView::rowSpan(int row, int column);
// _ZNK10QTableView7rowSpanEii rowSpan(int, int)
extern "C"
int
C_ZNK10QTableView7rowSpanEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QTableView*)qthis)->rowSpan(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 105, column 10>
//   // proto:  void QTableView::setCornerButtonEnabled(bool enable);
// _ZN10QTableView22setCornerButtonEnabledEb setCornerButtonEnabled(_Bool)
extern "C"
void
C_ZN10QTableView22setCornerButtonEnabledEb(void *qthis,
bool arg1) {
  ((QTableView*)qthis)->setCornerButtonEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 108, column 11>
//   // proto:  QRect QTableView::visualRect(const QModelIndex & index);
// _ZNK10QTableView10visualRectERK11QModelIndex visualRect(const class QModelIndex &)
extern "C"
QRect*
C_ZNK10QTableView10visualRectERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QTableView*)qthis)->visualRect(*((const QModelIndex*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 110, column 17>
//   // proto:  QModelIndex QTableView::indexAt(const QPoint & p);
// _ZNK10QTableView7indexAtERK6QPoint indexAt(const class QPoint &)
extern "C"
QModelIndex*
C_ZNK10QTableView7indexAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QTableView*)qthis)->indexAt(*((const QPoint*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 71, column 18>
//   // proto:  QHeaderView * QTableView::horizontalHeader();
// _ZNK10QTableView16horizontalHeaderEv horizontalHeader()
extern "C"
void*
C_ZNK10QTableView16horizontalHeaderEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->horizontalHeader();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 66, column 10>
//   // proto:  void QTableView::setModel(QAbstractItemModel * model);
// _ZN10QTableView8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN10QTableView8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QTableView*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 95, column 10>
//   // proto:  bool QTableView::isSortingEnabled();
// _ZNK10QTableView16isSortingEnabledEv isSortingEnabled()
extern "C"
bool
C_ZNK10QTableView16isSortingEnabledEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->isSortingEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 115, column 10>
//   // proto:  void QTableView::clearSpans();
// _ZN10QTableView10clearSpansEv clearSpans()
extern "C"
void
C_ZN10QTableView10clearSpansEv(void *qthis) {
  ((QTableView*)qthis)->clearSpans();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 74, column 10>
//   // proto:  void QTableView::setVerticalHeader(QHeaderView * header);
// _ZN10QTableView17setVerticalHeaderEP11QHeaderView setVerticalHeader(class QHeaderView *)
extern "C"
void
C_ZN10QTableView17setVerticalHeaderEP11QHeaderView(void *qthis,
QHeaderView * arg1) {
  ((QTableView*)qthis)->setVerticalHeader(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 97, column 10>
//   // proto:  bool QTableView::showGrid();
// _ZNK10QTableView8showGridEv showGrid()
extern "C"
bool
C_ZNK10QTableView8showGridEv(void *qthis) {
  auto ret =
  ((QTableView*)qthis)->showGrid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 124, column 10>
//   // proto:  void QTableView::showRow(int row);
// _ZN10QTableView7showRowEi showRow(int)
extern "C"
void
C_ZN10QTableView7showRowEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->showRow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtableview.h', line 123, column 10>
//   // proto:  void QTableView::hideColumn(int column);
// _ZN10QTableView10hideColumnEi hideColumn(int)
extern "C"
void
C_ZN10QTableView10hideColumnEi(void *qthis,
int arg1) {
  ((QTableView*)qthis)->hideColumn(arg1);
}
// <= ext block end

// body block begin =>
// QTableView_SlotProxy here
class QTableView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTableView_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qtableview.moc"

extern "C" {
  QTableView_SlotProxy* QTableView_SlotProxy_new()
  {
    return new QTableView_SlotProxy();
  }
};

// <= body block end

