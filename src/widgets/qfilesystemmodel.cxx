// /usr/include/qt/QtWidgets/qfilesystemmodel.h
#include <qfilesystemmodel.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:60
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QFileSystemModel10metaObjectEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:66
// void rootPathChanged(const class QString &)
extern "C"
void C_ZN16QFileSystemModel15rootPathChangedERK7QString(void *this_, const QString & newPath) {
  ((QFileSystemModel*)this_)->rootPathChanged(newPath);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:67
// void fileRenamed(const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(void *this_, const QString & path, const QString & oldName, const QString & newName) {
  ((QFileSystemModel*)this_)->fileRenamed(path, oldName, newName);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:68
// void directoryLoaded(const class QString &)
extern "C"
void C_ZN16QFileSystemModel15directoryLoadedERK7QString(void *this_, const QString & path) {
  ((QFileSystemModel*)this_)->directoryLoaded(path);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:78
// void QFileSystemModel(class QObject *)
extern "C"
void* C_ZN16QFileSystemModelC1EP7QObject(QObject * parent) {
  return new QFileSystemModel(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:79
// void ~QFileSystemModel()
extern "C"
void C_ZN16QFileSystemModelD1Ev(void *this_) {
  delete (QFileSystemModel*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:81
// QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel5indexEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QFileSystemModel*)this_)->index(row, column, parent);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:82
// QModelIndex index(const class QString &, int)
extern "C"
void C_ZNK16QFileSystemModel5indexERK7QStringi(void *this_, const QString & path, int column) {
  /*return*/ ((QFileSystemModel*)this_)->index(path, column);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:83
// QModelIndex parent(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel6parentERK11QModelIndex(void *this_, const QModelIndex & child) {
  /*return*/ ((QFileSystemModel*)this_)->parent(child);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:85
// QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & idx) {
  /*return*/ ((QFileSystemModel*)this_)->sibling(row, column, idx);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:86
// bool hasChildren(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel11hasChildrenERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QFileSystemModel*)this_)->hasChildren(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:87
// bool canFetchMore(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel12canFetchMoreERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QFileSystemModel*)this_)->canFetchMore(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:88
// void fetchMore(const class QModelIndex &)
extern "C"
void C_ZN16QFileSystemModel9fetchMoreERK11QModelIndex(void *this_, const QModelIndex & parent) {
  ((QFileSystemModel*)this_)->fetchMore(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:90
// int rowCount(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel8rowCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QFileSystemModel*)this_)->rowCount(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:91
// int columnCount(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel11columnCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QFileSystemModel*)this_)->columnCount(parent);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:93
// QVariant myComputer(int)
extern "C"
void C_ZNK16QFileSystemModel10myComputerEi(void *this_, int role) {
  /*return*/ ((QFileSystemModel*)this_)->myComputer(role);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:94
// QVariant data(const class QModelIndex &, int)
extern "C"
void C_ZNK16QFileSystemModel4dataERK11QModelIndexi(void *this_, const QModelIndex & index, int role) {
  /*return*/ ((QFileSystemModel*)this_)->data(index, role);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:95
// bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
void C_ZN16QFileSystemModel7setDataERK11QModelIndexRK8QVarianti(void *this_, const QModelIndex & index, const QVariant & value, int role) {
  /*return*/ ((QFileSystemModel*)this_)->setData(index, value, role);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:97
// QVariant headerData(int, Qt::Orientation, int)
extern "C"
void C_ZNK16QFileSystemModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  /*return*/ ((QFileSystemModel*)this_)->headerData(section, orientation, role);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:99
// Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel5flagsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->flags(index);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:101
// void sort(int, Qt::SortOrder)
extern "C"
void C_ZN16QFileSystemModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QFileSystemModel*)this_)->sort(column, order);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:103
// QStringList mimeTypes()
extern "C"
void C_ZNK16QFileSystemModel9mimeTypesEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->mimeTypes();
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:104
// QMimeData * mimeData(const QModelIndexList &)
extern "C"
void C_ZNK16QFileSystemModel8mimeDataERK5QListI11QModelIndexE(void *this_, const QModelIndexList & indexes) {
  /*return*/ ((QFileSystemModel*)this_)->mimeData(indexes);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:105
// bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
void C_ZN16QFileSystemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QFileSystemModel*)this_)->dropMimeData(data, action, row, column, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:107
// Qt::DropActions supportedDropActions()
extern "C"
void C_ZNK16QFileSystemModel20supportedDropActionsEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->supportedDropActions();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:110
// QModelIndex setRootPath(const class QString &)
extern "C"
void C_ZN16QFileSystemModel11setRootPathERK7QString(void *this_, const QString & path) {
  /*return*/ ((QFileSystemModel*)this_)->setRootPath(path);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:111
// QString rootPath()
extern "C"
void C_ZNK16QFileSystemModel8rootPathEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->rootPath();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:112
// QDir rootDirectory()
extern "C"
void C_ZNK16QFileSystemModel13rootDirectoryEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->rootDirectory();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:114
// void setIconProvider(class QFileIconProvider *)
extern "C"
void C_ZN16QFileSystemModel15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QFileSystemModel*)this_)->setIconProvider(provider);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:115
// QFileIconProvider * iconProvider()
extern "C"
void C_ZNK16QFileSystemModel12iconProviderEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->iconProvider();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:117
// void setFilter(class QDir::Filters)
extern "C"
void C_ZN16QFileSystemModel9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QFileSystemModel*)this_)->setFilter(filters);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:118
// QDir::Filters filter()
extern "C"
void C_ZNK16QFileSystemModel6filterEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->filter();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:120
// void setResolveSymlinks(_Bool)
extern "C"
void C_ZN16QFileSystemModel18setResolveSymlinksEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setResolveSymlinks(enable);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:121
// bool resolveSymlinks()
extern "C"
void C_ZNK16QFileSystemModel15resolveSymlinksEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->resolveSymlinks();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:123
// void setReadOnly(_Bool)
extern "C"
void C_ZN16QFileSystemModel11setReadOnlyEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setReadOnly(enable);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:124
// bool isReadOnly()
extern "C"
void C_ZNK16QFileSystemModel10isReadOnlyEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->isReadOnly();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:126
// void setNameFilterDisables(_Bool)
extern "C"
void C_ZN16QFileSystemModel21setNameFilterDisablesEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setNameFilterDisables(enable);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:127
// bool nameFilterDisables()
extern "C"
void C_ZNK16QFileSystemModel18nameFilterDisablesEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->nameFilterDisables();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:129
// void setNameFilters(const class QStringList &)
extern "C"
void C_ZN16QFileSystemModel14setNameFiltersERK11QStringList(void *this_, const QStringList & filters) {
  ((QFileSystemModel*)this_)->setNameFilters(filters);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:130
// QStringList nameFilters()
extern "C"
void C_ZNK16QFileSystemModel11nameFiltersEv(void *this_) {
  /*return*/ ((QFileSystemModel*)this_)->nameFilters();
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:132
// QString filePath(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel8filePathERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->filePath(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:133
// bool isDir(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel5isDirERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->isDir(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:134
// qint64 size(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel4sizeERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->size(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:135
// QString type(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel4typeERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->type(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:136
// QDateTime lastModified(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel12lastModifiedERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->lastModified(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:138
// QModelIndex mkdir(const class QModelIndex &, const class QString &)
extern "C"
void C_ZN16QFileSystemModel5mkdirERK11QModelIndexRK7QString(void *this_, const QModelIndex & parent, const QString & name) {
  /*return*/ ((QFileSystemModel*)this_)->mkdir(parent, name);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:139
// bool rmdir(const class QModelIndex &)
extern "C"
void C_ZN16QFileSystemModel5rmdirERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->rmdir(index);
}
// inline
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:140
// QString fileName(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel8fileNameERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->fileName(index);
}
// inline
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:141
// QIcon fileIcon(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel8fileIconERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->fileIcon(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:142
// QFile::Permissions permissions(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel11permissionsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->permissions(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:143
// QFileInfo fileInfo(const class QModelIndex &)
extern "C"
void C_ZNK16QFileSystemModel8fileInfoERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->fileInfo(index);
}
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:144
// bool remove(const class QModelIndex &)
extern "C"
void C_ZN16QFileSystemModel6removeERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QFileSystemModel*)this_)->remove(index);
}