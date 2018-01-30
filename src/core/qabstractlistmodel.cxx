//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#include <qabstractitemmodel.h>
#include <QtCore>

// QAbstractListModel is pure virtual: false
// QAbstractListModel has virtual projected: false
//  header block end

//  main block begin

class MyQAbstractListModel : public QAbstractListModel {
public:
  virtual ~MyQAbstractListModel() {}
// void QAbstractListModel(class QObject *)
MyQAbstractListModel(QObject * parent) : QAbstractListModel(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:393
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QAbstractListModel10metaObjectEv(void *this_) {
  return (void*)((QAbstractListModel*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:396
// [-2] void QAbstractListModel(class QObject *)
extern "C"
void* C_ZN18QAbstractListModelC1EP7QObject(QObject * parent) {
  return 0; // new QAbstractListModel(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:397
// [-2] void ~QAbstractListModel()
extern "C"
void C_ZN18QAbstractListModelD2Ev(void *this_) {
  delete (QAbstractListModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:399
// [24] QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK18QAbstractListModel5indexEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parent) {
  auto rv = ((QAbstractListModel*)this_)->index(row, column, parent);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:400
// [24] QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK18QAbstractListModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & idx) {
  auto rv = ((QAbstractListModel*)this_)->sibling(row, column, idx);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:401
// [1] bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractListModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) {
  return (bool)((QAbstractListModel*)this_)->dropMimeData(data, action, row, column, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:404
// [4] Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
Qt::ItemFlags C_ZNK18QAbstractListModel5flagsERK11QModelIndex(void *this_, const QModelIndex & index) {
  return (Qt::ItemFlags)((QAbstractListModel*)this_)->flags(index);
}
//  main block end
