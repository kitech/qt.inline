//  header block begin
// /usr/include/qt/QtCore/qsortfilterproxymodel.h
#include <qsortfilterproxymodel.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:61
// const QMetaObject * metaObject()
extern "C"
void C_ZNK21QSortFilterProxyModel10metaObjectEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:72
// void QSortFilterProxyModel(class QObject *)
extern "C"
void* C_ZN21QSortFilterProxyModelC1EP7QObject(QObject * parent) {
  return new QSortFilterProxyModel(parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:73
// void ~QSortFilterProxyModel()
extern "C"
void C_ZN21QSortFilterProxyModelD1Ev(void *this_) {
  delete (QSortFilterProxyModel*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:75
// void setSourceModel(class QAbstractItemModel *)
extern "C"
void C_ZN21QSortFilterProxyModel14setSourceModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * sourceModel) {
  ((QSortFilterProxyModel*)this_)->setSourceModel(sourceModel);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:77
// QModelIndex mapToSource(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel11mapToSourceERK11QModelIndex(void *this_, const QModelIndex & proxyIndex) {
  /*return*/ ((QSortFilterProxyModel*)this_)->mapToSource(proxyIndex);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:78
// QModelIndex mapFromSource(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel13mapFromSourceERK11QModelIndex(void *this_, const QModelIndex & sourceIndex) {
  /*return*/ ((QSortFilterProxyModel*)this_)->mapFromSource(sourceIndex);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:80
// QItemSelection mapSelectionToSource(const class QItemSelection &)
extern "C"
void C_ZNK21QSortFilterProxyModel20mapSelectionToSourceERK14QItemSelection(void *this_, const QItemSelection & proxySelection) {
  /*return*/ ((QSortFilterProxyModel*)this_)->mapSelectionToSource(proxySelection);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:81
// QItemSelection mapSelectionFromSource(const class QItemSelection &)
extern "C"
void C_ZNK21QSortFilterProxyModel22mapSelectionFromSourceERK14QItemSelection(void *this_, const QItemSelection & sourceSelection) {
  /*return*/ ((QSortFilterProxyModel*)this_)->mapSelectionFromSource(sourceSelection);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:83
// QRegExp filterRegExp()
extern "C"
void C_ZNK21QSortFilterProxyModel12filterRegExpEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->filterRegExp();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:84
// void setFilterRegExp(const class QRegExp &)
extern "C"
void C_ZN21QSortFilterProxyModel15setFilterRegExpERK7QRegExp(void *this_, const QRegExp & regExp) {
  ((QSortFilterProxyModel*)this_)->setFilterRegExp(regExp);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:86
// int filterKeyColumn()
extern "C"
void C_ZNK21QSortFilterProxyModel15filterKeyColumnEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->filterKeyColumn();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:87
// void setFilterKeyColumn(int)
extern "C"
void C_ZN21QSortFilterProxyModel18setFilterKeyColumnEi(void *this_, int column) {
  ((QSortFilterProxyModel*)this_)->setFilterKeyColumn(column);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:89
// Qt::CaseSensitivity filterCaseSensitivity()
extern "C"
void C_ZNK21QSortFilterProxyModel21filterCaseSensitivityEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->filterCaseSensitivity();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:90
// void setFilterCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN21QSortFilterProxyModel24setFilterCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QSortFilterProxyModel*)this_)->setFilterCaseSensitivity(cs);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:92
// Qt::CaseSensitivity sortCaseSensitivity()
extern "C"
void C_ZNK21QSortFilterProxyModel19sortCaseSensitivityEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->sortCaseSensitivity();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:93
// void setSortCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void C_ZN21QSortFilterProxyModel22setSortCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QSortFilterProxyModel*)this_)->setSortCaseSensitivity(cs);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:95
// bool isSortLocaleAware()
extern "C"
void C_ZNK21QSortFilterProxyModel17isSortLocaleAwareEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->isSortLocaleAware();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:96
// void setSortLocaleAware(_Bool)
extern "C"
void C_ZN21QSortFilterProxyModel18setSortLocaleAwareEb(void *this_, bool on) {
  ((QSortFilterProxyModel*)this_)->setSortLocaleAware(on);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:98
// int sortColumn()
extern "C"
void C_ZNK21QSortFilterProxyModel10sortColumnEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->sortColumn();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:99
// Qt::SortOrder sortOrder()
extern "C"
void C_ZNK21QSortFilterProxyModel9sortOrderEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->sortOrder();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:101
// bool dynamicSortFilter()
extern "C"
void C_ZNK21QSortFilterProxyModel17dynamicSortFilterEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->dynamicSortFilter();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:102
// void setDynamicSortFilter(_Bool)
extern "C"
void C_ZN21QSortFilterProxyModel20setDynamicSortFilterEb(void *this_, bool enable) {
  ((QSortFilterProxyModel*)this_)->setDynamicSortFilter(enable);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:104
// int sortRole()
extern "C"
void C_ZNK21QSortFilterProxyModel8sortRoleEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->sortRole();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:105
// void setSortRole(int)
extern "C"
void C_ZN21QSortFilterProxyModel11setSortRoleEi(void *this_, int role) {
  ((QSortFilterProxyModel*)this_)->setSortRole(role);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:107
// int filterRole()
extern "C"
void C_ZNK21QSortFilterProxyModel10filterRoleEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->filterRole();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:108
// void setFilterRole(int)
extern "C"
void C_ZN21QSortFilterProxyModel13setFilterRoleEi(void *this_, int role) {
  ((QSortFilterProxyModel*)this_)->setFilterRole(role);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:111
// void setFilterRegExp(const class QString &)
extern "C"
void C_ZN21QSortFilterProxyModel15setFilterRegExpERK7QString(void *this_, const QString & pattern) {
  ((QSortFilterProxyModel*)this_)->setFilterRegExp(pattern);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:112
// void setFilterWildcard(const class QString &)
extern "C"
void C_ZN21QSortFilterProxyModel17setFilterWildcardERK7QString(void *this_, const QString & pattern) {
  ((QSortFilterProxyModel*)this_)->setFilterWildcard(pattern);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:113
// void setFilterFixedString(const class QString &)
extern "C"
void C_ZN21QSortFilterProxyModel20setFilterFixedStringERK7QString(void *this_, const QString & pattern) {
  ((QSortFilterProxyModel*)this_)->setFilterFixedString(pattern);
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:114
// void clear()
extern "C"
void C_ZN21QSortFilterProxyModel5clearEv(void *this_) {
  ((QSortFilterProxyModel*)this_)->clear();
}
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:115
// void invalidate()
extern "C"
void C_ZN21QSortFilterProxyModel10invalidateEv(void *this_) {
  ((QSortFilterProxyModel*)this_)->invalidate();
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:128
// QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel5indexEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->index(row, column, parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:129
// QModelIndex parent(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel6parentERK11QModelIndex(void *this_, const QModelIndex & child) {
  /*return*/ ((QSortFilterProxyModel*)this_)->parent(child);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:130
// QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & idx) {
  /*return*/ ((QSortFilterProxyModel*)this_)->sibling(row, column, idx);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:132
// int rowCount(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel8rowCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->rowCount(parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:133
// int columnCount(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel11columnCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->columnCount(parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:134
// bool hasChildren(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel11hasChildrenERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->hasChildren(parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:136
// QVariant data(const class QModelIndex &, int)
extern "C"
void C_ZNK21QSortFilterProxyModel4dataERK11QModelIndexi(void *this_, const QModelIndex & index, int role) {
  /*return*/ ((QSortFilterProxyModel*)this_)->data(index, role);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:137
// bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
void C_ZN21QSortFilterProxyModel7setDataERK11QModelIndexRK8QVarianti(void *this_, const QModelIndex & index, const QVariant & value, int role) {
  /*return*/ ((QSortFilterProxyModel*)this_)->setData(index, value, role);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:139
// QVariant headerData(int, Qt::Orientation, int)
extern "C"
void C_ZNK21QSortFilterProxyModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  /*return*/ ((QSortFilterProxyModel*)this_)->headerData(section, orientation, role);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:140
// bool setHeaderData(int, Qt::Orientation, const class QVariant &, int)
extern "C"
void C_ZN21QSortFilterProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *this_, int section, Qt::Orientation orientation, const QVariant & value, int role) {
  /*return*/ ((QSortFilterProxyModel*)this_)->setHeaderData(section, orientation, value, role);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:143
// QMimeData * mimeData(const QModelIndexList &)
extern "C"
void C_ZNK21QSortFilterProxyModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  /*return*/ ((QSortFilterProxyModel*)this_)->mimeData(indexes);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:144
// bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
void C_ZN21QSortFilterProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->dropMimeData(data, action, row, column, parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:147
// bool insertRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN21QSortFilterProxyModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->insertRows(row, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:148
// bool insertColumns(int, int, const class QModelIndex &)
extern "C"
void C_ZN21QSortFilterProxyModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->insertColumns(column, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:149
// bool removeRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN21QSortFilterProxyModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->removeRows(row, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:150
// bool removeColumns(int, int, const class QModelIndex &)
extern "C"
void C_ZN21QSortFilterProxyModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->removeColumns(column, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:152
// void fetchMore(const class QModelIndex &)
extern "C"
void C_ZN21QSortFilterProxyModel9fetchMoreERK11QModelIndex(void *this_, const QModelIndex & parent) {
  ((QSortFilterProxyModel*)this_)->fetchMore(parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:153
// bool canFetchMore(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel12canFetchMoreERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QSortFilterProxyModel*)this_)->canFetchMore(parent);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:154
// Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel5flagsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QSortFilterProxyModel*)this_)->flags(index);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:156
// QModelIndex buddy(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel5buddyERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QSortFilterProxyModel*)this_)->buddy(index);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:157
// QModelIndexList match(const class QModelIndex &, int, const class QVariant &, int, Qt::MatchFlags)
extern "C"
void C_ZNK21QSortFilterProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, const QModelIndex & start, int role, const QVariant & value, int hits, QFlags<Qt::MatchFlag> flags) {
  /*return*/ ((QSortFilterProxyModel*)this_)->match(start, role, value, hits, flags);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:161
// QSize span(const class QModelIndex &)
extern "C"
void C_ZNK21QSortFilterProxyModel4spanERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QSortFilterProxyModel*)this_)->span(index);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:162
// void sort(int, Qt::SortOrder)
extern "C"
void C_ZN21QSortFilterProxyModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QSortFilterProxyModel*)this_)->sort(column, order);
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:164
// QStringList mimeTypes()
extern "C"
void C_ZNK21QSortFilterProxyModel9mimeTypesEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->mimeTypes();
}
// virtual
// /usr/include/qt/QtCore/qsortfilterproxymodel.h:165
// Qt::DropActions supportedDropActions()
extern "C"
void C_ZNK21QSortFilterProxyModel20supportedDropActionsEv(void *this_) {
  /*return*/ ((QSortFilterProxyModel*)this_)->supportedDropActions();
}
//  main block end
