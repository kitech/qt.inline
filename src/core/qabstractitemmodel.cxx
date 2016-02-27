// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qabstractitemmodel.h
// dst-file: /src/core/qabstractitemmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractitemmodel.h>


#include <qglobal.h>
#include <qvariant.h>
#include <qnamespace.h>
#include <qhash.h>
#include <qdatastream.h>
#include <qsize.h>
#include <qmap.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qabstractitemmodel_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 52, column 29>
//   // proto:  void QModelIndex::QModelIndex();
if (true) {
  auto f = []() {
    new QModelIndex();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 55, column 33>
//   // proto:  int QModelIndex::column();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->column();
    flythis.column();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex6columnEv column()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 56, column 38>
//   // proto:  quintptr QModelIndex::internalId();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->internalId();
    flythis.internalId();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex10internalIdEv internalId()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 60, column 24>
//   // proto:  QModelIndex QModelIndex::child(int row, int column);
if (true) {
  auto f = [](QModelIndex flythis, int arg1, int arg2) {
    ((QModelIndex*)0)->child(arg1, arg2);
    flythis.child(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex5childEii child(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 57, column 18>
//   // proto:  void * QModelIndex::internalPointer();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->internalPointer();
    flythis.internalPointer();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex15internalPointerEv internalPointer()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 64, column 34>
//   // proto:  bool QModelIndex::isValid();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 58, column 24>
//   // proto:  QModelIndex QModelIndex::parent();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->parent();
    flythis.parent();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex6parentEv parent()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 59, column 24>
//   // proto:  QModelIndex QModelIndex::sibling(int row, int column);
if (true) {
  auto f = [](QModelIndex flythis, int arg1, int arg2) {
    ((QModelIndex*)0)->sibling(arg1, arg2);
    flythis.sibling(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex7siblingEii sibling(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 63, column 55>
//   // proto:  const QAbstractItemModel * QModelIndex::model();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->model();
    flythis.model();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex5modelEv model()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 61, column 21>
//   // proto:  QVariant QModelIndex::data(int role);
if (true) {
  auto f = [](QModelIndex flythis, int arg1) {
    ((QModelIndex*)0)->data(arg1);
    flythis.data(arg1);
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex4dataEi data(int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 62, column 26>
//   // proto:  Qt::ItemFlags QModelIndex::flags();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->flags();
    flythis.flags();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 54, column 33>
//   // proto:  int QModelIndex::row();
if (true) {
  auto f = [](QModelIndex flythis) {
    ((QModelIndex*)0)->row();
    flythis.row();
  };
  if (f == nullptr){}
}
// _ZNK11QModelIndex3rowEv row()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 109, column 12>
//   // proto:  void QPersistentModelIndex::QPersistentModelIndex(QPersistentModelIndex && other);
if (true) {
  auto f = [](QPersistentModelIndex && arg1) {
    new QPersistentModelIndex(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 114, column 17>
//   // proto:  void QPersistentModelIndex::swap(QPersistentModelIndex & other);
if (true) {
  auto f = [](QPersistentModelIndex flythis, QPersistentModelIndex & arg1) {
    ((QPersistentModelIndex*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN21QPersistentModelIndex4swapERS_ swap(class QPersistentModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 217, column 17>
//   // proto:  bool QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild);
if (true) {
  auto f = [](const QModelIndex & arg1, int arg2, const QModelIndex & arg3, int arg4) {
    ((QAbstractItemModel*)0)->moveColumn(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i moveColumn(const class QModelIndex &, int, const class QModelIndex &, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 211, column 17>
//   // proto:  bool QAbstractItemModel::insertRow(int row, const QModelIndex & parent);
if (true) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->insertRow(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN18QAbstractItemModel9insertRowEiRK11QModelIndex insertRow(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 213, column 17>
//   // proto:  bool QAbstractItemModel::removeRow(int row, const QModelIndex & parent);
if (true) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->removeRow(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN18QAbstractItemModel9removeRowEiRK11QModelIndex removeRow(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 215, column 17>
//   // proto:  bool QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild);
if (true) {
  auto f = [](const QModelIndex & arg1, int arg2, const QModelIndex & arg3, int arg4) {
    ((QAbstractItemModel*)0)->moveRow(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i moveRow(const class QModelIndex &, int, const class QModelIndex &, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 214, column 17>
//   // proto:  bool QAbstractItemModel::removeColumn(int column, const QModelIndex & parent);
if (true) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->removeColumn(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex removeColumn(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 212, column 17>
//   // proto:  bool QAbstractItemModel::insertColumn(int column, const QModelIndex & parent);
if (true) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->insertColumn(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex insertColumn(int, const class QModelIndex &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QModelIndex_Class_Size()
{
  return sizeof(QModelIndex);
}

extern "C"
int QPersistentModelIndex_Class_Size()
{
  return sizeof(QPersistentModelIndex);
}

extern "C"
int QAbstractTableModel_Class_Size()
{
  return sizeof(QAbstractTableModel);
}

extern "C"
int QAbstractItemModel_Class_Size()
{
  return sizeof(QAbstractItemModel);
}

extern "C"
int QAbstractListModel_Class_Size()
{
  return sizeof(QAbstractListModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 52, column 29>
//   // proto:  void QModelIndex::QModelIndex();
extern "C"
QModelIndex*
C_ZN11QModelIndexC2Ev() {
  auto ret = new QModelIndex();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 55, column 33>
//   // proto:  int QModelIndex::column();
// _ZNK11QModelIndex6columnEv column()
extern "C"
int
C_ZNK11QModelIndex6columnEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->column();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 56, column 38>
//   // proto:  quintptr QModelIndex::internalId();
// _ZNK11QModelIndex10internalIdEv internalId()
extern "C"
int
C_ZNK11QModelIndex10internalIdEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->internalId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 60, column 24>
//   // proto:  QModelIndex QModelIndex::child(int row, int column);
// _ZNK11QModelIndex5childEii child(int, int)
extern "C"
QModelIndex*
C_ZNK11QModelIndex5childEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QModelIndex*)qthis)->child(arg1,
arg2);
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 57, column 18>
//   // proto:  void * QModelIndex::internalPointer();
// _ZNK11QModelIndex15internalPointerEv internalPointer()
extern "C"
void*
C_ZNK11QModelIndex15internalPointerEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->internalPointer();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 64, column 34>
//   // proto:  bool QModelIndex::isValid();
// _ZNK11QModelIndex7isValidEv isValid()
extern "C"
bool
C_ZNK11QModelIndex7isValidEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 58, column 24>
//   // proto:  QModelIndex QModelIndex::parent();
// _ZNK11QModelIndex6parentEv parent()
extern "C"
QModelIndex*
C_ZNK11QModelIndex6parentEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->parent();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 59, column 24>
//   // proto:  QModelIndex QModelIndex::sibling(int row, int column);
// _ZNK11QModelIndex7siblingEii sibling(int, int)
extern "C"
QModelIndex*
C_ZNK11QModelIndex7siblingEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QModelIndex*)qthis)->sibling(arg1,
arg2);
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 63, column 55>
//   // proto:  const QAbstractItemModel * QModelIndex::model();
// _ZNK11QModelIndex5modelEv model()
extern "C"
void*
C_ZNK11QModelIndex5modelEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 61, column 21>
//   // proto:  QVariant QModelIndex::data(int role);
// _ZNK11QModelIndex4dataEi data(int)
extern "C"
QVariant*
C_ZNK11QModelIndex4dataEi(void *qthis,
int arg1) {
  auto ret =
  ((QModelIndex*)qthis)->data(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 62, column 26>
//   // proto:  Qt::ItemFlags QModelIndex::flags();
// _ZNK11QModelIndex5flagsEv flags()
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK11QModelIndex5flagsEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->flags();
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 54, column 33>
//   // proto:  int QModelIndex::row();
// _ZNK11QModelIndex3rowEv row()
extern "C"
int
C_ZNK11QModelIndex3rowEv(void *qthis) {
  auto ret =
  ((QModelIndex*)qthis)->row();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 124, column 17>
//   // proto:  QModelIndex QPersistentModelIndex::sibling(int row, int column);
// _ZNK21QPersistentModelIndex7siblingEii sibling(int, int)
extern "C"
QModelIndex*
C_ZNK21QPersistentModelIndex7siblingEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->sibling(arg1,
arg2);
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 126, column 14>
//   // proto:  QVariant QPersistentModelIndex::data(int role);
// _ZNK21QPersistentModelIndex4dataEi data(int)
extern "C"
QVariant*
C_ZNK21QPersistentModelIndex4dataEi(void *qthis,
int arg1) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->data(arg1);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 127, column 19>
//   // proto:  Qt::ItemFlags QPersistentModelIndex::flags();
// _ZNK21QPersistentModelIndex5flagsEv flags()
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK21QPersistentModelIndex5flagsEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->flags();
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 123, column 17>
//   // proto:  QModelIndex QPersistentModelIndex::parent();
// _ZNK21QPersistentModelIndex6parentEv parent()
extern "C"
QModelIndex*
C_ZNK21QPersistentModelIndex6parentEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->parent();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 101, column 5>
//   // proto:  void QPersistentModelIndex::QPersistentModelIndex(const QPersistentModelIndex & other);
extern "C"
QPersistentModelIndex*
C_ZN21QPersistentModelIndexC2ERKS_(const QPersistentModelIndex* arg1) {
  auto ret = new QPersistentModelIndex(*((const QPersistentModelIndex*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 121, column 11>
//   // proto:  void * QPersistentModelIndex::internalPointer();
// _ZNK21QPersistentModelIndex15internalPointerEv internalPointer()
extern "C"
void*
C_ZNK21QPersistentModelIndex15internalPointerEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->internalPointer();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 109, column 12>
//   // proto:  void QPersistentModelIndex::QPersistentModelIndex(QPersistentModelIndex && other);
extern "C"
QPersistentModelIndex*
C_ZN21QPersistentModelIndexC2EOS_(QPersistentModelIndex* arg1) {
  auto ret = new QPersistentModelIndex(*((QPersistentModelIndex*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 119, column 9>
//   // proto:  int QPersistentModelIndex::row();
// _ZNK21QPersistentModelIndex3rowEv row()
extern "C"
int
C_ZNK21QPersistentModelIndex3rowEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->row();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 122, column 14>
//   // proto:  quintptr QPersistentModelIndex::internalId();
// _ZNK21QPersistentModelIndex10internalIdEv internalId()
extern "C"
int
C_ZNK21QPersistentModelIndex10internalIdEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->internalId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 128, column 31>
//   // proto:  const QAbstractItemModel * QPersistentModelIndex::model();
// _ZNK21QPersistentModelIndex5modelEv model()
extern "C"
void*
C_ZNK21QPersistentModelIndex5modelEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->model();
  return (void*)ret;
}
//   // proto:  void QPersistentModelIndex::~QPersistentModelIndex();
extern "C"
void C_ZN21QPersistentModelIndexD2Ev(void *qthis) {
  delete (QPersistentModelIndex*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 100, column 5>
//   // proto:  void QPersistentModelIndex::QPersistentModelIndex(const QModelIndex & index);
extern "C"
QPersistentModelIndex*
C_ZN21QPersistentModelIndexC2ERK11QModelIndex(const QModelIndex* arg1) {
  auto ret = new QPersistentModelIndex(*((const QModelIndex*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 99, column 5>
//   // proto:  void QPersistentModelIndex::QPersistentModelIndex();
extern "C"
QPersistentModelIndex*
C_ZN21QPersistentModelIndexC2Ev() {
  auto ret = new QPersistentModelIndex();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 120, column 9>
//   // proto:  int QPersistentModelIndex::column();
// _ZNK21QPersistentModelIndex6columnEv column()
extern "C"
int
C_ZNK21QPersistentModelIndex6columnEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->column();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 114, column 17>
//   // proto:  void QPersistentModelIndex::swap(QPersistentModelIndex & other);
// _ZN21QPersistentModelIndex4swapERS_ swap(class QPersistentModelIndex &)
extern "C"
void
C_ZN21QPersistentModelIndex4swapERS_(void *qthis,
QPersistentModelIndex* arg1) {
  ((QPersistentModelIndex*)qthis)->swap(*((QPersistentModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 125, column 17>
//   // proto:  QModelIndex QPersistentModelIndex::child(int row, int column);
// _ZNK21QPersistentModelIndex5childEii child(int, int)
extern "C"
QModelIndex*
C_ZNK21QPersistentModelIndex5childEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->child(arg1,
arg2);
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 129, column 10>
//   // proto:  bool QPersistentModelIndex::isValid();
// _ZNK21QPersistentModelIndex7isValidEv isValid()
extern "C"
bool
C_ZNK21QPersistentModelIndex7isValidEv(void *qthis) {
  auto ret =
  ((QPersistentModelIndex*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 368, column 19>
//   // proto:  Qt::ItemFlags QAbstractTableModel::flags(const QModelIndex & index);
// _ZNK19QAbstractTableModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK19QAbstractTableModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractTableModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 360, column 14>
//   // proto:  void QAbstractTableModel::QAbstractTableModel(QObject * parent);
extern "C"
QAbstractTableModel*
C_ZN19QAbstractTableModelC2EP7QObject(QObject * arg1) {
  // auto ret = new QAbstractTableModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 363, column 17>
//   // proto:  QModelIndex QAbstractTableModel::index(int row, int column, const QModelIndex & parent);
// _ZNK19QAbstractTableModel5indexEiiRK11QModelIndex index(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QAbstractTableModel5indexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractTableModel*)qthis)->index(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 364, column 17>
//   // proto:  QModelIndex QAbstractTableModel::sibling(int row, int column, const QModelIndex & idx);
// _ZNK19QAbstractTableModel7siblingEiiRK11QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK19QAbstractTableModel7siblingEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractTableModel*)qthis)->sibling(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
//   // proto:  void QAbstractTableModel::~QAbstractTableModel();
extern "C"
void C_ZN19QAbstractTableModelD2Ev(void *qthis) {
  delete (QAbstractTableModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 357, column 5>
//   // proto:  const QMetaObject * QAbstractTableModel::metaObject();
// _ZNK19QAbstractTableModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QAbstractTableModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractTableModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 365, column 10>
//   // proto:  bool QAbstractTableModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN19QAbstractTableModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN19QAbstractTableModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QAbstractTableModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 205, column 18>
//   // proto:  bool QAbstractItemModel::removeColumns(int column, int count, const QModelIndex & parent);
// _ZN18QAbstractItemModel13removeColumnsEiiRK11QModelIndex removeColumns(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel13removeColumnsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->removeColumns(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 223, column 18>
//   // proto:  void QAbstractItemModel::sort(int column, Qt::SortOrder order);
// _ZN18QAbstractItemModel4sortEiN2Qt9SortOrderE sort(int, Qt::SortOrder)
extern "C"
void
C_ZN18QAbstractItemModel4sortEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QAbstractItemModel*)qthis)->sort(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 190, column 18>
//   // proto:  bool QAbstractItemModel::canDropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZNK18QAbstractItemModel15canDropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex canDropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZNK18QAbstractItemModel15canDropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QAbstractItemModel*)qthis)->canDropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 189, column 24>
//   // proto:  QMimeData * QAbstractItemModel::mimeData(const QModelIndexList & indexes);
// _ZNK18QAbstractItemModel8mimeDataERK5QListI11QModelIndexE mimeData(const QModelIndexList &)
extern "C"
void*
C_ZNK18QAbstractItemModel8mimeDataERK5QListI11QModelIndexE(void *qthis,
const QModelIndexList* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->mimeData(*((const QModelIndexList*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 244, column 10>
//   // proto:  void QAbstractItemModel::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector<int> & roles);
// _ZN18QAbstractItemModel11dataChangedERK11QModelIndexS2_RK7QVectorIiE dataChanged(const class QModelIndex &, const class QModelIndex &, const QVector<int> &)
extern "C"
void
C_ZN18QAbstractItemModel11dataChangedERK11QModelIndexS2_RK7QVectorIiE(void *qthis,
const QModelIndex* arg1,
const QModelIndex* arg2,
const QVector<int>* arg3) {
  ((QAbstractItemModel*)qthis)->dataChanged(*((const QModelIndex*)arg1),
*((const QModelIndex*)arg2),
*((const QVector<int>*)arg3));
}
//   // proto:  void QAbstractItemModel::~QAbstractItemModel();
extern "C"
void C_ZN18QAbstractItemModelD2Ev(void *qthis) {
  delete (QAbstractItemModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 221, column 30>
//   // proto:  bool QAbstractItemModel::canFetchMore(const QModelIndex & parent);
// _ZNK18QAbstractItemModel12canFetchMoreERK11QModelIndex canFetchMore(const class QModelIndex &)
extern "C"
bool
C_ZNK18QAbstractItemModel12canFetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->canFetchMore(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 271, column 18>
//   // proto:  bool QAbstractItemModel::submit();
// _ZN18QAbstractItemModel6submitEv submit()
extern "C"
bool
C_ZN18QAbstractItemModel6submitEv(void *qthis) {
  auto ret =
  ((QAbstractItemModel*)qthis)->submit();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 167, column 22>
//   // proto:  bool QAbstractItemModel::hasIndex(int row, int column, const QModelIndex & parent);
// _ZNK18QAbstractItemModel8hasIndexEiiRK11QModelIndex hasIndex(int, int, const class QModelIndex &)
extern "C"
bool
C_ZNK18QAbstractItemModel8hasIndexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->hasIndex(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 222, column 39>
//   // proto:  Qt::ItemFlags QAbstractItemModel::flags(const QModelIndex & index);
// _ZNK18QAbstractItemModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK18QAbstractItemModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 194, column 29>
//   // proto:  Qt::DropActions QAbstractItemModel::supportedDropActions();
// _ZNK18QAbstractItemModel20supportedDropActionsEv supportedDropActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK18QAbstractItemModel20supportedDropActionsEv(void *qthis) {
  auto ret =
  ((QAbstractItemModel*)qthis)->supportedDropActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 246, column 10>
//   // proto:  void QAbstractItemModel::layoutChanged(const QList<QPersistentModelIndex> & parents, QAbstractItemModel::LayoutChangeHint hint);
// _ZN18QAbstractItemModel13layoutChangedERK5QListI21QPersistentModelIndexENS_16LayoutChangeHintE layoutChanged(const QList<class QPersistentModelIndex> &, class QAbstractItemModel::LayoutChangeHint)
extern "C"
void
C_ZN18QAbstractItemModel13layoutChangedERK5QListI21QPersistentModelIndexENS_16LayoutChangeHintE(void *qthis,
const QList<QPersistentModelIndex>* arg1,
QAbstractItemModel::LayoutChangeHint* arg2) {
  ((QAbstractItemModel*)qthis)->layoutChanged(*((const QList<QPersistentModelIndex>*)arg1),
*((QAbstractItemModel::LayoutChangeHint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 231, column 35>
//   // proto:  QHash<int, QByteArray> QAbstractItemModel::roleNames();
// _ZNK18QAbstractItemModel9roleNamesEv roleNames()
extern "C"
QHash<int, QByteArray>*
C_ZNK18QAbstractItemModel9roleNamesEv(void *qthis) {
  auto ret =
  ((QAbstractItemModel*)qthis)->roleNames();
  return new QHash<int, QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 217, column 17>
//   // proto:  bool QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild);
// _ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i moveColumn(const class QModelIndex &, int, const class QModelIndex &, int)
extern "C"
bool
C_ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i(void *qthis,
const QModelIndex* arg1,
int arg2,
const QModelIndex* arg3,
int arg4) {
  auto ret =
  ((QAbstractItemModel*)qthis)->moveColumn(*((const QModelIndex*)arg1),
arg2,
*((const QModelIndex*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 220, column 30>
//   // proto:  void QAbstractItemModel::fetchMore(const QModelIndex & parent);
// _ZN18QAbstractItemModel9fetchMoreERK11QModelIndex fetchMore(const class QModelIndex &)
extern "C"
void
C_ZN18QAbstractItemModel9fetchMoreERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QAbstractItemModel*)qthis)->fetchMore(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 245, column 10>
//   // proto:  void QAbstractItemModel::headerDataChanged(Qt::Orientation orientation, int first, int last);
// _ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii headerDataChanged(Qt::Orientation, int, int)
extern "C"
void
C_ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(void *qthis,
Qt::Orientation* arg1,
int arg2,
int arg3) {
  ((QAbstractItemModel*)qthis)->headerDataChanged(*((Qt::Orientation*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 202, column 18>
//   // proto:  bool QAbstractItemModel::insertRows(int row, int count, const QModelIndex & parent);
// _ZN18QAbstractItemModel10insertRowsEiiRK11QModelIndex insertRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel10insertRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->insertRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 229, column 19>
//   // proto:  QSize QAbstractItemModel::span(const QModelIndex & index);
// _ZNK18QAbstractItemModel4spanERK11QModelIndex span(const class QModelIndex &)
extern "C"
QSize*
C_ZNK18QAbstractItemModel4spanERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->span(*((const QModelIndex*)arg1));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 186, column 18>
//   // proto:  bool QAbstractItemModel::setItemData(const QModelIndex & index, const QMap<int, QVariant> & roles);
// _ZN18QAbstractItemModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE setItemData(const class QModelIndex &, const QMap<int, class QVariant> &)
extern "C"
bool
C_ZN18QAbstractItemModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE(void *qthis,
const QModelIndex* arg1,
const QMap<int, QVariant>* arg2) {
  auto ret =
  ((QAbstractItemModel*)qthis)->setItemData(*((const QModelIndex*)arg1),
*((const QMap<int, QVariant>*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 164, column 14>
//   // proto:  void QAbstractItemModel::QAbstractItemModel(QObject * parent);
extern "C"
QAbstractItemModel*
C_ZN18QAbstractItemModelC2EP7QObject(QObject * arg1) {
  // auto ret = new QAbstractItemModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 182, column 18>
//   // proto:  bool QAbstractItemModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role);
// _ZN18QAbstractItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti setHeaderData(int, Qt::Orientation, const class QVariant &, int)
extern "C"
bool
C_ZN18QAbstractItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *qthis,
int arg1,
Qt::Orientation* arg2,
const QVariant* arg3,
int arg4) {
  auto ret =
  ((QAbstractItemModel*)qthis)->setHeaderData(arg1,
*((Qt::Orientation*)arg2),
*((const QVariant*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 168, column 37>
//   // proto:  QModelIndex QAbstractItemModel::index(int row, int column, const QModelIndex & parent);
// _ZNK18QAbstractItemModel5indexEiiRK11QModelIndex index(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK18QAbstractItemModel5indexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->index(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 211, column 17>
//   // proto:  bool QAbstractItemModel::insertRow(int row, const QModelIndex & parent);
// _ZN18QAbstractItemModel9insertRowEiRK11QModelIndex insertRow(int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel9insertRowEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QAbstractItemModel*)qthis)->insertRow(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 157, column 5>
//   // proto:  const QMetaObject * QAbstractItemModel::metaObject();
// _ZNK18QAbstractItemModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QAbstractItemModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractItemModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 213, column 17>
//   // proto:  bool QAbstractItemModel::removeRow(int row, const QModelIndex & parent);
// _ZN18QAbstractItemModel9removeRowEiRK11QModelIndex removeRow(int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel9removeRowEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QAbstractItemModel*)qthis)->removeRow(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 178, column 30>
//   // proto:  bool QAbstractItemModel::setData(const QModelIndex & index, const QVariant & value, int role);
// _ZN18QAbstractItemModel7setDataERK11QModelIndexRK8QVarianti setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool
C_ZN18QAbstractItemModel7setDataERK11QModelIndexRK8QVarianti(void *qthis,
const QModelIndex* arg1,
const QVariant* arg2,
int arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->setData(*((const QModelIndex*)arg1),
*((const QVariant*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 196, column 29>
//   // proto:  Qt::DropActions QAbstractItemModel::supportedDragActions();
// _ZNK18QAbstractItemModel20supportedDragActionsEv supportedDragActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK18QAbstractItemModel20supportedDragActionsEv(void *qthis) {
  auto ret =
  ((QAbstractItemModel*)qthis)->supportedDragActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 173, column 29>
//   // proto:  int QAbstractItemModel::rowCount(const QModelIndex & parent);
// _ZNK18QAbstractItemModel8rowCountERK11QModelIndex rowCount(const class QModelIndex &)
extern "C"
int
C_ZNK18QAbstractItemModel8rowCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->rowCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 204, column 18>
//   // proto:  bool QAbstractItemModel::removeRows(int row, int count, const QModelIndex & parent);
// _ZN18QAbstractItemModel10removeRowsEiiRK11QModelIndex removeRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel10removeRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->removeRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 175, column 30>
//   // proto:  bool QAbstractItemModel::hasChildren(const QModelIndex & parent);
// _ZNK18QAbstractItemModel11hasChildrenERK11QModelIndex hasChildren(const class QModelIndex &)
extern "C"
bool
C_ZNK18QAbstractItemModel11hasChildrenERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->hasChildren(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 247, column 10>
//   // proto:  void QAbstractItemModel::layoutAboutToBeChanged(const QList<QPersistentModelIndex> & parents, QAbstractItemModel::LayoutChangeHint hint);
// _ZN18QAbstractItemModel22layoutAboutToBeChangedERK5QListI21QPersistentModelIndexENS_16LayoutChangeHintE layoutAboutToBeChanged(const QList<class QPersistentModelIndex> &, class QAbstractItemModel::LayoutChangeHint)
extern "C"
void
C_ZN18QAbstractItemModel22layoutAboutToBeChangedERK5QListI21QPersistentModelIndexENS_16LayoutChangeHintE(void *qthis,
const QList<QPersistentModelIndex>* arg1,
QAbstractItemModel::LayoutChangeHint* arg2) {
  ((QAbstractItemModel*)qthis)->layoutAboutToBeChanged(*((const QList<QPersistentModelIndex>*)arg1),
*((QAbstractItemModel::LayoutChangeHint*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 215, column 17>
//   // proto:  bool QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild);
// _ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i moveRow(const class QModelIndex &, int, const class QModelIndex &, int)
extern "C"
bool
C_ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i(void *qthis,
const QModelIndex* arg1,
int arg2,
const QModelIndex* arg3,
int arg4) {
  auto ret =
  ((QAbstractItemModel*)qthis)->moveRow(*((const QModelIndex*)arg1),
arg2,
*((const QModelIndex*)arg3),
arg4);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 192, column 18>
//   // proto:  bool QAbstractItemModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN18QAbstractItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QAbstractItemModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 272, column 18>
//   // proto:  void QAbstractItemModel::revert();
// _ZN18QAbstractItemModel6revertEv revert()
extern "C"
void
C_ZN18QAbstractItemModel6revertEv(void *qthis) {
  ((QAbstractItemModel*)qthis)->revert();
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 225, column 41>
//   // proto:  QModelIndexList QAbstractItemModel::match(const QModelIndex & start, int role, const QVariant & value, int hits, Qt::MatchFlags flags);
// _ZNK18QAbstractItemModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE match(const class QModelIndex &, int, const class QVariant &, int, Qt::MatchFlags)
extern "C"
QList<QModelIndex>*
C_ZNK18QAbstractItemModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *qthis,
const QModelIndex* arg1,
int arg2,
const QVariant* arg3,
int arg4,
Qt::MatchFlags* arg5) {
  auto ret =
  ((QAbstractItemModel*)qthis)->match(*((const QModelIndex*)arg1),
arg2,
*((const QVariant*)arg3),
arg4,
*((Qt::MatchFlags*)arg5));
  return new QList<QModelIndex>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 214, column 17>
//   // proto:  bool QAbstractItemModel::removeColumn(int column, const QModelIndex & parent);
// _ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex removeColumn(int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QAbstractItemModel*)qthis)->removeColumn(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 203, column 18>
//   // proto:  bool QAbstractItemModel::insertColumns(int column, int count, const QModelIndex & parent);
// _ZN18QAbstractItemModel13insertColumnsEiiRK11QModelIndex insertColumns(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel13insertColumnsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->insertColumns(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 212, column 17>
//   // proto:  bool QAbstractItemModel::insertColumn(int column, const QModelIndex & parent);
// _ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex insertColumn(int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QAbstractItemModel*)qthis)->insertColumn(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 208, column 18>
//   // proto:  bool QAbstractItemModel::moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild);
// _ZN18QAbstractItemModel11moveColumnsERK11QModelIndexiiS2_i moveColumns(const class QModelIndex &, int, int, const class QModelIndex &, int)
extern "C"
bool
C_ZN18QAbstractItemModel11moveColumnsERK11QModelIndexiiS2_i(void *qthis,
const QModelIndex* arg1,
int arg2,
int arg3,
const QModelIndex* arg4,
int arg5) {
  auto ret =
  ((QAbstractItemModel*)qthis)->moveColumns(*((const QModelIndex*)arg1),
arg2,
arg3,
*((const QModelIndex*)arg4),
arg5);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 185, column 33>
//   // proto:  QMap<int, QVariant> QAbstractItemModel::itemData(const QModelIndex & index);
// _ZNK18QAbstractItemModel8itemDataERK11QModelIndex itemData(const class QModelIndex &)
extern "C"
QMap<int, QVariant>*
C_ZNK18QAbstractItemModel8itemDataERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->itemData(*((const QModelIndex*)arg1));
  return new QMap<int, QVariant>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 180, column 34>
//   // proto:  QVariant QAbstractItemModel::headerData(int section, Qt::Orientation orientation, int role);
// _ZNK18QAbstractItemModel10headerDataEiN2Qt11OrientationEi headerData(int, Qt::Orientation, int)
extern "C"
QVariant*
C_ZNK18QAbstractItemModel10headerDataEiN2Qt11OrientationEi(void *qthis,
int arg1,
Qt::Orientation* arg2,
int arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->headerData(arg1,
*((Qt::Orientation*)arg2),
arg3);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 188, column 25>
//   // proto:  QStringList QAbstractItemModel::mimeTypes();
// _ZNK18QAbstractItemModel9mimeTypesEv mimeTypes()
extern "C"
QStringList*
C_ZNK18QAbstractItemModel9mimeTypesEv(void *qthis) {
  auto ret =
  ((QAbstractItemModel*)qthis)->mimeTypes();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 170, column 37>
//   // proto:  QModelIndex QAbstractItemModel::parent(const QModelIndex & child);
// _ZNK18QAbstractItemModel6parentERK11QModelIndex parent(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK18QAbstractItemModel6parentERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->parent(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 224, column 25>
//   // proto:  QModelIndex QAbstractItemModel::buddy(const QModelIndex & index);
// _ZNK18QAbstractItemModel5buddyERK11QModelIndex buddy(const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK18QAbstractItemModel5buddyERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->buddy(*((const QModelIndex*)arg1));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 174, column 29>
//   // proto:  int QAbstractItemModel::columnCount(const QModelIndex & parent);
// _ZNK18QAbstractItemModel11columnCountERK11QModelIndex columnCount(const class QModelIndex &)
extern "C"
int
C_ZNK18QAbstractItemModel11columnCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractItemModel*)qthis)->columnCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 177, column 34>
//   // proto:  QVariant QAbstractItemModel::data(const QModelIndex & index, int role);
// _ZNK18QAbstractItemModel4dataERK11QModelIndexi data(const class QModelIndex &, int)
extern "C"
QVariant*
C_ZNK18QAbstractItemModel4dataERK11QModelIndexi(void *qthis,
const QModelIndex* arg1,
int arg2) {
  auto ret =
  ((QAbstractItemModel*)qthis)->data(*((const QModelIndex*)arg1),
arg2);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 172, column 37>
//   // proto:  QModelIndex QAbstractItemModel::sibling(int row, int column, const QModelIndex & idx);
// _ZNK18QAbstractItemModel7siblingEiiRK11QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK18QAbstractItemModel7siblingEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractItemModel*)qthis)->sibling(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 206, column 18>
//   // proto:  bool QAbstractItemModel::moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild);
// _ZN18QAbstractItemModel8moveRowsERK11QModelIndexiiS2_i moveRows(const class QModelIndex &, int, int, const class QModelIndex &, int)
extern "C"
bool
C_ZN18QAbstractItemModel8moveRowsERK11QModelIndexiiS2_i(void *qthis,
const QModelIndex* arg1,
int arg2,
int arg3,
const QModelIndex* arg4,
int arg5) {
  auto ret =
  ((QAbstractItemModel*)qthis)->moveRows(*((const QModelIndex*)arg1),
arg2,
arg3,
*((const QModelIndex*)arg4),
arg5);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 391, column 10>
//   // proto:  bool QAbstractListModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent);
// _ZN18QAbstractListModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool
C_ZN18QAbstractListModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *qthis,
const QMimeData * arg1,
Qt::DropAction* arg2,
int arg3,
int arg4,
const QModelIndex* arg5) {
  auto ret =
  ((QAbstractListModel*)qthis)->dropMimeData(arg1,
*((Qt::DropAction*)arg2),
arg3,
arg4,
*((const QModelIndex*)arg5));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 390, column 17>
//   // proto:  QModelIndex QAbstractListModel::sibling(int row, int column, const QModelIndex & idx);
// _ZNK18QAbstractListModel7siblingEiiRK11QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK18QAbstractListModel7siblingEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractListModel*)qthis)->sibling(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 386, column 14>
//   // proto:  void QAbstractListModel::QAbstractListModel(QObject * parent);
extern "C"
QAbstractListModel*
C_ZN18QAbstractListModelC2EP7QObject(QObject * arg1) {
  // auto ret = new QAbstractListModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 394, column 19>
//   // proto:  Qt::ItemFlags QAbstractListModel::flags(const QModelIndex & index);
// _ZNK18QAbstractListModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK18QAbstractListModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QAbstractListModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 383, column 5>
//   // proto:  const QMetaObject * QAbstractListModel::metaObject();
// _ZNK18QAbstractListModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QAbstractListModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractListModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 389, column 17>
//   // proto:  QModelIndex QAbstractListModel::index(int row, int column, const QModelIndex & parent);
// _ZNK18QAbstractListModel5indexEiiRK11QModelIndex index(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK18QAbstractListModel5indexEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QAbstractListModel*)qthis)->index(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
//   // proto:  void QAbstractListModel::~QAbstractListModel();
extern "C"
void C_ZN18QAbstractListModelD2Ev(void *qthis) {
  delete (QAbstractListModel*)qthis;
}
// <= ext block end

// body block begin =>
// QAbstractTableModel_SlotProxy here
class QAbstractTableModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractTableModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QAbstractTableModel_SlotProxy* QAbstractTableModel_SlotProxy_new()
  {
    return new QAbstractTableModel_SlotProxy();
  }
};

// QAbstractItemModel_SlotProxy here
class QAbstractItemModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractItemModel_SlotProxy():QObject(){}

public slots:
  // headerDataChanged(Qt::Orientation, int, int)
  void slot_proxy_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(Qt::Orientation arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii)(void* rsfptr, Qt::Orientation arg0, int arg1, int arg2) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QAbstractItemModel_SlotProxy* QAbstractItemModel_SlotProxy_new()
  {
    return new QAbstractItemModel_SlotProxy();
  }
};

void QAbstractItemModel_SlotProxy::slot_proxy_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(Qt::Orientation arg0, int arg1, int arg2) {
  if (this->slot_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii != NULL) {
    // do smth...
    this->slot_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QAbstractItemModel_SlotProxy_connect__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractItemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii = (decltype(that->slot_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii))ffifptr;
  QObject::connect((QAbstractItemModel*)sender, SIGNAL(headerDataChanged(Qt::Orientation, int, int)), that, SLOT(slot_proxy_func__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(Qt::Orientation arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QAbstractItemModel_SlotProxy_disconnect__ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(QAbstractItemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QAbstractListModel_SlotProxy here
class QAbstractListModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractListModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qabstractitemmodel.moc"

extern "C" {
  QAbstractListModel_SlotProxy* QAbstractListModel_SlotProxy_new()
  {
    return new QAbstractListModel_SlotProxy();
  }
};

// <= body block end

