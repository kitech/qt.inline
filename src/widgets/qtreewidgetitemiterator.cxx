//  header block begin

// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtreewidgetitemiterator.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidgetItemIterator is pure virtual: false
// QTreeWidgetItemIterator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTreeWidgetItemIterator_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTreeWidgetItemIterator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTreeWidgetItemIterator_t qt_meta_stringdata_MyQTreeWidgetItemIterator = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQTreeWidgetItemIterator"
  },
  "MyQTreeWidgetItemIterator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTreeWidgetItemIterator[] = {
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
class Q_DECL_EXPORT MyQTreeWidgetItemIterator : public QTreeWidgetItemIterator {
public:
  virtual ~MyQTreeWidgetItemIterator() {}
// void QTreeWidgetItemIterator(const QTreeWidgetItemIterator &)
MyQTreeWidgetItemIterator(const QTreeWidgetItemIterator & it) : QTreeWidgetItemIterator(it) {}
// void QTreeWidgetItemIterator(QTreeWidget *, QTreeWidgetItemIterator::IteratorFlags)
MyQTreeWidgetItemIterator(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) : QTreeWidgetItemIterator(widget, flags) {}
// void QTreeWidgetItemIterator(QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags)
MyQTreeWidgetItemIterator(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) : QTreeWidgetItemIterator(item, flags) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:85
// [-2] void QTreeWidgetItemIterator(const QTreeWidgetItemIterator &)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorC2ERKS_(QTreeWidgetItemIterator* it) {
  return  new QTreeWidgetItemIterator(*it);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:86
// [-2] void QTreeWidgetItemIterator(QTreeWidget *, QTreeWidgetItemIterator::IteratorFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorC2EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return  new QTreeWidgetItemIterator(widget, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:87
// [-2] void QTreeWidgetItemIterator(QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorC2EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return  new QTreeWidgetItemIterator(item, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:88
// [-2] void ~QTreeWidgetItemIterator()
extern "C" Q_DECL_EXPORT
void C_ZN23QTreeWidgetItemIteratorD2Ev(void *this_) {
  delete (QTreeWidgetItemIterator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:90
// [24] QTreeWidgetItemIterator & operator=(const QTreeWidgetItemIterator &)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratoraSERKS_(void *this_, QTreeWidgetItemIterator* it) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator=(*it);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:92
// [24] QTreeWidgetItemIterator & operator++()
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorppEv(void *this_) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator++();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:93
// [24] const QTreeWidgetItemIterator operator++(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorppEi(void *this_, int arg0) {
  auto rv = ((QTreeWidgetItemIterator*)this_)->operator++(arg0);
return new QTreeWidgetItemIterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:94
// [24] QTreeWidgetItemIterator & operator+=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorpLEi(void *this_, int n) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator+=(n);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:96
// [24] QTreeWidgetItemIterator & operator--()
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratormmEv(void *this_) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator--();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:97
// [24] const QTreeWidgetItemIterator operator--(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratormmEi(void *this_, int arg0) {
  auto rv = ((QTreeWidgetItemIterator*)this_)->operator--(arg0);
return new QTreeWidgetItemIterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:98
// [24] QTreeWidgetItemIterator & operator-=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratormIEi(void *this_, int n) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator-=(n);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:100
// [8] QTreeWidgetItem * operator*()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QTreeWidgetItemIteratordeEv(void *this_) {
  return (void*)((QTreeWidgetItemIterator*)this_)->operator*();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
