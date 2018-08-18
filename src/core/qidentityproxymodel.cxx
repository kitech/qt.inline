//  header block begin
// since 0x040800
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

class Q_DECL_EXPORT MyQIdentityProxyModel : public QIdentityProxyModel {
public:
  virtual ~MyQIdentityProxyModel() {}
// void QIdentityProxyModel(QObject *)
MyQIdentityProxyModel(QObject * parent) : QIdentityProxyModel(parent) {}
// void QIdentityProxyModel(QIdentityProxyModelPrivate &, QObject *)
MyQIdentityProxyModel(QIdentityProxyModelPrivate & dd, QObject * parent) : QIdentityProxyModel(dd, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel10metaObjectEv(void *this_) {
  return (void*)((QIdentityProxyModel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QIdentityProxyModel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QIdentityProxyModel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QIdentityProxyModel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QIdentityProxyModel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QIdentityProxyModel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIdentityProxyModel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QIdentityProxyModel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QIdentityProxyModel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:57
// [-2] void QIdentityProxyModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QIdentityProxyModelC2EP7QObject(QObject * parent) {
  return  new QIdentityProxyModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:58
// [-2] void ~QIdentityProxyModel()
extern "C" Q_DECL_EXPORT
void C_ZN19QIdentityProxyModelD2Ev(void *this_) {
  delete (QIdentityProxyModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:60
// [4] int columnCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK19QIdentityProxyModel11columnCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QIdentityProxyModel*)this_)->columnCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:61
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QIdentityProxyModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:62
// [24] QModelIndex mapFromSource(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel13mapFromSourceERK11QModelIndex(void *this_, QModelIndex* sourceIndex) {
  auto rv = ((QIdentityProxyModel*)this_)->mapFromSource(*sourceIndex);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:63
// [24] QModelIndex mapToSource(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel11mapToSourceERK11QModelIndex(void *this_, QModelIndex* proxyIndex) {
  auto rv = ((QIdentityProxyModel*)this_)->mapToSource(*proxyIndex);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:64
// [24] QModelIndex parent(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel6parentERK11QModelIndex(void *this_, QModelIndex* child) {
  auto rv = ((QIdentityProxyModel*)this_)->parent(*child);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:66
// [4] int rowCount(const QModelIndex &)
extern "C" Q_DECL_EXPORT
int C_ZNK19QIdentityProxyModel8rowCountERK11QModelIndex(void *this_, QModelIndex* parent) {
  return (int)((QIdentityProxyModel*)this_)->rowCount(*parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:67
// [16] QVariant headerData(int, Qt::Orientation, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel10headerDataEiN2Qt11OrientationEi(void *this_, int section, Qt::Orientation orientation, int role) {
  auto rv = ((QIdentityProxyModel*)this_)->headerData(section, orientation, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:68
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QIdentityProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:69
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QIdentityProxyModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:71
// [8] QItemSelection mapSelectionFromSource(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel22mapSelectionFromSourceERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QIdentityProxyModel*)this_)->mapSelectionFromSource(*selection);
return new QItemSelection(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:72
// [8] QItemSelection mapSelectionToSource(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QIdentityProxyModel20mapSelectionToSourceERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QIdentityProxyModel*)this_)->mapSelectionToSource(*selection);
return new QItemSelection(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:73
// [8] QModelIndexList match(const QModelIndex &, int, const QVariant &, int, Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK19QIdentityProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void *this_, QModelIndex* start, int role, QVariant* value, int hits, QFlags<Qt::MatchFlag> flags) {
  auto rv = ((QIdentityProxyModel*)this_)->match(*start, role, *value, hits, flags);
return new QModelIndexList(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:74
// [-2] void setSourceModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN19QIdentityProxyModel14setSourceModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * sourceModel) {
  ((QIdentityProxyModel*)this_)->setSourceModel(sourceModel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:76
// [1] bool insertColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QIdentityProxyModel13insertColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->insertColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:77
// [1] bool insertRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QIdentityProxyModel10insertRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->insertRows(row, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:78
// [1] bool removeColumns(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QIdentityProxyModel13removeColumnsEiiRK11QModelIndex(void *this_, int column, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->removeColumns(column, count, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qidentityproxymodel.h:79
// [1] bool removeRows(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN19QIdentityProxyModel10removeRowsEiiRK11QModelIndex(void *this_, int row, int count, QModelIndex* parent) {
  return (bool)((QIdentityProxyModel*)this_)->removeRows(row, count, *parent);
}

//  main block end
