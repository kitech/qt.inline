//  header block begin
// /usr/include/qt/QtWidgets/qtablewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtablewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableWidgetItem is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:82
// [-2] void QTableWidgetItem(int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QTableWidgetItemC2Ei(int type_) {
  return  new QTableWidgetItem(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:83
// [-2] void QTableWidgetItem(const QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QTableWidgetItemC2ERK7QStringi(QString* text, int type_) {
  return  new QTableWidgetItem(*text, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:84
// [-2] void QTableWidgetItem(const QIcon &, const QString &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QTableWidgetItemC2ERK5QIconRK7QStringi(QIcon* icon, QString* text, int type_) {
  return  new QTableWidgetItem(*icon, *text, type_);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:85
// [-2] void QTableWidgetItem(const QTableWidgetItem &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZN16QTableWidgetItemC2ERKS_(QTableWidgetItem* other) {
  return  new QTableWidgetItem(*other);
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:86
// [-2] void ~QTableWidgetItem()
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItemD2Ev(void *this_) {
  delete (QTableWidgetItem*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:88
// [8] QTableWidgetItem * clone()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem5cloneEv(void *this_) {
  return (void*)((QTableWidgetItem*)this_)->clone();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:90
// [8] QTableWidget * tableWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem11tableWidgetEv(void *this_) {
  return (void*)((QTableWidgetItem*)this_)->tableWidget();
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:92
// [4] int row()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK16QTableWidgetItem3rowEv(void *this_) {
  return (int)((QTableWidgetItem*)this_)->row();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:93
// [4] int column()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK16QTableWidgetItem6columnEv(void *this_) {
  return (int)((QTableWidgetItem*)this_)->column();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:95
// [-2] void setSelected(bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem11setSelectedEb(void *this_, bool select_) {
  ((QTableWidgetItem*)this_)->setSelected(select_);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:96
// [1] bool isSelected()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTableWidgetItem10isSelectedEv(void *this_) {
  return (bool)((QTableWidgetItem*)this_)->isSelected();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:98
// [4] Qt::ItemFlags flags()
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK16QTableWidgetItem5flagsEv(void *this_) {
  return (Qt::ItemFlags)((QTableWidgetItem*)this_)->flags();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:99
// [-2] void setFlags(Qt::ItemFlags)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem8setFlagsE6QFlagsIN2Qt8ItemFlagEE(void *this_, QFlags<Qt::ItemFlag> flags) {
  ((QTableWidgetItem*)this_)->setFlags(flags);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:101
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem4textEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->text();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:103
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem7setTextERK7QString(void *this_, QString* text) {
  ((QTableWidgetItem*)this_)->setText(*text);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:105
// [8] QIcon icon()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem4iconEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->icon();
return new QIcon(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:107
// [-2] void setIcon(const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem7setIconERK5QIcon(void *this_, QIcon* icon) {
  ((QTableWidgetItem*)this_)->setIcon(*icon);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:109
// [8] QString statusTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem9statusTipEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->statusTip();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:111
// [-2] void setStatusTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem12setStatusTipERK7QString(void *this_, QString* statusTip) {
  ((QTableWidgetItem*)this_)->setStatusTip(*statusTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:114
// [8] QString toolTip()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem7toolTipEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->toolTip();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:116
// [-2] void setToolTip(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem10setToolTipERK7QString(void *this_, QString* toolTip) {
  ((QTableWidgetItem*)this_)->setToolTip(*toolTip);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:120
// [8] QString whatsThis()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem9whatsThisEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->whatsThis();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:122
// [-2] void setWhatsThis(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem12setWhatsThisERK7QString(void *this_, QString* whatsThis) {
  ((QTableWidgetItem*)this_)->setWhatsThis(*whatsThis);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:125
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem4fontEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->font();
return new QFont(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:127
// [-2] void setFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem7setFontERK5QFont(void *this_, QFont* font) {
  ((QTableWidgetItem*)this_)->setFont(*font);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:129
// [4] int textAlignment()
extern "C" Q_DECL_EXPORT
int C_ZNK16QTableWidgetItem13textAlignmentEv(void *this_) {
  return (int)((QTableWidgetItem*)this_)->textAlignment();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:131
// [-2] void setTextAlignment(int)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem16setTextAlignmentEi(void *this_, int alignment) {
  ((QTableWidgetItem*)this_)->setTextAlignment(alignment);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:134
// [16] QColor backgroundColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem15backgroundColorEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->backgroundColor();
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:136
// [-2] void setBackgroundColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem18setBackgroundColorERK6QColor(void *this_, QColor* color) {
  ((QTableWidgetItem*)this_)->setBackgroundColor(*color);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:139
// [8] QBrush background()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem10backgroundEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->background();
return new QBrush(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:141
// [-2] void setBackground(const QBrush &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem13setBackgroundERK6QBrush(void *this_, QBrush* brush) {
  ((QTableWidgetItem*)this_)->setBackground(*brush);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:144
// [16] QColor textColor()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem9textColorEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->textColor();
return new QColor(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:146
// [-2] void setTextColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem12setTextColorERK6QColor(void *this_, QColor* color) {
  ((QTableWidgetItem*)this_)->setTextColor(*color);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:149
// [8] QBrush foreground()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem10foregroundEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->foreground();
return new QBrush(rv);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtablewidget.h:151
// [-2] void setForeground(const QBrush &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem13setForegroundERK6QBrush(void *this_, QBrush* brush) {
  ((QTableWidgetItem*)this_)->setForeground(*brush);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:154
// [4] Qt::CheckState checkState()
extern "C" Q_DECL_EXPORT
Qt::CheckState C_ZNK16QTableWidgetItem10checkStateEv(void *this_) {
  return (Qt::CheckState)((QTableWidgetItem*)this_)->checkState();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:156
// [-2] void setCheckState(Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem13setCheckStateEN2Qt10CheckStateE(void *this_, Qt::CheckState state) {
  ((QTableWidgetItem*)this_)->setCheckState(state);
}

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:159
// [8] QSize sizeHint()
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem8sizeHintEv(void *this_) {
  auto rv = ((QTableWidgetItem*)this_)->sizeHint();
return new QSize(rv);
}
#endif // QT_VERSION >= 0x040100

// Public inline Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtablewidget.h:161
// [-2] void setSizeHint(const QSize &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem11setSizeHintERK5QSize(void *this_, QSize* size) {
  ((QTableWidgetItem*)this_)->setSizeHint(*size);
}
#endif // QT_VERSION >= 0x040100

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:164
// [16] QVariant data(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTableWidgetItem4dataEi(void *this_, int role) {
  auto rv = ((QTableWidgetItem*)this_)->data(role);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:165
// [-2] void setData(int, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem7setDataEiRK8QVariant(void *this_, int role, QVariant* value) {
  ((QTableWidgetItem*)this_)->setData(role, *value);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:167
// [1] bool operator<(const QTableWidgetItem &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTableWidgetItemltERKS_(void *this_, QTableWidgetItem* other) {
  return (bool)((QTableWidgetItem*)this_)->operator<(*other);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:170
// [-2] void read(QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTableWidgetItem4readER11QDataStream(void *this_, QDataStream* in) {
  ((QTableWidgetItem*)this_)->read(*in);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:171
// [-2] void write(QDataStream &)
extern "C" Q_DECL_EXPORT
void C_ZNK16QTableWidgetItem5writeER11QDataStream(void *this_, QDataStream* out_) {
  ((QTableWidgetItem*)this_)->write(*out_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:173
// [48] QTableWidgetItem & operator=(const QTableWidgetItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QTableWidgetItemaSERKS_(void *this_, QTableWidgetItem* other) {
  auto& rv = ((QTableWidgetItem*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtablewidget.h:175
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK16QTableWidgetItem4typeEv(void *this_) {
  return (int)((QTableWidgetItem*)this_)->type();
}

//  main block end
