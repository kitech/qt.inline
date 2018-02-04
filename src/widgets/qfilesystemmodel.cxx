//  header block begin
// /usr/include/qt/QtWidgets/qfilesystemmodel.h
#include <qfilesystemmodel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileSystemModel is pure virtual: false
// QFileSystemModel has virtual projected: true
//  header block end

//  main block begin

class MyQFileSystemModel : public QFileSystemModel {
public:
  virtual ~MyQFileSystemModel() {}
// void QFileSystemModel(class QObject *)
MyQFileSystemModel(QObject * parent) : QFileSystemModel(parent) {}
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QFileSystemModel::timerEvent(event);
  }
  }
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QFileSystemModel::event(event);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:60
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK16QFileSystemModel10metaObjectEv(void *this_) {
  return (void*)((QFileSystemModel*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:66
// [-2] void rootPathChanged(const class QString &)
extern "C"
void C_ZN16QFileSystemModel15rootPathChangedERK7QString(void *this_, QString* newPath) {
  ((QFileSystemModel*)this_)->rootPathChanged(*newPath);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:67
// [-2] void fileRenamed(const class QString &, const class QString &, const class QString &)
extern "C"
void C_ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(void *this_, QString* path, QString* oldName, QString* newName) {
  ((QFileSystemModel*)this_)->fileRenamed(*path, *oldName, *newName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:68
// [-2] void directoryLoaded(const class QString &)
extern "C"
void C_ZN16QFileSystemModel15directoryLoadedERK7QString(void *this_, QString* path) {
  ((QFileSystemModel*)this_)->directoryLoaded(*path);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:78
// [-2] void QFileSystemModel(class QObject *)
extern "C"
void* C_ZN16QFileSystemModelC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQFileSystemModel*)(0);
  return  new MyQFileSystemModel(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:79
// [-2] void ~QFileSystemModel()
extern "C"
void C_ZN16QFileSystemModelD2Ev(void *this_) {
  delete (QFileSystemModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:81
// [24] QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QFileSystemModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:82
// [24] QModelIndex index(const class QString &, int)
extern "C"
void* C_ZNK16QFileSystemModel5indexERK7QStringi(void *this_, QString* path, int column) {
  auto rv = ((QFileSystemModel*)this_)->index(*path, column);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:83
// [24] QModelIndex parent(const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QFileSystemModel*)this_)->parent(*child);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:85
// [24] QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QFileSystemModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:86
// [1] bool hasChildren(const class QModelIndex &)
extern "C"
bool C_ZNK16QFileSystemModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QFileSystemModel*)this_)->hasChildren(*parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:87
// [1] bool canFetchMore(const class QModelIndex &)
extern "C"
bool C_ZNK16QFileSystemModel12canFetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QFileSystemModel*)this_)->canFetchMore(*parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:88
// [-2] void fetchMore(const class QModelIndex &)
extern "C"
void C_ZN16QFileSystemModel9fetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QFileSystemModel*)this_)->fetchMore(*parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:90
// [4] int rowCount(const class QModelIndex &)
extern "C"
int C_ZNK16QFileSystemModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QFileSystemModel*)this_)->rowCount(*parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:91
// [4] int columnCount(const class QModelIndex &)
extern "C"
int C_ZNK16QFileSystemModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QFileSystemModel*)this_)->columnCount(*parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:93
// [16] QVariant myComputer(int)
extern "C"
void* C_ZNK16QFileSystemModel10myComputerEi(void *this_, int role) {
  auto rv = ((QFileSystemModel*)this_)->myComputer(role);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:94
// [16] QVariant data(const class QModelIndex &, int)
extern "C"
void* C_ZNK16QFileSystemModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QFileSystemModel*)this_)->data(*index, role);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:95
// [1] bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool C_ZN16QFileSystemModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QFileSystemModel*)this_)->setData(*index, *value, role);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:97
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C"
void* C_ZNK16QFileSystemModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QFileSystemModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:99
// [4] Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
Qt::ItemFlags C_ZNK16QFileSystemModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QFileSystemModel*)this_)->flags(*index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:101
// [-2] void sort(int, Qt::SortOrder)
extern "C"
void C_ZN16QFileSystemModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QFileSystemModel*)this_)->sort(column, order);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:105
// [1] bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool C_ZN16QFileSystemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QFileSystemModel*)this_)->dropMimeData(data, action, row, column, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:107
// [4] Qt::DropActions supportedDropActions()
extern "C"
Qt::DropActions C_ZNK16QFileSystemModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QFileSystemModel*)this_)->supportedDropActions();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:110
// [24] QModelIndex setRootPath(const class QString &)
extern "C"
void* C_ZN16QFileSystemModel11setRootPathERK7QString(void *this_, QString* path) {
  auto rv = ((QFileSystemModel*)this_)->setRootPath(*path);
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:111
// [8] QString rootPath()
extern "C"
void* C_ZNK16QFileSystemModel8rootPathEv(void *this_) {
  auto rv = ((QFileSystemModel*)this_)->rootPath();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:112
// [8] QDir rootDirectory()
extern "C"
void* C_ZNK16QFileSystemModel13rootDirectoryEv(void *this_) {
  auto rv = ((QFileSystemModel*)this_)->rootDirectory();
return new QDir(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:114
// [-2] void setIconProvider(class QFileIconProvider *)
extern "C"
void C_ZN16QFileSystemModel15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QFileSystemModel*)this_)->setIconProvider(provider);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:115
// [8] QFileIconProvider * iconProvider()
extern "C"
void* C_ZNK16QFileSystemModel12iconProviderEv(void *this_) {
  return (void*)((QFileSystemModel*)this_)->iconProvider();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:117
// [-2] void setFilter(class QDir::Filters)
extern "C"
void C_ZN16QFileSystemModel9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QFileSystemModel*)this_)->setFilter(filters);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:118
// [4] QDir::Filters filter()
extern "C"
QDir::Filters C_ZNK16QFileSystemModel6filterEv(void *this_) {
  return (QDir::Filters)((QFileSystemModel*)this_)->filter();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:120
// [-2] void setResolveSymlinks(_Bool)
extern "C"
void C_ZN16QFileSystemModel18setResolveSymlinksEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setResolveSymlinks(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:121
// [1] bool resolveSymlinks()
extern "C"
bool C_ZNK16QFileSystemModel15resolveSymlinksEv(void *this_) {
  return (bool)((QFileSystemModel*)this_)->resolveSymlinks();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:123
// [-2] void setReadOnly(_Bool)
extern "C"
void C_ZN16QFileSystemModel11setReadOnlyEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setReadOnly(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:124
// [1] bool isReadOnly()
extern "C"
bool C_ZNK16QFileSystemModel10isReadOnlyEv(void *this_) {
  return (bool)((QFileSystemModel*)this_)->isReadOnly();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:126
// [-2] void setNameFilterDisables(_Bool)
extern "C"
void C_ZN16QFileSystemModel21setNameFilterDisablesEb(void *this_, bool enable) {
  ((QFileSystemModel*)this_)->setNameFilterDisables(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:127
// [1] bool nameFilterDisables()
extern "C"
bool C_ZNK16QFileSystemModel18nameFilterDisablesEv(void *this_) {
  return (bool)((QFileSystemModel*)this_)->nameFilterDisables();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:129
// [-2] void setNameFilters(const class QStringList &)
extern "C"
void C_ZN16QFileSystemModel14setNameFiltersERK11QStringList(void *this_, QStringList* filters) {
  ((QFileSystemModel*)this_)->setNameFilters(*filters);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:132
// [8] QString filePath(const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel8filePathERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->filePath(*index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:133
// [1] bool isDir(const class QModelIndex &)
extern "C"
bool C_ZNK16QFileSystemModel5isDirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QFileSystemModel*)this_)->isDir(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:134
// [8] qint64 size(const class QModelIndex &)
extern "C"
qint64 C_ZNK16QFileSystemModel4sizeERK11QModelIndex(void *this_, QModelIndex* index) {
  return (qint64)((QFileSystemModel*)this_)->size(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:135
// [8] QString type(const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel4typeERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->type(*index);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:136
// [8] QDateTime lastModified(const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel12lastModifiedERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->lastModified(*index);
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:138
// [24] QModelIndex mkdir(const class QModelIndex &, const class QString &)
extern "C"
void* C_ZN16QFileSystemModel5mkdirERK11QModelIndexRK7QString(void *this_, QModelIndex* parent, QString* name) {
  auto rv = ((QFileSystemModel*)this_)->mkdir(*parent, *name);
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:139
// [1] bool rmdir(const class QModelIndex &)
extern "C"
bool C_ZN16QFileSystemModel5rmdirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QFileSystemModel*)this_)->rmdir(*index);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:140
// [8] QString fileName(const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel8fileNameERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->fileName(*index);
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:141
// [8] QIcon fileIcon(const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel8fileIconERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->fileIcon(*index);
return new QIcon(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:142
// [4] QFile::Permissions permissions(const class QModelIndex &)
extern "C"
QFile::Permissions C_ZNK16QFileSystemModel11permissionsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (QFile::Permissions)((QFileSystemModel*)this_)->permissions(*index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:143
// [8] QFileInfo fileInfo(const class QModelIndex &)
extern "C"
void* C_ZNK16QFileSystemModel8fileInfoERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QFileSystemModel*)this_)->fileInfo(*index);
return new QFileInfo(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:144
// [1] bool remove(const class QModelIndex &)
extern "C"
bool C_ZN16QFileSystemModel6removeERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QFileSystemModel*)this_)->remove(*index);
}
//  main block end
