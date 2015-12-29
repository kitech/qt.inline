// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtCore/qabstractitemmodel.h
// dst-file: /src/core/qabstractitemmodel.cxx
//

// header block begin =>
#include <qabstractitemmodel.h>

extern "C" {

int QModelIndex_Class_Size()
{
  return sizeof(QModelIndex);
}

// QModelIndex()
QModelIndex* dector_ZN11QModelIndexC1Ev()
{
  // static_assert(sizeof(QModelIndex) == 32, "tyszerr");
  QModelIndex* rthis = new QModelIndex();
  return rthis;
}

  // proto:  QModelIndex QModelIndex::child(int row, int column);
QModelIndex* demth_ZNK11QModelIndex5childEii(void *that, int row, int column)
{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->child(row, column);
  return new QModelIndex(recret);
}

  // proto:  void * QModelIndex::internalPointer();
void * demth_ZNK11QModelIndex15internalPointerEv(void *that)
{
  QModelIndex *cthat = (QModelIndex *)that;
  return cthat->internalPointer();
}

  // proto:  QModelIndex QModelIndex::parent();
QModelIndex* demth_ZNK11QModelIndex6parentEv(void *that)
{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->parent();
  return new QModelIndex(recret);
}

  // proto:  QModelIndex QModelIndex::sibling(int row, int column);
QModelIndex* demth_ZNK11QModelIndex7siblingEii(void *that, int row, int column)
{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->sibling(row, column);
  return new QModelIndex(recret);
}

  // proto:  QVariant QModelIndex::data(int role);
QVariant* demth_ZNK11QModelIndex4dataEi(void *that, int role)
{
  QModelIndex *cthat = (QModelIndex *)that;
  auto recret = cthat->data(role);
  return new QVariant(recret);
}

int QPersistentModelIndex_Class_Size()
{
  return sizeof(QPersistentModelIndex);
}

// QPersistentModelIndex(const class QPersistentModelIndex &)
QPersistentModelIndex* dector_ZN21QPersistentModelIndexC1ERKS_(const QPersistentModelIndex & other)
{
  // static_assert(sizeof(QPersistentModelIndex) == 32, "tyszerr");
  QPersistentModelIndex* rthis = new QPersistentModelIndex(other);
  return rthis;
}

// QPersistentModelIndex(class QPersistentModelIndex &&)
QPersistentModelIndex* dector_ZN21QPersistentModelIndexC1EOS_(QPersistentModelIndex && other)
{
  // static_assert(sizeof(QPersistentModelIndex) == 32, "tyszerr");
  QPersistentModelIndex* rthis = new QPersistentModelIndex(other);
  return rthis;
}

// ~QPersistentModelIndex()
void dedtor_ZN21QPersistentModelIndexD0Ev(QPersistentModelIndex* that)
{
  QPersistentModelIndex* rthis = (QPersistentModelIndex*)that;
  delete rthis;
}

// QPersistentModelIndex(const class QModelIndex &)
QPersistentModelIndex* dector_ZN21QPersistentModelIndexC1ERK11QModelIndex(const QModelIndex & index)
{
  // static_assert(sizeof(QPersistentModelIndex) == 32, "tyszerr");
  QPersistentModelIndex* rthis = new QPersistentModelIndex(index);
  return rthis;
}

// QPersistentModelIndex()
QPersistentModelIndex* dector_ZN21QPersistentModelIndexC1Ev()
{
  // static_assert(sizeof(QPersistentModelIndex) == 32, "tyszerr");
  QPersistentModelIndex* rthis = new QPersistentModelIndex();
  return rthis;
}

  // proto:  void QPersistentModelIndex::QPersistentModelIndex(QPersistentModelIndex && other);
void demth_ZN21QPersistentModelIndexC1EOS_(void *that, QPersistentModelIndex && other)
{
  QPersistentModelIndex *cthat = (QPersistentModelIndex *)that;
  auto _o = new(that) QPersistentModelIndex(other);
}

  // proto:  void QPersistentModelIndex::swap(QPersistentModelIndex & other);
void demth_ZN21QPersistentModelIndex4swapERS_(void *that, QPersistentModelIndex & other)
{
  QPersistentModelIndex *cthat = (QPersistentModelIndex *)that;
   cthat->swap(other);
}

int QAbstractTableModel_Class_Size()
{
  return sizeof(QAbstractTableModel);
}

int QAbstractItemModel_Class_Size()
{
  return sizeof(QAbstractItemModel);
}

  // proto:  bool QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild);
bool demth_ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i(void *that, const QModelIndex & sourceParent, int sourceColumn, const QModelIndex & destinationParent, int destinationChild)
{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->moveColumn(sourceParent, sourceColumn, destinationParent, destinationChild);
}

  // proto:  bool QAbstractItemModel::insertRow(int row, const QModelIndex & parent);
bool demth_ZN18QAbstractItemModel9insertRowEiRK11QModelIndex(void *that, int row, const QModelIndex & parent)
{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->insertRow(row, parent);
}

  // proto:  bool QAbstractItemModel::removeRow(int row, const QModelIndex & parent);
bool demth_ZN18QAbstractItemModel9removeRowEiRK11QModelIndex(void *that, int row, const QModelIndex & parent)
{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->removeRow(row, parent);
}

  // proto:  bool QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild);
bool demth_ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i(void *that, const QModelIndex & sourceParent, int sourceRow, const QModelIndex & destinationParent, int destinationChild)
{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->moveRow(sourceParent, sourceRow, destinationParent, destinationChild);
}

  // proto:  bool QAbstractItemModel::removeColumn(int column, const QModelIndex & parent);
bool demth_ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex(void *that, int column, const QModelIndex & parent)
{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->removeColumn(column, parent);
}

  // proto:  bool QAbstractItemModel::insertColumn(int column, const QModelIndex & parent);
bool demth_ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex(void *that, int column, const QModelIndex & parent)
{
  QAbstractItemModel *cthat = (QAbstractItemModel *)that;
  return cthat->insertColumn(column, parent);
}

int QAbstractListModel_Class_Size()
{
  return sizeof(QAbstractListModel);
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

