//  header block begin
// /usr/include/qt/QtCore/qstringlistmodel.h
#ifndef protected
#define protected public
#endif
#include <qstringlistmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringListModel is pure virtual: false
// QStringListModel has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStringListModel : public QStringListModel {
public:
  virtual ~MyQStringListModel() {}
// void QStringListModel(QObject *)
MyQStringListModel(QObject * parent) : QStringListModel(parent) {}
// void QStringListModel(const QStringList &, QObject *)
MyQStringListModel(const QStringList & strings, QObject * parent) : QStringListModel(strings, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel10metaObjectEv(void *this_) {
  return (void*)((QStringListModel*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:55
// [-2] void QStringListModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStringListModelC2EP7QObject(QObject * parent) {
  return  new QStringListModel(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:56
// [-2] void QStringListModel(const QStringList &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QStringListModelC2ERK11QStringListP7QObject(QStringList* strings, QObject * parent) {
  return  new QStringListModel(*strings, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:58
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK16QStringListModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QStringListModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:59
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QStringListModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:61
// [16] QVariant data(const QModelIndex &, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel4dataERK11QModelIndexi(void *this_, QModelIndex* index, int role) {
  auto rv = ((QStringListModel*)this_)->data(*index, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:62
// [1] bool setData(const QModelIndex &, const QVariant &, int)
extern "C" Q_DECL_EXPORT
bool C_ZN16QStringListModel7setDataERK11QModelIndexRK8QVarianti(void *this_, QModelIndex* index, QVariant* value, int role) {
  return (bool)((QStringListModel*)this_)->setData(*index, *value, role);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:64
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK16QStringListModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QStringListModel*)this_)->flags(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:66
// [1] bool insertRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QStringListModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QStringListModel*)this_)->insertRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:67
// [1] bool removeRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QStringListModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QStringListModel*)this_)->removeRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:69
// [-2] void sort(int, Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void C_ZN16QStringListModel4sortEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QStringListModel*)this_)->sort(column, order);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:71
// [8] QStringList stringList()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QStringListModel10stringListEv(void *this_) {
  auto rv = ((QStringListModel*)this_)->stringList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:72
// [-2] void setStringList(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN16QStringListModel13setStringListERK11QStringList(void *this_, QStringList* strings) {
  ((QStringListModel*)this_)->setStringList(*strings);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlistmodel.h:74
// [4] Qt::DropActions supportedDropActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK16QStringListModel20supportedDropActionsEv(void *this_) {
  return (Qt::DropActions)((QStringListModel*)this_)->supportedDropActions();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QStringListModelD2Ev(void *this_) {
  delete (QStringListModel*)(this_);
}
//  main block end
