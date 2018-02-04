//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractItemModel is pure virtual: true
// QAbstractItemModel has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractItemModel : public QAbstractItemModel {
public:
  virtual ~MyQAbstractItemModel() {}
// void QAbstractItemModel(class QObject *)
MyQAbstractItemModel(QObject * parent) : QAbstractItemModel(parent) {}
// void resetInternalData()
  virtual void resetInternalData() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resetInternalData", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::resetInternalData();
  }
  }
// QModelIndex createIndex(int, int, void *)
  virtual QModelIndex createIndex(int row, int column, void * data) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createIndex", &handled, 3, (uint64_t)row, (uint64_t)column, (uint64_t)data, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    return QAbstractItemModel::createIndex(row, column, data);
  }
  }
// QModelIndex createIndex(int, int, quintptr)
  virtual QModelIndex createIndex(int row, int column, quintptr id) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"createIndex", &handled, 3, (uint64_t)row, (uint64_t)column, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    return QAbstractItemModel::createIndex(row, column, id);
  }
  }
// bool decodeData(int, int, const class QModelIndex &, class QDataStream &)
  virtual bool decodeData(int row, int column, const QModelIndex & parent, QDataStream & stream) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"decodeData", &handled, 4, (uint64_t)row, (uint64_t)column, (uint64_t)&parent, (uint64_t)&stream, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractItemModel::decodeData(row, column, parent, stream);
  }
  }
// void beginInsertRows(const class QModelIndex &, int, int)
  virtual void beginInsertRows(const QModelIndex & parent, int first, int last) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginInsertRows", &handled, 3, (uint64_t)&parent, (uint64_t)first, (uint64_t)last, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::beginInsertRows(parent, first, last);
  }
  }
// void endInsertRows()
  virtual void endInsertRows() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endInsertRows", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::endInsertRows();
  }
  }
// void beginRemoveRows(const class QModelIndex &, int, int)
  virtual void beginRemoveRows(const QModelIndex & parent, int first, int last) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginRemoveRows", &handled, 3, (uint64_t)&parent, (uint64_t)first, (uint64_t)last, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::beginRemoveRows(parent, first, last);
  }
  }
// void endRemoveRows()
  virtual void endRemoveRows() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endRemoveRows", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::endRemoveRows();
  }
  }
// bool beginMoveRows(const class QModelIndex &, int, int, const class QModelIndex &, int)
  virtual bool beginMoveRows(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationRow) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginMoveRows", &handled, 5, (uint64_t)&sourceParent, (uint64_t)sourceFirst, (uint64_t)sourceLast, (uint64_t)&destinationParent, (uint64_t)destinationRow, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
  }
  }
// void endMoveRows()
  virtual void endMoveRows() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endMoveRows", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::endMoveRows();
  }
  }
// void beginInsertColumns(const class QModelIndex &, int, int)
  virtual void beginInsertColumns(const QModelIndex & parent, int first, int last) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginInsertColumns", &handled, 3, (uint64_t)&parent, (uint64_t)first, (uint64_t)last, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::beginInsertColumns(parent, first, last);
  }
  }
// void endInsertColumns()
  virtual void endInsertColumns() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endInsertColumns", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::endInsertColumns();
  }
  }
// void beginRemoveColumns(const class QModelIndex &, int, int)
  virtual void beginRemoveColumns(const QModelIndex & parent, int first, int last) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginRemoveColumns", &handled, 3, (uint64_t)&parent, (uint64_t)first, (uint64_t)last, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::beginRemoveColumns(parent, first, last);
  }
  }
// void endRemoveColumns()
  virtual void endRemoveColumns() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endRemoveColumns", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::endRemoveColumns();
  }
  }
// bool beginMoveColumns(const class QModelIndex &, int, int, const class QModelIndex &, int)
  virtual bool beginMoveColumns(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationColumn) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginMoveColumns", &handled, 5, (uint64_t)&sourceParent, (uint64_t)sourceFirst, (uint64_t)sourceLast, (uint64_t)&destinationParent, (uint64_t)destinationColumn, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
  }
  }
