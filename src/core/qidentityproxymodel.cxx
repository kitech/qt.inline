//  header block begin
// /usr/include/qt/QtCore/qidentityproxymodel.h
#ifndef protected
#define protected public
#endif
#include <qidentityproxymodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QIdentityProxyModel is pure virtual: false
// QIdentityProxyModel has virtual projected: false
//  header block end

//  main block begin

class MyQIdentityProxyModel : public QIdentityProxyModel {
public:
  virtual ~MyQIdentityProxyModel() {}
// void QIdentityProxyModel(class QObject *)
MyQIdentityProxyModel(QObject * parent) : QIdentityProxyModel(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QIdentityProxyModel10metaObjectEv(void *this_) {
  return (void*)((QIdentityProxyModel*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:57
// [-2] void QIdentityProxyModel(class QObject *)
extern "C"
void* C_ZN19QIdentityProxyModelC2EP7QObject(QObject * parent) {
  return  new QIdentityProxyModel(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:58
// [-2] void ~QIdentityProxyModel()
extern "C"
void C_ZN19QIdentityProxyModelD2Ev(void *this_) {
  delete (QIdentityProxyModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:60
// [4] int columnCount(const class QModelIndex &)
extern "C"
int C_ZNK19QIdentityProxyModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QIdentityProxyModel*)this_)->columnCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:61
// [24] QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK19QIdentityProxyModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QIdentityProxyModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:62
// [24] QModelIndex mapFromSource(const class QModelIndex &)
extern "C"
void* C_ZNK19QIdentityProxyModel13mapFromSourceERK11QModelIndex(void *this_, QModelIndex* sourceIndex) {
  auto rv = ((QIdentityProxyModel*)this_)->mapFromSource(*sourceIndex);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:63
// [24] QModelIndex mapToSource(const class QModelIndex &)
extern "C"
void* C_ZNK19QIdentityProxyModel11mapToSourceERK11QModelIndex(void *this_, QModelIndex* proxyIndex) {
  auto rv = ((QIdentityProxyModel*)this_)->mapToSource(*proxyIndex);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:64
// [24] QModelIndex parent(const class QModelIndex &)
extern "C"
void* C_ZNK19QIdentityProxyModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QIdentityProxyModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:66
// [4] int rowCount(const class QModelIndex &)
extern "C"
int C_ZNK19QIdentityProxyModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QIdentityProxyModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:67
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C"
void* C_ZNK19QIdentityProxyModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QIdentityProxyModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:68
// [1] bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool C_ZN19QIdentityProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:69
// [24] QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK19QIdentityProxyModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QIdentityProxyModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:71
// [8] QItemSelection mapSelectionFromSource(const class QItemSelection &)
extern "C"
void* C_ZNK19QIdentityProxyModel22mapSelectionFromSourceERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QIdentityProxyModel*)this_)->mapSelectionFromSource(*selection);
return new QItemSelection(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:72
// [8] QItemSelection mapSelectionToSource(const class QItemSelection &)
extern "C"
void* C_ZNK19QIdentityProxyModel20mapSelectionToSourceERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QIdentityProxyModel*)this_)->mapSelectionToSource(*selection);
return new QItemSelection(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:73
// [8] QModelIndexList match(const class QModelIndex &, int, const class QVariant &, int, Qt::MatchFlags)
extern "C"
QModelIndexList* C_ZNK19QIdentityProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, QModelIndex* start, int role, QVariant* value, int hits, QFlags<Qt::MatchFlag> flags) {
  auto rv = ((QIdentityProxyModel*)this_)->match(*start, role, *value, hits, flags);
return new QModelIndexList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:74
// [-2] void setSourceModel(class QAbstractItemModel *)
extern "C"
void C_ZN19QIdentityProxyModel14setSourceModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * sourceModel) {
  ((QIdentityProxyModel*)this_)->setSourceModel(sourceModel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:76
// [1] bool insertColumns(int, int, const class QModelIndex &)
extern "C"
bool C_ZN19QIdentityProxyModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->insertColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:77
// [1] bool insertRows(int, int, const class QModelIndex &)
extern "C"
bool C_ZN19QIdentityProxyModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->insertRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:78
// [1] bool removeColumns(int, int, const class QModelIndex &)
extern "C"
bool C_ZN19QIdentityProxyModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->removeColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:79
// [1] bool removeRows(int, int, const class QModelIndex &)
extern "C"
bool C_ZN19QIdentityProxyModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->removeRows(row, count, *parent);
}

//  main block end
