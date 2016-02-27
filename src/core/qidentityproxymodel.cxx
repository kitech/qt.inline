// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qidentityproxymodel.h
// dst-file: /src/core/qidentityproxymodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qidentityproxymodel.h>


#include <qitemselectionmodel.h>
#include <qabstractitemmodel.h>
#include <qvariant.h>
// <= header block end

// main block begin =>
void __keep_qidentityproxymodel_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QIdentityProxyModel_Class_Size()
{
  return sizeof(QIdentityProxyModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 72, column 10>
//   // proto:  bool QIdentityProxyModel::removeRows(int row, int count, const QModelIndex & parent);
// _ZN19QIdentityProxyModel10removeRowsEiiRK11QModelIndex removeRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN19QIdentityProxyModel10removeRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->removeRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 71, column 10>
//   // proto:  bool QIdentityProxyModel::removeColumns(int column, int count, const QModelIndex & parent);
// _ZN19QIdentityProxyModel13removeColumnsEiiRK11QModelIndex removeColumns(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN19QIdentityProxyModel13removeColumnsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->removeColumns(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 64, column 20>
//   // proto:  QItemSelection QIdentityProxyModel::mapSelectionFromSource(const QItemSelection & selection);
// _ZNK19QIdentityProxyModel22mapSelectionFromSourceERK14QItemSelection mapSelectionFromSource(const class QItemSelection &)
extern "C"
QItemSelection*
C_ZNK19QIdentityProxyModel22mapSelectionFromSourceERK14QItemSelection(void *qthis,
const QItemSelection* arg1) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->mapSelectionFromSource(*((const QItemSelection*)arg1));
  return new QItemSelection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 55, column 17>
//   // proto:  QModelIndex QIdentityProxyModel::index(int row, int column, const QModelIndex & parent);
// _ZNK19QIdentityProxyModel5indexEiiRK11QModelIndex index(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QIdentityProxyModel5indexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->index(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 70, column 10>
//   // proto:  bool QIdentityProxyModel::insertRows(int row, int count, const QModelIndex & parent);
// _ZN19QIdentityProxyModel10insertRowsEiiRK11QModelIndex insertRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN19QIdentityProxyModel10insertRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->insertRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 69, column 10>
//   // proto:  bool QIdentityProxyModel::insertColumns(int column, int count, const QModelIndex & parent);
// _ZN19QIdentityProxyModel13insertColumnsEiiRK11QModelIndex insertColumns(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN19QIdentityProxyModel13insertColumnsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->insertColumns(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 62, column 17>
//   // proto:  QModelIndex QIdentityProxyModel::sibling(int row, int column, const QModelIndex & idx);
// _ZNK19QIdentityProxyModel7siblingEiiRK11QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QIdentityProxyModel7siblingEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->sibling(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 66, column 21>
//   // proto:  QModelIndexList QIdentityProxyModel::match(const QModelIndex & start, int role, const QVariant & value, int hits, Qt::MatchFlags flags);
// _ZNK19QIdentityProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE match(const class QModelIndex &, int, const class QVariant &, int, Qt::MatchFlags)
extern "C"
QList<QModelIndex>*
C_ZNK19QIdentityProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *qthis,
const QModelIndex* arg1,
int arg2,
const QVariant* arg3,
int arg4,
Qt::MatchFlags* arg5) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->match(*((const QModelIndex*)arg1),
arg2,
*((const QVariant*)arg3),
arg4,
*((Qt::MatchFlags*)arg5));
  return new QList<QModelIndex>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 49, column 5>
//   // proto:  const QMetaObject * QIdentityProxyModel::metaObject();
// _ZNK19QIdentityProxyModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QIdentityProxyModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QIdentityProxyModel::~QIdentityProxyModel();
extern "C"
void C_ZN19QIdentityProxyModelD2Ev(void *qthis) {
  delete (QIdentityProxyModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 58, column 17>
//   // proto:  QModelIndex QIdentityProxyModel::parent(const QModelIndex & child);
// _ZNK19QIdentityProxyModel6parentERK11QModelIndex parent(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QIdentityProxyModel6parentERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->parent(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 67, column 10>
//   // proto:  void QIdentityProxyModel::setSourceModel(QAbstractItemModel * sourceModel);
// _ZN19QIdentityProxyModel14setSourceModelEP18QAbstractItemModel setSourceModel(class QAbstractItemModel *)
extern "C"
void
C_ZN19QIdentityProxyModel14setSourceModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QIdentityProxyModel*)qthis)->setSourceModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 61, column 10>
//   // proto:  bool QIdentityProxyModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN19QIdentityProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN19QIdentityProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 57, column 17>
//   // proto:  QModelIndex QIdentityProxyModel::mapToSource(const QModelIndex & proxyIndex);
// _ZNK19QIdentityProxyModel11mapToSourceERK11QModelIndex mapToSource(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QIdentityProxyModel11mapToSourceERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->mapToSource(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 56, column 17>
//   // proto:  QModelIndex QIdentityProxyModel::mapFromSource(const QModelIndex & sourceIndex);
// _ZNK19QIdentityProxyModel13mapFromSourceERK11QModelIndex mapFromSource(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QIdentityProxyModel13mapFromSourceERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->mapFromSource(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 51, column 14>
//   // proto:  void QIdentityProxyModel::QIdentityProxyModel(QObject * parent);
extern "C"
QIdentityProxyModel*
C_ZN19QIdentityProxyModelC2EP7QObject(QObject * arg1) {
  auto ret = new QIdentityProxyModel(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 54, column 9>
//   // proto:  int QIdentityProxyModel::columnCount(const QModelIndex & parent);
// _ZNK19QIdentityProxyModel11columnCountERK11QModelIndex columnCount(const class QModelIndex &)
extern "C"
int
C_ZNK19QIdentityProxyModel11columnCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->columnCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 65, column 20>
//   // proto:  QItemSelection QIdentityProxyModel::mapSelectionToSource(const QItemSelection & selection);
// _ZNK19QIdentityProxyModel20mapSelectionToSourceERK14QItemSelection mapSelectionToSource(const class QItemSelection &)
extern "C"
QItemSelection*
C_ZNK19QIdentityProxyModel20mapSelectionToSourceERK14QItemSelection(void *qthis,
const QItemSelection* arg1) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->mapSelectionToSource(*((const QItemSelection*)arg1));
  return new QItemSelection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 60, column 14>
//   // proto:  QVariant QIdentityProxyModel::headerData(int section, Qt::Orientation orientation, int role);
// _ZNK19QIdentityProxyModel10headerDataEiN2Qt11OrientationEi headerData(int, Qt::Orientation, int)
extern "C"
QVariant*
C_ZNK19QIdentityProxyModel10headerDataEiN2Qt11OrientationEi(void *qthis,
int arg1,
Qt::Orientation* arg2,
int arg3) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->headerData(arg1,
*((Qt::Orientation*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qidentityproxymodel.h', line 59, column 9>
//   // proto:  int QIdentityProxyModel::rowCount(const QModelIndex & parent);
// _ZNK19QIdentityProxyModel8rowCountERK11QModelIndex rowCount(const class QModelIndex &)
extern "C"
int
C_ZNK19QIdentityProxyModel8rowCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QIdentityProxyModel*)qthis)->rowCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QIdentityProxyModel_SlotProxy here
class QIdentityProxyModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QIdentityProxyModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qidentityproxymodel.moc"

extern "C" {
  QIdentityProxyModel_SlotProxy* QIdentityProxyModel_SlotProxy_new()
  {
    return new QIdentityProxyModel_SlotProxy();
  }
};

// <= body block end