// void endMoveColumns()
  virtual void endMoveColumns() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endMoveColumns", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::endMoveColumns();
  }
  }
// void beginResetModel()
  virtual void beginResetModel() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"beginResetModel", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::beginResetModel();
  }
  }
// void endResetModel()
  virtual void endResetModel() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"endResetModel", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::endResetModel();
  }
  }
// void changePersistentIndex(const class QModelIndex &, const class QModelIndex &)
  virtual void changePersistentIndex(const QModelIndex & from, const QModelIndex & to) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changePersistentIndex", &handled, 2, (uint64_t)&from, (uint64_t)&to, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractItemModel::changePersistentIndex(from, to);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:167
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QAbstractItemModel10metaObjectEv(void *this_) {
  return (void*)((QAbstractItemModel*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:174
// [-2] void QAbstractItemModel(class QObject *)
extern "C"
void* C_ZN18QAbstractItemModelC1EP7QObject(QObject * parent) {
  auto _nilp = (MyQAbstractItemModel*)(0);
  return 0; // new MyQAbstractItemModel(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:175
// [-2] void ~QAbstractItemModel()
extern "C"
void C_ZN18QAbstractItemModelD2Ev(void *this_) {
  delete (QAbstractItemModel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:177
// [1] bool hasIndex(int, int, const class QModelIndex &)
extern "C"
bool C_ZNK18QAbstractItemModel8hasIndexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->hasIndex(row, column, *parent);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:178
// [24] QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK18QAbstractItemModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QAbstractItemModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:180
// [24] QModelIndex parent(const class QModelIndex &)
extern "C"
void* C_ZNK18QAbstractItemModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QAbstractItemModel*)this_)->parent(*child);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:182
// [24] QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void* C_ZNK18QAbstractItemModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QAbstractItemModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:183
// [4] int rowCount(const class QModelIndex &)
extern "C"
int C_ZNK18QAbstractItemModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QAbstractItemModel*)this_)->rowCount(*parent);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:184
// [4] int columnCount(const class QModelIndex &)
extern "C"
int C_ZNK18QAbstractItemModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QAbstractItemModel*)this_)->columnCount(*parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:185
// [1] bool hasChildren(const class QModelIndex &)
extern "C"
bool C_ZNK18QAbstractItemModel11hasChildrenERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->hasChildren(*parent);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:187
// [16] QVariant data(const class QModelIndex &, int)
extern "C"
void* C_ZNK18QAbstractItemModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QAbstractItemModel*)this_)->data(*index, role);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:188
// [1] bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool C_ZN18QAbstractItemModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QAbstractItemModel*)this_)->setData(*index, *value, role);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:190
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C"
void* C_ZNK18QAbstractItemModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QAbstractItemModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:192
// [1] bool setHeaderData(int, Qt::Orientation, const class QVariant &, int)
extern "C"
bool C_ZN18QAbstractItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void *this_, int section, Qt::Orientation orientation, QVariant* value, int role) {
  return (bool)((QAbstractItemModel*)this_)->setHeaderData(section, orientation, *value, role);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:200
// [1] bool canDropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool C_ZNK18QAbstractItemModel15canDropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->canDropMimeData(data, action, row, column, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:202
// [1] bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->dropMimeData(data, action, row, column, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:204
// [4] Qt::DropActions supportedDropActions()
extern "C"
Qt::DropActions C_ZNK18QAbstractItemModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QAbstractItemModel*)this_)->supportedDropActions();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:206
// [4] Qt::DropActions supportedDragActions()
extern "C"
Qt::DropActions C_ZNK18QAbstractItemModel20supportedDragActionsEv(void *this_) {
  return (Qt::DropActions)((QAbstractItemModel*)this_)->supportedDragActions();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:212
// [1] bool insertRows(int, int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertRows(row, count, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:213
// [1] bool insertColumns(int, int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertColumns(column, count, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:214
// [1] bool removeRows(int, int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeRows(row, count, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:215
// [1] bool removeColumns(int, int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeColumns(column, count, *parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:216
// [1] bool moveRows(const class QModelIndex &, int, int, const class QModelIndex &, int)
extern "C"
bool C_ZN18QAbstractItemModel8moveRowsERK11QModelIndexiiS2_i(void *this_, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveRows(*sourceParent, sourceRow, count, *destinationParent, destinationChild);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:218
// [1] bool moveColumns(const class QModelIndex &, int, int, const class QModelIndex &, int)
extern "C"
bool C_ZN18QAbstractItemModel11moveColumnsERK11QModelIndexiiS2_i(void *this_, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveColumns(*sourceParent, sourceColumn, count, *destinationParent, destinationChild);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:221
// [1] bool insertRow(int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel9insertRowEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertRow(row, *parent);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:222
// [1] bool insertColumn(int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel12insertColumnEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->insertColumn(column, *parent);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:223
// [1] bool removeRow(int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel9removeRowEiRK11QModelIndex(void *this_, int row, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeRow(row, *parent);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:224
// [1] bool removeColumn(int, const class QModelIndex &)
extern "C"
bool C_ZN18QAbstractItemModel12removeColumnEiRK11QModelIndex(void *this_, int column, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->removeColumn(column, *parent);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:225
// [1] bool moveRow(const class QModelIndex &, int, const class QModelIndex &, int)
extern "C"
bool C_ZN18QAbstractItemModel7moveRowERK11QModelIndexiS2_i(void *this_, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveRow(*sourceParent, sourceRow, *destinationParent, destinationChild);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:227
// [1] bool moveColumn(const class QModelIndex &, int, const class QModelIndex &, int)
extern "C"
bool C_ZN18QAbstractItemModel10moveColumnERK11QModelIndexiS2_i(void *this_, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild) {
  return (bool)((QAbstractItemModel*)this_)->moveColumn(*sourceParent, sourceColumn, *destinationParent, destinationChild);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:230
// [-2] void fetchMore(const class QModelIndex &)
extern "C"
void C_ZN18QAbstractItemModel9fetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  ((QAbstractItemModel*)this_)->fetchMore(*parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:231
// [1] bool canFetchMore(const class QModelIndex &)
extern "C"
bool C_ZNK18QAbstractItemModel12canFetchMoreERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (bool)((QAbstractItemModel*)this_)->canFetchMore(*parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:232
// [4] Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
Qt::ItemFlags C_ZNK18QAbstractItemModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QAbstractItemModel*)this_)->flags(*index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:233
// [-2] void sort(int, Qt::SortOrder)
extern "C"
void C_ZN18QAbstractItemModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QAbstractItemModel*)this_)->sort(column, order);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:234
// [24] QModelIndex buddy(const class QModelIndex &)
extern "C"
void* C_ZNK18QAbstractItemModel5buddyERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemModel*)this_)->buddy(*index);
return new QModelIndex(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:239
// [8] QSize span(const class QModelIndex &)
extern "C"
void* C_ZNK18QAbstractItemModel4spanERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QAbstractItemModel*)this_)->span(*index);
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:255
// [-2] void headerDataChanged(Qt::Orientation, int, int)
extern "C"
void C_ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(void *this_, Qt::Orientation orientation, int first, int last) {
  ((QAbstractItemModel*)this_)->headerDataChanged(orientation, first, last);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:281
// [1] bool submit()
extern "C"
bool C_ZN18QAbstractItemModel6submitEv(void *this_) {
  return (bool)((QAbstractItemModel*)this_)->submit();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:282
// [-2] void revert()
extern "C"
void C_ZN18QAbstractItemModel6revertEv(void *this_) {
  ((QAbstractItemModel*)this_)->revert();
}
//  main block end
