// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qsortfilterproxymodel.h
// dst-file: /src/core/qsortfilterproxymodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsortfilterproxymodel.h>


#include <qabstractitemmodel.h>
#include <qnamespace.h>
#include <qsize.h>
#include <qvariant.h>
#include <qitemselectionmodel.h>
#include <qstringlist.h>
#include <qregexp.h>
// <= header block end

// main block begin =>
void __keep_qsortfilterproxymodel_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSortFilterProxyModel_Class_Size()
{
  return sizeof(QSortFilterProxyModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 105, column 10>
//   // proto:  void QSortFilterProxyModel::setFilterRegExp(const QString & pattern);
// _ZN21QSortFilterProxyModel15setFilterRegExpERK7QString setFilterRegExp(const class QString &)
extern "C"
void
C_ZN21QSortFilterProxyModel15setFilterRegExpERK7QString(void *qthis,
const QString* arg1) {
  ((QSortFilterProxyModel*)qthis)->setFilterRegExp(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 126, column 9>
//   // proto:  int QSortFilterProxyModel::rowCount(const QModelIndex & parent);
// _ZNK21QSortFilterProxyModel8rowCountERK11QModelIndex rowCount(const class QModelIndex &)
extern "C"
int
C_ZNK21QSortFilterProxyModel8rowCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->rowCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 124, column 17>
//   // proto:  QModelIndex QSortFilterProxyModel::sibling(int row, int column, const QModelIndex & idx);
// _ZNK21QSortFilterProxyModel7siblingEiiRK11QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK21QSortFilterProxyModel7siblingEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->sibling(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 83, column 25>
//   // proto:  Qt::CaseSensitivity QSortFilterProxyModel::filterCaseSensitivity();
// _ZNK21QSortFilterProxyModel21filterCaseSensitivityEv filterCaseSensitivity()
extern "C"
Qt::CaseSensitivity
C_ZNK21QSortFilterProxyModel21filterCaseSensitivityEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->filterCaseSensitivity();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 155, column 11>
//   // proto:  QSize QSortFilterProxyModel::span(const QModelIndex & index);
// _ZNK21QSortFilterProxyModel4spanERK11QModelIndex span(const class QModelIndex &)
extern "C"
QSize*
C_ZNK21QSortFilterProxyModel4spanERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->span(*((const QModelIndex*)arg1));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 72, column 17>
//   // proto:  QModelIndex QSortFilterProxyModel::mapFromSource(const QModelIndex & sourceIndex);
// _ZNK21QSortFilterProxyModel13mapFromSourceERK11QModelIndex mapFromSource(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK21QSortFilterProxyModel13mapFromSourceERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->mapFromSource(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 84, column 10>
//   // proto:  void QSortFilterProxyModel::setFilterCaseSensitivity(Qt::CaseSensitivity cs);
// _ZN21QSortFilterProxyModel24setFilterCaseSensitivityEN2Qt15CaseSensitivityE setFilterCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void
C_ZN21QSortFilterProxyModel24setFilterCaseSensitivityEN2Qt15CaseSensitivityE(void *qthis,
Qt::CaseSensitivity* arg1) {
  ((QSortFilterProxyModel*)qthis)->setFilterCaseSensitivity(*((Qt::CaseSensitivity*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 106, column 10>
//   // proto:  void QSortFilterProxyModel::setFilterWildcard(const QString & pattern);
// _ZN21QSortFilterProxyModel17setFilterWildcardERK7QString setFilterWildcard(const class QString &)
extern "C"
void
C_ZN21QSortFilterProxyModel17setFilterWildcardERK7QString(void *qthis,
const QString* arg1) {
  ((QSortFilterProxyModel*)qthis)->setFilterWildcard(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 128, column 10>
//   // proto:  bool QSortFilterProxyModel::hasChildren(const QModelIndex & parent);
// _ZNK21QSortFilterProxyModel11hasChildrenERK11QModelIndex hasChildren(const class QModelIndex &)
extern "C"
bool
C_ZNK21QSortFilterProxyModel11hasChildrenERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->hasChildren(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 107, column 10>
//   // proto:  void QSortFilterProxyModel::setFilterFixedString(const QString & pattern);
// _ZN21QSortFilterProxyModel20setFilterFixedStringERK7QString setFilterFixedString(const class QString &)
extern "C"
void
C_ZN21QSortFilterProxyModel20setFilterFixedStringERK7QString(void *qthis,
const QString* arg1) {
  ((QSortFilterProxyModel*)qthis)->setFilterFixedString(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 131, column 10>
//   // proto:  bool QSortFilterProxyModel::setData(const QModelIndex & index, const QVariant & value, int role);
// _ZN21QSortFilterProxyModel7setDataERK11QModelIndexRK8QVarianti setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool
C_ZN21QSortFilterProxyModel7setDataERK11QModelIndexRK8QVarianti(void *qthis,
const QModelIndex* arg1,
const QVariant* arg2,
int arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->setData(*((const QModelIndex*)arg1),
*((const QVariant*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 99, column 10>
//   // proto:  void QSortFilterProxyModel::setSortRole(int role);
// _ZN21QSortFilterProxyModel11setSortRoleEi setSortRole(int)
extern "C"
void
C_ZN21QSortFilterProxyModel11setSortRoleEi(void *qthis,
int arg1) {
  ((QSortFilterProxyModel*)qthis)->setSortRole(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 93, column 19>
//   // proto:  Qt::SortOrder QSortFilterProxyModel::sortOrder();
// _ZNK21QSortFilterProxyModel9sortOrderEv sortOrder()
extern "C"
Qt::SortOrder
C_ZNK21QSortFilterProxyModel9sortOrderEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->sortOrder();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 130, column 14>
//   // proto:  QVariant QSortFilterProxyModel::data(const QModelIndex & index, int role);
// _ZNK21QSortFilterProxyModel4dataERK11QModelIndexi data(const class QModelIndex &, int)
extern "C"
QVariant*
C_ZNK21QSortFilterProxyModel4dataERK11QModelIndexi(void *qthis,
const QModelIndex* arg1,
int arg2) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->data(*((const QModelIndex*)arg1),
arg2);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 109, column 10>
//   // proto:  void QSortFilterProxyModel::invalidate();
// _ZN21QSortFilterProxyModel10invalidateEv invalidate()
extern "C"
void
C_ZN21QSortFilterProxyModel10invalidateEv(void *qthis) {
  ((QSortFilterProxyModel*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 92, column 9>
//   // proto:  int QSortFilterProxyModel::sortColumn();
// _ZNK21QSortFilterProxyModel10sortColumnEv sortColumn()
extern "C"
int
C_ZNK21QSortFilterProxyModel10sortColumnEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->sortColumn();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 133, column 14>
//   // proto:  QVariant QSortFilterProxyModel::headerData(int section, Qt::Orientation orientation, int role);
// _ZNK21QSortFilterProxyModel10headerDataEiN2Qt11OrientationEi headerData(int, Qt::Orientation, int)
extern "C"
QVariant*
C_ZNK21QSortFilterProxyModel10headerDataEiN2Qt11OrientationEi(void *qthis,
int arg1,
Qt::Orientation* arg2,
int arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->headerData(arg1,
*((Qt::Orientation*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 141, column 10>
//   // proto:  bool QSortFilterProxyModel::insertRows(int row, int count, const QModelIndex & parent);
// _ZN21QSortFilterProxyModel10insertRowsEiiRK11QModelIndex insertRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN21QSortFilterProxyModel10insertRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->insertRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 80, column 9>
//   // proto:  int QSortFilterProxyModel::filterKeyColumn();
// _ZNK21QSortFilterProxyModel15filterKeyColumnEv filterKeyColumn()
extern "C"
int
C_ZNK21QSortFilterProxyModel15filterKeyColumnEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->filterKeyColumn();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 147, column 10>
//   // proto:  bool QSortFilterProxyModel::canFetchMore(const QModelIndex & parent);
// _ZNK21QSortFilterProxyModel12canFetchMoreERK11QModelIndex canFetchMore(const class QModelIndex &)
extern "C"
bool
C_ZNK21QSortFilterProxyModel12canFetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->canFetchMore(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 89, column 10>
//   // proto:  bool QSortFilterProxyModel::isSortLocaleAware();
// _ZNK21QSortFilterProxyModel17isSortLocaleAwareEv isSortLocaleAware()
extern "C"
bool
C_ZNK21QSortFilterProxyModel17isSortLocaleAwareEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->isSortLocaleAware();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 146, column 10>
//   // proto:  void QSortFilterProxyModel::fetchMore(const QModelIndex & parent);
// _ZN21QSortFilterProxyModel9fetchMoreERK11QModelIndex fetchMore(const class QModelIndex &)
extern "C"
void
C_ZN21QSortFilterProxyModel9fetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QSortFilterProxyModel*)qthis)->fetchMore(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 75, column 20>
//   // proto:  QItemSelection QSortFilterProxyModel::mapSelectionFromSource(const QItemSelection & sourceSelection);
// _ZNK21QSortFilterProxyModel22mapSelectionFromSourceERK14QItemSelection mapSelectionFromSource(const class QItemSelection &)
extern "C"
QItemSelection*
C_ZNK21QSortFilterProxyModel22mapSelectionFromSourceERK14QItemSelection(void *qthis,
const QItemSelection* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->mapSelectionFromSource(*((const QItemSelection*)arg1));
  return new QItemSelection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 74, column 20>
//   // proto:  QItemSelection QSortFilterProxyModel::mapSelectionToSource(const QItemSelection & proxySelection);
// _ZNK21QSortFilterProxyModel20mapSelectionToSourceERK14QItemSelection mapSelectionToSource(const class QItemSelection &)
extern "C"
QItemSelection*
C_ZNK21QSortFilterProxyModel20mapSelectionToSourceERK14QItemSelection(void *qthis,
const QItemSelection* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->mapSelectionToSource(*((const QItemSelection*)arg1));
  return new QItemSelection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 158, column 17>
//   // proto:  QStringList QSortFilterProxyModel::mimeTypes();
// _ZNK21QSortFilterProxyModel9mimeTypesEv mimeTypes()
extern "C"
QStringList*
C_ZNK21QSortFilterProxyModel9mimeTypesEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->mimeTypes();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 150, column 17>
//   // proto:  QModelIndex QSortFilterProxyModel::buddy(const QModelIndex & index);
// _ZNK21QSortFilterProxyModel5buddyERK11QModelIndex buddy(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK21QSortFilterProxyModel5buddyERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->buddy(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 101, column 9>
//   // proto:  int QSortFilterProxyModel::filterRole();
// _ZNK21QSortFilterProxyModel10filterRoleEv filterRole()
extern "C"
int
C_ZNK21QSortFilterProxyModel10filterRoleEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->filterRole();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 108, column 10>
//   // proto:  void QSortFilterProxyModel::clear();
// _ZN21QSortFilterProxyModel5clearEv clear()
extern "C"
void
C_ZN21QSortFilterProxyModel5clearEv(void *qthis) {
  ((QSortFilterProxyModel*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 81, column 10>
//   // proto:  void QSortFilterProxyModel::setFilterKeyColumn(int column);
// _ZN21QSortFilterProxyModel18setFilterKeyColumnEi setFilterKeyColumn(int)
extern "C"
void
C_ZN21QSortFilterProxyModel18setFilterKeyColumnEi(void *qthis,
int arg1) {
  ((QSortFilterProxyModel*)qthis)->setFilterKeyColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 151, column 21>
//   // proto:  QModelIndexList QSortFilterProxyModel::match(const QModelIndex & start, int role, const QVariant & value, int hits, Qt::MatchFlags flags);
// _ZNK21QSortFilterProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE match(const class QModelIndex &, int, const class QVariant &, int, Qt::MatchFlags)
extern "C"
QList<QModelIndex>*
C_ZNK21QSortFilterProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *qthis,
const QModelIndex* arg1,
int arg2,
const QVariant* arg3,
int arg4,
Qt::MatchFlags* arg5) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->match(*((const QModelIndex*)arg1),
arg2,
*((const QVariant*)arg3),
arg4,
*((Qt::MatchFlags*)arg5));
  return new QList<QModelIndex>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 159, column 21>
//   // proto:  Qt::DropActions QSortFilterProxyModel::supportedDropActions();
// _ZNK21QSortFilterProxyModel20supportedDropActionsEv supportedDropActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK21QSortFilterProxyModel20supportedDropActionsEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->supportedDropActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 55, column 5>
//   // proto:  const QMetaObject * QSortFilterProxyModel::metaObject();
// _ZNK21QSortFilterProxyModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK21QSortFilterProxyModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 134, column 10>
//   // proto:  bool QSortFilterProxyModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role);
// _ZN21QSortFilterProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti setHeaderData(int, Qt::Orientation, const class QVariant &, int)
extern "C"
bool
C_ZN21QSortFilterProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *qthis,
int arg1,
Qt::Orientation* arg2,
const QVariant* arg3,
int arg4) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->setHeaderData(arg1,
*((Qt::Orientation*)arg2),
*((const QVariant*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 98, column 9>
//   // proto:  int QSortFilterProxyModel::sortRole();
// _ZNK21QSortFilterProxyModel8sortRoleEv sortRole()
extern "C"
int
C_ZNK21QSortFilterProxyModel8sortRoleEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->sortRole();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 86, column 25>
//   // proto:  Qt::CaseSensitivity QSortFilterProxyModel::sortCaseSensitivity();
// _ZNK21QSortFilterProxyModel19sortCaseSensitivityEv sortCaseSensitivity()
extern "C"
Qt::CaseSensitivity
C_ZNK21QSortFilterProxyModel19sortCaseSensitivityEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->sortCaseSensitivity();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 90, column 10>
//   // proto:  void QSortFilterProxyModel::setSortLocaleAware(bool on);
// _ZN21QSortFilterProxyModel18setSortLocaleAwareEb setSortLocaleAware(_Bool)
extern "C"
void
C_ZN21QSortFilterProxyModel18setSortLocaleAwareEb(void *qthis,
bool arg1) {
  ((QSortFilterProxyModel*)qthis)->setSortLocaleAware(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 71, column 17>
//   // proto:  QModelIndex QSortFilterProxyModel::mapToSource(const QModelIndex & proxyIndex);
// _ZNK21QSortFilterProxyModel11mapToSourceERK11QModelIndex mapToSource(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK21QSortFilterProxyModel11mapToSourceERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->mapToSource(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 69, column 10>
//   // proto:  void QSortFilterProxyModel::setSourceModel(QAbstractItemModel * sourceModel);
// _ZN21QSortFilterProxyModel14setSourceModelEP18QAbstractItemModel setSourceModel(class QAbstractItemModel *)
extern "C"
void
C_ZN21QSortFilterProxyModel14setSourceModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QSortFilterProxyModel*)qthis)->setSourceModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 87, column 10>
//   // proto:  void QSortFilterProxyModel::setSortCaseSensitivity(Qt::CaseSensitivity cs);
// _ZN21QSortFilterProxyModel22setSortCaseSensitivityEN2Qt15CaseSensitivityE setSortCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void
C_ZN21QSortFilterProxyModel22setSortCaseSensitivityEN2Qt15CaseSensitivityE(void *qthis,
Qt::CaseSensitivity* arg1) {
  ((QSortFilterProxyModel*)qthis)->setSortCaseSensitivity(*((Qt::CaseSensitivity*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 144, column 10>
//   // proto:  bool QSortFilterProxyModel::removeColumns(int column, int count, const QModelIndex & parent);
// _ZN21QSortFilterProxyModel13removeColumnsEiiRK11QModelIndex removeColumns(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN21QSortFilterProxyModel13removeColumnsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->removeColumns(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QSortFilterProxyModel::~QSortFilterProxyModel();
extern "C"
void C_ZN21QSortFilterProxyModelD2Ev(void *qthis) {
  delete (QSortFilterProxyModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 138, column 10>
//   // proto:  bool QSortFilterProxyModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN21QSortFilterProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN21QSortFilterProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 137, column 16>
//   // proto:  QMimeData * QSortFilterProxyModel::mimeData(const QModelIndexList & indexes);
// _ZNK21QSortFilterProxyModel8mimeDataERK5QListI11QModelIndexE mimeData(const QModelIndexList &)
extern "C"
void*
C_ZNK21QSortFilterProxyModel8mimeDataERK5QListI11QModelIndexE(void *qthis,
const QModelIndexList* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->mimeData(*((const QModelIndexList*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 95, column 10>
//   // proto:  bool QSortFilterProxyModel::dynamicSortFilter();
// _ZNK21QSortFilterProxyModel17dynamicSortFilterEv dynamicSortFilter()
extern "C"
bool
C_ZNK21QSortFilterProxyModel17dynamicSortFilterEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->dynamicSortFilter();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 148, column 19>
//   // proto:  Qt::ItemFlags QSortFilterProxyModel::flags(const QModelIndex & index);
// _ZNK21QSortFilterProxyModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK21QSortFilterProxyModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 142, column 10>
//   // proto:  bool QSortFilterProxyModel::insertColumns(int column, int count, const QModelIndex & parent);
// _ZN21QSortFilterProxyModel13insertColumnsEiiRK11QModelIndex insertColumns(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN21QSortFilterProxyModel13insertColumnsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->insertColumns(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 127, column 9>
//   // proto:  int QSortFilterProxyModel::columnCount(const QModelIndex & parent);
// _ZNK21QSortFilterProxyModel11columnCountERK11QModelIndex columnCount(const class QModelIndex &)
extern "C"
int
C_ZNK21QSortFilterProxyModel11columnCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->columnCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 156, column 10>
//   // proto:  void QSortFilterProxyModel::sort(int column, Qt::SortOrder order);
// _ZN21QSortFilterProxyModel4sortEiN2Qt9SortOrderE sort(int, Qt::SortOrder)
extern "C"
void
C_ZN21QSortFilterProxyModel4sortEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QSortFilterProxyModel*)qthis)->sort(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 78, column 10>
//   // proto:  void QSortFilterProxyModel::setFilterRegExp(const QRegExp & regExp);
// _ZN21QSortFilterProxyModel15setFilterRegExpERK7QRegExp setFilterRegExp(const class QRegExp &)
extern "C"
void
C_ZN21QSortFilterProxyModel15setFilterRegExpERK7QRegExp(void *qthis,
const QRegExp* arg1) {
  ((QSortFilterProxyModel*)qthis)->setFilterRegExp(*((const QRegExp*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 123, column 17>
//   // proto:  QModelIndex QSortFilterProxyModel::parent(const QModelIndex & child);
// _ZNK21QSortFilterProxyModel6parentERK11QModelIndex parent(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK21QSortFilterProxyModel6parentERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->parent(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 77, column 13>
//   // proto:  QRegExp QSortFilterProxyModel::filterRegExp();
// _ZNK21QSortFilterProxyModel12filterRegExpEv filterRegExp()
extern "C"
QRegExp*
C_ZNK21QSortFilterProxyModel12filterRegExpEv(void *qthis) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->filterRegExp();
  return new QRegExp(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 102, column 10>
//   // proto:  void QSortFilterProxyModel::setFilterRole(int role);
// _ZN21QSortFilterProxyModel13setFilterRoleEi setFilterRole(int)
extern "C"
void
C_ZN21QSortFilterProxyModel13setFilterRoleEi(void *qthis,
int arg1) {
  ((QSortFilterProxyModel*)qthis)->setFilterRole(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 66, column 14>
//   // proto:  void QSortFilterProxyModel::QSortFilterProxyModel(QObject * parent);
extern "C"
QSortFilterProxyModel*
C_ZN21QSortFilterProxyModelC2EP7QObject(QObject * arg1) {
  auto ret = new QSortFilterProxyModel(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 143, column 10>
//   // proto:  bool QSortFilterProxyModel::removeRows(int row, int count, const QModelIndex & parent);
// _ZN21QSortFilterProxyModel10removeRowsEiiRK11QModelIndex removeRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN21QSortFilterProxyModel10removeRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->removeRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 122, column 17>
//   // proto:  QModelIndex QSortFilterProxyModel::index(int row, int column, const QModelIndex & parent);
// _ZNK21QSortFilterProxyModel5indexEiiRK11QModelIndex index(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK21QSortFilterProxyModel5indexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QSortFilterProxyModel*)qthis)->index(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsortfilterproxymodel.h', line 96, column 10>
//   // proto:  void QSortFilterProxyModel::setDynamicSortFilter(bool enable);
// _ZN21QSortFilterProxyModel20setDynamicSortFilterEb setDynamicSortFilter(_Bool)
extern "C"
void
C_ZN21QSortFilterProxyModel20setDynamicSortFilterEb(void *qthis,
bool arg1) {
  ((QSortFilterProxyModel*)qthis)->setDynamicSortFilter(arg1);
}
// <= ext block end

// body block begin =>
// QSortFilterProxyModel_SlotProxy here
class QSortFilterProxyModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSortFilterProxyModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsortfilterproxymodel.moc"

extern "C" {
  QSortFilterProxyModel_SlotProxy* QSortFilterProxyModel_SlotProxy_new()
  {
    return new QSortFilterProxyModel_SlotProxy();
  }
};

// <= body block end

