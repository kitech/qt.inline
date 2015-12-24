// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qabstractitemmodel.h
// dst-file: /src/core/qabstractitemmodel.cxx
//

// header block begin =>
#include <qabstractitemmodel.h>

extern "C" {

  // proto:  QModelIndex QModelIndex::child(int row, int column);
QModelIndex* _ZNK11QModelIndex5childEii(void *that, int row, int column)

{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->child(row, column);
  return new QModelIndex(recret);
}

  // proto:  void * QModelIndex::internalPointer();
void * _ZNK11QModelIndex15internalPointerEv(void *that)

{
  QModelIndex *cthat = (QModelIndex *)that;
  return cthat->internalPointer();
}

  // proto:  QModelIndex QModelIndex::parent();
QModelIndex* _ZNK11QModelIndex6parentEv(void *that)

{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->parent();
  return new QModelIndex(recret);
}

  // proto:  QModelIndex QModelIndex::sibling(int row, int column);
QModelIndex* _ZNK11QModelIndex7siblingEii(void *that, int row, int column)

{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->sibling(row, column);
  return new QModelIndex(recret);
}

  // proto:  QVariant QModelIndex::data(int role);
QVariant* _ZNK11QModelIndex4dataEi(void *that, int role)

{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->data(role);
  return new QVariant(recret);
}

  // proto:  void QPersistentModelIndex::QPersistentModelIndex(QPersistentModelIndex && other);
void _ZN21QPersistentModelIndexC1EOS_(void *that, QPersistentModelIndex && other)

{
  QPersistentModelIndex *cthat = (QPersistentModelIndex *)that;
  auto _o = new(that) QPersistentModelIndex(other);
}

  // proto:  void QPersistentModelIndex::swap(QPersistentModelIndex & other);
void _ZN21QPersistentModelIndex4swapERS_(void *that, QPersistentModelIndex & other)

{
  QPersistentModelIndex *cthat = (QPersistentModelIndex *)that;
   cthat->swap(other);
}

  // proto:  bool QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild);
bool _ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i(void *that, const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild)

{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->moveColumn(sourceParent, sourceColumn, destinationParent, destinationChild);
}

  // proto:  bool QAbstractItemModel::insertRow(int row, const QModelIndex & parent);
bool _ZN18QAbstractItemModel9insertRowEiRK11QModelIndex(void *that, int row, const QModelIndex & parent)

{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->insertRow(row, parent);
}

  // proto:  bool QAbstractItemModel::removeRow(int row, const QModelIndex & parent);
bool _ZN18QAbstractItemModel9removeRowEiRK11QModelIndex(void *that, int row, const QModelIndex & parent)

{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->removeRow(row, parent);
}

  // proto:  bool QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild);
bool _ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i(void *that, const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild)

{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->moveRow(sourceParent, sourceRow, destinationParent, destinationChild);
}

  // proto:  bool QAbstractItemModel::removeColumn(int column, const QModelIndex & parent);
bool _ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex(void *that, int column, const QModelIndex & parent)

{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->removeColumn(column, parent);
}

  // proto:  bool QAbstractItemModel::insertColumn(int column, const QModelIndex & parent);
bool _ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex(void *that, int column, const QModelIndex & parent)

{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->insertColumn(column, parent);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

