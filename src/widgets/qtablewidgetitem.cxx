//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(tablewidget)
// /usr/include/qt/QtWidgets/qtablewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidgetItem is pure virtual: false false
// QTableWidgetItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTableWidgetItem_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTableWidgetItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTableWidgetItem_t qt_meta_stringdata_MyQTableWidgetItem = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTableWidgetItem"
  },
  "MyQTableWidgetItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTableWidgetItem[] = {
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
class Q_DECL_EXPORT MyQTableWidgetItem : public QTableWidgetItem {
public:
  virtual ~MyQTableWidgetItem() {}
// void QTableWidgetItem(int)
MyQTableWidgetItem(int type_) : QTableWidgetItem(type_) {}
// void QTableWidgetItem(const QString &, int)
MyQTableWidgetItem(const QString & text, int type_) : QTableWidgetItem(text, type_) {}
// void QTableWidgetItem(const QIcon &, const QString &, int)
MyQTableWidgetItem(const QIcon & icon, const QString & text, int type_) : QTableWidgetItem(icon, text, type_) {}
// void QTableWidgetItem(const QTableWidgetItem &)
MyQTableWidgetItem(const QTableWidgetItem & other) : QTableWidgetItem(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtablewidgetitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:93
// [8] QTableWidget * tableWidget() const
// (12)qm3042490153 (37)_ZNK16QTableWidgetItem11tableWidgetEv
//static
/*void qm3042490153()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->tableWidget();
   auto xptr = (QTableWidget * (QTableWidgetItem::*)() const ) &QTableWidgetItem::tableWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:95
// [4] int row() const
// (12)qm2904927541 (28)_ZNK16QTableWidgetItem3rowEv
//static
/*void qm2904927541()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->row();
   auto xptr = (int (QTableWidgetItem::*)() const ) &QTableWidgetItem::row;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:96
// [4] int column() const
// (12)qm1321439230 (31)_ZNK16QTableWidgetItem6columnEv
//static
/*void qm1321439230()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->column();
   auto xptr = (int (QTableWidgetItem::*)() const ) &QTableWidgetItem::column;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:101
// [4] Qt::ItemFlags flags() const
// (12)qm1339935224 (30)_ZNK16QTableWidgetItem5flagsEv
//static
/*void qm1339935224()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->flags();
   auto xptr = (QFlags<Qt::ItemFlag> (QTableWidgetItem::*)() const ) &QTableWidgetItem::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:104
// [8] QString text() const
// (12)qm3986023929 (29)_ZNK16QTableWidgetItem4textEv
//static
/*void qm3986023929()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->text();
   auto xptr = (QString (QTableWidgetItem::*)() const ) &QTableWidgetItem::text;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:106
// [-2] void setText(const QString &) 
// (12)qm3486259063 (40)_ZN16QTableWidgetItem7setTextERK7QString
//static
/*void qm3486259063(const QString & text)*/ {
  const QString & text = *(const QString *)this_;
  (void) ((QTableWidgetItem*)this_)->setText(text);
   auto xptr = (void (QTableWidgetItem::*)(QString const&) ) &QTableWidgetItem::setText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:108
// [8] QIcon icon() const
// (10)qm31606940 (29)_ZNK16QTableWidgetItem4iconEv
//static
/*void qm31606940()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->icon();
   auto xptr = (QIcon (QTableWidgetItem::*)() const ) &QTableWidgetItem::icon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:110
// [-2] void setIcon(const QIcon &) 
// (12)qm2585156310 (38)_ZN16QTableWidgetItem7setIconERK5QIcon
//static
/*void qm2585156310(const QIcon & icon)*/ {
  const QIcon & icon = *(const QIcon *)this_;
  (void) ((QTableWidgetItem*)this_)->setIcon(icon);
   auto xptr = (void (QTableWidgetItem::*)(QIcon const&) ) &QTableWidgetItem::setIcon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:112
// [8] QString statusTip() const
// (11)qm515795818 (34)_ZNK16QTableWidgetItem9statusTipEv
//static
/*void qm515795818()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->statusTip();
   auto xptr = (QString (QTableWidgetItem::*)() const ) &QTableWidgetItem::statusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:114
// [-2] void setStatusTip(const QString &) 
// (12)qm3089649665 (46)_ZN16QTableWidgetItem12setStatusTipERK7QString
//static
/*void qm3089649665(const QString & statusTip)*/ {
  const QString & statusTip = *(const QString *)this_;
  (void) ((QTableWidgetItem*)this_)->setStatusTip(statusTip);
   auto xptr = (void (QTableWidgetItem::*)(QString const&) ) &QTableWidgetItem::setStatusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:117
// [8] QString toolTip() const
// (12)qm3830483549 (32)_ZNK16QTableWidgetItem7toolTipEv
//static
/*void qm3830483549()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->toolTip();
   auto xptr = (QString (QTableWidgetItem::*)() const ) &QTableWidgetItem::toolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:119
// [-2] void setToolTip(const QString &) 
// (12)qm4024303574 (44)_ZN16QTableWidgetItem10setToolTipERK7QString
//static
/*void qm4024303574(const QString & toolTip)*/ {
  const QString & toolTip = *(const QString *)this_;
  (void) ((QTableWidgetItem*)this_)->setToolTip(toolTip);
   auto xptr = (void (QTableWidgetItem::*)(QString const&) ) &QTableWidgetItem::setToolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:123
// [8] QString whatsThis() const
// (12)qm2350617316 (34)_ZNK16QTableWidgetItem9whatsThisEv
//static
/*void qm2350617316()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->whatsThis();
   auto xptr = (QString (QTableWidgetItem::*)() const ) &QTableWidgetItem::whatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:125
// [-2] void setWhatsThis(const QString &) 
// (12)qm3014053692 (46)_ZN16QTableWidgetItem12setWhatsThisERK7QString
//static
/*void qm3014053692(const QString & whatsThis)*/ {
  const QString & whatsThis = *(const QString *)this_;
  (void) ((QTableWidgetItem*)this_)->setWhatsThis(whatsThis);
   auto xptr = (void (QTableWidgetItem::*)(QString const&) ) &QTableWidgetItem::setWhatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:128
// [16] QFont font() const
// (12)qm2622051979 (29)_ZNK16QTableWidgetItem4fontEv
//static
/*void qm2622051979()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->font();
   auto xptr = (QFont (QTableWidgetItem::*)() const ) &QTableWidgetItem::font;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:130
// [-2] void setFont(const QFont &) 
// (12)qm4235079050 (38)_ZN16QTableWidgetItem7setFontERK5QFont
//static
/*void qm4235079050(const QFont & font)*/ {
  const QFont & font = *(const QFont *)this_;
  (void) ((QTableWidgetItem*)this_)->setFont(font);
   auto xptr = (void (QTableWidgetItem::*)(QFont const&) ) &QTableWidgetItem::setFont;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:132
// [4] int textAlignment() const
// (11)qm110593800 (39)_ZNK16QTableWidgetItem13textAlignmentEv
//static
/*void qm110593800()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->textAlignment();
   auto xptr = (int (QTableWidgetItem::*)() const ) &QTableWidgetItem::textAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:134
// [-2] void setTextAlignment(int) 
// (12)qm3196592367 (41)_ZN16QTableWidgetItem16setTextAlignmentEi
//static
/*void qm3196592367(int alignment)*/ {
  int alignment = *(int*)this_;
  (void) ((QTableWidgetItem*)this_)->setTextAlignment(alignment);
   auto xptr = (void (QTableWidgetItem::*)(int) ) &QTableWidgetItem::setTextAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:146
// [8] QBrush background() const
// (12)qm1664938227 (36)_ZNK16QTableWidgetItem10backgroundEv
//static
/*void qm1664938227()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->background();
   auto xptr = (QBrush (QTableWidgetItem::*)() const ) &QTableWidgetItem::background;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:148
// [-2] void setBackground(const QBrush &) 
// (12)qm2630763517 (46)_ZN16QTableWidgetItem13setBackgroundERK6QBrush
//static
/*void qm2630763517(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTableWidgetItem*)this_)->setBackground(brush);
   auto xptr = (void (QTableWidgetItem::*)(QBrush const&) ) &QTableWidgetItem::setBackground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:160
// [8] QBrush foreground() const
// (11)qm853725646 (36)_ZNK16QTableWidgetItem10foregroundEv
//static
/*void qm853725646()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->foreground();
   auto xptr = (QBrush (QTableWidgetItem::*)() const ) &QTableWidgetItem::foreground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:162
// [-2] void setForeground(const QBrush &) 
// (12)qm3331042397 (46)_ZN16QTableWidgetItem13setForegroundERK6QBrush
//static
/*void qm3331042397(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTableWidgetItem*)this_)->setForeground(brush);
   auto xptr = (void (QTableWidgetItem::*)(QBrush const&) ) &QTableWidgetItem::setForeground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:165
// [4] Qt::CheckState checkState() const
// (12)qm3378538999 (36)_ZNK16QTableWidgetItem10checkStateEv
//static
/*void qm3378538999()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->checkState();
   auto xptr = (Qt::CheckState (QTableWidgetItem::*)() const ) &QTableWidgetItem::checkState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:167
// [-2] void setCheckState(Qt::CheckState) 
// (12)qm2105519672 (54)_ZN16QTableWidgetItem13setCheckStateEN2Qt10CheckStateE
//static
/*void qm2105519672(Qt::CheckState state)*/ {
  Qt::CheckState state = *(Qt::CheckState*)this_;
  (void) ((QTableWidgetItem*)this_)->setCheckState(state);
   auto xptr = (void (QTableWidgetItem::*)(Qt::CheckState) ) &QTableWidgetItem::setCheckState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:170
// [8] QSize sizeHint() const
// (12)qm3367477813 (33)_ZNK16QTableWidgetItem8sizeHintEv
//static
/*void qm3367477813()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->sizeHint();
   auto xptr = (QSize (QTableWidgetItem::*)() const ) &QTableWidgetItem::sizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:172
// [-2] void setSizeHint(const QSize &) 
// (12)qm3580903322 (43)_ZN16QTableWidgetItem11setSizeHintERK5QSize
//static
/*void qm3580903322(const QSize & size)*/ {
  const QSize & size = *(const QSize *)this_;
  (void) ((QTableWidgetItem*)this_)->setSizeHint(size);
   auto xptr = (void (QTableWidgetItem::*)(QSize const&) ) &QTableWidgetItem::setSizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:186
// [4] int type() const
// (12)qm2429910738 (29)_ZNK16QTableWidgetItem4typeEv
//static
/*void qm2429910738()*/ {
  ;
  (void) ((QTableWidgetItem*)this_)->type();
   auto xptr = (int (QTableWidgetItem::*)() const ) &QTableWidgetItem::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QTableWidgetItemD2Ev(void *this_)*/ {
  delete (QTableWidgetItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtablewidgetitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(tablewidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
