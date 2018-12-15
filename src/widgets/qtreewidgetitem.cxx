//  header block begin

// /usr/include/qt/QtWidgets/qtreewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtreewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidgetItem is pure virtual: false
// QTreeWidgetItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTreeWidgetItem_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTreeWidgetItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTreeWidgetItem_t qt_meta_stringdata_MyQTreeWidgetItem = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQTreeWidgetItem"
  },
  "MyQTreeWidgetItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTreeWidgetItem[] = {
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
class Q_DECL_EXPORT MyQTreeWidgetItem : public QTreeWidgetItem {
public:
  virtual ~MyQTreeWidgetItem() {}
// void QTreeWidgetItem(int)
MyQTreeWidgetItem(int type_) : QTreeWidgetItem(type_) {}
// void QTreeWidgetItem(const QStringList &, int)
MyQTreeWidgetItem(const QStringList & strings, int type_) : QTreeWidgetItem(strings, type_) {}
// void QTreeWidgetItem(QTreeWidget *, int)
MyQTreeWidgetItem(QTreeWidget * view, int type_) : QTreeWidgetItem(view, type_) {}
// void QTreeWidgetItem(QTreeWidget *, const QStringList &, int)
MyQTreeWidgetItem(QTreeWidget * view, const QStringList & strings, int type_) : QTreeWidgetItem(view, strings, type_) {}
// void QTreeWidgetItem(QTreeWidget *, QTreeWidgetItem *, int)
MyQTreeWidgetItem(QTreeWidget * view, QTreeWidgetItem * after, int type_) : QTreeWidgetItem(view, after, type_) {}
// void QTreeWidgetItem(QTreeWidgetItem *, int)
MyQTreeWidgetItem(QTreeWidgetItem * parent, int type_) : QTreeWidgetItem(parent, type_) {}
// void QTreeWidgetItem(QTreeWidgetItem *, const QStringList &, int)
MyQTreeWidgetItem(QTreeWidgetItem * parent, const QStringList & strings, int type_) : QTreeWidgetItem(parent, strings, type_) {}
// void QTreeWidgetItem(QTreeWidgetItem *, QTreeWidgetItem *, int)
MyQTreeWidgetItem(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type_) : QTreeWidgetItem(parent, after, type_) {}
// void QTreeWidgetItem(const QTreeWidgetItem &)
MyQTreeWidgetItem(const QTreeWidgetItem & other) : QTreeWidgetItem(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:68
// [-2] void QTreeWidgetItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2Ei(int type_) {
  return  new QTreeWidgetItem(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:69
// [-2] void QTreeWidgetItem(const QStringList &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2ERK11QStringListi(QStringList* strings, int type_) {
  return  new QTreeWidgetItem(*strings, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:70
// [-2] void QTreeWidgetItem(QTreeWidget *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2EP11QTreeWidgeti(QTreeWidget * view, int type_) {
  return  new QTreeWidgetItem(view, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:71
// [-2] void QTreeWidgetItem(QTreeWidget *, const QStringList &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2EP11QTreeWidgetRK11QStringListi(QTreeWidget * view, QStringList* strings, int type_) {
  return  new QTreeWidgetItem(view, *strings, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:72
// [-2] void QTreeWidgetItem(QTreeWidget *, QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2EP11QTreeWidgetPS_i(QTreeWidget * view, QTreeWidgetItem * after, int type_) {
  return  new QTreeWidgetItem(view, after, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:73
// [-2] void QTreeWidgetItem(QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2EPS_i(QTreeWidgetItem * parent, int type_) {
  return  new QTreeWidgetItem(parent, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:74
// [-2] void QTreeWidgetItem(QTreeWidgetItem *, const QStringList &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2EPS_RK11QStringListi(QTreeWidgetItem * parent, QStringList* strings, int type_) {
  return  new QTreeWidgetItem(parent, *strings, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:75
// [-2] void QTreeWidgetItem(QTreeWidgetItem *, QTreeWidgetItem *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2EPS_S0_i(QTreeWidgetItem * parent, QTreeWidgetItem * after, int type_) {
  return  new QTreeWidgetItem(parent, after, type_);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:76
// [-2] void QTreeWidgetItem(const QTreeWidgetItem &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemC2ERKS_(QTreeWidgetItem* other) {
  return  new QTreeWidgetItem(*other);
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:77
// [-2] void ~QTreeWidgetItem()
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItemD2Ev(void *this_) {
  delete (QTreeWidgetItem*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:79
// [8] QTreeWidgetItem * clone()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem5cloneEv(void *this_) {
  return (void*)((QTreeWidgetItem*)this_)->clone();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:81
// [8] QTreeWidget * treeWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem10treeWidgetEv(void *this_) {
  return (void*)((QTreeWidgetItem*)this_)->treeWidget();
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:83
// [-2] void setSelected(bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem11setSelectedEb(void *this_, bool select_) {
  ((QTreeWidgetItem*)this_)->setSelected(select_);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:84
// [1] bool isSelected()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTreeWidgetItem10isSelectedEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isSelected();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:86
// [-2] void setHidden(bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem9setHiddenEb(void *this_, bool hide) {
  ((QTreeWidgetItem*)this_)->setHidden(hide);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:87
// [1] bool isHidden()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTreeWidgetItem8isHiddenEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isHidden();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:89
// [-2] void setExpanded(bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem11setExpandedEb(void *this_, bool expand) {
  ((QTreeWidgetItem*)this_)->setExpanded(expand);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:90
// [1] bool isExpanded()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTreeWidgetItem10isExpandedEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isExpanded();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:92
// [-2] void setFirstColumnSpanned(bool)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem21setFirstColumnSpannedEb(void *this_, bool span) {
  ((QTreeWidgetItem*)this_)->setFirstColumnSpanned(span);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:93
// [1] bool isFirstColumnSpanned()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTreeWidgetItem20isFirstColumnSpannedEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isFirstColumnSpanned();
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:95
// [-2] void setDisabled(bool)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem11setDisabledEb(void *this_, bool disabled) {
  ((QTreeWidgetItem*)this_)->setDisabled(disabled);
}
#endif // QT_VERSION >= 0x040300

// Public inline Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qtreewidget.h:96
// [1] bool isDisabled()
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTreeWidgetItem10isDisabledEv(void *this_) {
  return (bool)((QTreeWidgetItem*)this_)->isDisabled();
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:99
// [-2] void setChildIndicatorPolicy(QTreeWidgetItem::ChildIndicatorPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem23setChildIndicatorPolicyENS_20ChildIndicatorPolicyE(void *this_, QTreeWidgetItem::ChildIndicatorPolicy policy) {
  ((QTreeWidgetItem*)this_)->setChildIndicatorPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:100
// [4] QTreeWidgetItem::ChildIndicatorPolicy childIndicatorPolicy()
extern "C" Q_DECL_EXPORT
QTreeWidgetItem::ChildIndicatorPolicy C_ZNK15QTreeWidgetItem20childIndicatorPolicyEv(void *this_) {
  return (QTreeWidgetItem::ChildIndicatorPolicy)((QTreeWidgetItem*)this_)->childIndicatorPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:102
// [4] Qt::ItemFlags flags()
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK15QTreeWidgetItem5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QTreeWidgetItem*)this_)->flags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:103
// [-2] void setFlags(Qt::ItemFlags)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QTreeWidgetItem*)this_)->setFlags(flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:105
// [8] QString text(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem4textEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->text(column);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:107
// [-2] void setText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem7setTextEiRK7QString(void *this_, int column, QString* text) {
  ((QTreeWidgetItem*)this_)->setText(column, *text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:109
// [8] QIcon icon(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem4iconEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->icon(column);
return new QIcon(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:111
// [-2] void setIcon(int, const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem7setIconEiRK5QIcon(void *this_, int column, QIcon* icon) {
  ((QTreeWidgetItem*)this_)->setIcon(column, *icon);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:113
// [8] QString statusTip(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem9statusTipEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->statusTip(column);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:115
// [-2] void setStatusTip(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem12setStatusTipEiRK7QString(void *this_, int column, QString* statusTip) {
  ((QTreeWidgetItem*)this_)->setStatusTip(column, *statusTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:118
// [8] QString toolTip(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem7toolTipEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->toolTip(column);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:120
// [-2] void setToolTip(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem10setToolTipEiRK7QString(void *this_, int column, QString* toolTip) {
  ((QTreeWidgetItem*)this_)->setToolTip(column, *toolTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:124
// [8] QString whatsThis(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem9whatsThisEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->whatsThis(column);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:126
// [-2] void setWhatsThis(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem12setWhatsThisEiRK7QString(void *this_, int column, QString* whatsThis) {
  ((QTreeWidgetItem*)this_)->setWhatsThis(column, *whatsThis);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:129
// [16] QFont font(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem4fontEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->font(column);
return new QFont(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:131
// [-2] void setFont(int, const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem7setFontEiRK5QFont(void *this_, int column, QFont* font) {
  ((QTreeWidgetItem*)this_)->setFont(column, *font);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:133
// [4] int textAlignment(int)
extern "C" Q_DECL_EXPORT
int C_ZNK15QTreeWidgetItem13textAlignmentEi(void *this_, int column) {
  return (int)((QTreeWidgetItem*)this_)->textAlignment(column);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:135
// [-2] void setTextAlignment(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem16setTextAlignmentEii(void *this_, int column, int alignment) {
  ((QTreeWidgetItem*)this_)->setTextAlignment(column, alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:138
// [16] QColor backgroundColor(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem15backgroundColorEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->backgroundColor(column);
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:140
// [-2] void setBackgroundColor(int, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem18setBackgroundColorEiRK6QColor(void *this_, int column, QColor* color) {
  ((QTreeWidgetItem*)this_)->setBackgroundColor(column, *color);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:143
// [8] QBrush background(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem10backgroundEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->background(column);
return new QBrush(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:145
// [-2] void setBackground(int, const QBrush &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem13setBackgroundEiRK6QBrush(void *this_, int column, QBrush* brush) {
  ((QTreeWidgetItem*)this_)->setBackground(column, *brush);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:148
// [16] QColor textColor(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem9textColorEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->textColor(column);
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:150
// [-2] void setTextColor(int, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem12setTextColorEiRK6QColor(void *this_, int column, QColor* color) {
  ((QTreeWidgetItem*)this_)->setTextColor(column, *color);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:153
// [8] QBrush foreground(int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem10foregroundEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->foreground(column);
return new QBrush(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:155
// [-2] void setForeground(int, const QBrush &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem13setForegroundEiRK6QBrush(void *this_, int column, QBrush* brush) {
  ((QTreeWidgetItem*)this_)->setForeground(column, *brush);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:158
// [4] Qt::CheckState checkState(int)
extern "C" Q_DECL_EXPORT
Qt::CheckState C_ZNK15QTreeWidgetItem10checkStateEi(void *this_, int column) {
  return (Qt::CheckState)((QTreeWidgetItem*)this_)->checkState(column);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:160
// [-2] void setCheckState(int, Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem13setCheckStateEiN2Qt10CheckStateE(void *this_, int column, Qt::CheckState state) {
  ((QTreeWidgetItem*)this_)->setCheckState(column, state);
}

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:163
// [8] QSize sizeHint(int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem8sizeHintEi(void *this_, int column) {
  auto rv = ((QTreeWidgetItem*)this_)->sizeHint(column);
return new QSize(rv);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:165
// [-2] void setSizeHint(int, const QSize &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem11setSizeHintEiRK5QSize(void *this_, int column, QSize* size) {
  ((QTreeWidgetItem*)this_)->setSizeHint(column, *size);
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:168
// [16] QVariant data(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem4dataEii(void *this_, int column, int role) {
  auto rv = ((QTreeWidgetItem*)this_)->data(column, role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:169
// [-2] void setData(int, int, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem7setDataEiiRK8QVariant(void *this_, int column, int role, QVariant* value) {
  ((QTreeWidgetItem*)this_)->setData(column, role, *value);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:171
// [1] bool operator<(const QTreeWidgetItem &)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTreeWidgetItemltERKS_(void *this_, QTreeWidgetItem* other) {
  return (bool)((QTreeWidgetItem*)this_)->operator<(*other);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:174
// [-2] void read(QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem4readER11QDataStream(void *this_, QDataStream* in) {
  ((QTreeWidgetItem*)this_)->read(*in);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:175
// [-2] void write(QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZNK15QTreeWidgetItem5writeER11QDataStream(void *this_, QDataStream* out_) {
  ((QTreeWidgetItem*)this_)->write(*out_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:177
// [64] QTreeWidgetItem & operator=(const QTreeWidgetItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItemaSERKS_(void *this_, QTreeWidgetItem* other) {
  auto& rv = ((QTreeWidgetItem*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:179
// [8] QTreeWidgetItem * parent()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem6parentEv(void *this_) {
  return (void*)((QTreeWidgetItem*)this_)->parent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:180
// [8] QTreeWidgetItem * child(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTreeWidgetItem5childEi(void *this_, int index) {
  return (void*)((QTreeWidgetItem*)this_)->child(index);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:186
// [4] int childCount()
extern "C" Q_DECL_EXPORT
int C_ZNK15QTreeWidgetItem10childCountEv(void *this_) {
  return (int)((QTreeWidgetItem*)this_)->childCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:187
// [4] int columnCount()
extern "C" Q_DECL_EXPORT
int C_ZNK15QTreeWidgetItem11columnCountEv(void *this_) {
  return (int)((QTreeWidgetItem*)this_)->columnCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:188
// [4] int indexOfChild(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
int C_ZNK15QTreeWidgetItem12indexOfChildEPS_(void *this_, QTreeWidgetItem * child) {
  return (int)((QTreeWidgetItem*)this_)->indexOfChild(child);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:190
// [-2] void addChild(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem8addChildEPS_(void *this_, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->addChild(child);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:191
// [-2] void insertChild(int, QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem11insertChildEiPS_(void *this_, int index, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->insertChild(index, child);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:192
// [-2] void removeChild(QTreeWidgetItem *)
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem11removeChildEPS_(void *this_, QTreeWidgetItem * child) {
  ((QTreeWidgetItem*)this_)->removeChild(child);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:193
// [8] QTreeWidgetItem * takeChild(int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QTreeWidgetItem9takeChildEi(void *this_, int index) {
  return (void*)((QTreeWidgetItem*)this_)->takeChild(index);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:195
// [-2] void addChildren(const QList<QTreeWidgetItem *> &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem11addChildrenERK5QListIPS_E(void *this_, QList<QTreeWidgetItem *>* children) {
  ((QTreeWidgetItem*)this_)->addChildren(*children);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:196
// [-2] void insertChildren(int, const QList<QTreeWidgetItem *> &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem14insertChildrenEiRK5QListIPS_E(void *this_, int index, QList<QTreeWidgetItem *>* children) {
  ((QTreeWidgetItem*)this_)->insertChildren(index, *children);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtreewidget.h:197
// [8] QList<QTreeWidgetItem *> takeChildren()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
QList<QTreeWidgetItem *>* C_ZN15QTreeWidgetItem12takeChildrenEv(void *this_) {
  auto rv = ((QTreeWidgetItem*)this_)->takeChildren();
return new QList<QTreeWidgetItem *>(rv);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:199
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK15QTreeWidgetItem4typeEv(void *this_) {
  return (int)((QTreeWidgetItem*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtreewidget.h:200
// [-2] void sortChildren(int, Qt::SortOrder)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QTreeWidgetItem12sortChildrenEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTreeWidgetItem*)this_)->sortChildren(column, order);
}
#endif // QT_VERSION >= 0x040200

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
