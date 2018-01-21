//  header block begin
// /usr/include/qt/QtWidgets/qdirmodel.h
#include <qdirmodel.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QDirModel10metaObjectEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:68
// void QDirModel(const class QStringList &, class QDir::Filters, class QDir::SortFlags, class QObject *)
extern "C"
void* C_ZN9QDirModelC1ERK11QStringList6QFlagsIN4QDir6FilterEES3_INS4_8SortFlagEEP7QObject(const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort, QObject * parent) {
  return new QDirModel(nameFilters, filters, sort, parent);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:70
// void QDirModel(class QObject *)
extern "C"
void* C_ZN9QDirModelC1EP7QObject(QObject * parent) {
  return new QDirModel(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:71
// void ~QDirModel()
extern "C"
void C_ZN9QDirModelD1Ev(void *this_) {
  delete (QDirModel*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:73
// QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel5indexEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QDirModel*)this_)->index(row, column, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:74
// QModelIndex parent(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel6parentERK11QModelIndex(void *this_, const QModelIndex & child) {
  /*return*/ ((QDirModel*)this_)->parent(child);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:76
// int rowCount(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel8rowCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QDirModel*)this_)->rowCount(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:77
// int columnCount(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel11columnCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QDirModel*)this_)->columnCount(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:79
// QVariant data(const class QModelIndex &, int)
extern "C"
void C_ZNK9QDirModel4dataERK11QModelIndexi(void *this_, const QModelIndex & index, int role) {
  /*return*/ ((QDirModel*)this_)->data(index, role);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:80
// bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
void C_ZN9QDirModel7setDataERK11QModelIndexRK8QVarianti(void *this_, const QModelIndex & index, const QVariant & value, int role) {
  /*return*/ ((QDirModel*)this_)->setData(index, value, role);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:82
// QVariant headerData(int, Qt::Orientation, int)
extern "C"
void C_ZNK9QDirModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  /*return*/ ((QDirModel*)this_)->headerData(section, orientation, role);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:84
// bool hasChildren(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel11hasChildrenERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->hasChildren(index);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:85
// Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel5flagsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->flags(index);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:87
// void sort(int, Qt::SortOrder)
extern "C"
void C_ZN9QDirModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QDirModel*)this_)->sort(column, order);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:89
// QStringList mimeTypes()
extern "C"
void C_ZNK9QDirModel9mimeTypesEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->mimeTypes();
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:90
// QMimeData * mimeData(const QModelIndexList &)
extern "C"
void C_ZNK9QDirModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  /*return*/ ((QDirModel*)this_)->mimeData(indexes);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:91
// bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
void C_ZN9QDirModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QDirModel*)this_)->dropMimeData(data, action, row, column, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdirmodel.h:93
// Qt::DropActions supportedDropActions()
extern "C"
void C_ZNK9QDirModel20supportedDropActionsEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->supportedDropActions();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:97
// void setIconProvider(class QFileIconProvider *)
extern "C"
void C_ZN9QDirModel15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QDirModel*)this_)->setIconProvider(provider);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:98
// QFileIconProvider * iconProvider()
extern "C"
void C_ZNK9QDirModel12iconProviderEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->iconProvider();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:100
// void setNameFilters(const class QStringList &)
extern "C"
void C_ZN9QDirModel14setNameFiltersERK11QStringList(void *this_, const QStringList & filters) {
  ((QDirModel*)this_)->setNameFilters(filters);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:101
// QStringList nameFilters()
extern "C"
void C_ZNK9QDirModel11nameFiltersEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->nameFilters();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:103
// void setFilter(class QDir::Filters)
extern "C"
void C_ZN9QDirModel9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QDirModel*)this_)->setFilter(filters);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:104
// QDir::Filters filter()
extern "C"
void C_ZNK9QDirModel6filterEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->filter();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:106
// void setSorting(class QDir::SortFlags)
extern "C"
void C_ZN9QDirModel10setSortingE6QFlagsIN4QDir8SortFlagEE(void *this_, QFlags<QDir::SortFlag> sort) {
  ((QDirModel*)this_)->setSorting(sort);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:107
// QDir::SortFlags sorting()
extern "C"
void C_ZNK9QDirModel7sortingEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->sorting();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:109
// void setResolveSymlinks(_Bool)
extern "C"
void C_ZN9QDirModel18setResolveSymlinksEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setResolveSymlinks(enable);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:110
// bool resolveSymlinks()
extern "C"
void C_ZNK9QDirModel15resolveSymlinksEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->resolveSymlinks();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:112
// void setReadOnly(_Bool)
extern "C"
void C_ZN9QDirModel11setReadOnlyEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setReadOnly(enable);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:113
// bool isReadOnly()
extern "C"
void C_ZNK9QDirModel10isReadOnlyEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->isReadOnly();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:115
// void setLazyChildCount(_Bool)
extern "C"
void C_ZN9QDirModel17setLazyChildCountEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setLazyChildCount(enable);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:116
// bool lazyChildCount()
extern "C"
void C_ZNK9QDirModel14lazyChildCountEv(void *this_) {
  /*return*/ ((QDirModel*)this_)->lazyChildCount();
}
// /usr/include/qt/QtWidgets/qdirmodel.h:118
// QModelIndex index(const class QString &, int)
extern "C"
void C_ZNK9QDirModel5indexERK7QStringi(void *this_, const QString & path, int column) {
  /*return*/ ((QDirModel*)this_)->index(path, column);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:120
// bool isDir(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel5isDirERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->isDir(index);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:121
// QModelIndex mkdir(const class QModelIndex &, const class QString &)
extern "C"
void C_ZN9QDirModel5mkdirERK11QModelIndexRK7QString(void *this_, const QModelIndex & parent, const QString & name) {
  /*return*/ ((QDirModel*)this_)->mkdir(parent, name);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:122
// bool rmdir(const class QModelIndex &)
extern "C"
void C_ZN9QDirModel5rmdirERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->rmdir(index);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:123
// bool remove(const class QModelIndex &)
extern "C"
void C_ZN9QDirModel6removeERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->remove(index);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:125
// QString filePath(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel8filePathERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->filePath(index);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:126
// QString fileName(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel8fileNameERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->fileName(index);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:127
// QIcon fileIcon(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel8fileIconERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->fileIcon(index);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:128
// QFileInfo fileInfo(const class QModelIndex &)
extern "C"
void C_ZNK9QDirModel8fileInfoERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QDirModel*)this_)->fileInfo(index);
}
// /usr/include/qt/QtWidgets/qdirmodel.h:133
// void refresh(const class QModelIndex &)
extern "C"
void C_ZN9QDirModel7refreshERK11QModelIndex(void *this_, const QModelIndex & parent) {
  ((QDirModel*)this_)->refresh(parent);
}
//  main block end
