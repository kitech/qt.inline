// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qabstractproxymodel.h
// dst-file: /src/core/qabstractproxymodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractproxymodel.h>


#include <qstringlist.h>
#include <qitemselectionmodel.h>
#include <qvariant.h>
#include <qnamespace.h>
#include <qsize.h>
#include <qabstractitemmodel.h>
#include <qmap.h>
// <= header block end

// main block begin =>
void __keep_qabstractproxymodel_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractProxyModel_Class_Size()
{
  return sizeof(QAbstractProxyModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 90, column 17>
//   // proto:  QStringList QAbstractProxyModel::mimeTypes();
// _ZNK19QAbstractProxyModel9mimeTypesEv mimeTypes()
extern "C"
QStringList*
C_ZNK19QAbstractProxyModel9mimeTypesEv(void *qthis) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->mimeTypes();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 86, column 10>
//   // proto:  bool QAbstractProxyModel::canDropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZNK19QAbstractProxyModel15canDropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex canDropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZNK19QAbstractProxyModel15canDropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->canDropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 66, column 10>
//   // proto:  void QAbstractProxyModel::revert();
// _ZN19QAbstractProxyModel6revertEv revert()
extern "C"
void
C_ZN19QAbstractProxyModel6revertEv(void *qthis) {
  ((QAbstractProxyModel*)qthis)->revert();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 62, column 40>
//   // proto:  QItemSelection QAbstractProxyModel::mapSelectionToSource(const QItemSelection & selection);
// _ZNK19QAbstractProxyModel20mapSelectionToSourceERK14QItemSelection mapSelectionToSource(const class QItemSelection &)
extern "C"
QItemSelection*
C_ZNK19QAbstractProxyModel20mapSelectionToSourceERK14QItemSelection(void *qthis,
const QItemSelection* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->mapSelectionToSource(*((const QItemSelection*)arg1));
  return new QItemSelection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 63, column 40>
//   // proto:  QItemSelection QAbstractProxyModel::mapSelectionFromSource(const QItemSelection & selection);
// _ZNK19QAbstractProxyModel22mapSelectionFromSourceERK14QItemSelection mapSelectionFromSource(const class QItemSelection &)
extern "C"
QItemSelection*
C_ZNK19QAbstractProxyModel22mapSelectionFromSourceERK14QItemSelection(void *qthis,
const QItemSelection* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->mapSelectionFromSource(*((const QItemSelection*)arg1));
  return new QItemSelection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 68, column 14>
//   // proto:  QVariant QAbstractProxyModel::data(const QModelIndex & proxyIndex, int role);
// _ZNK19QAbstractProxyModel4dataERK11QModelIndexi data(const class QModelIndex &, int)
extern "C"
QVariant*
C_ZNK19QAbstractProxyModel4dataERK11QModelIndexi(void *qthis,
const QModelIndex* arg1,
int arg2) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->data(*((const QModelIndex*)arg1),
arg2);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 88, column 10>
//   // proto:  bool QAbstractProxyModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN19QAbstractProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN19QAbstractProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 85, column 16>
//   // proto:  QMimeData * QAbstractProxyModel::mimeData(const QModelIndexList & indexes);
// _ZNK19QAbstractProxyModel8mimeDataERK5QListI11QModelIndexE mimeData(const QModelIndexList &)
extern "C"
void*
C_ZNK19QAbstractProxyModel8mimeDataERK5QListI11QModelIndexE(void *qthis,
const QModelIndexList* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->mimeData(*((const QModelIndexList*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 65, column 10>
//   // proto:  bool QAbstractProxyModel::submit();
// _ZN19QAbstractProxyModel6submitEv submit()
extern "C"
bool
C_ZN19QAbstractProxyModel6submitEv(void *qthis) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->submit();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 91, column 21>
//   // proto:  Qt::DropActions QAbstractProxyModel::supportedDragActions();
// _ZNK19QAbstractProxyModel20supportedDragActionsEv supportedDragActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK19QAbstractProxyModel20supportedDragActionsEv(void *qthis) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->supportedDragActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 81, column 11>
//   // proto:  QSize QAbstractProxyModel::span(const QModelIndex & index);
// _ZNK19QAbstractProxyModel4spanERK11QModelIndex span(const class QModelIndex &)
extern "C"
QSize*
C_ZNK19QAbstractProxyModel4spanERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->span(*((const QModelIndex*)arg1));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 78, column 10>
//   // proto:  bool QAbstractProxyModel::canFetchMore(const QModelIndex & parent);
// _ZNK19QAbstractProxyModel12canFetchMoreERK11QModelIndex canFetchMore(const class QModelIndex &)
extern "C"
bool
C_ZNK19QAbstractProxyModel12canFetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->canFetchMore(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 49, column 5>
//   // proto:  const QMetaObject * QAbstractProxyModel::metaObject();
// _ZNK19QAbstractProxyModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QAbstractProxyModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 74, column 10>
//   // proto:  bool QAbstractProxyModel::setItemData(const QModelIndex & index, const QMap<int, QVariant> & roles);
// _ZN19QAbstractProxyModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE setItemData(const class QModelIndex &, const QMap<int, class QVariant> &)
extern "C"
bool
C_ZN19QAbstractProxyModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE(void *qthis,
const QModelIndex* arg1,
const QMap<int, QVariant>* arg2) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->setItemData(*((const QModelIndex*)arg1),
*((const QMap<int, QVariant>*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 59, column 37>
//   // proto:  QModelIndex QAbstractProxyModel::mapToSource(const QModelIndex & proxyIndex);
// _ZNK19QAbstractProxyModel11mapToSourceERK11QModelIndex mapToSource(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QAbstractProxyModel11mapToSourceERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->mapToSource(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 60, column 37>
//   // proto:  QModelIndex QAbstractProxyModel::mapFromSource(const QModelIndex & sourceIndex);
// _ZNK19QAbstractProxyModel13mapFromSourceERK11QModelIndex mapFromSource(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QAbstractProxyModel13mapFromSourceERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->mapFromSource(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 70, column 25>
//   // proto:  QMap<int, QVariant> QAbstractProxyModel::itemData(const QModelIndex & index);
// _ZNK19QAbstractProxyModel8itemDataERK11QModelIndex itemData(const class QModelIndex &)
extern "C"
QMap<int, QVariant>*
C_ZNK19QAbstractProxyModel8itemDataERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->itemData(*((const QModelIndex*)arg1));
  return new QMap<int, QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 77, column 17>
//   // proto:  QModelIndex QAbstractProxyModel::buddy(const QModelIndex & index);
// _ZNK19QAbstractProxyModel5buddyERK11QModelIndex buddy(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QAbstractProxyModel5buddyERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->buddy(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 56, column 18>
//   // proto:  void QAbstractProxyModel::setSourceModel(QAbstractItemModel * sourceModel);
// _ZN19QAbstractProxyModel14setSourceModelEP18QAbstractItemModel setSourceModel(class QAbstractItemModel *)
extern "C"
void
C_ZN19QAbstractProxyModel14setSourceModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QAbstractProxyModel*)qthis)->setSourceModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 83, column 17>
//   // proto:  QModelIndex QAbstractProxyModel::sibling(int row, int column, const QModelIndex & idx);
// _ZNK19QAbstractProxyModel7siblingEiiRK11QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QAbstractProxyModel7siblingEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->sibling(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 80, column 10>
//   // proto:  void QAbstractProxyModel::sort(int column, Qt::SortOrder order);
// _ZN19QAbstractProxyModel4sortEiN2Qt9SortOrderE sort(int, Qt::SortOrder)
extern "C"
void
C_ZN19QAbstractProxyModel4sortEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QAbstractProxyModel*)qthis)->sort(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 73, column 10>
//   // proto:  bool QAbstractProxyModel::setData(const QModelIndex & index, const QVariant & value, int role);
// _ZN19QAbstractProxyModel7setDataERK11QModelIndexRK8QVarianti setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool
C_ZN19QAbstractProxyModel7setDataERK11QModelIndexRK8QVarianti(void *qthis,
const QModelIndex* arg1,
const QVariant* arg2,
int arg3) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->setData(*((const QModelIndex*)arg1),
*((const QVariant*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 79, column 10>
//   // proto:  void QAbstractProxyModel::fetchMore(const QModelIndex & parent);
// _ZN19QAbstractProxyModel9fetchMoreERK11QModelIndex fetchMore(const class QModelIndex &)
extern "C"
void
C_ZN19QAbstractProxyModel9fetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractProxyModel*)qthis)->fetchMore(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 75, column 10>
//   // proto:  bool QAbstractProxyModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role);
// _ZN19QAbstractProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti setHeaderData(int, Qt::Orientation, const class QVariant &, int)
extern "C"
bool
C_ZN19QAbstractProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *qthis,
int arg1,
Qt::Orientation* arg2,
const QVariant* arg3,
int arg4) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->setHeaderData(arg1,
*((Qt::Orientation*)arg2),
*((const QVariant*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QAbstractProxyModel::~QAbstractProxyModel();
extern "C"
void C_ZN19QAbstractProxyModelD2Ev(void *qthis) {
  delete (QAbstractProxyModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 92, column 21>
//   // proto:  Qt::DropActions QAbstractProxyModel::supportedDropActions();
// _ZNK19QAbstractProxyModel20supportedDropActionsEv supportedDropActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK19QAbstractProxyModel20supportedDropActionsEv(void *qthis) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->supportedDropActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 53, column 14>
//   // proto:  void QAbstractProxyModel::QAbstractProxyModel(QObject * parent);
extern "C"
QAbstractProxyModel*
C_ZN19QAbstractProxyModelC2EP7QObject(QObject * arg1) {
  // auto ret = new QAbstractProxyModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 82, column 10>
//   // proto:  bool QAbstractProxyModel::hasChildren(const QModelIndex & parent);
// _ZNK19QAbstractProxyModel11hasChildrenERK11QModelIndex hasChildren(const class QModelIndex &)
extern "C"
bool
C_ZNK19QAbstractProxyModel11hasChildrenERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->hasChildren(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 71, column 19>
//   // proto:  Qt::ItemFlags QAbstractProxyModel::flags(const QModelIndex & index);
// _ZNK19QAbstractProxyModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK19QAbstractProxyModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 57, column 25>
//   // proto:  QAbstractItemModel * QAbstractProxyModel::sourceModel();
// _ZNK19QAbstractProxyModel11sourceModelEv sourceModel()
extern "C"
void*
C_ZNK19QAbstractProxyModel11sourceModelEv(void *qthis) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->sourceModel();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractproxymodel.h', line 69, column 14>
//   // proto:  QVariant QAbstractProxyModel::headerData(int section, Qt::Orientation orientation, int role);
// _ZNK19QAbstractProxyModel10headerDataEiN2Qt11OrientationEi headerData(int, Qt::Orientation, int)
extern "C"
QVariant*
C_ZNK19QAbstractProxyModel10headerDataEiN2Qt11OrientationEi(void *qthis,
int arg1,
Qt::Orientation* arg2,
int arg3) {
  auto ret =
  ((QAbstractProxyModel*)qthis)->headerData(arg1,
*((Qt::Orientation*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <= ext block end

// body block begin =>
// QAbstractProxyModel_SlotProxy here
class QAbstractProxyModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractProxyModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qabstractproxymodel.moc"

extern "C" {
  QAbstractProxyModel_SlotProxy* QAbstractProxyModel_SlotProxy_new()
  {
    return new QAbstractProxyModel_SlotProxy();
  }
};

// <= body block end

