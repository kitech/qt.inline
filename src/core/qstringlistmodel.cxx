// /usr/include/qt/QtCore/qstringlistmodel.h
#include <qstringlistmodel.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QStringListModel10metaObjectEv(void *this_) {
  /*return*/ ((QStringListModel*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qstringlistmodel.h:55
// void QStringListModel(class QObject *)
extern "C"
void* C_ZN16QStringListModelC1EP7QObject(QObject * parent) {
  return new QStringListModel(parent);
}
// /usr/include/qt/QtCore/qstringlistmodel.h:56
// void QStringListModel(const class QStringList &, class QObject *)
extern "C"
void* C_ZN16QStringListModelC1ERK11QStringListP7QObject(const QStringList & strings, QObject * parent) {
  return new QStringListModel(strings, parent);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:58
// int rowCount(const class QModelIndex &)
extern "C"
void C_ZNK16QStringListModel8rowCountERK11QModelIndex(void *this_, const QModelIndex & parent) {
  /*return*/ ((QStringListModel*)this_)->rowCount(parent);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:59
// QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
void C_ZNK16QStringListModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, const QModelIndex & idx) {
  /*return*/ ((QStringListModel*)this_)->sibling(row, column, idx);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:61
// QVariant data(const class QModelIndex &, int)
extern "C"
void C_ZNK16QStringListModel4dataERK11QModelIndexi(void *this_, const QModelIndex & index, int role) {
  /*return*/ ((QStringListModel*)this_)->data(index, role);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:62
// bool setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
void C_ZN16QStringListModel7setDataERK11QModelIndexRK8QVarianti(void *this_, const QModelIndex & index, const QVariant & value, int role) {
  /*return*/ ((QStringListModel*)this_)->setData(index, value, role);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:64
// Qt::ItemFlags flags(const class QModelIndex &)
extern "C"
void C_ZNK16QStringListModel5flagsERK11QModelIndex(void *this_, const QModelIndex & index) {
  /*return*/ ((QStringListModel*)this_)->flags(index);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:66
// bool insertRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN16QStringListModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QStringListModel*)this_)->insertRows(row, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:67
// bool removeRows(int, int, const class QModelIndex &)
extern "C"
void C_ZN16QStringListModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, const QModelIndex & parent) {
  /*return*/ ((QStringListModel*)this_)->removeRows(row, count, parent);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:69
// void sort(int, Qt::SortOrder)
extern "C"
void C_ZN16QStringListModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QStringListModel*)this_)->sort(column, order);
}
// /usr/include/qt/QtCore/qstringlistmodel.h:71
// QStringList stringList()
extern "C"
void C_ZNK16QStringListModel10stringListEv(void *this_) {
  /*return*/ ((QStringListModel*)this_)->stringList();
}
// /usr/include/qt/QtCore/qstringlistmodel.h:72
// void setStringList(const class QStringList &)
extern "C"
void C_ZN16QStringListModel13setStringListERK11QStringList(void *this_, const QStringList & strings) {
  ((QStringListModel*)this_)->setStringList(strings);
}
// virtual
// /usr/include/qt/QtCore/qstringlistmodel.h:74
// Qt::DropActions supportedDropActions()
extern "C"
void C_ZNK16QStringListModel20supportedDropActionsEv(void *this_) {
  /*return*/ ((QStringListModel*)this_)->supportedDropActions();
}