// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qstringlistmodel.h
// dst-file: /src/core/qstringlistmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstringlistmodel.h>


#include <qvariant.h>
#include <qstringlist.h>
#include <qnamespace.h>
#include <qabstractitemmodel.h>
// <= header block end

// main block begin =>
void __keep_qstringlistmodel_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStringListModel_Class_Size()
{
  return sizeof(QStringListModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 50, column 14>
//   // proto:  void QStringListModel::QStringListModel(const QStringList & strings, QObject * parent);
extern "C"
QStringListModel*
C_ZN16QStringListModelC2ERK11QStringListP7QObject(const QStringList* arg1,
QObject * arg2) {
  auto ret = new QStringListModel(*((const QStringList*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 60, column 10>
//   // proto:  bool QStringListModel::insertRows(int row, int count, const QModelIndex & parent);
// _ZN16QStringListModel10insertRowsEiiRK11QModelIndex insertRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN16QStringListModel10insertRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QStringListModel*)qthis)->insertRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 55, column 14>
//   // proto:  QVariant QStringListModel::data(const QModelIndex & index, int role);
// _ZNK16QStringListModel4dataERK11QModelIndexi data(const class QModelIndex &, int)
extern "C"
QVariant*
C_ZNK16QStringListModel4dataERK11QModelIndexi(void *qthis,
const QModelIndex* arg1,
int arg2) {
  auto ret =
  ((QStringListModel*)qthis)->data(*((const QModelIndex*)arg1),
arg2);
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 65, column 17>
//   // proto:  QStringList QStringListModel::stringList();
// _ZNK16QStringListModel10stringListEv stringList()
extern "C"
QStringList*
C_ZNK16QStringListModel10stringListEv(void *qthis) {
  auto ret =
  ((QStringListModel*)qthis)->stringList();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 47, column 5>
//   // proto:  const QMetaObject * QStringListModel::metaObject();
// _ZNK16QStringListModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK16QStringListModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QStringListModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 61, column 10>
//   // proto:  bool QStringListModel::removeRows(int row, int count, const QModelIndex & parent);
// _ZN16QStringListModel10removeRowsEiiRK11QModelIndex removeRows(int, int, const class QModelIndex &)
extern "C"
bool
C_ZN16QStringListModel10removeRowsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QStringListModel*)qthis)->removeRows(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 63, column 10>
//   // proto:  void QStringListModel::sort(int column, Qt::SortOrder order);
// _ZN16QStringListModel4sortEiN2Qt9SortOrderE sort(int, Qt::SortOrder)
extern "C"
void
C_ZN16QStringListModel4sortEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QStringListModel*)qthis)->sort(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 49, column 14>
//   // proto:  void QStringListModel::QStringListModel(QObject * parent);
extern "C"
QStringListModel*
C_ZN16QStringListModelC2EP7QObject(QObject * arg1) {
  auto ret = new QStringListModel(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 58, column 19>
//   // proto:  Qt::ItemFlags QStringListModel::flags(const QModelIndex & index);
// _ZNK16QStringListModel5flagsERK11QModelIndex flags(const class QModelIndex &)
extern "C"
QFlags<Qt::ItemFlag>*
C_ZNK16QStringListModel5flagsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QStringListModel*)qthis)->flags(*((const QModelIndex*)arg1));
  return new QFlags<Qt::ItemFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 68, column 21>
//   // proto:  Qt::DropActions QStringListModel::supportedDropActions();
// _ZNK16QStringListModel20supportedDropActionsEv supportedDropActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK16QStringListModel20supportedDropActionsEv(void *qthis) {
  auto ret =
  ((QStringListModel*)qthis)->supportedDropActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 56, column 10>
//   // proto:  bool QStringListModel::setData(const QModelIndex & index, const QVariant & value, int role);
// _ZN16QStringListModel7setDataERK11QModelIndexRK8QVarianti setData(const class QModelIndex &, const class QVariant &, int)
extern "C"
bool
C_ZN16QStringListModel7setDataERK11QModelIndexRK8QVarianti(void *qthis,
const QModelIndex* arg1,
const QVariant* arg2,
int arg3) {
  auto ret =
  ((QStringListModel*)qthis)->setData(*((const QModelIndex*)arg1),
*((const QVariant*)arg2),
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 52, column 9>
//   // proto:  int QStringListModel::rowCount(const QModelIndex & parent);
// _ZNK16QStringListModel8rowCountERK11QModelIndex rowCount(const class QModelIndex &)
extern "C"
int
C_ZNK16QStringListModel8rowCountERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QStringListModel*)qthis)->rowCount(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 53, column 17>
//   // proto:  QModelIndex QStringListModel::sibling(int row, int column, const QModelIndex & idx);
// _ZNK16QStringListModel7siblingEiiRK11QModelIndex sibling(int, int, const class QModelIndex &)
extern "C"
QModelIndex*
C_ZNK16QStringListModel7siblingEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QStringListModel*)qthis)->sibling(arg1,
arg2,
*((const QModelIndex*)arg3));
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qstringlistmodel.h', line 66, column 10>
//   // proto:  void QStringListModel::setStringList(const QStringList & strings);
// _ZN16QStringListModel13setStringListERK11QStringList setStringList(const class QStringList &)
extern "C"
void
C_ZN16QStringListModel13setStringListERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QStringListModel*)qthis)->setStringList(*((const QStringList*)arg1));
}
// <= ext block end

// body block begin =>
// QStringListModel_SlotProxy here
class QStringListModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStringListModel_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qstringlistmodel.moc"

extern "C" {
  QStringListModel_SlotProxy* QStringListModel_SlotProxy_new()
  {
    return new QStringListModel_SlotProxy();
  }
};

// <= body block end

