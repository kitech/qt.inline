//  header block begin
// /usr/include/qt/QtCore/qidentityproxymodel.h
#include <qidentityproxymodel.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK19QIdentityProxyModel10metaObjectEv(void *this_) {
  /*return*/ ((QIdentityProxyModel*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qidentityproxymodel.h:57
// void QIdentityProxyModel(class QObject *)
extern "C"
void* C_ZN19QIdentityProxyModelC1EP7QObject(QObject * parent) {
  return new QIdentityProxyModel(parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:58
// void ~QIdentityProxyModel()
extern "C"
void C_ZN19QIdentityProxyModelD1Ev(void *this_) {
  delete (QIdentityProxyModel*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:60
// int columnCount(const class QModelIndex &)
extern "C"
void C_ZNK19QIdentityProxyModel11columnCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->columnCount(parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:61
// QModelIndex index(int, int, const class QModelIndex &)
extern "C"
void C_ZNK19QIdentityProxyModel5indexEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->index(row, column, parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:62
// QModelIndex mapFromSource(const class QModelIndex &)
extern "C"
void C_ZNK19QIdentityProxyModel13mapFromSourceERK11QModelIndex(void *this_, const QModelIndex & sourceIndex) {
  /*return*/ ((QIdentityProxyModel*)this_)->mapFromSource(sourceIndex);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:63
// QModelIndex mapToSource(const class QModelIndex &)
extern "C"
void C_ZNK19QIdentityProxyModel11mapToSourceERK11QModelIndex(void *this_, const QModelIndex & proxyIndex) {
  /*return*/ ((QIdentityProxyModel*)this_)->mapToSource(proxyIndex);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:64
// QModelIndex parent(const class QModelIndex &)
extern "C"
void C_ZNK19QIdentityProxyModel6parentERK11QModelIndex(void *this_, const QModelIndex & child) {
  /*return*/ ((QIdentityProxyModel*)this_)->parent(child);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:66
// int rowCount(const class QModelIndex &)
extern "C"
void C_ZNK19QIdentityProxyModel8rowCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->rowCount(parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:67
// QVariant headerData(int, Qt::Orientation, int)
extern "C"
void C_ZNK19QIdentityProxyModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  /*return*/ ((QIdentityProxyModel*)this_)->headerData(section, orientation, role);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:68
// bool dropMimeData(const class QMimeData *, Qt::DropAction, int, int, const class QModelIndex &)
extern "C"
void C_ZN19QIdentityProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->dropMimeData(data, action, row, column, parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:69
// QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void C_ZNK19QIdentityProxyModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & idx) {
  /*return*/ ((QIdentityProxyModel*)this_)->sibling(row, column, idx);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:71
// QItemSelection mapSelectionFromSource(const class QItemSelection &)
extern "C"
void C_ZNK19QIdentityProxyModel22mapSelectionFromSourceERK14QItemSelection(void *this_, const QItemSelection & selection) {
  /*return*/ ((QIdentityProxyModel*)this_)->mapSelectionFromSource(selection);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:72
// QItemSelection mapSelectionToSource(const class QItemSelection &)
extern "C"
void C_ZNK19QIdentityProxyModel20mapSelectionToSourceERK14QItemSelection(void *this_, const QItemSelection & selection) {
  /*return*/ ((QIdentityProxyModel*)this_)->mapSelectionToSource(selection);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:73
// QModelIndexList match(const class QModelIndex &, int, const class QVariant &, int, Qt::MatchFlags)
extern "C"
void C_ZNK19QIdentityProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, const QModelIndex & start, int role, const QVariant & value, int hits, QFlags<Qt::MatchFlag> flags) {
  /*return*/ ((QIdentityProxyModel*)this_)->match(start, role, value, hits, flags);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:74
// void setSourceModel(class QAbstractItemModel *)
extern "C"
void C_ZN19QIdentityProxyModel14setSourceModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * sourceModel) {
  ((QIdentityProxyModel*)this_)->setSourceModel(sourceModel);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:76
// bool insertColumns(int, int, const class QModelIndex &)
extern "C"
void C_ZN19QIdentityProxyModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->insertColumns(column, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:77
// bool insertRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN19QIdentityProxyModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->insertRows(row, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:78
// bool removeColumns(int, int, const class QModelIndex &)
extern "C"
void C_ZN19QIdentityProxyModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->removeColumns(column, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qidentityproxymodel.h:79
// bool removeRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN19QIdentityProxyModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QIdentityProxyModel*)this_)->removeRows(row, count, parent);
}
//  main block end
