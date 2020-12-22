//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(listwidget)
// /usr/include/qt/QtWidgets/qlistwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlistwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QListWidgetItem is pure virtual: false false
// QListWidgetItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQListWidgetItem_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQListWidgetItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQListWidgetItem_t qt_meta_stringdata_MyQListWidgetItem = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQListWidgetItem"
  },
  "MyQListWidgetItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQListWidgetItem[] = {
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
class Q_DECL_EXPORT MyQListWidgetItem : public QListWidgetItem {
public:
  virtual ~MyQListWidgetItem() {}
// void QListWidgetItem(QListWidget *, int)
MyQListWidgetItem(QListWidget * listview, int type_) : QListWidgetItem(listview, type_) {}
// void QListWidgetItem(const QString &, QListWidget *, int)
MyQListWidgetItem(const QString & text, QListWidget * listview, int type_) : QListWidgetItem(text, listview, type_) {}
// void QListWidgetItem(const QIcon &, const QString &, QListWidget *, int)
MyQListWidgetItem(const QIcon & icon, const QString & text, QListWidget * listview, int type_) : QListWidgetItem(icon, text, listview, type_) {}
// void QListWidgetItem(const QListWidgetItem &)
MyQListWidgetItem(const QListWidgetItem & other) : QListWidgetItem(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlistwidgetitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:64
// [-2] void QListWidgetItem(QListWidget *, int) 
// (10)qm56480504 (38)_ZN15QListWidgetItemC2EP11QListWidgeti
/*void* qm56480504(QListWidget * listview, int type_)*/{
  QListWidget * listview = *(QListWidget **)this_; int type_ = *(int*)this_;
  this_ =  new QListWidgetItem(listview, type_);
  this_ =  new MyQListWidgetItem(listview, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:65
// [-2] void QListWidgetItem(const QString &, QListWidget *, int) 
// (11)qm248460992 (48)_ZN15QListWidgetItemC2ERK7QStringP11QListWidgeti
/*void* qm248460992(const QString & text, QListWidget * listview, int type_)*/{
  const QString & text = *(const QString *)this_; QListWidget * listview = *(QListWidget **)this_; int type_ = *(int*)this_;
  this_ =  new QListWidgetItem(text, listview, type_);
  this_ =  new MyQListWidgetItem(text, listview, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:66
// [-2] void QListWidgetItem(const QIcon &, const QString &, QListWidget *, int) 
// (12)qm3565841736 (56)_ZN15QListWidgetItemC2ERK5QIconRK7QStringP11QListWidgeti
/*void* qm3565841736(const QIcon & icon, const QString & text, QListWidget * listview, int type_)*/{
  const QIcon & icon = *(const QIcon *)this_; const QString & text = *(const QString *)this_; QListWidget * listview = *(QListWidget **)this_; int type_ = *(int*)this_;
  this_ =  new QListWidgetItem(icon, text, listview, type_);
  this_ =  new MyQListWidgetItem(icon, text, listview, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:68
// [-2] void QListWidgetItem(const QListWidgetItem &) 
// (12)qm2321330834 (27)_ZN15QListWidgetItemC2ERKS_
/*void* qm2321330834(const QListWidgetItem & other)*/{
  const QListWidgetItem & other = *(const QListWidgetItem *)this_;
  this_ =  new QListWidgetItem(other);
  this_ =  new MyQListWidgetItem(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:73
// [8] QListWidget * listWidget() const
// (12)qm3052211783 (35)_ZNK15QListWidgetItem10listWidgetEv
//static
/*void qm3052211783()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->listWidget();
   auto xptr = (QListWidget * (QListWidgetItem::*)() const ) &QListWidgetItem::listWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:78
// [-2] void setHidden(bool) 
// (12)qm4190663705 (32)_ZN15QListWidgetItem9setHiddenEb
//static
/*void qm4190663705(bool hide)*/ {
  bool hide = *(bool*)this_;
  (void) ((QListWidgetItem*)this_)->setHidden(hide);
   auto xptr = (void (QListWidgetItem::*)(bool) ) &QListWidgetItem::setHidden;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:79
// [1] bool isHidden() const
// (12)qm3920022062 (32)_ZNK15QListWidgetItem8isHiddenEv
//static
/*void qm3920022062()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->isHidden();
   auto xptr = (bool (QListWidgetItem::*)() const ) &QListWidgetItem::isHidden;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:81
// [4] Qt::ItemFlags flags() const
// (12)qm3201683146 (29)_ZNK15QListWidgetItem5flagsEv
//static
/*void qm3201683146()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->flags();
   auto xptr = (QFlags<Qt::ItemFlag> (QListWidgetItem::*)() const ) &QListWidgetItem::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:84
// [8] QString text() const
// (11)qm829461800 (28)_ZNK15QListWidgetItem4textEv
//static
/*void qm829461800()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->text();
   auto xptr = (QString (QListWidgetItem::*)() const ) &QListWidgetItem::text;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:86
// [-2] void setText(const QString &) 
// (12)qm3423457056 (39)_ZN15QListWidgetItem7setTextERK7QString
//static
/*void qm3423457056(const QString & text)*/ {
  const QString & text = *(const QString *)this_;
  (void) ((QListWidgetItem*)this_)->setText(text);
   auto xptr = (void (QListWidgetItem::*)(QString const&) ) &QListWidgetItem::setText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:88
// [8] QIcon icon() const
// (12)qm3708237901 (28)_ZNK15QListWidgetItem4iconEv
//static
/*void qm3708237901()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->icon();
   auto xptr = (QIcon (QListWidgetItem::*)() const ) &QListWidgetItem::icon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:90
// [-2] void setIcon(const QIcon &) 
// (12)qm2810007255 (37)_ZN15QListWidgetItem7setIconERK5QIcon
//static
/*void qm2810007255(const QIcon & icon)*/ {
  const QIcon & icon = *(const QIcon *)this_;
  (void) ((QListWidgetItem*)this_)->setIcon(icon);
   auto xptr = (void (QListWidgetItem::*)(QIcon const&) ) &QListWidgetItem::setIcon;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:92
// [8] QString statusTip() const
// (12)qm1135609159 (33)_ZNK15QListWidgetItem9statusTipEv
//static
/*void qm1135609159()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->statusTip();
   auto xptr = (QString (QListWidgetItem::*)() const ) &QListWidgetItem::statusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:94
// [-2] void setStatusTip(const QString &) 
// (12)qm3700517868 (45)_ZN15QListWidgetItem12setStatusTipERK7QString
//static
/*void qm3700517868(const QString & statusTip)*/ {
  const QString & statusTip = *(const QString *)this_;
  (void) ((QListWidgetItem*)this_)->setStatusTip(statusTip);
   auto xptr = (void (QListWidgetItem::*)(QString const&) ) &QListWidgetItem::setStatusTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:97
// [8] QString toolTip() const
// (12)qm2537863815 (31)_ZNK15QListWidgetItem7toolTipEv
//static
/*void qm2537863815()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->toolTip();
   auto xptr = (QString (QListWidgetItem::*)() const ) &QListWidgetItem::toolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:99
// [-2] void setToolTip(const QString &) 
// (12)qm1903500272 (43)_ZN15QListWidgetItem10setToolTipERK7QString
//static
/*void qm1903500272(const QString & toolTip)*/ {
  const QString & toolTip = *(const QString *)this_;
  (void) ((QListWidgetItem*)this_)->setToolTip(toolTip);
   auto xptr = (void (QListWidgetItem::*)(QString const&) ) &QListWidgetItem::setToolTip;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:103
// [8] QString whatsThis() const
// (12)qm3507879113 (33)_ZNK15QListWidgetItem9whatsThisEv
//static
/*void qm3507879113()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->whatsThis();
   auto xptr = (QString (QListWidgetItem::*)() const ) &QListWidgetItem::whatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:105
// [-2] void setWhatsThis(const QString &) 
// (12)qm3609195729 (45)_ZN15QListWidgetItem12setWhatsThisERK7QString
//static
/*void qm3609195729(const QString & whatsThis)*/ {
  const QString & whatsThis = *(const QString *)this_;
  (void) ((QListWidgetItem*)this_)->setWhatsThis(whatsThis);
   auto xptr = (void (QListWidgetItem::*)(QString const&) ) &QListWidgetItem::setWhatsThis;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:108
// [16] QFont font() const
// (12)qm1085023834 (28)_ZNK15QListWidgetItem4fontEv
//static
/*void qm1085023834()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->font();
   auto xptr = (QFont (QListWidgetItem::*)() const ) &QListWidgetItem::font;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:110
// [-2] void setFont(const QFont &) 
// (12)qm3238345099 (37)_ZN15QListWidgetItem7setFontERK5QFont
//static
/*void qm3238345099(const QFont & font)*/ {
  const QFont & font = *(const QFont *)this_;
  (void) ((QListWidgetItem*)this_)->setFont(font);
   auto xptr = (void (QListWidgetItem::*)(QFont const&) ) &QListWidgetItem::setFont;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:112
// [4] int textAlignment() const
// (12)qm3786728094 (38)_ZNK15QListWidgetItem13textAlignmentEv
//static
/*void qm3786728094()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->textAlignment();
   auto xptr = (int (QListWidgetItem::*)() const ) &QListWidgetItem::textAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:114
// [-2] void setTextAlignment(int) 
// (12)qm1266951520 (40)_ZN15QListWidgetItem16setTextAlignmentEi
//static
/*void qm1266951520(int alignment)*/ {
  int alignment = *(int*)this_;
  (void) ((QListWidgetItem*)this_)->setTextAlignment(alignment);
   auto xptr = (void (QListWidgetItem::*)(int) ) &QListWidgetItem::setTextAlignment;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:127
// [8] QBrush background() const
// (12)qm3910974285 (35)_ZNK15QListWidgetItem10backgroundEv
//static
/*void qm3910974285()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->background();
   auto xptr = (QBrush (QListWidgetItem::*)() const ) &QListWidgetItem::background;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:129
// [-2] void setBackground(const QBrush &) 
// (12)qm4168579088 (45)_ZN15QListWidgetItem13setBackgroundERK6QBrush
//static
/*void qm4168579088(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QListWidgetItem*)this_)->setBackground(brush);
   auto xptr = (void (QListWidgetItem::*)(QBrush const&) ) &QListWidgetItem::setBackground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:141
// [8] QBrush foreground() const
// (12)qm3099761264 (35)_ZNK15QListWidgetItem10foregroundEv
//static
/*void qm3099761264()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->foreground();
   auto xptr = (QBrush (QListWidgetItem::*)() const ) &QListWidgetItem::foreground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:143
// [-2] void setForeground(const QBrush &) 
// (12)qm2721224624 (45)_ZN15QListWidgetItem13setForegroundERK6QBrush
//static
/*void qm2721224624(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QListWidgetItem*)this_)->setForeground(brush);
   auto xptr = (void (QListWidgetItem::*)(QBrush const&) ) &QListWidgetItem::setForeground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:146
// [4] Qt::CheckState checkState() const
// (12)qm1128276553 (35)_ZNK15QListWidgetItem10checkStateEv
//static
/*void qm1128276553()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->checkState();
   auto xptr = (Qt::CheckState (QListWidgetItem::*)() const ) &QListWidgetItem::checkState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:148
// [-2] void setCheckState(Qt::CheckState) 
// (12)qm2662988816 (53)_ZN15QListWidgetItem13setCheckStateEN2Qt10CheckStateE
//static
/*void qm2662988816(Qt::CheckState state)*/ {
  Qt::CheckState state = *(Qt::CheckState*)this_;
  (void) ((QListWidgetItem*)this_)->setCheckState(state);
   auto xptr = (void (QListWidgetItem::*)(Qt::CheckState) ) &QListWidgetItem::setCheckState;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:151
// [8] QSize sizeHint() const
// (12)qm2931985871 (32)_ZNK15QListWidgetItem8sizeHintEv
//static
/*void qm2931985871()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->sizeHint();
   auto xptr = (QSize (QListWidgetItem::*)() const ) &QListWidgetItem::sizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:153
// [-2] void setSizeHint(const QSize &) 
// (11)qm419543709 (42)_ZN15QListWidgetItem11setSizeHintERK5QSize
//static
/*void qm419543709(const QSize & size)*/ {
  const QSize & size = *(const QSize *)this_;
  (void) ((QListWidgetItem*)this_)->setSizeHint(size);
   auto xptr = (void (QListWidgetItem::*)(QSize const&) ) &QListWidgetItem::setSizeHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlistwidget.h:167
// [4] int type() const
// (12)qm1278217731 (28)_ZNK15QListWidgetItem4typeEv
//static
/*void qm1278217731()*/ {
  ;
  (void) ((QListWidgetItem*)this_)->type();
   auto xptr = (int (QListWidgetItem::*)() const ) &QListWidgetItem::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QListWidgetItemD2Ev(void *this_)*/ {
  delete (QListWidgetItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlistwidgetitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(listwidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
