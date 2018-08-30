//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QPersistentModelIndex is pure virtual: false
// QPersistentModelIndex has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPersistentModelIndex_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPersistentModelIndex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPersistentModelIndex_t qt_meta_stringdata_MyQPersistentModelIndex = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQPersistentModelIndex"
  },
  "MyQPersistentModelIndex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPersistentModelIndex[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQPersistentModelIndex : public QPersistentModelIndex {
public:
  virtual ~MyQPersistentModelIndex() {}
// void QPersistentModelIndex()
MyQPersistentModelIndex() : QPersistentModelIndex() {}
// void QPersistentModelIndex(const QModelIndex &)
MyQPersistentModelIndex(const QModelIndex & index) : QPersistentModelIndex(index) {}
// void QPersistentModelIndex(const QPersistentModelIndex &)
MyQPersistentModelIndex(const QPersistentModelIndex & other) : QPersistentModelIndex(other) {}
// void QPersistentModelIndex(QPersistentModelIndex &&)
MyQPersistentModelIndex(QPersistentModelIndex && other) : QPersistentModelIndex(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:107
// [-2] void QPersistentModelIndex()
extern "C" Q_DECL_EXPORT
void* C_ZN21QPersistentModelIndexC2Ev() {
  return  new QPersistentModelIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:108
// [-2] void QPersistentModelIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QPersistentModelIndexC2ERK11QModelIndex(QModelIndex* index) {
  return  new QPersistentModelIndex(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:109
// [-2] void QPersistentModelIndex(const QPersistentModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QPersistentModelIndexC2ERKS_(QPersistentModelIndex* other) {
  return  new QPersistentModelIndex(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:110
// [-2] void ~QPersistentModelIndex()
extern "C" Q_DECL_EXPORT
void C_ZN21QPersistentModelIndexD2Ev(void *this_) {
  delete (QPersistentModelIndex*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:111
// [1] bool operator<(const QPersistentModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QPersistentModelIndexltERKS_(void *this_, QPersistentModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator<(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:112
// [1] bool operator==(const QPersistentModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QPersistentModelIndexeqERKS_(void *this_, QPersistentModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:113
// [1] bool operator!=(const QPersistentModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QPersistentModelIndexneERKS_(void *this_, QPersistentModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:115
// [8] QPersistentModelIndex & operator=(const QPersistentModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QPersistentModelIndexaSERKS_(void *this_, QPersistentModelIndex* other) {
  auto& rv = ((QPersistentModelIndex*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtCore/qabstractitemmodel.h:117
// [-2] void QPersistentModelIndex(QPersistentModelIndex &&)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void* C_ZN21QPersistentModelIndexC2EOS_(QPersistentModelIndex && other) {
  return  new QPersistentModelIndex(other);
}
#endif // QT_VERSION >= 0x050200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:119
// [8] QPersistentModelIndex & operator=(QPersistentModelIndex &&)
extern "C" Q_DECL_EXPORT
void* C_ZN21QPersistentModelIndexaSEOS_(void *this_, QPersistentModelIndex && other) {
  auto& rv = ((QPersistentModelIndex*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qabstractitemmodel.h:122
// [-2] void swap(QPersistentModelIndex &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN21QPersistentModelIndex4swapERS_(void *this_, QPersistentModelIndex* other) {
  ((QPersistentModelIndex*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:123
// [1] bool operator==(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QPersistentModelIndexeqERK11QModelIndex(void *this_, QModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator==(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:124
// [1] bool operator!=(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK21QPersistentModelIndexneERK11QModelIndex(void *this_, QModelIndex* other) {
  return (bool)((QPersistentModelIndex*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:125
// [8] QPersistentModelIndex & operator=(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QPersistentModelIndexaSERK11QModelIndex(void *this_, QModelIndex* other) {
  auto& rv = ((QPersistentModelIndex*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:127
// [4] int row()
extern "C" Q_DECL_EXPORT
int C_ZNK21QPersistentModelIndex3rowEv(void *this_) {
  return (int)((QPersistentModelIndex*)this_)->row();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:128
// [4] int column()
extern "C" Q_DECL_EXPORT
int C_ZNK21QPersistentModelIndex6columnEv(void *this_) {
  return (int)((QPersistentModelIndex*)this_)->column();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:129
// [8] void * internalPointer()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QPersistentModelIndex15internalPointerEv(void *this_) {
  return (void*)((QPersistentModelIndex*)this_)->internalPointer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:130
// [8] quintptr internalId()
extern "C" Q_DECL_EXPORT
quintptr C_ZNK21QPersistentModelIndex10internalIdEv(void *this_) {
  return (quintptr)((QPersistentModelIndex*)this_)->internalId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:131
// [24] QModelIndex parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QPersistentModelIndex6parentEv(void *this_) {
  auto rv = ((QPersistentModelIndex*)this_)->parent();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:132
// [24] QModelIndex sibling(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QPersistentModelIndex7siblingEii(void *this_, int row, int column) {
  auto rv = ((QPersistentModelIndex*)this_)->sibling(row, column);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:134
// [24] QModelIndex child(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QPersistentModelIndex5childEii(void *this_, int row, int column) {
  auto rv = ((QPersistentModelIndex*)this_)->child(row, column);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:136
// [16] QVariant data(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK21QPersistentModelIndex4dataEi(void *this_, int role) {
  auto rv = ((QPersistentModelIndex*)this_)->data(role);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qabstractitemmodel.h:137
// [4] Qt::ItemFlags flags()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK21QPersistentModelIndex5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QPersistentModelIndex*)this_)->flags();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:138
// [8] const QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QPersistentModelIndex5modelEv(void *this_) {
  return (void*)((QPersistentModelIndex*)this_)->model();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:139
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QPersistentModelIndex7isValidEv(void *this_) {
  return (bool)((QPersistentModelIndex*)this_)->isValid();
}

//  main block end
