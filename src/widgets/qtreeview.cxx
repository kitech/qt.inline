// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qtreeview.h
// dst-file: /src/widgets/qtreeview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtreeview.h>


#include <qrect.h>
#include <qabstractitemmodel.h>
// <= header block end

// main block begin =>
void __keep_qtreeview_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTreeView_Class_Size()
{
  return sizeof(QTreeView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 77, column 10>
//   // proto:  void QTreeView::setHeader(QHeaderView * header);
// _ZN9QTreeView9setHeaderEP11QHeaderView setHeader(class QHeaderView *)
extern "C"
void
C_ZN9QTreeView9setHeaderEP11QHeaderView(void *qthis,
QHeaderView * arg1) {
  ((QTreeView*)qthis)->setHeader(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 122, column 10>
//   // proto:  bool QTreeView::isAnimated();
// _ZNK9QTreeView10isAnimatedEv isAnimated()
extern "C"
bool
C_ZNK9QTreeView10isAnimatedEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->isAnimated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 115, column 10>
//   // proto:  bool QTreeView::isExpanded(const QModelIndex & index);
// _ZNK9QTreeView10isExpandedERK11QModelIndex isExpanded(const class QModelIndex &)
extern "C"
bool
C_ZNK9QTreeView10isExpandedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QTreeView*)qthis)->isExpanded(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 104, column 10>
//   // proto:  void QTreeView::setColumnHidden(int column, bool hide);
// _ZN9QTreeView15setColumnHiddenEib setColumnHidden(int, _Bool)
extern "C"
void
C_ZN9QTreeView15setColumnHiddenEib(void *qthis,
int arg1,
bool arg2) {
  ((QTreeView*)qthis)->setColumnHidden(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 136, column 10>
//   // proto:  void QTreeView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint);
// _ZN9QTreeView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void
C_ZN9QTreeView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *qthis,
const QModelIndex* arg1,
QAbstractItemView::ScrollHint arg2) {
  ((QTreeView*)qthis)->scrollTo(*((const QModelIndex*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 83, column 10>
//   // proto:  void QTreeView::setIndentation(int i);
// _ZN9QTreeView14setIndentationEi setIndentation(int)
extern "C"
void
C_ZN9QTreeView14setIndentationEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->setIndentation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 55, column 5>
//   // proto:  const QMetaObject * QTreeView::metaObject();
// _ZNK9QTreeView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QTreeView10metaObjectEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 142, column 10>
//   // proto:  void QTreeView::reset();
// _ZN9QTreeView5resetEv reset()
extern "C"
void
C_ZN9QTreeView5resetEv(void *qthis) {
  ((QTreeView*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 96, column 10>
//   // proto:  void QTreeView::setExpandsOnDoubleClick(bool enable);
// _ZN9QTreeView23setExpandsOnDoubleClickEb setExpandsOnDoubleClick(_Bool)
extern "C"
void
C_ZN9QTreeView23setExpandsOnDoubleClickEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setExpandsOnDoubleClick(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 113, column 10>
//   // proto:  void QTreeView::setFirstColumnSpanned(int row, const QModelIndex & parent, bool span);
// _ZN9QTreeView21setFirstColumnSpannedEiRK11QModelIndexb setFirstColumnSpanned(int, const class QModelIndex &, _Bool)
extern "C"
void
C_ZN9QTreeView21setFirstColumnSpannedEiRK11QModelIndexb(void *qthis,
int arg1,
const QModelIndex* arg2,
bool arg3) {
  ((QTreeView*)qthis)->setFirstColumnSpanned(arg1,
*((const QModelIndex*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 159, column 10>
//   // proto:  void QTreeView::sortByColumn(int column);
// _ZN9QTreeView12sortByColumnEi sortByColumn(int)
extern "C"
void
C_ZN9QTreeView12sortByColumnEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->sortByColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 110, column 10>
//   // proto:  void QTreeView::setRowHidden(int row, const QModelIndex & parent, bool hide);
// _ZN9QTreeView12setRowHiddenEiRK11QModelIndexb setRowHidden(int, const class QModelIndex &, _Bool)
extern "C"
void
C_ZN9QTreeView12setRowHiddenEiRK11QModelIndexb(void *qthis,
int arg1,
const QModelIndex* arg2,
bool arg3) {
  ((QTreeView*)qthis)->setRowHidden(arg1,
*((const QModelIndex*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 156, column 10>
//   // proto:  void QTreeView::expand(const QModelIndex & index);
// _ZN9QTreeView6expandERK11QModelIndex expand(const class QModelIndex &)
extern "C"
void
C_ZN9QTreeView6expandERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QTreeView*)qthis)->expand(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 79, column 9>
//   // proto:  int QTreeView::autoExpandDelay();
// _ZNK9QTreeView15autoExpandDelayEv autoExpandDelay()
extern "C"
int
C_ZNK9QTreeView15autoExpandDelayEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->autoExpandDelay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 69, column 14>
//   // proto:  void QTreeView::QTreeView(QWidget * parent);
extern "C"
QTreeView*
C_ZN9QTreeViewC2EP7QWidget(QWidget * arg1) {
  auto ret = new QTreeView(arg1);
  return ret;
}
//   // proto:  void QTreeView::~QTreeView();
extern "C"
void C_ZN9QTreeViewD2Ev(void *qthis) {
  delete (QTreeView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 82, column 9>
//   // proto:  int QTreeView::indentation();
// _ZNK9QTreeView11indentationEv indentation()
extern "C"
int
C_ZNK9QTreeView11indentationEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->indentation();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 98, column 9>
//   // proto:  int QTreeView::columnViewportPosition(int column);
// _ZNK9QTreeView22columnViewportPositionEi columnViewportPosition(int)
extern "C"
int
C_ZNK9QTreeView22columnViewportPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QTreeView*)qthis)->columnViewportPosition(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 95, column 10>
//   // proto:  bool QTreeView::expandsOnDoubleClick();
// _ZNK9QTreeView20expandsOnDoubleClickEv expandsOnDoubleClick()
extern "C"
bool
C_ZNK9QTreeView20expandsOnDoubleClickEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->expandsOnDoubleClick();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 119, column 10>
//   // proto:  bool QTreeView::isSortingEnabled();
// _ZNK9QTreeView16isSortingEnabledEv isSortingEnabled()
extern "C"
bool
C_ZNK9QTreeView16isSortingEnabledEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->isSortingEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 155, column 10>
//   // proto:  void QTreeView::showColumn(int column);
// _ZN9QTreeView10showColumnEi showColumn(int)
extern "C"
void
C_ZN9QTreeView10showColumnEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->showColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 135, column 11>
//   // proto:  QRect QTreeView::visualRect(const QModelIndex & index);
// _ZNK9QTreeView10visualRectERK11QModelIndex visualRect(const class QModelIndex &)
extern "C"
QRect*
C_ZNK9QTreeView10visualRectERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QTreeView*)qthis)->visualRect(*((const QModelIndex*)arg1));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 157, column 10>
//   // proto:  void QTreeView::collapse(const QModelIndex & index);
// _ZN9QTreeView8collapseERK11QModelIndex collapse(const class QModelIndex &)
extern "C"
void
C_ZN9QTreeView8collapseERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QTreeView*)qthis)->collapse(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 127, column 10>
//   // proto:  void QTreeView::setWordWrap(bool on);
// _ZN9QTreeView11setWordWrapEb setWordWrap(_Bool)
extern "C"
void
C_ZN9QTreeView11setWordWrapEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setWordWrap(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 138, column 17>
//   // proto:  QModelIndex QTreeView::indexAbove(const QModelIndex & index);
// _ZNK9QTreeView10indexAboveERK11QModelIndex indexAbove(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK9QTreeView10indexAboveERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QTreeView*)qthis)->indexAbove(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 86, column 10>
//   // proto:  bool QTreeView::rootIsDecorated();
// _ZNK9QTreeView15rootIsDecoratedEv rootIsDecorated()
extern "C"
bool
C_ZNK9QTreeView15rootIsDecoratedEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->rootIsDecorated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 161, column 10>
//   // proto:  void QTreeView::collapseAll();
// _ZN9QTreeView11collapseAllEv collapseAll()
extern "C"
void
C_ZN9QTreeView11collapseAllEv(void *qthis) {
  ((QTreeView*)qthis)->collapseAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 107, column 10>
//   // proto:  void QTreeView::setHeaderHidden(bool hide);
// _ZN9QTreeView15setHeaderHiddenEb setHeaderHidden(_Bool)
extern "C"
void
C_ZN9QTreeView15setHeaderHiddenEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setHeaderHidden(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 125, column 10>
//   // proto:  bool QTreeView::allColumnsShowFocus();
// _ZNK9QTreeView19allColumnsShowFocusEv allColumnsShowFocus()
extern "C"
bool
C_ZNK9QTreeView19allColumnsShowFocusEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->allColumnsShowFocus();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 99, column 9>
//   // proto:  int QTreeView::columnWidth(int column);
// _ZNK9QTreeView11columnWidthEi columnWidth(int)
extern "C"
int
C_ZNK9QTreeView11columnWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QTreeView*)qthis)->columnWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 158, column 10>
//   // proto:  void QTreeView::resizeColumnToContents(int column);
// _ZN9QTreeView22resizeColumnToContentsEi resizeColumnToContents(int)
extern "C"
void
C_ZN9QTreeView22resizeColumnToContentsEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->resizeColumnToContents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 146, column 10>
//   // proto:  void QTreeView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles);
// _ZN9QTreeView11dataChangedERK11QModelIndexS2_RK7QVectorIiE dataChanged(const class QModelIndex &, const class QModelIndex &, const QVector<int> &)
extern "C"
void
C_ZN9QTreeView11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *qthis,
const QModelIndex* arg1,
const QModelIndex* arg2,
const QVector<int>* arg3) {
  ((QTreeView*)qthis)->dataChanged(*((const QModelIndex*)arg1),
*((const QModelIndex*)arg2),
*((const QVector<int>*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 80, column 10>
//   // proto:  void QTreeView::setAutoExpandDelay(int delay);
// _ZN9QTreeView18setAutoExpandDelayEi setAutoExpandDelay(int)
extern "C"
void
C_ZN9QTreeView18setAutoExpandDelayEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->setAutoExpandDelay(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 124, column 10>
//   // proto:  void QTreeView::setAllColumnsShowFocus(bool enable);
// _ZN9QTreeView22setAllColumnsShowFocusEb setAllColumnsShowFocus(_Bool)
extern "C"
void
C_ZN9QTreeView22setAllColumnsShowFocusEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setAllColumnsShowFocus(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 112, column 10>
//   // proto:  bool QTreeView::isFirstColumnSpanned(int row, const QModelIndex & parent);
// _ZNK9QTreeView20isFirstColumnSpannedEiRK11QModelIndex isFirstColumnSpanned(int, const class QModelIndex &)
extern "C"
bool
C_ZNK9QTreeView20isFirstColumnSpannedEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QTreeView*)qthis)->isFirstColumnSpanned(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 154, column 10>
//   // proto:  void QTreeView::hideColumn(int column);
// _ZN9QTreeView10hideColumnEi hideColumn(int)
extern "C"
void
C_ZN9QTreeView10hideColumnEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->hideColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 131, column 9>
//   // proto:  int QTreeView::treePosition();
// _ZNK9QTreeView12treePositionEv treePosition()
extern "C"
int
C_ZNK9QTreeView12treePositionEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->treePosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 116, column 10>
//   // proto:  void QTreeView::setExpanded(const QModelIndex & index, bool expand);
// _ZN9QTreeView11setExpandedERK11QModelIndexb setExpanded(const class QModelIndex &, _Bool)
extern "C"
void
C_ZN9QTreeView11setExpandedERK11QModelIndexb(void *qthis,
const QModelIndex* arg1,
bool arg2) {
  ((QTreeView*)qthis)->setExpanded(*((const QModelIndex*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 84, column 10>
//   // proto:  void QTreeView::resetIndentation();
// _ZN9QTreeView16resetIndentationEv resetIndentation()
extern "C"
void
C_ZN9QTreeView16resetIndentationEv(void *qthis) {
  ((QTreeView*)qthis)->resetIndentation();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 109, column 10>
//   // proto:  bool QTreeView::isRowHidden(int row, const QModelIndex & parent);
// _ZNK9QTreeView11isRowHiddenEiRK11QModelIndex isRowHidden(int, const class QModelIndex &)
extern "C"
bool
C_ZNK9QTreeView11isRowHiddenEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QTreeView*)qthis)->isRowHidden(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 151, column 10>
//   // proto:  void QTreeView::collapsed(const QModelIndex & index);
// _ZN9QTreeView9collapsedERK11QModelIndex collapsed(const class QModelIndex &)
extern "C"
void
C_ZN9QTreeView9collapsedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QTreeView*)qthis)->collapsed(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 147, column 10>
//   // proto:  void QTreeView::selectAll();
// _ZN9QTreeView9selectAllEv selectAll()
extern "C"
void
C_ZN9QTreeView9selectAllEv(void *qthis) {
  ((QTreeView*)qthis)->selectAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 128, column 10>
//   // proto:  bool QTreeView::wordWrap();
// _ZNK9QTreeView8wordWrapEv wordWrap()
extern "C"
bool
C_ZNK9QTreeView8wordWrapEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->wordWrap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 141, column 10>
//   // proto:  void QTreeView::doItemsLayout();
// _ZN9QTreeView13doItemsLayoutEv doItemsLayout()
extern "C"
void
C_ZN9QTreeView13doItemsLayoutEv(void *qthis) {
  ((QTreeView*)qthis)->doItemsLayout();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 130, column 10>
//   // proto:  void QTreeView::setTreePosition(int logicalIndex);
// _ZN9QTreeView15setTreePositionEi setTreePosition(int)
extern "C"
void
C_ZN9QTreeView15setTreePositionEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->setTreePosition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 133, column 10>
//   // proto:  void QTreeView::keyboardSearch(const QString & search);
// _ZN9QTreeView14keyboardSearchERK7QString keyboardSearch(const class QString &)
extern "C"
void
C_ZN9QTreeView14keyboardSearchERK7QString(void *qthis,
const QString* arg1) {
  ((QTreeView*)qthis)->keyboardSearch(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 73, column 10>
//   // proto:  void QTreeView::setRootIndex(const QModelIndex & index);
// _ZN9QTreeView12setRootIndexERK11QModelIndex setRootIndex(const class QModelIndex &)
extern "C"
void
C_ZN9QTreeView12setRootIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QTreeView*)qthis)->setRootIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 93, column 10>
//   // proto:  void QTreeView::setItemsExpandable(bool enable);
// _ZN9QTreeView18setItemsExpandableEb setItemsExpandable(_Bool)
extern "C"
void
C_ZN9QTreeView18setItemsExpandableEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setItemsExpandable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 74, column 10>
//   // proto:  void QTreeView::setSelectionModel(QItemSelectionModel * selectionModel);
// _ZN9QTreeView17setSelectionModelEP19QItemSelectionModel setSelectionModel(class QItemSelectionModel *)
extern "C"
void
C_ZN9QTreeView17setSelectionModelEP19QItemSelectionModel(void *qthis,
QItemSelectionModel * arg1) {
  ((QTreeView*)qthis)->setSelectionModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 76, column 18>
//   // proto:  QHeaderView * QTreeView::header();
// _ZNK9QTreeView6headerEv header()
extern "C"
void*
C_ZNK9QTreeView6headerEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->header();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 121, column 10>
//   // proto:  void QTreeView::setAnimated(bool enable);
// _ZN9QTreeView11setAnimatedEb setAnimated(_Bool)
extern "C"
void
C_ZN9QTreeView11setAnimatedEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setAnimated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 118, column 10>
//   // proto:  void QTreeView::setSortingEnabled(bool enable);
// _ZN9QTreeView17setSortingEnabledEb setSortingEnabled(_Bool)
extern "C"
void
C_ZN9QTreeView17setSortingEnabledEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setSortingEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 144, column 10>
//   // proto:  void QTreeView::sortByColumn(int column, Qt::SortOrder order);
// _ZN9QTreeView12sortByColumnEiN2Qt9SortOrderE sortByColumn(int, Qt::SortOrder)
extern "C"
void
C_ZN9QTreeView12sortByColumnEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QTreeView*)qthis)->sortByColumn(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 92, column 10>
//   // proto:  bool QTreeView::itemsExpandable();
// _ZNK9QTreeView15itemsExpandableEv itemsExpandable()
extern "C"
bool
C_ZNK9QTreeView15itemsExpandableEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->itemsExpandable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 87, column 10>
//   // proto:  void QTreeView::setRootIsDecorated(bool show);
// _ZN9QTreeView18setRootIsDecoratedEb setRootIsDecorated(_Bool)
extern "C"
void
C_ZN9QTreeView18setRootIsDecoratedEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setRootIsDecorated(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 150, column 10>
//   // proto:  void QTreeView::expanded(const QModelIndex & index);
// _ZN9QTreeView8expandedERK11QModelIndex expanded(const class QModelIndex &)
extern "C"
void
C_ZN9QTreeView8expandedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QTreeView*)qthis)->expanded(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 106, column 10>
//   // proto:  bool QTreeView::isHeaderHidden();
// _ZNK9QTreeView14isHeaderHiddenEv isHeaderHidden()
extern "C"
bool
C_ZNK9QTreeView14isHeaderHiddenEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->isHeaderHidden();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 101, column 9>
//   // proto:  int QTreeView::columnAt(int x);
// _ZNK9QTreeView8columnAtEi columnAt(int)
extern "C"
int
C_ZNK9QTreeView8columnAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QTreeView*)qthis)->columnAt(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 72, column 10>
//   // proto:  void QTreeView::setModel(QAbstractItemModel * model);
// _ZN9QTreeView8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN9QTreeView8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QTreeView*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 103, column 10>
//   // proto:  bool QTreeView::isColumnHidden(int column);
// _ZNK9QTreeView14isColumnHiddenEi isColumnHidden(int)
extern "C"
bool
C_ZNK9QTreeView14isColumnHiddenEi(void *qthis,
int arg1) {
  auto ret =
  ((QTreeView*)qthis)->isColumnHidden(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 89, column 10>
//   // proto:  bool QTreeView::uniformRowHeights();
// _ZNK9QTreeView17uniformRowHeightsEv uniformRowHeights()
extern "C"
bool
C_ZNK9QTreeView17uniformRowHeightsEv(void *qthis) {
  auto ret =
  ((QTreeView*)qthis)->uniformRowHeights();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 90, column 10>
//   // proto:  void QTreeView::setUniformRowHeights(bool uniform);
// _ZN9QTreeView20setUniformRowHeightsEb setUniformRowHeights(_Bool)
extern "C"
void
C_ZN9QTreeView20setUniformRowHeightsEb(void *qthis,
bool arg1) {
  ((QTreeView*)qthis)->setUniformRowHeights(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 162, column 10>
//   // proto:  void QTreeView::expandToDepth(int depth);
// _ZN9QTreeView13expandToDepthEi expandToDepth(int)
extern "C"
void
C_ZN9QTreeView13expandToDepthEi(void *qthis,
int arg1) {
  ((QTreeView*)qthis)->expandToDepth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 139, column 17>
//   // proto:  QModelIndex QTreeView::indexBelow(const QModelIndex & index);
// _ZNK9QTreeView10indexBelowERK11QModelIndex indexBelow(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK9QTreeView10indexBelowERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QTreeView*)qthis)->indexBelow(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 160, column 10>
//   // proto:  void QTreeView::expandAll();
// _ZN9QTreeView9expandAllEv expandAll()
extern "C"
void
C_ZN9QTreeView9expandAllEv(void *qthis) {
  ((QTreeView*)qthis)->expandAll();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 137, column 17>
//   // proto:  QModelIndex QTreeView::indexAt(const QPoint & p);
// _ZNK9QTreeView7indexAtERK6QPoint indexAt(const class QPoint &)
extern "C"
QModelIndex*
C_ZNK9QTreeView7indexAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QTreeView*)qthis)->indexAt(*((const QPoint*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreeview.h', line 100, column 10>
//   // proto:  void QTreeView::setColumnWidth(int column, int width);
// _ZN9QTreeView14setColumnWidthEii setColumnWidth(int, int)
extern "C"
void
C_ZN9QTreeView14setColumnWidthEii(void *qthis,
int arg1,
int arg2) {
  ((QTreeView*)qthis)->setColumnWidth(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QTreeView_SlotProxy here
class QTreeView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTreeView_SlotProxy():QObject(){}

public slots:
  // collapsed(const class QModelIndex &)
  void slot_proxy_func__ZN9QTreeView9collapsedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN9QTreeView9collapsedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // expanded(const class QModelIndex &)
  void slot_proxy_func__ZN9QTreeView8expandedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN9QTreeView8expandedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtreeview.moc"

extern "C" {
  QTreeView_SlotProxy* QTreeView_SlotProxy_new()
  {
    return new QTreeView_SlotProxy();
  }
};

void QTreeView_SlotProxy::slot_proxy_func__ZN9QTreeView9collapsedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN9QTreeView9collapsedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN9QTreeView9collapsedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeView_SlotProxy_connect__ZN9QTreeView9collapsedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTreeView9collapsedERK11QModelIndex = (decltype(that->slot_func__ZN9QTreeView9collapsedERK11QModelIndex))ffifptr;
  QObject::connect((QTreeView*)sender, SIGNAL(collapsed(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN9QTreeView9collapsedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QTreeView_SlotProxy_disconnect__ZN9QTreeView9collapsedERK11QModelIndex(QTreeView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeView_SlotProxy::slot_proxy_func__ZN9QTreeView8expandedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN9QTreeView8expandedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN9QTreeView8expandedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeView_SlotProxy_connect__ZN9QTreeView8expandedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTreeView8expandedERK11QModelIndex = (decltype(that->slot_func__ZN9QTreeView8expandedERK11QModelIndex))ffifptr;
  QObject::connect((QTreeView*)sender, SIGNAL(expanded(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN9QTreeView8expandedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QTreeView_SlotProxy_disconnect__ZN9QTreeView8expandedERK11QModelIndex(QTreeView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

