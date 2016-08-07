// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qdirmodel.h
// dst-file: /src/widgets/qdirmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdirmodel.h>


#include <qdir.h>
#include <qabstractitemmodel.h>
#include <qvariant.h>
#include <qstringlist.h>
#include <qstring.h>
#include <qnamespace.h>
#include <qicon.h>
#include <qfileinfo.h>
// <= header block end

// main block begin =>
void __keep_qdirmodel_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDirModel_Class_Size()
{
  return sizeof(QDirModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 107, column 21>
//   // proto:  QDir::SortFlags QDirModel::sorting();
// _ZNK9QDirModel7sortingEv sorting()
extern "C"
QFlags<QDir::SortFlag>*
C_ZNK9QDirModel7sortingEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->sorting();
  return new QFlags<QDir::SortFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 98, column 24>
//   // proto:  QFileIconProvider * QDirModel::iconProvider();
// _ZNK9QDirModel12iconProviderEv iconProvider()
extern "C"
void*
C_ZNK9QDirModel12iconProviderEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->iconProvider();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 74, column 17>
//   // proto:  QModelIndex QDirModel::parent(const QModelIndex & child);
// _ZNK9QDirModel6parentERK11QModelIndex parent(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK9QDirModel6parentERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->parent(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 79, column 14>
//   // proto:  QVariant QDirModel::data(const QModelIndex & index, int role);
// _ZNK9QDirModel4dataERK11QModelIndexi data(const class QModelIndex &, int)
extern "C"
QVariant*
C_ZNK9QDirModel4dataERK11QModelIndexi(void *qthis,
const QModelIndex* arg1,
int arg2) {
  auto ret =
  ((QDirModel*)qthis)->data(*((const QModelIndex*)arg1),
arg2);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 106, column 10>
//   // proto:  void QDirModel::setSorting(QDir::SortFlags sort);
// _ZN9QDirModel10setSortingE6QFlagsIN4QDir8SortFlagEE setSorting(class QDir::SortFlags)
extern "C"
void
C_ZN9QDirModel10setSortingE6QFlagsIN4QDir8SortFlagEE(void *qthis,
QDir::SortFlags* arg1) {
  ((QDirModel*)qthis)->setSorting(*((QDir::SortFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 68, column 5>
//   // proto:  void QDirModel::QDirModel(const QStringList & nameFilters, QDir::Filters filters, QDir::SortFlags sort, QObject * parent);
extern "C"
QDirModel*
C_ZN9QDirModelC2ERK11QStringList6QFlagsIN4QDir6FilterEES3_INS4_8SortFlagEEP7QObject(const QStringList* arg1,
QDir::Filters* arg2,
QDir::SortFlags* arg3,
QObject * arg4) {
  auto ret = new QDirModel(*((const QStringList*)arg1),
*((QDir::Filters*)arg2),
*((QDir::SortFlags*)arg3),
arg4);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 101, column 17>
//   // proto:  QStringList QDirModel::nameFilters();
// _ZNK9QDirModel11nameFiltersEv nameFilters()
extern "C"
QStringList*
C_ZNK9QDirModel11nameFiltersEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->nameFilters();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 113, column 10>
//   // proto:  bool QDirModel::isReadOnly();
// _ZNK9QDirModel10isReadOnlyEv isReadOnly()
extern "C"
bool
C_ZNK9QDirModel10isReadOnlyEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->isReadOnly();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 90, column 16>
//   // proto:  QMimeData * QDirModel::mimeData(const QModelIndexList & indexes);
// _ZNK9QDirModel8mimeDataERK5QListI11QModelIndexE mimeData(const QModelIndexList &)
extern "C"
void*
C_ZNK9QDirModel8mimeDataERK5QListI11QModelIndexE(void *qthis,
const QModelIndexList* arg1) {
  auto ret =
  ((QDirModel*)qthis)->mimeData(*((const QModelIndexList*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 77, column 9>
//   // proto:  int QDirModel::columnCount(const QModelIndex & parent);
// _ZNK9QDirModel11columnCountERK11QModelIndex columnCount(const class QModelIndex &)
extern "C"
int
C_ZNK9QDirModel11columnCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->columnCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 89, column 17>
//   // proto:  QStringList QDirModel::mimeTypes();
// _ZNK9QDirModel9mimeTypesEv mimeTypes()
extern "C"
QStringList*
C_ZNK9QDirModel9mimeTypesEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->mimeTypes();
  return new QStringList(ret); // 5
}
//   // proto:  void QDirModel::~QDirModel();
extern "C"
void C_ZN9QDirModelD2Ev(void *qthis) {
  delete (QDirModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 123, column 10>
//   // proto:  bool QDirModel::remove(const QModelIndex & index);
// _ZN9QDirModel6removeERK11QModelIndex remove(const class QModelIndex &)
extern "C"
bool
C_ZN9QDirModel6removeERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->remove(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 126, column 13>
//   // proto:  QString QDirModel::fileName(const QModelIndex & index);
// _ZNK9QDirModel8fileNameERK11QModelIndex fileName(const class QModelIndex &)
extern "C"
QString*
C_ZNK9QDirModel8fileNameERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->fileName(*((const QModelIndex*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 56, column 5>
//   // proto:  const QMetaObject * QDirModel::metaObject();
// _ZNK9QDirModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QDirModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 87, column 10>
//   // proto:  void QDirModel::sort(int column, Qt::SortOrder order);
// _ZN9QDirModel4sortEiN2Qt9SortOrderE sort(int, Qt::SortOrder)
extern "C"
void
C_ZN9QDirModel4sortEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QDirModel*)qthis)->sort(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 110, column 10>
//   // proto:  bool QDirModel::resolveSymlinks();
// _ZNK9QDirModel15resolveSymlinksEv resolveSymlinks()
extern "C"
bool
C_ZNK9QDirModel15resolveSymlinksEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->resolveSymlinks();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 85, column 19>
//   // proto:  Qt::ItemFlags QDirModel::flags(const QModelIndex & index);
// _ZNK9QDirModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK9QDirModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 103, column 10>
//   // proto:  void QDirModel::setFilter(QDir::Filters filters);
// _ZN9QDirModel9setFilterE6QFlagsIN4QDir6FilterEE setFilter(class QDir::Filters)
extern "C"
void
C_ZN9QDirModel9setFilterE6QFlagsIN4QDir6FilterEE(void *qthis,
QDir::Filters* arg1) {
  ((QDirModel*)qthis)->setFilter(*((QDir::Filters*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 133, column 10>
//   // proto:  void QDirModel::refresh(const QModelIndex & parent);
// _ZN9QDirModel7refreshERK11QModelIndex refresh(const class QModelIndex &)
extern "C"
void
C_ZN9QDirModel7refreshERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QDirModel*)qthis)->refresh(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 100, column 10>
//   // proto:  void QDirModel::setNameFilters(const QStringList & filters);
// _ZN9QDirModel14setNameFiltersERK11QStringList setNameFilters(const class QStringList &)
extern "C"
void
C_ZN9QDirModel14setNameFiltersERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QDirModel*)qthis)->setNameFilters(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 97, column 10>
//   // proto:  void QDirModel::setIconProvider(QFileIconProvider * provider);
// _ZN9QDirModel15setIconProviderEP17QFileIconProvider setIconProvider(class QFileIconProvider *)
extern "C"
void
C_ZN9QDirModel15setIconProviderEP17QFileIconProvider(void *qthis,
QFileIconProvider * arg1) {
  ((QDirModel*)qthis)->setIconProvider(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 91, column 10>
//   // proto:  bool QDirModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN9QDirModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN9QDirModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QDirModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 73, column 17>
//   // proto:  QModelIndex QDirModel::index(int row, int column, const QModelIndex & parent);
// _ZNK9QDirModel5indexEiiRK11QModelIndex index(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK9QDirModel5indexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QDirModel*)qthis)->index(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 70, column 14>
//   // proto:  void QDirModel::QDirModel(QObject * parent);
extern "C"
QDirModel*
C_ZN9QDirModelC2EP7QObject(QObject * arg1) {
  auto ret = new QDirModel(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 118, column 17>
//   // proto:  QModelIndex QDirModel::index(const QString & path, int column);
// _ZNK9QDirModel5indexERK7QStringi index(const class QString &, int)
extern "C"
QModelIndex*
C_ZNK9QDirModel5indexERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  auto ret =
  ((QDirModel*)qthis)->index(*((const QString*)arg1),
arg2);
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 80, column 10>
//   // proto:  bool QDirModel::setData(const QModelIndex & index, const QVariant & value, int role);
// _ZN9QDirModel7setDataERK11QModelIndexRK8QVarianti setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool
C_ZN9QDirModel7setDataERK11QModelIndexRK8QVarianti(void *qthis,
const QModelIndex* arg1,
const QVariant* arg2,
int arg3) {
  auto ret =
  ((QDirModel*)qthis)->setData(*((const QModelIndex*)arg1),
*((const QVariant*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 115, column 10>
//   // proto:  void QDirModel::setLazyChildCount(bool enable);
// _ZN9QDirModel17setLazyChildCountEb setLazyChildCount(_Bool)
extern "C"
void
C_ZN9QDirModel17setLazyChildCountEb(void *qthis,
bool arg1) {
  ((QDirModel*)qthis)->setLazyChildCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 82, column 14>
//   // proto:  QVariant QDirModel::headerData(int section, Qt::Orientation orientation, int role);
// _ZNK9QDirModel10headerDataEiN2Qt11OrientationEi headerData(int, Qt::Orientation, int)
extern "C"
QVariant*
C_ZNK9QDirModel10headerDataEiN2Qt11OrientationEi(void *qthis,
int arg1,
Qt::Orientation* arg2,
int arg3) {
  auto ret =
  ((QDirModel*)qthis)->headerData(arg1,
*((Qt::Orientation*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 127, column 11>
//   // proto:  QIcon QDirModel::fileIcon(const QModelIndex & index);
// _ZNK9QDirModel8fileIconERK11QModelIndex fileIcon(const class QModelIndex &)
extern "C"
QIcon*
C_ZNK9QDirModel8fileIconERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->fileIcon(*((const QModelIndex*)arg1));
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 84, column 10>
//   // proto:  bool QDirModel::hasChildren(const QModelIndex & index);
// _ZNK9QDirModel11hasChildrenERK11QModelIndex hasChildren(const class QModelIndex &)
extern "C"
bool
C_ZNK9QDirModel11hasChildrenERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->hasChildren(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 120, column 10>
//   // proto:  bool QDirModel::isDir(const QModelIndex & index);
// _ZNK9QDirModel5isDirERK11QModelIndex isDir(const class QModelIndex &)
extern "C"
bool
C_ZNK9QDirModel5isDirERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->isDir(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 121, column 17>
//   // proto:  QModelIndex QDirModel::mkdir(const QModelIndex & parent, const QString & name);
// _ZN9QDirModel5mkdirERK11QModelIndexRK7QString mkdir(const class QModelIndex &, const class QString &)
extern "C"
QModelIndex*
C_ZN9QDirModel5mkdirERK11QModelIndexRK7QString(void *qthis,
const QModelIndex* arg1,
const QString* arg2) {
  auto ret =
  ((QDirModel*)qthis)->mkdir(*((const QModelIndex*)arg1),
*((const QString*)arg2));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 93, column 21>
//   // proto:  Qt::DropActions QDirModel::supportedDropActions();
// _ZNK9QDirModel20supportedDropActionsEv supportedDropActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK9QDirModel20supportedDropActionsEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->supportedDropActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 122, column 10>
//   // proto:  bool QDirModel::rmdir(const QModelIndex & index);
// _ZN9QDirModel5rmdirERK11QModelIndex rmdir(const class QModelIndex &)
extern "C"
bool
C_ZN9QDirModel5rmdirERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->rmdir(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 104, column 19>
//   // proto:  QDir::Filters QDirModel::filter();
// _ZNK9QDirModel6filterEv filter()
extern "C"
QFlags<QDir::Filter>*
C_ZNK9QDirModel6filterEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->filter();
  return new QFlags<QDir::Filter>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 125, column 13>
//   // proto:  QString QDirModel::filePath(const QModelIndex & index);
// _ZNK9QDirModel8filePathERK11QModelIndex filePath(const class QModelIndex &)
extern "C"
QString*
C_ZNK9QDirModel8filePathERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->filePath(*((const QModelIndex*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 76, column 9>
//   // proto:  int QDirModel::rowCount(const QModelIndex & parent);
// _ZNK9QDirModel8rowCountERK11QModelIndex rowCount(const class QModelIndex &)
extern "C"
int
C_ZNK9QDirModel8rowCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->rowCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 112, column 10>
//   // proto:  void QDirModel::setReadOnly(bool enable);
// _ZN9QDirModel11setReadOnlyEb setReadOnly(_Bool)
extern "C"
void
C_ZN9QDirModel11setReadOnlyEb(void *qthis,
bool arg1) {
  ((QDirModel*)qthis)->setReadOnly(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 109, column 10>
//   // proto:  void QDirModel::setResolveSymlinks(bool enable);
// _ZN9QDirModel18setResolveSymlinksEb setResolveSymlinks(_Bool)
extern "C"
void
C_ZN9QDirModel18setResolveSymlinksEb(void *qthis,
bool arg1) {
  ((QDirModel*)qthis)->setResolveSymlinks(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 116, column 10>
//   // proto:  bool QDirModel::lazyChildCount();
// _ZNK9QDirModel14lazyChildCountEv lazyChildCount()
extern "C"
bool
C_ZNK9QDirModel14lazyChildCountEv(void *qthis) {
  auto ret =
  ((QDirModel*)qthis)->lazyChildCount();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdirmodel.h', line 128, column 15>
//   // proto:  QFileInfo QDirModel::fileInfo(const QModelIndex & index);
// _ZNK9QDirModel8fileInfoERK11QModelIndex fileInfo(const class QModelIndex &)
extern "C"
QFileInfo*
C_ZNK9QDirModel8fileInfoERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QDirModel*)qthis)->fileInfo(*((const QModelIndex*)arg1));
  return new QFileInfo(ret); // 5
}
// <= ext block end

// body block begin =>
// QDirModel_SlotProxy here
class QDirModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDirModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qdirmodel.moc"

extern "C" {
  QDirModel_SlotProxy* QDirModel_SlotProxy_new()
  {
    return new QDirModel_SlotProxy();
  }
};

// <= body block end

