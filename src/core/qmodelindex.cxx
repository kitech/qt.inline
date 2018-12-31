//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(itemmodel)
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include "callback_inherit.h"

// QModelIndex is pure virtual: false
// QModelIndex has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQModelIndex_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQModelIndex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQModelIndex_t qt_meta_stringdata_MyQModelIndex = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQModelIndex"
  },
  "MyQModelIndex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQModelIndex[] = {
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
class Q_DECL_EXPORT MyQModelIndex : public QModelIndex {
public:
  virtual ~MyQModelIndex() {}
// void QModelIndex()
MyQModelIndex() : QModelIndex() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:60
// [-2] void QModelIndex()
extern "C" Q_DECL_EXPORT
void* C_ZN11QModelIndexC2Ev() {
  return  new QModelIndex();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:62
// [4] int row()
extern "C" Q_DECL_EXPORT
int C_ZNK11QModelIndex3rowEv(void *this_) {
  return (int)((QModelIndex*)this_)->row();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:63
// [4] int column()
extern "C" Q_DECL_EXPORT
int C_ZNK11QModelIndex6columnEv(void *this_) {
  return (int)((QModelIndex*)this_)->column();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:64
// [8] quintptr internalId()
extern "C" Q_DECL_EXPORT
quintptr C_ZNK11QModelIndex10internalIdEv(void *this_) {
  return (quintptr)((QModelIndex*)this_)->internalId();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:65
// [8] void * internalPointer()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex15internalPointerEv(void *this_) {
  return (void*)((QModelIndex*)this_)->internalPointer();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:66
// [24] QModelIndex parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex6parentEv(void *this_) {
  auto rv = ((QModelIndex*)this_)->parent();
return new QModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:67
// [24] QModelIndex sibling(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex7siblingEii(void *this_, int row, int column) {
  auto rv = ((QModelIndex*)this_)->sibling(row, column);
return new QModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtCore/qabstractitemmodel.h:68
// [24] QModelIndex siblingAtColumn(int)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex15siblingAtColumnEi(void *this_, int column) {
  auto rv = ((QModelIndex*)this_)->siblingAtColumn(column);
return new QModelIndex(rv);
}
#endif // QT_VERSION >= 0x050b00

// Public inline Visibility=Default Availability=Available
// since 5.11
// /usr/include/qt/QtCore/qabstractitemmodel.h:69
// [24] QModelIndex siblingAtRow(int)
#if QT_VERSION >= 0x050b00
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex12siblingAtRowEi(void *this_, int row) {
  auto rv = ((QModelIndex*)this_)->siblingAtRow(row);
return new QModelIndex(rv);
}
#endif // QT_VERSION >= 0x050b00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:71
// [24] QModelIndex child(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex5childEii(void *this_, int row, int column) {
  auto rv = ((QModelIndex*)this_)->child(row, column);
return new QModelIndex(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:73
// [16] QVariant data(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex4dataEi(void *this_, int role) {
  auto rv = ((QModelIndex*)this_)->data(role);
return new QVariant(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qabstractitemmodel.h:74
// [4] Qt::ItemFlags flags()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK11QModelIndex5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QModelIndex*)this_)->flags();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:75
// [8] const QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QModelIndex5modelEv(void *this_) {
  return (void*)((QModelIndex*)this_)->model();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:76
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndex7isValidEv(void *this_) {
  return (bool)((QModelIndex*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:77
// [1] bool operator==(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndexeqERKS_(void *this_, QModelIndex* other) {
  return (bool)((QModelIndex*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:79
// [1] bool operator!=(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndexneERKS_(void *this_, QModelIndex* other) {
  return (bool)((QModelIndex*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:81
// [1] bool operator<(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QModelIndexltERKS_(void *this_, QModelIndex* other) {
  return (bool)((QModelIndex*)this_)->operator<(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QModelIndexD2Ev(void *this_) {
  delete (QModelIndex*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemmodel)
#endif // #ifndef QT_MINIMAL
//  footer block end
