//  header block begin
// /usr/include/qt/QtWidgets/qdirmodel.h
#ifndef protected
#define protected public
#endif
#include <qdirmodel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDirModel is pure virtual: false
// QDirModel has virtual projected: false
//  header block end

//  main block begin

class MyQDirModel : public QDirModel {
public:
  virtual ~MyQDirModel() {}
// void QDirModel(const class QStringList &, class QDir::Filters, class QDir::SortFlags, class QObject *)
MyQDirModel(const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort, QObject * parent) : QDirModel(nameFilters, filters, sort, parent) {}
// void QDirModel(class QObject *)
MyQDirModel(QObject * parent) : QDirModel(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:56
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QDirModel10metaObjectEv(void *this_) {
  return (void*)((QDirModel*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:68
// [-2] void QDirModel(const class QStringList &, class QDir::Filters, class QDir::SortFlags, class QObject *)
extern "C"
void* C_ZN9QDirModelC2ERK11QStringList6QFlagsIN4QDir6FilterEES3_INS4_8SortFlagEEP7QObject(QStringList* nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort, QObject * parent) {
  return  new QDirModel(*nameFilters, filters, sort, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:70
// [-2] void QDirModel(class QObject *)
extern "C"
void* C_ZN9QDirModelC2EP7QObject(QObject * parent) {
  return  new QDirModel(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:71
// [-2] void ~QDirModel()
extern "C"
void C_ZN9QDirModelD2Ev(void *this_) {
  delete (QDirModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:73
// [24] QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK9QDirModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QDirModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:74
// [24] QModelIndex parent(const class QModelIndex &)
extern "C"
void* C_ZNK9QDirModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QDirModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:76
// [4] int rowCount(const class QModelIndex &)
extern "C"
int C_ZNK9QDirModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QDirModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:77
// [4] int columnCount(const class QModelIndex &)
extern "C"
int C_ZNK9QDirModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QDirModel*)this_)->columnCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:79
// [16] QVariant data(const class QModelIndex &, int)
extern "C"
void* C_ZNK9QDirModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QDirModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:80
// [1] bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool C_ZN9QDirModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QDirModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:82
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C"
void* C_ZNK9QDirModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QDirModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:84
// [1] bool hasChildren(const class QModelIndex &)
extern "C"
bool C_ZNK9QDirModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->hasChildren(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:85
// [4] Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
Qt::ItemFlags C_ZNK9QDirModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QDirModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:87
// [-2] void sort(int, Qt::SortOrder)
extern "C"
void C_ZN9QDirModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QDirModel*)this_)->sort(column, order);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:89
// [8] QStringList mimeTypes()
extern "C"
void* C_ZNK9QDirModel9mimeTypesEv(void *this_) {
  auto rv = ((QDirModel*)this_)->mimeTypes();
return new QStringList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:91
// [1] bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool C_ZN9QDirModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QDirModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:93
// [4] Qt::DropActions supportedDropActions()
extern "C"
Qt::DropActions C_ZNK9QDirModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QDirModel*)this_)->supportedDropActions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:97
// [-2] void setIconProvider(class QFileIconProvider *)
extern "C"
void C_ZN9QDirModel15setIconProviderEP17QFileIconProvider(void *this_, QFileIconProvider * provider) {
  ((QDirModel*)this_)->setIconProvider(provider);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:98
// [8] QFileIconProvider * iconProvider()
extern "C"
void* C_ZNK9QDirModel12iconProviderEv(void *this_) {
  return (void*)((QDirModel*)this_)->iconProvider();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:100
// [-2] void setNameFilters(const class QStringList &)
extern "C"
void C_ZN9QDirModel14setNameFiltersERK11QStringList(void *this_, QStringList* filters) {
  ((QDirModel*)this_)->setNameFilters(*filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:101
// [8] QStringList nameFilters()
extern "C"
void* C_ZNK9QDirModel11nameFiltersEv(void *this_) {
  auto rv = ((QDirModel*)this_)->nameFilters();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:103
// [-2] void setFilter(class QDir::Filters)
extern "C"
void C_ZN9QDirModel9setFilterE6QFlagsIN4QDir6FilterEE(void *this_, QFlags<QDir::Filter> filters) {
  ((QDirModel*)this_)->setFilter(filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:104
// [4] QDir::Filters filter()
extern "C"
QDir::Filters C_ZNK9QDirModel6filterEv(void *this_) {
  return (QDir::Filters)((QDirModel*)this_)->filter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:106
// [-2] void setSorting(class QDir::SortFlags)
extern "C"
void C_ZN9QDirModel10setSortingE6QFlagsIN4QDir8SortFlagEE(void *this_, QFlags<QDir::SortFlag> sort) {
  ((QDirModel*)this_)->setSorting(sort);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:107
// [4] QDir::SortFlags sorting()
extern "C"
QDir::SortFlags C_ZNK9QDirModel7sortingEv(void *this_) {
  return (QDir::SortFlags)((QDirModel*)this_)->sorting();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:109
// [-2] void setResolveSymlinks(_Bool)
extern "C"
void C_ZN9QDirModel18setResolveSymlinksEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setResolveSymlinks(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:110
// [1] bool resolveSymlinks()
extern "C"
bool C_ZNK9QDirModel15resolveSymlinksEv(void *this_) {
  return (bool)((QDirModel*)this_)->resolveSymlinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:112
// [-2] void setReadOnly(_Bool)
extern "C"
void C_ZN9QDirModel11setReadOnlyEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setReadOnly(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:113
// [1] bool isReadOnly()
extern "C"
bool C_ZNK9QDirModel10isReadOnlyEv(void *this_) {
  return (bool)((QDirModel*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:115
// [-2] void setLazyChildCount(_Bool)
extern "C"
void C_ZN9QDirModel17setLazyChildCountEb(void *this_, bool enable) {
  ((QDirModel*)this_)->setLazyChildCount(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:116
// [1] bool lazyChildCount()
extern "C"
bool C_ZNK9QDirModel14lazyChildCountEv(void *this_) {
  return (bool)((QDirModel*)this_)->lazyChildCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:118
// [24] QModelIndex index(const class QString &, int)
extern "C"
void* C_ZNK9QDirModel5indexERK7QStringi(void *this_, QString* path, int column) {
  auto rv = ((QDirModel*)this_)->index(*path, column);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:120
// [1] bool isDir(const class QModelIndex &)
extern "C"
bool C_ZNK9QDirModel5isDirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->isDir(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:121
// [24] QModelIndex mkdir(const class QModelIndex &, const class QString &)
extern "C"
void* C_ZN9QDirModel5mkdirERK11QModelIndexRK7QString(void *this_, QModelIndex* parent, QString* name) {
  auto rv = ((QDirModel*)this_)->mkdir(*parent, *name);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:122
// [1] bool rmdir(const class QModelIndex &)
extern "C"
bool C_ZN9QDirModel5rmdirERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->rmdir(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:123
// [1] bool remove(const class QModelIndex &)
extern "C"
bool C_ZN9QDirModel6removeERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QDirModel*)this_)->remove(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:125
// [8] QString filePath(const class QModelIndex &)
extern "C"
void* C_ZNK9QDirModel8filePathERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->filePath(*index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:126
// [8] QString fileName(const class QModelIndex &)
extern "C"
void* C_ZNK9QDirModel8fileNameERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->fileName(*index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:127
// [8] QIcon fileIcon(const class QModelIndex &)
extern "C"
void* C_ZNK9QDirModel8fileIconERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->fileIcon(*index);
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:128
// [8] QFileInfo fileInfo(const class QModelIndex &)
extern "C"
void* C_ZNK9QDirModel8fileInfoERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QDirModel*)this_)->fileInfo(*index);
return new QFileInfo(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdirmodel.h:133
// [-2] void refresh(const class QModelIndex &)
extern "C"
void C_ZN9QDirModel7refreshERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QDirModel*)this_)->refresh(*parent);
}

//  main block end
