#include <qnamespace.h>
#include <qvariant.h>
#include <qglobal.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qabstractitemmodel.h
// dst-file: /src/core/qabstractitemmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qabstractitemmodel.h>

extern "C" {

int QModelIndex_Class_Size()
{
  return sizeof(QModelIndex);
}

int QPersistentModelIndex_Class_Size()
{
  return sizeof(QPersistentModelIndex);
}

int QAbstractTableModel_Class_Size()
{
  return sizeof(QAbstractTableModel);
}

int QAbstractItemModel_Class_Size()
{
  return sizeof(QAbstractItemModel);
}

int QAbstractListModel_Class_Size()
{
  return sizeof(QAbstractListModel);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qabstractitemmodel_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 52, column 29>
//   // proto:  void QModelIndex::QModelIndex();
if (false) {
  auto f = []() {
    new QModelIndex();
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 55, column 33>
//   // proto:  int QModelIndex::column();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->column();
  };
}
// _ZNK11QModelIndex6columnEv column()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 56, column 38>
//   // proto:  quintptr QModelIndex::internalId();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->internalId();
  };
}
// _ZNK11QModelIndex10internalIdEv internalId()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 60, column 24>
//   // proto:  QModelIndex QModelIndex::child(int row, int column);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QModelIndex*)0)->child(arg1, arg2);
  };
}
// _ZNK11QModelIndex5childEii child(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 57, column 18>
//   // proto:  void * QModelIndex::internalPointer();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->internalPointer();
  };
}
// _ZNK11QModelIndex15internalPointerEv internalPointer()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 64, column 34>
//   // proto:  bool QModelIndex::isValid();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->isValid();
  };
}
// _ZNK11QModelIndex7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 58, column 24>
//   // proto:  QModelIndex QModelIndex::parent();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->parent();
  };
}
// _ZNK11QModelIndex6parentEv parent()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 59, column 24>
//   // proto:  QModelIndex QModelIndex::sibling(int row, int column);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QModelIndex*)0)->sibling(arg1, arg2);
  };
}
// _ZNK11QModelIndex7siblingEii sibling(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 63, column 55>
//   // proto:  const QAbstractItemModel * QModelIndex::model();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->model();
  };
}
// _ZNK11QModelIndex5modelEv model()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 61, column 21>
//   // proto:  QVariant QModelIndex::data(int role);
if (false) {
  auto f = [](int arg1) {
    ((QModelIndex*)0)->data(arg1);
  };
}
// _ZNK11QModelIndex4dataEi data(int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 62, column 26>
//   // proto:  Qt::ItemFlags QModelIndex::flags();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->flags();
  };
}
// _ZNK11QModelIndex5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 54, column 33>
//   // proto:  int QModelIndex::row();
if (false) {
  auto f = []() {
    ((QModelIndex*)0)->row();
  };
}
// _ZNK11QModelIndex3rowEv row()
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 109, column 12>
//   // proto:  void QPersistentModelIndex::QPersistentModelIndex(QPersistentModelIndex && other);
if (false) {
  auto f = [](QPersistentModelIndex && arg1) {
    new QPersistentModelIndex(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 114, column 17>
//   // proto:  void QPersistentModelIndex::swap(QPersistentModelIndex & other);
if (false) {
  auto f = [](QPersistentModelIndex & arg1) {
    ((QPersistentModelIndex*)0)->swap(arg1);
  };
}
// _ZN21QPersistentModelIndex4swapERS_ swap(class QPersistentModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 217, column 17>
//   // proto:  bool QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild);
if (false) {
  auto f = [](const QModelIndex & arg1, int arg2, const QModelIndex & arg3, int arg4) {
    ((QAbstractItemModel*)0)->moveColumn(arg1, arg2, arg3, arg4);
  };
}
// _ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i moveColumn(const class QModelIndex &, int, const class QModelIndex &, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 211, column 17>
//   // proto:  bool QAbstractItemModel::insertRow(int row, const QModelIndex & parent);
if (false) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->insertRow(arg1, arg2);
  };
}
// _ZN18QAbstractItemModel9insertRowEiRK11QModelIndex insertRow(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 213, column 17>
//   // proto:  bool QAbstractItemModel::removeRow(int row, const QModelIndex & parent);
if (false) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->removeRow(arg1, arg2);
  };
}
// _ZN18QAbstractItemModel9removeRowEiRK11QModelIndex removeRow(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 215, column 17>
//   // proto:  bool QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild);
if (false) {
  auto f = [](const QModelIndex & arg1, int arg2, const QModelIndex & arg3, int arg4) {
    ((QAbstractItemModel*)0)->moveRow(arg1, arg2, arg3, arg4);
  };
}
// _ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i moveRow(const class QModelIndex &, int, const class QModelIndex &, int)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 214, column 17>
//   // proto:  bool QAbstractItemModel::removeColumn(int column, const QModelIndex & parent);
if (false) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->removeColumn(arg1, arg2);
  };
}
// _ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex removeColumn(int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qabstractitemmodel.h', line 212, column 17>
//   // proto:  bool QAbstractItemModel::insertColumn(int column, const QModelIndex & parent);
if (false) {
  auto f = [](int arg1, const QModelIndex & arg2) {
    ((QAbstractItemModel*)0)->insertColumn(arg1, arg2);
  };
}
// _ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex insertColumn(int, const class QModelIndex &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
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

