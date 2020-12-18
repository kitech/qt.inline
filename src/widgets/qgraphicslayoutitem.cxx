//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicslayoutitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsLayoutItem is pure virtual: true true
// QGraphicsLayoutItem has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsLayoutItem_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsLayoutItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsLayoutItem_t qt_meta_stringdata_MyQGraphicsLayoutItem = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGraphicsLayoutItem"
  },
  "MyQGraphicsLayoutItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsLayoutItem[] = {
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
class Q_DECL_EXPORT MyQGraphicsLayoutItem : public QGraphicsLayoutItem {
public:
  virtual ~MyQGraphicsLayoutItem() {}
// void QGraphicsLayoutItem(QGraphicsLayoutItem *, bool)
MyQGraphicsLayoutItem(QGraphicsLayoutItem * parent, bool isLayout) : QGraphicsLayoutItem(parent, isLayout) {}
// Protected purevirtual virtual Direct Visibility=Default Availability=Available
// [16] QSizeF sizeHint(Qt::SizeHint, const QSizeF &)
  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 2, (uint64_t)which, (uint64_t)&constraint, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return (QSizeF){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicslayoutitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:65
// [-2] void setMinimumSize(qreal, qreal) 
// (12)qm3664423954 (43)_ZN19QGraphicsLayoutItem14setMinimumSizeEdd
//static
/*void qm3664423954(double w, double h)*/ {
  double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsLayoutItem*)this_)->setMinimumSize(w, h);
   auto xptr = (void (QGraphicsLayoutItem::*)(double, double) ) &QGraphicsLayoutItem::setMinimumSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:68
// [8] qreal minimumWidth() const
// (11)qm208957361 (41)_ZNK19QGraphicsLayoutItem12minimumWidthEv
//static
/*void qm208957361()*/ {
  ;
  (void) ((QGraphicsLayoutItem*)this_)->minimumWidth();
   auto xptr = (double (QGraphicsLayoutItem::*)() const ) &QGraphicsLayoutItem::minimumWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:70
// [8] qreal minimumHeight() const
// (12)qm1363214472 (42)_ZNK19QGraphicsLayoutItem13minimumHeightEv
//static
/*void qm1363214472()*/ {
  ;
  (void) ((QGraphicsLayoutItem*)this_)->minimumHeight();
   auto xptr = (double (QGraphicsLayoutItem::*)() const ) &QGraphicsLayoutItem::minimumHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:73
// [-2] void setPreferredSize(qreal, qreal) 
// (12)qm3395767301 (45)_ZN19QGraphicsLayoutItem16setPreferredSizeEdd
//static
/*void qm3395767301(double w, double h)*/ {
  double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsLayoutItem*)this_)->setPreferredSize(w, h);
   auto xptr = (void (QGraphicsLayoutItem::*)(double, double) ) &QGraphicsLayoutItem::setPreferredSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:76
// [8] qreal preferredWidth() const
// (11)qm816421116 (43)_ZNK19QGraphicsLayoutItem14preferredWidthEv
//static
/*void qm816421116()*/ {
  ;
  (void) ((QGraphicsLayoutItem*)this_)->preferredWidth();
   auto xptr = (double (QGraphicsLayoutItem::*)() const ) &QGraphicsLayoutItem::preferredWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:78
// [8] qreal preferredHeight() const
// (11)qm405456674 (44)_ZNK19QGraphicsLayoutItem15preferredHeightEv
//static
/*void qm405456674()*/ {
  ;
  (void) ((QGraphicsLayoutItem*)this_)->preferredHeight();
   auto xptr = (double (QGraphicsLayoutItem::*)() const ) &QGraphicsLayoutItem::preferredHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:81
// [-2] void setMaximumSize(qreal, qreal) 
// (12)qm1665939299 (43)_ZN19QGraphicsLayoutItem14setMaximumSizeEdd
//static
/*void qm1665939299(double w, double h)*/ {
  double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QGraphicsLayoutItem*)this_)->setMaximumSize(w, h);
   auto xptr = (void (QGraphicsLayoutItem::*)(double, double) ) &QGraphicsLayoutItem::setMaximumSize;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:84
// [8] qreal maximumWidth() const
// (12)qm3042112704 (41)_ZNK19QGraphicsLayoutItem12maximumWidthEv
//static
/*void qm3042112704()*/ {
  ;
  (void) ((QGraphicsLayoutItem*)this_)->maximumWidth();
   auto xptr = (double (QGraphicsLayoutItem::*)() const ) &QGraphicsLayoutItem::maximumWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicslayoutitem.h:86
// [8] qreal maximumHeight() const
// (12)qm1996122041 (42)_ZNK19QGraphicsLayoutItem13maximumHeightEv
//static
/*void qm1996122041()*/ {
  ;
  (void) ((QGraphicsLayoutItem*)this_)->maximumHeight();
   auto xptr = (double (QGraphicsLayoutItem::*)() const ) &QGraphicsLayoutItem::maximumHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QGraphicsLayoutItemD2Ev(void *this_)*/ {
  delete (QGraphicsLayoutItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicslayoutitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
