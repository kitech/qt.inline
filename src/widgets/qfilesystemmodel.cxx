// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qfilesystemmodel.h
// dst-file: /src/widgets/qfilesystemmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfilesystemmodel.h>


#include <qstring.h>
#include <qdir.h>
#include <qstringlist.h>
#include <qabstractitemmodel.h>
#include <qfiledevice.h>
#include <qicon.h>
#include <qglobal.h>
#include <qnamespace.h>
#include <qvariant.h>
#include <qfileinfo.h>
#include <qdatetime.h>
// <= header block end

// main block begin =>
void __keep_qfilesystemmodel_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 132, column 20>
//   // proto:  QString QFileSystemModel::fileName(const QModelIndex & index);
if (true) {
  auto f = [](QFileSystemModel flythis, const QModelIndex & arg1) {
    ((QFileSystemModel*)0)->fileName(arg1);
    flythis.fileName(arg1);
  };
  if (f == nullptr){}
}
// _ZNK16QFileSystemModel8fileNameERK11QModelIndex fileName(const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 133, column 18>
//   // proto:  QIcon QFileSystemModel::fileIcon(const QModelIndex & index);
if (true) {
  auto f = [](QFileSystemModel flythis, const QModelIndex & arg1) {
    ((QFileSystemModel*)0)->fileIcon(arg1);
    flythis.fileIcon(arg1);
  };
  if (f == nullptr){}
}
// _ZNK16QFileSystemModel8fileIconERK11QModelIndex fileIcon(const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 135, column 22>
//   // proto:  QFileInfo QFileSystemModel::fileInfo(const QModelIndex & index);
if (true) {
  auto f = [](QFileSystemModel flythis, const QModelIndex & arg1) {
    ((QFileSystemModel*)0)->fileInfo(arg1);
    flythis.fileInfo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK16QFileSystemModel8fileInfoERK11QModelIndex fileInfo(const class QModelIndex &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFileSystemModel_Class_Size()
{
  return sizeof(QFileSystemModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 132, column 20>
//   // proto:  QString QFileSystemModel::fileName(const QModelIndex & index);
// _ZNK16QFileSystemModel8fileNameERK11QModelIndex fileName(const class QModelIndex &)
extern "C"
QString*
C_ZNK16QFileSystemModel8fileNameERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->fileName(*((const QModelIndex*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 78, column 10>
//   // proto:  bool QFileSystemModel::hasChildren(const QModelIndex & parent);
// _ZNK16QFileSystemModel11hasChildrenERK11QModelIndex hasChildren(const class QModelIndex &)
extern "C"
bool
C_ZNK16QFileSystemModel11hasChildrenERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->hasChildren(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 110, column 19>
//   // proto:  QDir::Filters QFileSystemModel::filter();
// _ZNK16QFileSystemModel6filterEv filter()
extern "C"
QFlags<QDir::Filter>*
C_ZNK16QFileSystemModel6filterEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->filter();
  return new QFlags<QDir::Filter>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 95, column 17>
//   // proto:  QStringList QFileSystemModel::mimeTypes();
// _ZNK16QFileSystemModel9mimeTypesEv mimeTypes()
extern "C"
QStringList*
C_ZNK16QFileSystemModel9mimeTypesEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->mimeTypes();
  return new QStringList(ret); // 5
}
//   // proto:  void QFileSystemModel::~QFileSystemModel();
extern "C"
void C_ZN16QFileSystemModelD2Ev(void *qthis) {
  delete (QFileSystemModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 76, column 17>
//   // proto:  QModelIndex QFileSystemModel::index(const QString & path, int column);
// _ZNK16QFileSystemModel5indexERK7QStringi index(const class QString &, int)
extern "C"
QModelIndex*
C_ZNK16QFileSystemModel5indexERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  auto ret =
  ((QFileSystemModel*)qthis)->index(*((const QString*)arg1),
arg2);
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 118, column 10>
//   // proto:  void QFileSystemModel::setNameFilterDisables(bool enable);
// _ZN16QFileSystemModel21setNameFilterDisablesEb setNameFilterDisables(_Bool)
extern "C"
void
C_ZN16QFileSystemModel21setNameFilterDisablesEb(void *qthis,
bool arg1) {
  ((QFileSystemModel*)qthis)->setNameFilterDisables(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 134, column 24>
//   // proto:  QFile::Permissions QFileSystemModel::permissions(const QModelIndex & index);
// _ZNK16QFileSystemModel11permissionsERK11QModelIndex permissions(const class QModelIndex &)
extern "C"
QFlags<QFileDevice::Permission>*
C_ZNK16QFileSystemModel11permissionsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->permissions(*((const QModelIndex*)arg1));
  return new QFlags<QFileDevice::Permission>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 133, column 18>
//   // proto:  QIcon QFileSystemModel::fileIcon(const QModelIndex & index);
// _ZNK16QFileSystemModel8fileIconERK11QModelIndex fileIcon(const class QModelIndex &)
extern "C"
QIcon*
C_ZNK16QFileSystemModel8fileIconERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->fileIcon(*((const QModelIndex*)arg1));
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 113, column 10>
//   // proto:  bool QFileSystemModel::resolveSymlinks();
// _ZNK16QFileSystemModel15resolveSymlinksEv resolveSymlinks()
extern "C"
bool
C_ZNK16QFileSystemModel15resolveSymlinksEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->resolveSymlinks();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 124, column 13>
//   // proto:  QString QFileSystemModel::filePath(const QModelIndex & index);
// _ZNK16QFileSystemModel8filePathERK11QModelIndex filePath(const class QModelIndex &)
extern "C"
QString*
C_ZNK16QFileSystemModel8filePathERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->filePath(*((const QModelIndex*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 93, column 10>
//   // proto:  void QFileSystemModel::sort(int column, Qt::SortOrder order);
// _ZN16QFileSystemModel4sortEiN2Qt9SortOrderE sort(int, Qt::SortOrder)
extern "C"
void
C_ZN16QFileSystemModel4sortEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QFileSystemModel*)qthis)->sort(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 77, column 17>
//   // proto:  QModelIndex QFileSystemModel::parent(const QModelIndex & child);
// _ZNK16QFileSystemModel6parentERK11QModelIndex parent(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK16QFileSystemModel6parentERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->parent(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 119, column 10>
//   // proto:  bool QFileSystemModel::nameFilterDisables();
// _ZNK16QFileSystemModel18nameFilterDisablesEv nameFilterDisables()
extern "C"
bool
C_ZNK16QFileSystemModel18nameFilterDisablesEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->nameFilterDisables();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 54, column 5>
//   // proto:  const QMetaObject * QFileSystemModel::metaObject();
// _ZNK16QFileSystemModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QFileSystemModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 109, column 10>
//   // proto:  void QFileSystemModel::setFilter(QDir::Filters filters);
// _ZN16QFileSystemModel9setFilterE6QFlagsIN4QDir6FilterEE setFilter(class QDir::Filters)
extern "C"
void
C_ZN16QFileSystemModel9setFilterE6QFlagsIN4QDir6FilterEE(void *qthis,
QDir::Filters* arg1) {
  ((QFileSystemModel*)qthis)->setFilter(*((QDir::Filters*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 80, column 10>
//   // proto:  void QFileSystemModel::fetchMore(const QModelIndex & parent);
// _ZN16QFileSystemModel9fetchMoreERK11QModelIndex fetchMore(const class QModelIndex &)
extern "C"
void
C_ZN16QFileSystemModel9fetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QFileSystemModel*)qthis)->fetchMore(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 126, column 12>
//   // proto:  qint64 QFileSystemModel::size(const QModelIndex & index);
// _ZNK16QFileSystemModel4sizeERK11QModelIndex size(const class QModelIndex &)
extern "C"
long long
C_ZNK16QFileSystemModel4sizeERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->size(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 91, column 19>
//   // proto:  Qt::ItemFlags QFileSystemModel::flags(const QModelIndex & index);
// _ZNK16QFileSystemModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK16QFileSystemModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 107, column 24>
//   // proto:  QFileIconProvider * QFileSystemModel::iconProvider();
// _ZNK16QFileSystemModel12iconProviderEv iconProvider()
extern "C"
void*
C_ZNK16QFileSystemModel12iconProviderEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->iconProvider();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 121, column 10>
//   // proto:  void QFileSystemModel::setNameFilters(const QStringList & filters);
// _ZN16QFileSystemModel14setNameFiltersERK11QStringList setNameFilters(const class QStringList &)
extern "C"
void
C_ZN16QFileSystemModel14setNameFiltersERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QFileSystemModel*)qthis)->setNameFilters(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 86, column 14>
//   // proto:  QVariant QFileSystemModel::data(const QModelIndex & index, int role);
// _ZNK16QFileSystemModel4dataERK11QModelIndexi data(const class QModelIndex &, int)
extern "C"
QVariant*
C_ZNK16QFileSystemModel4dataERK11QModelIndexi(void *qthis,
const QModelIndex* arg1,
int arg2) {
  auto ret =
  ((QFileSystemModel*)qthis)->data(*((const QModelIndex*)arg1),
arg2);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 104, column 10>
//   // proto:  QDir QFileSystemModel::rootDirectory();
// _ZNK16QFileSystemModel13rootDirectoryEv rootDirectory()
extern "C"
QDir*
C_ZNK16QFileSystemModel13rootDirectoryEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->rootDirectory();
  return new QDir(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 130, column 17>
//   // proto:  QModelIndex QFileSystemModel::mkdir(const QModelIndex & parent, const QString & name);
// _ZN16QFileSystemModel5mkdirERK11QModelIndexRK7QString mkdir(const class QModelIndex &, const class QString &)
extern "C"
QModelIndex*
C_ZN16QFileSystemModel5mkdirERK11QModelIndexRK7QString(void *qthis,
const QModelIndex* arg1,
const QString* arg2) {
  auto ret =
  ((QFileSystemModel*)qthis)->mkdir(*((const QModelIndex*)arg1),
*((const QString*)arg2));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 82, column 9>
//   // proto:  int QFileSystemModel::rowCount(const QModelIndex & parent);
// _ZNK16QFileSystemModel8rowCountERK11QModelIndex rowCount(const class QModelIndex &)
extern "C"
int
C_ZNK16QFileSystemModel8rowCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->rowCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 87, column 10>
//   // proto:  bool QFileSystemModel::setData(const QModelIndex & index, const QVariant & value, int role);
// _ZN16QFileSystemModel7setDataERK11QModelIndexRK8QVarianti setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool
C_ZN16QFileSystemModel7setDataERK11QModelIndexRK8QVarianti(void *qthis,
const QModelIndex* arg1,
const QVariant* arg2,
int arg3) {
  auto ret =
  ((QFileSystemModel*)qthis)->setData(*((const QModelIndex*)arg1),
*((const QVariant*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 83, column 9>
//   // proto:  int QFileSystemModel::columnCount(const QModelIndex & parent);
// _ZNK16QFileSystemModel11columnCountERK11QModelIndex columnCount(const class QModelIndex &)
extern "C"
int
C_ZNK16QFileSystemModel11columnCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->columnCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 75, column 17>
//   // proto:  QModelIndex QFileSystemModel::index(int row, int column, const QModelIndex & parent);
// _ZNK16QFileSystemModel5indexEiiRK11QModelIndex index(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK16QFileSystemModel5indexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QFileSystemModel*)qthis)->index(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 79, column 10>
//   // proto:  bool QFileSystemModel::canFetchMore(const QModelIndex & parent);
// _ZNK16QFileSystemModel12canFetchMoreERK11QModelIndex canFetchMore(const class QModelIndex &)
extern "C"
bool
C_ZNK16QFileSystemModel12canFetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->canFetchMore(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 136, column 10>
//   // proto:  bool QFileSystemModel::remove(const QModelIndex & index);
// _ZN16QFileSystemModel6removeERK11QModelIndex remove(const class QModelIndex &)
extern "C"
bool
C_ZN16QFileSystemModel6removeERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->remove(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 89, column 14>
//   // proto:  QVariant QFileSystemModel::headerData(int section, Qt::Orientation orientation, int role);
// _ZNK16QFileSystemModel10headerDataEiN2Qt11OrientationEi headerData(int, Qt::Orientation, int)
extern "C"
QVariant*
C_ZNK16QFileSystemModel10headerDataEiN2Qt11OrientationEi(void *qthis,
int arg1,
Qt::Orientation* arg2,
int arg3) {
  auto ret =
  ((QFileSystemModel*)qthis)->headerData(arg1,
*((Qt::Orientation*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 60, column 10>
//   // proto:  void QFileSystemModel::rootPathChanged(const QString & newPath);
// _ZN16QFileSystemModel15rootPathChangedERK7QString rootPathChanged(const class QString &)
extern "C"
void
C_ZN16QFileSystemModel15rootPathChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QFileSystemModel*)qthis)->rootPathChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 102, column 17>
//   // proto:  QModelIndex QFileSystemModel::setRootPath(const QString & path);
// _ZN16QFileSystemModel11setRootPathERK7QString setRootPath(const class QString &)
extern "C"
QModelIndex*
C_ZN16QFileSystemModel11setRootPathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->setRootPath(*((const QString*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 62, column 10>
//   // proto:  void QFileSystemModel::directoryLoaded(const QString & path);
// _ZN16QFileSystemModel15directoryLoadedERK7QString directoryLoaded(const class QString &)
extern "C"
void
C_ZN16QFileSystemModel15directoryLoadedERK7QString(void *qthis,
const QString* arg1) {
  ((QFileSystemModel*)qthis)->directoryLoaded(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 112, column 10>
//   // proto:  void QFileSystemModel::setResolveSymlinks(bool enable);
// _ZN16QFileSystemModel18setResolveSymlinksEb setResolveSymlinks(_Bool)
extern "C"
void
C_ZN16QFileSystemModel18setResolveSymlinksEb(void *qthis,
bool arg1) {
  ((QFileSystemModel*)qthis)->setResolveSymlinks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 115, column 10>
//   // proto:  void QFileSystemModel::setReadOnly(bool enable);
// _ZN16QFileSystemModel11setReadOnlyEb setReadOnly(_Bool)
extern "C"
void
C_ZN16QFileSystemModel11setReadOnlyEb(void *qthis,
bool arg1) {
  ((QFileSystemModel*)qthis)->setReadOnly(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 122, column 17>
//   // proto:  QStringList QFileSystemModel::nameFilters();
// _ZNK16QFileSystemModel11nameFiltersEv nameFilters()
extern "C"
QStringList*
C_ZNK16QFileSystemModel11nameFiltersEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->nameFilters();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 72, column 14>
//   // proto:  void QFileSystemModel::QFileSystemModel(QObject * parent);
extern "C"
QFileSystemModel*
C_ZN16QFileSystemModelC2EP7QObject(QObject * arg1) {
  auto ret = new QFileSystemModel(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 99, column 21>
//   // proto:  Qt::DropActions QFileSystemModel::supportedDropActions();
// _ZNK16QFileSystemModel20supportedDropActionsEv supportedDropActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK16QFileSystemModel20supportedDropActionsEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->supportedDropActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 135, column 22>
//   // proto:  QFileInfo QFileSystemModel::fileInfo(const QModelIndex & index);
// _ZNK16QFileSystemModel8fileInfoERK11QModelIndex fileInfo(const class QModelIndex &)
extern "C"
QFileInfo*
C_ZNK16QFileSystemModel8fileInfoERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->fileInfo(*((const QModelIndex*)arg1));
  return new QFileInfo(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 85, column 14>
//   // proto:  QVariant QFileSystemModel::myComputer(int role);
// _ZNK16QFileSystemModel10myComputerEi myComputer(int)
extern "C"
QVariant*
C_ZNK16QFileSystemModel10myComputerEi(void *qthis,
int arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->myComputer(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 116, column 10>
//   // proto:  bool QFileSystemModel::isReadOnly();
// _ZNK16QFileSystemModel10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK16QFileSystemModel10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 127, column 13>
//   // proto:  QString QFileSystemModel::type(const QModelIndex & index);
// _ZNK16QFileSystemModel4typeERK11QModelIndex type(const class QModelIndex &)
extern "C"
QString*
C_ZNK16QFileSystemModel4typeERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->type(*((const QModelIndex*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 97, column 10>
//   // proto:  bool QFileSystemModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN16QFileSystemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN16QFileSystemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QFileSystemModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 96, column 16>
//   // proto:  QMimeData * QFileSystemModel::mimeData(const QModelIndexList & indexes);
// _ZNK16QFileSystemModel8mimeDataERK5QListI11QModelIndexE mimeData(const QModelIndexList &)
extern "C"
void*
C_ZNK16QFileSystemModel8mimeDataERK5QListI11QModelIndexE(void *qthis,
const QModelIndexList* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->mimeData(*((const QModelIndexList*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 103, column 13>
//   // proto:  QString QFileSystemModel::rootPath();
// _ZNK16QFileSystemModel8rootPathEv rootPath()
extern "C"
QString*
C_ZNK16QFileSystemModel8rootPathEv(void *qthis) {
  auto ret =
  ((QFileSystemModel*)qthis)->rootPath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 128, column 15>
//   // proto:  QDateTime QFileSystemModel::lastModified(const QModelIndex & index);
// _ZNK16QFileSystemModel12lastModifiedERK11QModelIndex lastModified(const class QModelIndex &)
extern "C"
QDateTime*
C_ZNK16QFileSystemModel12lastModifiedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->lastModified(*((const QModelIndex*)arg1));
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 61, column 10>
//   // proto:  void QFileSystemModel::fileRenamed(const QString & path, const QString & oldName, const QString & newName);
// _ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_ fileRenamed(const class QString &, const class QString &, const class QString &)
extern "C"
void
C_ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(void *qthis,
const QString* arg1,
const QString* arg2,
const QString* arg3) {
  ((QFileSystemModel*)qthis)->fileRenamed(*((const QString*)arg1),
*((const QString*)arg2),
*((const QString*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 125, column 10>
//   // proto:  bool QFileSystemModel::isDir(const QModelIndex & index);
// _ZNK16QFileSystemModel5isDirERK11QModelIndex isDir(const class QModelIndex &)
extern "C"
bool
C_ZNK16QFileSystemModel5isDirERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->isDir(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 131, column 10>
//   // proto:  bool QFileSystemModel::rmdir(const QModelIndex & index);
// _ZN16QFileSystemModel5rmdirERK11QModelIndex rmdir(const class QModelIndex &)
extern "C"
bool
C_ZN16QFileSystemModel5rmdirERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QFileSystemModel*)qthis)->rmdir(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfilesystemmodel.h', line 106, column 10>
//   // proto:  void QFileSystemModel::setIconProvider(QFileIconProvider * provider);
// _ZN16QFileSystemModel15setIconProviderEP17QFileIconProvider setIconProvider(class QFileIconProvider *)
extern "C"
void
C_ZN16QFileSystemModel15setIconProviderEP17QFileIconProvider(void *qthis,
QFileIconProvider * arg1) {
  ((QFileSystemModel*)qthis)->setIconProvider(arg1);
}
// <= ext block end

// body block begin =>
// QFileSystemModel_SlotProxy here
class QFileSystemModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileSystemModel_SlotProxy():QObject(){}

public slots:
  // directoryLoaded(const class QString &)
  void slot_proxy_func__ZN16QFileSystemModel15directoryLoadedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // rootPathChanged(const class QString &)
  void slot_proxy_func__ZN16QFileSystemModel15rootPathChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // fileRenamed(const class QString &, const class QString &, const class QString &)
  void slot_proxy_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(const QString & arg0, const QString & arg1, const QString & arg2);
public:
  void (*slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_)(void* rsfptr, const QString & arg0, const QString & arg1, const QString & arg2) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qfilesystemmodel.moc"

extern "C" {
  QFileSystemModel_SlotProxy* QFileSystemModel_SlotProxy_new()
  {
    return new QFileSystemModel_SlotProxy();
  }
};

void QFileSystemModel_SlotProxy::slot_proxy_func__ZN16QFileSystemModel15directoryLoadedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileSystemModel_SlotProxy_connect__ZN16QFileSystemModel15directoryLoadedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileSystemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString = (decltype(that->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString))ffifptr;
  QObject::connect((QFileSystemModel*)sender, SIGNAL(directoryLoaded(const class QString &)), that, SLOT(slot_proxy_func__ZN16QFileSystemModel15directoryLoadedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileSystemModel_SlotProxy_disconnect__ZN16QFileSystemModel15directoryLoadedERK7QString(QFileSystemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileSystemModel_SlotProxy::slot_proxy_func__ZN16QFileSystemModel15rootPathChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileSystemModel_SlotProxy_connect__ZN16QFileSystemModel15rootPathChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileSystemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString = (decltype(that->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString))ffifptr;
  QObject::connect((QFileSystemModel*)sender, SIGNAL(rootPathChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN16QFileSystemModel15rootPathChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileSystemModel_SlotProxy_disconnect__ZN16QFileSystemModel15rootPathChangedERK7QString(QFileSystemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileSystemModel_SlotProxy::slot_proxy_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(const QString & arg0, const QString & arg1, const QString & arg2) {
  if (this->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_ != NULL) {
    // do smth...
    this->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QFileSystemModel_SlotProxy_connect__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileSystemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_ = (decltype(that->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_))ffifptr;
  QObject::connect((QFileSystemModel*)sender, SIGNAL(fileRenamed(const class QString &, const class QString &, const class QString &)), that, SLOT(slot_proxy_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(const QString & arg0, const QString & arg1, const QString & arg2)));
  return that;
}
extern "C"
void QFileSystemModel_SlotProxy_disconnect__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(QFileSystemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

