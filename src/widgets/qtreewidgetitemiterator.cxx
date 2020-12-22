//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(treewidget)
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtreewidgetitemiterator.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidgetItemIterator is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtreewidgetitemiterator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:84
// [-2] void QTreeWidgetItemIterator(const QTreeWidgetItemIterator &) 
// (12)qm3831915607 (35)_ZN23QTreeWidgetItemIteratorC2ERKS_
/*void* qm3831915607(const QTreeWidgetItemIterator & it)*/{
  const QTreeWidgetItemIterator & it = *(const QTreeWidgetItemIterator *)this_;
  this_ =  new QTreeWidgetItemIterator(it);
  this_ =  new MyQTreeWidgetItemIterator(it);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:85
// [-2] void QTreeWidgetItemIterator(QTreeWidget *, QTreeWidgetItemIterator::IteratorFlags) 
// (12)qm3414776233 (72)_ZN23QTreeWidgetItemIteratorC2EP11QTreeWidget6QFlagsINS_12IteratorFlagEE
/*void* qm3414776233(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)*/{
  QTreeWidget * widget = *(QTreeWidget **)this_; QFlags<QTreeWidgetItemIterator::IteratorFlag> flags = *(QFlags<QTreeWidgetItemIterator::IteratorFlag>*)this_;
  this_ =  new QTreeWidgetItemIterator(widget, flags);
  this_ =  new MyQTreeWidgetItemIterator(widget, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:86
// [-2] void QTreeWidgetItemIterator(QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags) 
// (12)qm3008050236 (76)_ZN23QTreeWidgetItemIteratorC2EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE
/*void* qm3008050236(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags)*/{
  QTreeWidgetItem * item = *(QTreeWidgetItem **)this_; QFlags<QTreeWidgetItemIterator::IteratorFlag> flags = *(QFlags<QTreeWidgetItemIterator::IteratorFlag>*)this_;
  this_ =  new QTreeWidgetItemIterator(item, flags);
  this_ =  new MyQTreeWidgetItemIterator(item, flags);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:92
// [24] const QTreeWidgetItemIterator operator++(int) 
// (12)qm1328558000 (32)_ZN23QTreeWidgetItemIteratorppEi
//static
/*void qm1328558000(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QTreeWidgetItemIterator*)this_)->operator++(arg0);
  // auto xptr = (const QTreeWidgetItemIterator (QTreeWidgetItemIterator::*)(int) ) &QTreeWidgetItemIterator::operator++;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:93
// [24] QTreeWidgetItemIterator & operator+=(int) 
// (12)qm1648440132 (32)_ZN23QTreeWidgetItemIteratorpLEi
//static
/*void qm1648440132(int n)*/ {
  int n = *(int*)this_;
  (void) ((QTreeWidgetItemIterator*)this_)->operator+=(n);
  // auto xptr = (QTreeWidgetItemIterator & (QTreeWidgetItemIterator::*)(int) ) &QTreeWidgetItemIterator::operator+=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:96
// [24] const QTreeWidgetItemIterator operator--(int) 
// (12)qm4189950161 (32)_ZN23QTreeWidgetItemIteratormmEi
//static
/*void qm4189950161(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QTreeWidgetItemIterator*)this_)->operator--(arg0);
  // auto xptr = (const QTreeWidgetItemIterator (QTreeWidgetItemIterator::*)(int) ) &QTreeWidgetItemIterator::operator--;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:97
// [24] QTreeWidgetItemIterator & operator-=(int) 
// (12)qm3338239725 (32)_ZN23QTreeWidgetItemIteratormIEi
//static
/*void qm3338239725(int n)*/ {
  int n = *(int*)this_;
  (void) ((QTreeWidgetItemIterator*)this_)->operator-=(n);
  // auto xptr = (QTreeWidgetItemIterator & (QTreeWidgetItemIterator::*)(int) ) &QTreeWidgetItemIterator::operator-=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:99
// [8] QTreeWidgetItem * operator*() const
// (11)qm414695474 (33)_ZNK23QTreeWidgetItemIteratordeEv
//static
/*void qm414695474()*/ {
  ;
  (void) ((QTreeWidgetItemIterator*)this_)->operator*();
  // auto xptr = (QTreeWidgetItem * (QTreeWidgetItemIterator::*)() const ) &QTreeWidgetItemIterator::operator*;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN23QTreeWidgetItemIteratorD2Ev(void *this_)*/ {
  delete (QTreeWidgetItemIterator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtreewidgetitemiterator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(treewidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
